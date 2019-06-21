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
#define STATE_COUNT 224
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__space = 1,
  anon_sym_SLASH = 2,
  anon_sym_STAR = 3,
  aux_sym__block_comment_star_token1 = 4,
  anon_sym_PLUS = 5,
  anon_sym_DASH = 6,
  aux_sym__block_comment_plus_token1 = 7,
  anon_sym_SLASH_SLASH = 8,
  aux_sym__comment_token1 = 9,
  anon_sym_DASH_DASH_DASH = 10,
  anon_sym_STAR_STAR_STAR = 11,
  anon_sym_COMMA = 12,
  sym_readonly = 13,
  anon_sym_private = 14,
  anon_sym_protected = 15,
  anon_sym_publish = 16,
  anon_sym_DOT = 17,
  anon_sym_module = 18,
  anon_sym_end = 19,
  anon_sym_enum = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_function = 23,
  anon_sym_method = 24,
  anon_sym_returns = 25,
  anon_sym_i8 = 26,
  anon_sym_i16 = 27,
  anon_sym_i32 = 28,
  anon_sym_i64 = 29,
  anon_sym_u8 = 30,
  anon_sym_u16 = 31,
  anon_sym_u32 = 32,
  anon_sym_u64 = 33,
  anon_sym_f32 = 34,
  anon_sym_f64 = 35,
  anon_sym_s8 = 36,
  anon_sym_s16 = 37,
  anon_sym_s32 = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  sym_is_declare = 41,
  sym_is_external = 42,
  anon_sym_if = 43,
  anon_sym_while = 44,
  anon_sym_switch = 45,
  anon_sym_case = 46,
  anon_sym_default = 47,
  anon_sym_goto = 48,
  anon_sym_section = 49,
  anon_sym_COLON_EQ = 50,
  anon_sym_return = 51,
  anon_sym_AMP = 52,
  anon_sym_BANG = 53,
  anon_sym_TILDE = 54,
  anon_sym_PERCENT = 55,
  anon_sym_PIPE = 56,
  anon_sym_CARET = 57,
  anon_sym_GT = 58,
  anon_sym_LT = 59,
  anon_sym_GT_EQ = 60,
  anon_sym_LT_EQ = 61,
  anon_sym_BANG_EQ = 62,
  anon_sym_EQ_EQ = 63,
  anon_sym_AMP_AMP = 64,
  anon_sym_PIPE_PIPE = 65,
  anon_sym_GT_GT = 66,
  anon_sym_LT_LT = 67,
  anon_sym_PLUS_EQ = 68,
  anon_sym_DASH_EQ = 69,
  anon_sym_STAR_EQ = 70,
  anon_sym_SLASH_EQ = 71,
  anon_sym_PERCENT_EQ = 72,
  anon_sym_AMP_EQ = 73,
  anon_sym_PIPE_EQ = 74,
  anon_sym_CARET_EQ = 75,
  anon_sym_GT_GT_EQ = 76,
  anon_sym_LT_LT_EQ = 77,
  anon_sym_PLUS_PLUS = 78,
  anon_sym_DASH_DASH = 79,
  anon_sym_LBRACE = 80,
  anon_sym_RBRACE = 81,
  sym_null = 82,
  sym_identifier = 83,
  anon_sym_DQUOTE = 84,
  aux_sym_string_token1 = 85,
  anon_sym_SQUOTE = 86,
  aux_sym_character_token1 = 87,
  anon_sym_BSLASH_BSLASH = 88,
  anon_sym_BSLASH0 = 89,
  anon_sym_BSLASHa = 90,
  anon_sym_BSLASHb = 91,
  anon_sym_BSLASHf = 92,
  anon_sym_BSLASHn = 93,
  anon_sym_BSLASHr = 94,
  anon_sym_BSLASHt = 95,
  anon_sym_BSLASHv = 96,
  anon_sym_BSLASH_DQUOTE = 97,
  anon_sym_BSLASH_SQUOTE = 98,
  sym_oct = 99,
  sym_integer = 100,
  sym_long = 101,
  sym_float = 102,
  sym_double = 103,
  sym_hex = 104,
  sym_binary = 105,
  sym_source_file = 106,
  sym__block_comment_star = 107,
  sym__block_comment_plus = 108,
  sym__comment = 109,
  sym__comma_list_variables = 110,
  sym__comma_list_assignment_or_collection_or_value = 111,
  sym__comma_list_types = 112,
  sym_access_control = 113,
  sym__sentence = 114,
  sym_definition = 115,
  sym_module_definition = 116,
  sym_compound_macro = 117,
  sym_end_compound_macro = 118,
  sym__enum_element = 119,
  sym_enum_definition = 120,
  sym_is_function = 121,
  sym_is_method = 122,
  sym_function_definition = 123,
  sym_variable_definition = 124,
  sym_parameter_list = 125,
  sym_return_list = 126,
  sym_type = 127,
  sym__base_type = 128,
  sym_primitive_type = 129,
  sym_pointer = 130,
  sym_array = 131,
  sym_declaration_definition = 132,
  sym_statement = 133,
  sym_end_statement = 134,
  sym__control_flow_statement = 135,
  sym_goto_statement = 136,
  sym_section_statement = 137,
  sym_single_line_if_statement = 138,
  sym_if_statement = 139,
  sym_while_statement = 140,
  sym_switch_statement = 141,
  sym_case_statement = 142,
  sym_default_statement = 143,
  sym_static_assignment = 144,
  sym_expression_statement = 145,
  sym_return_statement = 146,
  sym_group_expression = 147,
  sym_assignment_expression = 148,
  sym_unary_op = 149,
  sym_binary_op = 150,
  sym_assignment_op = 151,
  sym_assignment_post_op = 152,
  sym__assignment_or_collection_or_value = 153,
  sym__collection_or_value = 154,
  sym_collection = 155,
  sym__value = 156,
  sym__literal = 157,
  sym_string = 158,
  sym_character = 159,
  sym__escape_sequence = 160,
  sym__number = 161,
  aux_sym_source_file_repeat1 = 162,
  aux_sym__block_comment_star_repeat1 = 163,
  aux_sym__block_comment_plus_repeat1 = 164,
  aux_sym__comma_list_variables_repeat1 = 165,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 166,
  aux_sym__comma_list_types_repeat1 = 167,
  aux_sym_compound_macro_repeat1 = 168,
  aux_sym_enum_definition_repeat1 = 169,
  aux_sym_type_repeat1 = 170,
  aux_sym_type_repeat2 = 171,
  aux_sym_assignment_expression_repeat1 = 172,
  aux_sym_string_repeat1 = 173,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [aux_sym__block_comment_star_token1] = "_block_comment_star_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym__block_comment_plus_token1] = "_block_comment_plus_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym_COMMA] = ",",
  [sym_readonly] = "readonly",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_publish] = "publish",
  [anon_sym_DOT] = ".",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_is_declare] = "is_declare",
  [sym_is_external] = "is_external",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_goto] = "goto",
  [anon_sym_section] = "section",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_return] = "return",
  [anon_sym_AMP] = "&",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
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
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [sym_oct] = "oct",
  [sym_integer] = "integer",
  [sym_long] = "long",
  [sym_float] = "float",
  [sym_double] = "double",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [sym_source_file] = "source_file",
  [sym__block_comment_star] = "_block_comment_star",
  [sym__block_comment_plus] = "_block_comment_plus",
  [sym__comment] = "_comment",
  [sym__comma_list_variables] = "_comma_list_variables",
  [sym__comma_list_assignment_or_collection_or_value] = "_comma_list_assignment_or_collection_or_value",
  [sym__comma_list_types] = "_comma_list_types",
  [sym_access_control] = "access_control",
  [sym__sentence] = "_sentence",
  [sym_definition] = "definition",
  [sym_module_definition] = "module_definition",
  [sym_compound_macro] = "compound_macro",
  [sym_end_compound_macro] = "end_compound_macro",
  [sym__enum_element] = "_enum_element",
  [sym_enum_definition] = "enum_definition",
  [sym_is_function] = "is_function",
  [sym_is_method] = "is_method",
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
  [sym_statement] = "statement",
  [sym_end_statement] = "end_statement",
  [sym__control_flow_statement] = "_control_flow_statement",
  [sym_goto_statement] = "goto_statement",
  [sym_section_statement] = "section_statement",
  [sym_single_line_if_statement] = "single_line_if_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym_default_statement] = "default_statement",
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
  [aux_sym__block_comment_star_repeat1] = "_block_comment_star_repeat1",
  [aux_sym__block_comment_plus_repeat1] = "_block_comment_plus_repeat1",
  [aux_sym__comma_list_variables_repeat1] = "_comma_list_variables_repeat1",
  [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = "_comma_list_assignment_or_collection_or_value_repeat1",
  [aux_sym__comma_list_types_repeat1] = "_comma_list_types_repeat1",
  [aux_sym_compound_macro_repeat1] = "compound_macro_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_assignment_expression_repeat1] = "assignment_expression_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_star_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_plus_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
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
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
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
  [sym__block_comment_star] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment_plus] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_variables] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_assignment_or_collection_or_value] = {
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
  [sym__sentence] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_end_compound_macro] = {
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
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_end_statement] = {
    .visible = true,
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
  [aux_sym__block_comment_star_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_comment_plus_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_types_repeat1] = {
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
  [aux_sym_assignment_expression_repeat1] = {
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(46);
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(50);
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
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'l')
        ADVANCE(59);
      if (lookahead == 'x')
        ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(62);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(64);
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '>')
        ADVANCE(68);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '"')
        ADVANCE(69);
      if (lookahead == '\'')
        ADVANCE(70);
      if (lookahead == '0')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'b')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == 'v')
        ADVANCE(79);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(80);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'x')
        ADVANCE(84);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '3')
        ADVANCE(85);
      if (lookahead == '6')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(89);
      if (lookahead == '3')
        ADVANCE(90);
      if (lookahead == '6')
        ADVANCE(91);
      if (lookahead == '8')
        ADVANCE(92);
      if (lookahead == 'f')
        ADVANCE(93);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'u')
        ADVANCE(96);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'r')
        ADVANCE(97);
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(100);
      if (lookahead == '3')
        ADVANCE(101);
      if (lookahead == '8')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'w')
        ADVANCE(104);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(105);
      if (lookahead == '3')
        ADVANCE(106);
      if (lookahead == '6')
        ADVANCE(107);
      if (lookahead == '8')
        ADVANCE(108);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'h')
        ADVANCE(109);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '|')
        ADVANCE(111);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == ')')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '*')
        ADVANCE(115);
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
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(116);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(117);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'd')
        ADVANCE(124);
      if (lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == '2')
        ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == '4')
        ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == '6')
        ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == '2')
        ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == '4')
        ADVANCE(133);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 94:
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'd')
        ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'i')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'b')
        ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == '6')
        ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == '2')
        ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 'i')
        ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == '6')
        ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == '2')
        ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == '4')
        ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 112:
      if (lookahead == ')')
        ADVANCE(113);
      if (lookahead == 'f')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 114:
      if (lookahead == ')')
        ADVANCE(150);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'l')
        ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'a')
        ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 125:
      if (lookahead == 'm')
        ADVANCE(154);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 130:
      if (lookahead == 'o')
        ADVANCE(157);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 134:
      if (lookahead == 'h')
        ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'v')
        ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'l')
        ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'd')
        ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 152:
      if (lookahead == 'a')
        ADVANCE(169);
      END_STATE();
    case 153:
      if (lookahead == 'u')
        ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 155:
      if (lookahead == 'r')
        ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 't')
        ADVANCE(172);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 158:
      if (lookahead == 'o')
        ADVANCE(173);
      END_STATE();
    case 159:
      if (lookahead == 'l')
        ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 161:
      if (lookahead == 'a')
        ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'i')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'o')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'i')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'c')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'r')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'n')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'i')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'd')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 't')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'c')
        ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 's')
        ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'o')
        ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'h')
        ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 183:
      if (lookahead == 'e')
        ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'a')
        ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'o')
        ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'h')
        ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 194:
      if (lookahead == 'n')
        ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 198:
      if (lookahead == 'l')
        ADVANCE(205);
      END_STATE();
    case 199:
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 203:
      if (lookahead == 'y')
        ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 207:
      if (lookahead == 'd')
        ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 210:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(211);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 211:
      if (lookahead == '*')
        ADVANCE(50);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(230);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
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
        ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b')
        ADVANCE(58);
      if (lookahead == 'l')
        ADVANCE(59);
      if (lookahead == 'x')
        ADVANCE(60);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(62);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(232);
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
        ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(234);
      if (lookahead == 'x')
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
        ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(236);
      if (lookahead == '6')
        ADVANCE(237);
      if (lookahead == 'u')
        ADVANCE(238);
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
        ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(239);
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
        ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(240);
      if (lookahead == '3')
        ADVANCE(241);
      if (lookahead == '6')
        ADVANCE(242);
      if (lookahead == '8')
        ADVANCE(243);
      if (lookahead == 'f')
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
        ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(245);
      if (lookahead == 'o')
        ADVANCE(246);
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
        ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(248);
      if (lookahead == 'u')
        ADVANCE(249);
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
        ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(250);
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
        ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(251);
      if (lookahead == '3')
        ADVANCE(252);
      if (lookahead == '8')
        ADVANCE(253);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(256);
      if (lookahead == '3')
        ADVANCE(257);
      if (lookahead == '6')
        ADVANCE(258);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 229:
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
        ADVANCE(229);
      END_STATE();
    case 230:
      if (lookahead == '-')
        ADVANCE(116);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
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
        ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(229);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(262);
      if (lookahead == 'f')
        ADVANCE(263);
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
        ADVANCE(229);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(264);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(229);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(229);
      END_STATE();
    case 243:
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
        ADVANCE(229);
      END_STATE();
    case 244:
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
        ADVANCE(229);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(229);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 253:
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
        ADVANCE(229);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(229);
      END_STATE();
    case 259:
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
        ADVANCE(229);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 264:
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
        ADVANCE(229);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(229);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 267:
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
        ADVANCE(229);
      END_STATE();
    case 268:
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
        ADVANCE(229);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 271:
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
        ADVANCE(229);
      END_STATE();
    case 272:
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
        ADVANCE(229);
      END_STATE();
    case 273:
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
        ADVANCE(229);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(229);
      END_STATE();
    case 278:
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
        ADVANCE(229);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 282:
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
        ADVANCE(229);
      END_STATE();
    case 283:
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
        ADVANCE(229);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 286:
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
        ADVANCE(229);
      END_STATE();
    case 287:
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
        ADVANCE(229);
      END_STATE();
    case 288:
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
        ADVANCE(229);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_case);
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
        ADVANCE(229);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(309);
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
        ADVANCE(229);
      END_STATE();
    case 293:
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
        ADVANCE(229);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(310);
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
        ADVANCE(229);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(311);
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
        ADVANCE(229);
      END_STATE();
    case 296:
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
        ADVANCE(229);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(312);
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
        ADVANCE(229);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(313);
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
        ADVANCE(229);
      END_STATE();
    case 299:
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
        ADVANCE(229);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(314);
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
        ADVANCE(229);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(315);
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
        ADVANCE(229);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(316);
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
        ADVANCE(229);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(317);
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
        ADVANCE(229);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(318);
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
        ADVANCE(229);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(319);
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
        ADVANCE(229);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(320);
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
        ADVANCE(229);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(321);
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
        ADVANCE(229);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(229);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(326);
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
        ADVANCE(229);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(229);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 321:
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
        ADVANCE(229);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 326:
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
        ADVANCE(229);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_module);
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
        ADVANCE(229);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 332:
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
        ADVANCE(229);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 334:
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
        ADVANCE(229);
      END_STATE();
    case 335:
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
        ADVANCE(229);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_default);
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
        ADVANCE(229);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 338:
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
        ADVANCE(229);
      END_STATE();
    case 339:
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
        ADVANCE(229);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 341:
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
        ADVANCE(229);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(229);
      END_STATE();
    case 343:
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
        ADVANCE(229);
      END_STATE();
    case 344:
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
        ADVANCE(229);
      END_STATE();
    case 345:
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
        ADVANCE(229);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 347:
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
        ADVANCE(229);
      END_STATE();
    case 348:
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
        ADVANCE(229);
      END_STATE();
    case 349:
      if (lookahead == '(')
        ADVANCE(350);
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 352:
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'm')
        ADVANCE(354);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(355);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(240);
      if (lookahead == '3')
        ADVANCE(241);
      if (lookahead == '6')
        ADVANCE(242);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(245);
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
        ADVANCE(229);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(357);
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
        ADVANCE(229);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(251);
      if (lookahead == '3')
        ADVANCE(252);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 358:
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 359:
      if (lookahead == '!')
        ADVANCE(360);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(361);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == '-')
        ADVANCE(362);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(363);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '%' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 361:
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
        ADVANCE(229);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 363:
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
        ADVANCE(229);
      END_STATE();
    case 364:
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'm')
        ADVANCE(354);
      if (lookahead == 'r')
        ADVANCE(355);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(367);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 368:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(69);
      if (lookahead == '\'')
        ADVANCE(70);
      if (lookahead == '0')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'b')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == 'v')
        ADVANCE(79);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 371:
      if (lookahead == '\\')
        ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '"')
        ADVANCE(69);
      if (lookahead == '\'')
        ADVANCE(70);
      if (lookahead == '0')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'b')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == 'v')
        ADVANCE(79);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 374:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 375:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(236);
      if (lookahead == '6')
        ADVANCE(237);
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
        ADVANCE(229);
      END_STATE();
    case 377:
      if (lookahead == '%')
        ADVANCE(378);
      if (lookahead == '&')
        ADVANCE(379);
      if (lookahead == '(')
        ADVANCE(350);
      if (lookahead == '*')
        ADVANCE(380);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(385);
      if (lookahead == '>')
        ADVANCE(386);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(387);
      if (lookahead == '|')
        ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '\\' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(229);
      END_STATE();
    case 378:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(47);
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
        ADVANCE(229);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 381:
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(389);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(57);
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
        ADVANCE(229);
      END_STATE();
    case 384:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(390);
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
        ADVANCE(229);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(391);
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
        ADVANCE(229);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(80);
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
        ADVANCE(229);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(110);
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
        ADVANCE(229);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(119);
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
        ADVANCE(229);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(120);
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
        ADVANCE(229);
      END_STATE();
    case 392:
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'f')
        ADVANCE(394);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(397);
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
        ADVANCE(229);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(238);
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
        ADVANCE(229);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(229);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(263);
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
        ADVANCE(229);
      END_STATE();
    case 398:
      if (lookahead == '%')
        ADVANCE(378);
      if (lookahead == '&')
        ADVANCE(399);
      if (lookahead == '*')
        ADVANCE(400);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(401);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(402);
      if (lookahead == '>')
        ADVANCE(403);
      if (lookahead == '^')
        ADVANCE(404);
      if (lookahead == '|')
        ADVANCE(405);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 399:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 400:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 401:
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 402:
      if (lookahead == '<')
        ADVANCE(406);
      END_STATE();
    case 403:
      if (lookahead == '>')
        ADVANCE(407);
      END_STATE();
    case 404:
      if (lookahead == '=')
        ADVANCE(80);
      END_STATE();
    case 405:
      if (lookahead == '=')
        ADVANCE(110);
      END_STATE();
    case 406:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 407:
      if (lookahead == '=')
        ADVANCE(120);
      END_STATE();
    case 408:
      if (lookahead == '!')
        ADVANCE(409);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(380);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '/')
        ADVANCE(411);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(412);
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
        ADVANCE(41);
      END_STATE();
    case 409:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(389);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 412:
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 413:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(362);
      if (lookahead == '/')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 416:
      if (lookahead == '!')
        ADVANCE(409);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(380);
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(411);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(412);
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
        ADVANCE(41);
      END_STATE();
    case 417:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(419);
      if (lookahead == 's')
        ADVANCE(420);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(421);
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
        ADVANCE(229);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(422);
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
        ADVANCE(229);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(254);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 423:
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 424:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 425:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(355);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 426:
      if (lookahead == '(')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'r')
        ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 427:
      if (lookahead == 'e')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 't')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'u')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'r')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'n')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 's')
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 434:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 435:
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 438:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 439:
      if (lookahead == 'c')
        ADVANCE(440);
      if (lookahead == 'd')
        ADVANCE(441);
      if (lookahead == 'f')
        ADVANCE(442);
      if (lookahead == 'i')
        ADVANCE(443);
      if (lookahead == 'm')
        ADVANCE(444);
      if (lookahead == 's')
        ADVANCE(445);
      if (lookahead == 'w')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 440:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(447);
      END_STATE();
    case 442:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 443:
      if (lookahead == 'f')
        ADVANCE(93);
      END_STATE();
    case 444:
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 445:
      if (lookahead == 'w')
        ADVANCE(104);
      END_STATE();
    case 446:
      if (lookahead == 'h')
        ADVANCE(109);
      END_STATE();
    case 447:
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 448:
      if (lookahead == 'f')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 'r')
        ADVANCE(355);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 449:
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 450:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(419);
      if (lookahead == 's')
        ADVANCE(420);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '*' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_')
        ADVANCE(229);
      END_STATE();
    case 451:
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 210},
  [2] = {.lex_state = 349},
  [3] = {.lex_state = 352},
  [4] = {.lex_state = 349},
  [5] = {.lex_state = 358},
  [6] = {.lex_state = 359},
  [7] = {.lex_state = 364},
  [8] = {.lex_state = 365},
  [9] = {.lex_state = 359},
  [10] = {.lex_state = 349},
  [11] = {.lex_state = 368},
  [12] = {.lex_state = 371},
  [13] = {.lex_state = 349},
  [14] = {.lex_state = 349},
  [15] = {.lex_state = 349},
  [16] = {.lex_state = 374},
  [17] = {.lex_state = 349},
  [18] = {.lex_state = 349},
  [19] = {.lex_state = 349},
  [20] = {.lex_state = 349},
  [21] = {.lex_state = 349},
  [22] = {.lex_state = 375},
  [23] = {.lex_state = 349},
  [24] = {.lex_state = 374},
  [25] = {.lex_state = 377},
  [26] = {.lex_state = 392},
  [27] = {.lex_state = 349},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 377},
  [30] = {.lex_state = 349},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 364},
  [33] = {.lex_state = 377},
  [34] = {.lex_state = 349},
  [35] = {.lex_state = 349},
  [36] = {.lex_state = 349},
  [37] = {.lex_state = 349},
  [38] = {.lex_state = 398},
  [39] = {.lex_state = 210},
  [40] = {.lex_state = 349},
  [41] = {.lex_state = 374},
  [42] = {.lex_state = 375},
  [43] = {.lex_state = 374},
  [44] = {.lex_state = 408},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 413},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 416},
  [49] = {.lex_state = 368},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 359},
  [52] = {.lex_state = 417},
  [53] = {.lex_state = 349},
  [54] = {.lex_state = 349},
  [55] = {.lex_state = 349},
  [56] = {.lex_state = 398},
  [57] = {.lex_state = 349},
  [58] = {.lex_state = 349},
  [59] = {.lex_state = 349},
  [60] = {.lex_state = 349},
  [61] = {.lex_state = 349},
  [62] = {.lex_state = 423},
  [63] = {.lex_state = 424},
  [64] = {.lex_state = 424},
  [65] = {.lex_state = 425},
  [66] = {.lex_state = 349},
  [67] = {.lex_state = 349},
  [68] = {.lex_state = 349},
  [69] = {.lex_state = 349},
  [70] = {.lex_state = 349},
  [71] = {.lex_state = 349},
  [72] = {.lex_state = 375},
  [73] = {.lex_state = 349},
  [74] = {.lex_state = 374},
  [75] = {.lex_state = 377},
  [76] = {.lex_state = 374},
  [77] = {.lex_state = 210},
  [78] = {.lex_state = 426},
  [79] = {.lex_state = 434},
  [80] = {.lex_state = 358},
  [81] = {.lex_state = 435},
  [82] = {.lex_state = 349},
  [83] = {.lex_state = 349},
  [84] = {.lex_state = 437},
  [85] = {.lex_state = 437},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 416},
  [88] = {.lex_state = 368},
  [89] = {.lex_state = 371},
  [90] = {.lex_state = 375},
  [91] = {.lex_state = 374},
  [92] = {.lex_state = 374},
  [93] = {.lex_state = 359},
  [94] = {.lex_state = 349},
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 413},
  [97] = {.lex_state = 438},
  [98] = {.lex_state = 438},
  [99] = {.lex_state = 416},
  [100] = {.lex_state = 368},
  [101] = {.lex_state = 416},
  [102] = {.lex_state = 375},
  [103] = {.lex_state = 374},
  [104] = {.lex_state = 408},
  [105] = {.lex_state = 439},
  [106] = {.lex_state = 349},
  [107] = {.lex_state = 434},
  [108] = {.lex_state = 359},
  [109] = {.lex_state = 349},
  [110] = {.lex_state = 408},
  [111] = {.lex_state = 423},
  [112] = {.lex_state = 374},
  [113] = {.lex_state = 424},
  [114] = {.lex_state = 398},
  [115] = {.lex_state = 448},
  [116] = {.lex_state = 426},
  [117] = {.lex_state = 438},
  [118] = {.lex_state = 448},
  [119] = {.lex_state = 375},
  [120] = {.lex_state = 349},
  [121] = {.lex_state = 349},
  [122] = {.lex_state = 349},
  [123] = {.lex_state = 349},
  [124] = {.lex_state = 426},
  [125] = {.lex_state = 377},
  [126] = {.lex_state = 374},
  [127] = {.lex_state = 374},
  [128] = {.lex_state = 437},
  [129] = {.lex_state = 449},
  [130] = {.lex_state = 426},
  [131] = {.lex_state = 349},
  [132] = {.lex_state = 374},
  [133] = {.lex_state = 434},
  [134] = {.lex_state = 435},
  [135] = {.lex_state = 358},
  [136] = {.lex_state = 349},
  [137] = {.lex_state = 349},
  [138] = {.lex_state = 349},
  [139] = {.lex_state = 437},
  [140] = {.lex_state = 368},
  [141] = {.lex_state = 210},
  [142] = {.lex_state = 416},
  [143] = {.lex_state = 375},
  [144] = {.lex_state = 413},
  [145] = {.lex_state = 423},
  [146] = {.lex_state = 210},
  [147] = {.lex_state = 210},
  [148] = {.lex_state = 413},
  [149] = {.lex_state = 438},
  [150] = {.lex_state = 349},
  [151] = {.lex_state = 349},
  [152] = {.lex_state = 438},
  [153] = {.lex_state = 450},
  [154] = {.lex_state = 375},
  [155] = {.lex_state = 374},
  [156] = {.lex_state = 434},
  [157] = {.lex_state = 413},
  [158] = {.lex_state = 423},
  [159] = {.lex_state = 210},
  [160] = {.lex_state = 408},
  [161] = {.lex_state = 423},
  [162] = {.lex_state = 424},
  [163] = {.lex_state = 424},
  [164] = {.lex_state = 425},
  [165] = {.lex_state = 438},
  [166] = {.lex_state = 426},
  [167] = {.lex_state = 434},
  [168] = {.lex_state = 426},
  [169] = {.lex_state = 349},
  [170] = {.lex_state = 437},
  [171] = {.lex_state = 424},
  [172] = {.lex_state = 451},
  [173] = {.lex_state = 451},
  [174] = {.lex_state = 349},
  [175] = {.lex_state = 434},
  [176] = {.lex_state = 358},
  [177] = {.lex_state = 437},
  [178] = {.lex_state = 437},
  [179] = {.lex_state = 416},
  [180] = {.lex_state = 210},
  [181] = {.lex_state = 413},
  [182] = {.lex_state = 408},
  [183] = {.lex_state = 423},
  [184] = {.lex_state = 210},
  [185] = {.lex_state = 349},
  [186] = {.lex_state = 438},
  [187] = {.lex_state = 349},
  [188] = {.lex_state = 438},
  [189] = {.lex_state = 450},
  [190] = {.lex_state = 375},
  [191] = {.lex_state = 210},
  [192] = {.lex_state = 413},
  [193] = {.lex_state = 408},
  [194] = {.lex_state = 423},
  [195] = {.lex_state = 210},
  [196] = {.lex_state = 438},
  [197] = {.lex_state = 438},
  [198] = {.lex_state = 434},
  [199] = {.lex_state = 349},
  [200] = {.lex_state = 437},
  [201] = {.lex_state = 375},
  [202] = {.lex_state = 451},
  [203] = {.lex_state = 451},
  [204] = {.lex_state = 451},
  [205] = {.lex_state = 413},
  [206] = {.lex_state = 210},
  [207] = {.lex_state = 413},
  [208] = {.lex_state = 408},
  [209] = {.lex_state = 349},
  [210] = {.lex_state = 450},
  [211] = {.lex_state = 423},
  [212] = {.lex_state = 210},
  [213] = {.lex_state = 423},
  [214] = {.lex_state = 408},
  [215] = {.lex_state = 451},
  [216] = {.lex_state = 451},
  [217] = {.lex_state = 451},
  [218] = {.lex_state = 451},
  [219] = {.lex_state = 451},
  [220] = {.lex_state = 413},
  [221] = {.lex_state = 413},
  [222] = {.lex_state = 423},
  [223] = {.lex_state = 423},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
  },
  [1] = {
    [sym__comment] = STATE(39),
    [sym_compound_macro] = STATE(27),
    [sym_end_compound_macro] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_variable_definition] = STATE(27),
    [sym_primitive_type] = STATE(37),
    [sym__control_flow_statement] = STATE(28),
    [sym_goto_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_group_expression] = STATE(29),
    [sym_assignment_expression] = STATE(30),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym_source_file] = STATE(31),
    [sym_access_control] = STATE(32),
    [sym__sentence] = STATE(39),
    [sym_enum_definition] = STATE(27),
    [sym_declaration_definition] = STATE(27),
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__block_comment_star] = STATE(39),
    [sym__block_comment_plus] = STATE(39),
    [sym_definition] = STATE(34),
    [sym_module_definition] = STATE(27),
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_statement] = STATE(34),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(9),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_goto] = ACTIONS(33),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_protected] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [sym_is_declare] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(47),
    [anon_sym_f64] = ACTIONS(11),
    [sym_null] = ACTIONS(13),
    [anon_sym_s16] = ACTIONS(11),
    [sym_oct] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_long] = ACTIONS(15),
    [sym_hex] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(51),
    [sym_binary] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(39),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_method] = ACTIONS(61),
  },
  [2] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(63),
  },
  [3] = {
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_function_definition] = STATE(40),
    [sym_variable_definition] = STATE(40),
    [sym_access_control] = STATE(32),
    [sym_primitive_type] = STATE(37),
    [anon_sym_protected] = ACTIONS(19),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_method] = ACTIONS(61),
  },
  [4] = {
    [anon_sym_DOT] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
  },
  [6] = {
    [sym_assignment_expression] = STATE(42),
    [sym_string] = STATE(44),
    [sym_character] = STATE(44),
    [sym_unary_op] = STATE(43),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(44),
    [sym__value] = STATE(44),
    [sym__literal] = STATE(44),
    [sym_group_expression] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_float] = ACTIONS(75),
    [sym_null] = ACTIONS(73),
    [sym_binary] = ACTIONS(75),
    [sym_oct] = ACTIONS(73),
    [sym_hex] = ACTIONS(75),
    [sym_long] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_double] = ACTIONS(75),
    [sym_identifier] = ACTIONS(73),
  },
  [7] = {
    [anon_sym_s8] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(79),
    [anon_sym_s32] = ACTIONS(79),
    [anon_sym_i16] = ACTIONS(79),
    [anon_sym_u32] = ACTIONS(79),
    [anon_sym_i64] = ACTIONS(79),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(79),
    [anon_sym_f64] = ACTIONS(79),
    [anon_sym_s16] = ACTIONS(79),
    [anon_sym_i8] = ACTIONS(79),
    [anon_sym_u16] = ACTIONS(79),
    [sym_readonly] = ACTIONS(79),
    [anon_sym_f32] = ACTIONS(79),
    [anon_sym_i32] = ACTIONS(79),
    [anon_sym_u8] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_method] = ACTIONS(79),
  },
  [8] = {
    [aux_sym__comment_token1] = ACTIONS(81),
    [sym__space] = ACTIONS(83),
  },
  [9] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(85),
  },
  [10] = {
    [anon_sym_LPAREN] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [11] = {
    [sym__escape_sequence] = STATE(49),
    [aux_sym_string_repeat1] = STATE(49),
    [aux_sym_string_token1] = ACTIONS(89),
    [anon_sym_BSLASHa] = ACTIONS(91),
    [anon_sym_BSLASHt] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(91),
    [anon_sym_BSLASHv] = ACTIONS(91),
    [anon_sym_BSLASHn] = ACTIONS(91),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(91),
    [anon_sym_BSLASHf] = ACTIONS(91),
    [anon_sym_BSLASH0] = ACTIONS(91),
    [anon_sym_BSLASHr] = ACTIONS(91),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(91),
  },
  [12] = {
    [sym__escape_sequence] = STATE(50),
    [anon_sym_BSLASHa] = ACTIONS(95),
    [anon_sym_BSLASHt] = ACTIONS(95),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(95),
    [anon_sym_BSLASHv] = ACTIONS(95),
    [anon_sym_BSLASHn] = ACTIONS(95),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(95),
    [aux_sym_character_token1] = ACTIONS(97),
    [anon_sym_BSLASHf] = ACTIONS(95),
    [anon_sym_BSLASH0] = ACTIONS(95),
    [anon_sym_BSLASHr] = ACTIONS(95),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(95),
  },
  [13] = {
    [sym_group_expression] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
  },
  [14] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(101),
  },
  [15] = {
    [sym_group_expression] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
  },
  [16] = {
    [sym_assignment_expression] = STATE(55),
    [sym__assignment_or_collection_or_value] = STATE(55),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(56),
    [sym_collection] = STATE(56),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_long] = ACTIONS(15),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
  },
  [17] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(103),
  },
  [18] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(105),
  },
  [19] = {
    [sym_group_expression] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
  },
  [20] = {
    [sym_group_expression] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
  },
  [21] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
  },
  [22] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(61),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(109),
  },
  [24] = {
    [sym_assignment_expression] = STATE(63),
    [sym__assignment_or_collection_or_value] = STATE(63),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(56),
    [sym_collection] = STATE(56),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(64),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_long] = ACTIONS(15),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
  },
  [25] = {
    [aux_sym_compound_macro_repeat1] = STATE(67),
    [sym_parameter_list] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(113),
    [anon_sym_DASH_DASH] = ACTIONS(113),
    [anon_sym_PLUS_EQ] = ACTIONS(113),
    [sym__space] = ACTIONS(115),
    [anon_sym_STAR_EQ] = ACTIONS(113),
    [anon_sym_COLON_EQ] = ACTIONS(113),
    [anon_sym_GT_GT_EQ] = ACTIONS(113),
    [anon_sym_AMP_EQ] = ACTIONS(113),
    [anon_sym_PLUS_PLUS] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_PERCENT_EQ] = ACTIONS(113),
    [anon_sym_DASH_EQ] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_CARET_EQ] = ACTIONS(113),
    [anon_sym_LT_LT_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_SLASH_EQ] = ACTIONS(113),
    [sym_identifier] = ACTIONS(118),
  },
  [26] = {
    [sym_compound_macro] = STATE(71),
    [anon_sym_default] = ACTIONS(124),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_switch] = ACTIONS(124),
    [anon_sym_module] = ACTIONS(124),
    [anon_sym_function] = ACTIONS(124),
    [anon_sym_while] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(124),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_method] = ACTIONS(124),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(128),
    [sym__space] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_DOT] = ACTIONS(130),
    [sym__space] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_PIPE_EQ] = ACTIONS(113),
    [anon_sym_DASH_DASH] = ACTIONS(113),
    [anon_sym_PLUS_EQ] = ACTIONS(113),
    [sym__space] = ACTIONS(113),
    [anon_sym_STAR_EQ] = ACTIONS(113),
    [anon_sym_COLON_EQ] = ACTIONS(113),
    [anon_sym_GT_GT_EQ] = ACTIONS(113),
    [anon_sym_AMP_EQ] = ACTIONS(113),
    [anon_sym_PLUS_PLUS] = ACTIONS(113),
    [anon_sym_PERCENT_EQ] = ACTIONS(113),
    [anon_sym_DASH_EQ] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(132),
    [anon_sym_CARET_EQ] = ACTIONS(113),
    [anon_sym_LT_LT_EQ] = ACTIONS(113),
    [anon_sym_SLASH_EQ] = ACTIONS(113),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(132),
    [sym__space] = ACTIONS(3),
  },
  [31] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(134),
  },
  [32] = {
    [sym_primitive_type] = STATE(37),
    [sym_is_function] = STATE(73),
    [sym_is_method] = STATE(73),
    [sym__base_type] = STATE(37),
    [sym_type] = STATE(61),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_readonly] = ACTIONS(136),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_method] = ACTIONS(61),
  },
  [33] = {
    [aux_sym_assignment_expression_repeat1] = STATE(75),
    [sym_assignment_op] = STATE(76),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [sym__space] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_COLON_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(142),
    [sym__space] = ACTIONS(3),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(144),
  },
  [36] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(146),
  },
  [37] = {
    [sym_pointer] = STATE(82),
    [aux_sym_type_repeat1] = STATE(82),
    [aux_sym_type_repeat2] = STATE(83),
    [sym_array] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
  },
  [38] = {
    [sym_assignment_post_op] = STATE(85),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_DASH_DASH] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [sym__space] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_COLON_EQ] = ACTIONS(154),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PLUS_PLUS] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_DOT] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
  },
  [39] = {
    [sym__comment] = STATE(86),
    [sym_compound_macro] = STATE(27),
    [sym_end_compound_macro] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_variable_definition] = STATE(27),
    [sym_primitive_type] = STATE(37),
    [sym__control_flow_statement] = STATE(28),
    [sym_goto_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_group_expression] = STATE(29),
    [sym_assignment_expression] = STATE(30),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym_access_control] = STATE(32),
    [sym__sentence] = STATE(86),
    [sym_enum_definition] = STATE(27),
    [sym_declaration_definition] = STATE(27),
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__block_comment_star] = STATE(86),
    [sym__block_comment_plus] = STATE(86),
    [sym_definition] = STATE(34),
    [sym_module_definition] = STATE(27),
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_statement] = STATE(34),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(9),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_goto] = ACTIONS(33),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_f32] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(39),
    [anon_sym_protected] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_while] = ACTIONS(45),
    [sym_is_declare] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(47),
    [anon_sym_f64] = ACTIONS(11),
    [sym_null] = ACTIONS(13),
    [anon_sym_s16] = ACTIONS(11),
    [sym_oct] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_long] = ACTIONS(15),
    [sym_hex] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(51),
    [sym_binary] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(39),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_method] = ACTIONS(61),
  },
  [40] = {
    [anon_sym_DOT] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(162),
    [sym_long] = ACTIONS(164),
    [sym_hex] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_integer] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [sym_float] = ACTIONS(164),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(162),
    [sym_double] = ACTIONS(164),
    [sym_binary] = ACTIONS(164),
    [sym_identifier] = ACTIONS(162),
    [sym_oct] = ACTIONS(162),
  },
  [42] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(166),
  },
  [43] = {
    [sym__number] = STATE(90),
    [sym_string] = STATE(90),
    [sym_character] = STATE(90),
    [sym__value] = STATE(90),
    [sym__literal] = STATE(90),
    [sym_group_expression] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(170),
    [sym_oct] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(170),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(172),
    [sym_double] = ACTIONS(170),
    [sym_binary] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [sym_hex] = ACTIONS(170),
  },
  [44] = {
    [sym_assignment_post_op] = STATE(85),
    [sym_binary_op] = STATE(92),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_COLON_EQ] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PLUS_PLUS] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_DASH_DASH] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [sym__space] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_PIPE_PIPE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(178),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(182),
    [sym_is_external] = ACTIONS(182),
    [anon_sym_default] = ACTIONS(182),
    [anon_sym_s8] = ACTIONS(182),
    [anon_sym_u64] = ACTIONS(182),
    [anon_sym_s32] = ACTIONS(182),
    [sym_identifier] = ACTIONS(182),
    [sym_integer] = ACTIONS(182),
    [sym_float] = ACTIONS(184),
    [anon_sym_private] = ACTIONS(182),
    [anon_sym_SLASH_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_i8] = ACTIONS(182),
    [anon_sym_u16] = ACTIONS(182),
    [anon_sym_enum] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_if] = ACTIONS(182),
    [anon_sym_goto] = ACTIONS(182),
    [anon_sym_switch] = ACTIONS(182),
    [anon_sym_f32] = ACTIONS(182),
    [sym_double] = ACTIONS(184),
    [anon_sym_return] = ACTIONS(182),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(184),
    [anon_sym_protected] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(182),
    [anon_sym_u32] = ACTIONS(182),
    [anon_sym_i64] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_function] = ACTIONS(182),
    [anon_sym_while] = ACTIONS(182),
    [sym_is_declare] = ACTIONS(182),
    [anon_sym_case] = ACTIONS(182),
    [anon_sym_f64] = ACTIONS(182),
    [sym_null] = ACTIONS(182),
    [anon_sym_s16] = ACTIONS(182),
    [sym_oct] = ACTIONS(182),
    [sym_long] = ACTIONS(184),
    [sym_hex] = ACTIONS(184),
    [anon_sym_section] = ACTIONS(182),
    [sym_binary] = ACTIONS(184),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(184),
    [anon_sym_publish] = ACTIONS(182),
    [sym_readonly] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_i32] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_u8] = ACTIONS(182),
    [anon_sym_end] = ACTIONS(182),
    [anon_sym_method] = ACTIONS(182),
  },
  [46] = {
    [sym__block_comment_plus] = STATE(96),
    [aux_sym__block_comment_plus_repeat1] = STATE(96),
    [sym__block_comment_star] = STATE(96),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(190),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(192),
  },
  [47] = {
    [sym__enum_element] = STATE(98),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(194),
  },
  [48] = {
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_AMP_AMP] = ACTIONS(198),
    [anon_sym_LT_EQ] = ACTIONS(198),
    [anon_sym_COLON_EQ] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_GT_GT_EQ] = ACTIONS(198),
    [anon_sym_AMP_EQ] = ACTIONS(198),
    [anon_sym_PLUS_PLUS] = ACTIONS(198),
    [anon_sym_STAR] = ACTIONS(196),
    [anon_sym_PERCENT_EQ] = ACTIONS(198),
    [anon_sym_DASH_EQ] = ACTIONS(198),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym_GT_EQ] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_BANG_EQ] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_PIPE_EQ] = ACTIONS(198),
    [anon_sym_DASH_DASH] = ACTIONS(198),
    [anon_sym_PLUS_EQ] = ACTIONS(198),
    [sym__space] = ACTIONS(198),
    [anon_sym_STAR_EQ] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_PIPE_PIPE] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_EQ_EQ] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_CARET_EQ] = ACTIONS(198),
    [anon_sym_LT_LT_EQ] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_SLASH_EQ] = ACTIONS(198),
    [anon_sym_GT_GT] = ACTIONS(196),
  },
  [49] = {
    [sym__escape_sequence] = STATE(100),
    [aux_sym_string_repeat1] = STATE(100),
    [aux_sym_string_token1] = ACTIONS(200),
    [anon_sym_BSLASHa] = ACTIONS(202),
    [anon_sym_BSLASHt] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(204),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(202),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(202),
    [anon_sym_BSLASHv] = ACTIONS(202),
    [anon_sym_BSLASHn] = ACTIONS(202),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(202),
    [anon_sym_BSLASHf] = ACTIONS(202),
    [anon_sym_BSLASH0] = ACTIONS(202),
    [anon_sym_BSLASHr] = ACTIONS(202),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(202),
  },
  [50] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(206),
  },
  [51] = {
    [sym_assignment_expression] = STATE(102),
    [sym_string] = STATE(104),
    [sym_character] = STATE(104),
    [sym_unary_op] = STATE(103),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(104),
    [sym__value] = STATE(104),
    [sym__literal] = STATE(104),
    [sym_group_expression] = STATE(104),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_BANG] = ACTIONS(71),
    [sym_integer] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_float] = ACTIONS(210),
    [sym_null] = ACTIONS(208),
    [sym_binary] = ACTIONS(210),
    [sym_oct] = ACTIONS(208),
    [sym_hex] = ACTIONS(210),
    [sym_long] = ACTIONS(210),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_AMP] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_double] = ACTIONS(210),
    [sym_identifier] = ACTIONS(208),
  },
  [52] = {
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__control_flow_statement] = STATE(28),
    [sym_goto_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_group_expression] = STATE(29),
    [sym_assignment_expression] = STATE(30),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym_statement] = STATE(106),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_end] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(9),
    [sym_integer] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_float] = ACTIONS(15),
    [sym_null] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(45),
    [sym_binary] = ACTIONS(15),
    [anon_sym_case] = ACTIONS(47),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(214),
    [anon_sym_section] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_goto] = ACTIONS(33),
    [anon_sym_switch] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym_double] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(13),
  },
  [53] = {
    [anon_sym_DOT] = ACTIONS(216),
    [sym__space] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_DOT] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(220),
    [sym__space] = ACTIONS(3),
  },
  [56] = {
    [aux_sym_assignment_expression_repeat1] = STATE(75),
    [sym_assignment_op] = STATE(76),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [sym__space] = ACTIONS(140),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_COLON_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(222),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
  },
  [57] = {
    [anon_sym_DOT] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_DOT] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_DOT] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
  },
  [61] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(232),
  },
  [62] = {
    [sym__block_comment_plus] = STATE(111),
    [aux_sym__block_comment_star_repeat1] = STATE(111),
    [sym__block_comment_star] = STATE(111),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(240),
  },
  [63] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(113),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(244),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(246),
    [sym__space] = ACTIONS(3),
  },
  [65] = {
    [sym_variable_definition] = STATE(117),
    [sym_access_control] = STATE(118),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym__comma_list_variables] = STATE(119),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_publish] = ACTIONS(248),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
  },
  [66] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(252),
  },
  [67] = {
    [aux_sym_compound_macro_repeat1] = STATE(121),
    [sym_parameter_list] = STATE(122),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym__space] = ACTIONS(256),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(254),
    [sym__space] = ACTIONS(3),
  },
  [69] = {
    [anon_sym_DOT] = ACTIONS(258),
    [sym__space] = ACTIONS(3),
  },
  [70] = {
    [aux_sym_compound_macro_repeat1] = STATE(67),
    [sym_parameter_list] = STATE(68),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(111),
    [sym__space] = ACTIONS(256),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
  },
  [72] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(123),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
  },
  [73] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(262),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(264),
    [sym_long] = ACTIONS(266),
    [sym_hex] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym_integer] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [sym_float] = ACTIONS(266),
    [anon_sym_LBRACE] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(264),
    [sym_double] = ACTIONS(266),
    [sym_binary] = ACTIONS(266),
    [sym_oct] = ACTIONS(264),
    [sym_identifier] = ACTIONS(264),
  },
  [75] = {
    [aux_sym_assignment_expression_repeat1] = STATE(125),
    [sym_assignment_op] = STATE(126),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [sym__space] = ACTIONS(268),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_COLON_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
  },
  [76] = {
    [sym_string] = STATE(128),
    [sym_character] = STATE(128),
    [sym__collection_or_value] = STATE(128),
    [sym_collection] = STATE(128),
    [sym__number] = STATE(128),
    [sym__value] = STATE(128),
    [sym__literal] = STATE(128),
    [sym_group_expression] = STATE(128),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(270),
    [sym_identifier] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(272),
    [sym_double] = ACTIONS(270),
    [sym_binary] = ACTIONS(270),
    [sym_oct] = ACTIONS(272),
    [sym_hex] = ACTIONS(270),
  },
  [77] = {
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym_is_external] = ACTIONS(276),
    [anon_sym_default] = ACTIONS(276),
    [anon_sym_s8] = ACTIONS(276),
    [anon_sym_u64] = ACTIONS(276),
    [anon_sym_s32] = ACTIONS(276),
    [sym_identifier] = ACTIONS(276),
    [sym_integer] = ACTIONS(276),
    [sym_float] = ACTIONS(278),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(278),
    [anon_sym_i8] = ACTIONS(276),
    [anon_sym_u16] = ACTIONS(276),
    [anon_sym_enum] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_goto] = ACTIONS(276),
    [anon_sym_switch] = ACTIONS(276),
    [anon_sym_f32] = ACTIONS(276),
    [sym_double] = ACTIONS(278),
    [anon_sym_return] = ACTIONS(276),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(278),
    [anon_sym_protected] = ACTIONS(276),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(276),
    [anon_sym_u32] = ACTIONS(276),
    [anon_sym_i64] = ACTIONS(276),
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_function] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(276),
    [sym_is_declare] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(276),
    [anon_sym_f64] = ACTIONS(276),
    [sym_null] = ACTIONS(276),
    [anon_sym_s16] = ACTIONS(276),
    [sym_oct] = ACTIONS(276),
    [sym_long] = ACTIONS(278),
    [sym_hex] = ACTIONS(278),
    [anon_sym_section] = ACTIONS(276),
    [sym_binary] = ACTIONS(278),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(278),
    [anon_sym_publish] = ACTIONS(276),
    [sym_readonly] = ACTIONS(276),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(278),
    [anon_sym_i32] = ACTIONS(276),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_u8] = ACTIONS(276),
    [anon_sym_end] = ACTIONS(276),
    [anon_sym_method] = ACTIONS(276),
  },
  [78] = {
    [sym_parameter_list] = STATE(130),
    [sym_return_list] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(280),
    [anon_sym_returns] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
  },
  [79] = {
    [sym_static_assignment] = STATE(133),
    [anon_sym_COLON_EQ] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(286),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(286),
  },
  [80] = {
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(288),
    [sym_identifier] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(288),
  },
  [81] = {
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(292),
  },
  [82] = {
    [sym_pointer] = STATE(136),
    [aux_sym_type_repeat1] = STATE(136),
    [aux_sym_type_repeat2] = STATE(137),
    [sym_array] = STATE(137),
    [anon_sym_LBRACK] = ACTIONS(148),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(152),
  },
  [83] = {
    [aux_sym_type_repeat2] = STATE(138),
    [sym_array] = STATE(138),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(294),
    [anon_sym_LBRACK] = ACTIONS(148),
  },
  [84] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
  },
  [85] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
  },
  [86] = {
    [sym__comment] = STATE(86),
    [sym_compound_macro] = STATE(27),
    [sym_end_compound_macro] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_variable_definition] = STATE(27),
    [sym_primitive_type] = STATE(37),
    [sym__control_flow_statement] = STATE(28),
    [sym_goto_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_group_expression] = STATE(29),
    [sym_assignment_expression] = STATE(30),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym_access_control] = STATE(32),
    [sym__sentence] = STATE(86),
    [sym_enum_definition] = STATE(27),
    [sym_declaration_definition] = STATE(27),
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__block_comment_star] = STATE(86),
    [sym__block_comment_plus] = STATE(86),
    [sym_definition] = STATE(34),
    [sym_module_definition] = STATE(27),
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_statement] = STATE(34),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(300),
    [sym_is_external] = ACTIONS(303),
    [anon_sym_default] = ACTIONS(306),
    [anon_sym_s8] = ACTIONS(309),
    [anon_sym_u64] = ACTIONS(309),
    [anon_sym_s32] = ACTIONS(309),
    [sym_identifier] = ACTIONS(312),
    [sym_integer] = ACTIONS(315),
    [sym_float] = ACTIONS(318),
    [anon_sym_private] = ACTIONS(321),
    [anon_sym_SLASH_SLASH] = ACTIONS(324),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_i8] = ACTIONS(309),
    [anon_sym_u16] = ACTIONS(309),
    [anon_sym_enum] = ACTIONS(330),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_SQUOTE] = ACTIONS(336),
    [anon_sym_if] = ACTIONS(339),
    [anon_sym_goto] = ACTIONS(342),
    [anon_sym_switch] = ACTIONS(345),
    [anon_sym_f32] = ACTIONS(309),
    [sym_double] = ACTIONS(318),
    [anon_sym_return] = ACTIONS(348),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(351),
    [anon_sym_protected] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(309),
    [anon_sym_u32] = ACTIONS(309),
    [anon_sym_i64] = ACTIONS(309),
    [anon_sym_module] = ACTIONS(354),
    [anon_sym_function] = ACTIONS(357),
    [anon_sym_while] = ACTIONS(360),
    [sym_is_declare] = ACTIONS(303),
    [anon_sym_case] = ACTIONS(363),
    [anon_sym_f64] = ACTIONS(309),
    [sym_null] = ACTIONS(315),
    [anon_sym_s16] = ACTIONS(309),
    [sym_oct] = ACTIONS(315),
    [sym_long] = ACTIONS(318),
    [sym_hex] = ACTIONS(318),
    [anon_sym_section] = ACTIONS(366),
    [sym_binary] = ACTIONS(318),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(351),
    [anon_sym_publish] = ACTIONS(321),
    [sym_readonly] = ACTIONS(369),
    [anon_sym_SLASH] = ACTIONS(372),
    [anon_sym_LBRACE] = ACTIONS(375),
    [anon_sym_i32] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_u8] = ACTIONS(309),
    [anon_sym_end] = ACTIONS(380),
    [anon_sym_method] = ACTIONS(383),
  },
  [87] = {
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_AMP_AMP] = ACTIONS(388),
    [anon_sym_LT_EQ] = ACTIONS(388),
    [anon_sym_COLON_EQ] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(386),
    [anon_sym_GT_GT_EQ] = ACTIONS(388),
    [anon_sym_AMP_EQ] = ACTIONS(388),
    [anon_sym_PLUS_PLUS] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_PERCENT_EQ] = ACTIONS(388),
    [anon_sym_DASH_EQ] = ACTIONS(388),
    [anon_sym_LT_LT] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_GT_EQ] = ACTIONS(388),
    [anon_sym_CARET] = ACTIONS(386),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_PIPE_EQ] = ACTIONS(388),
    [anon_sym_DASH_DASH] = ACTIONS(388),
    [anon_sym_PLUS_EQ] = ACTIONS(388),
    [sym__space] = ACTIONS(388),
    [anon_sym_STAR_EQ] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(386),
    [anon_sym_CARET_EQ] = ACTIONS(388),
    [anon_sym_LT_LT_EQ] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_SLASH_EQ] = ACTIONS(388),
    [anon_sym_GT_GT] = ACTIONS(386),
  },
  [88] = {
    [sym__escape_sequence] = STATE(140),
    [aux_sym_string_repeat1] = STATE(140),
    [aux_sym_string_token1] = ACTIONS(390),
    [anon_sym_BSLASHa] = ACTIONS(392),
    [anon_sym_BSLASHt] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(392),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(392),
    [anon_sym_BSLASHv] = ACTIONS(392),
    [anon_sym_BSLASHn] = ACTIONS(392),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(392),
    [anon_sym_BSLASHf] = ACTIONS(392),
    [anon_sym_BSLASH0] = ACTIONS(392),
    [anon_sym_BSLASHr] = ACTIONS(392),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(392),
  },
  [89] = {
    [sym__escape_sequence] = STATE(141),
    [anon_sym_BSLASHa] = ACTIONS(396),
    [anon_sym_BSLASHt] = ACTIONS(396),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(396),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(396),
    [anon_sym_BSLASHv] = ACTIONS(396),
    [anon_sym_BSLASHn] = ACTIONS(396),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(396),
    [aux_sym_character_token1] = ACTIONS(398),
    [anon_sym_BSLASHf] = ACTIONS(396),
    [anon_sym_BSLASH0] = ACTIONS(396),
    [anon_sym_BSLASHr] = ACTIONS(396),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(396),
  },
  [90] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(400),
  },
  [91] = {
    [anon_sym_LPAREN] = ACTIONS(402),
    [sym_long] = ACTIONS(404),
    [sym_hex] = ACTIONS(404),
    [anon_sym_DQUOTE] = ACTIONS(404),
    [sym_integer] = ACTIONS(402),
    [anon_sym_SQUOTE] = ACTIONS(404),
    [sym_float] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(402),
    [sym_double] = ACTIONS(404),
    [sym_binary] = ACTIONS(404),
    [sym_identifier] = ACTIONS(402),
    [sym_oct] = ACTIONS(402),
  },
  [92] = {
    [sym__number] = STATE(143),
    [sym_string] = STATE(143),
    [sym_character] = STATE(143),
    [sym__value] = STATE(143),
    [sym__literal] = STATE(143),
    [sym_group_expression] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(406),
    [sym_oct] = ACTIONS(408),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(408),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(408),
    [sym_double] = ACTIONS(406),
    [sym_binary] = ACTIONS(406),
    [sym_identifier] = ACTIONS(408),
    [sym_hex] = ACTIONS(406),
  },
  [93] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(410),
  },
  [94] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(412),
  },
  [95] = {
    [anon_sym_PLUS] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
  },
  [96] = {
    [sym__block_comment_plus] = STATE(148),
    [aux_sym__block_comment_plus_repeat1] = STATE(148),
    [sym__block_comment_star] = STATE(148),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(418),
  },
  [97] = {
    [sym_static_assignment] = STATE(149),
    [anon_sym_COLON_EQ] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(420),
  },
  [98] = {
    [aux_sym_enum_definition_repeat1] = STATE(152),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(424),
  },
  [99] = {
    [anon_sym_LT] = ACTIONS(426),
    [anon_sym_AMP_AMP] = ACTIONS(428),
    [anon_sym_LT_EQ] = ACTIONS(428),
    [anon_sym_COLON_EQ] = ACTIONS(428),
    [anon_sym_PERCENT] = ACTIONS(426),
    [anon_sym_GT_GT_EQ] = ACTIONS(428),
    [anon_sym_AMP_EQ] = ACTIONS(428),
    [anon_sym_PLUS_PLUS] = ACTIONS(428),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_PERCENT_EQ] = ACTIONS(428),
    [anon_sym_DASH_EQ] = ACTIONS(428),
    [anon_sym_LT_LT] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_GT_EQ] = ACTIONS(428),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_PIPE_EQ] = ACTIONS(428),
    [anon_sym_DASH_DASH] = ACTIONS(428),
    [anon_sym_PLUS_EQ] = ACTIONS(428),
    [sym__space] = ACTIONS(428),
    [anon_sym_STAR_EQ] = ACTIONS(428),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_PIPE_PIPE] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_EQ_EQ] = ACTIONS(428),
    [anon_sym_AMP] = ACTIONS(426),
    [anon_sym_CARET_EQ] = ACTIONS(428),
    [anon_sym_LT_LT_EQ] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_SLASH_EQ] = ACTIONS(428),
    [anon_sym_GT_GT] = ACTIONS(426),
  },
  [100] = {
    [sym__escape_sequence] = STATE(100),
    [aux_sym_string_repeat1] = STATE(100),
    [aux_sym_string_token1] = ACTIONS(430),
    [anon_sym_BSLASHa] = ACTIONS(433),
    [anon_sym_BSLASHt] = ACTIONS(433),
    [anon_sym_DQUOTE] = ACTIONS(436),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(433),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(433),
    [anon_sym_BSLASHv] = ACTIONS(433),
    [anon_sym_BSLASHn] = ACTIONS(433),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(433),
    [anon_sym_BSLASHf] = ACTIONS(433),
    [anon_sym_BSLASH0] = ACTIONS(433),
    [anon_sym_BSLASHr] = ACTIONS(433),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(433),
  },
  [101] = {
    [anon_sym_LT] = ACTIONS(438),
    [anon_sym_AMP_AMP] = ACTIONS(440),
    [anon_sym_LT_EQ] = ACTIONS(440),
    [anon_sym_COLON_EQ] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(438),
    [anon_sym_GT_GT_EQ] = ACTIONS(440),
    [anon_sym_AMP_EQ] = ACTIONS(440),
    [anon_sym_PLUS_PLUS] = ACTIONS(440),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_PERCENT_EQ] = ACTIONS(440),
    [anon_sym_DASH_EQ] = ACTIONS(440),
    [anon_sym_LT_LT] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_GT_EQ] = ACTIONS(440),
    [anon_sym_CARET] = ACTIONS(438),
    [anon_sym_BANG_EQ] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PIPE_EQ] = ACTIONS(440),
    [anon_sym_DASH_DASH] = ACTIONS(440),
    [anon_sym_PLUS_EQ] = ACTIONS(440),
    [sym__space] = ACTIONS(440),
    [anon_sym_STAR_EQ] = ACTIONS(440),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_PIPE_PIPE] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_EQ_EQ] = ACTIONS(440),
    [anon_sym_AMP] = ACTIONS(438),
    [anon_sym_CARET_EQ] = ACTIONS(440),
    [anon_sym_LT_LT_EQ] = ACTIONS(440),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(440),
    [anon_sym_GT_GT] = ACTIONS(438),
  },
  [102] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(442),
  },
  [103] = {
    [sym__number] = STATE(154),
    [sym_string] = STATE(154),
    [sym_character] = STATE(154),
    [sym__value] = STATE(154),
    [sym__literal] = STATE(154),
    [sym_group_expression] = STATE(154),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(444),
    [sym_oct] = ACTIONS(446),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(446),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(446),
    [sym_double] = ACTIONS(444),
    [sym_binary] = ACTIONS(444),
    [sym_identifier] = ACTIONS(446),
    [sym_hex] = ACTIONS(444),
  },
  [104] = {
    [sym_assignment_post_op] = STATE(85),
    [sym_binary_op] = STATE(155),
    [anon_sym_LT] = ACTIONS(178),
    [anon_sym_AMP_AMP] = ACTIONS(180),
    [anon_sym_LT_EQ] = ACTIONS(180),
    [anon_sym_COLON_EQ] = ACTIONS(154),
    [anon_sym_PERCENT] = ACTIONS(178),
    [anon_sym_GT_GT_EQ] = ACTIONS(154),
    [anon_sym_AMP_EQ] = ACTIONS(154),
    [anon_sym_PLUS_PLUS] = ACTIONS(156),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_PERCENT_EQ] = ACTIONS(154),
    [anon_sym_DASH_EQ] = ACTIONS(154),
    [anon_sym_LT_LT] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(178),
    [anon_sym_BANG_EQ] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_PIPE_EQ] = ACTIONS(154),
    [anon_sym_DASH_DASH] = ACTIONS(156),
    [anon_sym_PLUS_EQ] = ACTIONS(154),
    [sym__space] = ACTIONS(154),
    [anon_sym_STAR_EQ] = ACTIONS(154),
    [anon_sym_PIPE_PIPE] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(180),
    [anon_sym_AMP] = ACTIONS(178),
    [anon_sym_CARET_EQ] = ACTIONS(154),
    [anon_sym_LT_LT_EQ] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(178),
  },
  [105] = {
    [anon_sym_default] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(448),
    [anon_sym_switch] = ACTIONS(448),
    [anon_sym_module] = ACTIONS(448),
    [anon_sym_function] = ACTIONS(448),
    [anon_sym_while] = ACTIONS(448),
    [anon_sym_case] = ACTIONS(448),
    [anon_sym_method] = ACTIONS(448),
  },
  [106] = {
    [anon_sym_DOT] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
  },
  [107] = {
    [sym_static_assignment] = STATE(156),
    [anon_sym_COLON_EQ] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(452),
  },
  [108] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(454),
  },
  [109] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(456),
  },
  [110] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(458),
  },
  [111] = {
    [sym__block_comment_plus] = STATE(161),
    [aux_sym__block_comment_star_repeat1] = STATE(161),
    [sym__block_comment_star] = STATE(161),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(462),
  },
  [112] = {
    [sym_assignment_expression] = STATE(162),
    [sym__assignment_or_collection_or_value] = STATE(162),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(56),
    [sym_collection] = STATE(56),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_long] = ACTIONS(15),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
  },
  [113] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(244),
  },
  [114] = {
    [anon_sym_PIPE_EQ] = ACTIONS(466),
    [anon_sym_PLUS_EQ] = ACTIONS(466),
    [sym__space] = ACTIONS(466),
    [anon_sym_STAR_EQ] = ACTIONS(466),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_GT_GT_EQ] = ACTIONS(466),
    [anon_sym_AMP_EQ] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_PERCENT_EQ] = ACTIONS(466),
    [anon_sym_DASH_EQ] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
    [anon_sym_CARET_EQ] = ACTIONS(466),
    [anon_sym_LT_LT_EQ] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
  },
  [115] = {
    [anon_sym_s8] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(79),
    [anon_sym_s32] = ACTIONS(79),
    [anon_sym_i16] = ACTIONS(79),
    [anon_sym_u32] = ACTIONS(79),
    [anon_sym_i64] = ACTIONS(79),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(79),
    [anon_sym_s16] = ACTIONS(79),
    [anon_sym_i8] = ACTIONS(79),
    [anon_sym_u16] = ACTIONS(79),
    [sym_readonly] = ACTIONS(79),
    [anon_sym_f32] = ACTIONS(79),
    [anon_sym_i32] = ACTIONS(79),
    [anon_sym_u8] = ACTIONS(79),
    [sym_identifier] = ACTIONS(79),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(468),
  },
  [117] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(165),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(472),
  },
  [118] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(61),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_readonly] = ACTIONS(136),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
  },
  [119] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(474),
  },
  [120] = {
    [sym__space] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(476),
  },
  [121] = {
    [aux_sym_compound_macro_repeat1] = STATE(121),
    [sym__space] = ACTIONS(478),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(476),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
  },
  [123] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(483),
  },
  [124] = {
    [sym_parameter_list] = STATE(168),
    [sym_return_list] = STATE(169),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_returns] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
  },
  [125] = {
    [aux_sym_assignment_expression_repeat1] = STATE(125),
    [anon_sym_DASH_EQ] = ACTIONS(487),
    [anon_sym_PIPE_EQ] = ACTIONS(487),
    [anon_sym_PLUS_EQ] = ACTIONS(487),
    [sym__space] = ACTIONS(489),
    [anon_sym_STAR_EQ] = ACTIONS(487),
    [anon_sym_CARET_EQ] = ACTIONS(487),
    [anon_sym_LT_LT_EQ] = ACTIONS(487),
    [anon_sym_COLON_EQ] = ACTIONS(487),
    [anon_sym_SLASH_EQ] = ACTIONS(487),
    [anon_sym_GT_GT_EQ] = ACTIONS(487),
    [anon_sym_AMP_EQ] = ACTIONS(487),
    [anon_sym_PERCENT_EQ] = ACTIONS(487),
  },
  [126] = {
    [sym_string] = STATE(170),
    [sym_character] = STATE(170),
    [sym__collection_or_value] = STATE(170),
    [sym_collection] = STATE(170),
    [sym__number] = STATE(170),
    [sym__value] = STATE(170),
    [sym__literal] = STATE(170),
    [sym_group_expression] = STATE(170),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(492),
    [sym_identifier] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(492),
    [anon_sym_LBRACE] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(494),
    [sym_double] = ACTIONS(492),
    [sym_binary] = ACTIONS(492),
    [sym_oct] = ACTIONS(494),
    [sym_hex] = ACTIONS(492),
  },
  [127] = {
    [sym_assignment_expression] = STATE(63),
    [sym__assignment_or_collection_or_value] = STATE(63),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(56),
    [sym_collection] = STATE(56),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(171),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_long] = ACTIONS(15),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(57),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_DOT] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_RBRACE] = ACTIONS(496),
  },
  [129] = {
    [sym_primitive_type] = STATE(173),
    [sym_type] = STATE(172),
    [sym__base_type] = STATE(173),
    [sym__comma_list_types] = STATE(174),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(498),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(500),
  },
  [130] = {
    [sym_return_list] = STATE(169),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_returns] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
  },
  [131] = {
    [anon_sym_DOT] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
  },
  [132] = {
    [sym_string] = STATE(175),
    [sym_character] = STATE(175),
    [sym__collection_or_value] = STATE(175),
    [sym_collection] = STATE(175),
    [sym__number] = STATE(175),
    [sym__value] = STATE(175),
    [sym__literal] = STATE(175),
    [sym_group_expression] = STATE(175),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(502),
    [sym_identifier] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(502),
    [anon_sym_LBRACE] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(504),
    [sym_double] = ACTIONS(502),
    [sym_binary] = ACTIONS(502),
    [sym_oct] = ACTIONS(504),
    [sym_hex] = ACTIONS(502),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(452),
  },
  [134] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(506),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(508),
    [sym_identifier] = ACTIONS(508),
  },
  [136] = {
    [sym_pointer] = STATE(136),
    [aux_sym_type_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(512),
  },
  [137] = {
    [aux_sym_type_repeat2] = STATE(138),
    [sym_array] = STATE(138),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(515),
    [anon_sym_LBRACK] = ACTIONS(148),
  },
  [138] = {
    [aux_sym_type_repeat2] = STATE(138),
    [sym_array] = STATE(138),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(517),
    [sym_identifier] = ACTIONS(520),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(198),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
  },
  [140] = {
    [sym__escape_sequence] = STATE(100),
    [aux_sym_string_repeat1] = STATE(100),
    [aux_sym_string_token1] = ACTIONS(200),
    [anon_sym_BSLASHa] = ACTIONS(202),
    [anon_sym_BSLASHt] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(202),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(202),
    [anon_sym_BSLASHv] = ACTIONS(202),
    [anon_sym_BSLASHn] = ACTIONS(202),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(202),
    [anon_sym_BSLASHf] = ACTIONS(202),
    [anon_sym_BSLASH0] = ACTIONS(202),
    [anon_sym_BSLASHr] = ACTIONS(202),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(202),
  },
  [141] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(524),
  },
  [142] = {
    [anon_sym_LT] = ACTIONS(526),
    [anon_sym_AMP_AMP] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_COLON_EQ] = ACTIONS(528),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_GT_GT_EQ] = ACTIONS(528),
    [anon_sym_AMP_EQ] = ACTIONS(528),
    [anon_sym_PLUS_PLUS] = ACTIONS(528),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_PERCENT_EQ] = ACTIONS(528),
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(526),
    [anon_sym_PIPE_EQ] = ACTIONS(528),
    [anon_sym_DASH_DASH] = ACTIONS(528),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [sym__space] = ACTIONS(528),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [anon_sym_LT_LT_EQ] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_GT_GT] = ACTIONS(526),
  },
  [143] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(530),
  },
  [144] = {
    [sym__block_comment_plus] = STATE(181),
    [aux_sym__block_comment_plus_repeat1] = STATE(181),
    [sym__block_comment_star] = STATE(181),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(534),
  },
  [145] = {
    [sym__block_comment_plus] = STATE(183),
    [aux_sym__block_comment_star_repeat1] = STATE(183),
    [sym__block_comment_star] = STATE(183),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(538),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(540),
    [sym_is_external] = ACTIONS(540),
    [anon_sym_default] = ACTIONS(540),
    [anon_sym_s8] = ACTIONS(540),
    [anon_sym_u64] = ACTIONS(540),
    [anon_sym_s32] = ACTIONS(540),
    [sym_identifier] = ACTIONS(540),
    [sym_integer] = ACTIONS(540),
    [sym_float] = ACTIONS(542),
    [anon_sym_private] = ACTIONS(540),
    [anon_sym_SLASH_SLASH] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_i8] = ACTIONS(540),
    [anon_sym_u16] = ACTIONS(540),
    [anon_sym_enum] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(542),
    [anon_sym_if] = ACTIONS(540),
    [anon_sym_goto] = ACTIONS(540),
    [anon_sym_switch] = ACTIONS(540),
    [anon_sym_f32] = ACTIONS(540),
    [sym_double] = ACTIONS(542),
    [anon_sym_return] = ACTIONS(540),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(542),
    [anon_sym_protected] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(540),
    [anon_sym_u32] = ACTIONS(540),
    [anon_sym_i64] = ACTIONS(540),
    [anon_sym_module] = ACTIONS(540),
    [anon_sym_function] = ACTIONS(540),
    [anon_sym_while] = ACTIONS(540),
    [sym_is_declare] = ACTIONS(540),
    [anon_sym_case] = ACTIONS(540),
    [anon_sym_f64] = ACTIONS(540),
    [sym_null] = ACTIONS(540),
    [anon_sym_s16] = ACTIONS(540),
    [sym_oct] = ACTIONS(540),
    [sym_long] = ACTIONS(542),
    [sym_hex] = ACTIONS(542),
    [anon_sym_section] = ACTIONS(540),
    [sym_binary] = ACTIONS(542),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(542),
    [anon_sym_publish] = ACTIONS(540),
    [sym_readonly] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_i32] = ACTIONS(540),
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_u8] = ACTIONS(540),
    [anon_sym_end] = ACTIONS(540),
    [anon_sym_method] = ACTIONS(540),
  },
  [147] = {
    [anon_sym_PLUS] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
  },
  [148] = {
    [sym__block_comment_plus] = STATE(148),
    [aux_sym__block_comment_plus_repeat1] = STATE(148),
    [sym__block_comment_star] = STATE(148),
    [anon_sym_PLUS] = ACTIONS(546),
    [anon_sym_SLASH] = ACTIONS(549),
    [aux_sym__block_comment_plus_token1] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(555),
  },
  [149] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(557),
  },
  [150] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(559),
  },
  [151] = {
    [sym__enum_element] = STATE(186),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(194),
  },
  [152] = {
    [aux_sym_enum_definition_repeat1] = STATE(188),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(424),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(386),
    [anon_sym_return] = ACTIONS(386),
    [anon_sym_default] = ACTIONS(386),
    [sym_integer] = ACTIONS(386),
    [sym__space] = ACTIONS(3),
    [sym_float] = ACTIONS(388),
    [sym_null] = ACTIONS(386),
    [anon_sym_while] = ACTIONS(386),
    [sym_binary] = ACTIONS(388),
    [anon_sym_case] = ACTIONS(386),
    [sym_oct] = ACTIONS(386),
    [sym_hex] = ACTIONS(388),
    [sym_long] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_section] = ACTIONS(386),
    [anon_sym_if] = ACTIONS(386),
    [anon_sym_goto] = ACTIONS(386),
    [anon_sym_switch] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [sym_double] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [sym_identifier] = ACTIONS(386),
    [anon_sym_end] = ACTIONS(386),
  },
  [154] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(563),
  },
  [155] = {
    [sym__number] = STATE(190),
    [sym_string] = STATE(190),
    [sym_character] = STATE(190),
    [sym__value] = STATE(190),
    [sym__literal] = STATE(190),
    [sym_group_expression] = STATE(190),
    [anon_sym_LPAREN] = ACTIONS(168),
    [sym_long] = ACTIONS(565),
    [sym_oct] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(567),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [sym_float] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(567),
    [sym_double] = ACTIONS(565),
    [sym_binary] = ACTIONS(565),
    [sym_identifier] = ACTIONS(567),
    [sym_hex] = ACTIONS(565),
  },
  [156] = {
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(569),
  },
  [157] = {
    [sym__block_comment_plus] = STATE(192),
    [aux_sym__block_comment_plus_repeat1] = STATE(192),
    [sym__block_comment_star] = STATE(192),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(573),
  },
  [158] = {
    [sym__block_comment_plus] = STATE(194),
    [aux_sym__block_comment_star_repeat1] = STATE(194),
    [sym__block_comment_star] = STATE(194),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(577),
  },
  [159] = {
    [anon_sym_LPAREN] = ACTIONS(579),
    [sym_is_external] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(579),
    [anon_sym_s8] = ACTIONS(579),
    [anon_sym_u64] = ACTIONS(579),
    [anon_sym_s32] = ACTIONS(579),
    [sym_identifier] = ACTIONS(579),
    [sym_integer] = ACTIONS(579),
    [sym_float] = ACTIONS(581),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_SLASH_SLASH] = ACTIONS(579),
    [anon_sym_PLUS] = ACTIONS(581),
    [anon_sym_i8] = ACTIONS(579),
    [anon_sym_u16] = ACTIONS(579),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_if] = ACTIONS(579),
    [anon_sym_goto] = ACTIONS(579),
    [anon_sym_switch] = ACTIONS(579),
    [anon_sym_f32] = ACTIONS(579),
    [sym_double] = ACTIONS(581),
    [anon_sym_return] = ACTIONS(579),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(581),
    [anon_sym_protected] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(579),
    [anon_sym_u32] = ACTIONS(579),
    [anon_sym_i64] = ACTIONS(579),
    [anon_sym_module] = ACTIONS(579),
    [anon_sym_function] = ACTIONS(579),
    [anon_sym_while] = ACTIONS(579),
    [sym_is_declare] = ACTIONS(579),
    [anon_sym_case] = ACTIONS(579),
    [anon_sym_f64] = ACTIONS(579),
    [sym_null] = ACTIONS(579),
    [anon_sym_s16] = ACTIONS(579),
    [sym_oct] = ACTIONS(579),
    [sym_long] = ACTIONS(581),
    [sym_hex] = ACTIONS(581),
    [anon_sym_section] = ACTIONS(579),
    [sym_binary] = ACTIONS(581),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(581),
    [anon_sym_publish] = ACTIONS(579),
    [sym_readonly] = ACTIONS(579),
    [anon_sym_SLASH] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_i32] = ACTIONS(579),
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_u8] = ACTIONS(579),
    [anon_sym_end] = ACTIONS(579),
    [anon_sym_method] = ACTIONS(579),
  },
  [160] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(583),
  },
  [161] = {
    [sym__block_comment_plus] = STATE(161),
    [aux_sym__block_comment_star_repeat1] = STATE(161),
    [sym__block_comment_star] = STATE(161),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_SLASH] = ACTIONS(588),
    [aux_sym__block_comment_star_token1] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(594),
  },
  [162] = {
    [anon_sym_RBRACE] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(596),
  },
  [163] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(163),
    [anon_sym_RBRACE] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(598),
  },
  [164] = {
    [sym_variable_definition] = STATE(196),
    [sym_access_control] = STATE(118),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(248),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(65),
  },
  [165] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(197),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(472),
  },
  [166] = {
    [anon_sym_DOT] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(603),
  },
  [167] = {
    [sym_static_assignment] = STATE(198),
    [anon_sym_COLON_EQ] = ACTIONS(284),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(569),
  },
  [168] = {
    [sym_return_list] = STATE(199),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym_returns] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
  },
  [169] = {
    [anon_sym_DOT] = ACTIONS(605),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(607),
  },
  [171] = {
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym__space] = ACTIONS(3),
  },
  [172] = {
    [aux_sym__comma_list_types_repeat1] = STATE(202),
    [anon_sym_DOT] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(613),
  },
  [173] = {
    [sym_pointer] = STATE(203),
    [aux_sym_type_repeat1] = STATE(203),
    [aux_sym_type_repeat2] = STATE(204),
    [sym_array] = STATE(204),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(152),
  },
  [174] = {
    [anon_sym_DOT] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_DOT] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(617),
  },
  [176] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_RBRACE] = ACTIONS(428),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(440),
  },
  [179] = {
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_AMP_AMP] = ACTIONS(623),
    [anon_sym_LT_EQ] = ACTIONS(623),
    [anon_sym_COLON_EQ] = ACTIONS(623),
    [anon_sym_PERCENT] = ACTIONS(621),
    [anon_sym_GT_GT_EQ] = ACTIONS(623),
    [anon_sym_AMP_EQ] = ACTIONS(623),
    [anon_sym_PLUS_PLUS] = ACTIONS(623),
    [anon_sym_STAR] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(623),
    [anon_sym_DASH_EQ] = ACTIONS(623),
    [anon_sym_LT_LT] = ACTIONS(621),
    [anon_sym_PLUS] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_DOT] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [anon_sym_GT_EQ] = ACTIONS(623),
    [anon_sym_CARET] = ACTIONS(621),
    [anon_sym_BANG_EQ] = ACTIONS(623),
    [anon_sym_PIPE] = ACTIONS(621),
    [anon_sym_PIPE_EQ] = ACTIONS(623),
    [anon_sym_DASH_DASH] = ACTIONS(623),
    [anon_sym_PLUS_EQ] = ACTIONS(623),
    [sym__space] = ACTIONS(623),
    [anon_sym_STAR_EQ] = ACTIONS(623),
    [anon_sym_DASH] = ACTIONS(621),
    [anon_sym_PIPE_PIPE] = ACTIONS(623),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(623),
    [anon_sym_AMP] = ACTIONS(621),
    [anon_sym_CARET_EQ] = ACTIONS(623),
    [anon_sym_LT_LT_EQ] = ACTIONS(623),
    [anon_sym_SLASH] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(623),
    [anon_sym_GT_GT] = ACTIONS(621),
  },
  [180] = {
    [anon_sym_PLUS] = ACTIONS(625),
    [sym__space] = ACTIONS(3),
  },
  [181] = {
    [sym__block_comment_plus] = STATE(148),
    [aux_sym__block_comment_plus_repeat1] = STATE(148),
    [sym__block_comment_star] = STATE(148),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(627),
  },
  [182] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(629),
  },
  [183] = {
    [sym__block_comment_plus] = STATE(161),
    [aux_sym__block_comment_star_repeat1] = STATE(161),
    [sym__block_comment_star] = STATE(161),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(631),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(633),
    [sym_is_external] = ACTIONS(633),
    [anon_sym_default] = ACTIONS(633),
    [anon_sym_s8] = ACTIONS(633),
    [anon_sym_u64] = ACTIONS(633),
    [anon_sym_s32] = ACTIONS(633),
    [sym_identifier] = ACTIONS(633),
    [sym_integer] = ACTIONS(633),
    [sym_float] = ACTIONS(635),
    [anon_sym_private] = ACTIONS(633),
    [anon_sym_SLASH_SLASH] = ACTIONS(633),
    [anon_sym_PLUS] = ACTIONS(635),
    [anon_sym_i8] = ACTIONS(633),
    [anon_sym_u16] = ACTIONS(633),
    [anon_sym_enum] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [anon_sym_if] = ACTIONS(633),
    [anon_sym_goto] = ACTIONS(633),
    [anon_sym_switch] = ACTIONS(633),
    [anon_sym_f32] = ACTIONS(633),
    [sym_double] = ACTIONS(635),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(635),
    [anon_sym_protected] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(633),
    [anon_sym_u32] = ACTIONS(633),
    [anon_sym_i64] = ACTIONS(633),
    [anon_sym_module] = ACTIONS(633),
    [anon_sym_function] = ACTIONS(633),
    [anon_sym_while] = ACTIONS(633),
    [sym_is_declare] = ACTIONS(633),
    [anon_sym_case] = ACTIONS(633),
    [anon_sym_f64] = ACTIONS(633),
    [sym_null] = ACTIONS(633),
    [anon_sym_s16] = ACTIONS(633),
    [sym_oct] = ACTIONS(633),
    [sym_long] = ACTIONS(635),
    [sym_hex] = ACTIONS(635),
    [anon_sym_section] = ACTIONS(633),
    [sym_binary] = ACTIONS(635),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(635),
    [anon_sym_publish] = ACTIONS(633),
    [sym_readonly] = ACTIONS(633),
    [anon_sym_SLASH] = ACTIONS(633),
    [anon_sym_LBRACE] = ACTIONS(635),
    [anon_sym_i32] = ACTIONS(633),
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_u8] = ACTIONS(633),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_method] = ACTIONS(633),
  },
  [185] = {
    [anon_sym_DOT] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
  },
  [186] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
  },
  [187] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(641),
  },
  [188] = {
    [aux_sym_enum_definition_repeat1] = STATE(188),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(643),
  },
  [189] = {
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_return] = ACTIONS(526),
    [anon_sym_default] = ACTIONS(526),
    [sym_integer] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym_float] = ACTIONS(528),
    [sym_null] = ACTIONS(526),
    [anon_sym_while] = ACTIONS(526),
    [sym_binary] = ACTIONS(528),
    [anon_sym_case] = ACTIONS(526),
    [sym_oct] = ACTIONS(526),
    [sym_hex] = ACTIONS(528),
    [sym_long] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_section] = ACTIONS(526),
    [anon_sym_if] = ACTIONS(526),
    [anon_sym_goto] = ACTIONS(526),
    [anon_sym_switch] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [sym_double] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_end] = ACTIONS(526),
  },
  [190] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(646),
  },
  [191] = {
    [anon_sym_PLUS] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
  },
  [192] = {
    [sym__block_comment_plus] = STATE(148),
    [aux_sym__block_comment_plus_repeat1] = STATE(148),
    [sym__block_comment_star] = STATE(148),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_SLASH] = ACTIONS(188),
    [aux_sym__block_comment_plus_token1] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(650),
  },
  [193] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(652),
  },
  [194] = {
    [sym__block_comment_plus] = STATE(161),
    [aux_sym__block_comment_star_repeat1] = STATE(161),
    [sym__block_comment_star] = STATE(161),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_SLASH] = ACTIONS(236),
    [aux_sym__block_comment_star_token1] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(654),
  },
  [195] = {
    [anon_sym_LPAREN] = ACTIONS(656),
    [sym_is_external] = ACTIONS(656),
    [anon_sym_default] = ACTIONS(656),
    [anon_sym_s8] = ACTIONS(656),
    [anon_sym_u64] = ACTIONS(656),
    [anon_sym_s32] = ACTIONS(656),
    [sym_identifier] = ACTIONS(656),
    [sym_integer] = ACTIONS(656),
    [sym_float] = ACTIONS(658),
    [anon_sym_private] = ACTIONS(656),
    [anon_sym_SLASH_SLASH] = ACTIONS(656),
    [anon_sym_PLUS] = ACTIONS(658),
    [anon_sym_i8] = ACTIONS(656),
    [anon_sym_u16] = ACTIONS(656),
    [anon_sym_enum] = ACTIONS(656),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [anon_sym_SQUOTE] = ACTIONS(658),
    [anon_sym_if] = ACTIONS(656),
    [anon_sym_goto] = ACTIONS(656),
    [anon_sym_switch] = ACTIONS(656),
    [anon_sym_f32] = ACTIONS(656),
    [sym_double] = ACTIONS(658),
    [anon_sym_return] = ACTIONS(656),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(658),
    [anon_sym_protected] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(656),
    [anon_sym_u32] = ACTIONS(656),
    [anon_sym_i64] = ACTIONS(656),
    [anon_sym_module] = ACTIONS(656),
    [anon_sym_function] = ACTIONS(656),
    [anon_sym_while] = ACTIONS(656),
    [sym_is_declare] = ACTIONS(656),
    [anon_sym_case] = ACTIONS(656),
    [anon_sym_f64] = ACTIONS(656),
    [sym_null] = ACTIONS(656),
    [anon_sym_s16] = ACTIONS(656),
    [sym_oct] = ACTIONS(656),
    [sym_long] = ACTIONS(658),
    [sym_hex] = ACTIONS(658),
    [anon_sym_section] = ACTIONS(656),
    [sym_binary] = ACTIONS(658),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(658),
    [anon_sym_publish] = ACTIONS(656),
    [sym_readonly] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(656),
    [anon_sym_LBRACE] = ACTIONS(658),
    [anon_sym_i32] = ACTIONS(656),
    [ts_builtin_sym_end] = ACTIONS(658),
    [anon_sym_u8] = ACTIONS(656),
    [anon_sym_end] = ACTIONS(656),
    [anon_sym_method] = ACTIONS(656),
  },
  [196] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_COMMA] = ACTIONS(660),
  },
  [197] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(197),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_COMMA] = ACTIONS(662),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_DOT] = ACTIONS(665),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(665),
  },
  [199] = {
    [anon_sym_DOT] = ACTIONS(667),
    [sym__space] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_RBRACE] = ACTIONS(466),
  },
  [201] = {
    [sym__base_type] = STATE(173),
    [sym_primitive_type] = STATE(173),
    [sym_type] = STATE(215),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(500),
  },
  [202] = {
    [aux_sym__comma_list_types_repeat1] = STATE(216),
    [anon_sym_DOT] = ACTIONS(669),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(613),
  },
  [203] = {
    [sym_pointer] = STATE(217),
    [aux_sym_type_repeat1] = STATE(217),
    [aux_sym_type_repeat2] = STATE(218),
    [sym_array] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(152),
  },
  [204] = {
    [aux_sym_type_repeat2] = STATE(219),
    [sym_array] = STATE(219),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
  },
  [205] = {
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [aux_sym__block_comment_plus_token1] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(542),
  },
  [206] = {
    [anon_sym_PLUS] = ACTIONS(671),
    [sym__space] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_PLUS] = ACTIONS(581),
    [anon_sym_SLASH] = ACTIONS(581),
    [aux_sym__block_comment_plus_token1] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(581),
  },
  [208] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(673),
  },
  [209] = {
    [anon_sym_DOT] = ACTIONS(675),
    [sym__space] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_LPAREN] = ACTIONS(621),
    [anon_sym_return] = ACTIONS(621),
    [anon_sym_default] = ACTIONS(621),
    [sym_integer] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [sym_float] = ACTIONS(623),
    [sym_null] = ACTIONS(621),
    [anon_sym_while] = ACTIONS(621),
    [sym_binary] = ACTIONS(623),
    [anon_sym_case] = ACTIONS(621),
    [sym_oct] = ACTIONS(621),
    [sym_hex] = ACTIONS(623),
    [sym_long] = ACTIONS(623),
    [anon_sym_COMMA] = ACTIONS(623),
    [anon_sym_DQUOTE] = ACTIONS(623),
    [anon_sym_DOT] = ACTIONS(623),
    [anon_sym_section] = ACTIONS(621),
    [anon_sym_if] = ACTIONS(621),
    [anon_sym_goto] = ACTIONS(621),
    [anon_sym_switch] = ACTIONS(621),
    [anon_sym_LBRACE] = ACTIONS(623),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [sym_double] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_RBRACE] = ACTIONS(623),
    [sym_identifier] = ACTIONS(621),
    [anon_sym_end] = ACTIONS(621),
  },
  [211] = {
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [aux_sym__block_comment_star_token1] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(542),
  },
  [212] = {
    [anon_sym_PLUS] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_PLUS] = ACTIONS(581),
    [anon_sym_SLASH] = ACTIONS(581),
    [aux_sym__block_comment_star_token1] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(581),
  },
  [214] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(679),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(681),
  },
  [216] = {
    [aux_sym__comma_list_types_repeat1] = STATE(216),
    [anon_sym_DOT] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(683),
  },
  [217] = {
    [sym_pointer] = STATE(217),
    [aux_sym_type_repeat1] = STATE(217),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_DOT] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(512),
  },
  [218] = {
    [aux_sym_type_repeat2] = STATE(219),
    [sym_array] = STATE(219),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(515),
    [sym__space] = ACTIONS(3),
  },
  [219] = {
    [aux_sym_type_repeat2] = STATE(219),
    [sym_array] = STATE(219),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_PLUS] = ACTIONS(635),
    [anon_sym_SLASH] = ACTIONS(635),
    [aux_sym__block_comment_plus_token1] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(635),
  },
  [221] = {
    [anon_sym_PLUS] = ACTIONS(658),
    [anon_sym_SLASH] = ACTIONS(658),
    [aux_sym__block_comment_plus_token1] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(658),
  },
  [222] = {
    [anon_sym_PLUS] = ACTIONS(635),
    [anon_sym_SLASH] = ACTIONS(635),
    [aux_sym__block_comment_star_token1] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(635),
  },
  [223] = {
    [anon_sym_PLUS] = ACTIONS(658),
    [anon_sym_SLASH] = ACTIONS(658),
    [aux_sym__block_comment_star_token1] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(658),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(6),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(38),
  [15] = {.count = 1, .reusable = true}, SHIFT(38),
  [17] = {.count = 1, .reusable = false}, SHIFT(26),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = false}, SHIFT(16),
  [39] = {.count = 1, .reusable = true}, SHIFT(8),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = false}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = false}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = false}, SHIFT(25),
  [61] = {.count = 1, .reusable = false}, SHIFT(2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [65] = {.count = 1, .reusable = false}, SHIFT(37),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(41),
  [73] = {.count = 1, .reusable = false}, SHIFT(44),
  [75] = {.count = 1, .reusable = true}, SHIFT(44),
  [77] = {.count = 1, .reusable = false}, SHIFT(41),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [81] = {.count = 1, .reusable = false}, SHIFT(45),
  [83] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [85] = {.count = 1, .reusable = true}, SHIFT(46),
  [87] = {.count = 1, .reusable = true}, SHIFT(47),
  [89] = {.count = 1, .reusable = false}, SHIFT(49),
  [91] = {.count = 1, .reusable = true}, SHIFT(49),
  [93] = {.count = 1, .reusable = true}, SHIFT(48),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = false}, SHIFT(50),
  [99] = {.count = 1, .reusable = true}, SHIFT(51),
  [101] = {.count = 1, .reusable = true}, SHIFT(53),
  [103] = {.count = 1, .reusable = true}, SHIFT(57),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(60),
  [109] = {.count = 1, .reusable = true}, SHIFT(62),
  [111] = {.count = 1, .reusable = true}, SHIFT(65),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [115] = {.count = 2, .reusable = true}, REDUCE(sym__value, 1), SHIFT(66),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [124] = {.count = 1, .reusable = false}, SHIFT(69),
  [126] = {.count = 1, .reusable = false}, SHIFT(70),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [134] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [136] = {.count = 1, .reusable = false}, SHIFT(72),
  [138] = {.count = 1, .reusable = true}, SHIFT(74),
  [140] = {.count = 1, .reusable = true}, SHIFT(75),
  [142] = {.count = 1, .reusable = true}, SHIFT(77),
  [144] = {.count = 1, .reusable = true}, SHIFT(78),
  [146] = {.count = 1, .reusable = true}, SHIFT(79),
  [148] = {.count = 1, .reusable = true}, SHIFT(81),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(80),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [156] = {.count = 1, .reusable = true}, SHIFT(84),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [166] = {.count = 1, .reusable = true}, SHIFT(87),
  [168] = {.count = 1, .reusable = false}, SHIFT(51),
  [170] = {.count = 1, .reusable = true}, SHIFT(90),
  [172] = {.count = 1, .reusable = false}, SHIFT(90),
  [174] = {.count = 1, .reusable = true}, SHIFT(88),
  [176] = {.count = 1, .reusable = true}, SHIFT(89),
  [178] = {.count = 1, .reusable = false}, SHIFT(91),
  [180] = {.count = 1, .reusable = true}, SHIFT(91),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [186] = {.count = 1, .reusable = true}, SHIFT(93),
  [188] = {.count = 1, .reusable = true}, SHIFT(94),
  [190] = {.count = 1, .reusable = false}, SHIFT(96),
  [192] = {.count = 1, .reusable = true}, SHIFT(95),
  [194] = {.count = 1, .reusable = true}, SHIFT(97),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [200] = {.count = 1, .reusable = false}, SHIFT(100),
  [202] = {.count = 1, .reusable = true}, SHIFT(100),
  [204] = {.count = 1, .reusable = true}, SHIFT(99),
  [206] = {.count = 1, .reusable = true}, SHIFT(101),
  [208] = {.count = 1, .reusable = false}, SHIFT(104),
  [210] = {.count = 1, .reusable = true}, SHIFT(104),
  [212] = {.count = 1, .reusable = false}, SHIFT(105),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(107),
  [234] = {.count = 1, .reusable = true}, SHIFT(108),
  [236] = {.count = 1, .reusable = true}, SHIFT(109),
  [238] = {.count = 1, .reusable = false}, SHIFT(111),
  [240] = {.count = 1, .reusable = true}, SHIFT(110),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [244] = {.count = 1, .reusable = true}, SHIFT(112),
  [246] = {.count = 1, .reusable = true}, SHIFT(114),
  [248] = {.count = 1, .reusable = false}, SHIFT(115),
  [250] = {.count = 1, .reusable = true}, SHIFT(116),
  [252] = {.count = 1, .reusable = true}, SHIFT(120),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [256] = {.count = 1, .reusable = true}, SHIFT(66),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [262] = {.count = 1, .reusable = true}, SHIFT(124),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(125),
  [270] = {.count = 1, .reusable = true}, SHIFT(128),
  [272] = {.count = 1, .reusable = false}, SHIFT(128),
  [274] = {.count = 1, .reusable = true}, SHIFT(127),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(129),
  [284] = {.count = 1, .reusable = true}, SHIFT(132),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [290] = {.count = 1, .reusable = true}, SHIFT(135),
  [292] = {.count = 1, .reusable = true}, SHIFT(134),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [312] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [315] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [321] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [324] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [330] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [339] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [345] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [360] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [369] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [372] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [378] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [383] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [390] = {.count = 1, .reusable = false}, SHIFT(140),
  [392] = {.count = 1, .reusable = true}, SHIFT(140),
  [394] = {.count = 1, .reusable = true}, SHIFT(139),
  [396] = {.count = 1, .reusable = true}, SHIFT(141),
  [398] = {.count = 1, .reusable = false}, SHIFT(141),
  [400] = {.count = 1, .reusable = true}, SHIFT(142),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [406] = {.count = 1, .reusable = true}, SHIFT(143),
  [408] = {.count = 1, .reusable = false}, SHIFT(143),
  [410] = {.count = 1, .reusable = true}, SHIFT(144),
  [412] = {.count = 1, .reusable = true}, SHIFT(145),
  [414] = {.count = 1, .reusable = true}, SHIFT(146),
  [416] = {.count = 1, .reusable = false}, SHIFT(148),
  [418] = {.count = 1, .reusable = true}, SHIFT(147),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [422] = {.count = 1, .reusable = true}, SHIFT(150),
  [424] = {.count = 1, .reusable = true}, SHIFT(151),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(100),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(100),
  [436] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [442] = {.count = 1, .reusable = true}, SHIFT(153),
  [444] = {.count = 1, .reusable = true}, SHIFT(154),
  [446] = {.count = 1, .reusable = false}, SHIFT(154),
  [448] = {.count = 1, .reusable = true}, SHIFT(69),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [454] = {.count = 1, .reusable = true}, SHIFT(157),
  [456] = {.count = 1, .reusable = true}, SHIFT(158),
  [458] = {.count = 1, .reusable = true}, SHIFT(159),
  [460] = {.count = 1, .reusable = false}, SHIFT(161),
  [462] = {.count = 1, .reusable = true}, SHIFT(160),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [472] = {.count = 1, .reusable = true}, SHIFT(164),
  [474] = {.count = 1, .reusable = true}, SHIFT(166),
  [476] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [478] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(66),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [483] = {.count = 1, .reusable = true}, SHIFT(167),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [487] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2), SHIFT_REPEAT(125),
  [492] = {.count = 1, .reusable = true}, SHIFT(170),
  [494] = {.count = 1, .reusable = false}, SHIFT(170),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [500] = {.count = 1, .reusable = false}, SHIFT(173),
  [502] = {.count = 1, .reusable = true}, SHIFT(175),
  [504] = {.count = 1, .reusable = false}, SHIFT(175),
  [506] = {.count = 1, .reusable = true}, SHIFT(176),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [510] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [512] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(80),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(81),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [522] = {.count = 1, .reusable = true}, SHIFT(177),
  [524] = {.count = 1, .reusable = true}, SHIFT(178),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [530] = {.count = 1, .reusable = true}, SHIFT(179),
  [532] = {.count = 1, .reusable = false}, SHIFT(181),
  [534] = {.count = 1, .reusable = true}, SHIFT(180),
  [536] = {.count = 1, .reusable = false}, SHIFT(183),
  [538] = {.count = 1, .reusable = true}, SHIFT(182),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 4),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 4),
  [544] = {.count = 1, .reusable = true}, SHIFT(184),
  [546] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(93),
  [549] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(94),
  [552] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(148),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [559] = {.count = 1, .reusable = true}, SHIFT(185),
  [561] = {.count = 1, .reusable = true}, SHIFT(187),
  [563] = {.count = 1, .reusable = true}, SHIFT(189),
  [565] = {.count = 1, .reusable = true}, SHIFT(190),
  [567] = {.count = 1, .reusable = false}, SHIFT(190),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [571] = {.count = 1, .reusable = false}, SHIFT(192),
  [573] = {.count = 1, .reusable = true}, SHIFT(191),
  [575] = {.count = 1, .reusable = false}, SHIFT(194),
  [577] = {.count = 1, .reusable = true}, SHIFT(193),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 4),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 4),
  [583] = {.count = 1, .reusable = true}, SHIFT(195),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(108),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(109),
  [591] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(161),
  [594] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [596] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [598] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(112),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [609] = {.count = 1, .reusable = true}, SHIFT(200),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [613] = {.count = 1, .reusable = true}, SHIFT(201),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [625] = {.count = 1, .reusable = true}, SHIFT(205),
  [627] = {.count = 1, .reusable = true}, SHIFT(206),
  [629] = {.count = 1, .reusable = true}, SHIFT(207),
  [631] = {.count = 1, .reusable = true}, SHIFT(208),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 5),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 5),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [639] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [641] = {.count = 1, .reusable = true}, SHIFT(209),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(151),
  [646] = {.count = 1, .reusable = true}, SHIFT(210),
  [648] = {.count = 1, .reusable = true}, SHIFT(211),
  [650] = {.count = 1, .reusable = true}, SHIFT(212),
  [652] = {.count = 1, .reusable = true}, SHIFT(213),
  [654] = {.count = 1, .reusable = true}, SHIFT(214),
  [656] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 5),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 5),
  [660] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [662] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(164),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [671] = {.count = 1, .reusable = true}, SHIFT(220),
  [673] = {.count = 1, .reusable = true}, SHIFT(221),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [677] = {.count = 1, .reusable = true}, SHIFT(222),
  [679] = {.count = 1, .reusable = true}, SHIFT(223),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [683] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(201),
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
