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
#define STATE_COUNT 206
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__space = 1,
  anon_sym_SLASH_STAR = 2,
  aux_sym__block_comment_star_token1 = 3,
  anon_sym_STAR_SLASH = 4,
  anon_sym_PLUS_DASH = 5,
  aux_sym__block_comment_plus_token1 = 6,
  anon_sym_DASH_PLUS = 7,
  anon_sym_SLASH_SLASH = 8,
  aux_sym__comment_token1 = 9,
  anon_sym_DASH_DASH = 10,
  anon_sym_STAR_STAR = 11,
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
  anon_sym_STAR = 39,
  anon_sym_LBRACK = 40,
  anon_sym_RBRACK = 41,
  sym_is_declare = 42,
  sym_is_external = 43,
  anon_sym_if = 44,
  anon_sym_while = 45,
  anon_sym_switch = 46,
  anon_sym_case = 47,
  anon_sym_default = 48,
  anon_sym_goto = 49,
  anon_sym_section = 50,
  anon_sym_COLON_EQ = 51,
  anon_sym_return = 52,
  anon_sym_DASH = 53,
  anon_sym_AMP = 54,
  anon_sym_BANG = 55,
  anon_sym_TILDE = 56,
  anon_sym_PLUS = 57,
  anon_sym_SLASH = 58,
  anon_sym_PERCENT = 59,
  anon_sym_PIPE = 60,
  anon_sym_CARET = 61,
  anon_sym_GT = 62,
  anon_sym_LT = 63,
  anon_sym_GT_EQ = 64,
  anon_sym_LT_EQ = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_EQ_EQ = 67,
  anon_sym_AMP_AMP = 68,
  anon_sym_PIPE_PIPE = 69,
  anon_sym_GT_GT = 70,
  anon_sym_LT_LT = 71,
  anon_sym_PLUS_EQ = 72,
  anon_sym_DASH_EQ = 73,
  anon_sym_STAR_EQ = 74,
  anon_sym_SLASH_EQ = 75,
  anon_sym_PERCENT_EQ = 76,
  anon_sym_AMP_EQ = 77,
  anon_sym_PIPE_EQ = 78,
  anon_sym_CARET_EQ = 79,
  anon_sym_GT_GT_EQ = 80,
  anon_sym_LT_LT_EQ = 81,
  anon_sym_PLUS_PLUS = 82,
  anon_sym_LBRACE = 83,
  anon_sym_RBRACE = 84,
  sym_null = 85,
  sym_identifier = 86,
  anon_sym_DQUOTE = 87,
  aux_sym_string_token1 = 88,
  anon_sym_SQUOTE = 89,
  aux_sym_character_token1 = 90,
  anon_sym_BSLASH_BSLASH = 91,
  anon_sym_BSLASH0 = 92,
  anon_sym_BSLASHa = 93,
  anon_sym_BSLASHb = 94,
  anon_sym_BSLASHf = 95,
  anon_sym_BSLASHn = 96,
  anon_sym_BSLASHr = 97,
  anon_sym_BSLASHt = 98,
  anon_sym_BSLASHv = 99,
  anon_sym_BSLASH_DQUOTE = 100,
  anon_sym_BSLASH_SQUOTE = 101,
  sym_oct = 102,
  sym_integer = 103,
  sym_long = 104,
  sym_float = 105,
  sym_double = 106,
  sym_hex = 107,
  sym_binary = 108,
  sym_source_file = 109,
  sym__block_comment_star = 110,
  sym__block_comment_plus = 111,
  sym__comment = 112,
  sym__comma_list_variables = 113,
  sym__comma_list_assignment_or_collection_or_value = 114,
  sym__comma_list_types = 115,
  sym_access_control = 116,
  sym__sentence = 117,
  sym_definition = 118,
  sym_module_definition = 119,
  sym_compound_macro = 120,
  sym_end_compound_macro = 121,
  sym__enum_element = 122,
  sym_enum_definition = 123,
  sym_is_function = 124,
  sym_is_method = 125,
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
  sym_statement = 136,
  sym_end_statement = 137,
  sym__control_flow_statement = 138,
  sym_goto_statement = 139,
  sym_section_statement = 140,
  sym_single_line_if_statement = 141,
  sym_if_statement = 142,
  sym_while_statement = 143,
  sym_switch_statement = 144,
  sym_case_statement = 145,
  sym_default_statement = 146,
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
  aux_sym__block_comment_star_repeat1 = 166,
  aux_sym__block_comment_plus_repeat1 = 167,
  aux_sym__comma_list_variables_repeat1 = 168,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 169,
  aux_sym__comma_list_types_repeat1 = 170,
  aux_sym_compound_macro_repeat1 = 171,
  aux_sym_enum_definition_repeat1 = 172,
  aux_sym_type_repeat1 = 173,
  aux_sym_type_repeat2 = 174,
  aux_sym_assignment_expression_repeat1 = 175,
  aux_sym_string_repeat1 = 176,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__block_comment_star_token1] = "_block_comment_star_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_PLUS_DASH] = "+-",
  [aux_sym__block_comment_plus_token1] = "_block_comment_plus_token1",
  [anon_sym_DASH_PLUS] = "-+",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR_STAR] = "**",
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
  [anon_sym_STAR] = "*",
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_star_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__block_comment_plus_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_PLUS] = {
    .visible = true,
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
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
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
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
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
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
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
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
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
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '"')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(71);
      if (lookahead == '0')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(73);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'b')
        ADVANCE(75);
      if (lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'n')
        ADVANCE(77);
      if (lookahead == 'r')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(79);
      if (lookahead == 'v')
        ADVANCE(80);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 'x')
        ADVANCE(85);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '3')
        ADVANCE(86);
      if (lookahead == '6')
        ADVANCE(87);
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'o')
        ADVANCE(89);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(90);
      if (lookahead == '3')
        ADVANCE(91);
      if (lookahead == '6')
        ADVANCE(92);
      if (lookahead == '8')
        ADVANCE(93);
      if (lookahead == 'f')
        ADVANCE(94);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'u')
        ADVANCE(97);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'r')
        ADVANCE(98);
      if (lookahead == 'u')
        ADVANCE(99);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(101);
      if (lookahead == '3')
        ADVANCE(102);
      if (lookahead == '8')
        ADVANCE(103);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == 'w')
        ADVANCE(105);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(106);
      if (lookahead == '3')
        ADVANCE(107);
      if (lookahead == '6')
        ADVANCE(108);
      if (lookahead == '8')
        ADVANCE(109);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'h')
        ADVANCE(110);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(111);
      if (lookahead == '|')
        ADVANCE(112);
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
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
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
        ADVANCE(113);
      END_STATE();
    case 49:
      if (lookahead == ')')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(113);
      if (lookahead == 'f')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(116);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(117);
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
        ADVANCE(118);
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
        ADVANCE(119);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 82:
      if (lookahead == 's')
        ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'c')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'u')
        ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == '2')
        ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == '4')
        ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 89:
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == '6')
        ADVANCE(130);
      END_STATE();
    case 91:
      if (lookahead == '2')
        ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == '4')
        ADVANCE(132);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 96:
      if (lookahead == 'd')
        ADVANCE(134);
      END_STATE();
    case 97:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 99:
      if (lookahead == 'b')
        ADVANCE(138);
      END_STATE();
    case 100:
      if (lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == '6')
        ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == '2')
        ADVANCE(142);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 104:
      if (lookahead == 'c')
        ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'i')
        ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == '6')
        ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == '2')
        ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == '4')
        ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 113:
      if (lookahead == ')')
        ADVANCE(114);
      if (lookahead == 'f')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 115:
      if (lookahead == ')')
        ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(152);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 124:
      if (lookahead == 'm')
        ADVANCE(153);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 128:
      if (lookahead == 'c')
        ADVANCE(155);
      END_STATE();
    case 129:
      if (lookahead == 'o')
        ADVANCE(156);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 133:
      if (lookahead == 'h')
        ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'l')
        ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'v')
        ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 't')
        ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'd')
        ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 148:
      if (lookahead == 'l')
        ADVANCE(167);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float);
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
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(216);
      if (lookahead == 'e')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(220);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(225);
      if (lookahead == 'u')
        ADVANCE(226);
      if (lookahead == 'w')
        ADVANCE(227);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
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
        ADVANCE(228);
      END_STATE();
    case 210:
      if (lookahead == '*')
        ADVANCE(229);
      END_STATE();
    case 211:
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 214:
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
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 'x')
        ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(235);
      if (lookahead == '6')
        ADVANCE(236);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(239);
      if (lookahead == '3')
        ADVANCE(240);
      if (lookahead == '6')
        ADVANCE(241);
      if (lookahead == '8')
        ADVANCE(242);
      if (lookahead == 'f')
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
        ADVANCE(228);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(244);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(247);
      if (lookahead == 'u')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(250);
      if (lookahead == '3')
        ADVANCE(251);
      if (lookahead == '8')
        ADVANCE(252);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'w')
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
        ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(255);
      if (lookahead == '3')
        ADVANCE(256);
      if (lookahead == '6')
        ADVANCE(257);
      if (lookahead == '8')
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
        ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(228);
      END_STATE();
    case 228:
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
        ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 230:
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
        ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(228);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(261);
      if (lookahead == 'f')
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
        ADVANCE(228);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(263);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(228);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(228);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(228);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(228);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(228);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(228);
      END_STATE();
    case 242:
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
        ADVANCE(228);
      END_STATE();
    case 243:
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
        ADVANCE(228);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(228);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(276);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(228);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(279);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(228);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(228);
      END_STATE();
    case 252:
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
        ADVANCE(228);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(228);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(228);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(228);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(228);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(228);
      END_STATE();
    case 258:
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
        ADVANCE(228);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(228);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 263:
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
        ADVANCE(228);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(228);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 266:
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
        ADVANCE(228);
      END_STATE();
    case 267:
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
        ADVANCE(228);
      END_STATE();
    case 268:
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
        ADVANCE(228);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 270:
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
        ADVANCE(228);
      END_STATE();
    case 271:
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
        ADVANCE(228);
      END_STATE();
    case 272:
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
        ADVANCE(228);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(228);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(228);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(228);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 281:
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
        ADVANCE(228);
      END_STATE();
    case 282:
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
        ADVANCE(228);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
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
        ADVANCE(228);
      END_STATE();
    case 285:
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
        ADVANCE(228);
      END_STATE();
    case 286:
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
        ADVANCE(228);
      END_STATE();
    case 287:
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
        ADVANCE(228);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 289:
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
        ADVANCE(228);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 292:
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
        ADVANCE(228);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(228);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 295:
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
        ADVANCE(228);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 298:
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
        ADVANCE(228);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(228);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(228);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(228);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(228);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(228);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(228);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(228);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(228);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(228);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(228);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(228);
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
        ADVANCE(228);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(228);
      END_STATE();
    case 320:
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
        ADVANCE(228);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(228);
      END_STATE();
    case 325:
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
        ADVANCE(228);
      END_STATE();
    case 326:
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
        ADVANCE(228);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 328:
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
        ADVANCE(228);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(228);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 331:
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
        ADVANCE(228);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(228);
      END_STATE();
    case 333:
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
        ADVANCE(228);
      END_STATE();
    case 334:
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
        ADVANCE(228);
      END_STATE();
    case 335:
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
        ADVANCE(228);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(228);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(228);
      END_STATE();
    case 338:
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
        ADVANCE(228);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(228);
      END_STATE();
    case 340:
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
        ADVANCE(228);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(228);
      END_STATE();
    case 342:
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
        ADVANCE(228);
      END_STATE();
    case 343:
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
        ADVANCE(228);
      END_STATE();
    case 344:
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
        ADVANCE(228);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(228);
      END_STATE();
    case 346:
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
        ADVANCE(228);
      END_STATE();
    case 347:
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
        ADVANCE(228);
      END_STATE();
    case 348:
      if (lookahead == '!')
        ADVANCE(349);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(350);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(351);
      if (lookahead == '-')
        ADVANCE(352);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '%' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 350:
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
        ADVANCE(228);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 353:
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
        ADVANCE(228);
      END_STATE();
    case 354:
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(239);
      if (lookahead == '3')
        ADVANCE(240);
      if (lookahead == '6')
        ADVANCE(241);
      if (lookahead == '8')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 357:
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
        ADVANCE(228);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(250);
      if (lookahead == '3')
        ADVANCE(251);
      if (lookahead == '8')
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
        ADVANCE(228);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(228);
      END_STATE();
    case 361:
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
        ADVANCE(228);
      END_STATE();
    case 362:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 363:
      if (lookahead == '(')
        ADVANCE(355);
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
        ADVANCE(228);
      END_STATE();
    case 364:
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead == 'r')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
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
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(369);
      if (lookahead == '/')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 372:
      if (lookahead == '%')
        ADVANCE(373);
      if (lookahead == '&')
        ADVANCE(374);
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(377);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '<')
        ADVANCE(379);
      if (lookahead == '>')
        ADVANCE(380);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(381);
      if (lookahead == '|')
        ADVANCE(382);
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
        ADVANCE(228);
      END_STATE();
    case 373:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 374:
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
        ADVANCE(228);
      END_STATE();
    case 375:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
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
        ADVANCE(228);
      END_STATE();
    case 378:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(81);
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
        ADVANCE(228);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(111);
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
        ADVANCE(228);
      END_STATE();
    case 383:
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
        ADVANCE(228);
      END_STATE();
    case 384:
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
        ADVANCE(228);
      END_STATE();
    case 385:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(387);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(71);
      if (lookahead == '0')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(73);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'b')
        ADVANCE(75);
      if (lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'n')
        ADVANCE(77);
      if (lookahead == 'r')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(79);
      if (lookahead == 'v')
        ADVANCE(80);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 388:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(235);
      if (lookahead == '6')
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
        ADVANCE(228);
      END_STATE();
    case 390:
      if (lookahead == '*')
        ADVANCE(391);
      if (lookahead == '+')
        ADVANCE(392);
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '/')
        ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 393:
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 395:
      if (lookahead == '\\')
        ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(397);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '"')
        ADVANCE(70);
      if (lookahead == '\'')
        ADVANCE(71);
      if (lookahead == '0')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(73);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == 'b')
        ADVANCE(75);
      if (lookahead == 'f')
        ADVANCE(76);
      if (lookahead == 'n')
        ADVANCE(77);
      if (lookahead == 'r')
        ADVANCE(78);
      if (lookahead == 't')
        ADVANCE(79);
      if (lookahead == 'v')
        ADVANCE(80);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 398:
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(399);
      if (lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(402);
      if (lookahead == 'w')
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
        ADVANCE(228);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(228);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(228);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(228);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(228);
      END_STATE();
    case 404:
      if (lookahead == '%')
        ADVANCE(373);
      if (lookahead == '&')
        ADVANCE(405);
      if (lookahead == '*')
        ADVANCE(406);
      if (lookahead == '+')
        ADVANCE(375);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(407);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '<')
        ADVANCE(408);
      if (lookahead == '>')
        ADVANCE(409);
      if (lookahead == '^')
        ADVANCE(410);
      if (lookahead == '|')
        ADVANCE(411);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 405:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 406:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 407:
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 408:
      if (lookahead == '<')
        ADVANCE(412);
      END_STATE();
    case 409:
      if (lookahead == '>')
        ADVANCE(413);
      END_STATE();
    case 410:
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 411:
      if (lookahead == '=')
        ADVANCE(111);
      END_STATE();
    case 412:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 413:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 414:
      if (lookahead == '!')
        ADVANCE(415);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(416);
      if (lookahead == '-')
        ADVANCE(417);
      if (lookahead == '/')
        ADVANCE(418);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(419);
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
    case 415:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 419:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 420:
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
    case 421:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
      END_STATE();
    case 422:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(399);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(425);
      if (lookahead == 'w')
        ADVANCE(227);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'w')
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
        ADVANCE(228);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(228);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(228);
      END_STATE();
    case 428:
      if (lookahead == '!')
        ADVANCE(415);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(416);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(417);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(418);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(419);
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
    case 429:
      if (lookahead == '(')
        ADVANCE(355);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'r')
        ADVANCE(430);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 430:
      if (lookahead == 'e')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 't')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'u')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'r')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'n')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 's')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 437:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 438:
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(439);
      END_STATE();
    case 440:
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
    case 441:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 442:
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 'r')
        ADVANCE(358);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
      END_STATE();
    case 443:
      if (lookahead == 'c')
        ADVANCE(444);
      if (lookahead == 'd')
        ADVANCE(445);
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 'i')
        ADVANCE(447);
      if (lookahead == 'm')
        ADVANCE(448);
      if (lookahead == 's')
        ADVANCE(449);
      if (lookahead == 'w')
        ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 444:
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(451);
      END_STATE();
    case 446:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 447:
      if (lookahead == 'f')
        ADVANCE(94);
      END_STATE();
    case 448:
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 449:
      if (lookahead == 'w')
        ADVANCE(105);
      END_STATE();
    case 450:
      if (lookahead == 'h')
        ADVANCE(110);
      END_STATE();
    case 451:
      if (lookahead == 'f')
        ADVANCE(122);
      END_STATE();
    case 452:
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(356);
      if (lookahead == 's')
        ADVANCE(359);
      if (lookahead == 'u')
        ADVANCE(226);
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
        ADVANCE(228);
      END_STATE();
    case 453:
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
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(399);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(401);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead == 's')
        ADVANCE(425);
      if (lookahead == 'w')
        ADVANCE(227);
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
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '*' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_')
        ADVANCE(228);
      END_STATE();
    case 454:
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
  [1] = {.lex_state = 209},
  [2] = {.lex_state = 348},
  [3] = {.lex_state = 354},
  [4] = {.lex_state = 354},
  [5] = {.lex_state = 361},
  [6] = {.lex_state = 362},
  [7] = {.lex_state = 363},
  [8] = {.lex_state = 364},
  [9] = {.lex_state = 365},
  [10] = {.lex_state = 368},
  [11] = {.lex_state = 354},
  [12] = {.lex_state = 372},
  [13] = {.lex_state = 361},
  [14] = {.lex_state = 354},
  [15] = {.lex_state = 363},
  [16] = {.lex_state = 363},
  [17] = {.lex_state = 354},
  [18] = {.lex_state = 385},
  [19] = {.lex_state = 354},
  [20] = {.lex_state = 362},
  [21] = {.lex_state = 363},
  [22] = {.lex_state = 388},
  [23] = {.lex_state = 390},
  [24] = {.lex_state = 395},
  [25] = {.lex_state = 398},
  [26] = {.lex_state = 363},
  [27] = {.lex_state = 361},
  [28] = {.lex_state = 361},
  [29] = {.lex_state = 372},
  [30] = {.lex_state = 361},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 364},
  [33] = {.lex_state = 372},
  [34] = {.lex_state = 361},
  [35] = {.lex_state = 363},
  [36] = {.lex_state = 363},
  [37] = {.lex_state = 363},
  [38] = {.lex_state = 404},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 362},
  [41] = {.lex_state = 388},
  [42] = {.lex_state = 362},
  [43] = {.lex_state = 414},
  [44] = {.lex_state = 361},
  [45] = {.lex_state = 348},
  [46] = {.lex_state = 361},
  [47] = {.lex_state = 420},
  [48] = {.lex_state = 420},
  [49] = {.lex_state = 404},
  [50] = {.lex_state = 361},
  [51] = {.lex_state = 209},
  [52] = {.lex_state = 368},
  [53] = {.lex_state = 390},
  [54] = {.lex_state = 209},
  [55] = {.lex_state = 368},
  [56] = {.lex_state = 363},
  [57] = {.lex_state = 421},
  [58] = {.lex_state = 363},
  [59] = {.lex_state = 363},
  [60] = {.lex_state = 361},
  [61] = {.lex_state = 361},
  [62] = {.lex_state = 361},
  [63] = {.lex_state = 422},
  [64] = {.lex_state = 428},
  [65] = {.lex_state = 385},
  [66] = {.lex_state = 361},
  [67] = {.lex_state = 361},
  [68] = {.lex_state = 361},
  [69] = {.lex_state = 363},
  [70] = {.lex_state = 368},
  [71] = {.lex_state = 390},
  [72] = {.lex_state = 209},
  [73] = {.lex_state = 390},
  [74] = {.lex_state = 209},
  [75] = {.lex_state = 361},
  [76] = {.lex_state = 363},
  [77] = {.lex_state = 361},
  [78] = {.lex_state = 388},
  [79] = {.lex_state = 363},
  [80] = {.lex_state = 362},
  [81] = {.lex_state = 372},
  [82] = {.lex_state = 362},
  [83] = {.lex_state = 209},
  [84] = {.lex_state = 429},
  [85] = {.lex_state = 437},
  [86] = {.lex_state = 361},
  [87] = {.lex_state = 438},
  [88] = {.lex_state = 363},
  [89] = {.lex_state = 363},
  [90] = {.lex_state = 440},
  [91] = {.lex_state = 440},
  [92] = {.lex_state = 209},
  [93] = {.lex_state = 428},
  [94] = {.lex_state = 385},
  [95] = {.lex_state = 395},
  [96] = {.lex_state = 388},
  [97] = {.lex_state = 362},
  [98] = {.lex_state = 362},
  [99] = {.lex_state = 388},
  [100] = {.lex_state = 362},
  [101] = {.lex_state = 414},
  [102] = {.lex_state = 362},
  [103] = {.lex_state = 420},
  [104] = {.lex_state = 404},
  [105] = {.lex_state = 368},
  [106] = {.lex_state = 368},
  [107] = {.lex_state = 368},
  [108] = {.lex_state = 390},
  [109] = {.lex_state = 209},
  [110] = {.lex_state = 368},
  [111] = {.lex_state = 441},
  [112] = {.lex_state = 441},
  [113] = {.lex_state = 442},
  [114] = {.lex_state = 429},
  [115] = {.lex_state = 441},
  [116] = {.lex_state = 442},
  [117] = {.lex_state = 388},
  [118] = {.lex_state = 363},
  [119] = {.lex_state = 363},
  [120] = {.lex_state = 361},
  [121] = {.lex_state = 443},
  [122] = {.lex_state = 361},
  [123] = {.lex_state = 428},
  [124] = {.lex_state = 385},
  [125] = {.lex_state = 437},
  [126] = {.lex_state = 390},
  [127] = {.lex_state = 368},
  [128] = {.lex_state = 390},
  [129] = {.lex_state = 390},
  [130] = {.lex_state = 209},
  [131] = {.lex_state = 390},
  [132] = {.lex_state = 428},
  [133] = {.lex_state = 363},
  [134] = {.lex_state = 429},
  [135] = {.lex_state = 372},
  [136] = {.lex_state = 362},
  [137] = {.lex_state = 362},
  [138] = {.lex_state = 440},
  [139] = {.lex_state = 452},
  [140] = {.lex_state = 429},
  [141] = {.lex_state = 361},
  [142] = {.lex_state = 362},
  [143] = {.lex_state = 437},
  [144] = {.lex_state = 361},
  [145] = {.lex_state = 438},
  [146] = {.lex_state = 363},
  [147] = {.lex_state = 363},
  [148] = {.lex_state = 363},
  [149] = {.lex_state = 440},
  [150] = {.lex_state = 385},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 428},
  [153] = {.lex_state = 388},
  [154] = {.lex_state = 453},
  [155] = {.lex_state = 388},
  [156] = {.lex_state = 362},
  [157] = {.lex_state = 420},
  [158] = {.lex_state = 420},
  [159] = {.lex_state = 368},
  [160] = {.lex_state = 368},
  [161] = {.lex_state = 441},
  [162] = {.lex_state = 363},
  [163] = {.lex_state = 363},
  [164] = {.lex_state = 441},
  [165] = {.lex_state = 421},
  [166] = {.lex_state = 441},
  [167] = {.lex_state = 429},
  [168] = {.lex_state = 437},
  [169] = {.lex_state = 390},
  [170] = {.lex_state = 390},
  [171] = {.lex_state = 437},
  [172] = {.lex_state = 429},
  [173] = {.lex_state = 361},
  [174] = {.lex_state = 440},
  [175] = {.lex_state = 420},
  [176] = {.lex_state = 454},
  [177] = {.lex_state = 454},
  [178] = {.lex_state = 361},
  [179] = {.lex_state = 437},
  [180] = {.lex_state = 361},
  [181] = {.lex_state = 440},
  [182] = {.lex_state = 440},
  [183] = {.lex_state = 428},
  [184] = {.lex_state = 453},
  [185] = {.lex_state = 388},
  [186] = {.lex_state = 361},
  [187] = {.lex_state = 441},
  [188] = {.lex_state = 363},
  [189] = {.lex_state = 441},
  [190] = {.lex_state = 441},
  [191] = {.lex_state = 441},
  [192] = {.lex_state = 437},
  [193] = {.lex_state = 361},
  [194] = {.lex_state = 440},
  [195] = {.lex_state = 388},
  [196] = {.lex_state = 454},
  [197] = {.lex_state = 454},
  [198] = {.lex_state = 454},
  [199] = {.lex_state = 453},
  [200] = {.lex_state = 361},
  [201] = {.lex_state = 454},
  [202] = {.lex_state = 454},
  [203] = {.lex_state = 454},
  [204] = {.lex_state = 454},
  [205] = {.lex_state = 454},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_null] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_PLUS_DASH] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DASH_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
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
    [sym_is_declare] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym_null] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(17),
    [anon_sym_method] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PLUS_DASH] = ACTIONS(25),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_protected] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_switch] = ACTIONS(45),
    [anon_sym_f64] = ACTIONS(11),
    [sym_long] = ACTIONS(15),
    [anon_sym_s16] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_binary] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(21),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(61),
  },
  [2] = {
    [sym_assignment_expression] = STATE(41),
    [sym_string] = STATE(43),
    [sym_character] = STATE(43),
    [sym_unary_op] = STATE(42),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(43),
    [sym__value] = STATE(43),
    [sym__literal] = STATE(43),
    [sym_group_expression] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_null] = ACTIONS(65),
    [sym_double] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_float] = ACTIONS(67),
    [sym_binary] = ACTIONS(67),
    [sym_long] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(69),
    [sym_identifier] = ACTIONS(65),
    [sym_hex] = ACTIONS(67),
    [sym_integer] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(69),
  },
  [3] = {
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_function_definition] = STATE(44),
    [sym_variable_definition] = STATE(44),
    [sym_access_control] = STATE(32),
    [sym_primitive_type] = STATE(37),
    [anon_sym_protected] = ACTIONS(21),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_publish] = ACTIONS(21),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(19),
  },
  [4] = {
    [sym_group_expression] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [5] = {
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
  },
  [6] = {
    [sym_assignment_expression] = STATE(47),
    [sym__assignment_or_collection_or_value] = STATE(47),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(49),
    [sym_collection] = STATE(49),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(48),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_binary] = ACTIONS(15),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [7] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(77),
  },
  [8] = {
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
    [sym_identifier] = ACTIONS(79),
    [sym_readonly] = ACTIONS(79),
    [anon_sym_f32] = ACTIONS(79),
    [anon_sym_i32] = ACTIONS(79),
    [anon_sym_u8] = ACTIONS(79),
    [anon_sym_method] = ACTIONS(79),
  },
  [9] = {
    [aux_sym__comment_token1] = ACTIONS(81),
    [sym__space] = ACTIONS(83),
  },
  [10] = {
    [sym__block_comment_plus] = STATE(55),
    [aux_sym__block_comment_plus_repeat1] = STATE(55),
    [sym__block_comment_star] = STATE(55),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(89),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(91),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
  },
  [12] = {
    [aux_sym_compound_macro_repeat1] = STATE(59),
    [sym_parameter_list] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_DASH_DASH] = ACTIONS(97),
    [anon_sym_STAR_EQ] = ACTIONS(97),
    [anon_sym_CARET_EQ] = ACTIONS(97),
    [sym__space] = ACTIONS(99),
    [anon_sym_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_PERCENT_EQ] = ACTIONS(97),
    [anon_sym_DASH_EQ] = ACTIONS(97),
    [anon_sym_PIPE_EQ] = ACTIONS(97),
    [anon_sym_PLUS_EQ] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_DOT] = ACTIONS(104),
    [sym_identifier] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(97),
    [anon_sym_GT_GT_EQ] = ACTIONS(97),
    [anon_sym_AMP_EQ] = ACTIONS(97),
    [anon_sym_LT_LT_EQ] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_COLON_EQ] = ACTIONS(97),
  },
  [13] = {
    [anon_sym_DOT] = ACTIONS(108),
    [sym__space] = ACTIONS(3),
  },
  [14] = {
    [sym_group_expression] = STATE(61),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [15] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(110),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(112),
  },
  [17] = {
    [sym_group_expression] = STATE(63),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [18] = {
    [sym__escape_sequence] = STATE(65),
    [aux_sym_string_repeat1] = STATE(65),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(114),
    [anon_sym_BSLASHf] = ACTIONS(114),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(114),
    [anon_sym_BSLASHr] = ACTIONS(114),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(114),
    [anon_sym_BSLASHn] = ACTIONS(114),
    [anon_sym_BSLASHa] = ACTIONS(114),
    [anon_sym_BSLASHt] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_BSLASH0] = ACTIONS(114),
    [anon_sym_BSLASHb] = ACTIONS(114),
    [anon_sym_BSLASHv] = ACTIONS(114),
    [aux_sym_string_token1] = ACTIONS(118),
  },
  [19] = {
    [sym_group_expression] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [20] = {
    [sym_assignment_expression] = STATE(67),
    [sym__assignment_or_collection_or_value] = STATE(67),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(49),
    [sym_collection] = STATE(49),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_binary] = ACTIONS(15),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [21] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(120),
  },
  [22] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(69),
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
    [sym_identifier] = ACTIONS(71),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [23] = {
    [sym__block_comment_plus] = STATE(73),
    [aux_sym__block_comment_star_repeat1] = STATE(73),
    [sym__block_comment_star] = STATE(73),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(126),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(128),
  },
  [24] = {
    [sym__escape_sequence] = STATE(74),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(130),
    [aux_sym_character_token1] = ACTIONS(132),
    [anon_sym_BSLASHf] = ACTIONS(130),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(130),
    [anon_sym_BSLASHr] = ACTIONS(130),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(130),
    [anon_sym_BSLASHn] = ACTIONS(130),
    [anon_sym_BSLASHa] = ACTIONS(130),
    [anon_sym_BSLASHt] = ACTIONS(130),
    [anon_sym_BSLASH0] = ACTIONS(130),
    [anon_sym_BSLASHb] = ACTIONS(130),
    [anon_sym_BSLASHv] = ACTIONS(130),
  },
  [25] = {
    [sym_compound_macro] = STATE(77),
    [anon_sym_case] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(136),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_while] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(134),
    [anon_sym_function] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_switch] = ACTIONS(134),
    [anon_sym_method] = ACTIONS(134),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(138),
  },
  [27] = {
    [anon_sym_DOT] = ACTIONS(140),
    [sym__space] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_DOT] = ACTIONS(142),
    [sym__space] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_DASH_DASH] = ACTIONS(97),
    [anon_sym_STAR_EQ] = ACTIONS(97),
    [anon_sym_CARET_EQ] = ACTIONS(97),
    [sym__space] = ACTIONS(97),
    [anon_sym_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_PERCENT_EQ] = ACTIONS(97),
    [anon_sym_DASH_EQ] = ACTIONS(97),
    [anon_sym_PIPE_EQ] = ACTIONS(97),
    [anon_sym_PLUS_EQ] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_LT_LT_EQ] = ACTIONS(97),
    [anon_sym_SLASH_EQ] = ACTIONS(97),
    [anon_sym_GT_GT_EQ] = ACTIONS(97),
    [anon_sym_AMP_EQ] = ACTIONS(97),
    [anon_sym_COLON_EQ] = ACTIONS(97),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
  },
  [31] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(146),
  },
  [32] = {
    [sym_primitive_type] = STATE(37),
    [sym_is_function] = STATE(79),
    [sym_is_method] = STATE(79),
    [sym__base_type] = STATE(37),
    [sym_type] = STATE(69),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_identifier] = ACTIONS(71),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(19),
  },
  [33] = {
    [aux_sym_assignment_expression_repeat1] = STATE(81),
    [sym_assignment_op] = STATE(82),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(152),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(154),
    [sym__space] = ACTIONS(3),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(156),
  },
  [36] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(158),
  },
  [37] = {
    [sym_pointer] = STATE(88),
    [aux_sym_type_repeat1] = STATE(88),
    [aux_sym_type_repeat2] = STATE(89),
    [sym_array] = STATE(89),
    [anon_sym_STAR] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [38] = {
    [sym_assignment_post_op] = STATE(91),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_COLON_EQ] = ACTIONS(166),
  },
  [39] = {
    [sym__comment] = STATE(92),
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
    [sym__sentence] = STATE(92),
    [sym_enum_definition] = STATE(27),
    [sym_declaration_definition] = STATE(27),
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__block_comment_star] = STATE(92),
    [sym__block_comment_plus] = STATE(92),
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
    [aux_sym_source_file_repeat1] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_is_declare] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(9),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym_null] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(17),
    [anon_sym_method] = ACTIONS(19),
    [anon_sym_private] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PLUS_DASH] = ACTIONS(25),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(35),
    [anon_sym_protected] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_function] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_switch] = ACTIONS(45),
    [anon_sym_f64] = ACTIONS(11),
    [sym_long] = ACTIONS(15),
    [anon_sym_s16] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_binary] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_goto] = ACTIONS(51),
    [anon_sym_STAR_STAR] = ACTIONS(35),
    [anon_sym_publish] = ACTIONS(21),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(61),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(172),
    [sym_null] = ACTIONS(172),
    [sym_double] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(172),
    [sym_oct] = ACTIONS(172),
    [sym_hex] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_integer] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_float] = ACTIONS(174),
    [sym_binary] = ACTIONS(174),
    [sym_long] = ACTIONS(174),
  },
  [41] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(176),
  },
  [42] = {
    [sym__number] = STATE(96),
    [sym_string] = STATE(96),
    [sym_character] = STATE(96),
    [sym__value] = STATE(96),
    [sym__literal] = STATE(96),
    [sym_group_expression] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(180),
    [sym_double] = ACTIONS(182),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(180),
    [sym_oct] = ACTIONS(180),
    [sym_hex] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_integer] = ACTIONS(180),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(182),
    [sym_binary] = ACTIONS(182),
    [sym_long] = ACTIONS(182),
  },
  [43] = {
    [sym_assignment_post_op] = STATE(91),
    [sym_binary_op] = STATE(98),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_COLON_EQ] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(188),
  },
  [44] = {
    [anon_sym_DOT] = ACTIONS(192),
    [sym__space] = ACTIONS(3),
  },
  [45] = {
    [sym_assignment_expression] = STATE(99),
    [sym_string] = STATE(101),
    [sym_character] = STATE(101),
    [sym_unary_op] = STATE(100),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(101),
    [sym__value] = STATE(101),
    [sym__literal] = STATE(101),
    [sym_group_expression] = STATE(101),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(63),
    [sym_null] = ACTIONS(194),
    [sym_double] = ACTIONS(196),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_float] = ACTIONS(196),
    [sym_binary] = ACTIONS(196),
    [sym_long] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(69),
    [sym_identifier] = ACTIONS(194),
    [sym_hex] = ACTIONS(196),
    [sym_integer] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_TILDE] = ACTIONS(69),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(198),
    [sym__space] = ACTIONS(3),
  },
  [47] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(103),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(202),
  },
  [48] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(204),
  },
  [49] = {
    [aux_sym_assignment_expression_repeat1] = STATE(81),
    [sym_assignment_op] = STATE(82),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
  },
  [50] = {
    [anon_sym_DOT] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_is_declare] = ACTIONS(210),
    [anon_sym_case] = ACTIONS(210),
    [anon_sym_s8] = ACTIONS(210),
    [anon_sym_u64] = ACTIONS(210),
    [anon_sym_s32] = ACTIONS(210),
    [anon_sym_LBRACE] = ACTIONS(212),
    [sym_null] = ACTIONS(210),
    [sym_oct] = ACTIONS(210),
    [anon_sym_section] = ACTIONS(210),
    [sym_double] = ACTIONS(212),
    [anon_sym_private] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(210),
    [anon_sym_PLUS_DASH] = ACTIONS(212),
    [anon_sym_i8] = ACTIONS(210),
    [anon_sym_u16] = ACTIONS(210),
    [anon_sym_enum] = ACTIONS(210),
    [sym_identifier] = ACTIONS(210),
    [sym_is_external] = ACTIONS(210),
    [anon_sym_default] = ACTIONS(210),
    [anon_sym_while] = ACTIONS(210),
    [anon_sym_f32] = ACTIONS(210),
    [sym_integer] = ACTIONS(210),
    [sym_hex] = ACTIONS(212),
    [anon_sym_DASH_DASH] = ACTIONS(212),
    [anon_sym_protected] = ACTIONS(210),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(210),
    [anon_sym_u32] = ACTIONS(210),
    [anon_sym_i64] = ACTIONS(210),
    [anon_sym_module] = ACTIONS(210),
    [anon_sym_function] = ACTIONS(210),
    [anon_sym_if] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [anon_sym_switch] = ACTIONS(210),
    [anon_sym_f64] = ACTIONS(210),
    [sym_long] = ACTIONS(212),
    [anon_sym_s16] = ACTIONS(210),
    [sym_float] = ACTIONS(212),
    [sym_binary] = ACTIONS(212),
    [anon_sym_return] = ACTIONS(210),
    [anon_sym_goto] = ACTIONS(210),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_STAR_STAR] = ACTIONS(212),
    [anon_sym_publish] = ACTIONS(210),
    [sym_readonly] = ACTIONS(210),
    [anon_sym_SLASH_STAR] = ACTIONS(212),
    [anon_sym_i32] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_u8] = ACTIONS(210),
    [anon_sym_end] = ACTIONS(210),
    [anon_sym_method] = ACTIONS(210),
  },
  [52] = {
    [sym__block_comment_plus] = STATE(106),
    [aux_sym__block_comment_plus_repeat1] = STATE(106),
    [sym__block_comment_star] = STATE(106),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(214),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(216),
  },
  [53] = {
    [sym__block_comment_plus] = STATE(108),
    [aux_sym__block_comment_star_repeat1] = STATE(108),
    [sym__block_comment_star] = STATE(108),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(218),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(220),
  },
  [54] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_is_declare] = ACTIONS(222),
    [anon_sym_case] = ACTIONS(222),
    [anon_sym_s8] = ACTIONS(222),
    [anon_sym_u64] = ACTIONS(222),
    [anon_sym_s32] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(224),
    [sym_null] = ACTIONS(222),
    [sym_oct] = ACTIONS(222),
    [anon_sym_section] = ACTIONS(222),
    [sym_double] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(222),
    [anon_sym_PLUS_DASH] = ACTIONS(224),
    [anon_sym_i8] = ACTIONS(222),
    [anon_sym_u16] = ACTIONS(222),
    [anon_sym_enum] = ACTIONS(222),
    [sym_identifier] = ACTIONS(222),
    [sym_is_external] = ACTIONS(222),
    [anon_sym_default] = ACTIONS(222),
    [anon_sym_while] = ACTIONS(222),
    [anon_sym_f32] = ACTIONS(222),
    [sym_integer] = ACTIONS(222),
    [sym_hex] = ACTIONS(224),
    [anon_sym_DASH_DASH] = ACTIONS(224),
    [anon_sym_protected] = ACTIONS(222),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(222),
    [anon_sym_u32] = ACTIONS(222),
    [anon_sym_i64] = ACTIONS(222),
    [anon_sym_module] = ACTIONS(222),
    [anon_sym_function] = ACTIONS(222),
    [anon_sym_if] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(222),
    [anon_sym_f64] = ACTIONS(222),
    [sym_long] = ACTIONS(224),
    [anon_sym_s16] = ACTIONS(222),
    [sym_float] = ACTIONS(224),
    [sym_binary] = ACTIONS(224),
    [anon_sym_return] = ACTIONS(222),
    [anon_sym_goto] = ACTIONS(222),
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_STAR_STAR] = ACTIONS(224),
    [anon_sym_publish] = ACTIONS(222),
    [sym_readonly] = ACTIONS(222),
    [anon_sym_SLASH_STAR] = ACTIONS(224),
    [anon_sym_i32] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_u8] = ACTIONS(222),
    [anon_sym_end] = ACTIONS(222),
    [anon_sym_method] = ACTIONS(222),
  },
  [55] = {
    [sym__block_comment_plus] = STATE(110),
    [aux_sym__block_comment_plus_repeat1] = STATE(110),
    [sym__block_comment_star] = STATE(110),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(228),
  },
  [56] = {
    [sym__enum_element] = STATE(112),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(230),
  },
  [57] = {
    [sym_variable_definition] = STATE(115),
    [sym_access_control] = STATE(116),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym__comma_list_variables] = STATE(117),
    [anon_sym_protected] = ACTIONS(232),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(232),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_publish] = ACTIONS(232),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [58] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(236),
  },
  [59] = {
    [aux_sym_compound_macro_repeat1] = STATE(119),
    [sym_parameter_list] = STATE(120),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym__space] = ACTIONS(240),
  },
  [60] = {
    [anon_sym_DOT] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
  },
  [63] = {
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
    [sym_statement] = STATE(122),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_null] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(9),
    [sym_double] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(13),
    [anon_sym_section] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(41),
    [sym_float] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(45),
    [sym_binary] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_goto] = ACTIONS(51),
    [sym_identifier] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [64] = {
    [anon_sym_PERCENT] = ACTIONS(250),
    [anon_sym_GT_EQ] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(250),
    [anon_sym_PERCENT_EQ] = ACTIONS(252),
    [anon_sym_DASH_EQ] = ACTIONS(252),
    [anon_sym_PIPE_EQ] = ACTIONS(252),
    [anon_sym_EQ_EQ] = ACTIONS(252),
    [anon_sym_PLUS_EQ] = ACTIONS(252),
    [anon_sym_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_LT_LT_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_COLON_EQ] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_DASH_DASH] = ACTIONS(252),
    [anon_sym_STAR_EQ] = ACTIONS(252),
    [anon_sym_CARET_EQ] = ACTIONS(252),
    [sym__space] = ACTIONS(252),
    [anon_sym_AMP_AMP] = ACTIONS(252),
    [anon_sym_LT_EQ] = ACTIONS(252),
    [anon_sym_GT_GT] = ACTIONS(250),
    [anon_sym_PLUS_PLUS] = ACTIONS(252),
    [anon_sym_SLASH] = ACTIONS(250),
    [anon_sym_LT] = ACTIONS(250),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_SLASH_EQ] = ACTIONS(252),
    [anon_sym_GT_GT_EQ] = ACTIONS(252),
    [anon_sym_AMP_EQ] = ACTIONS(252),
    [anon_sym_BANG_EQ] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(250),
  },
  [65] = {
    [sym__escape_sequence] = STATE(124),
    [aux_sym_string_repeat1] = STATE(124),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(254),
    [anon_sym_BSLASHf] = ACTIONS(254),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(254),
    [anon_sym_BSLASHr] = ACTIONS(254),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(254),
    [anon_sym_BSLASHn] = ACTIONS(254),
    [anon_sym_BSLASHa] = ACTIONS(254),
    [anon_sym_BSLASHt] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_BSLASH0] = ACTIONS(254),
    [anon_sym_BSLASHb] = ACTIONS(254),
    [anon_sym_BSLASHv] = ACTIONS(254),
    [aux_sym_string_token1] = ACTIONS(258),
  },
  [66] = {
    [anon_sym_DOT] = ACTIONS(260),
    [sym__space] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_DOT] = ACTIONS(262),
    [sym__space] = ACTIONS(3),
  },
  [68] = {
    [anon_sym_DOT] = ACTIONS(264),
    [sym__space] = ACTIONS(3),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(266),
  },
  [70] = {
    [sym__block_comment_plus] = STATE(127),
    [aux_sym__block_comment_plus_repeat1] = STATE(127),
    [sym__block_comment_star] = STATE(127),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(268),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(270),
  },
  [71] = {
    [sym__block_comment_plus] = STATE(129),
    [aux_sym__block_comment_star_repeat1] = STATE(129),
    [sym__block_comment_star] = STATE(129),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(272),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(274),
  },
  [72] = {
    [anon_sym_LPAREN] = ACTIONS(276),
    [sym_is_declare] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(276),
    [anon_sym_s8] = ACTIONS(276),
    [anon_sym_u64] = ACTIONS(276),
    [anon_sym_s32] = ACTIONS(276),
    [anon_sym_LBRACE] = ACTIONS(278),
    [sym_null] = ACTIONS(276),
    [sym_oct] = ACTIONS(276),
    [anon_sym_section] = ACTIONS(276),
    [sym_double] = ACTIONS(278),
    [anon_sym_private] = ACTIONS(276),
    [anon_sym_SLASH_SLASH] = ACTIONS(276),
    [anon_sym_PLUS_DASH] = ACTIONS(278),
    [anon_sym_i8] = ACTIONS(276),
    [anon_sym_u16] = ACTIONS(276),
    [anon_sym_enum] = ACTIONS(276),
    [sym_identifier] = ACTIONS(276),
    [sym_is_external] = ACTIONS(276),
    [anon_sym_default] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(276),
    [anon_sym_f32] = ACTIONS(276),
    [sym_integer] = ACTIONS(276),
    [sym_hex] = ACTIONS(278),
    [anon_sym_DASH_DASH] = ACTIONS(278),
    [anon_sym_protected] = ACTIONS(276),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(276),
    [anon_sym_u32] = ACTIONS(276),
    [anon_sym_i64] = ACTIONS(276),
    [anon_sym_module] = ACTIONS(276),
    [anon_sym_function] = ACTIONS(276),
    [anon_sym_if] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(278),
    [anon_sym_switch] = ACTIONS(276),
    [anon_sym_f64] = ACTIONS(276),
    [sym_long] = ACTIONS(278),
    [anon_sym_s16] = ACTIONS(276),
    [sym_float] = ACTIONS(278),
    [sym_binary] = ACTIONS(278),
    [anon_sym_return] = ACTIONS(276),
    [anon_sym_goto] = ACTIONS(276),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_STAR_STAR] = ACTIONS(278),
    [anon_sym_publish] = ACTIONS(276),
    [sym_readonly] = ACTIONS(276),
    [anon_sym_SLASH_STAR] = ACTIONS(278),
    [anon_sym_i32] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [anon_sym_u8] = ACTIONS(276),
    [anon_sym_end] = ACTIONS(276),
    [anon_sym_method] = ACTIONS(276),
  },
  [73] = {
    [sym__block_comment_plus] = STATE(131),
    [aux_sym__block_comment_star_repeat1] = STATE(131),
    [sym__block_comment_star] = STATE(131),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(282),
  },
  [74] = {
    [anon_sym_SQUOTE] = ACTIONS(284),
    [sym__space] = ACTIONS(3),
  },
  [75] = {
    [anon_sym_DOT] = ACTIONS(286),
    [sym__space] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_compound_macro_repeat1] = STATE(59),
    [sym_parameter_list] = STATE(60),
    [anon_sym_DOT] = ACTIONS(104),
    [anon_sym_LPAREN] = ACTIONS(95),
    [sym__space] = ACTIONS(240),
  },
  [77] = {
    [anon_sym_DOT] = ACTIONS(288),
    [sym__space] = ACTIONS(3),
  },
  [78] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(133),
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
    [sym_identifier] = ACTIONS(71),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [79] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(290),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(292),
    [sym_null] = ACTIONS(292),
    [sym_double] = ACTIONS(294),
    [sym_binary] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(292),
    [sym_oct] = ACTIONS(292),
    [sym_hex] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [sym_integer] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(294),
    [sym_float] = ACTIONS(294),
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_long] = ACTIONS(294),
  },
  [81] = {
    [aux_sym_assignment_expression_repeat1] = STATE(135),
    [sym_assignment_op] = STATE(136),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
  },
  [82] = {
    [sym_string] = STATE(138),
    [sym_character] = STATE(138),
    [sym__collection_or_value] = STATE(138),
    [sym_collection] = STATE(138),
    [sym__number] = STATE(138),
    [sym__value] = STATE(138),
    [sym__literal] = STATE(138),
    [sym_group_expression] = STATE(138),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(298),
    [sym_double] = ACTIONS(300),
    [sym_long] = ACTIONS(300),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(298),
    [sym_oct] = ACTIONS(298),
    [sym_hex] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_binary] = ACTIONS(300),
    [sym_integer] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [sym_is_declare] = ACTIONS(304),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_s8] = ACTIONS(304),
    [anon_sym_u64] = ACTIONS(304),
    [anon_sym_s32] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(306),
    [sym_null] = ACTIONS(304),
    [sym_oct] = ACTIONS(304),
    [anon_sym_section] = ACTIONS(304),
    [sym_double] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_PLUS_DASH] = ACTIONS(306),
    [anon_sym_i8] = ACTIONS(304),
    [anon_sym_u16] = ACTIONS(304),
    [anon_sym_enum] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_is_external] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_f32] = ACTIONS(304),
    [sym_integer] = ACTIONS(304),
    [sym_hex] = ACTIONS(306),
    [anon_sym_DASH_DASH] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(304),
    [anon_sym_u32] = ACTIONS(304),
    [anon_sym_i64] = ACTIONS(304),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_function] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_switch] = ACTIONS(304),
    [anon_sym_f64] = ACTIONS(304),
    [sym_long] = ACTIONS(306),
    [anon_sym_s16] = ACTIONS(304),
    [sym_float] = ACTIONS(306),
    [sym_binary] = ACTIONS(306),
    [anon_sym_return] = ACTIONS(304),
    [anon_sym_goto] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [anon_sym_publish] = ACTIONS(304),
    [sym_readonly] = ACTIONS(304),
    [anon_sym_SLASH_STAR] = ACTIONS(306),
    [anon_sym_i32] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_u8] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_method] = ACTIONS(304),
  },
  [84] = {
    [sym_parameter_list] = STATE(140),
    [sym_return_list] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
  },
  [85] = {
    [sym_static_assignment] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(312),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_COMMA] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(316),
    [anon_sym_DOT] = ACTIONS(316),
    [anon_sym_LBRACK] = ACTIONS(316),
  },
  [87] = {
    [anon_sym_RBRACK] = ACTIONS(318),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(320),
  },
  [88] = {
    [sym_pointer] = STATE(146),
    [aux_sym_type_repeat1] = STATE(146),
    [aux_sym_type_repeat2] = STATE(147),
    [sym_array] = STATE(147),
    [anon_sym_STAR] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [89] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(324),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
  },
  [92] = {
    [sym__comment] = STATE(92),
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
    [sym__sentence] = STATE(92),
    [sym_enum_definition] = STATE(27),
    [sym_declaration_definition] = STATE(27),
    [sym_section_statement] = STATE(28),
    [sym_single_line_if_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(38),
    [sym__block_comment_star] = STATE(92),
    [sym__block_comment_plus] = STATE(92),
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
    [aux_sym_source_file_repeat1] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(328),
    [sym_is_declare] = ACTIONS(331),
    [anon_sym_case] = ACTIONS(334),
    [anon_sym_s8] = ACTIONS(337),
    [anon_sym_u64] = ACTIONS(337),
    [anon_sym_s32] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(340),
    [sym_null] = ACTIONS(343),
    [sym_oct] = ACTIONS(343),
    [anon_sym_section] = ACTIONS(346),
    [sym_double] = ACTIONS(349),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(355),
    [anon_sym_PLUS_DASH] = ACTIONS(358),
    [anon_sym_i8] = ACTIONS(337),
    [anon_sym_u16] = ACTIONS(337),
    [anon_sym_enum] = ACTIONS(361),
    [sym_identifier] = ACTIONS(364),
    [sym_is_external] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(370),
    [anon_sym_f32] = ACTIONS(337),
    [sym_integer] = ACTIONS(343),
    [sym_hex] = ACTIONS(349),
    [anon_sym_DASH_DASH] = ACTIONS(373),
    [anon_sym_protected] = ACTIONS(352),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(337),
    [anon_sym_u32] = ACTIONS(337),
    [anon_sym_i64] = ACTIONS(337),
    [anon_sym_module] = ACTIONS(376),
    [anon_sym_function] = ACTIONS(379),
    [anon_sym_if] = ACTIONS(382),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_switch] = ACTIONS(388),
    [anon_sym_f64] = ACTIONS(337),
    [sym_long] = ACTIONS(349),
    [anon_sym_s16] = ACTIONS(337),
    [sym_float] = ACTIONS(349),
    [sym_binary] = ACTIONS(349),
    [anon_sym_return] = ACTIONS(391),
    [anon_sym_goto] = ACTIONS(394),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_STAR_STAR] = ACTIONS(373),
    [anon_sym_publish] = ACTIONS(352),
    [sym_readonly] = ACTIONS(399),
    [anon_sym_SLASH_STAR] = ACTIONS(402),
    [anon_sym_i32] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(405),
    [anon_sym_u8] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_method] = ACTIONS(411),
  },
  [93] = {
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_GT_EQ] = ACTIONS(416),
    [anon_sym_CARET] = ACTIONS(414),
    [anon_sym_PERCENT_EQ] = ACTIONS(416),
    [anon_sym_DASH_EQ] = ACTIONS(416),
    [anon_sym_PIPE_EQ] = ACTIONS(416),
    [anon_sym_EQ_EQ] = ACTIONS(416),
    [anon_sym_PLUS_EQ] = ACTIONS(416),
    [anon_sym_PIPE_PIPE] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_LT_LT_EQ] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_STAR] = ACTIONS(414),
    [anon_sym_PIPE] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_COLON_EQ] = ACTIONS(416),
    [anon_sym_DASH] = ACTIONS(414),
    [anon_sym_DASH_DASH] = ACTIONS(416),
    [anon_sym_STAR_EQ] = ACTIONS(416),
    [anon_sym_CARET_EQ] = ACTIONS(416),
    [sym__space] = ACTIONS(416),
    [anon_sym_AMP_AMP] = ACTIONS(416),
    [anon_sym_LT_EQ] = ACTIONS(416),
    [anon_sym_GT_GT] = ACTIONS(414),
    [anon_sym_PLUS_PLUS] = ACTIONS(416),
    [anon_sym_SLASH] = ACTIONS(414),
    [anon_sym_LT] = ACTIONS(414),
    [anon_sym_AMP] = ACTIONS(414),
    [anon_sym_SLASH_EQ] = ACTIONS(416),
    [anon_sym_GT_GT_EQ] = ACTIONS(416),
    [anon_sym_AMP_EQ] = ACTIONS(416),
    [anon_sym_BANG_EQ] = ACTIONS(416),
    [anon_sym_LT_LT] = ACTIONS(414),
  },
  [94] = {
    [sym__escape_sequence] = STATE(150),
    [aux_sym_string_repeat1] = STATE(150),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(418),
    [anon_sym_BSLASHf] = ACTIONS(418),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(418),
    [anon_sym_BSLASHr] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(418),
    [anon_sym_BSLASHn] = ACTIONS(418),
    [anon_sym_BSLASHa] = ACTIONS(418),
    [anon_sym_BSLASHt] = ACTIONS(418),
    [anon_sym_DQUOTE] = ACTIONS(420),
    [anon_sym_BSLASH0] = ACTIONS(418),
    [anon_sym_BSLASHb] = ACTIONS(418),
    [anon_sym_BSLASHv] = ACTIONS(418),
    [aux_sym_string_token1] = ACTIONS(422),
  },
  [95] = {
    [sym__escape_sequence] = STATE(151),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(424),
    [aux_sym_character_token1] = ACTIONS(426),
    [anon_sym_BSLASHf] = ACTIONS(424),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(424),
    [anon_sym_BSLASHr] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(424),
    [anon_sym_BSLASHn] = ACTIONS(424),
    [anon_sym_BSLASHa] = ACTIONS(424),
    [anon_sym_BSLASHt] = ACTIONS(424),
    [anon_sym_BSLASH0] = ACTIONS(424),
    [anon_sym_BSLASHb] = ACTIONS(424),
    [anon_sym_BSLASHv] = ACTIONS(424),
  },
  [96] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(428),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [sym_null] = ACTIONS(430),
    [sym_double] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(430),
    [sym_oct] = ACTIONS(430),
    [sym_hex] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym_integer] = ACTIONS(430),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [sym_float] = ACTIONS(432),
    [sym_binary] = ACTIONS(432),
    [sym_long] = ACTIONS(432),
  },
  [98] = {
    [sym__number] = STATE(153),
    [sym_string] = STATE(153),
    [sym_character] = STATE(153),
    [sym__value] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_group_expression] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(434),
    [sym_double] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(434),
    [sym_oct] = ACTIONS(434),
    [sym_hex] = ACTIONS(436),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_integer] = ACTIONS(434),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(436),
    [sym_binary] = ACTIONS(436),
    [sym_long] = ACTIONS(436),
  },
  [99] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(438),
  },
  [100] = {
    [sym__number] = STATE(155),
    [sym_string] = STATE(155),
    [sym_character] = STATE(155),
    [sym__value] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_group_expression] = STATE(155),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(440),
    [sym_double] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(440),
    [sym_oct] = ACTIONS(440),
    [sym_hex] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_integer] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(442),
    [sym_binary] = ACTIONS(442),
    [sym_long] = ACTIONS(442),
  },
  [101] = {
    [sym_assignment_post_op] = STATE(91),
    [sym_binary_op] = STATE(156),
    [anon_sym_PERCENT] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [anon_sym_CARET] = ACTIONS(188),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_COLON_EQ] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(188),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(188),
    [anon_sym_LT] = ACTIONS(188),
    [anon_sym_AMP] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_BANG_EQ] = ACTIONS(190),
    [anon_sym_LT_LT] = ACTIONS(188),
  },
  [102] = {
    [sym_assignment_expression] = STATE(157),
    [sym__assignment_or_collection_or_value] = STATE(157),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(49),
    [sym_collection] = STATE(49),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_binary] = ACTIONS(15),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [103] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(158),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(444),
  },
  [104] = {
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [sym__space] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(446),
    [anon_sym_DASH_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_PLUS_EQ] = ACTIONS(446),
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_LT_LT_EQ] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [anon_sym_GT_GT_EQ] = ACTIONS(446),
    [anon_sym_AMP_EQ] = ACTIONS(446),
    [anon_sym_COLON_EQ] = ACTIONS(446),
  },
  [105] = {
    [anon_sym_PLUS_DASH] = ACTIONS(224),
    [anon_sym_SLASH_STAR] = ACTIONS(224),
    [anon_sym_DASH_PLUS] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(222),
  },
  [106] = {
    [sym__block_comment_plus] = STATE(110),
    [aux_sym__block_comment_plus_repeat1] = STATE(110),
    [sym__block_comment_star] = STATE(110),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(228),
  },
  [107] = {
    [anon_sym_PLUS_DASH] = ACTIONS(278),
    [anon_sym_SLASH_STAR] = ACTIONS(278),
    [anon_sym_DASH_PLUS] = ACTIONS(278),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(276),
  },
  [108] = {
    [sym__block_comment_plus] = STATE(131),
    [aux_sym__block_comment_star_repeat1] = STATE(131),
    [sym__block_comment_star] = STATE(131),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(282),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(452),
    [sym_is_declare] = ACTIONS(452),
    [anon_sym_case] = ACTIONS(452),
    [anon_sym_s8] = ACTIONS(452),
    [anon_sym_u64] = ACTIONS(452),
    [anon_sym_s32] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(454),
    [sym_null] = ACTIONS(452),
    [sym_oct] = ACTIONS(452),
    [anon_sym_section] = ACTIONS(452),
    [sym_double] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(452),
    [anon_sym_PLUS_DASH] = ACTIONS(454),
    [anon_sym_i8] = ACTIONS(452),
    [anon_sym_u16] = ACTIONS(452),
    [anon_sym_enum] = ACTIONS(452),
    [sym_identifier] = ACTIONS(452),
    [sym_is_external] = ACTIONS(452),
    [anon_sym_default] = ACTIONS(452),
    [anon_sym_while] = ACTIONS(452),
    [anon_sym_f32] = ACTIONS(452),
    [sym_integer] = ACTIONS(452),
    [sym_hex] = ACTIONS(454),
    [anon_sym_DASH_DASH] = ACTIONS(454),
    [anon_sym_protected] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(452),
    [anon_sym_u32] = ACTIONS(452),
    [anon_sym_i64] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [anon_sym_function] = ACTIONS(452),
    [anon_sym_if] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(454),
    [anon_sym_switch] = ACTIONS(452),
    [anon_sym_f64] = ACTIONS(452),
    [sym_long] = ACTIONS(454),
    [anon_sym_s16] = ACTIONS(452),
    [sym_float] = ACTIONS(454),
    [sym_binary] = ACTIONS(454),
    [anon_sym_return] = ACTIONS(452),
    [anon_sym_goto] = ACTIONS(452),
    [ts_builtin_sym_end] = ACTIONS(454),
    [anon_sym_STAR_STAR] = ACTIONS(454),
    [anon_sym_publish] = ACTIONS(452),
    [sym_readonly] = ACTIONS(452),
    [anon_sym_SLASH_STAR] = ACTIONS(454),
    [anon_sym_i32] = ACTIONS(452),
    [anon_sym_SQUOTE] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(452),
    [anon_sym_end] = ACTIONS(452),
    [anon_sym_method] = ACTIONS(452),
  },
  [110] = {
    [sym__block_comment_plus] = STATE(110),
    [aux_sym__block_comment_plus_repeat1] = STATE(110),
    [sym__block_comment_star] = STATE(110),
    [anon_sym_PLUS_DASH] = ACTIONS(456),
    [anon_sym_SLASH_STAR] = ACTIONS(459),
    [anon_sym_DASH_PLUS] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(464),
  },
  [111] = {
    [sym_static_assignment] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_COLON_EQ] = ACTIONS(314),
  },
  [112] = {
    [aux_sym_enum_definition_repeat1] = STATE(164),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(471),
  },
  [113] = {
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
    [sym_identifier] = ACTIONS(79),
    [sym_readonly] = ACTIONS(79),
    [anon_sym_f32] = ACTIONS(79),
    [anon_sym_i32] = ACTIONS(79),
    [anon_sym_u8] = ACTIONS(79),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(473),
  },
  [115] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(166),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(477),
  },
  [116] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(69),
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
    [sym_identifier] = ACTIONS(71),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [117] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(479),
  },
  [118] = {
    [sym__space] = ACTIONS(481),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
  },
  [119] = {
    [aux_sym_compound_macro_repeat1] = STATE(119),
    [sym__space] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
  },
  [120] = {
    [anon_sym_DOT] = ACTIONS(486),
    [sym__space] = ACTIONS(3),
  },
  [121] = {
    [anon_sym_case] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(488),
    [anon_sym_while] = ACTIONS(488),
    [anon_sym_module] = ACTIONS(488),
    [anon_sym_function] = ACTIONS(488),
    [anon_sym_if] = ACTIONS(488),
    [anon_sym_switch] = ACTIONS(488),
    [anon_sym_method] = ACTIONS(488),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_PERCENT] = ACTIONS(492),
    [anon_sym_GT_EQ] = ACTIONS(494),
    [anon_sym_CARET] = ACTIONS(492),
    [anon_sym_PERCENT_EQ] = ACTIONS(494),
    [anon_sym_DASH_EQ] = ACTIONS(494),
    [anon_sym_PIPE_EQ] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [anon_sym_PLUS_EQ] = ACTIONS(494),
    [anon_sym_PIPE_PIPE] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [anon_sym_LT_LT_EQ] = ACTIONS(494),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_DOT] = ACTIONS(494),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(492),
    [anon_sym_COLON_EQ] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(492),
    [anon_sym_DASH_DASH] = ACTIONS(494),
    [anon_sym_STAR_EQ] = ACTIONS(494),
    [anon_sym_CARET_EQ] = ACTIONS(494),
    [sym__space] = ACTIONS(494),
    [anon_sym_AMP_AMP] = ACTIONS(494),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [anon_sym_GT_GT] = ACTIONS(492),
    [anon_sym_PLUS_PLUS] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_LT] = ACTIONS(492),
    [anon_sym_AMP] = ACTIONS(492),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [anon_sym_GT_GT_EQ] = ACTIONS(494),
    [anon_sym_AMP_EQ] = ACTIONS(494),
    [anon_sym_BANG_EQ] = ACTIONS(494),
    [anon_sym_LT_LT] = ACTIONS(492),
  },
  [124] = {
    [sym__escape_sequence] = STATE(124),
    [aux_sym_string_repeat1] = STATE(124),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(496),
    [anon_sym_BSLASHf] = ACTIONS(496),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(496),
    [anon_sym_BSLASHr] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(496),
    [anon_sym_BSLASHn] = ACTIONS(496),
    [anon_sym_BSLASHa] = ACTIONS(496),
    [anon_sym_BSLASHt] = ACTIONS(496),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [anon_sym_BSLASH0] = ACTIONS(496),
    [anon_sym_BSLASHb] = ACTIONS(496),
    [anon_sym_BSLASHv] = ACTIONS(496),
    [aux_sym_string_token1] = ACTIONS(501),
  },
  [125] = {
    [sym_static_assignment] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(504),
  },
  [126] = {
    [anon_sym_PLUS_DASH] = ACTIONS(224),
    [anon_sym_SLASH_STAR] = ACTIONS(224),
    [anon_sym_STAR_SLASH] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(222),
  },
  [127] = {
    [sym__block_comment_plus] = STATE(110),
    [aux_sym__block_comment_plus_repeat1] = STATE(110),
    [sym__block_comment_star] = STATE(110),
    [anon_sym_PLUS_DASH] = ACTIONS(85),
    [anon_sym_SLASH_STAR] = ACTIONS(87),
    [anon_sym_DASH_PLUS] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(228),
  },
  [128] = {
    [anon_sym_PLUS_DASH] = ACTIONS(278),
    [anon_sym_SLASH_STAR] = ACTIONS(278),
    [anon_sym_STAR_SLASH] = ACTIONS(278),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(276),
  },
  [129] = {
    [sym__block_comment_plus] = STATE(131),
    [aux_sym__block_comment_star_repeat1] = STATE(131),
    [sym__block_comment_star] = STATE(131),
    [anon_sym_PLUS_DASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [anon_sym_STAR_SLASH] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(282),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(510),
    [sym_is_declare] = ACTIONS(510),
    [anon_sym_case] = ACTIONS(510),
    [anon_sym_s8] = ACTIONS(510),
    [anon_sym_u64] = ACTIONS(510),
    [anon_sym_s32] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(512),
    [sym_null] = ACTIONS(510),
    [sym_oct] = ACTIONS(510),
    [anon_sym_section] = ACTIONS(510),
    [sym_double] = ACTIONS(512),
    [anon_sym_private] = ACTIONS(510),
    [anon_sym_SLASH_SLASH] = ACTIONS(510),
    [anon_sym_PLUS_DASH] = ACTIONS(512),
    [anon_sym_i8] = ACTIONS(510),
    [anon_sym_u16] = ACTIONS(510),
    [anon_sym_enum] = ACTIONS(510),
    [sym_identifier] = ACTIONS(510),
    [sym_is_external] = ACTIONS(510),
    [anon_sym_default] = ACTIONS(510),
    [anon_sym_while] = ACTIONS(510),
    [anon_sym_f32] = ACTIONS(510),
    [sym_integer] = ACTIONS(510),
    [sym_hex] = ACTIONS(512),
    [anon_sym_DASH_DASH] = ACTIONS(512),
    [anon_sym_protected] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(510),
    [anon_sym_u32] = ACTIONS(510),
    [anon_sym_i64] = ACTIONS(510),
    [anon_sym_module] = ACTIONS(510),
    [anon_sym_function] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(512),
    [anon_sym_switch] = ACTIONS(510),
    [anon_sym_f64] = ACTIONS(510),
    [sym_long] = ACTIONS(512),
    [anon_sym_s16] = ACTIONS(510),
    [sym_float] = ACTIONS(512),
    [sym_binary] = ACTIONS(512),
    [anon_sym_return] = ACTIONS(510),
    [anon_sym_goto] = ACTIONS(510),
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [anon_sym_publish] = ACTIONS(510),
    [sym_readonly] = ACTIONS(510),
    [anon_sym_SLASH_STAR] = ACTIONS(512),
    [anon_sym_i32] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(512),
    [anon_sym_u8] = ACTIONS(510),
    [anon_sym_end] = ACTIONS(510),
    [anon_sym_method] = ACTIONS(510),
  },
  [131] = {
    [sym__block_comment_plus] = STATE(131),
    [aux_sym__block_comment_star_repeat1] = STATE(131),
    [sym__block_comment_star] = STATE(131),
    [anon_sym_PLUS_DASH] = ACTIONS(514),
    [anon_sym_SLASH_STAR] = ACTIONS(517),
    [anon_sym_STAR_SLASH] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(522),
  },
  [132] = {
    [anon_sym_PERCENT] = ACTIONS(525),
    [anon_sym_GT_EQ] = ACTIONS(527),
    [anon_sym_CARET] = ACTIONS(525),
    [anon_sym_PERCENT_EQ] = ACTIONS(527),
    [anon_sym_DASH_EQ] = ACTIONS(527),
    [anon_sym_PIPE_EQ] = ACTIONS(527),
    [anon_sym_EQ_EQ] = ACTIONS(527),
    [anon_sym_PLUS_EQ] = ACTIONS(527),
    [anon_sym_PIPE_PIPE] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_LT_LT_EQ] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_STAR] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_PLUS] = ACTIONS(525),
    [anon_sym_GT] = ACTIONS(525),
    [anon_sym_COLON_EQ] = ACTIONS(527),
    [anon_sym_DASH] = ACTIONS(525),
    [anon_sym_DASH_DASH] = ACTIONS(527),
    [anon_sym_STAR_EQ] = ACTIONS(527),
    [anon_sym_CARET_EQ] = ACTIONS(527),
    [sym__space] = ACTIONS(527),
    [anon_sym_AMP_AMP] = ACTIONS(527),
    [anon_sym_LT_EQ] = ACTIONS(527),
    [anon_sym_GT_GT] = ACTIONS(525),
    [anon_sym_PLUS_PLUS] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(525),
    [anon_sym_LT] = ACTIONS(525),
    [anon_sym_AMP] = ACTIONS(525),
    [anon_sym_SLASH_EQ] = ACTIONS(527),
    [anon_sym_GT_GT_EQ] = ACTIONS(527),
    [anon_sym_AMP_EQ] = ACTIONS(527),
    [anon_sym_BANG_EQ] = ACTIONS(527),
    [anon_sym_LT_LT] = ACTIONS(525),
  },
  [133] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(529),
  },
  [134] = {
    [sym_parameter_list] = STATE(172),
    [sym_return_list] = STATE(173),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
  },
  [135] = {
    [aux_sym_assignment_expression_repeat1] = STATE(135),
    [anon_sym_STAR_EQ] = ACTIONS(533),
    [anon_sym_CARET_EQ] = ACTIONS(533),
    [sym__space] = ACTIONS(535),
    [anon_sym_LT_LT_EQ] = ACTIONS(533),
    [anon_sym_SLASH_EQ] = ACTIONS(533),
    [anon_sym_GT_GT_EQ] = ACTIONS(533),
    [anon_sym_AMP_EQ] = ACTIONS(533),
    [anon_sym_PERCENT_EQ] = ACTIONS(533),
    [anon_sym_DASH_EQ] = ACTIONS(533),
    [anon_sym_PIPE_EQ] = ACTIONS(533),
    [anon_sym_COLON_EQ] = ACTIONS(533),
    [anon_sym_PLUS_EQ] = ACTIONS(533),
  },
  [136] = {
    [sym_string] = STATE(174),
    [sym_character] = STATE(174),
    [sym__collection_or_value] = STATE(174),
    [sym_collection] = STATE(174),
    [sym__number] = STATE(174),
    [sym__value] = STATE(174),
    [sym__literal] = STATE(174),
    [sym_group_expression] = STATE(174),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(538),
    [sym_double] = ACTIONS(540),
    [sym_long] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(538),
    [sym_oct] = ACTIONS(538),
    [sym_hex] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_binary] = ACTIONS(540),
    [sym_integer] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [137] = {
    [sym_assignment_expression] = STATE(47),
    [sym__assignment_or_collection_or_value] = STATE(47),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(49),
    [sym_collection] = STATE(49),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(175),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_null] = ACTIONS(13),
    [sym_double] = ACTIONS(15),
    [sym_long] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(13),
    [sym_oct] = ACTIONS(13),
    [sym_hex] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_binary] = ACTIONS(15),
    [sym_integer] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(59),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
  },
  [139] = {
    [sym_primitive_type] = STATE(177),
    [sym_type] = STATE(176),
    [sym__base_type] = STATE(177),
    [sym__comma_list_types] = STATE(178),
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
    [anon_sym_DOT] = ACTIONS(544),
    [sym_identifier] = ACTIONS(546),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [140] = {
    [sym_return_list] = STATE(173),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
  },
  [141] = {
    [anon_sym_DOT] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
  },
  [142] = {
    [sym_string] = STATE(179),
    [sym_character] = STATE(179),
    [sym__collection_or_value] = STATE(179),
    [sym_collection] = STATE(179),
    [sym__number] = STATE(179),
    [sym__value] = STATE(179),
    [sym__literal] = STATE(179),
    [sym_group_expression] = STATE(179),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(548),
    [sym_double] = ACTIONS(550),
    [sym_long] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(548),
    [sym_oct] = ACTIONS(548),
    [sym_hex] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_binary] = ACTIONS(550),
    [sym_integer] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(504),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
  },
  [145] = {
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym__space] = ACTIONS(3),
  },
  [146] = {
    [sym_pointer] = STATE(146),
    [aux_sym_type_repeat1] = STATE(146),
    [anon_sym_STAR] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(559),
    [anon_sym_LBRACK] = ACTIONS(559),
  },
  [147] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [148] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(565),
  },
  [149] = {
    [anon_sym_RBRACE] = ACTIONS(252),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_DOT] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
  },
  [150] = {
    [sym__escape_sequence] = STATE(124),
    [aux_sym_string_repeat1] = STATE(124),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(254),
    [anon_sym_BSLASHf] = ACTIONS(254),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(254),
    [anon_sym_BSLASHr] = ACTIONS(254),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(254),
    [anon_sym_BSLASHn] = ACTIONS(254),
    [anon_sym_BSLASHa] = ACTIONS(254),
    [anon_sym_BSLASHt] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(568),
    [anon_sym_BSLASH0] = ACTIONS(254),
    [anon_sym_BSLASHb] = ACTIONS(254),
    [anon_sym_BSLASHv] = ACTIONS(254),
    [aux_sym_string_token1] = ACTIONS(258),
  },
  [151] = {
    [anon_sym_SQUOTE] = ACTIONS(570),
    [sym__space] = ACTIONS(3),
  },
  [152] = {
    [anon_sym_PERCENT] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [anon_sym_CARET] = ACTIONS(572),
    [anon_sym_PERCENT_EQ] = ACTIONS(574),
    [anon_sym_DASH_EQ] = ACTIONS(574),
    [anon_sym_PIPE_EQ] = ACTIONS(574),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [anon_sym_PLUS_EQ] = ACTIONS(574),
    [anon_sym_PIPE_PIPE] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_LT_LT_EQ] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_COLON_EQ] = ACTIONS(574),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_DASH_DASH] = ACTIONS(574),
    [anon_sym_STAR_EQ] = ACTIONS(574),
    [anon_sym_CARET_EQ] = ACTIONS(574),
    [sym__space] = ACTIONS(574),
    [anon_sym_AMP_AMP] = ACTIONS(574),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [anon_sym_GT_GT] = ACTIONS(572),
    [anon_sym_PLUS_PLUS] = ACTIONS(574),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_LT] = ACTIONS(572),
    [anon_sym_AMP] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [anon_sym_GT_GT_EQ] = ACTIONS(574),
    [anon_sym_AMP_EQ] = ACTIONS(574),
    [anon_sym_BANG_EQ] = ACTIONS(574),
    [anon_sym_LT_LT] = ACTIONS(572),
  },
  [153] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(576),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(414),
    [sym_null] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(414),
    [sym_double] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(414),
    [anon_sym_section] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(416),
    [anon_sym_if] = ACTIONS(414),
    [sym_float] = ACTIONS(416),
    [anon_sym_switch] = ACTIONS(414),
    [sym_binary] = ACTIONS(416),
    [sym_long] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
    [anon_sym_return] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_goto] = ACTIONS(414),
    [sym_identifier] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_while] = ACTIONS(414),
    [sym_hex] = ACTIONS(416),
    [sym_integer] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_end] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(416),
  },
  [155] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(578),
  },
  [156] = {
    [sym__number] = STATE(185),
    [sym_string] = STATE(185),
    [sym_character] = STATE(185),
    [sym__value] = STATE(185),
    [sym__literal] = STATE(185),
    [sym_group_expression] = STATE(185),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_null] = ACTIONS(580),
    [sym_double] = ACTIONS(582),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(580),
    [sym_oct] = ACTIONS(580),
    [sym_hex] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_integer] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [sym_float] = ACTIONS(582),
    [sym_binary] = ACTIONS(582),
    [sym_long] = ACTIONS(582),
  },
  [157] = {
    [anon_sym_RBRACE] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(584),
  },
  [158] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(158),
    [anon_sym_RBRACE] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(586),
  },
  [159] = {
    [anon_sym_PLUS_DASH] = ACTIONS(454),
    [anon_sym_SLASH_STAR] = ACTIONS(454),
    [anon_sym_DASH_PLUS] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(452),
  },
  [160] = {
    [anon_sym_PLUS_DASH] = ACTIONS(512),
    [anon_sym_SLASH_STAR] = ACTIONS(512),
    [anon_sym_DASH_PLUS] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(510),
  },
  [161] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_COMMA] = ACTIONS(589),
  },
  [162] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(591),
  },
  [163] = {
    [sym__enum_element] = STATE(187),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(230),
  },
  [164] = {
    [aux_sym_enum_definition_repeat1] = STATE(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(471),
  },
  [165] = {
    [sym_variable_definition] = STATE(190),
    [sym_access_control] = STATE(116),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [anon_sym_protected] = ACTIONS(232),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_private] = ACTIONS(232),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_publish] = ACTIONS(232),
    [sym_readonly] = ACTIONS(53),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [166] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(477),
  },
  [167] = {
    [anon_sym_DOT] = ACTIONS(597),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(597),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(599),
  },
  [169] = {
    [anon_sym_PLUS_DASH] = ACTIONS(454),
    [anon_sym_SLASH_STAR] = ACTIONS(454),
    [anon_sym_STAR_SLASH] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(452),
  },
  [170] = {
    [anon_sym_PLUS_DASH] = ACTIONS(512),
    [anon_sym_SLASH_STAR] = ACTIONS(512),
    [anon_sym_STAR_SLASH] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(510),
  },
  [171] = {
    [sym_static_assignment] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(599),
  },
  [172] = {
    [sym_return_list] = STATE(193),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_DOT] = ACTIONS(601),
    [sym__space] = ACTIONS(3),
  },
  [174] = {
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(603),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(605),
  },
  [176] = {
    [aux_sym__comma_list_types_repeat1] = STATE(196),
    [anon_sym_DOT] = ACTIONS(607),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(609),
  },
  [177] = {
    [sym_pointer] = STATE(197),
    [aux_sym_type_repeat1] = STATE(197),
    [aux_sym_type_repeat2] = STATE(198),
    [sym_array] = STATE(198),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [178] = {
    [anon_sym_DOT] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(613),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(615),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_DOT] = ACTIONS(494),
    [anon_sym_COMMA] = ACTIONS(494),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
  },
  [183] = {
    [anon_sym_PERCENT] = ACTIONS(617),
    [anon_sym_GT_EQ] = ACTIONS(619),
    [anon_sym_CARET] = ACTIONS(617),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_EQ_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_STAR] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_PLUS] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_DASH] = ACTIONS(617),
    [anon_sym_DASH_DASH] = ACTIONS(619),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__space] = ACTIONS(619),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_LT_EQ] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_PLUS_PLUS] = ACTIONS(619),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_BANG_EQ] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(617),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(572),
    [sym_null] = ACTIONS(572),
    [anon_sym_case] = ACTIONS(572),
    [sym_double] = ACTIONS(574),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(572),
    [anon_sym_section] = ACTIONS(572),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_if] = ACTIONS(572),
    [sym_float] = ACTIONS(574),
    [anon_sym_switch] = ACTIONS(572),
    [sym_binary] = ACTIONS(574),
    [sym_long] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(574),
    [anon_sym_return] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(574),
    [anon_sym_goto] = ACTIONS(572),
    [sym_identifier] = ACTIONS(572),
    [anon_sym_default] = ACTIONS(572),
    [anon_sym_while] = ACTIONS(572),
    [sym_hex] = ACTIONS(574),
    [sym_integer] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(574),
    [anon_sym_end] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(574),
  },
  [185] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(621),
  },
  [186] = {
    [anon_sym_DOT] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
  },
  [187] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_COMMA] = ACTIONS(625),
  },
  [188] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(627),
  },
  [189] = {
    [aux_sym_enum_definition_repeat1] = STATE(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_COMMA] = ACTIONS(629),
  },
  [190] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
  },
  [191] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(634),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(637),
  },
  [193] = {
    [anon_sym_DOT] = ACTIONS(639),
    [sym__space] = ACTIONS(3),
  },
  [194] = {
    [anon_sym_RBRACE] = ACTIONS(446),
    [anon_sym_DOT] = ACTIONS(446),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
  },
  [195] = {
    [sym__base_type] = STATE(177),
    [sym_primitive_type] = STATE(177),
    [sym_type] = STATE(201),
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
    [sym_identifier] = ACTIONS(546),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [196] = {
    [aux_sym__comma_list_types_repeat1] = STATE(202),
    [anon_sym_DOT] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(609),
  },
  [197] = {
    [sym_pointer] = STATE(203),
    [aux_sym_type_repeat1] = STATE(203),
    [aux_sym_type_repeat2] = STATE(204),
    [sym_array] = STATE(204),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [198] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [199] = {
    [anon_sym_LPAREN] = ACTIONS(617),
    [sym_null] = ACTIONS(617),
    [anon_sym_case] = ACTIONS(617),
    [sym_double] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(617),
    [anon_sym_section] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_if] = ACTIONS(617),
    [sym_float] = ACTIONS(619),
    [anon_sym_switch] = ACTIONS(617),
    [sym_binary] = ACTIONS(619),
    [sym_long] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_return] = ACTIONS(617),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_goto] = ACTIONS(617),
    [sym_identifier] = ACTIONS(617),
    [anon_sym_default] = ACTIONS(617),
    [anon_sym_while] = ACTIONS(617),
    [sym_hex] = ACTIONS(619),
    [sym_integer] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_end] = ACTIONS(617),
    [anon_sym_LBRACE] = ACTIONS(619),
  },
  [200] = {
    [anon_sym_DOT] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_DOT] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(645),
  },
  [202] = {
    [aux_sym__comma_list_types_repeat1] = STATE(202),
    [anon_sym_DOT] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(647),
  },
  [203] = {
    [sym_pointer] = STATE(203),
    [aux_sym_type_repeat1] = STATE(203),
    [anon_sym_STAR] = ACTIONS(556),
    [anon_sym_COMMA] = ACTIONS(559),
    [anon_sym_DOT] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(559),
  },
  [204] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [205] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(565),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(38),
  [15] = {.count = 1, .reusable = true}, SHIFT(38),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(26),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(9),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, SHIFT(6),
  [61] = {.count = 1, .reusable = false}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = false}, SHIFT(43),
  [67] = {.count = 1, .reusable = true}, SHIFT(43),
  [69] = {.count = 1, .reusable = false}, SHIFT(40),
  [71] = {.count = 1, .reusable = false}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(45),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(50),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [81] = {.count = 1, .reusable = false}, SHIFT(51),
  [83] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [85] = {.count = 1, .reusable = true}, SHIFT(52),
  [87] = {.count = 1, .reusable = true}, SHIFT(53),
  [89] = {.count = 1, .reusable = true}, SHIFT(54),
  [91] = {.count = 1, .reusable = false}, SHIFT(55),
  [93] = {.count = 1, .reusable = true}, SHIFT(56),
  [95] = {.count = 1, .reusable = true}, SHIFT(57),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [99] = {.count = 2, .reusable = true}, REDUCE(sym__value, 1), SHIFT(58),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 1),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(62),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [114] = {.count = 1, .reusable = true}, SHIFT(65),
  [116] = {.count = 1, .reusable = true}, SHIFT(64),
  [118] = {.count = 1, .reusable = false}, SHIFT(65),
  [120] = {.count = 1, .reusable = true}, SHIFT(68),
  [122] = {.count = 1, .reusable = true}, SHIFT(70),
  [124] = {.count = 1, .reusable = true}, SHIFT(71),
  [126] = {.count = 1, .reusable = true}, SHIFT(72),
  [128] = {.count = 1, .reusable = false}, SHIFT(73),
  [130] = {.count = 1, .reusable = true}, SHIFT(74),
  [132] = {.count = 1, .reusable = false}, SHIFT(74),
  [134] = {.count = 1, .reusable = false}, SHIFT(75),
  [136] = {.count = 1, .reusable = false}, SHIFT(76),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [146] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [148] = {.count = 1, .reusable = false}, SHIFT(78),
  [150] = {.count = 1, .reusable = true}, SHIFT(80),
  [152] = {.count = 1, .reusable = true}, SHIFT(81),
  [154] = {.count = 1, .reusable = true}, SHIFT(83),
  [156] = {.count = 1, .reusable = true}, SHIFT(84),
  [158] = {.count = 1, .reusable = true}, SHIFT(85),
  [160] = {.count = 1, .reusable = true}, SHIFT(86),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [164] = {.count = 1, .reusable = true}, SHIFT(87),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [168] = {.count = 1, .reusable = true}, SHIFT(90),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(93),
  [178] = {.count = 1, .reusable = false}, SHIFT(45),
  [180] = {.count = 1, .reusable = false}, SHIFT(96),
  [182] = {.count = 1, .reusable = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = true}, SHIFT(94),
  [186] = {.count = 1, .reusable = true}, SHIFT(95),
  [188] = {.count = 1, .reusable = false}, SHIFT(97),
  [190] = {.count = 1, .reusable = true}, SHIFT(97),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [194] = {.count = 1, .reusable = false}, SHIFT(101),
  [196] = {.count = 1, .reusable = true}, SHIFT(101),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [200] = {.count = 1, .reusable = true}, SHIFT(102),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [204] = {.count = 1, .reusable = true}, SHIFT(104),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [214] = {.count = 1, .reusable = true}, SHIFT(105),
  [216] = {.count = 1, .reusable = false}, SHIFT(106),
  [218] = {.count = 1, .reusable = true}, SHIFT(107),
  [220] = {.count = 1, .reusable = false}, SHIFT(108),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 2),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 2),
  [226] = {.count = 1, .reusable = true}, SHIFT(109),
  [228] = {.count = 1, .reusable = false}, SHIFT(110),
  [230] = {.count = 1, .reusable = true}, SHIFT(111),
  [232] = {.count = 1, .reusable = false}, SHIFT(113),
  [234] = {.count = 1, .reusable = true}, SHIFT(114),
  [236] = {.count = 1, .reusable = true}, SHIFT(118),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [240] = {.count = 1, .reusable = true}, SHIFT(58),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [248] = {.count = 1, .reusable = false}, SHIFT(121),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [254] = {.count = 1, .reusable = true}, SHIFT(124),
  [256] = {.count = 1, .reusable = true}, SHIFT(123),
  [258] = {.count = 1, .reusable = false}, SHIFT(124),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [266] = {.count = 1, .reusable = true}, SHIFT(125),
  [268] = {.count = 1, .reusable = true}, SHIFT(126),
  [270] = {.count = 1, .reusable = false}, SHIFT(127),
  [272] = {.count = 1, .reusable = true}, SHIFT(128),
  [274] = {.count = 1, .reusable = false}, SHIFT(129),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 2),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 2),
  [280] = {.count = 1, .reusable = true}, SHIFT(130),
  [282] = {.count = 1, .reusable = false}, SHIFT(131),
  [284] = {.count = 1, .reusable = true}, SHIFT(132),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(134),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(135),
  [298] = {.count = 1, .reusable = false}, SHIFT(138),
  [300] = {.count = 1, .reusable = true}, SHIFT(138),
  [302] = {.count = 1, .reusable = true}, SHIFT(137),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [310] = {.count = 1, .reusable = true}, SHIFT(139),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(142),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [318] = {.count = 1, .reusable = true}, SHIFT(144),
  [320] = {.count = 1, .reusable = true}, SHIFT(145),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [331] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [337] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [340] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [361] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(150),
  [420] = {.count = 1, .reusable = true}, SHIFT(149),
  [422] = {.count = 1, .reusable = false}, SHIFT(150),
  [424] = {.count = 1, .reusable = true}, SHIFT(151),
  [426] = {.count = 1, .reusable = false}, SHIFT(151),
  [428] = {.count = 1, .reusable = true}, SHIFT(152),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [434] = {.count = 1, .reusable = false}, SHIFT(153),
  [436] = {.count = 1, .reusable = true}, SHIFT(153),
  [438] = {.count = 1, .reusable = true}, SHIFT(154),
  [440] = {.count = 1, .reusable = false}, SHIFT(155),
  [442] = {.count = 1, .reusable = true}, SHIFT(155),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [448] = {.count = 1, .reusable = true}, SHIFT(159),
  [450] = {.count = 1, .reusable = true}, SHIFT(160),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 3),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 3),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(52),
  [459] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(53),
  [462] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(110),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [469] = {.count = 1, .reusable = true}, SHIFT(162),
  [471] = {.count = 1, .reusable = true}, SHIFT(163),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [477] = {.count = 1, .reusable = true}, SHIFT(165),
  [479] = {.count = 1, .reusable = true}, SHIFT(167),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(58),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [488] = {.count = 1, .reusable = true}, SHIFT(75),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [496] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [501] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [506] = {.count = 1, .reusable = true}, SHIFT(169),
  [508] = {.count = 1, .reusable = true}, SHIFT(170),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 3),
  [514] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(70),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(71),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(131),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [529] = {.count = 1, .reusable = true}, SHIFT(171),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2), SHIFT_REPEAT(135),
  [538] = {.count = 1, .reusable = false}, SHIFT(174),
  [540] = {.count = 1, .reusable = true}, SHIFT(174),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [546] = {.count = 1, .reusable = false}, SHIFT(177),
  [548] = {.count = 1, .reusable = false}, SHIFT(179),
  [550] = {.count = 1, .reusable = true}, SHIFT(179),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [554] = {.count = 1, .reusable = true}, SHIFT(180),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(86),
  [559] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(87),
  [568] = {.count = 1, .reusable = true}, SHIFT(181),
  [570] = {.count = 1, .reusable = true}, SHIFT(182),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [576] = {.count = 1, .reusable = true}, SHIFT(183),
  [578] = {.count = 1, .reusable = true}, SHIFT(184),
  [580] = {.count = 1, .reusable = false}, SHIFT(185),
  [582] = {.count = 1, .reusable = true}, SHIFT(185),
  [584] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [586] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(102),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [591] = {.count = 1, .reusable = true}, SHIFT(186),
  [593] = {.count = 1, .reusable = true}, SHIFT(188),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [605] = {.count = 1, .reusable = true}, SHIFT(194),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [609] = {.count = 1, .reusable = true}, SHIFT(195),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [621] = {.count = 1, .reusable = true}, SHIFT(199),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [625] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [627] = {.count = 1, .reusable = true}, SHIFT(200),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(163),
  [632] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(165),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [645] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(195),
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
