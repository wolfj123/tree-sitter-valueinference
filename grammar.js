//https://regex101.com/r/dU5fO8/73
const alpha = /[^:\s0-9;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const alpha_numeric = /[^+:\s;.,`"'|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
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
      source_file: $ => repeat($.value_inferrer),
      
      value_inferrer: $ => seq(
        "[", $.identifier, ":", "support", repeat($.inference_pair), "]"
      ),

      inference_pair: $ => seq(
        "[", $.assignment_slot, repeat(seq(";" ,$.assignment_slot)), "->", $.identifier_simple, "]"
      ),

      assignment_slot: $ => choice(
        $.atomic_assignment_slot, $.aggregate_assignment_slot
      ),
      
      atomic_assignment_slot: $ => seq(
        $.identifier, "=", $.identifier_simple
      ),
      aggregate_assignment_slot: $ => seq(
       $.identifier, "+=" , $.identifier_simple
      ),

      identifier: $ => seq(
        $.identifier_simple, repeat(seq("/", $.identifier_simple))
      ),

      identifier_simple: $ => /[_a-zA-Z][_a-zA-Z0-9]*/,

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