#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_LBRACK = 1,
  anon_sym_COLON = 2,
  anon_sym_support = 3,
  anon_sym_comply = 4,
  anon_sym_RBRACK = 5,
  anon_sym_SEMI = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_EQ = 8,
  anon_sym_PLUS_EQ = 9,
  anon_sym_SLASH = 10,
  sym_slot_identifier = 11,
  anon_sym_LT_DASH_DASH = 12,
  aux_sym_comment_token1 = 13,
  sym__comment_block = 14,
  sym_source_file = 15,
  sym_value_inferrer = 16,
  sym_inference_pair = 17,
  sym_assignment_slot = 18,
  sym_atomic_assignment_slot = 19,
  sym_aggregate_assignment_slot = 20,
  sym_slot_reference = 21,
  sym_slot_value = 22,
  sym_comment = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_value_inferrer_repeat1 = 25,
  aux_sym_inference_pair_repeat1 = 26,
  aux_sym_slot_reference_repeat1 = 27,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_support] = "support",
  [anon_sym_comply] = "comply",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH] = "/",
  [sym_slot_identifier] = "slot_identifier",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__comment_block] = "_comment_block",
  [sym_source_file] = "source_file",
  [sym_value_inferrer] = "value_inferrer",
  [sym_inference_pair] = "inference_pair",
  [sym_assignment_slot] = "assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_slot_reference] = "slot_reference",
  [sym_slot_value] = "slot_value",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_value_inferrer_repeat1] = "value_inferrer_repeat1",
  [aux_sym_inference_pair_repeat1] = "inference_pair_repeat1",
  [aux_sym_slot_reference_repeat1] = "slot_reference_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_support] = anon_sym_support,
  [anon_sym_comply] = anon_sym_comply,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_slot_identifier] = sym_slot_identifier,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__comment_block] = sym__comment_block,
  [sym_source_file] = sym_source_file,
  [sym_value_inferrer] = sym_value_inferrer,
  [sym_inference_pair] = sym_inference_pair,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_slot_reference] = sym_slot_reference,
  [sym_slot_value] = sym_slot_value,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_value_inferrer_repeat1] = aux_sym_value_inferrer_repeat1,
  [aux_sym_inference_pair_repeat1] = aux_sym_inference_pair_repeat1,
  [aux_sym_slot_reference_repeat1] = aux_sym_slot_reference_repeat1,
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
  [anon_sym_comply] = {
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
  [sym_slot_identifier] = {
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
  [sym_slot_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_value] = {
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
  [aux_sym_slot_reference_repeat1] = {
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
      if (eof) ADVANCE(25);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          (lookahead < ',' || '>' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          (lookahead < '.' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_support);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_support);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_comply);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_comply);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '=' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'm') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'y') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 4, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 4, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 4, .external_lex_state = 1},
  [18] = {.lex_state = 4, .external_lex_state = 1},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 1, .external_lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 1},
  [28] = {.lex_state = 4, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 1, .external_lex_state = 1},
  [31] = {.lex_state = 4, .external_lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 4, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 0, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 4, .external_lex_state = 1},
  [39] = {.lex_state = 52},
  [40] = {-1},
  [41] = {-1},
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
    [anon_sym_comply] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_slot_identifier] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym_value_inferrer] = STATE(29),
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
      sym_slot_identifier,
    STATE(2), 1,
      sym_comment,
    STATE(24), 1,
      sym_slot_reference,
    STATE(32), 1,
      sym_assignment_slot,
    STATE(23), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [23] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(13), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [44] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_SLASH,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(17), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [65] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      sym_slot_identifier,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      sym_assignment_slot,
    STATE(24), 1,
      sym_slot_reference,
    STATE(23), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [88] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(21), 1,
      anon_sym_SLASH,
    STATE(6), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(19), 3,
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
    STATE(11), 1,
      aux_sym_value_inferrer_repeat1,
    STATE(20), 1,
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
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(29), 1,
      sym_value_inferrer,
  [151] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_inference_pair,
    STATE(9), 2,
      sym_comment,
      aux_sym_value_inferrer_repeat1,
  [171] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_value_inferrer,
    STATE(10), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [191] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_value_inferrer_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym_inference_pair,
  [213] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(12), 1,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH,
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
  [246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(14), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [261] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(51), 1,
      anon_sym_DASH_GT,
    STATE(13), 1,
      aux_sym_inference_pair_repeat1,
    STATE(15), 1,
      sym_comment,
  [280] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(49), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      anon_sym_DASH_GT,
    STATE(15), 1,
      aux_sym_inference_pair_repeat1,
    STATE(16), 1,
      sym_comment,
  [299] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(55), 1,
      sym_slot_identifier,
    STATE(17), 1,
      sym_comment,
    STATE(27), 1,
      sym_slot_value,
  [315] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(55), 1,
      sym_slot_identifier,
    STATE(18), 1,
      sym_comment,
    STATE(37), 1,
      sym_slot_value,
  [331] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(19), 1,
      sym_comment,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [345] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [359] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(21), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [373] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(22), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [387] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(23), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [401] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(67), 1,
      anon_sym_EQ,
    ACTIONS(69), 1,
      anon_sym_PLUS_EQ,
    STATE(24), 1,
      sym_comment,
  [417] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(25), 1,
      sym_comment,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [431] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(26), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [445] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(27), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [459] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(55), 1,
      sym_slot_identifier,
    STATE(28), 1,
      sym_comment,
    STATE(35), 1,
      sym_slot_value,
  [475] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(29), 1,
      sym_comment,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [489] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(30), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_support,
      anon_sym_comply,
  [503] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(55), 1,
      sym_slot_identifier,
    STATE(26), 1,
      sym_slot_value,
    STATE(31), 1,
      sym_comment,
  [519] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(32), 1,
      sym_comment,
    ACTIONS(45), 2,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
  [533] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(11), 1,
      sym_slot_identifier,
    STATE(33), 1,
      sym_comment,
    STATE(36), 1,
      sym_slot_reference,
  [549] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_comment,
  [575] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(85), 1,
      anon_sym_COLON,
    STATE(36), 1,
      sym_comment,
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_comment,
  [601] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(89), 1,
      sym_slot_identifier,
    STATE(38), 1,
      sym_comment,
  [614] = 1,
    ACTIONS(91), 1,
      aux_sym_comment_token1,
  [618] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [622] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 107,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 331,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 401,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 431,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 489,
  [SMALL_STATE(31)] = 503,
  [SMALL_STATE(32)] = 519,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 549,
  [SMALL_STATE(35)] = 562,
  [SMALL_STATE(36)] = 575,
  [SMALL_STATE(37)] = 588,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 614,
  [SMALL_STATE(40)] = 618,
  [SMALL_STATE(41)] = 622,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(39),
  [5] = {.count = 1, .reusable = true}, SHIFT(40),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(33),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [15] = {.count = 1, .reusable = true}, SHIFT(38),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [21] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(38),
  [24] = {.count = 1, .reusable = true}, SHIFT(5),
  [26] = {.count = 1, .reusable = true}, SHIFT(19),
  [28] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 2),
  [35] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [40] = {.count = 1, .reusable = true}, SHIFT(25),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inference_pair_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inference_pair_repeat1, 2),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(2),
  [51] = {.count = 1, .reusable = true}, SHIFT(18),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(14),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_value_inferrer, 5),
  [59] = {.count = 1, .reusable = true}, REDUCE(aux_sym_value_inferrer_repeat1, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_inference_pair, 6),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_inference_pair, 5),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(17),
  [69] = {.count = 1, .reusable = true}, SHIFT(31),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_value_inferrer, 6),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(7),
  [81] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true}, SHIFT(22),
  [85] = {.count = 1, .reusable = true}, SHIFT(30),
  [87] = {.count = 1, .reusable = true}, SHIFT(21),
  [89] = {.count = 1, .reusable = true}, SHIFT(12),
  [91] = {.count = 1, .reusable = true}, SHIFT(41),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
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
