#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 286
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_ = 1,
  sym__space = 2,
  sym__comment = 3,
  anon_sym_COMMA = 4,
  sym_readonly = 5,
  anon_sym_private = 6,
  anon_sym_protected = 7,
  anon_sym_publish = 8,
  anon_sym_end = 9,
  anon_sym_module = 10,
  anon_sym_function = 11,
  anon_sym_method = 12,
  anon_sym_if = 13,
  anon_sym_while = 14,
  anon_sym_switch = 15,
  anon_sym_case = 16,
  anon_sym_default = 17,
  anon_sym_DOT = 18,
  anon_sym_enum = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_returns = 22,
  anon_sym_i8 = 23,
  anon_sym_i16 = 24,
  anon_sym_i32 = 25,
  anon_sym_i64 = 26,
  anon_sym_u8 = 27,
  anon_sym_u16 = 28,
  anon_sym_u32 = 29,
  anon_sym_u64 = 30,
  anon_sym_f32 = 31,
  anon_sym_f64 = 32,
  anon_sym_s8 = 33,
  anon_sym_s16 = 34,
  anon_sym_s32 = 35,
  anon_sym_STAR = 36,
  anon_sym_LBRACK = 37,
  anon_sym_RBRACK = 38,
  sym_is_declare = 39,
  sym_is_external = 40,
  anon_sym_goto = 41,
  anon_sym_section = 42,
  anon_sym_COLON_EQ = 43,
  anon_sym_return = 44,
  anon_sym_DASH = 45,
  anon_sym_AMP = 46,
  anon_sym_BANG = 47,
  anon_sym_TILDE = 48,
  anon_sym_PLUS = 49,
  anon_sym_SLASH = 50,
  anon_sym_PERCENT = 51,
  anon_sym_PIPE = 52,
  anon_sym_CARET = 53,
  anon_sym_GT = 54,
  anon_sym_LT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_EQ_EQ = 59,
  anon_sym_AMP_AMP = 60,
  anon_sym_PIPE_PIPE = 61,
  anon_sym_GT_GT = 62,
  anon_sym_LT_LT = 63,
  anon_sym_PLUS_EQ = 64,
  anon_sym_DASH_EQ = 65,
  anon_sym_STAR_EQ = 66,
  anon_sym_SLASH_EQ = 67,
  anon_sym_PERCENT_EQ = 68,
  anon_sym_AMP_EQ = 69,
  anon_sym_PIPE_EQ = 70,
  anon_sym_CARET_EQ = 71,
  anon_sym_GT_GT_EQ = 72,
  anon_sym_LT_LT_EQ = 73,
  anon_sym_PLUS_PLUS = 74,
  anon_sym_DASH_DASH = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  sym_null = 78,
  sym_identifier = 79,
  anon_sym_DQUOTE = 80,
  aux_sym_string_token1 = 81,
  anon_sym_SQUOTE = 82,
  aux_sym_character_token1 = 83,
  anon_sym_BSLASH_BSLASH = 84,
  anon_sym_BSLASH0 = 85,
  anon_sym_BSLASHa = 86,
  anon_sym_BSLASHb = 87,
  anon_sym_BSLASHf = 88,
  anon_sym_BSLASHn = 89,
  anon_sym_BSLASHr = 90,
  anon_sym_BSLASHt = 91,
  anon_sym_BSLASHv = 92,
  sym_oct = 93,
  sym_integer = 94,
  sym_long = 95,
  sym_float = 96,
  sym_double = 97,
  sym_hex = 98,
  sym_binary = 99,
  sym_source_file = 100,
  sym_sentences = 101,
  sym_sentence = 102,
  sym__comma_list_variables = 103,
  sym__comma_list_collection_or_value = 104,
  sym__comma_list_types = 105,
  sym_access_control = 106,
  sym_end_module = 107,
  sym_end_function = 108,
  sym_end_method = 109,
  sym_end_if = 110,
  sym_end_while = 111,
  sym_end_switch = 112,
  sym_end_case = 113,
  sym_end_default = 114,
  sym__end_function = 115,
  sym_module_definition = 116,
  sym__definitions = 117,
  sym_compound_macro_block = 118,
  sym_end_compound_macro = 119,
  sym_compound_macro = 120,
  sym__enum_element = 121,
  sym_enum_definition = 122,
  sym_is_function = 123,
  sym_is_method = 124,
  sym_function_signature = 125,
  sym_function_definition = 126,
  sym_variable_definition = 127,
  sym_parameter_list = 128,
  sym_return_list = 129,
  sym_type = 130,
  sym__base_type = 131,
  sym_primitive_type = 132,
  sym_pointer = 133,
  sym_array = 134,
  sym_declaration_definition = 135,
  sym__statement = 136,
  sym__control_flow_statement = 137,
  sym_goto_statement = 138,
  sym_section_statement = 139,
  sym_single_line_if_statement = 140,
  sym_if_statement = 141,
  sym_while_statement = 142,
  sym_switch_statement = 143,
  sym_case_statement = 144,
  sym_default_statement = 145,
  sym__variable_statement = 146,
  sym_static_assignment = 147,
  sym_expression_statement = 148,
  sym_return_statement = 149,
  sym_group_expression = 150,
  sym_assignment_expression = 151,
  sym_unary_op = 152,
  sym_binary_op = 153,
  sym_assignment_op = 154,
  sym_assignment_post_op = 155,
  sym__assignment_or_collection_or_value = 156,
  sym__collection_or_value = 157,
  sym_collection = 158,
  sym__value = 159,
  sym__literal = 160,
  sym_string = 161,
  sym_character = 162,
  sym__escape_sequence = 163,
  sym__number = 164,
  aux_sym_source_file_repeat1 = 165,
  aux_sym_sentences_repeat1 = 166,
  aux_sym__comma_list_variables_repeat1 = 167,
  aux_sym__comma_list_collection_or_value_repeat1 = 168,
  aux_sym__comma_list_types_repeat1 = 169,
  aux_sym_module_definition_repeat1 = 170,
  aux_sym_compound_macro_block_repeat1 = 171,
  aux_sym_compound_macro_repeat1 = 172,
  aux_sym_enum_definition_repeat1 = 173,
  aux_sym_type_repeat1 = 174,
  aux_sym_type_repeat2 = 175,
  aux_sym_switch_statement_repeat1 = 176,
  aux_sym_string_repeat1 = 177,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "​",
  [sym__space] = "_space",
  [sym__comment] = "_comment",
  [anon_sym_COMMA] = ",",
  [sym_readonly] = "readonly",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_publish] = "publish",
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_returns] = "returns",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_s8] = "s8",
  [anon_sym_s16] = "s16",
  [anon_sym_s32] = "s32",
  [anon_sym_STAR] = "*",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_is_declare] = "is_declare",
  [sym_is_external] = "is_external",
  [anon_sym_goto] = "goto",
  [anon_sym_section] = "section",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_return] = "return",
  [anon_sym_DASH] = "-",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_null] = "null",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_character_token1] = "character_token1",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH0] = "\\0",
  [anon_sym_BSLASHa] = "\\a",
  [anon_sym_BSLASHb] = "\\b",
  [anon_sym_BSLASHf] = "\\f",
  [anon_sym_BSLASHn] = "\\n",
  [anon_sym_BSLASHr] = "\\r",
  [anon_sym_BSLASHt] = "\\t",
  [anon_sym_BSLASHv] = "\\v",
  [sym_oct] = "oct",
  [sym_integer] = "integer",
  [sym_long] = "long",
  [sym_float] = "float",
  [sym_double] = "double",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [sym_source_file] = "source_file",
  [sym_sentences] = "sentences",
  [sym_sentence] = "sentence",
  [sym__comma_list_variables] = "_comma_list_variables",
  [sym__comma_list_collection_or_value] = "_comma_list_collection_or_value",
  [sym__comma_list_types] = "_comma_list_types",
  [sym_access_control] = "access_control",
  [sym_end_module] = "end_module",
  [sym_end_function] = "end_function",
  [sym_end_method] = "end_method",
  [sym_end_if] = "end_if",
  [sym_end_while] = "end_while",
  [sym_end_switch] = "end_switch",
  [sym_end_case] = "end_case",
  [sym_end_default] = "end_default",
  [sym__end_function] = "_end_function",
  [sym_module_definition] = "module_definition",
  [sym__definitions] = "_definitions",
  [sym_compound_macro_block] = "compound_macro_block",
  [sym_end_compound_macro] = "end_compound_macro",
  [sym_compound_macro] = "compound_macro",
  [sym__enum_element] = "_enum_element",
  [sym_enum_definition] = "enum_definition",
  [sym_is_function] = "is_function",
  [sym_is_method] = "is_method",
  [sym_function_signature] = "function_signature",
  [sym_function_definition] = "function_definition",
  [sym_variable_definition] = "variable_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_return_list] = "return_list",
  [sym_type] = "type",
  [sym__base_type] = "_base_type",
  [sym_primitive_type] = "primitive_type",
  [sym_pointer] = "pointer",
  [sym_array] = "array",
  [sym_declaration_definition] = "declaration_definition",
  [sym__statement] = "_statement",
  [sym__control_flow_statement] = "_control_flow_statement",
  [sym_goto_statement] = "goto_statement",
  [sym_section_statement] = "section_statement",
  [sym_single_line_if_statement] = "single_line_if_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym_default_statement] = "default_statement",
  [sym__variable_statement] = "_variable_statement",
  [sym_static_assignment] = "static_assignment",
  [sym_expression_statement] = "expression_statement",
  [sym_return_statement] = "return_statement",
  [sym_group_expression] = "group_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_assignment_op] = "assignment_op",
  [sym_assignment_post_op] = "assignment_post_op",
  [sym__assignment_or_collection_or_value] = "_assignment_or_collection_or_value",
  [sym__collection_or_value] = "_collection_or_value",
  [sym_collection] = "collection",
  [sym__value] = "_value",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_character] = "character",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sentences_repeat1] = "sentences_repeat1",
  [aux_sym__comma_list_variables_repeat1] = "_comma_list_variables_repeat1",
  [aux_sym__comma_list_collection_or_value_repeat1] = "_comma_list_collection_or_value_repeat1",
  [aux_sym__comma_list_types_repeat1] = "_comma_list_types_repeat1",
  [aux_sym_module_definition_repeat1] = "module_definition_repeat1",
  [aux_sym_compound_macro_block_repeat1] = "compound_macro_block_repeat1",
  [aux_sym_compound_macro_repeat1] = "compound_macro_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_readonly] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_publish] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_is_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_is_external] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHv] = {
    .visible = true,
    .named = false,
  },
  [sym_oct] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_long] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sentences] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym__comma_list_variables] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_collection_or_value] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_types] = {
    .visible = false,
    .named = true,
  },
  [sym_access_control] = {
    .visible = true,
    .named = true,
  },
  [sym_end_module] = {
    .visible = true,
    .named = true,
  },
  [sym_end_function] = {
    .visible = true,
    .named = true,
  },
  [sym_end_method] = {
    .visible = true,
    .named = true,
  },
  [sym_end_if] = {
    .visible = true,
    .named = true,
  },
  [sym_end_while] = {
    .visible = true,
    .named = true,
  },
  [sym_end_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_end_case] = {
    .visible = true,
    .named = true,
  },
  [sym_end_default] = {
    .visible = true,
    .named = true,
  },
  [sym__end_function] = {
    .visible = false,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__definitions] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_end_compound_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__enum_element] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_function] = {
    .visible = true,
    .named = true,
  },
  [sym_is_method] = {
    .visible = true,
    .named = true,
  },
  [sym_function_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_return_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__base_type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__control_flow_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_goto_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_section_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_default_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_static_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_group_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_op] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_post_op] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_or_collection_or_value] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_or_value] = {
    .visible = false,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sentences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_collection_or_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_macro_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'd')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead == 'f')
        ADVANCE(27);
      if (lookahead == 'g')
        ADVANCE(28);
      if (lookahead == 'i')
        ADVANCE(29);
      if (lookahead == 'm')
        ADVANCE(30);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == 'p')
        ADVANCE(32);
      if (lookahead == 'r')
        ADVANCE(33);
      if (lookahead == 's')
        ADVANCE(34);
      if (lookahead == 'u')
        ADVANCE(35);
      if (lookahead == 'w')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '~')
        ADVANCE(40);
      if (lookahead == 8203)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'x')
        ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(63);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '0')
        ADVANCE(70);
      if (lookahead == '\\')
        ADVANCE(71);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'b')
        ADVANCE(73);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 'r')
        ADVANCE(76);
      if (lookahead == 't')
        ADVANCE(77);
      if (lookahead == 'v')
        ADVANCE(78);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(79);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(81);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'n')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(83);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '3')
        ADVANCE(84);
      if (lookahead == '6')
        ADVANCE(85);
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'o')
        ADVANCE(87);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(88);
      if (lookahead == '3')
        ADVANCE(89);
      if (lookahead == '6')
        ADVANCE(90);
      if (lookahead == '8')
        ADVANCE(91);
      if (lookahead == 'f')
        ADVANCE(92);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'u')
        ADVANCE(95);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'r')
        ADVANCE(96);
      if (lookahead == 'u')
        ADVANCE(97);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(99);
      if (lookahead == '3')
        ADVANCE(100);
      if (lookahead == '8')
        ADVANCE(101);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'w')
        ADVANCE(103);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(104);
      if (lookahead == '3')
        ADVANCE(105);
      if (lookahead == '6')
        ADVANCE(106);
      if (lookahead == '8')
        ADVANCE(107);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'h')
        ADVANCE(108);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead == '|')
        ADVANCE(110);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == ')')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 54:
      if (lookahead == '+')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(116);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(117);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 80:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'd')
        ADVANCE(122);
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == '2')
        ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == '4')
        ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == '6')
        ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == '2')
        ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == '4')
        ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 93:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'd')
        ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'l')
        ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'i')
        ADVANCE(135);
      if (lookahead == 'o')
        ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'b')
        ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == '6')
        ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == '2')
        ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 102:
      if (lookahead == 'c')
        ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == 'i')
        ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == '6')
        ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == '2')
        ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == '4')
        ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 111:
      if (lookahead == ')')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 113:
      if (lookahead == ')')
        ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == '+')
        ADVANCE(114);
      if (lookahead == '-')
        ADVANCE(149);
      if (lookahead != 0)
        ADVANCE(54);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'a')
        ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 123:
      if (lookahead == 'm')
        ADVANCE(153);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 127:
      if (lookahead == 'c')
        ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 132:
      if (lookahead == 'h')
        ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'l')
        ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'v')
        ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'd')
        ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 147:
      if (lookahead == 'l')
        ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 151:
      if (lookahead == 'a')
        ADVANCE(168);
      END_STATE();
    case 152:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 154:
      if (lookahead == 'r')
        ADVANCE(170);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 160:
      if (lookahead == 'a')
        ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'o')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'c')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'r')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'c')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 's')
        ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'n')
        ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'o')
        ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'h')
        ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'a')
        ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'o')
        ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 188:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 'h')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'l')
        ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 197:
      if (lookahead == 'l')
        ADVANCE(204);
      END_STATE();
    case 198:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 202:
      if (lookahead == 'y')
        ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 206:
      if (lookahead == 'd')
        ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 209:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == 'm')
        ADVANCE(212);
      if (lookahead == 8203)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 210:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(213);
      END_STATE();
    case 211:
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 212:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 214:
      if (lookahead == '(')
        ADVANCE(215);
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 221:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(232);
      if (lookahead == 'x')
        ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(234);
      if (lookahead == '6')
        ADVANCE(235);
      if (lookahead == 'u')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(237);
      if (lookahead == '3')
        ADVANCE(238);
      if (lookahead == '6')
        ADVANCE(239);
      if (lookahead == '8')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(242);
      if (lookahead == 'u')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(245);
      if (lookahead == '3')
        ADVANCE(246);
      if (lookahead == '8')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(248);
      if (lookahead == '3')
        ADVANCE(249);
      if (lookahead == '6')
        ADVANCE(250);
      if (lookahead == '8')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead == 'u')
        ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(263);
      if (lookahead == 'o')
        ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_f32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_f64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_is_declare);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_publish);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_is_external);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_readonly);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 309:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '(' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 310:
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 311:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 312:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(234);
      if (lookahead == '6')
        ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 314:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(315);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 'g')
        ADVANCE(316);
      if (lookahead == 'i')
        ADVANCE(317);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b')
        ADVANCE(59);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead == 'x')
        ADVANCE(61);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(63);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(237);
      if (lookahead == '3')
        ADVANCE(238);
      if (lookahead == '6')
        ADVANCE(239);
      if (lookahead == '8')
        ADVANCE(240);
      if (lookahead == 'f')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(245);
      if (lookahead == '3')
        ADVANCE(246);
      if (lookahead == '8')
        ADVANCE(247);
      if (lookahead == 'e')
        ADVANCE(326);
      if (lookahead == 'w')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 349:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(315);
      if (lookahead == 'e')
        ADVANCE(350);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'g')
        ADVANCE(316);
      if (lookahead == 'i')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 352:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 353:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(354);
      END_STATE();
    case 355:
      if (lookahead == '(')
        ADVANCE(215);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == 'r')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 356:
      if (lookahead == 'e')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 't')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'u')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'r')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'n')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 's')
        ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 363:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 364:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(315);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 366:
      if (lookahead == '!')
        ADVANCE(367);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(368);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == '-')
        ADVANCE(369);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(315);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(213);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 371:
      if (lookahead == '%')
        ADVANCE(372);
      if (lookahead == '&')
        ADVANCE(373);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(376);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '<')
        ADVANCE(377);
      if (lookahead == '>')
        ADVANCE(378);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(379);
      if (lookahead == '|')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '\\' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(218);
      END_STATE();
    case 372:
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 374:
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 375:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(219);
      if (lookahead == '=')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(384);
      if (lookahead == '/')
        ADVANCE(385);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(44);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(213);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 386:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(387);
      if (lookahead == '/')
        ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(390);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(54);
      if (lookahead == '+')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(390);
      if (lookahead == '"')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(54);
      if (lookahead == '+')
        ADVANCE(394);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(391);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(390);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead == 'f')
        ADVANCE(398);
      if (lookahead == 'm')
        ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 397:
      if (lookahead == 'n')
        ADVANCE(400);
      END_STATE();
    case 398:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 399:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 400:
      if (lookahead == 'd')
        ADVANCE(122);
      END_STATE();
    case 401:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 403:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == 'd')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(223);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 'i')
        ADVANCE(225);
      if (lookahead == 'm')
        ADVANCE(226);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 404:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 405:
      if (lookahead == '!')
        ADVANCE(406);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 406:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 407:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 408:
      if (lookahead == '!')
        ADVANCE(406);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 409:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(217);
      if (lookahead == '0')
        ADVANCE(315);
      if (lookahead == 'f')
        ADVANCE(313);
      if (lookahead == 'g')
        ADVANCE(316);
      if (lookahead == 'i')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(230);
      if (lookahead == 'w')
        ADVANCE(321);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(218);
      END_STATE();
    case 410:
      if (lookahead == '*')
        ADVANCE(216);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 411:
      if (lookahead == '%')
        ADVANCE(372);
      if (lookahead == '&')
        ADVANCE(412);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(413);
      if (lookahead == '+')
        ADVANCE(414);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(415);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(416);
      if (lookahead == ':')
        ADVANCE(221);
      if (lookahead == '<')
        ADVANCE(417);
      if (lookahead == '>')
        ADVANCE(418);
      if (lookahead == '^')
        ADVANCE(419);
      if (lookahead == '|')
        ADVANCE(420);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 412:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 413:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 414:
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 415:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 416:
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 417:
      if (lookahead == '<')
        ADVANCE(421);
      END_STATE();
    case 418:
      if (lookahead == '>')
        ADVANCE(422);
      END_STATE();
    case 419:
      if (lookahead == '=')
        ADVANCE(79);
      END_STATE();
    case 420:
      if (lookahead == '=')
        ADVANCE(109);
      END_STATE();
    case 421:
      if (lookahead == '=')
        ADVANCE(117);
      END_STATE();
    case 422:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 423:
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(211);
      if (lookahead == 'c')
        ADVANCE(424);
      if (lookahead == 'd')
        ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 424:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 425:
      if (lookahead == 'e')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'f')
        ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 209},
  [2] = {.lex_state = 209},
  [3] = {.lex_state = 214},
  [4] = {.lex_state = 209},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 209},
  [8] = {.lex_state = 209},
  [9] = {.lex_state = 214},
  [10] = {.lex_state = 209},
  [11] = {.lex_state = 209},
  [12] = {.lex_state = 220},
  [13] = {.lex_state = 309},
  [14] = {.lex_state = 214},
  [15] = {.lex_state = 310},
  [16] = {.lex_state = 311},
  [17] = {.lex_state = 214},
  [18] = {.lex_state = 209},
  [19] = {.lex_state = 312},
  [20] = {.lex_state = 214},
  [21] = {.lex_state = 214},
  [22] = {.lex_state = 214},
  [23] = {.lex_state = 311},
  [24] = {.lex_state = 220},
  [25] = {.lex_state = 214},
  [26] = {.lex_state = 214},
  [27] = {.lex_state = 214},
  [28] = {.lex_state = 214},
  [29] = {.lex_state = 314},
  [30] = {.lex_state = 349},
  [31] = {.lex_state = 312},
  [32] = {.lex_state = 311},
  [33] = {.lex_state = 220},
  [34] = {.lex_state = 214},
  [35] = {.lex_state = 214},
  [36] = {.lex_state = 214},
  [37] = {.lex_state = 314},
  [38] = {.lex_state = 352},
  [39] = {.lex_state = 214},
  [40] = {.lex_state = 214},
  [41] = {.lex_state = 214},
  [42] = {.lex_state = 214},
  [43] = {.lex_state = 214},
  [44] = {.lex_state = 353},
  [45] = {.lex_state = 310},
  [46] = {.lex_state = 214},
  [47] = {.lex_state = 214},
  [48] = {.lex_state = 312},
  [49] = {.lex_state = 214},
  [50] = {.lex_state = 220},
  [51] = {.lex_state = 214},
  [52] = {.lex_state = 355},
  [53] = {.lex_state = 363},
  [54] = {.lex_state = 220},
  [55] = {.lex_state = 209},
  [56] = {.lex_state = 214},
  [57] = {.lex_state = 364},
  [58] = {.lex_state = 214},
  [59] = {.lex_state = 214},
  [60] = {.lex_state = 365},
  [61] = {.lex_state = 366},
  [62] = {.lex_state = 371},
  [63] = {.lex_state = 214},
  [64] = {.lex_state = 383},
  [65] = {.lex_state = 364},
  [66] = {.lex_state = 214},
  [67] = {.lex_state = 386},
  [68] = {.lex_state = 214},
  [69] = {.lex_state = 371},
  [70] = {.lex_state = 214},
  [71] = {.lex_state = 365},
  [72] = {.lex_state = 371},
  [73] = {.lex_state = 349},
  [74] = {.lex_state = 371},
  [75] = {.lex_state = 214},
  [76] = {.lex_state = 220},
  [77] = {.lex_state = 396},
  [78] = {.lex_state = 349},
  [79] = {.lex_state = 214},
  [80] = {.lex_state = 214},
  [81] = {.lex_state = 312},
  [82] = {.lex_state = 214},
  [83] = {.lex_state = 355},
  [84] = {.lex_state = 220},
  [85] = {.lex_state = 214},
  [86] = {.lex_state = 355},
  [87] = {.lex_state = 312},
  [88] = {.lex_state = 401},
  [89] = {.lex_state = 314},
  [90] = {.lex_state = 214},
  [91] = {.lex_state = 214},
  [92] = {.lex_state = 363},
  [93] = {.lex_state = 401},
  [94] = {.lex_state = 401},
  [95] = {.lex_state = 310},
  [96] = {.lex_state = 353},
  [97] = {.lex_state = 214},
  [98] = {.lex_state = 214},
  [99] = {.lex_state = 214},
  [100] = {.lex_state = 214},
  [101] = {.lex_state = 355},
  [102] = {.lex_state = 209},
  [103] = {.lex_state = 402},
  [104] = {.lex_state = 349},
  [105] = {.lex_state = 355},
  [106] = {.lex_state = 214},
  [107] = {.lex_state = 364},
  [108] = {.lex_state = 403},
  [109] = {.lex_state = 214},
  [110] = {.lex_state = 404},
  [111] = {.lex_state = 404},
  [112] = {.lex_state = 214},
  [113] = {.lex_state = 220},
  [114] = {.lex_state = 214},
  [115] = {.lex_state = 364},
  [116] = {.lex_state = 405},
  [117] = {.lex_state = 312},
  [118] = {.lex_state = 364},
  [119] = {.lex_state = 214},
  [120] = {.lex_state = 309},
  [121] = {.lex_state = 371},
  [122] = {.lex_state = 214},
  [123] = {.lex_state = 214},
  [124] = {.lex_state = 408},
  [125] = {.lex_state = 386},
  [126] = {.lex_state = 366},
  [127] = {.lex_state = 409},
  [128] = {.lex_state = 364},
  [129] = {.lex_state = 364},
  [130] = {.lex_state = 349},
  [131] = {.lex_state = 349},
  [132] = {.lex_state = 220},
  [133] = {.lex_state = 363},
  [134] = {.lex_state = 363},
  [135] = {.lex_state = 214},
  [136] = {.lex_state = 214},
  [137] = {.lex_state = 214},
  [138] = {.lex_state = 220},
  [139] = {.lex_state = 220},
  [140] = {.lex_state = 214},
  [141] = {.lex_state = 355},
  [142] = {.lex_state = 220},
  [143] = {.lex_state = 355},
  [144] = {.lex_state = 214},
  [145] = {.lex_state = 364},
  [146] = {.lex_state = 355},
  [147] = {.lex_state = 352},
  [148] = {.lex_state = 401},
  [149] = {.lex_state = 314},
  [150] = {.lex_state = 403},
  [151] = {.lex_state = 401},
  [152] = {.lex_state = 214},
  [153] = {.lex_state = 214},
  [154] = {.lex_state = 401},
  [155] = {.lex_state = 310},
  [156] = {.lex_state = 363},
  [157] = {.lex_state = 349},
  [158] = {.lex_state = 355},
  [159] = {.lex_state = 214},
  [160] = {.lex_state = 410},
  [161] = {.lex_state = 214},
  [162] = {.lex_state = 410},
  [163] = {.lex_state = 403},
  [164] = {.lex_state = 364},
  [165] = {.lex_state = 404},
  [166] = {.lex_state = 411},
  [167] = {.lex_state = 220},
  [168] = {.lex_state = 214},
  [169] = {.lex_state = 214},
  [170] = {.lex_state = 349},
  [171] = {.lex_state = 364},
  [172] = {.lex_state = 408},
  [173] = {.lex_state = 364},
  [174] = {.lex_state = 312},
  [175] = {.lex_state = 423},
  [176] = {.lex_state = 408},
  [177] = {.lex_state = 408},
  [178] = {.lex_state = 386},
  [179] = {.lex_state = 405},
  [180] = {.lex_state = 312},
  [181] = {.lex_state = 364},
  [182] = {.lex_state = 349},
  [183] = {.lex_state = 349},
  [184] = {.lex_state = 363},
  [185] = {.lex_state = 220},
  [186] = {.lex_state = 220},
  [187] = {.lex_state = 220},
  [188] = {.lex_state = 355},
  [189] = {.lex_state = 214},
  [190] = {.lex_state = 366},
  [191] = {.lex_state = 386},
  [192] = {.lex_state = 383},
  [193] = {.lex_state = 364},
  [194] = {.lex_state = 401},
  [195] = {.lex_state = 401},
  [196] = {.lex_state = 214},
  [197] = {.lex_state = 401},
  [198] = {.lex_state = 214},
  [199] = {.lex_state = 401},
  [200] = {.lex_state = 403},
  [201] = {.lex_state = 349},
  [202] = {.lex_state = 214},
  [203] = {.lex_state = 410},
  [204] = {.lex_state = 410},
  [205] = {.lex_state = 312},
  [206] = {.lex_state = 410},
  [207] = {.lex_state = 404},
  [208] = {.lex_state = 404},
  [209] = {.lex_state = 220},
  [210] = {.lex_state = 214},
  [211] = {.lex_state = 314},
  [212] = {.lex_state = 349},
  [213] = {.lex_state = 214},
  [214] = {.lex_state = 312},
  [215] = {.lex_state = 408},
  [216] = {.lex_state = 214},
  [217] = {.lex_state = 214},
  [218] = {.lex_state = 396},
  [219] = {.lex_state = 423},
  [220] = {.lex_state = 409},
  [221] = {.lex_state = 364},
  [222] = {.lex_state = 312},
  [223] = {.lex_state = 314},
  [224] = {.lex_state = 349},
  [225] = {.lex_state = 214},
  [226] = {.lex_state = 220},
  [227] = {.lex_state = 214},
  [228] = {.lex_state = 405},
  [229] = {.lex_state = 312},
  [230] = {.lex_state = 364},
  [231] = {.lex_state = 220},
  [232] = {.lex_state = 386},
  [233] = {.lex_state = 309},
  [234] = {.lex_state = 404},
  [235] = {.lex_state = 220},
  [236] = {.lex_state = 214},
  [237] = {.lex_state = 349},
  [238] = {.lex_state = 410},
  [239] = {.lex_state = 410},
  [240] = {.lex_state = 410},
  [241] = {.lex_state = 410},
  [242] = {.lex_state = 410},
  [243] = {.lex_state = 220},
  [244] = {.lex_state = 214},
  [245] = {.lex_state = 214},
  [246] = {.lex_state = 408},
  [247] = {.lex_state = 349},
  [248] = {.lex_state = 214},
  [249] = {.lex_state = 314},
  [250] = {.lex_state = 214},
  [251] = {.lex_state = 396},
  [252] = {.lex_state = 423},
  [253] = {.lex_state = 312},
  [254] = {.lex_state = 409},
  [255] = {.lex_state = 214},
  [256] = {.lex_state = 214},
  [257] = {.lex_state = 220},
  [258] = {.lex_state = 220},
  [259] = {.lex_state = 364},
  [260] = {.lex_state = 312},
  [261] = {.lex_state = 220},
  [262] = {.lex_state = 220},
  [263] = {.lex_state = 220},
  [264] = {.lex_state = 220},
  [265] = {.lex_state = 423},
  [266] = {.lex_state = 349},
  [267] = {.lex_state = 214},
  [268] = {.lex_state = 349},
  [269] = {.lex_state = 214},
  [270] = {.lex_state = 214},
  [271] = {.lex_state = 409},
  [272] = {.lex_state = 312},
  [273] = {.lex_state = 220},
  [274] = {.lex_state = 214},
  [275] = {.lex_state = 214},
  [276] = {.lex_state = 396},
  [277] = {.lex_state = 423},
  [278] = {.lex_state = 349},
  [279] = {.lex_state = 214},
  [280] = {.lex_state = 220},
  [281] = {.lex_state = 396},
  [282] = {.lex_state = 214},
  [283] = {.lex_state = 214},
  [284] = {.lex_state = 423},
  [285] = {.lex_state = 423},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_module_definition] = STATE(4),
    [sym_sentences] = STATE(5),
    [sym_source_file] = STATE(6),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_sentence] = STATE(7),
    [aux_sym_sentences_repeat1] = STATE(7),
    [sym_module_definition] = STATE(8),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_module_definition] = STATE(10),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [sym_sentence] = STATE(11),
    [aux_sym_sentences_repeat1] = STATE(11),
    [sym_module_definition] = STATE(8),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_module] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_DOT] = ACTIONS(23),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_module_definition] = STATE(10),
    [anon_sym_module] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_sentence] = STATE(11),
    [aux_sym_sentences_repeat1] = STATE(11),
    [sym_module_definition] = STATE(8),
    [anon_sym_module] = ACTIONS(30),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_function_definition] = STATE(24),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_access_control] = STATE(23),
    [aux_sym_module_definition_repeat1] = STATE(24),
    [sym__definitions] = STATE(24),
    [sym_compound_macro_block] = STATE(24),
    [sym_is_function] = STATE(25),
    [sym_is_method] = STATE(25),
    [sym_type] = STATE(26),
    [sym_declaration_definition] = STATE(24),
    [sym_enum_definition] = STATE(24),
    [sym_variable_definition] = STATE(27),
    [sym_end_module] = STATE(28),
    [sym_compound_macro] = STATE(29),
    [sym_function_signature] = STATE(30),
    [anon_sym_i16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(39),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [anon_sym_s32] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(39),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [sym_is_external] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_s16] = ACTIONS(35),
    [sym_is_declare] = ACTIONS(47),
    [anon_sym_protected] = ACTIONS(39),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(51),
  },
  [13] = {
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_access_control] = STATE(32),
    [sym_variable_definition] = STATE(33),
    [sym_is_function] = STATE(34),
    [sym_is_method] = STATE(34),
    [sym_type] = STATE(35),
    [sym_function_signature] = STATE(33),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(39),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(41),
    [anon_sym_s32] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(39),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_s16] = ACTIONS(35),
    [anon_sym_protected] = ACTIONS(39),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(35),
  },
  [14] = {
    [sym_parameter_list] = STATE(39),
    [aux_sym_compound_macro_repeat1] = STATE(40),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [15] = {
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym_identifier] = ACTIONS(71),
    [anon_sym_s8] = ACTIONS(71),
    [anon_sym_u8] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(71),
    [anon_sym_u32] = ACTIONS(71),
    [anon_sym_i8] = ACTIONS(71),
    [anon_sym_method] = ACTIONS(71),
    [anon_sym_s32] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(71),
    [anon_sym_f32] = ACTIONS(71),
    [anon_sym_function] = ACTIONS(71),
    [anon_sym_s16] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(71),
    [anon_sym_u64] = ACTIONS(71),
    [anon_sym_i16] = ACTIONS(71),
  },
  [17] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_module] = ACTIONS(75),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [19] = {
    [sym_type] = STATE(42),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [20] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
  },
  [21] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(79),
  },
  [22] = {
    [sym_array] = STATE(47),
    [aux_sym_type_repeat1] = STATE(46),
    [aux_sym_type_repeat2] = STATE(47),
    [sym_pointer] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_is_function] = STATE(49),
    [sym_is_method] = STATE(49),
    [sym_type] = STATE(42),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(41),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(87),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [24] = {
    [sym_function_definition] = STATE(50),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_access_control] = STATE(23),
    [aux_sym_module_definition_repeat1] = STATE(50),
    [sym__definitions] = STATE(50),
    [sym_compound_macro_block] = STATE(50),
    [sym_is_function] = STATE(25),
    [sym_is_method] = STATE(25),
    [sym_type] = STATE(26),
    [sym_declaration_definition] = STATE(50),
    [sym_enum_definition] = STATE(50),
    [sym_variable_definition] = STATE(27),
    [sym_end_module] = STATE(51),
    [sym_compound_macro] = STATE(29),
    [sym_function_signature] = STATE(30),
    [anon_sym_i16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(39),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [anon_sym_s32] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(39),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [sym_is_external] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_s16] = ACTIONS(35),
    [sym_is_declare] = ACTIONS(47),
    [anon_sym_protected] = ACTIONS(39),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_enum] = ACTIONS(51),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(91),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_DOT] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [29] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(73),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(73),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(73),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [sym_end_compound_macro] = STATE(76),
    [sym_integer] = ACTIONS(97),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(101),
    [sym_double] = ACTIONS(104),
    [anon_sym_method] = ACTIONS(106),
    [anon_sym_end] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(115),
    [sym_readonly] = ACTIONS(118),
    [anon_sym_i64] = ACTIONS(101),
    [anon_sym_f32] = ACTIONS(101),
    [sym_null] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(101),
    [sym_is_declare] = ACTIONS(106),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(101),
    [anon_sym_f64] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(101),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(101),
    [sym_is_external] = ACTIONS(106),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_function] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(101),
    [anon_sym_i32] = ACTIONS(101),
    [anon_sym_u64] = ACTIONS(101),
    [anon_sym_enum] = ACTIONS(106),
    [anon_sym_i16] = ACTIONS(101),
  },
  [30] = {
    [sym__collection_or_value] = STATE(69),
    [sym_character] = STATE(74),
    [sym_access_control] = STATE(71),
    [aux_sym_compound_macro_block_repeat1] = STATE(78),
    [sym_type] = STATE(26),
    [sym__statement] = STATE(78),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_collection] = STATE(69),
    [sym__value] = STATE(74),
    [sym__number] = STATE(74),
    [sym_end_function] = STATE(79),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym__literal] = STATE(74),
    [sym_string] = STATE(74),
    [sym_end_method] = STATE(79),
    [sym__end_function] = STATE(79),
    [sym_variable_definition] = STATE(70),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(78),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(138),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [31] = {
    [sym_type] = STATE(80),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [32] = {
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_is_function] = STATE(82),
    [sym_is_method] = STATE(82),
    [sym_type] = STATE(80),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_method] = ACTIONS(41),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(144),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_function] = ACTIONS(49),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [33] = {
    [sym_is_declare] = ACTIONS(146),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_s8] = ACTIONS(146),
    [anon_sym_private] = ACTIONS(146),
    [anon_sym_u8] = ACTIONS(146),
    [anon_sym_f64] = ACTIONS(146),
    [anon_sym_u32] = ACTIONS(146),
    [anon_sym_i8] = ACTIONS(146),
    [anon_sym_method] = ACTIONS(146),
    [anon_sym_end] = ACTIONS(146),
    [anon_sym_s32] = ACTIONS(146),
    [anon_sym_publish] = ACTIONS(146),
    [sym_readonly] = ACTIONS(146),
    [anon_sym_i64] = ACTIONS(146),
    [anon_sym_f32] = ACTIONS(146),
    [sym_is_external] = ACTIONS(146),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(146),
    [anon_sym_s16] = ACTIONS(146),
    [anon_sym_protected] = ACTIONS(146),
    [anon_sym_u16] = ACTIONS(146),
    [anon_sym_i32] = ACTIONS(146),
    [anon_sym_u64] = ACTIONS(146),
    [anon_sym_enum] = ACTIONS(146),
    [anon_sym_i16] = ACTIONS(146),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
  },
  [37] = {
    [sym_integer] = ACTIONS(154),
    [anon_sym_section] = ACTIONS(154),
    [anon_sym_s8] = ACTIONS(154),
    [sym_double] = ACTIONS(156),
    [anon_sym_method] = ACTIONS(154),
    [anon_sym_end] = ACTIONS(154),
    [anon_sym_while] = ACTIONS(154),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_publish] = ACTIONS(154),
    [sym_readonly] = ACTIONS(154),
    [anon_sym_i64] = ACTIONS(154),
    [anon_sym_f32] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(154),
    [sym_null] = ACTIONS(154),
    [sym_long] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(154),
    [sym_is_declare] = ACTIONS(154),
    [sym_hex] = ACTIONS(156),
    [anon_sym_switch] = ACTIONS(154),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_u8] = ACTIONS(154),
    [anon_sym_f64] = ACTIONS(154),
    [anon_sym_u32] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_i8] = ACTIONS(154),
    [anon_sym_return] = ACTIONS(154),
    [anon_sym_goto] = ACTIONS(154),
    [sym_oct] = ACTIONS(154),
    [anon_sym_s32] = ACTIONS(154),
    [sym_is_external] = ACTIONS(154),
    [sym_float] = ACTIONS(156),
    [sym_binary] = ACTIONS(156),
    [anon_sym_function] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_if] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_u16] = ACTIONS(154),
    [anon_sym_i32] = ACTIONS(154),
    [anon_sym_u64] = ACTIONS(154),
    [anon_sym_enum] = ACTIONS(154),
    [anon_sym_i16] = ACTIONS(154),
  },
  [38] = {
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__comma_list_variables] = STATE(87),
    [sym_type] = STATE(26),
    [sym_variable_definition] = STATE(88),
    [sym_access_control] = STATE(71),
    [anon_sym_RPAREN] = ACTIONS(158),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(35),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [40] = {
    [sym_parameter_list] = STATE(90),
    [aux_sym_compound_macro_repeat1] = STATE(91),
    [sym__space] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
  },
  [43] = {
    [sym__enum_element] = STATE(94),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(168),
    [sym_integer] = ACTIONS(170),
    [sym__comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_LBRACK] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(174),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
  },
  [46] = {
    [sym_array] = STATE(98),
    [aux_sym_type_repeat1] = STATE(97),
    [aux_sym_type_repeat2] = STATE(98),
    [sym_pointer] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym_array] = STATE(99),
    [aux_sym_type_repeat2] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
  },
  [48] = {
    [sym_type] = STATE(100),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [49] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(178),
    [sym__comment] = ACTIONS(3),
  },
  [50] = {
    [sym_function_definition] = STATE(50),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_access_control] = STATE(23),
    [aux_sym_module_definition_repeat1] = STATE(50),
    [sym__definitions] = STATE(50),
    [sym_compound_macro_block] = STATE(50),
    [sym_is_function] = STATE(25),
    [sym_is_method] = STATE(25),
    [sym_type] = STATE(26),
    [sym_declaration_definition] = STATE(50),
    [sym_enum_definition] = STATE(50),
    [sym_variable_definition] = STATE(27),
    [sym_compound_macro] = STATE(29),
    [sym_function_signature] = STATE(30),
    [sym_is_declare] = ACTIONS(180),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_s8] = ACTIONS(186),
    [anon_sym_private] = ACTIONS(189),
    [anon_sym_u8] = ACTIONS(186),
    [anon_sym_f64] = ACTIONS(186),
    [anon_sym_u32] = ACTIONS(186),
    [anon_sym_i8] = ACTIONS(186),
    [anon_sym_method] = ACTIONS(192),
    [anon_sym_end] = ACTIONS(195),
    [anon_sym_s32] = ACTIONS(186),
    [anon_sym_publish] = ACTIONS(189),
    [sym_readonly] = ACTIONS(197),
    [anon_sym_i64] = ACTIONS(186),
    [anon_sym_f32] = ACTIONS(186),
    [sym_is_external] = ACTIONS(180),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(200),
    [anon_sym_s16] = ACTIONS(186),
    [anon_sym_protected] = ACTIONS(189),
    [anon_sym_u16] = ACTIONS(186),
    [anon_sym_i32] = ACTIONS(186),
    [anon_sym_u64] = ACTIONS(186),
    [anon_sym_enum] = ACTIONS(203),
    [anon_sym_i16] = ACTIONS(186),
  },
  [51] = {
    [anon_sym_DOT] = ACTIONS(206),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [sym_parameter_list] = STATE(105),
    [sym_return_list] = STATE(106),
    [anon_sym_DOT] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [sym_static_assignment] = STATE(108),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_DOT] = ACTIONS(212),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_COLON_EQ] = ACTIONS(214),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [sym_is_declare] = ACTIONS(216),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(216),
    [anon_sym_s8] = ACTIONS(216),
    [anon_sym_private] = ACTIONS(216),
    [anon_sym_u8] = ACTIONS(216),
    [anon_sym_f64] = ACTIONS(216),
    [anon_sym_u32] = ACTIONS(216),
    [anon_sym_i8] = ACTIONS(216),
    [anon_sym_method] = ACTIONS(216),
    [anon_sym_end] = ACTIONS(216),
    [anon_sym_s32] = ACTIONS(216),
    [anon_sym_publish] = ACTIONS(216),
    [sym_readonly] = ACTIONS(216),
    [anon_sym_i64] = ACTIONS(216),
    [anon_sym_f32] = ACTIONS(216),
    [sym_is_external] = ACTIONS(216),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(216),
    [anon_sym_s16] = ACTIONS(216),
    [anon_sym_protected] = ACTIONS(216),
    [anon_sym_u16] = ACTIONS(216),
    [anon_sym_i32] = ACTIONS(216),
    [anon_sym_u64] = ACTIONS(216),
    [anon_sym_enum] = ACTIONS(216),
    [anon_sym_i16] = ACTIONS(216),
  },
  [55] = {
    [anon_sym_module] = ACTIONS(218),
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(220),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [sym__collection_or_value] = STATE(110),
    [sym_character] = STATE(110),
    [sym_collection] = STATE(110),
    [sym__value] = STATE(110),
    [sym__comma_list_collection_or_value] = STATE(111),
    [sym_group_expression] = STATE(110),
    [sym__number] = STATE(110),
    [sym__literal] = STATE(110),
    [sym_string] = STATE(110),
    [sym_identifier] = ACTIONS(222),
    [sym_double] = ACTIONS(224),
    [sym_float] = ACTIONS(224),
    [sym_oct] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(222),
    [sym_binary] = ACTIONS(224),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(224),
    [sym_integer] = ACTIONS(222),
  },
  [58] = {
    [sym_compound_macro] = STATE(113),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(226),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [sym_group_expression] = STATE(114),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(228),
  },
  [60] = {
    [sym_identifier] = ACTIONS(71),
    [anon_sym_s8] = ACTIONS(71),
    [anon_sym_u8] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(71),
    [anon_sym_u32] = ACTIONS(71),
    [anon_sym_i8] = ACTIONS(71),
    [anon_sym_s32] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(71),
    [anon_sym_f32] = ACTIONS(71),
    [anon_sym_s16] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(71),
    [anon_sym_u64] = ACTIONS(71),
    [anon_sym_i16] = ACTIONS(71),
  },
  [61] = {
    [sym__collection_or_value] = STATE(69),
    [sym_character] = STATE(116),
    [sym_collection] = STATE(69),
    [sym__value] = STATE(116),
    [sym__number] = STATE(116),
    [sym_group_expression] = STATE(116),
    [sym__literal] = STATE(116),
    [sym_string] = STATE(116),
    [sym_assignment_expression] = STATE(117),
    [sym_unary_op] = STATE(118),
    [sym_identifier] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [sym_double] = ACTIONS(234),
    [sym_float] = ACTIONS(234),
    [sym_oct] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(236),
    [sym_null] = ACTIONS(230),
    [sym_binary] = ACTIONS(234),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_hex] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(230),
  },
  [62] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(238),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_DASH_EQ] = ACTIONS(238),
    [anon_sym_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_PIPE_EQ] = ACTIONS(238),
    [anon_sym_PLUS_EQ] = ACTIONS(238),
    [anon_sym_LT_LT_EQ] = ACTIONS(238),
    [anon_sym_SLASH_EQ] = ACTIONS(238),
    [anon_sym_GT_GT_EQ] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_AMP_EQ] = ACTIONS(238),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(238),
    [anon_sym_DASH_DASH] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(238),
    [anon_sym_CARET_EQ] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
  },
  [63] = {
    [sym_group_expression] = STATE(119),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(228),
  },
  [64] = {
    [sym__escape_sequence] = STATE(120),
    [anon_sym_BSLASH0] = ACTIONS(242),
    [anon_sym_BSLASHr] = ACTIONS(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(242),
    [anon_sym_BSLASHa] = ACTIONS(242),
    [anon_sym_BSLASHt] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(242),
    [anon_sym_BSLASHv] = ACTIONS(242),
    [anon_sym_BSLASHn] = ACTIONS(242),
    [aux_sym_character_token1] = ACTIONS(244),
    [anon_sym_BSLASHf] = ACTIONS(242),
  },
  [65] = {
    [sym__collection_or_value] = STATE(121),
    [sym_character] = STATE(74),
    [sym_collection] = STATE(121),
    [sym__value] = STATE(74),
    [sym__number] = STATE(74),
    [sym_group_expression] = STATE(74),
    [sym__assignment_or_collection_or_value] = STATE(122),
    [sym__literal] = STATE(74),
    [sym_string] = STATE(74),
    [sym_assignment_expression] = STATE(122),
    [sym_identifier] = ACTIONS(97),
    [sym_double] = ACTIONS(104),
    [sym_float] = ACTIONS(104),
    [sym_oct] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(97),
    [sym_binary] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(104),
    [sym_integer] = ACTIONS(97),
  },
  [66] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(246),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [aux_sym_string_repeat1] = STATE(125),
    [sym__space] = ACTIONS(248),
    [aux_sym_string_token1] = ACTIONS(250),
    [sym__comment] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(252),
  },
  [68] = {
    [sym_group_expression] = STATE(127),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(254),
  },
  [69] = {
    [sym_assignment_op] = STATE(129),
    [anon_sym_AMP_EQ] = ACTIONS(256),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(256),
    [anon_sym_DASH_EQ] = ACTIONS(256),
    [anon_sym_PIPE_EQ] = ACTIONS(256),
    [anon_sym_COLON_EQ] = ACTIONS(256),
    [anon_sym_PLUS_EQ] = ACTIONS(256),
    [anon_sym_STAR_EQ] = ACTIONS(256),
    [anon_sym_CARET_EQ] = ACTIONS(256),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(256),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [anon_sym_GT_GT_EQ] = ACTIONS(256),
  },
  [70] = {
    [anon_sym_DOT] = ACTIONS(258),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [71] = {
    [sym_type] = STATE(42),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(87),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [72] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(238),
    [anon_sym_PERCENT_EQ] = ACTIONS(238),
    [anon_sym_DASH_EQ] = ACTIONS(238),
    [anon_sym_PIPE_EQ] = ACTIONS(238),
    [anon_sym_PLUS_EQ] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_LT_LT_EQ] = ACTIONS(238),
    [anon_sym_SLASH_EQ] = ACTIONS(238),
    [anon_sym_GT_GT_EQ] = ACTIONS(238),
    [anon_sym_AMP_EQ] = ACTIONS(238),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(238),
    [anon_sym_DASH_DASH] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(238),
    [anon_sym_CARET_EQ] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
  },
  [73] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [sym_end_compound_macro] = STATE(132),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(262),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [74] = {
    [sym_assignment_post_op] = STATE(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(266),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(266),
    [anon_sym_DASH_DASH] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_DOT] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym_is_declare] = ACTIONS(270),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(270),
    [anon_sym_s8] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(270),
    [anon_sym_u8] = ACTIONS(270),
    [anon_sym_f64] = ACTIONS(270),
    [anon_sym_u32] = ACTIONS(270),
    [anon_sym_i8] = ACTIONS(270),
    [anon_sym_method] = ACTIONS(270),
    [anon_sym_end] = ACTIONS(270),
    [anon_sym_s32] = ACTIONS(270),
    [anon_sym_publish] = ACTIONS(270),
    [sym_readonly] = ACTIONS(270),
    [anon_sym_i64] = ACTIONS(270),
    [anon_sym_f32] = ACTIONS(270),
    [sym_is_external] = ACTIONS(270),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(270),
    [anon_sym_s16] = ACTIONS(270),
    [anon_sym_protected] = ACTIONS(270),
    [anon_sym_u16] = ACTIONS(270),
    [anon_sym_i32] = ACTIONS(270),
    [anon_sym_u64] = ACTIONS(270),
    [anon_sym_enum] = ACTIONS(270),
    [anon_sym_i16] = ACTIONS(270),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(272),
    [anon_sym_function] = ACTIONS(274),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym__collection_or_value] = STATE(69),
    [sym_character] = STATE(74),
    [sym_access_control] = STATE(71),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym_type] = STATE(26),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_collection] = STATE(69),
    [sym__value] = STATE(74),
    [sym__number] = STATE(74),
    [sym_end_function] = STATE(137),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym__literal] = STATE(74),
    [sym_string] = STATE(74),
    [sym_end_method] = STATE(137),
    [sym__end_function] = STATE(137),
    [sym_variable_definition] = STATE(70),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(138),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [79] = {
    [anon_sym_DOT] = ACTIONS(276),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(278),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [sym_type] = STATE(140),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [82] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(280),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym_parameter_list] = STATE(143),
    [sym_return_list] = STATE(144),
    [anon_sym_DOT] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [84] = {
    [sym_static_assignment] = STATE(108),
    [sym_is_declare] = ACTIONS(284),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(284),
    [anon_sym_s8] = ACTIONS(284),
    [anon_sym_private] = ACTIONS(284),
    [anon_sym_u8] = ACTIONS(284),
    [anon_sym_f64] = ACTIONS(284),
    [anon_sym_u32] = ACTIONS(284),
    [anon_sym_i8] = ACTIONS(284),
    [anon_sym_method] = ACTIONS(284),
    [anon_sym_end] = ACTIONS(284),
    [anon_sym_s32] = ACTIONS(284),
    [anon_sym_publish] = ACTIONS(284),
    [sym_readonly] = ACTIONS(284),
    [anon_sym_i64] = ACTIONS(284),
    [anon_sym_f32] = ACTIONS(284),
    [sym_is_external] = ACTIONS(284),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(284),
    [anon_sym_COLON_EQ] = ACTIONS(286),
    [anon_sym_s16] = ACTIONS(284),
    [anon_sym_protected] = ACTIONS(284),
    [anon_sym_u16] = ACTIONS(284),
    [anon_sym_i32] = ACTIONS(284),
    [anon_sym_u64] = ACTIONS(284),
    [anon_sym_enum] = ACTIONS(284),
    [anon_sym_i16] = ACTIONS(284),
  },
  [85] = {
    [sym__space] = ACTIONS(288),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym__comment] = ACTIONS(3),
  },
  [86] = {
    [anon_sym_DOT] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(290),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(292),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [88] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(148),
    [anon_sym_RPAREN] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [sym_integer] = ACTIONS(298),
    [anon_sym_section] = ACTIONS(298),
    [anon_sym_s8] = ACTIONS(298),
    [sym_double] = ACTIONS(300),
    [anon_sym_method] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(298),
    [anon_sym_while] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_publish] = ACTIONS(298),
    [sym_readonly] = ACTIONS(298),
    [anon_sym_i64] = ACTIONS(298),
    [anon_sym_f32] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(298),
    [sym_null] = ACTIONS(298),
    [sym_long] = ACTIONS(300),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(298),
    [sym_is_declare] = ACTIONS(298),
    [sym_hex] = ACTIONS(300),
    [anon_sym_switch] = ACTIONS(298),
    [sym_identifier] = ACTIONS(298),
    [anon_sym_private] = ACTIONS(298),
    [anon_sym_u8] = ACTIONS(298),
    [anon_sym_f64] = ACTIONS(298),
    [anon_sym_u32] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_i8] = ACTIONS(298),
    [anon_sym_return] = ACTIONS(298),
    [anon_sym_goto] = ACTIONS(298),
    [sym_oct] = ACTIONS(298),
    [anon_sym_s32] = ACTIONS(298),
    [sym_is_external] = ACTIONS(298),
    [sym_float] = ACTIONS(300),
    [sym_binary] = ACTIONS(300),
    [anon_sym_function] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(298),
    [anon_sym_u16] = ACTIONS(298),
    [anon_sym_i32] = ACTIONS(298),
    [anon_sym_u64] = ACTIONS(298),
    [anon_sym_enum] = ACTIONS(298),
    [anon_sym_i16] = ACTIONS(298),
  },
  [90] = {
    [anon_sym_DOT] = ACTIONS(302),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_compound_macro_repeat1] = STATE(91),
    [sym__space] = ACTIONS(304),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [sym__comment] = ACTIONS(3),
  },
  [92] = {
    [sym_static_assignment] = STATE(150),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_COLON_EQ] = ACTIONS(214),
    [sym__comment] = ACTIONS(3),
  },
  [93] = {
    [sym_static_assignment] = STATE(151),
    [anon_sym_RPAREN] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_COLON_EQ] = ACTIONS(214),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_enum_definition_repeat1] = STATE(154),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(315),
    [anon_sym_COMMA] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_RBRACK] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [aux_sym_type_repeat1] = STATE(97),
    [sym_pointer] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(325),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [sym_array] = STATE(99),
    [aux_sym_type_repeat2] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(328),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [sym_array] = STATE(99),
    [aux_sym_type_repeat2] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(330),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(333),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [sym_parameter_list] = STATE(158),
    [sym_return_list] = STATE(159),
    [anon_sym_DOT] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [anon_sym_module] = ACTIONS(339),
    [ts_builtin_sym_end] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [103] = {
    [sym__base_type] = STATE(160),
    [sym_primitive_type] = STATE(160),
    [sym__comma_list_types] = STATE(161),
    [sym_type] = STATE(162),
    [sym_identifier] = ACTIONS(341),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [104] = {
    [anon_sym_section] = ACTIONS(345),
    [anon_sym_s8] = ACTIONS(345),
    [sym_double] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_end] = ACTIONS(345),
    [anon_sym_while] = ACTIONS(345),
    [sym_null] = ACTIONS(345),
    [anon_sym_publish] = ACTIONS(345),
    [sym_readonly] = ACTIONS(345),
    [anon_sym_i64] = ACTIONS(345),
    [anon_sym_f32] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(345),
    [sym_long] = ACTIONS(347),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(345),
    [sym_hex] = ACTIONS(347),
    [anon_sym_switch] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_u8] = ACTIONS(345),
    [anon_sym_f64] = ACTIONS(345),
    [anon_sym_u32] = ACTIONS(345),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_i8] = ACTIONS(345),
    [anon_sym_return] = ACTIONS(345),
    [anon_sym_goto] = ACTIONS(345),
    [sym_oct] = ACTIONS(345),
    [anon_sym_s32] = ACTIONS(345),
    [sym_float] = ACTIONS(347),
    [sym_binary] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [anon_sym_if] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_u16] = ACTIONS(345),
    [anon_sym_i32] = ACTIONS(345),
    [anon_sym_u64] = ACTIONS(345),
    [sym_integer] = ACTIONS(345),
    [anon_sym_i16] = ACTIONS(345),
  },
  [105] = {
    [sym_return_list] = STATE(159),
    [anon_sym_DOT] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_DOT] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym__collection_or_value] = STATE(163),
    [sym_character] = STATE(163),
    [sym_collection] = STATE(163),
    [sym__value] = STATE(163),
    [sym__number] = STATE(163),
    [sym_group_expression] = STATE(163),
    [sym__literal] = STATE(163),
    [sym_string] = STATE(163),
    [sym_identifier] = ACTIONS(349),
    [sym_double] = ACTIONS(351),
    [sym_float] = ACTIONS(351),
    [sym_oct] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(349),
    [sym_binary] = ACTIONS(351),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(351),
    [sym_integer] = ACTIONS(349),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_s8] = ACTIONS(353),
    [anon_sym_method] = ACTIONS(353),
    [anon_sym_end] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(353),
    [sym_readonly] = ACTIONS(353),
    [anon_sym_i64] = ACTIONS(353),
    [anon_sym_f32] = ACTIONS(353),
    [anon_sym_s16] = ACTIONS(353),
    [sym_is_declare] = ACTIONS(353),
    [sym_identifier] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(307),
    [anon_sym_private] = ACTIONS(353),
    [anon_sym_u8] = ACTIONS(353),
    [anon_sym_f64] = ACTIONS(353),
    [anon_sym_u32] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(307),
    [anon_sym_i8] = ACTIONS(353),
    [anon_sym_s32] = ACTIONS(353),
    [sym_is_external] = ACTIONS(353),
    [anon_sym_function] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(353),
    [anon_sym_u16] = ACTIONS(353),
    [anon_sym_i32] = ACTIONS(353),
    [anon_sym_u64] = ACTIONS(353),
    [anon_sym_enum] = ACTIONS(353),
    [anon_sym_i16] = ACTIONS(353),
  },
  [109] = {
    [anon_sym_DOT] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [110] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(165),
    [anon_sym_RBRACE] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
  },
  [111] = {
    [anon_sym_RBRACE] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [112] = {
    [sym_parameter_list] = STATE(168),
    [aux_sym_compound_macro_repeat1] = STATE(169),
    [sym__space] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [113] = {
    [sym_is_declare] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(365),
    [anon_sym_s8] = ACTIONS(365),
    [anon_sym_private] = ACTIONS(365),
    [anon_sym_u8] = ACTIONS(365),
    [anon_sym_f64] = ACTIONS(365),
    [anon_sym_u32] = ACTIONS(365),
    [anon_sym_i8] = ACTIONS(365),
    [anon_sym_method] = ACTIONS(365),
    [anon_sym_end] = ACTIONS(365),
    [anon_sym_s32] = ACTIONS(365),
    [anon_sym_publish] = ACTIONS(365),
    [sym_readonly] = ACTIONS(365),
    [anon_sym_i64] = ACTIONS(365),
    [anon_sym_f32] = ACTIONS(365),
    [sym_is_external] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(365),
    [anon_sym_s16] = ACTIONS(365),
    [anon_sym_protected] = ACTIONS(365),
    [anon_sym_u16] = ACTIONS(365),
    [anon_sym_i32] = ACTIONS(365),
    [anon_sym_u64] = ACTIONS(365),
    [anon_sym_enum] = ACTIONS(365),
    [anon_sym_i16] = ACTIONS(365),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(369),
    [sym_long] = ACTIONS(371),
    [sym_double] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [sym_oct] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [sym_float] = ACTIONS(371),
    [sym_hex] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(369),
    [sym_integer] = ACTIONS(369),
    [sym_binary] = ACTIONS(371),
  },
  [116] = {
    [sym_assignment_post_op] = STATE(134),
    [sym_binary_op] = STATE(173),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_BANG_EQ] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_DASH_DASH] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [sym_group_expression] = STATE(174),
    [sym_character] = STATE(174),
    [sym__literal] = STATE(174),
    [sym_string] = STATE(174),
    [sym__value] = STATE(174),
    [sym__number] = STATE(174),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(379),
    [sym_identifier] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(381),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(379),
    [sym_hex] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(381),
    [sym_integer] = ACTIONS(381),
    [sym_binary] = ACTIONS(379),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_SQUOTE] = ACTIONS(385),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [121] = {
    [sym_assignment_op] = STATE(129),
    [anon_sym_AMP_EQ] = ACTIONS(256),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(256),
    [anon_sym_DASH_EQ] = ACTIONS(256),
    [anon_sym_PIPE_EQ] = ACTIONS(256),
    [anon_sym_COLON_EQ] = ACTIONS(256),
    [anon_sym_PLUS_EQ] = ACTIONS(256),
    [anon_sym_DOT] = ACTIONS(387),
    [anon_sym_STAR_EQ] = ACTIONS(256),
    [anon_sym_CARET_EQ] = ACTIONS(256),
    [anon_sym_LT_LT_EQ] = ACTIONS(256),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(256),
    [anon_sym_GT_GT_EQ] = ACTIONS(256),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_DOT] = ACTIONS(391),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(393),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_LT_LT_EQ] = ACTIONS(393),
    [anon_sym_SLASH_EQ] = ACTIONS(393),
    [anon_sym_GT_GT_EQ] = ACTIONS(393),
    [anon_sym_AMP_EQ] = ACTIONS(393),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_PLUS_PLUS] = ACTIONS(393),
    [anon_sym_PERCENT_EQ] = ACTIONS(393),
    [anon_sym_DASH_EQ] = ACTIONS(393),
    [anon_sym_PIPE_EQ] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_STAR_EQ] = ACTIONS(393),
    [anon_sym_CARET_EQ] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
  },
  [125] = {
    [aux_sym_string_repeat1] = STATE(178),
    [sym__space] = ACTIONS(248),
    [aux_sym_string_token1] = ACTIONS(397),
    [sym__comment] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(399),
  },
  [126] = {
    [sym__collection_or_value] = STATE(69),
    [sym_character] = STATE(179),
    [sym_collection] = STATE(69),
    [sym__value] = STATE(179),
    [sym__number] = STATE(179),
    [sym_group_expression] = STATE(179),
    [sym__literal] = STATE(179),
    [sym_string] = STATE(179),
    [sym_assignment_expression] = STATE(180),
    [sym_unary_op] = STATE(181),
    [sym_identifier] = ACTIONS(401),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [sym_double] = ACTIONS(403),
    [sym_float] = ACTIONS(403),
    [sym_oct] = ACTIONS(401),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(236),
    [sym_null] = ACTIONS(401),
    [sym_binary] = ACTIONS(403),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_hex] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(401),
  },
  [127] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(183),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(183),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(113),
    [sym_null] = ACTIONS(97),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [128] = {
    [sym_identifier] = ACTIONS(407),
    [sym_double] = ACTIONS(409),
    [sym_float] = ACTIONS(409),
    [sym_oct] = ACTIONS(407),
    [anon_sym_SQUOTE] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(409),
    [sym_null] = ACTIONS(407),
    [sym_binary] = ACTIONS(409),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(407),
    [anon_sym_DQUOTE] = ACTIONS(409),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(409),
    [sym_integer] = ACTIONS(407),
  },
  [129] = {
    [sym__collection_or_value] = STATE(184),
    [sym_character] = STATE(184),
    [sym_collection] = STATE(184),
    [sym__value] = STATE(184),
    [sym__number] = STATE(184),
    [sym_group_expression] = STATE(184),
    [sym__literal] = STATE(184),
    [sym_string] = STATE(184),
    [sym_identifier] = ACTIONS(411),
    [sym_double] = ACTIONS(413),
    [sym_float] = ACTIONS(413),
    [sym_oct] = ACTIONS(411),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(411),
    [sym_binary] = ACTIONS(413),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(413),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(413),
    [sym_integer] = ACTIONS(411),
  },
  [130] = {
    [anon_sym_section] = ACTIONS(415),
    [anon_sym_s8] = ACTIONS(415),
    [sym_double] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_end] = ACTIONS(415),
    [anon_sym_while] = ACTIONS(415),
    [sym_null] = ACTIONS(415),
    [anon_sym_publish] = ACTIONS(415),
    [sym_readonly] = ACTIONS(415),
    [anon_sym_i64] = ACTIONS(415),
    [anon_sym_f32] = ACTIONS(415),
    [anon_sym_LPAREN] = ACTIONS(415),
    [sym_long] = ACTIONS(417),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(415),
    [sym_hex] = ACTIONS(417),
    [anon_sym_switch] = ACTIONS(415),
    [sym_identifier] = ACTIONS(415),
    [anon_sym_private] = ACTIONS(415),
    [anon_sym_u8] = ACTIONS(415),
    [anon_sym_f64] = ACTIONS(415),
    [anon_sym_u32] = ACTIONS(415),
    [anon_sym_SQUOTE] = ACTIONS(417),
    [anon_sym_i8] = ACTIONS(415),
    [anon_sym_return] = ACTIONS(415),
    [anon_sym_goto] = ACTIONS(415),
    [sym_oct] = ACTIONS(415),
    [anon_sym_s32] = ACTIONS(415),
    [sym_float] = ACTIONS(417),
    [sym_binary] = ACTIONS(417),
    [anon_sym_DQUOTE] = ACTIONS(417),
    [anon_sym_if] = ACTIONS(415),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(415),
    [anon_sym_u16] = ACTIONS(415),
    [anon_sym_i32] = ACTIONS(415),
    [anon_sym_u64] = ACTIONS(415),
    [sym_integer] = ACTIONS(415),
    [anon_sym_i16] = ACTIONS(415),
  },
  [131] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(419),
    [anon_sym_s8] = ACTIONS(422),
    [sym_double] = ACTIONS(425),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_end] = ACTIONS(431),
    [anon_sym_while] = ACTIONS(433),
    [sym_null] = ACTIONS(436),
    [anon_sym_publish] = ACTIONS(439),
    [sym_readonly] = ACTIONS(442),
    [anon_sym_i64] = ACTIONS(422),
    [anon_sym_f32] = ACTIONS(422),
    [anon_sym_LPAREN] = ACTIONS(445),
    [sym_long] = ACTIONS(425),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(422),
    [sym_hex] = ACTIONS(425),
    [anon_sym_switch] = ACTIONS(448),
    [sym_identifier] = ACTIONS(451),
    [anon_sym_private] = ACTIONS(439),
    [anon_sym_u8] = ACTIONS(422),
    [anon_sym_f64] = ACTIONS(422),
    [anon_sym_u32] = ACTIONS(422),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_i8] = ACTIONS(422),
    [anon_sym_return] = ACTIONS(457),
    [anon_sym_goto] = ACTIONS(460),
    [sym_oct] = ACTIONS(436),
    [anon_sym_s32] = ACTIONS(422),
    [sym_float] = ACTIONS(425),
    [sym_binary] = ACTIONS(425),
    [anon_sym_DQUOTE] = ACTIONS(463),
    [anon_sym_if] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(439),
    [anon_sym_u16] = ACTIONS(422),
    [anon_sym_i32] = ACTIONS(422),
    [anon_sym_u64] = ACTIONS(422),
    [sym_integer] = ACTIONS(436),
    [anon_sym_i16] = ACTIONS(422),
  },
  [132] = {
    [sym_is_declare] = ACTIONS(469),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(469),
    [anon_sym_s8] = ACTIONS(469),
    [anon_sym_private] = ACTIONS(469),
    [anon_sym_u8] = ACTIONS(469),
    [anon_sym_f64] = ACTIONS(469),
    [anon_sym_u32] = ACTIONS(469),
    [anon_sym_i8] = ACTIONS(469),
    [anon_sym_method] = ACTIONS(469),
    [anon_sym_end] = ACTIONS(469),
    [anon_sym_s32] = ACTIONS(469),
    [anon_sym_publish] = ACTIONS(469),
    [sym_readonly] = ACTIONS(469),
    [anon_sym_i64] = ACTIONS(469),
    [anon_sym_f32] = ACTIONS(469),
    [sym_is_external] = ACTIONS(469),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(469),
    [anon_sym_s16] = ACTIONS(469),
    [anon_sym_protected] = ACTIONS(469),
    [anon_sym_u16] = ACTIONS(469),
    [anon_sym_i32] = ACTIONS(469),
    [anon_sym_u64] = ACTIONS(469),
    [anon_sym_enum] = ACTIONS(469),
    [anon_sym_i16] = ACTIONS(469),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_DOT] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [anon_sym_DOT] = ACTIONS(477),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [137] = {
    [anon_sym_DOT] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [138] = {
    [sym_is_declare] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(481),
    [anon_sym_s8] = ACTIONS(481),
    [anon_sym_private] = ACTIONS(481),
    [anon_sym_u8] = ACTIONS(481),
    [anon_sym_f64] = ACTIONS(481),
    [anon_sym_u32] = ACTIONS(481),
    [anon_sym_i8] = ACTIONS(481),
    [anon_sym_method] = ACTIONS(481),
    [anon_sym_end] = ACTIONS(481),
    [anon_sym_s32] = ACTIONS(481),
    [anon_sym_publish] = ACTIONS(481),
    [sym_readonly] = ACTIONS(481),
    [anon_sym_i64] = ACTIONS(481),
    [anon_sym_f32] = ACTIONS(481),
    [sym_is_external] = ACTIONS(481),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(481),
    [anon_sym_s16] = ACTIONS(481),
    [anon_sym_protected] = ACTIONS(481),
    [anon_sym_u16] = ACTIONS(481),
    [anon_sym_i32] = ACTIONS(481),
    [anon_sym_u64] = ACTIONS(481),
    [anon_sym_enum] = ACTIONS(481),
    [anon_sym_i16] = ACTIONS(481),
  },
  [139] = {
    [sym_static_assignment] = STATE(150),
    [sym_is_declare] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(353),
    [anon_sym_s8] = ACTIONS(353),
    [anon_sym_private] = ACTIONS(353),
    [anon_sym_u8] = ACTIONS(353),
    [anon_sym_f64] = ACTIONS(353),
    [anon_sym_u32] = ACTIONS(353),
    [anon_sym_i8] = ACTIONS(353),
    [anon_sym_method] = ACTIONS(353),
    [anon_sym_end] = ACTIONS(353),
    [anon_sym_s32] = ACTIONS(353),
    [anon_sym_publish] = ACTIONS(353),
    [sym_readonly] = ACTIONS(353),
    [anon_sym_i64] = ACTIONS(353),
    [anon_sym_f32] = ACTIONS(353),
    [sym_is_external] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(353),
    [anon_sym_COLON_EQ] = ACTIONS(286),
    [anon_sym_s16] = ACTIONS(353),
    [anon_sym_protected] = ACTIONS(353),
    [anon_sym_u16] = ACTIONS(353),
    [anon_sym_i32] = ACTIONS(353),
    [anon_sym_u64] = ACTIONS(353),
    [anon_sym_enum] = ACTIONS(353),
    [anon_sym_i16] = ACTIONS(353),
  },
  [140] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(483),
    [sym__comment] = ACTIONS(3),
  },
  [141] = {
    [sym_parameter_list] = STATE(188),
    [sym_return_list] = STATE(189),
    [anon_sym_DOT] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [142] = {
    [sym_is_declare] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_s8] = ACTIONS(345),
    [anon_sym_private] = ACTIONS(345),
    [anon_sym_u8] = ACTIONS(345),
    [anon_sym_f64] = ACTIONS(345),
    [anon_sym_u32] = ACTIONS(345),
    [anon_sym_i8] = ACTIONS(345),
    [anon_sym_method] = ACTIONS(345),
    [anon_sym_end] = ACTIONS(345),
    [anon_sym_s32] = ACTIONS(345),
    [anon_sym_publish] = ACTIONS(345),
    [sym_readonly] = ACTIONS(345),
    [anon_sym_i64] = ACTIONS(345),
    [anon_sym_f32] = ACTIONS(345),
    [sym_is_external] = ACTIONS(345),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(345),
    [anon_sym_s16] = ACTIONS(345),
    [anon_sym_protected] = ACTIONS(345),
    [anon_sym_u16] = ACTIONS(345),
    [anon_sym_i32] = ACTIONS(345),
    [anon_sym_u64] = ACTIONS(345),
    [anon_sym_enum] = ACTIONS(345),
    [anon_sym_i16] = ACTIONS(345),
  },
  [143] = {
    [sym_return_list] = STATE(189),
    [anon_sym_DOT] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [144] = {
    [anon_sym_DOT] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [145] = {
    [sym__collection_or_value] = STATE(163),
    [sym_character] = STATE(163),
    [sym_collection] = STATE(163),
    [sym__value] = STATE(163),
    [sym__number] = STATE(163),
    [sym_group_expression] = STATE(163),
    [sym__literal] = STATE(163),
    [sym_string] = STATE(163),
    [sym_identifier] = ACTIONS(349),
    [sym_double] = ACTIONS(351),
    [sym_float] = ACTIONS(351),
    [sym_oct] = ACTIONS(349),
    [anon_sym_SQUOTE] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(489),
    [sym_null] = ACTIONS(349),
    [sym_binary] = ACTIONS(351),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(351),
    [sym_integer] = ACTIONS(349),
  },
  [146] = {
    [anon_sym_DOT] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(495),
    [sym__comment] = ACTIONS(3),
  },
  [147] = {
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym_type] = STATE(26),
    [sym_access_control] = STATE(71),
    [sym_variable_definition] = STATE(194),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(35),
  },
  [148] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(497),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym__comment] = ACTIONS(3),
  },
  [149] = {
    [sym_integer] = ACTIONS(499),
    [anon_sym_section] = ACTIONS(499),
    [anon_sym_s8] = ACTIONS(499),
    [sym_double] = ACTIONS(501),
    [anon_sym_method] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_while] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_publish] = ACTIONS(499),
    [sym_readonly] = ACTIONS(499),
    [anon_sym_i64] = ACTIONS(499),
    [anon_sym_f32] = ACTIONS(499),
    [anon_sym_LPAREN] = ACTIONS(499),
    [sym_null] = ACTIONS(499),
    [sym_long] = ACTIONS(501),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(499),
    [sym_is_declare] = ACTIONS(499),
    [sym_hex] = ACTIONS(501),
    [anon_sym_switch] = ACTIONS(499),
    [sym_identifier] = ACTIONS(499),
    [anon_sym_private] = ACTIONS(499),
    [anon_sym_u8] = ACTIONS(499),
    [anon_sym_f64] = ACTIONS(499),
    [anon_sym_u32] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(501),
    [anon_sym_i8] = ACTIONS(499),
    [anon_sym_return] = ACTIONS(499),
    [anon_sym_goto] = ACTIONS(499),
    [sym_oct] = ACTIONS(499),
    [anon_sym_s32] = ACTIONS(499),
    [sym_is_external] = ACTIONS(499),
    [sym_float] = ACTIONS(501),
    [sym_binary] = ACTIONS(501),
    [anon_sym_function] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(501),
    [anon_sym_if] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(499),
    [anon_sym_u16] = ACTIONS(499),
    [anon_sym_i32] = ACTIONS(499),
    [anon_sym_u64] = ACTIONS(499),
    [anon_sym_enum] = ACTIONS(499),
    [anon_sym_i16] = ACTIONS(499),
  },
  [150] = {
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_s8] = ACTIONS(505),
    [anon_sym_method] = ACTIONS(505),
    [anon_sym_end] = ACTIONS(505),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(505),
    [sym_readonly] = ACTIONS(505),
    [anon_sym_i64] = ACTIONS(505),
    [anon_sym_f32] = ACTIONS(505),
    [anon_sym_s16] = ACTIONS(505),
    [sym_is_declare] = ACTIONS(505),
    [sym_identifier] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_private] = ACTIONS(505),
    [anon_sym_u8] = ACTIONS(505),
    [anon_sym_f64] = ACTIONS(505),
    [anon_sym_u32] = ACTIONS(505),
    [anon_sym_DOT] = ACTIONS(503),
    [anon_sym_i8] = ACTIONS(505),
    [anon_sym_s32] = ACTIONS(505),
    [sym_is_external] = ACTIONS(505),
    [anon_sym_function] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(505),
    [anon_sym_u16] = ACTIONS(505),
    [anon_sym_i32] = ACTIONS(505),
    [anon_sym_u64] = ACTIONS(505),
    [anon_sym_enum] = ACTIONS(505),
    [anon_sym_i16] = ACTIONS(505),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
  },
  [152] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(509),
    [sym__comment] = ACTIONS(3),
  },
  [153] = {
    [sym__enum_element] = STATE(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
  },
  [154] = {
    [aux_sym_enum_definition_repeat1] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
  },
  [155] = {
    [anon_sym_LBRACK] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [sym__comment] = ACTIONS(3),
  },
  [156] = {
    [sym_static_assignment] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_DOT] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(503),
    [anon_sym_COLON_EQ] = ACTIONS(214),
    [sym__comment] = ACTIONS(3),
  },
  [157] = {
    [anon_sym_section] = ACTIONS(517),
    [anon_sym_s8] = ACTIONS(517),
    [sym_double] = ACTIONS(519),
    [anon_sym_LBRACE] = ACTIONS(519),
    [anon_sym_end] = ACTIONS(517),
    [anon_sym_while] = ACTIONS(517),
    [sym_null] = ACTIONS(517),
    [anon_sym_publish] = ACTIONS(517),
    [sym_readonly] = ACTIONS(517),
    [anon_sym_i64] = ACTIONS(517),
    [anon_sym_f32] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [sym_long] = ACTIONS(519),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(517),
    [sym_hex] = ACTIONS(519),
    [anon_sym_switch] = ACTIONS(517),
    [sym_identifier] = ACTIONS(517),
    [anon_sym_private] = ACTIONS(517),
    [anon_sym_u8] = ACTIONS(517),
    [anon_sym_f64] = ACTIONS(517),
    [anon_sym_u32] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(519),
    [anon_sym_i8] = ACTIONS(517),
    [anon_sym_return] = ACTIONS(517),
    [anon_sym_goto] = ACTIONS(517),
    [sym_oct] = ACTIONS(517),
    [anon_sym_s32] = ACTIONS(517),
    [sym_float] = ACTIONS(519),
    [sym_binary] = ACTIONS(519),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_if] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(517),
    [anon_sym_u16] = ACTIONS(517),
    [anon_sym_i32] = ACTIONS(517),
    [anon_sym_u64] = ACTIONS(517),
    [sym_integer] = ACTIONS(517),
    [anon_sym_i16] = ACTIONS(517),
  },
  [158] = {
    [sym_return_list] = STATE(202),
    [anon_sym_DOT] = ACTIONS(521),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_DOT] = ACTIONS(521),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [160] = {
    [sym_array] = STATE(204),
    [aux_sym_type_repeat1] = STATE(203),
    [aux_sym_type_repeat2] = STATE(204),
    [sym_pointer] = STATE(203),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(523),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_STAR] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [161] = {
    [anon_sym_DOT] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [162] = {
    [aux_sym__comma_list_types_repeat1] = STATE(206),
    [anon_sym_DOT] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_s8] = ACTIONS(533),
    [anon_sym_method] = ACTIONS(533),
    [anon_sym_end] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(533),
    [sym_readonly] = ACTIONS(533),
    [anon_sym_i64] = ACTIONS(533),
    [anon_sym_f32] = ACTIONS(533),
    [anon_sym_s16] = ACTIONS(533),
    [sym_is_declare] = ACTIONS(533),
    [sym_identifier] = ACTIONS(533),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_private] = ACTIONS(533),
    [anon_sym_u8] = ACTIONS(533),
    [anon_sym_f64] = ACTIONS(533),
    [anon_sym_u32] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_i8] = ACTIONS(533),
    [anon_sym_s32] = ACTIONS(533),
    [sym_is_external] = ACTIONS(533),
    [anon_sym_function] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(533),
    [anon_sym_u16] = ACTIONS(533),
    [anon_sym_i32] = ACTIONS(533),
    [anon_sym_u64] = ACTIONS(533),
    [anon_sym_enum] = ACTIONS(533),
    [anon_sym_i16] = ACTIONS(533),
  },
  [164] = {
    [sym__collection_or_value] = STATE(207),
    [sym_character] = STATE(207),
    [sym_collection] = STATE(207),
    [sym__value] = STATE(207),
    [sym__number] = STATE(207),
    [sym_group_expression] = STATE(207),
    [sym__literal] = STATE(207),
    [sym_string] = STATE(207),
    [sym_identifier] = ACTIONS(535),
    [sym_double] = ACTIONS(537),
    [sym_float] = ACTIONS(537),
    [sym_oct] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(535),
    [sym_binary] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(537),
    [sym_integer] = ACTIONS(535),
  },
  [165] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(208),
    [anon_sym_RBRACE] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_PERCENT_EQ] = ACTIONS(541),
    [anon_sym_DASH_EQ] = ACTIONS(541),
    [anon_sym_PIPE_EQ] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(541),
    [anon_sym_PLUS_EQ] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_LT_LT_EQ] = ACTIONS(541),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(541),
    [anon_sym_AMP_EQ] = ACTIONS(541),
    [anon_sym_GT_GT_EQ] = ACTIONS(541),
    [anon_sym_COLON_EQ] = ACTIONS(541),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_STAR_EQ] = ACTIONS(541),
    [anon_sym_CARET_EQ] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
  },
  [167] = {
    [sym_is_declare] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(154),
    [anon_sym_s8] = ACTIONS(154),
    [anon_sym_private] = ACTIONS(154),
    [anon_sym_u8] = ACTIONS(154),
    [anon_sym_f64] = ACTIONS(154),
    [anon_sym_u32] = ACTIONS(154),
    [anon_sym_i8] = ACTIONS(154),
    [anon_sym_method] = ACTIONS(154),
    [anon_sym_end] = ACTIONS(154),
    [anon_sym_s32] = ACTIONS(154),
    [anon_sym_publish] = ACTIONS(154),
    [sym_readonly] = ACTIONS(154),
    [anon_sym_i64] = ACTIONS(154),
    [anon_sym_f32] = ACTIONS(154),
    [sym_is_external] = ACTIONS(154),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(154),
    [anon_sym_s16] = ACTIONS(154),
    [anon_sym_protected] = ACTIONS(154),
    [anon_sym_u16] = ACTIONS(154),
    [anon_sym_i32] = ACTIONS(154),
    [anon_sym_u64] = ACTIONS(154),
    [anon_sym_enum] = ACTIONS(154),
    [anon_sym_i16] = ACTIONS(154),
  },
  [168] = {
    [anon_sym_DOT] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [169] = {
    [sym_parameter_list] = STATE(210),
    [aux_sym_compound_macro_repeat1] = STATE(91),
    [sym__space] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
  },
  [170] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(212),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(212),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_end_while] = STATE(213),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(212),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(545),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [171] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [sym_long] = ACTIONS(549),
    [sym_double] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym_oct] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [sym_float] = ACTIONS(549),
    [sym_hex] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(547),
    [sym_integer] = ACTIONS(547),
    [sym_binary] = ACTIONS(549),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_STAR] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(551),
    [anon_sym_PLUS_EQ] = ACTIONS(551),
    [anon_sym_PIPE_PIPE] = ACTIONS(551),
    [anon_sym_SLASH] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(553),
    [anon_sym_LT_LT_EQ] = ACTIONS(551),
    [anon_sym_SLASH_EQ] = ACTIONS(551),
    [anon_sym_GT_GT_EQ] = ACTIONS(551),
    [anon_sym_AMP_EQ] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(553),
    [anon_sym_AMP_AMP] = ACTIONS(551),
    [anon_sym_LT_EQ] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(553),
    [anon_sym_GT_EQ] = ACTIONS(551),
    [anon_sym_CARET] = ACTIONS(553),
    [anon_sym_PLUS_PLUS] = ACTIONS(551),
    [anon_sym_PERCENT_EQ] = ACTIONS(551),
    [anon_sym_DASH_EQ] = ACTIONS(551),
    [anon_sym_PIPE_EQ] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_AMP] = ACTIONS(553),
    [anon_sym_BANG_EQ] = ACTIONS(551),
    [anon_sym_LT_LT] = ACTIONS(553),
    [anon_sym_PIPE] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(553),
    [anon_sym_GT] = ACTIONS(553),
    [anon_sym_DASH_DASH] = ACTIONS(553),
    [anon_sym_RBRACE] = ACTIONS(551),
    [anon_sym_STAR_EQ] = ACTIONS(551),
    [anon_sym_CARET_EQ] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
  },
  [173] = {
    [sym_group_expression] = STATE(214),
    [sym_character] = STATE(214),
    [sym__literal] = STATE(214),
    [sym_string] = STATE(214),
    [sym__value] = STATE(214),
    [sym__number] = STATE(214),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(555),
    [sym_identifier] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(555),
    [sym_hex] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(557),
    [sym_integer] = ACTIONS(557),
    [sym_binary] = ACTIONS(555),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [175] = {
    [aux_sym_switch_statement_repeat1] = STATE(219),
    [sym_case_statement] = STATE(219),
    [sym_default_statement] = STATE(218),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(563),
  },
  [176] = {
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_STAR] = ACTIONS(567),
    [anon_sym_EQ_EQ] = ACTIONS(565),
    [anon_sym_PLUS_EQ] = ACTIONS(565),
    [anon_sym_PIPE_PIPE] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(567),
    [anon_sym_LT_LT_EQ] = ACTIONS(565),
    [anon_sym_SLASH_EQ] = ACTIONS(565),
    [anon_sym_GT_GT_EQ] = ACTIONS(565),
    [anon_sym_AMP_EQ] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_AMP_AMP] = ACTIONS(565),
    [anon_sym_LT_EQ] = ACTIONS(565),
    [anon_sym_GT_GT] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(567),
    [anon_sym_GT_EQ] = ACTIONS(565),
    [anon_sym_CARET] = ACTIONS(567),
    [anon_sym_PLUS_PLUS] = ACTIONS(565),
    [anon_sym_PERCENT_EQ] = ACTIONS(565),
    [anon_sym_DASH_EQ] = ACTIONS(565),
    [anon_sym_PIPE_EQ] = ACTIONS(565),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(567),
    [anon_sym_BANG_EQ] = ACTIONS(565),
    [anon_sym_LT_LT] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(567),
    [anon_sym_GT] = ACTIONS(567),
    [anon_sym_DASH_DASH] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_STAR_EQ] = ACTIONS(565),
    [anon_sym_CARET_EQ] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
  },
  [177] = {
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_STAR] = ACTIONS(571),
    [anon_sym_EQ_EQ] = ACTIONS(569),
    [anon_sym_PLUS_EQ] = ACTIONS(569),
    [anon_sym_PIPE_PIPE] = ACTIONS(569),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_LT] = ACTIONS(571),
    [anon_sym_LT_LT_EQ] = ACTIONS(569),
    [anon_sym_SLASH_EQ] = ACTIONS(569),
    [anon_sym_GT_GT_EQ] = ACTIONS(569),
    [anon_sym_AMP_EQ] = ACTIONS(569),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(569),
    [anon_sym_DASH] = ACTIONS(571),
    [anon_sym_AMP_AMP] = ACTIONS(569),
    [anon_sym_LT_EQ] = ACTIONS(569),
    [anon_sym_GT_GT] = ACTIONS(571),
    [anon_sym_PERCENT] = ACTIONS(571),
    [anon_sym_GT_EQ] = ACTIONS(569),
    [anon_sym_CARET] = ACTIONS(571),
    [anon_sym_PLUS_PLUS] = ACTIONS(569),
    [anon_sym_PERCENT_EQ] = ACTIONS(569),
    [anon_sym_DASH_EQ] = ACTIONS(569),
    [anon_sym_PIPE_EQ] = ACTIONS(569),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(571),
    [anon_sym_BANG_EQ] = ACTIONS(569),
    [anon_sym_LT_LT] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(571),
    [anon_sym_GT] = ACTIONS(571),
    [anon_sym_DASH_DASH] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(569),
    [anon_sym_STAR_EQ] = ACTIONS(569),
    [anon_sym_CARET_EQ] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
  },
  [178] = {
    [aux_sym_string_repeat1] = STATE(178),
    [sym__space] = ACTIONS(248),
    [aux_sym_string_token1] = ACTIONS(573),
    [sym__comment] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(576),
  },
  [179] = {
    [sym_assignment_post_op] = STATE(134),
    [sym_binary_op] = STATE(221),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_BANG_EQ] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_DASH_DASH] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
  },
  [180] = {
    [anon_sym_RPAREN] = ACTIONS(578),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [181] = {
    [sym_group_expression] = STATE(222),
    [sym_character] = STATE(222),
    [sym__literal] = STATE(222),
    [sym_string] = STATE(222),
    [sym__value] = STATE(222),
    [sym__number] = STATE(222),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(580),
    [sym_identifier] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(582),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(580),
    [sym_hex] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(582),
    [sym_integer] = ACTIONS(582),
    [sym_binary] = ACTIONS(580),
  },
  [182] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(224),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(224),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_end_if] = STATE(225),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(224),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(584),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [183] = {
    [anon_sym_section] = ACTIONS(586),
    [anon_sym_s8] = ACTIONS(586),
    [sym_double] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(588),
    [anon_sym_end] = ACTIONS(586),
    [anon_sym_while] = ACTIONS(586),
    [sym_null] = ACTIONS(586),
    [anon_sym_publish] = ACTIONS(586),
    [sym_readonly] = ACTIONS(586),
    [anon_sym_i64] = ACTIONS(586),
    [anon_sym_f32] = ACTIONS(586),
    [anon_sym_LPAREN] = ACTIONS(586),
    [sym_long] = ACTIONS(588),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(586),
    [sym_hex] = ACTIONS(588),
    [anon_sym_switch] = ACTIONS(586),
    [sym_identifier] = ACTIONS(586),
    [anon_sym_private] = ACTIONS(586),
    [anon_sym_u8] = ACTIONS(586),
    [anon_sym_f64] = ACTIONS(586),
    [anon_sym_u32] = ACTIONS(586),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_i8] = ACTIONS(586),
    [anon_sym_return] = ACTIONS(586),
    [anon_sym_goto] = ACTIONS(586),
    [sym_oct] = ACTIONS(586),
    [anon_sym_s32] = ACTIONS(586),
    [sym_float] = ACTIONS(588),
    [sym_binary] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_if] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(586),
    [anon_sym_u16] = ACTIONS(586),
    [anon_sym_i32] = ACTIONS(586),
    [anon_sym_u64] = ACTIONS(586),
    [sym_integer] = ACTIONS(586),
    [anon_sym_i16] = ACTIONS(586),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_DOT] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [185] = {
    [sym_is_declare] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(592),
    [anon_sym_s8] = ACTIONS(592),
    [anon_sym_private] = ACTIONS(592),
    [anon_sym_u8] = ACTIONS(592),
    [anon_sym_f64] = ACTIONS(592),
    [anon_sym_u32] = ACTIONS(592),
    [anon_sym_i8] = ACTIONS(592),
    [anon_sym_method] = ACTIONS(592),
    [anon_sym_end] = ACTIONS(592),
    [anon_sym_s32] = ACTIONS(592),
    [anon_sym_publish] = ACTIONS(592),
    [sym_readonly] = ACTIONS(592),
    [anon_sym_i64] = ACTIONS(592),
    [anon_sym_f32] = ACTIONS(592),
    [sym_is_external] = ACTIONS(592),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(592),
    [anon_sym_s16] = ACTIONS(592),
    [anon_sym_protected] = ACTIONS(592),
    [anon_sym_u16] = ACTIONS(592),
    [anon_sym_i32] = ACTIONS(592),
    [anon_sym_u64] = ACTIONS(592),
    [anon_sym_enum] = ACTIONS(592),
    [anon_sym_i16] = ACTIONS(592),
  },
  [186] = {
    [sym_static_assignment] = STATE(200),
    [sym_is_declare] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(505),
    [anon_sym_s8] = ACTIONS(505),
    [anon_sym_private] = ACTIONS(505),
    [anon_sym_u8] = ACTIONS(505),
    [anon_sym_f64] = ACTIONS(505),
    [anon_sym_u32] = ACTIONS(505),
    [anon_sym_i8] = ACTIONS(505),
    [anon_sym_method] = ACTIONS(505),
    [anon_sym_end] = ACTIONS(505),
    [anon_sym_s32] = ACTIONS(505),
    [anon_sym_publish] = ACTIONS(505),
    [sym_readonly] = ACTIONS(505),
    [anon_sym_i64] = ACTIONS(505),
    [anon_sym_f32] = ACTIONS(505),
    [sym_is_external] = ACTIONS(505),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(505),
    [anon_sym_COLON_EQ] = ACTIONS(286),
    [anon_sym_s16] = ACTIONS(505),
    [anon_sym_protected] = ACTIONS(505),
    [anon_sym_u16] = ACTIONS(505),
    [anon_sym_i32] = ACTIONS(505),
    [anon_sym_u64] = ACTIONS(505),
    [anon_sym_enum] = ACTIONS(505),
    [anon_sym_i16] = ACTIONS(505),
  },
  [187] = {
    [sym_is_declare] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(517),
    [anon_sym_s8] = ACTIONS(517),
    [anon_sym_private] = ACTIONS(517),
    [anon_sym_u8] = ACTIONS(517),
    [anon_sym_f64] = ACTIONS(517),
    [anon_sym_u32] = ACTIONS(517),
    [anon_sym_i8] = ACTIONS(517),
    [anon_sym_method] = ACTIONS(517),
    [anon_sym_end] = ACTIONS(517),
    [anon_sym_s32] = ACTIONS(517),
    [anon_sym_publish] = ACTIONS(517),
    [sym_readonly] = ACTIONS(517),
    [anon_sym_i64] = ACTIONS(517),
    [anon_sym_f32] = ACTIONS(517),
    [sym_is_external] = ACTIONS(517),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(517),
    [anon_sym_s16] = ACTIONS(517),
    [anon_sym_protected] = ACTIONS(517),
    [anon_sym_u16] = ACTIONS(517),
    [anon_sym_i32] = ACTIONS(517),
    [anon_sym_u64] = ACTIONS(517),
    [anon_sym_enum] = ACTIONS(517),
    [anon_sym_i16] = ACTIONS(517),
  },
  [188] = {
    [sym_return_list] = STATE(227),
    [anon_sym_DOT] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
  },
  [189] = {
    [anon_sym_DOT] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [190] = {
    [sym__collection_or_value] = STATE(69),
    [sym_character] = STATE(228),
    [sym_collection] = STATE(69),
    [sym__value] = STATE(228),
    [sym__number] = STATE(228),
    [sym_group_expression] = STATE(228),
    [sym__literal] = STATE(228),
    [sym_string] = STATE(228),
    [sym_assignment_expression] = STATE(229),
    [sym_unary_op] = STATE(230),
    [sym_identifier] = ACTIONS(596),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [sym_double] = ACTIONS(598),
    [sym_float] = ACTIONS(598),
    [sym_oct] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(236),
    [sym_null] = ACTIONS(596),
    [sym_binary] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_hex] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(596),
  },
  [191] = {
    [aux_sym_string_repeat1] = STATE(232),
    [sym__space] = ACTIONS(248),
    [aux_sym_string_token1] = ACTIONS(600),
    [sym__comment] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(602),
  },
  [192] = {
    [sym__escape_sequence] = STATE(233),
    [anon_sym_BSLASH0] = ACTIONS(604),
    [anon_sym_BSLASHr] = ACTIONS(604),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(604),
    [anon_sym_BSLASHa] = ACTIONS(604),
    [anon_sym_BSLASHt] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(604),
    [anon_sym_BSLASHv] = ACTIONS(604),
    [anon_sym_BSLASHn] = ACTIONS(604),
    [aux_sym_character_token1] = ACTIONS(606),
    [anon_sym_BSLASHf] = ACTIONS(604),
  },
  [193] = {
    [sym__collection_or_value] = STATE(110),
    [sym_character] = STATE(110),
    [sym_collection] = STATE(110),
    [sym__value] = STATE(110),
    [sym__comma_list_collection_or_value] = STATE(234),
    [sym_group_expression] = STATE(110),
    [sym__number] = STATE(110),
    [sym__literal] = STATE(110),
    [sym_string] = STATE(110),
    [sym_identifier] = ACTIONS(222),
    [sym_double] = ACTIONS(224),
    [sym_float] = ACTIONS(224),
    [sym_oct] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(111),
    [sym_null] = ACTIONS(222),
    [sym_binary] = ACTIONS(224),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(224),
    [sym_integer] = ACTIONS(222),
  },
  [194] = {
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(608),
    [sym__comment] = ACTIONS(3),
  },
  [195] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(610),
    [sym__comment] = ACTIONS(3),
  },
  [196] = {
    [anon_sym_DOT] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_RPAREN] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(615),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(617),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [aux_sym_enum_definition_repeat1] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_s8] = ACTIONS(624),
    [anon_sym_method] = ACTIONS(624),
    [anon_sym_end] = ACTIONS(624),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(624),
    [sym_readonly] = ACTIONS(624),
    [anon_sym_i64] = ACTIONS(624),
    [anon_sym_f32] = ACTIONS(624),
    [anon_sym_s16] = ACTIONS(624),
    [sym_is_declare] = ACTIONS(624),
    [sym_identifier] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_private] = ACTIONS(624),
    [anon_sym_u8] = ACTIONS(624),
    [anon_sym_f64] = ACTIONS(624),
    [anon_sym_u32] = ACTIONS(624),
    [anon_sym_DOT] = ACTIONS(622),
    [anon_sym_i8] = ACTIONS(624),
    [anon_sym_s32] = ACTIONS(624),
    [sym_is_external] = ACTIONS(624),
    [anon_sym_function] = ACTIONS(624),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(624),
    [anon_sym_u16] = ACTIONS(624),
    [anon_sym_i32] = ACTIONS(624),
    [anon_sym_u64] = ACTIONS(624),
    [anon_sym_enum] = ACTIONS(624),
    [anon_sym_i16] = ACTIONS(624),
  },
  [201] = {
    [anon_sym_section] = ACTIONS(626),
    [anon_sym_s8] = ACTIONS(626),
    [sym_double] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_end] = ACTIONS(626),
    [anon_sym_while] = ACTIONS(626),
    [sym_null] = ACTIONS(626),
    [anon_sym_publish] = ACTIONS(626),
    [sym_readonly] = ACTIONS(626),
    [anon_sym_i64] = ACTIONS(626),
    [anon_sym_f32] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [sym_long] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(626),
    [sym_hex] = ACTIONS(628),
    [anon_sym_switch] = ACTIONS(626),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_u8] = ACTIONS(626),
    [anon_sym_f64] = ACTIONS(626),
    [anon_sym_u32] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [anon_sym_i8] = ACTIONS(626),
    [anon_sym_return] = ACTIONS(626),
    [anon_sym_goto] = ACTIONS(626),
    [sym_oct] = ACTIONS(626),
    [anon_sym_s32] = ACTIONS(626),
    [sym_float] = ACTIONS(628),
    [sym_binary] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_u16] = ACTIONS(626),
    [anon_sym_i32] = ACTIONS(626),
    [anon_sym_u64] = ACTIONS(626),
    [sym_integer] = ACTIONS(626),
    [anon_sym_i16] = ACTIONS(626),
  },
  [202] = {
    [anon_sym_DOT] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [sym_array] = STATE(239),
    [aux_sym_type_repeat1] = STATE(238),
    [aux_sym_type_repeat2] = STATE(239),
    [sym_pointer] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_STAR] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [sym_array] = STATE(240),
    [aux_sym_type_repeat2] = STATE(240),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [sym_type] = STATE(241),
    [sym__base_type] = STATE(160),
    [sym_primitive_type] = STATE(160),
    [sym_identifier] = ACTIONS(341),
    [anon_sym_s8] = ACTIONS(35),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_s32] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_s16] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [anon_sym_i16] = ACTIONS(35),
  },
  [206] = {
    [aux_sym__comma_list_types_repeat1] = STATE(242),
    [anon_sym_DOT] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(208),
    [anon_sym_RBRACE] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(638),
    [sym__comment] = ACTIONS(3),
  },
  [209] = {
    [sym_is_declare] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(298),
    [anon_sym_s8] = ACTIONS(298),
    [anon_sym_private] = ACTIONS(298),
    [anon_sym_u8] = ACTIONS(298),
    [anon_sym_f64] = ACTIONS(298),
    [anon_sym_u32] = ACTIONS(298),
    [anon_sym_i8] = ACTIONS(298),
    [anon_sym_method] = ACTIONS(298),
    [anon_sym_end] = ACTIONS(298),
    [anon_sym_s32] = ACTIONS(298),
    [anon_sym_publish] = ACTIONS(298),
    [sym_readonly] = ACTIONS(298),
    [anon_sym_i64] = ACTIONS(298),
    [anon_sym_f32] = ACTIONS(298),
    [sym_is_external] = ACTIONS(298),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(298),
    [anon_sym_s16] = ACTIONS(298),
    [anon_sym_protected] = ACTIONS(298),
    [anon_sym_u16] = ACTIONS(298),
    [anon_sym_i32] = ACTIONS(298),
    [anon_sym_u64] = ACTIONS(298),
    [anon_sym_enum] = ACTIONS(298),
    [anon_sym_i16] = ACTIONS(298),
  },
  [210] = {
    [anon_sym_DOT] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_while] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_end_while] = STATE(245),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(545),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [213] = {
    [anon_sym_DOT] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(647),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_STAR] = ACTIONS(651),
    [anon_sym_EQ_EQ] = ACTIONS(649),
    [anon_sym_PLUS_EQ] = ACTIONS(649),
    [anon_sym_PIPE_PIPE] = ACTIONS(649),
    [anon_sym_SLASH] = ACTIONS(651),
    [anon_sym_LT] = ACTIONS(651),
    [anon_sym_LT_LT_EQ] = ACTIONS(649),
    [anon_sym_SLASH_EQ] = ACTIONS(649),
    [anon_sym_GT_GT_EQ] = ACTIONS(649),
    [anon_sym_AMP_EQ] = ACTIONS(649),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(649),
    [anon_sym_DASH] = ACTIONS(651),
    [anon_sym_AMP_AMP] = ACTIONS(649),
    [anon_sym_LT_EQ] = ACTIONS(649),
    [anon_sym_GT_GT] = ACTIONS(651),
    [anon_sym_PERCENT] = ACTIONS(651),
    [anon_sym_GT_EQ] = ACTIONS(649),
    [anon_sym_CARET] = ACTIONS(651),
    [anon_sym_PLUS_PLUS] = ACTIONS(649),
    [anon_sym_PERCENT_EQ] = ACTIONS(649),
    [anon_sym_DASH_EQ] = ACTIONS(649),
    [anon_sym_PIPE_EQ] = ACTIONS(649),
    [anon_sym_COMMA] = ACTIONS(649),
    [anon_sym_DOT] = ACTIONS(649),
    [anon_sym_AMP] = ACTIONS(651),
    [anon_sym_BANG_EQ] = ACTIONS(649),
    [anon_sym_LT_LT] = ACTIONS(651),
    [anon_sym_PIPE] = ACTIONS(651),
    [anon_sym_PLUS] = ACTIONS(651),
    [anon_sym_GT] = ACTIONS(651),
    [anon_sym_DASH_DASH] = ACTIONS(651),
    [anon_sym_RBRACE] = ACTIONS(649),
    [anon_sym_STAR_EQ] = ACTIONS(649),
    [anon_sym_CARET_EQ] = ACTIONS(649),
    [sym__space] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(653),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [sym_group_expression] = STATE(248),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(228),
  },
  [218] = {
    [sym_end_switch] = STATE(250),
    [anon_sym_end] = ACTIONS(655),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [aux_sym_switch_statement_repeat1] = STATE(252),
    [sym_case_statement] = STATE(252),
    [sym_default_statement] = STATE(251),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(563),
  },
  [220] = {
    [anon_sym_section] = ACTIONS(553),
    [anon_sym_s8] = ACTIONS(553),
    [sym_double] = ACTIONS(551),
    [anon_sym_LBRACE] = ACTIONS(551),
    [anon_sym_while] = ACTIONS(553),
    [sym_null] = ACTIONS(553),
    [anon_sym_publish] = ACTIONS(553),
    [sym_readonly] = ACTIONS(553),
    [anon_sym_i64] = ACTIONS(553),
    [anon_sym_f32] = ACTIONS(553),
    [anon_sym_LPAREN] = ACTIONS(553),
    [sym_long] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(553),
    [sym_hex] = ACTIONS(551),
    [anon_sym_switch] = ACTIONS(553),
    [sym_identifier] = ACTIONS(553),
    [anon_sym_private] = ACTIONS(553),
    [anon_sym_u8] = ACTIONS(553),
    [anon_sym_f64] = ACTIONS(553),
    [anon_sym_u32] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_i8] = ACTIONS(553),
    [anon_sym_return] = ACTIONS(553),
    [anon_sym_goto] = ACTIONS(553),
    [anon_sym_SQUOTE] = ACTIONS(551),
    [anon_sym_s32] = ACTIONS(553),
    [sym_oct] = ACTIONS(553),
    [sym_float] = ACTIONS(551),
    [sym_binary] = ACTIONS(551),
    [anon_sym_DQUOTE] = ACTIONS(551),
    [anon_sym_if] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(553),
    [anon_sym_u16] = ACTIONS(553),
    [anon_sym_i32] = ACTIONS(553),
    [anon_sym_u64] = ACTIONS(553),
    [sym_integer] = ACTIONS(553),
    [anon_sym_i16] = ACTIONS(553),
  },
  [221] = {
    [sym_group_expression] = STATE(253),
    [sym_character] = STATE(253),
    [sym__literal] = STATE(253),
    [sym_string] = STATE(253),
    [sym__value] = STATE(253),
    [sym__number] = STATE(253),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(657),
    [sym_identifier] = ACTIONS(659),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(657),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(657),
    [sym_hex] = ACTIONS(657),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(659),
    [sym_integer] = ACTIONS(659),
    [sym_binary] = ACTIONS(657),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(661),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_if] = ACTIONS(663),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_end_if] = STATE(256),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(584),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [225] = {
    [anon_sym_DOT] = ACTIONS(665),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [sym_is_declare] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_s8] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_u8] = ACTIONS(626),
    [anon_sym_f64] = ACTIONS(626),
    [anon_sym_u32] = ACTIONS(626),
    [anon_sym_i8] = ACTIONS(626),
    [anon_sym_method] = ACTIONS(626),
    [anon_sym_end] = ACTIONS(626),
    [anon_sym_s32] = ACTIONS(626),
    [anon_sym_publish] = ACTIONS(626),
    [sym_readonly] = ACTIONS(626),
    [anon_sym_i64] = ACTIONS(626),
    [anon_sym_f32] = ACTIONS(626),
    [sym_is_external] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(626),
    [anon_sym_s16] = ACTIONS(626),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_u16] = ACTIONS(626),
    [anon_sym_i32] = ACTIONS(626),
    [anon_sym_u64] = ACTIONS(626),
    [anon_sym_enum] = ACTIONS(626),
    [anon_sym_i16] = ACTIONS(626),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(667),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [sym_assignment_post_op] = STATE(134),
    [sym_binary_op] = STATE(259),
    [anon_sym_RPAREN] = ACTIONS(669),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(377),
    [anon_sym_PLUS_EQ] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_LT_LT_EQ] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [anon_sym_GT_GT_EQ] = ACTIONS(266),
    [anon_sym_AMP_EQ] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_AMP_AMP] = ACTIONS(377),
    [anon_sym_LT_EQ] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(375),
    [anon_sym_PLUS_PLUS] = ACTIONS(264),
    [anon_sym_PERCENT_EQ] = ACTIONS(266),
    [anon_sym_DASH_EQ] = ACTIONS(266),
    [anon_sym_PIPE_EQ] = ACTIONS(266),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_BANG_EQ] = ACTIONS(377),
    [anon_sym_LT_LT] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_DASH_DASH] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(266),
    [anon_sym_CARET_EQ] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(669),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [sym_group_expression] = STATE(260),
    [sym_character] = STATE(260),
    [sym__literal] = STATE(260),
    [sym_string] = STATE(260),
    [sym__value] = STATE(260),
    [sym__number] = STATE(260),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(671),
    [sym_identifier] = ACTIONS(673),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(671),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(673),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(671),
    [sym_hex] = ACTIONS(671),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(673),
    [sym_integer] = ACTIONS(673),
    [sym_binary] = ACTIONS(671),
  },
  [231] = {
    [sym_is_declare] = ACTIONS(395),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(395),
    [anon_sym_s8] = ACTIONS(395),
    [anon_sym_private] = ACTIONS(395),
    [anon_sym_u8] = ACTIONS(395),
    [anon_sym_f64] = ACTIONS(395),
    [anon_sym_u32] = ACTIONS(395),
    [anon_sym_i8] = ACTIONS(395),
    [anon_sym_method] = ACTIONS(395),
    [anon_sym_end] = ACTIONS(395),
    [anon_sym_s32] = ACTIONS(395),
    [anon_sym_publish] = ACTIONS(395),
    [sym_readonly] = ACTIONS(395),
    [anon_sym_i64] = ACTIONS(395),
    [anon_sym_f32] = ACTIONS(395),
    [sym_is_external] = ACTIONS(395),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(395),
    [anon_sym_s16] = ACTIONS(395),
    [anon_sym_protected] = ACTIONS(395),
    [anon_sym_u16] = ACTIONS(395),
    [anon_sym_i32] = ACTIONS(395),
    [anon_sym_u64] = ACTIONS(395),
    [anon_sym_enum] = ACTIONS(395),
    [anon_sym_i16] = ACTIONS(395),
  },
  [232] = {
    [aux_sym_string_repeat1] = STATE(178),
    [sym__space] = ACTIONS(248),
    [aux_sym_string_token1] = ACTIONS(397),
    [sym__comment] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(675),
  },
  [233] = {
    [anon_sym_SQUOTE] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_RBRACE] = ACTIONS(679),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [sym_is_declare] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(681),
    [anon_sym_s8] = ACTIONS(681),
    [anon_sym_private] = ACTIONS(681),
    [anon_sym_u8] = ACTIONS(681),
    [anon_sym_f64] = ACTIONS(681),
    [anon_sym_u32] = ACTIONS(681),
    [anon_sym_i8] = ACTIONS(681),
    [anon_sym_method] = ACTIONS(681),
    [anon_sym_end] = ACTIONS(681),
    [anon_sym_s32] = ACTIONS(681),
    [anon_sym_publish] = ACTIONS(681),
    [sym_readonly] = ACTIONS(681),
    [anon_sym_i64] = ACTIONS(681),
    [anon_sym_f32] = ACTIONS(681),
    [sym_is_external] = ACTIONS(681),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(681),
    [anon_sym_s16] = ACTIONS(681),
    [anon_sym_protected] = ACTIONS(681),
    [anon_sym_u16] = ACTIONS(681),
    [anon_sym_i32] = ACTIONS(681),
    [anon_sym_u64] = ACTIONS(681),
    [anon_sym_enum] = ACTIONS(681),
    [anon_sym_i16] = ACTIONS(681),
  },
  [236] = {
    [anon_sym_DOT] = ACTIONS(683),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [anon_sym_section] = ACTIONS(685),
    [anon_sym_s8] = ACTIONS(685),
    [sym_double] = ACTIONS(687),
    [anon_sym_LBRACE] = ACTIONS(687),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_while] = ACTIONS(685),
    [sym_null] = ACTIONS(685),
    [anon_sym_publish] = ACTIONS(685),
    [sym_readonly] = ACTIONS(685),
    [anon_sym_i64] = ACTIONS(685),
    [anon_sym_f32] = ACTIONS(685),
    [anon_sym_LPAREN] = ACTIONS(685),
    [sym_long] = ACTIONS(687),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(685),
    [sym_hex] = ACTIONS(687),
    [anon_sym_switch] = ACTIONS(685),
    [sym_identifier] = ACTIONS(685),
    [anon_sym_private] = ACTIONS(685),
    [anon_sym_u8] = ACTIONS(685),
    [anon_sym_f64] = ACTIONS(685),
    [anon_sym_u32] = ACTIONS(685),
    [anon_sym_SQUOTE] = ACTIONS(687),
    [anon_sym_i8] = ACTIONS(685),
    [anon_sym_return] = ACTIONS(685),
    [anon_sym_goto] = ACTIONS(685),
    [sym_oct] = ACTIONS(685),
    [anon_sym_s32] = ACTIONS(685),
    [sym_float] = ACTIONS(687),
    [sym_binary] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [anon_sym_if] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(685),
    [anon_sym_u16] = ACTIONS(685),
    [anon_sym_i32] = ACTIONS(685),
    [anon_sym_u64] = ACTIONS(685),
    [sym_integer] = ACTIONS(685),
    [anon_sym_i16] = ACTIONS(685),
  },
  [238] = {
    [aux_sym_type_repeat1] = STATE(238),
    [sym_pointer] = STATE(238),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
  },
  [239] = {
    [sym_array] = STATE(240),
    [aux_sym_type_repeat2] = STATE(240),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(689),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(689),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [sym_array] = STATE(240),
    [aux_sym_type_repeat2] = STATE(240),
    [anon_sym_LBRACK] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(691),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(691),
    [sym__comment] = ACTIONS(3),
  },
  [241] = {
    [anon_sym_DOT] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(693),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [aux_sym__comma_list_types_repeat1] = STATE(242),
    [anon_sym_DOT] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(695),
    [sym__comment] = ACTIONS(3),
  },
  [243] = {
    [sym_is_declare] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(499),
    [anon_sym_s8] = ACTIONS(499),
    [anon_sym_private] = ACTIONS(499),
    [anon_sym_u8] = ACTIONS(499),
    [anon_sym_f64] = ACTIONS(499),
    [anon_sym_u32] = ACTIONS(499),
    [anon_sym_i8] = ACTIONS(499),
    [anon_sym_method] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_s32] = ACTIONS(499),
    [anon_sym_publish] = ACTIONS(499),
    [sym_readonly] = ACTIONS(499),
    [anon_sym_i64] = ACTIONS(499),
    [anon_sym_f32] = ACTIONS(499),
    [sym_is_external] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(499),
    [anon_sym_s16] = ACTIONS(499),
    [anon_sym_protected] = ACTIONS(499),
    [anon_sym_u16] = ACTIONS(499),
    [anon_sym_i32] = ACTIONS(499),
    [anon_sym_u64] = ACTIONS(499),
    [anon_sym_enum] = ACTIONS(499),
    [anon_sym_i16] = ACTIONS(499),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(698),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_DOT] = ACTIONS(700),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_STAR] = ACTIONS(704),
    [anon_sym_EQ_EQ] = ACTIONS(702),
    [anon_sym_PLUS_EQ] = ACTIONS(702),
    [anon_sym_PIPE_PIPE] = ACTIONS(702),
    [anon_sym_SLASH] = ACTIONS(704),
    [anon_sym_LT] = ACTIONS(704),
    [anon_sym_LT_LT_EQ] = ACTIONS(702),
    [anon_sym_SLASH_EQ] = ACTIONS(702),
    [anon_sym_GT_GT_EQ] = ACTIONS(702),
    [anon_sym_AMP_EQ] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(702),
    [anon_sym_DASH] = ACTIONS(704),
    [anon_sym_AMP_AMP] = ACTIONS(702),
    [anon_sym_LT_EQ] = ACTIONS(702),
    [anon_sym_GT_GT] = ACTIONS(704),
    [anon_sym_PERCENT] = ACTIONS(704),
    [anon_sym_GT_EQ] = ACTIONS(702),
    [anon_sym_CARET] = ACTIONS(704),
    [anon_sym_PLUS_PLUS] = ACTIONS(702),
    [anon_sym_PERCENT_EQ] = ACTIONS(702),
    [anon_sym_DASH_EQ] = ACTIONS(702),
    [anon_sym_PIPE_EQ] = ACTIONS(702),
    [anon_sym_COMMA] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(702),
    [anon_sym_AMP] = ACTIONS(704),
    [anon_sym_BANG_EQ] = ACTIONS(702),
    [anon_sym_LT_LT] = ACTIONS(704),
    [anon_sym_PIPE] = ACTIONS(704),
    [anon_sym_PLUS] = ACTIONS(704),
    [anon_sym_GT] = ACTIONS(704),
    [anon_sym_DASH_DASH] = ACTIONS(704),
    [anon_sym_RBRACE] = ACTIONS(702),
    [anon_sym_STAR_EQ] = ACTIONS(702),
    [anon_sym_CARET_EQ] = ACTIONS(702),
    [sym__space] = ACTIONS(3),
  },
  [247] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(266),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(266),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(266),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [sym_end_default] = STATE(267),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(706),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [248] = {
    [anon_sym_DOT] = ACTIONS(708),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [249] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(710),
    [sym__comment] = ACTIONS(3),
  },
  [250] = {
    [anon_sym_DOT] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [251] = {
    [sym_end_switch] = STATE(270),
    [anon_sym_end] = ACTIONS(655),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [252] = {
    [sym_case_statement] = STATE(252),
    [aux_sym_switch_statement_repeat1] = STATE(252),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(714),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(716),
  },
  [253] = {
    [anon_sym_RPAREN] = ACTIONS(719),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_section] = ACTIONS(651),
    [anon_sym_s8] = ACTIONS(651),
    [sym_double] = ACTIONS(649),
    [anon_sym_LBRACE] = ACTIONS(649),
    [anon_sym_while] = ACTIONS(651),
    [sym_null] = ACTIONS(651),
    [anon_sym_publish] = ACTIONS(651),
    [sym_readonly] = ACTIONS(651),
    [anon_sym_i64] = ACTIONS(651),
    [anon_sym_f32] = ACTIONS(651),
    [anon_sym_LPAREN] = ACTIONS(651),
    [sym_long] = ACTIONS(649),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(651),
    [sym_hex] = ACTIONS(649),
    [anon_sym_switch] = ACTIONS(651),
    [sym_identifier] = ACTIONS(651),
    [anon_sym_private] = ACTIONS(651),
    [anon_sym_u8] = ACTIONS(651),
    [anon_sym_f64] = ACTIONS(651),
    [anon_sym_u32] = ACTIONS(651),
    [anon_sym_DOT] = ACTIONS(649),
    [anon_sym_i8] = ACTIONS(651),
    [anon_sym_return] = ACTIONS(651),
    [anon_sym_goto] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [anon_sym_s32] = ACTIONS(651),
    [sym_oct] = ACTIONS(651),
    [sym_float] = ACTIONS(649),
    [sym_binary] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [anon_sym_if] = ACTIONS(651),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(651),
    [anon_sym_u16] = ACTIONS(651),
    [anon_sym_i32] = ACTIONS(651),
    [anon_sym_u64] = ACTIONS(651),
    [sym_integer] = ACTIONS(651),
    [anon_sym_i16] = ACTIONS(651),
  },
  [255] = {
    [anon_sym_DOT] = ACTIONS(721),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_DOT] = ACTIONS(723),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [257] = {
    [sym_is_declare] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(685),
    [anon_sym_s8] = ACTIONS(685),
    [anon_sym_private] = ACTIONS(685),
    [anon_sym_u8] = ACTIONS(685),
    [anon_sym_f64] = ACTIONS(685),
    [anon_sym_u32] = ACTIONS(685),
    [anon_sym_i8] = ACTIONS(685),
    [anon_sym_method] = ACTIONS(685),
    [anon_sym_end] = ACTIONS(685),
    [anon_sym_s32] = ACTIONS(685),
    [anon_sym_publish] = ACTIONS(685),
    [sym_readonly] = ACTIONS(685),
    [anon_sym_i64] = ACTIONS(685),
    [anon_sym_f32] = ACTIONS(685),
    [sym_is_external] = ACTIONS(685),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(685),
    [anon_sym_s16] = ACTIONS(685),
    [anon_sym_protected] = ACTIONS(685),
    [anon_sym_u16] = ACTIONS(685),
    [anon_sym_i32] = ACTIONS(685),
    [anon_sym_u64] = ACTIONS(685),
    [anon_sym_enum] = ACTIONS(685),
    [anon_sym_i16] = ACTIONS(685),
  },
  [258] = {
    [sym_is_declare] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(553),
    [anon_sym_s8] = ACTIONS(553),
    [anon_sym_private] = ACTIONS(553),
    [anon_sym_u8] = ACTIONS(553),
    [anon_sym_f64] = ACTIONS(553),
    [anon_sym_u32] = ACTIONS(553),
    [anon_sym_i8] = ACTIONS(553),
    [anon_sym_method] = ACTIONS(553),
    [anon_sym_end] = ACTIONS(553),
    [anon_sym_s32] = ACTIONS(553),
    [anon_sym_publish] = ACTIONS(553),
    [sym_readonly] = ACTIONS(553),
    [anon_sym_i64] = ACTIONS(553),
    [anon_sym_f32] = ACTIONS(553),
    [sym_is_external] = ACTIONS(553),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(553),
    [anon_sym_s16] = ACTIONS(553),
    [anon_sym_protected] = ACTIONS(553),
    [anon_sym_u16] = ACTIONS(553),
    [anon_sym_i32] = ACTIONS(553),
    [anon_sym_u64] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_i16] = ACTIONS(553),
  },
  [259] = {
    [sym_group_expression] = STATE(272),
    [sym_character] = STATE(272),
    [sym__literal] = STATE(272),
    [sym_string] = STATE(272),
    [sym__value] = STATE(272),
    [sym__number] = STATE(272),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(725),
    [sym_identifier] = ACTIONS(727),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_double] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym_oct] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [sym_float] = ACTIONS(725),
    [sym_hex] = ACTIONS(725),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(727),
    [sym_integer] = ACTIONS(727),
    [sym_binary] = ACTIONS(725),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [261] = {
    [sym_is_declare] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(571),
    [anon_sym_s8] = ACTIONS(571),
    [anon_sym_private] = ACTIONS(571),
    [anon_sym_u8] = ACTIONS(571),
    [anon_sym_f64] = ACTIONS(571),
    [anon_sym_u32] = ACTIONS(571),
    [anon_sym_i8] = ACTIONS(571),
    [anon_sym_method] = ACTIONS(571),
    [anon_sym_end] = ACTIONS(571),
    [anon_sym_s32] = ACTIONS(571),
    [anon_sym_publish] = ACTIONS(571),
    [sym_readonly] = ACTIONS(571),
    [anon_sym_i64] = ACTIONS(571),
    [anon_sym_f32] = ACTIONS(571),
    [sym_is_external] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(571),
    [anon_sym_s16] = ACTIONS(571),
    [anon_sym_protected] = ACTIONS(571),
    [anon_sym_u16] = ACTIONS(571),
    [anon_sym_i32] = ACTIONS(571),
    [anon_sym_u64] = ACTIONS(571),
    [anon_sym_enum] = ACTIONS(571),
    [anon_sym_i16] = ACTIONS(571),
  },
  [262] = {
    [sym_is_declare] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(567),
    [anon_sym_s8] = ACTIONS(567),
    [anon_sym_private] = ACTIONS(567),
    [anon_sym_u8] = ACTIONS(567),
    [anon_sym_f64] = ACTIONS(567),
    [anon_sym_u32] = ACTIONS(567),
    [anon_sym_i8] = ACTIONS(567),
    [anon_sym_method] = ACTIONS(567),
    [anon_sym_end] = ACTIONS(567),
    [anon_sym_s32] = ACTIONS(567),
    [anon_sym_publish] = ACTIONS(567),
    [sym_readonly] = ACTIONS(567),
    [anon_sym_i64] = ACTIONS(567),
    [anon_sym_f32] = ACTIONS(567),
    [sym_is_external] = ACTIONS(567),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(567),
    [anon_sym_s16] = ACTIONS(567),
    [anon_sym_protected] = ACTIONS(567),
    [anon_sym_u16] = ACTIONS(567),
    [anon_sym_i32] = ACTIONS(567),
    [anon_sym_u64] = ACTIONS(567),
    [anon_sym_enum] = ACTIONS(567),
    [anon_sym_i16] = ACTIONS(567),
  },
  [263] = {
    [sym_is_declare] = ACTIONS(731),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(731),
    [anon_sym_s8] = ACTIONS(731),
    [anon_sym_private] = ACTIONS(731),
    [anon_sym_u8] = ACTIONS(731),
    [anon_sym_f64] = ACTIONS(731),
    [anon_sym_u32] = ACTIONS(731),
    [anon_sym_i8] = ACTIONS(731),
    [anon_sym_method] = ACTIONS(731),
    [anon_sym_end] = ACTIONS(731),
    [anon_sym_s32] = ACTIONS(731),
    [anon_sym_publish] = ACTIONS(731),
    [sym_readonly] = ACTIONS(731),
    [anon_sym_i64] = ACTIONS(731),
    [anon_sym_f32] = ACTIONS(731),
    [sym_is_external] = ACTIONS(731),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(731),
    [anon_sym_s16] = ACTIONS(731),
    [anon_sym_protected] = ACTIONS(731),
    [anon_sym_u16] = ACTIONS(731),
    [anon_sym_i32] = ACTIONS(731),
    [anon_sym_u64] = ACTIONS(731),
    [anon_sym_enum] = ACTIONS(731),
    [anon_sym_i16] = ACTIONS(731),
  },
  [264] = {
    [sym_is_declare] = ACTIONS(733),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(733),
    [anon_sym_s8] = ACTIONS(733),
    [anon_sym_private] = ACTIONS(733),
    [anon_sym_u8] = ACTIONS(733),
    [anon_sym_f64] = ACTIONS(733),
    [anon_sym_u32] = ACTIONS(733),
    [anon_sym_i8] = ACTIONS(733),
    [anon_sym_method] = ACTIONS(733),
    [anon_sym_end] = ACTIONS(733),
    [anon_sym_s32] = ACTIONS(733),
    [anon_sym_publish] = ACTIONS(733),
    [sym_readonly] = ACTIONS(733),
    [anon_sym_i64] = ACTIONS(733),
    [anon_sym_f32] = ACTIONS(733),
    [sym_is_external] = ACTIONS(733),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(733),
    [anon_sym_s16] = ACTIONS(733),
    [anon_sym_protected] = ACTIONS(733),
    [anon_sym_u16] = ACTIONS(733),
    [anon_sym_i32] = ACTIONS(733),
    [anon_sym_u64] = ACTIONS(733),
    [anon_sym_enum] = ACTIONS(733),
    [anon_sym_i16] = ACTIONS(733),
  },
  [265] = {
    [anon_sym_default] = ACTIONS(735),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [266] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [sym_end_default] = STATE(275),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(706),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [267] = {
    [anon_sym_DOT] = ACTIONS(737),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [268] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(278),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(278),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(278),
    [sym_end_case] = STATE(279),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(739),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [269] = {
    [anon_sym_DOT] = ACTIONS(741),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [270] = {
    [anon_sym_DOT] = ACTIONS(743),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [271] = {
    [anon_sym_section] = ACTIONS(704),
    [anon_sym_s8] = ACTIONS(704),
    [sym_double] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_while] = ACTIONS(704),
    [sym_null] = ACTIONS(704),
    [anon_sym_publish] = ACTIONS(704),
    [sym_readonly] = ACTIONS(704),
    [anon_sym_i64] = ACTIONS(704),
    [anon_sym_f32] = ACTIONS(704),
    [anon_sym_LPAREN] = ACTIONS(704),
    [sym_long] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(704),
    [sym_hex] = ACTIONS(702),
    [anon_sym_switch] = ACTIONS(704),
    [sym_identifier] = ACTIONS(704),
    [anon_sym_private] = ACTIONS(704),
    [anon_sym_u8] = ACTIONS(704),
    [anon_sym_f64] = ACTIONS(704),
    [anon_sym_u32] = ACTIONS(704),
    [anon_sym_DOT] = ACTIONS(702),
    [anon_sym_i8] = ACTIONS(704),
    [anon_sym_return] = ACTIONS(704),
    [anon_sym_goto] = ACTIONS(704),
    [anon_sym_SQUOTE] = ACTIONS(702),
    [anon_sym_s32] = ACTIONS(704),
    [sym_oct] = ACTIONS(704),
    [sym_float] = ACTIONS(702),
    [sym_binary] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [anon_sym_if] = ACTIONS(704),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(704),
    [anon_sym_u16] = ACTIONS(704),
    [anon_sym_i32] = ACTIONS(704),
    [anon_sym_u64] = ACTIONS(704),
    [sym_integer] = ACTIONS(704),
    [anon_sym_i16] = ACTIONS(704),
  },
  [272] = {
    [anon_sym_RPAREN] = ACTIONS(745),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [sym_is_declare] = ACTIONS(651),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(651),
    [anon_sym_s8] = ACTIONS(651),
    [anon_sym_private] = ACTIONS(651),
    [anon_sym_u8] = ACTIONS(651),
    [anon_sym_f64] = ACTIONS(651),
    [anon_sym_u32] = ACTIONS(651),
    [anon_sym_i8] = ACTIONS(651),
    [anon_sym_method] = ACTIONS(651),
    [anon_sym_end] = ACTIONS(651),
    [anon_sym_s32] = ACTIONS(651),
    [anon_sym_publish] = ACTIONS(651),
    [sym_readonly] = ACTIONS(651),
    [anon_sym_i64] = ACTIONS(651),
    [anon_sym_f32] = ACTIONS(651),
    [sym_is_external] = ACTIONS(651),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(651),
    [anon_sym_s16] = ACTIONS(651),
    [anon_sym_protected] = ACTIONS(651),
    [anon_sym_u16] = ACTIONS(651),
    [anon_sym_i32] = ACTIONS(651),
    [anon_sym_u64] = ACTIONS(651),
    [anon_sym_enum] = ACTIONS(651),
    [anon_sym_i16] = ACTIONS(651),
  },
  [274] = {
    [anon_sym_DOT] = ACTIONS(747),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [275] = {
    [anon_sym_DOT] = ACTIONS(749),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [276] = {
    [anon_sym_end] = ACTIONS(751),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [277] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(753),
  },
  [278] = {
    [sym__collection_or_value] = STATE(69),
    [sym__base_type] = STATE(22),
    [sym_primitive_type] = STATE(22),
    [sym__control_flow_statement] = STATE(70),
    [sym_access_control] = STATE(71),
    [sym_goto_statement] = STATE(70),
    [sym_switch_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_group_expression] = STATE(72),
    [sym_character] = STATE(74),
    [aux_sym_compound_macro_block_repeat1] = STATE(131),
    [sym__literal] = STATE(74),
    [sym_type] = STATE(26),
    [sym_string] = STATE(74),
    [sym__statement] = STATE(131),
    [sym_if_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_expression_statement] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__value] = STATE(74),
    [sym_collection] = STATE(69),
    [sym__number] = STATE(74),
    [sym_section_statement] = STATE(70),
    [sym_single_line_if_statement] = STATE(131),
    [sym_end_case] = STATE(283),
    [sym__variable_statement] = STATE(70),
    [sym_assignment_expression] = STATE(75),
    [anon_sym_section] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(35),
    [sym_double] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_end] = ACTIONS(739),
    [sym_null] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(113),
    [anon_sym_publish] = ACTIONS(140),
    [sym_readonly] = ACTIONS(45),
    [anon_sym_i64] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(121),
    [sym_long] = ACTIONS(104),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(35),
    [sym_hex] = ACTIONS(104),
    [sym_identifier] = ACTIONS(142),
    [anon_sym_switch] = ACTIONS(126),
    [anon_sym_private] = ACTIONS(140),
    [anon_sym_u8] = ACTIONS(35),
    [anon_sym_f64] = ACTIONS(35),
    [anon_sym_u32] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [anon_sym_i8] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(130),
    [anon_sym_goto] = ACTIONS(132),
    [sym_oct] = ACTIONS(97),
    [anon_sym_s32] = ACTIONS(35),
    [sym_float] = ACTIONS(104),
    [sym_binary] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(140),
    [anon_sym_u16] = ACTIONS(35),
    [anon_sym_i32] = ACTIONS(35),
    [anon_sym_u64] = ACTIONS(35),
    [sym_integer] = ACTIONS(97),
    [anon_sym_i16] = ACTIONS(35),
  },
  [279] = {
    [anon_sym_DOT] = ACTIONS(755),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [280] = {
    [sym_is_declare] = ACTIONS(704),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(704),
    [anon_sym_s8] = ACTIONS(704),
    [anon_sym_private] = ACTIONS(704),
    [anon_sym_u8] = ACTIONS(704),
    [anon_sym_f64] = ACTIONS(704),
    [anon_sym_u32] = ACTIONS(704),
    [anon_sym_i8] = ACTIONS(704),
    [anon_sym_method] = ACTIONS(704),
    [anon_sym_end] = ACTIONS(704),
    [anon_sym_s32] = ACTIONS(704),
    [anon_sym_publish] = ACTIONS(704),
    [sym_readonly] = ACTIONS(704),
    [anon_sym_i64] = ACTIONS(704),
    [anon_sym_f32] = ACTIONS(704),
    [sym_is_external] = ACTIONS(704),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(704),
    [anon_sym_s16] = ACTIONS(704),
    [anon_sym_protected] = ACTIONS(704),
    [anon_sym_u16] = ACTIONS(704),
    [anon_sym_i32] = ACTIONS(704),
    [anon_sym_u64] = ACTIONS(704),
    [anon_sym_enum] = ACTIONS(704),
    [anon_sym_i16] = ACTIONS(704),
  },
  [281] = {
    [anon_sym_end] = ACTIONS(757),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [282] = {
    [anon_sym_DOT] = ACTIONS(759),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [283] = {
    [anon_sym_DOT] = ACTIONS(761),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [284] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(763),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(763),
  },
  [285] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(765),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(765),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_sentences, 1),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [17] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_sentences, 2),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(12),
  [25] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(14),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = false}, SHIFT(13),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = false}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(36),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(41),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(43),
  [81] = {.count = 1, .reusable = true}, SHIFT(44),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(45),
  [87] = {.count = 1, .reusable = false}, SHIFT(48),
  [89] = {.count = 1, .reusable = false}, SHIFT(52),
  [91] = {.count = 1, .reusable = false}, SHIFT(53),
  [93] = {.count = 1, .reusable = true}, SHIFT(54),
  [95] = {.count = 1, .reusable = true}, SHIFT(55),
  [97] = {.count = 1, .reusable = false}, SHIFT(74),
  [99] = {.count = 1, .reusable = false}, SHIFT(56),
  [101] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(15),
  [104] = {.count = 1, .reusable = true}, SHIFT(74),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [108] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(58),
  [111] = {.count = 1, .reusable = true}, SHIFT(57),
  [113] = {.count = 1, .reusable = false}, SHIFT(59),
  [115] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(60),
  [118] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(19),
  [121] = {.count = 1, .reusable = false}, SHIFT(61),
  [123] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(62),
  [126] = {.count = 1, .reusable = false}, SHIFT(63),
  [128] = {.count = 1, .reusable = true}, SHIFT(64),
  [130] = {.count = 1, .reusable = false}, SHIFT(65),
  [132] = {.count = 1, .reusable = false}, SHIFT(66),
  [134] = {.count = 1, .reusable = true}, SHIFT(67),
  [136] = {.count = 1, .reusable = false}, SHIFT(68),
  [138] = {.count = 1, .reusable = false}, SHIFT(77),
  [140] = {.count = 1, .reusable = false}, SHIFT(60),
  [142] = {.count = 1, .reusable = false}, SHIFT(62),
  [144] = {.count = 1, .reusable = false}, SHIFT(81),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [148] = {.count = 1, .reusable = false}, SHIFT(83),
  [150] = {.count = 1, .reusable = false}, SHIFT(84),
  [152] = {.count = 1, .reusable = false}, SHIFT(85),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [158] = {.count = 1, .reusable = true}, SHIFT(86),
  [160] = {.count = 1, .reusable = true}, SHIFT(89),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [164] = {.count = 1, .reusable = false}, SHIFT(92),
  [166] = {.count = 1, .reusable = false}, SHIFT(93),
  [168] = {.count = 1, .reusable = true}, SHIFT(95),
  [170] = {.count = 1, .reusable = true}, SHIFT(96),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [178] = {.count = 1, .reusable = false}, SHIFT(101),
  [180] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(13),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [186] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(16),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(17),
  [195] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [197] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(19),
  [200] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(20),
  [203] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(21),
  [206] = {.count = 1, .reusable = true}, SHIFT(102),
  [208] = {.count = 1, .reusable = true}, SHIFT(104),
  [210] = {.count = 1, .reusable = true}, SHIFT(103),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [214] = {.count = 1, .reusable = true}, SHIFT(107),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [220] = {.count = 1, .reusable = false}, SHIFT(109),
  [222] = {.count = 1, .reusable = false}, SHIFT(110),
  [224] = {.count = 1, .reusable = true}, SHIFT(110),
  [226] = {.count = 1, .reusable = false}, SHIFT(112),
  [228] = {.count = 1, .reusable = true}, SHIFT(61),
  [230] = {.count = 1, .reusable = false}, SHIFT(116),
  [232] = {.count = 1, .reusable = true}, SHIFT(115),
  [234] = {.count = 1, .reusable = true}, SHIFT(116),
  [236] = {.count = 1, .reusable = false}, SHIFT(115),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [242] = {.count = 1, .reusable = true}, SHIFT(120),
  [244] = {.count = 1, .reusable = false}, SHIFT(120),
  [246] = {.count = 1, .reusable = false}, SHIFT(123),
  [248] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [250] = {.count = 1, .reusable = false}, SHIFT(125),
  [252] = {.count = 1, .reusable = true}, SHIFT(124),
  [254] = {.count = 1, .reusable = true}, SHIFT(126),
  [256] = {.count = 1, .reusable = true}, SHIFT(128),
  [258] = {.count = 1, .reusable = true}, SHIFT(130),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [262] = {.count = 1, .reusable = false}, SHIFT(58),
  [264] = {.count = 1, .reusable = true}, SHIFT(133),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [268] = {.count = 1, .reusable = false}, SHIFT(133),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(136),
  [274] = {.count = 1, .reusable = true}, SHIFT(135),
  [276] = {.count = 1, .reusable = true}, SHIFT(138),
  [278] = {.count = 1, .reusable = false}, SHIFT(139),
  [280] = {.count = 1, .reusable = false}, SHIFT(141),
  [282] = {.count = 1, .reusable = true}, SHIFT(142),
  [284] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [286] = {.count = 1, .reusable = true}, SHIFT(145),
  [288] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [292] = {.count = 1, .reusable = true}, SHIFT(146),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(147),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(149),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(36),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [311] = {.count = 1, .reusable = true}, SHIFT(152),
  [313] = {.count = 1, .reusable = true}, SHIFT(153),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(155),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(45),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [330] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(44),
  [333] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [335] = {.count = 1, .reusable = false}, SHIFT(156),
  [337] = {.count = 1, .reusable = true}, SHIFT(157),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [341] = {.count = 1, .reusable = false}, SHIFT(160),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [349] = {.count = 1, .reusable = false}, SHIFT(163),
  [351] = {.count = 1, .reusable = true}, SHIFT(163),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 1),
  [359] = {.count = 1, .reusable = true}, SHIFT(164),
  [361] = {.count = 1, .reusable = true}, SHIFT(166),
  [363] = {.count = 1, .reusable = true}, SHIFT(167),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_macro, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(170),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [373] = {.count = 1, .reusable = true}, SHIFT(172),
  [375] = {.count = 1, .reusable = false}, SHIFT(171),
  [377] = {.count = 1, .reusable = true}, SHIFT(171),
  [379] = {.count = 1, .reusable = true}, SHIFT(174),
  [381] = {.count = 1, .reusable = false}, SHIFT(174),
  [383] = {.count = 1, .reusable = true}, SHIFT(175),
  [385] = {.count = 1, .reusable = true}, SHIFT(176),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [397] = {.count = 1, .reusable = false}, SHIFT(178),
  [399] = {.count = 1, .reusable = true}, SHIFT(177),
  [401] = {.count = 1, .reusable = false}, SHIFT(179),
  [403] = {.count = 1, .reusable = true}, SHIFT(179),
  [405] = {.count = 1, .reusable = true}, SHIFT(182),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [411] = {.count = 1, .reusable = false}, SHIFT(184),
  [413] = {.count = 1, .reusable = true}, SHIFT(184),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(56),
  [422] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(15),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(74),
  [428] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(57),
  [431] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(59),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(74),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(60),
  [442] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(19),
  [445] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(61),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(63),
  [451] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(62),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(64),
  [457] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(65),
  [460] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(66),
  [463] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(67),
  [466] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(68),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [479] = {.count = 1, .reusable = true}, SHIFT(185),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [483] = {.count = 1, .reusable = false}, SHIFT(186),
  [485] = {.count = 1, .reusable = true}, SHIFT(187),
  [487] = {.count = 1, .reusable = true}, SHIFT(192),
  [489] = {.count = 1, .reusable = true}, SHIFT(193),
  [491] = {.count = 1, .reusable = false}, SHIFT(190),
  [493] = {.count = 1, .reusable = true}, SHIFT(191),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 4),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 4),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [509] = {.count = 1, .reusable = false}, SHIFT(196),
  [511] = {.count = 1, .reusable = true}, SHIFT(198),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [521] = {.count = 1, .reusable = true}, SHIFT(201),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [529] = {.count = 1, .reusable = true}, SHIFT(205),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [535] = {.count = 1, .reusable = false}, SHIFT(207),
  [537] = {.count = 1, .reusable = true}, SHIFT(207),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 2),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [543] = {.count = 1, .reusable = true}, SHIFT(209),
  [545] = {.count = 1, .reusable = false}, SHIFT(211),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [555] = {.count = 1, .reusable = true}, SHIFT(214),
  [557] = {.count = 1, .reusable = false}, SHIFT(214),
  [559] = {.count = 1, .reusable = true}, SHIFT(215),
  [561] = {.count = 1, .reusable = true}, SHIFT(216),
  [563] = {.count = 1, .reusable = true}, SHIFT(217),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(178),
  [576] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [578] = {.count = 1, .reusable = true}, SHIFT(220),
  [580] = {.count = 1, .reusable = true}, SHIFT(222),
  [582] = {.count = 1, .reusable = false}, SHIFT(222),
  [584] = {.count = 1, .reusable = false}, SHIFT(223),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [594] = {.count = 1, .reusable = true}, SHIFT(226),
  [596] = {.count = 1, .reusable = false}, SHIFT(228),
  [598] = {.count = 1, .reusable = true}, SHIFT(228),
  [600] = {.count = 1, .reusable = false}, SHIFT(232),
  [602] = {.count = 1, .reusable = true}, SHIFT(231),
  [604] = {.count = 1, .reusable = true}, SHIFT(233),
  [606] = {.count = 1, .reusable = false}, SHIFT(233),
  [608] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(147),
  [613] = {.count = 1, .reusable = true}, SHIFT(235),
  [615] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [617] = {.count = 1, .reusable = false}, SHIFT(236),
  [619] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(153),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [630] = {.count = 1, .reusable = true}, SHIFT(237),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [636] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2),
  [638] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2), SHIFT_REPEAT(164),
  [641] = {.count = 1, .reusable = true}, SHIFT(243),
  [643] = {.count = 1, .reusable = true}, SHIFT(244),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 4),
  [647] = {.count = 1, .reusable = true}, SHIFT(246),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [651] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [653] = {.count = 1, .reusable = true}, SHIFT(247),
  [655] = {.count = 1, .reusable = true}, SHIFT(249),
  [657] = {.count = 1, .reusable = true}, SHIFT(253),
  [659] = {.count = 1, .reusable = false}, SHIFT(253),
  [661] = {.count = 1, .reusable = true}, SHIFT(254),
  [663] = {.count = 1, .reusable = true}, SHIFT(255),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [667] = {.count = 1, .reusable = true}, SHIFT(257),
  [669] = {.count = 1, .reusable = true}, SHIFT(258),
  [671] = {.count = 1, .reusable = true}, SHIFT(260),
  [673] = {.count = 1, .reusable = false}, SHIFT(260),
  [675] = {.count = 1, .reusable = true}, SHIFT(261),
  [677] = {.count = 1, .reusable = true}, SHIFT(262),
  [679] = {.count = 1, .reusable = true}, SHIFT(263),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [683] = {.count = 1, .reusable = true}, SHIFT(264),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [691] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [695] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(205),
  [698] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [706] = {.count = 1, .reusable = false}, SHIFT(265),
  [708] = {.count = 1, .reusable = true}, SHIFT(268),
  [710] = {.count = 1, .reusable = true}, SHIFT(269),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(217),
  [719] = {.count = 1, .reusable = true}, SHIFT(271),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [725] = {.count = 1, .reusable = true}, SHIFT(272),
  [727] = {.count = 1, .reusable = false}, SHIFT(272),
  [729] = {.count = 1, .reusable = true}, SHIFT(273),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [735] = {.count = 1, .reusable = true}, SHIFT(274),
  [737] = {.count = 1, .reusable = true}, SHIFT(276),
  [739] = {.count = 1, .reusable = false}, SHIFT(277),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [745] = {.count = 1, .reusable = true}, SHIFT(280),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [749] = {.count = 1, .reusable = true}, SHIFT(281),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 4),
  [753] = {.count = 1, .reusable = true}, SHIFT(282),
  [755] = {.count = 1, .reusable = true}, SHIFT(284),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 5),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [761] = {.count = 1, .reusable = true}, SHIFT(285),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [765] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_marshmallow() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
