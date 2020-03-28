#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LBRACK = 1,
  anon_sym_COLON = 2,
  anon_sym_support = 3,
  anon_sym_RBRACK = 4,
  anon_sym_SEMI = 5,
  anon_sym_DASH_GT = 6,
  anon_sym_EQ = 7,
  anon_sym_PLUS_EQ = 8,
  anon_sym_SLASH = 9,
  sym_identifier_simple = 10,
  anon_sym_LT_DASH_DASH = 11,
  aux_sym_comment_token1 = 12,
  sym__comment_block = 13,
  sym_source_file = 14,
  sym_value_inferrer = 15,
  sym_inference_pair = 16,
  sym_assignment_slot = 17,
  sym_atomic_assignment_slot = 18,
  sym_aggregate_assignment_slot = 19,
  sym_identifier = 20,
  sym_comment = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_value_inferrer_repeat1 = 23,
  aux_sym_inference_pair_repeat1 = 24,
  aux_sym_identifier_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_support] = "support",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH] = "/",
  [sym_identifier_simple] = "identifier_simple",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__comment_block] = "_comment_block",
  [sym_source_file] = "source_file",
  [sym_value_inferrer] = "value_inferrer",
  [sym_inference_pair] = "inference_pair",
  [sym_assignment_slot] = "assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_value_inferrer_repeat1] = "value_inferrer_repeat1",
  [aux_sym_inference_pair_repeat1] = "inference_pair_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_support] = anon_sym_support,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_identifier_simple] = sym_identifier_simple,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__comment_block] = sym__comment_block,
  [sym_source_file] = sym_source_file,
  [sym_value_inferrer] = sym_value_inferrer,
  [sym_inference_pair] = sym_inference_pair,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_value_inferrer_repeat1] = aux_sym_value_inferrer_repeat1,
  [aux_sym_inference_pair_repeat1] = aux_sym_inference_pair_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_support] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier_simple] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__comment_block] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_value_inferrer] = {
    .visible = true,
    .named = true,
  },
  [sym_inference_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_inferrer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inference_pair_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_support);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_support);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 'o') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 'p') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 'r') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier_simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 4, .external_lex_state = 1},
  [3] = {.lex_state = 4, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 4, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 0, .external_lex_state = 1},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 4, .external_lex_state = 1},
  [30] = {.lex_state = 4, .external_lex_state = 1},
  [31] = {.lex_state = 4, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 4, .external_lex_state = 1},
  [34] = {.lex_state = 3, .external_lex_state = 1},
  [35] = {.lex_state = 4, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {-1},
  [39] = {-1},
  [40] = {.lex_state = 32},
};

