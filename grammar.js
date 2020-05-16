//https://regex101.com/r/dU5fO8/73
const alpha = /[^:\s0-9;.,`"'|<=>/\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const alpha_numeric = /[^+:\s;.,`"'|<=>/\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const string_regex = /[^;`|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/


const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
};


module.exports = grammar({
    name: 'valueinference',

    extras: $ => [
      $.comment,
      /[\s\uFEFF\u2060\u200B\u00A0]/
    ],
  
    rules: {
      source_file: $ => repeat(choice($.support_value_inferrer, $.comply_value_inferrer)),
      
      support_value_inferrer: $ => seq(
        "[", $.slot_reference, ":", "support", repeat($.inference_pair), "]"
      ),

      comply_value_inferrer: $ => seq(
        "[", $.slot_reference, ":", "comply", repeat($.inference_pair), "]"
      ),

      // value_inferrer: $ => seq(
      //   "[", $.slot_reference, ":", choice("support","comply"), repeat($.inference_pair), "]"
      // ),

      inference_pair: $ => seq(
        "[", $.assignment_slot, repeat(seq(";" ,$.assignment_slot)), "->", $.slot_value, "]"
      ),

      assignment_slot: $ => choice(
        $.atomic_assignment_slot, $.aggregate_assignment_slot
      ),
      
      atomic_assignment_slot: $ => seq(
        $.slot_reference, "=", $.slot_value
      ),
      aggregate_assignment_slot: $ => seq(
        $.slot_reference, "+=" , $.slot_value
      ),

      slot_reference: $ => seq(
        $.slot_identifier, repeat(seq("/", $.slot_identifier))
      ),

      slot_value: $ => seq(
        $.slot_identifier
      ),

      //identifier_simple: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,
      slot_identifier: $ => {
        return token(seq(alpha, repeat(alpha_numeric)))
      },

      comment: $ => prec(PREC.COMMENT, choice(
        seq('<--', /.*/), 
        $._comment_block
      )),

      comment_line: $ => 
        seq('<--', /.*/),
    },

    externals: $ => [
      $._comment_block
    ]
    
  });