enum {
  ts_external_token__comment_block = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__comment_block] = sym__comment_block,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__comment_block] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_support] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_identifier_simple] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_value_inferrer] = STATE(17),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      sym_identifier_simple,
    STATE(2), 1,
      sym_comment,
    STATE(19), 1,
      sym_assignment_slot,
    STATE(25), 1,
      sym_identifier,
    STATE(24), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [23] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      sym_identifier_simple,
    STATE(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_assignment_slot,
    STATE(25), 1,
      sym_identifier,
    STATE(24), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [46] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    STATE(4), 2,
      sym_comment,
      aux_sym_identifier_repeat1,
    ACTIONS(13), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [65] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(20), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      aux_sym_identifier_repeat1,
    STATE(5), 1,
      sym_comment,
    ACTIONS(18), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [86] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(20), 1,
      anon_sym_SLASH,
    STATE(5), 1,
      aux_sym_identifier_repeat1,
    STATE(6), 1,
      sym_comment,
    ACTIONS(22), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [107] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_value_inferrer_repeat1,
    STATE(23), 1,
      sym_inference_pair,
  [129] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(17), 1,
      sym_value_inferrer,
  [151] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_value_inferrer,
    STATE(9), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [171] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(10), 1,
      sym_comment,
    ACTIONS(13), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH,
  [187] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_value_inferrer_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(23), 1,
      sym_inference_pair,
  [209] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_inference_pair,
    STATE(12), 2,
      sym_comment,
      aux_sym_value_inferrer_repeat1,
  [229] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(42), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_DASH_GT,
    STATE(13), 2,
      sym_comment,
      aux_sym_inference_pair_repeat1,
  [246] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_DASH_GT,
    STATE(13), 1,
      aux_sym_inference_pair_repeat1,
    STATE(14), 1,
      sym_comment,
  [265] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_DASH_GT,
    STATE(14), 1,
      aux_sym_inference_pair_repeat1,
    STATE(15), 1,
      sym_comment,
  [284] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(16), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(17), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [312] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(18), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [326] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(19), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [340] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [354] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      sym_identifier_simple,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      sym_identifier,
  [370] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(22), 1,
      sym_comment,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [384] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(23), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [398] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(24), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [412] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_PLUS_EQ,
    STATE(25), 1,
      sym_comment,
  [428] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(26), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [442] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(27), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [456] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_comment,
  [469] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(77), 1,
      sym_identifier_simple,
    STATE(29), 1,
      sym_comment,
  [482] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      sym_identifier_simple,
    STATE(30), 1,
      sym_comment,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(81), 1,
      sym_identifier_simple,
    STATE(31), 1,
      sym_comment,
  [508] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_comment,
  [521] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(85), 1,
      sym_identifier_simple,
    STATE(33), 1,
      sym_comment,
  [534] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(87), 1,
      anon_sym_support,
    STATE(34), 1,
      sym_comment,
  [547] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(89), 1,
      sym_identifier_simple,
    STATE(35), 1,
      sym_comment,
  [560] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [573] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_comment,
  [586] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [590] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [594] = 1,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 298,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 384,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 412,
  [SMALL_STATE(26)] = 428,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 469,
  [SMALL_STATE(30)] = 482,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 508,
  [SMALL_STATE(33)] = 521,
  [SMALL_STATE(34)] = 534,
  [SMALL_STATE(35)] = 547,
  [SMALL_STATE(36)] = 560,
  [SMALL_STATE(37)] = 573,
  [SMALL_STATE(38)] = 586,
  [SMALL_STATE(39)] = 590,
  [SMALL_STATE(40)] = 594,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(40),
  [5] = {.count = 1, .reusable = true}, SHIFT(38),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(21),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [15] = {.count = 2, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(35),
  [18] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [20] = {.count = 1, .reusable = true}, SHIFT(35),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [24] = {.count = 1, .reusable = true}, SHIFT(3),
  [26] = {.count = 1, .reusable = true}, SHIFT(26),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [30] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 2), SHIFT_REPEAT(3),
  [40] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 2),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inference_pair_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inference_pair_repeat1, 2),
  [47] = {.count = 1, .reusable = true}, SHIFT(2),
  [49] = {.count = 1, .reusable = true}, SHIFT(33),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_inference_pair, 6),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_value_inferrer, 5),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(30),
  [69] = {.count = 1, .reusable = true}, SHIFT(31),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_value_inferrer, 6),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_inference_pair, 5),
  [75] = {.count = 1, .reusable = true}, SHIFT(34),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, SHIFT(18),
  [81] = {.count = 1, .reusable = true}, SHIFT(16),
  [83] = {.count = 1, .reusable = true}, SHIFT(27),
  [85] = {.count = 1, .reusable = true}, SHIFT(37),
  [87] = {.count = 1, .reusable = true}, SHIFT(11),
  [89] = {.count = 1, .reusable = true}, SHIFT(10),
  [91] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [93] = {.count = 1, .reusable = true}, SHIFT(20),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_valueinference_external_scanner_create(void);
void tree_sitter_valueinference_external_scanner_destroy(void *);
bool tree_sitter_valueinference_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_valueinference_external_scanner_serialize(void *, char *);
void tree_sitter_valueinference_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_valueinference(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_valueinference_external_scanner_create,
      tree_sitter_valueinference_external_scanner_destroy,
      tree_sitter_valueinference_external_scanner_scan,
      tree_sitter_valueinference_external_scanner_serialize,
      tree_sitter_valueinference_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
