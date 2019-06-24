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
  anon_sym_PLUS_PLUS = 12,
  anon_sym_COMMA = 13,
  sym_readonly = 14,
  anon_sym_private = 15,
  anon_sym_protected = 16,
  anon_sym_publish = 17,
  anon_sym_DOT = 18,
  anon_sym_module = 19,
  anon_sym_end = 20,
  anon_sym_enum = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_function = 24,
  anon_sym_method = 25,
  anon_sym_returns = 26,
  anon_sym_i8 = 27,
  anon_sym_i16 = 28,
  anon_sym_i32 = 29,
  anon_sym_i64 = 30,
  anon_sym_u8 = 31,
  anon_sym_u16 = 32,
  anon_sym_u32 = 33,
  anon_sym_u64 = 34,
  anon_sym_f32 = 35,
  anon_sym_f64 = 36,
  anon_sym_s8 = 37,
  anon_sym_s16 = 38,
  anon_sym_s32 = 39,
  anon_sym_STAR = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  sym_is_declare = 43,
  sym_is_external = 44,
  anon_sym_if = 45,
  anon_sym_while = 46,
  anon_sym_switch = 47,
  anon_sym_case = 48,
  anon_sym_default = 49,
  anon_sym_goto = 50,
  anon_sym_section = 51,
  anon_sym_COLON_EQ = 52,
  anon_sym_return = 53,
  anon_sym_DASH = 54,
  anon_sym_AMP = 55,
  anon_sym_BANG = 56,
  anon_sym_TILDE = 57,
  anon_sym_PLUS = 58,
  anon_sym_SLASH = 59,
  anon_sym_PERCENT = 60,
  anon_sym_PIPE = 61,
  anon_sym_CARET = 62,
  anon_sym_GT = 63,
  anon_sym_LT = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_LT_EQ = 66,
  anon_sym_BANG_EQ = 67,
  anon_sym_EQ_EQ = 68,
  anon_sym_AMP_AMP = 69,
  anon_sym_PIPE_PIPE = 70,
  anon_sym_GT_GT = 71,
  anon_sym_LT_LT = 72,
  anon_sym_PLUS_EQ = 73,
  anon_sym_DASH_EQ = 74,
  anon_sym_STAR_EQ = 75,
  anon_sym_SLASH_EQ = 76,
  anon_sym_PERCENT_EQ = 77,
  anon_sym_AMP_EQ = 78,
  anon_sym_PIPE_EQ = 79,
  anon_sym_CARET_EQ = 80,
  anon_sym_GT_GT_EQ = 81,
  anon_sym_LT_LT_EQ = 82,
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
  [anon_sym_PLUS_PLUS] = "++",
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
  [anon_sym_PLUS_PLUS] = {
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
      if (lookahead == '+')
        ADVANCE(51);
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
      if (lookahead == '(')
        ADVANCE(349);
      if (lookahead == '*')
        ADVANCE(350);
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
    case 349:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 351:
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
    case 352:
      if (lookahead == '*')
        ADVANCE(350);
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
    case 353:
      if (lookahead == '\\')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(355);
      END_STATE();
    case 354:
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
    case 355:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(357);
      if (lookahead != 0)
        ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(358);
      END_STATE();
    case 359:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 360:
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
    case 361:
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
    case 362:
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
    case 363:
      if (lookahead == '+')
        ADVANCE(364);
      if (lookahead == '-')
        ADVANCE(365);
      if (lookahead == '/')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(367);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 368:
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == 'f')
        ADVANCE(370);
      if (lookahead == 'i')
        ADVANCE(371);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(372);
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
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 370:
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
    case 371:
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
    case 372:
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
    case 373:
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
    case 374:
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'm')
        ADVANCE(375);
      if (lookahead == 'r')
        ADVANCE(376);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 375:
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
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 377:
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
    case 378:
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '(')
        ADVANCE(349);
      if (lookahead == '*')
        ADVANCE(9);
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
        ADVANCE(228);
      END_STATE();
    case 379:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 380:
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
    case 381:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 383:
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
    case 384:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
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
        ADVANCE(228);
      END_STATE();
    case 387:
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
    case 388:
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
    case 389:
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
        ADVANCE(228);
      END_STATE();
    case 391:
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'm')
        ADVANCE(375);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(376);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 392:
      if (lookahead == '!')
        ADVANCE(393);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(394);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(350);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(396);
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
    case 393:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 394:
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
    case 395:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 396:
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
    case 397:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(399);
      END_STATE();
    case 398:
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
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 400:
      if (lookahead == '*')
        ADVANCE(401);
      if (lookahead == '+')
        ADVANCE(402);
      if (lookahead == '/')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '/')
        ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 403:
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 405:
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(406);
      if (lookahead == '*')
        ADVANCE(407);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(408);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(409);
      if (lookahead == '>')
        ADVANCE(410);
      if (lookahead == '^')
        ADVANCE(411);
      if (lookahead == '|')
        ADVANCE(412);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 406:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 407:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 408:
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 409:
      if (lookahead == '<')
        ADVANCE(413);
      END_STATE();
    case 410:
      if (lookahead == '>')
        ADVANCE(414);
      END_STATE();
    case 411:
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 412:
      if (lookahead == '=')
        ADVANCE(111);
      END_STATE();
    case 413:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 414:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 415:
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
    case 416:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(376);
      if (lookahead == 's')
        ADVANCE(362);
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
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(371);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(419);
      if (lookahead == 's')
        ADVANCE(420);
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
        ADVANCE(228);
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
        ADVANCE(228);
      END_STATE();
    case 420:
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
    case 421:
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
    case 422:
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
    case 423:
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(425);
      if (lookahead == '-')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(427);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(428);
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
    case 424:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 428:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 429:
      if (lookahead == '!')
        ADVANCE(424);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(425);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(426);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(427);
      if (lookahead == ':')
        ADVANCE(384);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(428);
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
    case 430:
      if (lookahead == '(')
        ADVANCE(349);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'r')
        ADVANCE(431);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 431:
      if (lookahead == 'e')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 't')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'u')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'r')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'n')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 's')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 438:
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
    case 439:
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(440);
      END_STATE();
    case 441:
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
    case 442:
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
    case 443:
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 'r')
        ADVANCE(376);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 444:
      if (lookahead == 'c')
        ADVANCE(445);
      if (lookahead == 'd')
        ADVANCE(446);
      if (lookahead == 'f')
        ADVANCE(447);
      if (lookahead == 'i')
        ADVANCE(448);
      if (lookahead == 'm')
        ADVANCE(449);
      if (lookahead == 's')
        ADVANCE(450);
      if (lookahead == 'w')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 445:
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 446:
      if (lookahead == 'e')
        ADVANCE(452);
      END_STATE();
    case 447:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 448:
      if (lookahead == 'f')
        ADVANCE(94);
      END_STATE();
    case 449:
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 450:
      if (lookahead == 'w')
        ADVANCE(105);
      END_STATE();
    case 451:
      if (lookahead == 'h')
        ADVANCE(110);
      END_STATE();
    case 452:
      if (lookahead == 'f')
        ADVANCE(122);
      END_STATE();
    case 453:
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(360);
      if (lookahead == 'i')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 454:
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
        ADVANCE(369);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(371);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(419);
      if (lookahead == 's')
        ADVANCE(420);
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
    case 455:
      if (lookahead == '*')
        ADVANCE(350);
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
  [3] = {.lex_state = 351},
  [4] = {.lex_state = 348},
  [5] = {.lex_state = 352},
  [6] = {.lex_state = 353},
  [7] = {.lex_state = 348},
  [8] = {.lex_state = 356},
  [9] = {.lex_state = 359},
  [10] = {.lex_state = 363},
  [11] = {.lex_state = 368},
  [12] = {.lex_state = 374},
  [13] = {.lex_state = 378},
  [14] = {.lex_state = 391},
  [15] = {.lex_state = 348},
  [16] = {.lex_state = 348},
  [17] = {.lex_state = 392},
  [18] = {.lex_state = 348},
  [19] = {.lex_state = 351},
  [20] = {.lex_state = 397},
  [21] = {.lex_state = 348},
  [22] = {.lex_state = 348},
  [23] = {.lex_state = 400},
  [24] = {.lex_state = 348},
  [25] = {.lex_state = 348},
  [26] = {.lex_state = 348},
  [27] = {.lex_state = 348},
  [28] = {.lex_state = 348},
  [29] = {.lex_state = 378},
  [30] = {.lex_state = 348},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 374},
  [33] = {.lex_state = 378},
  [34] = {.lex_state = 348},
  [35] = {.lex_state = 348},
  [36] = {.lex_state = 348},
  [37] = {.lex_state = 348},
  [38] = {.lex_state = 405},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 348},
  [41] = {.lex_state = 415},
  [42] = {.lex_state = 415},
  [43] = {.lex_state = 405},
  [44] = {.lex_state = 392},
  [45] = {.lex_state = 348},
  [46] = {.lex_state = 209},
  [47] = {.lex_state = 348},
  [48] = {.lex_state = 209},
  [49] = {.lex_state = 348},
  [50] = {.lex_state = 363},
  [51] = {.lex_state = 400},
  [52] = {.lex_state = 209},
  [53] = {.lex_state = 363},
  [54] = {.lex_state = 348},
  [55] = {.lex_state = 348},
  [56] = {.lex_state = 348},
  [57] = {.lex_state = 348},
  [58] = {.lex_state = 416},
  [59] = {.lex_state = 348},
  [60] = {.lex_state = 348},
  [61] = {.lex_state = 348},
  [62] = {.lex_state = 348},
  [63] = {.lex_state = 417},
  [64] = {.lex_state = 351},
  [65] = {.lex_state = 359},
  [66] = {.lex_state = 351},
  [67] = {.lex_state = 423},
  [68] = {.lex_state = 348},
  [69] = {.lex_state = 348},
  [70] = {.lex_state = 429},
  [71] = {.lex_state = 397},
  [72] = {.lex_state = 348},
  [73] = {.lex_state = 363},
  [74] = {.lex_state = 400},
  [75] = {.lex_state = 209},
  [76] = {.lex_state = 400},
  [77] = {.lex_state = 348},
  [78] = {.lex_state = 359},
  [79] = {.lex_state = 348},
  [80] = {.lex_state = 351},
  [81] = {.lex_state = 378},
  [82] = {.lex_state = 351},
  [83] = {.lex_state = 209},
  [84] = {.lex_state = 430},
  [85] = {.lex_state = 438},
  [86] = {.lex_state = 439},
  [87] = {.lex_state = 352},
  [88] = {.lex_state = 348},
  [89] = {.lex_state = 348},
  [90] = {.lex_state = 441},
  [91] = {.lex_state = 441},
  [92] = {.lex_state = 209},
  [93] = {.lex_state = 442},
  [94] = {.lex_state = 442},
  [95] = {.lex_state = 351},
  [96] = {.lex_state = 415},
  [97] = {.lex_state = 405},
  [98] = {.lex_state = 359},
  [99] = {.lex_state = 351},
  [100] = {.lex_state = 423},
  [101] = {.lex_state = 429},
  [102] = {.lex_state = 438},
  [103] = {.lex_state = 363},
  [104] = {.lex_state = 363},
  [105] = {.lex_state = 363},
  [106] = {.lex_state = 400},
  [107] = {.lex_state = 209},
  [108] = {.lex_state = 363},
  [109] = {.lex_state = 348},
  [110] = {.lex_state = 443},
  [111] = {.lex_state = 430},
  [112] = {.lex_state = 442},
  [113] = {.lex_state = 443},
  [114] = {.lex_state = 359},
  [115] = {.lex_state = 348},
  [116] = {.lex_state = 348},
  [117] = {.lex_state = 444},
  [118] = {.lex_state = 348},
  [119] = {.lex_state = 429},
  [120] = {.lex_state = 397},
  [121] = {.lex_state = 353},
  [122] = {.lex_state = 359},
  [123] = {.lex_state = 351},
  [124] = {.lex_state = 351},
  [125] = {.lex_state = 429},
  [126] = {.lex_state = 397},
  [127] = {.lex_state = 400},
  [128] = {.lex_state = 363},
  [129] = {.lex_state = 400},
  [130] = {.lex_state = 400},
  [131] = {.lex_state = 209},
  [132] = {.lex_state = 400},
  [133] = {.lex_state = 348},
  [134] = {.lex_state = 430},
  [135] = {.lex_state = 378},
  [136] = {.lex_state = 351},
  [137] = {.lex_state = 351},
  [138] = {.lex_state = 441},
  [139] = {.lex_state = 453},
  [140] = {.lex_state = 430},
  [141] = {.lex_state = 348},
  [142] = {.lex_state = 351},
  [143] = {.lex_state = 438},
  [144] = {.lex_state = 352},
  [145] = {.lex_state = 439},
  [146] = {.lex_state = 348},
  [147] = {.lex_state = 348},
  [148] = {.lex_state = 348},
  [149] = {.lex_state = 442},
  [150] = {.lex_state = 348},
  [151] = {.lex_state = 348},
  [152] = {.lex_state = 442},
  [153] = {.lex_state = 415},
  [154] = {.lex_state = 415},
  [155] = {.lex_state = 454},
  [156] = {.lex_state = 359},
  [157] = {.lex_state = 351},
  [158] = {.lex_state = 438},
  [159] = {.lex_state = 363},
  [160] = {.lex_state = 363},
  [161] = {.lex_state = 416},
  [162] = {.lex_state = 442},
  [163] = {.lex_state = 430},
  [164] = {.lex_state = 441},
  [165] = {.lex_state = 397},
  [166] = {.lex_state = 209},
  [167] = {.lex_state = 429},
  [168] = {.lex_state = 359},
  [169] = {.lex_state = 400},
  [170] = {.lex_state = 400},
  [171] = {.lex_state = 438},
  [172] = {.lex_state = 430},
  [173] = {.lex_state = 348},
  [174] = {.lex_state = 441},
  [175] = {.lex_state = 415},
  [176] = {.lex_state = 455},
  [177] = {.lex_state = 455},
  [178] = {.lex_state = 348},
  [179] = {.lex_state = 438},
  [180] = {.lex_state = 352},
  [181] = {.lex_state = 442},
  [182] = {.lex_state = 348},
  [183] = {.lex_state = 348},
  [184] = {.lex_state = 442},
  [185] = {.lex_state = 454},
  [186] = {.lex_state = 359},
  [187] = {.lex_state = 442},
  [188] = {.lex_state = 442},
  [189] = {.lex_state = 441},
  [190] = {.lex_state = 441},
  [191] = {.lex_state = 429},
  [192] = {.lex_state = 438},
  [193] = {.lex_state = 348},
  [194] = {.lex_state = 441},
  [195] = {.lex_state = 359},
  [196] = {.lex_state = 455},
  [197] = {.lex_state = 455},
  [198] = {.lex_state = 455},
  [199] = {.lex_state = 348},
  [200] = {.lex_state = 454},
  [201] = {.lex_state = 455},
  [202] = {.lex_state = 455},
  [203] = {.lex_state = 455},
  [204] = {.lex_state = 455},
  [205] = {.lex_state = 455},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_null] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS_DASH] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_DASH_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
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
    [anon_sym_enum] = ACTIONS(5),
    [sym_null] = ACTIONS(7),
    [anon_sym_switch] = ACTIONS(9),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym_oct] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [anon_sym_module] = ACTIONS(15),
    [anon_sym_goto] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(21),
    [sym_readonly] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PLUS_DASH] = ACTIONS(27),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_publish] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_hex] = ACTIONS(13),
    [sym_is_declare] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_integer] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_DASH_DASH] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(31),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_is_external] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_f32] = ACTIONS(11),
    [sym_long] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_binary] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(21),
    [anon_sym_protected] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_method] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_i64] = ACTIONS(11),
  },
  [2] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(63),
  },
  [3] = {
    [sym_assignment_expression] = STATE(41),
    [sym__assignment_or_collection_or_value] = STATE(41),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(43),
    [sym_collection] = STATE(43),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(42),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_null] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [sym_long] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(7),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_binary] = ACTIONS(13),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [4] = {
    [sym_group_expression] = STATE(45),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
  },
  [5] = {
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_DOT] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(67),
  },
  [6] = {
    [sym__escape_sequence] = STATE(46),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(69),
    [aux_sym_character_token1] = ACTIONS(71),
    [anon_sym_BSLASHf] = ACTIONS(69),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(69),
    [anon_sym_BSLASHr] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(69),
    [anon_sym_BSLASHn] = ACTIONS(69),
    [anon_sym_BSLASHa] = ACTIONS(69),
    [anon_sym_BSLASHt] = ACTIONS(69),
    [anon_sym_BSLASH0] = ACTIONS(69),
    [anon_sym_BSLASHb] = ACTIONS(69),
    [anon_sym_BSLASHv] = ACTIONS(69),
  },
  [7] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(73),
  },
  [8] = {
    [aux_sym__comment_token1] = ACTIONS(75),
    [sym__space] = ACTIONS(77),
  },
  [9] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(49),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [10] = {
    [sym__block_comment_plus] = STATE(53),
    [aux_sym__block_comment_plus_repeat1] = STATE(53),
    [sym__block_comment_star] = STATE(53),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(87),
  },
  [11] = {
    [sym_compound_macro] = STATE(56),
    [anon_sym_switch] = ACTIONS(89),
    [anon_sym_default] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_module] = ACTIONS(89),
    [anon_sym_function] = ACTIONS(89),
  },
  [12] = {
    [anon_sym_f64] = ACTIONS(93),
    [anon_sym_u32] = ACTIONS(93),
    [anon_sym_s16] = ACTIONS(93),
    [anon_sym_i8] = ACTIONS(93),
    [anon_sym_u16] = ACTIONS(93),
    [anon_sym_i32] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(93),
    [anon_sym_f32] = ACTIONS(93),
    [anon_sym_s8] = ACTIONS(93),
    [anon_sym_u8] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_u64] = ACTIONS(93),
    [anon_sym_s32] = ACTIONS(93),
    [anon_sym_i16] = ACTIONS(93),
    [anon_sym_method] = ACTIONS(93),
    [anon_sym_i64] = ACTIONS(93),
    [anon_sym_function] = ACTIONS(93),
  },
  [13] = {
    [aux_sym_compound_macro_repeat1] = STATE(59),
    [sym_parameter_list] = STATE(60),
    [anon_sym_DASH_DASH] = ACTIONS(95),
    [anon_sym_DASH_EQ] = ACTIONS(95),
    [anon_sym_PIPE_EQ] = ACTIONS(95),
    [sym__space] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_LT_LT_EQ] = ACTIONS(95),
    [anon_sym_PLUS_PLUS] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_AMP_EQ] = ACTIONS(95),
    [anon_sym_PLUS_EQ] = ACTIONS(95),
    [anon_sym_SLASH_EQ] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(104),
    [anon_sym_COLON_EQ] = ACTIONS(95),
    [anon_sym_GT_GT_EQ] = ACTIONS(95),
    [sym_identifier] = ACTIONS(104),
    [anon_sym_STAR_EQ] = ACTIONS(95),
    [anon_sym_CARET_EQ] = ACTIONS(95),
    [anon_sym_PERCENT_EQ] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [14] = {
    [sym_is_function] = STATE(35),
    [sym_is_method] = STATE(35),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym_function_definition] = STATE(61),
    [sym_variable_definition] = STATE(61),
    [sym_access_control] = STATE(32),
    [sym_primitive_type] = STATE(37),
    [anon_sym_private] = ACTIONS(31),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(23),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(31),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(31),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(59),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(19),
  },
  [15] = {
    [sym_group_expression] = STATE(62),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
  },
  [16] = {
    [sym_group_expression] = STATE(63),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
  },
  [17] = {
    [sym_assignment_expression] = STATE(65),
    [sym_string] = STATE(67),
    [sym_character] = STATE(67),
    [sym_unary_op] = STATE(66),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(67),
    [sym__value] = STATE(67),
    [sym__literal] = STATE(67),
    [sym_group_expression] = STATE(67),
    [sym_null] = ACTIONS(108),
    [sym_double] = ACTIONS(110),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(108),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_float] = ACTIONS(110),
    [sym_binary] = ACTIONS(110),
    [sym_long] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(114),
    [sym_identifier] = ACTIONS(108),
    [sym_hex] = ACTIONS(110),
    [sym_integer] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(114),
  },
  [18] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(116),
  },
  [19] = {
    [sym_assignment_expression] = STATE(69),
    [sym__assignment_or_collection_or_value] = STATE(69),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(43),
    [sym_collection] = STATE(43),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [sym_null] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [sym_long] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(7),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_binary] = ACTIONS(13),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [20] = {
    [sym__escape_sequence] = STATE(71),
    [aux_sym_string_repeat1] = STATE(71),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(118),
    [anon_sym_BSLASHf] = ACTIONS(118),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(118),
    [anon_sym_BSLASHr] = ACTIONS(118),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(118),
    [anon_sym_BSLASHn] = ACTIONS(118),
    [anon_sym_BSLASHa] = ACTIONS(118),
    [anon_sym_BSLASHt] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_BSLASH0] = ACTIONS(118),
    [anon_sym_BSLASHb] = ACTIONS(118),
    [anon_sym_BSLASHv] = ACTIONS(118),
    [aux_sym_string_token1] = ACTIONS(122),
  },
  [21] = {
    [sym_group_expression] = STATE(72),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(65),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(124),
  },
  [23] = {
    [sym__block_comment_plus] = STATE(76),
    [aux_sym__block_comment_star_repeat1] = STATE(76),
    [sym__block_comment_star] = STATE(76),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(130),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(132),
  },
  [24] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(134),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(136),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(138),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(140),
  },
  [28] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(142),
  },
  [29] = {
    [anon_sym_DASH_DASH] = ACTIONS(95),
    [anon_sym_DASH_EQ] = ACTIONS(95),
    [anon_sym_PIPE_EQ] = ACTIONS(95),
    [sym__space] = ACTIONS(95),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_LT_LT_EQ] = ACTIONS(95),
    [anon_sym_PLUS_PLUS] = ACTIONS(95),
    [anon_sym_PLUS_EQ] = ACTIONS(95),
    [anon_sym_SLASH_EQ] = ACTIONS(95),
    [anon_sym_AMP_EQ] = ACTIONS(95),
    [anon_sym_COLON_EQ] = ACTIONS(95),
    [anon_sym_GT_GT_EQ] = ACTIONS(95),
    [anon_sym_STAR_EQ] = ACTIONS(95),
    [anon_sym_CARET_EQ] = ACTIONS(95),
    [anon_sym_PERCENT_EQ] = ACTIONS(95),
  },
  [30] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(144),
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
    [sym_type] = STATE(49),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(59),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(19),
  },
  [33] = {
    [aux_sym_assignment_expression_repeat1] = STATE(81),
    [sym_assignment_op] = STATE(82),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(152),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(154),
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
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_identifier] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(164),
  },
  [38] = {
    [sym_assignment_post_op] = STATE(91),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_COLON_EQ] = ACTIONS(166),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
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
    [anon_sym_enum] = ACTIONS(5),
    [sym_null] = ACTIONS(7),
    [anon_sym_switch] = ACTIONS(9),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym_oct] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [anon_sym_module] = ACTIONS(15),
    [anon_sym_goto] = ACTIONS(17),
    [anon_sym_function] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(21),
    [sym_readonly] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_PLUS_DASH] = ACTIONS(27),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(29),
    [anon_sym_publish] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_hex] = ACTIONS(13),
    [sym_is_declare] = ACTIONS(35),
    [anon_sym_case] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_integer] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_DASH_DASH] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(31),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_is_external] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(49),
    [anon_sym_f32] = ACTIONS(11),
    [sym_long] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_binary] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_STAR_STAR] = ACTIONS(21),
    [anon_sym_protected] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_method] = ACTIONS(59),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_i64] = ACTIONS(11),
  },
  [40] = {
    [sym__enum_element] = STATE(94),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(172),
  },
  [41] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(96),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(176),
  },
  [42] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(178),
  },
  [43] = {
    [aux_sym_assignment_expression_repeat1] = STATE(81),
    [sym_assignment_op] = STATE(82),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(152),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(180),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(180),
    [anon_sym_COLON_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
  },
  [44] = {
    [sym_assignment_expression] = STATE(98),
    [sym_string] = STATE(100),
    [sym_character] = STATE(100),
    [sym_unary_op] = STATE(99),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym__number] = STATE(100),
    [sym__value] = STATE(100),
    [sym__literal] = STATE(100),
    [sym_group_expression] = STATE(100),
    [sym_null] = ACTIONS(182),
    [sym_double] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_float] = ACTIONS(184),
    [sym_binary] = ACTIONS(184),
    [sym_long] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(41),
    [anon_sym_DASH] = ACTIONS(114),
    [sym_identifier] = ACTIONS(182),
    [sym_hex] = ACTIONS(184),
    [sym_integer] = ACTIONS(182),
    [anon_sym_TILDE] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_BANG] = ACTIONS(114),
  },
  [45] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(186),
  },
  [46] = {
    [anon_sym_SQUOTE] = ACTIONS(188),
    [sym__space] = ACTIONS(3),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(190),
  },
  [48] = {
    [anon_sym_enum] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_switch] = ACTIONS(192),
    [anon_sym_f64] = ACTIONS(192),
    [anon_sym_u32] = ACTIONS(192),
    [anon_sym_s16] = ACTIONS(192),
    [sym_null] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [sym_oct] = ACTIONS(192),
    [anon_sym_goto] = ACTIONS(192),
    [sym_double] = ACTIONS(194),
    [anon_sym_PLUS_PLUS] = ACTIONS(194),
    [sym_readonly] = ACTIONS(192),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS_DASH] = ACTIONS(194),
    [anon_sym_u8] = ACTIONS(192),
    [anon_sym_end] = ACTIONS(192),
    [anon_sym_publish] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(192),
    [sym_is_declare] = ACTIONS(192),
    [anon_sym_case] = ACTIONS(192),
    [anon_sym_if] = ACTIONS(192),
    [anon_sym_u64] = ACTIONS(192),
    [anon_sym_s32] = ACTIONS(192),
    [sym_identifier] = ACTIONS(192),
    [sym_integer] = ACTIONS(192),
    [sym_hex] = ACTIONS(194),
    [anon_sym_section] = ACTIONS(192),
    [anon_sym_return] = ACTIONS(192),
    [anon_sym_DASH_DASH] = ACTIONS(194),
    [anon_sym_private] = ACTIONS(192),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(192),
    [anon_sym_u16] = ACTIONS(192),
    [anon_sym_i32] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym_is_external] = ACTIONS(192),
    [sym_float] = ACTIONS(194),
    [anon_sym_while] = ACTIONS(192),
    [anon_sym_f32] = ACTIONS(192),
    [sym_long] = ACTIONS(194),
    [anon_sym_s8] = ACTIONS(192),
    [sym_binary] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_default] = ACTIONS(192),
    [anon_sym_STAR_STAR] = ACTIONS(194),
    [anon_sym_protected] = ACTIONS(192),
    [anon_sym_SLASH_STAR] = ACTIONS(194),
    [anon_sym_i16] = ACTIONS(192),
    [anon_sym_method] = ACTIONS(192),
    [anon_sym_i64] = ACTIONS(192),
    [anon_sym_module] = ACTIONS(192),
    [anon_sym_function] = ACTIONS(192),
  },
  [49] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(196),
  },
  [50] = {
    [sym__block_comment_plus] = STATE(104),
    [aux_sym__block_comment_plus_repeat1] = STATE(104),
    [sym__block_comment_star] = STATE(104),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(198),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(200),
  },
  [51] = {
    [sym__block_comment_plus] = STATE(106),
    [aux_sym__block_comment_star_repeat1] = STATE(106),
    [sym__block_comment_star] = STATE(106),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(202),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(204),
  },
  [52] = {
    [anon_sym_enum] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_switch] = ACTIONS(206),
    [anon_sym_f64] = ACTIONS(206),
    [anon_sym_u32] = ACTIONS(206),
    [anon_sym_s16] = ACTIONS(206),
    [sym_null] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [sym_oct] = ACTIONS(206),
    [anon_sym_goto] = ACTIONS(206),
    [sym_double] = ACTIONS(208),
    [anon_sym_PLUS_PLUS] = ACTIONS(208),
    [sym_readonly] = ACTIONS(206),
    [anon_sym_SLASH_SLASH] = ACTIONS(206),
    [anon_sym_PLUS_DASH] = ACTIONS(208),
    [anon_sym_u8] = ACTIONS(206),
    [anon_sym_end] = ACTIONS(206),
    [anon_sym_publish] = ACTIONS(206),
    [anon_sym_LPAREN] = ACTIONS(206),
    [sym_is_declare] = ACTIONS(206),
    [anon_sym_case] = ACTIONS(206),
    [anon_sym_if] = ACTIONS(206),
    [anon_sym_u64] = ACTIONS(206),
    [anon_sym_s32] = ACTIONS(206),
    [sym_identifier] = ACTIONS(206),
    [sym_integer] = ACTIONS(206),
    [sym_hex] = ACTIONS(208),
    [anon_sym_section] = ACTIONS(206),
    [anon_sym_return] = ACTIONS(206),
    [anon_sym_DASH_DASH] = ACTIONS(208),
    [anon_sym_private] = ACTIONS(206),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(206),
    [anon_sym_u16] = ACTIONS(206),
    [anon_sym_i32] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym_is_external] = ACTIONS(206),
    [sym_float] = ACTIONS(208),
    [anon_sym_while] = ACTIONS(206),
    [anon_sym_f32] = ACTIONS(206),
    [sym_long] = ACTIONS(208),
    [anon_sym_s8] = ACTIONS(206),
    [sym_binary] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(208),
    [anon_sym_default] = ACTIONS(206),
    [anon_sym_STAR_STAR] = ACTIONS(208),
    [anon_sym_protected] = ACTIONS(206),
    [anon_sym_SLASH_STAR] = ACTIONS(208),
    [anon_sym_i16] = ACTIONS(206),
    [anon_sym_method] = ACTIONS(206),
    [anon_sym_i64] = ACTIONS(206),
    [anon_sym_module] = ACTIONS(206),
    [anon_sym_function] = ACTIONS(206),
  },
  [53] = {
    [sym__block_comment_plus] = STATE(108),
    [aux_sym__block_comment_plus_repeat1] = STATE(108),
    [sym__block_comment_star] = STATE(108),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(210),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(212),
  },
  [54] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(214),
  },
  [55] = {
    [aux_sym_compound_macro_repeat1] = STATE(59),
    [sym_parameter_list] = STATE(60),
    [sym__space] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(100),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [56] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(218),
  },
  [57] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(220),
  },
  [58] = {
    [sym_variable_definition] = STATE(112),
    [sym_access_control] = STATE(113),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym__comma_list_variables] = STATE(114),
    [anon_sym_private] = ACTIONS(222),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(224),
    [sym_readonly] = ACTIONS(23),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(222),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(222),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [59] = {
    [aux_sym_compound_macro_repeat1] = STATE(115),
    [sym_parameter_list] = STATE(116),
    [sym__space] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [60] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(226),
  },
  [61] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(228),
  },
  [62] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(230),
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
    [sym_statement] = STATE(118),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_return] = ACTIONS(45),
    [sym_null] = ACTIONS(7),
    [anon_sym_switch] = ACTIONS(9),
    [sym_double] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(232),
    [anon_sym_goto] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_binary] = ACTIONS(13),
    [sym_float] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(49),
    [sym_long] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(234),
    [anon_sym_default] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_case] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [anon_sym_section] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [64] = {
    [sym_null] = ACTIONS(236),
    [sym_double] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(236),
    [sym_identifier] = ACTIONS(236),
    [sym_oct] = ACTIONS(236),
    [sym_hex] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(238),
    [sym_integer] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(238),
    [sym_float] = ACTIONS(238),
    [sym_binary] = ACTIONS(238),
    [sym_long] = ACTIONS(238),
  },
  [65] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(240),
  },
  [66] = {
    [sym__number] = STATE(122),
    [sym_string] = STATE(122),
    [sym_character] = STATE(122),
    [sym__value] = STATE(122),
    [sym__literal] = STATE(122),
    [sym_group_expression] = STATE(122),
    [sym_null] = ACTIONS(242),
    [sym_double] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_hex] = ACTIONS(244),
    [sym_identifier] = ACTIONS(242),
    [sym_oct] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_integer] = ACTIONS(242),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(244),
    [sym_binary] = ACTIONS(244),
    [sym_long] = ACTIONS(244),
  },
  [67] = {
    [sym_assignment_post_op] = STATE(91),
    [sym_binary_op] = STATE(124),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_COLON_EQ] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [anon_sym_GT_GT] = ACTIONS(252),
  },
  [68] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(256),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(258),
  },
  [70] = {
    [anon_sym_SLASH] = ACTIONS(260),
    [anon_sym_LT] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(260),
    [anon_sym_AMP] = ACTIONS(260),
    [anon_sym_PLUS_PLUS] = ACTIONS(262),
    [anon_sym_PLUS_EQ] = ACTIONS(262),
    [anon_sym_SLASH_EQ] = ACTIONS(262),
    [anon_sym_AMP_EQ] = ACTIONS(262),
    [anon_sym_BANG_EQ] = ACTIONS(262),
    [anon_sym_LT_LT] = ACTIONS(260),
    [anon_sym_AMP_AMP] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_GT_GT_EQ] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(260),
    [anon_sym_CARET] = ACTIONS(260),
    [anon_sym_DASH_DASH] = ACTIONS(262),
    [anon_sym_DASH_EQ] = ACTIONS(262),
    [anon_sym_PIPE_EQ] = ACTIONS(262),
    [sym__space] = ACTIONS(262),
    [anon_sym_EQ_EQ] = ACTIONS(262),
    [anon_sym_GT_EQ] = ACTIONS(262),
    [anon_sym_PIPE_PIPE] = ACTIONS(262),
    [anon_sym_LT_LT_EQ] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(260),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(260),
    [anon_sym_COLON_EQ] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_STAR_EQ] = ACTIONS(262),
    [anon_sym_CARET_EQ] = ACTIONS(262),
    [anon_sym_PERCENT_EQ] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_LT_EQ] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(260),
  },
  [71] = {
    [sym__escape_sequence] = STATE(126),
    [aux_sym_string_repeat1] = STATE(126),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(264),
    [anon_sym_BSLASHf] = ACTIONS(264),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(264),
    [anon_sym_BSLASHr] = ACTIONS(264),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(264),
    [anon_sym_BSLASHn] = ACTIONS(264),
    [anon_sym_BSLASHa] = ACTIONS(264),
    [anon_sym_BSLASHt] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_BSLASH0] = ACTIONS(264),
    [anon_sym_BSLASHb] = ACTIONS(264),
    [anon_sym_BSLASHv] = ACTIONS(264),
    [aux_sym_string_token1] = ACTIONS(268),
  },
  [72] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(270),
  },
  [73] = {
    [sym__block_comment_plus] = STATE(128),
    [aux_sym__block_comment_plus_repeat1] = STATE(128),
    [sym__block_comment_star] = STATE(128),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(272),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(274),
  },
  [74] = {
    [sym__block_comment_plus] = STATE(130),
    [aux_sym__block_comment_star_repeat1] = STATE(130),
    [sym__block_comment_star] = STATE(130),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(276),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(278),
  },
  [75] = {
    [anon_sym_enum] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(282),
    [anon_sym_switch] = ACTIONS(280),
    [anon_sym_f64] = ACTIONS(280),
    [anon_sym_u32] = ACTIONS(280),
    [anon_sym_s16] = ACTIONS(280),
    [sym_null] = ACTIONS(280),
    [anon_sym_SQUOTE] = ACTIONS(282),
    [sym_oct] = ACTIONS(280),
    [anon_sym_goto] = ACTIONS(280),
    [sym_double] = ACTIONS(282),
    [anon_sym_PLUS_PLUS] = ACTIONS(282),
    [sym_readonly] = ACTIONS(280),
    [anon_sym_SLASH_SLASH] = ACTIONS(280),
    [anon_sym_PLUS_DASH] = ACTIONS(282),
    [anon_sym_u8] = ACTIONS(280),
    [anon_sym_end] = ACTIONS(280),
    [anon_sym_publish] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(280),
    [sym_is_declare] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
    [anon_sym_u64] = ACTIONS(280),
    [anon_sym_s32] = ACTIONS(280),
    [sym_identifier] = ACTIONS(280),
    [sym_integer] = ACTIONS(280),
    [sym_hex] = ACTIONS(282),
    [anon_sym_section] = ACTIONS(280),
    [anon_sym_return] = ACTIONS(280),
    [anon_sym_DASH_DASH] = ACTIONS(282),
    [anon_sym_private] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(280),
    [anon_sym_u16] = ACTIONS(280),
    [anon_sym_i32] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [sym_is_external] = ACTIONS(280),
    [sym_float] = ACTIONS(282),
    [anon_sym_while] = ACTIONS(280),
    [anon_sym_f32] = ACTIONS(280),
    [sym_long] = ACTIONS(282),
    [anon_sym_s8] = ACTIONS(280),
    [sym_binary] = ACTIONS(282),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_default] = ACTIONS(280),
    [anon_sym_STAR_STAR] = ACTIONS(282),
    [anon_sym_protected] = ACTIONS(280),
    [anon_sym_SLASH_STAR] = ACTIONS(282),
    [anon_sym_i16] = ACTIONS(280),
    [anon_sym_method] = ACTIONS(280),
    [anon_sym_i64] = ACTIONS(280),
    [anon_sym_module] = ACTIONS(280),
    [anon_sym_function] = ACTIONS(280),
  },
  [76] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(284),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(286),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(288),
  },
  [78] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(133),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [79] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(290),
  },
  [80] = {
    [sym_null] = ACTIONS(292),
    [sym_double] = ACTIONS(294),
    [sym_binary] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(292),
    [sym_identifier] = ACTIONS(292),
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
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(296),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
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
    [sym_null] = ACTIONS(298),
    [sym_double] = ACTIONS(300),
    [sym_long] = ACTIONS(300),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(298),
    [sym_hex] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_identifier] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_binary] = ACTIONS(300),
    [sym_integer] = ACTIONS(298),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(300),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [83] = {
    [anon_sym_enum] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_switch] = ACTIONS(304),
    [anon_sym_f64] = ACTIONS(304),
    [anon_sym_u32] = ACTIONS(304),
    [anon_sym_s16] = ACTIONS(304),
    [sym_null] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [sym_oct] = ACTIONS(304),
    [anon_sym_goto] = ACTIONS(304),
    [sym_double] = ACTIONS(306),
    [anon_sym_PLUS_PLUS] = ACTIONS(306),
    [sym_readonly] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_PLUS_DASH] = ACTIONS(306),
    [anon_sym_u8] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_publish] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(304),
    [sym_is_declare] = ACTIONS(304),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_u64] = ACTIONS(304),
    [anon_sym_s32] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_integer] = ACTIONS(304),
    [sym_hex] = ACTIONS(306),
    [anon_sym_section] = ACTIONS(304),
    [anon_sym_return] = ACTIONS(304),
    [anon_sym_DASH_DASH] = ACTIONS(306),
    [anon_sym_private] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(304),
    [anon_sym_u16] = ACTIONS(304),
    [anon_sym_i32] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym_is_external] = ACTIONS(304),
    [sym_float] = ACTIONS(306),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_f32] = ACTIONS(304),
    [sym_long] = ACTIONS(306),
    [anon_sym_s8] = ACTIONS(304),
    [sym_binary] = ACTIONS(306),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(304),
    [anon_sym_SLASH_STAR] = ACTIONS(306),
    [anon_sym_i16] = ACTIONS(304),
    [anon_sym_method] = ACTIONS(304),
    [anon_sym_i64] = ACTIONS(304),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_function] = ACTIONS(304),
  },
  [84] = {
    [sym_parameter_list] = STATE(140),
    [sym_return_list] = STATE(141),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [85] = {
    [sym_static_assignment] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
  },
  [86] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(316),
    [sym_integer] = ACTIONS(318),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [sym_identifier] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(320),
  },
  [88] = {
    [sym_pointer] = STATE(146),
    [aux_sym_type_repeat1] = STATE(146),
    [aux_sym_type_repeat2] = STATE(147),
    [sym_array] = STATE(147),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(164),
  },
  [89] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_identifier] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_RBRACE] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(326),
    [sym__space] = ACTIONS(3),
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
    [anon_sym_enum] = ACTIONS(328),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_switch] = ACTIONS(334),
    [anon_sym_f64] = ACTIONS(337),
    [anon_sym_u32] = ACTIONS(337),
    [anon_sym_s16] = ACTIONS(337),
    [sym_null] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [sym_oct] = ACTIONS(340),
    [anon_sym_goto] = ACTIONS(346),
    [sym_double] = ACTIONS(349),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [sym_readonly] = ACTIONS(355),
    [anon_sym_SLASH_SLASH] = ACTIONS(358),
    [anon_sym_PLUS_DASH] = ACTIONS(361),
    [anon_sym_u8] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(364),
    [anon_sym_publish] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(370),
    [sym_is_declare] = ACTIONS(373),
    [anon_sym_case] = ACTIONS(376),
    [anon_sym_if] = ACTIONS(379),
    [anon_sym_u64] = ACTIONS(337),
    [anon_sym_s32] = ACTIONS(337),
    [sym_identifier] = ACTIONS(382),
    [sym_integer] = ACTIONS(340),
    [sym_hex] = ACTIONS(349),
    [anon_sym_section] = ACTIONS(385),
    [anon_sym_return] = ACTIONS(388),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(337),
    [anon_sym_u16] = ACTIONS(337),
    [anon_sym_i32] = ACTIONS(337),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [sym_is_external] = ACTIONS(373),
    [sym_float] = ACTIONS(349),
    [anon_sym_while] = ACTIONS(394),
    [anon_sym_f32] = ACTIONS(337),
    [sym_long] = ACTIONS(349),
    [anon_sym_s8] = ACTIONS(337),
    [sym_binary] = ACTIONS(349),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(399),
    [anon_sym_STAR_STAR] = ACTIONS(352),
    [anon_sym_protected] = ACTIONS(367),
    [anon_sym_SLASH_STAR] = ACTIONS(402),
    [anon_sym_i16] = ACTIONS(337),
    [anon_sym_method] = ACTIONS(405),
    [anon_sym_i64] = ACTIONS(337),
    [anon_sym_module] = ACTIONS(408),
    [anon_sym_function] = ACTIONS(411),
  },
  [93] = {
    [sym_static_assignment] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_enum_definition_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(418),
  },
  [95] = {
    [sym_assignment_expression] = STATE(153),
    [sym__assignment_or_collection_or_value] = STATE(153),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(43),
    [sym_collection] = STATE(43),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [sym_null] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [sym_long] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(7),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_binary] = ACTIONS(13),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [96] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(154),
    [anon_sym_COMMA] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(420),
  },
  [97] = {
    [anon_sym_DASH_EQ] = ACTIONS(422),
    [anon_sym_PIPE_EQ] = ACTIONS(422),
    [sym__space] = ACTIONS(422),
    [anon_sym_LT_LT_EQ] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_SLASH_EQ] = ACTIONS(422),
    [anon_sym_PLUS_EQ] = ACTIONS(422),
    [anon_sym_AMP_EQ] = ACTIONS(422),
    [anon_sym_COLON_EQ] = ACTIONS(422),
    [anon_sym_GT_GT_EQ] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(422),
    [anon_sym_STAR_EQ] = ACTIONS(422),
    [anon_sym_CARET_EQ] = ACTIONS(422),
    [anon_sym_PERCENT_EQ] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
  },
  [98] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(424),
  },
  [99] = {
    [sym__number] = STATE(156),
    [sym_string] = STATE(156),
    [sym_character] = STATE(156),
    [sym__value] = STATE(156),
    [sym__literal] = STATE(156),
    [sym_group_expression] = STATE(156),
    [sym_null] = ACTIONS(426),
    [sym_double] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_hex] = ACTIONS(428),
    [sym_identifier] = ACTIONS(426),
    [sym_oct] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_integer] = ACTIONS(426),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(428),
    [sym_binary] = ACTIONS(428),
    [sym_long] = ACTIONS(428),
  },
  [100] = {
    [sym_assignment_post_op] = STATE(91),
    [sym_binary_op] = STATE(157),
    [anon_sym_SLASH] = ACTIONS(252),
    [anon_sym_LT] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_AMP] = ACTIONS(252),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_BANG_EQ] = ACTIONS(254),
    [anon_sym_AMP_AMP] = ACTIONS(254),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym__space] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(254),
    [anon_sym_GT_EQ] = ACTIONS(254),
    [anon_sym_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(252),
    [anon_sym_COLON_EQ] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(254),
    [anon_sym_GT_GT] = ACTIONS(252),
  },
  [101] = {
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_LT] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_AMP] = ACTIONS(430),
    [anon_sym_PLUS_PLUS] = ACTIONS(432),
    [anon_sym_PLUS_EQ] = ACTIONS(432),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [anon_sym_AMP_EQ] = ACTIONS(432),
    [anon_sym_BANG_EQ] = ACTIONS(432),
    [anon_sym_LT_LT] = ACTIONS(430),
    [anon_sym_AMP_AMP] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [anon_sym_GT_GT_EQ] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(430),
    [anon_sym_CARET] = ACTIONS(430),
    [anon_sym_DASH_DASH] = ACTIONS(432),
    [anon_sym_DASH_EQ] = ACTIONS(432),
    [anon_sym_PIPE_EQ] = ACTIONS(432),
    [sym__space] = ACTIONS(432),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [anon_sym_PIPE_PIPE] = ACTIONS(432),
    [anon_sym_LT_LT_EQ] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_COLON_EQ] = ACTIONS(432),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_STAR_EQ] = ACTIONS(432),
    [anon_sym_CARET_EQ] = ACTIONS(432),
    [anon_sym_PERCENT_EQ] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [anon_sym_GT_GT] = ACTIONS(430),
  },
  [102] = {
    [sym_static_assignment] = STATE(158),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
  },
  [103] = {
    [anon_sym_PLUS_DASH] = ACTIONS(208),
    [anon_sym_SLASH_STAR] = ACTIONS(208),
    [anon_sym_DASH_PLUS] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(206),
  },
  [104] = {
    [sym__block_comment_plus] = STATE(108),
    [aux_sym__block_comment_plus_repeat1] = STATE(108),
    [sym__block_comment_star] = STATE(108),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(212),
  },
  [105] = {
    [anon_sym_PLUS_DASH] = ACTIONS(282),
    [anon_sym_SLASH_STAR] = ACTIONS(282),
    [anon_sym_DASH_PLUS] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(280),
  },
  [106] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(438),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(286),
  },
  [107] = {
    [anon_sym_enum] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_switch] = ACTIONS(440),
    [anon_sym_f64] = ACTIONS(440),
    [anon_sym_u32] = ACTIONS(440),
    [anon_sym_s16] = ACTIONS(440),
    [sym_null] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [sym_oct] = ACTIONS(440),
    [anon_sym_goto] = ACTIONS(440),
    [sym_double] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(442),
    [sym_readonly] = ACTIONS(440),
    [anon_sym_SLASH_SLASH] = ACTIONS(440),
    [anon_sym_PLUS_DASH] = ACTIONS(442),
    [anon_sym_u8] = ACTIONS(440),
    [anon_sym_end] = ACTIONS(440),
    [anon_sym_publish] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(440),
    [sym_is_declare] = ACTIONS(440),
    [anon_sym_case] = ACTIONS(440),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_u64] = ACTIONS(440),
    [anon_sym_s32] = ACTIONS(440),
    [sym_identifier] = ACTIONS(440),
    [sym_integer] = ACTIONS(440),
    [sym_hex] = ACTIONS(442),
    [anon_sym_section] = ACTIONS(440),
    [anon_sym_return] = ACTIONS(440),
    [anon_sym_DASH_DASH] = ACTIONS(442),
    [anon_sym_private] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(440),
    [anon_sym_u16] = ACTIONS(440),
    [anon_sym_i32] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [sym_is_external] = ACTIONS(440),
    [sym_float] = ACTIONS(442),
    [anon_sym_while] = ACTIONS(440),
    [anon_sym_f32] = ACTIONS(440),
    [sym_long] = ACTIONS(442),
    [anon_sym_s8] = ACTIONS(440),
    [sym_binary] = ACTIONS(442),
    [ts_builtin_sym_end] = ACTIONS(442),
    [anon_sym_default] = ACTIONS(440),
    [anon_sym_STAR_STAR] = ACTIONS(442),
    [anon_sym_protected] = ACTIONS(440),
    [anon_sym_SLASH_STAR] = ACTIONS(442),
    [anon_sym_i16] = ACTIONS(440),
    [anon_sym_method] = ACTIONS(440),
    [anon_sym_i64] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(440),
    [anon_sym_function] = ACTIONS(440),
  },
  [108] = {
    [sym__block_comment_plus] = STATE(108),
    [aux_sym__block_comment_plus_repeat1] = STATE(108),
    [sym__block_comment_star] = STATE(108),
    [anon_sym_PLUS_DASH] = ACTIONS(444),
    [anon_sym_SLASH_STAR] = ACTIONS(447),
    [anon_sym_DASH_PLUS] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(452),
  },
  [109] = {
    [sym__space] = ACTIONS(455),
    [anon_sym_DOT] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(455),
  },
  [110] = {
    [anon_sym_f64] = ACTIONS(93),
    [anon_sym_u32] = ACTIONS(93),
    [anon_sym_s16] = ACTIONS(93),
    [anon_sym_i8] = ACTIONS(93),
    [anon_sym_u16] = ACTIONS(93),
    [anon_sym_i32] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(93),
    [anon_sym_f32] = ACTIONS(93),
    [anon_sym_s8] = ACTIONS(93),
    [anon_sym_u8] = ACTIONS(93),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_u64] = ACTIONS(93),
    [anon_sym_s32] = ACTIONS(93),
    [anon_sym_i16] = ACTIONS(93),
    [anon_sym_i64] = ACTIONS(93),
  },
  [111] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(457),
    [anon_sym_returns] = ACTIONS(457),
  },
  [112] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(162),
    [anon_sym_COMMA] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(461),
  },
  [113] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(49),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [114] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(463),
  },
  [115] = {
    [aux_sym_compound_macro_repeat1] = STATE(115),
    [sym__space] = ACTIONS(465),
    [anon_sym_DOT] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(455),
  },
  [116] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(468),
  },
  [117] = {
    [anon_sym_switch] = ACTIONS(470),
    [anon_sym_default] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(470),
    [anon_sym_if] = ACTIONS(470),
    [anon_sym_method] = ACTIONS(470),
    [anon_sym_while] = ACTIONS(470),
    [anon_sym_module] = ACTIONS(470),
    [anon_sym_function] = ACTIONS(470),
  },
  [118] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(472),
  },
  [119] = {
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_AMP] = ACTIONS(474),
    [anon_sym_PLUS_PLUS] = ACTIONS(476),
    [anon_sym_PLUS_EQ] = ACTIONS(476),
    [anon_sym_SLASH_EQ] = ACTIONS(476),
    [anon_sym_AMP_EQ] = ACTIONS(476),
    [anon_sym_BANG_EQ] = ACTIONS(476),
    [anon_sym_LT_LT] = ACTIONS(474),
    [anon_sym_AMP_AMP] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_GT_GT_EQ] = ACTIONS(476),
    [anon_sym_PERCENT] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(474),
    [anon_sym_DASH_DASH] = ACTIONS(476),
    [anon_sym_DASH_EQ] = ACTIONS(476),
    [anon_sym_PIPE_EQ] = ACTIONS(476),
    [sym__space] = ACTIONS(476),
    [anon_sym_EQ_EQ] = ACTIONS(476),
    [anon_sym_GT_EQ] = ACTIONS(476),
    [anon_sym_PIPE_PIPE] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_LT_LT_EQ] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_COLON_EQ] = ACTIONS(476),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR_EQ] = ACTIONS(476),
    [anon_sym_CARET_EQ] = ACTIONS(476),
    [anon_sym_PERCENT_EQ] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_LT_EQ] = ACTIONS(476),
    [anon_sym_GT_GT] = ACTIONS(474),
  },
  [120] = {
    [sym__escape_sequence] = STATE(165),
    [aux_sym_string_repeat1] = STATE(165),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(478),
    [anon_sym_BSLASHf] = ACTIONS(478),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(478),
    [anon_sym_BSLASHr] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(478),
    [anon_sym_BSLASHn] = ACTIONS(478),
    [anon_sym_BSLASHa] = ACTIONS(478),
    [anon_sym_BSLASHt] = ACTIONS(478),
    [anon_sym_DQUOTE] = ACTIONS(480),
    [anon_sym_BSLASH0] = ACTIONS(478),
    [anon_sym_BSLASHb] = ACTIONS(478),
    [anon_sym_BSLASHv] = ACTIONS(478),
    [aux_sym_string_token1] = ACTIONS(482),
  },
  [121] = {
    [sym__escape_sequence] = STATE(166),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(484),
    [aux_sym_character_token1] = ACTIONS(486),
    [anon_sym_BSLASHf] = ACTIONS(484),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(484),
    [anon_sym_BSLASHr] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(484),
    [anon_sym_BSLASHn] = ACTIONS(484),
    [anon_sym_BSLASHa] = ACTIONS(484),
    [anon_sym_BSLASHt] = ACTIONS(484),
    [anon_sym_BSLASH0] = ACTIONS(484),
    [anon_sym_BSLASHb] = ACTIONS(484),
    [anon_sym_BSLASHv] = ACTIONS(484),
  },
  [122] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(488),
  },
  [123] = {
    [sym_null] = ACTIONS(490),
    [sym_double] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
    [sym_oct] = ACTIONS(490),
    [sym_hex] = ACTIONS(492),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [sym_integer] = ACTIONS(490),
    [anon_sym_SQUOTE] = ACTIONS(492),
    [sym_float] = ACTIONS(492),
    [sym_binary] = ACTIONS(492),
    [sym_long] = ACTIONS(492),
  },
  [124] = {
    [sym__number] = STATE(168),
    [sym_string] = STATE(168),
    [sym_character] = STATE(168),
    [sym__value] = STATE(168),
    [sym__literal] = STATE(168),
    [sym_group_expression] = STATE(168),
    [sym_null] = ACTIONS(494),
    [sym_double] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_hex] = ACTIONS(496),
    [sym_identifier] = ACTIONS(494),
    [sym_oct] = ACTIONS(494),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_integer] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(496),
    [sym_binary] = ACTIONS(496),
    [sym_long] = ACTIONS(496),
  },
  [125] = {
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [anon_sym_AMP_EQ] = ACTIONS(500),
    [anon_sym_BANG_EQ] = ACTIONS(500),
    [anon_sym_LT_LT] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_GT_GT_EQ] = ACTIONS(500),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_CARET] = ACTIONS(498),
    [anon_sym_DASH_DASH] = ACTIONS(500),
    [anon_sym_DASH_EQ] = ACTIONS(500),
    [anon_sym_PIPE_EQ] = ACTIONS(500),
    [sym__space] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(500),
    [anon_sym_PIPE_PIPE] = ACTIONS(500),
    [anon_sym_LT_LT_EQ] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_COLON_EQ] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_STAR_EQ] = ACTIONS(500),
    [anon_sym_CARET_EQ] = ACTIONS(500),
    [anon_sym_PERCENT_EQ] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(500),
    [anon_sym_GT_GT] = ACTIONS(498),
  },
  [126] = {
    [sym__escape_sequence] = STATE(126),
    [aux_sym_string_repeat1] = STATE(126),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(502),
    [anon_sym_BSLASHf] = ACTIONS(502),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(502),
    [anon_sym_BSLASHr] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(502),
    [anon_sym_BSLASHn] = ACTIONS(502),
    [anon_sym_BSLASHa] = ACTIONS(502),
    [anon_sym_BSLASHt] = ACTIONS(502),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_BSLASH0] = ACTIONS(502),
    [anon_sym_BSLASHb] = ACTIONS(502),
    [anon_sym_BSLASHv] = ACTIONS(502),
    [aux_sym_string_token1] = ACTIONS(507),
  },
  [127] = {
    [anon_sym_PLUS_DASH] = ACTIONS(208),
    [anon_sym_SLASH_STAR] = ACTIONS(208),
    [anon_sym_STAR_SLASH] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(206),
  },
  [128] = {
    [sym__block_comment_plus] = STATE(108),
    [aux_sym__block_comment_plus_repeat1] = STATE(108),
    [sym__block_comment_star] = STATE(108),
    [anon_sym_PLUS_DASH] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [anon_sym_DASH_PLUS] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(212),
  },
  [129] = {
    [anon_sym_PLUS_DASH] = ACTIONS(282),
    [anon_sym_SLASH_STAR] = ACTIONS(282),
    [anon_sym_STAR_SLASH] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(280),
  },
  [130] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(286),
  },
  [131] = {
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_switch] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_s16] = ACTIONS(514),
    [sym_null] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [sym_oct] = ACTIONS(514),
    [anon_sym_goto] = ACTIONS(514),
    [sym_double] = ACTIONS(516),
    [anon_sym_PLUS_PLUS] = ACTIONS(516),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_SLASH_SLASH] = ACTIONS(514),
    [anon_sym_PLUS_DASH] = ACTIONS(516),
    [anon_sym_u8] = ACTIONS(514),
    [anon_sym_end] = ACTIONS(514),
    [anon_sym_publish] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [sym_is_declare] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(514),
    [anon_sym_if] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [sym_integer] = ACTIONS(514),
    [sym_hex] = ACTIONS(516),
    [anon_sym_section] = ACTIONS(514),
    [anon_sym_return] = ACTIONS(514),
    [anon_sym_DASH_DASH] = ACTIONS(516),
    [anon_sym_private] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_i32] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [sym_is_external] = ACTIONS(514),
    [sym_float] = ACTIONS(516),
    [anon_sym_while] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [sym_long] = ACTIONS(516),
    [anon_sym_s8] = ACTIONS(514),
    [sym_binary] = ACTIONS(516),
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_default] = ACTIONS(514),
    [anon_sym_STAR_STAR] = ACTIONS(516),
    [anon_sym_protected] = ACTIONS(514),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_i16] = ACTIONS(514),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_i64] = ACTIONS(514),
    [anon_sym_module] = ACTIONS(514),
    [anon_sym_function] = ACTIONS(514),
  },
  [132] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(518),
    [anon_sym_SLASH_STAR] = ACTIONS(521),
    [anon_sym_STAR_SLASH] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(526),
  },
  [133] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(529),
  },
  [134] = {
    [sym_parameter_list] = STATE(172),
    [sym_return_list] = STATE(173),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_returns] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(106),
  },
  [135] = {
    [aux_sym_assignment_expression_repeat1] = STATE(135),
    [anon_sym_DASH_EQ] = ACTIONS(533),
    [anon_sym_PIPE_EQ] = ACTIONS(533),
    [anon_sym_COLON_EQ] = ACTIONS(533),
    [sym__space] = ACTIONS(535),
    [anon_sym_GT_GT_EQ] = ACTIONS(533),
    [anon_sym_STAR_EQ] = ACTIONS(533),
    [anon_sym_CARET_EQ] = ACTIONS(533),
    [anon_sym_PERCENT_EQ] = ACTIONS(533),
    [anon_sym_LT_LT_EQ] = ACTIONS(533),
    [anon_sym_SLASH_EQ] = ACTIONS(533),
    [anon_sym_PLUS_EQ] = ACTIONS(533),
    [anon_sym_AMP_EQ] = ACTIONS(533),
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
    [sym_null] = ACTIONS(538),
    [sym_double] = ACTIONS(540),
    [sym_long] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(538),
    [sym_hex] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_binary] = ACTIONS(540),
    [sym_integer] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [137] = {
    [sym_assignment_expression] = STATE(41),
    [sym__assignment_or_collection_or_value] = STATE(41),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(43),
    [sym_collection] = STATE(43),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(175),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_null] = ACTIONS(7),
    [sym_double] = ACTIONS(13),
    [sym_long] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(7),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(41),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_binary] = ACTIONS(13),
    [sym_integer] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(61),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_RBRACE] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
  },
  [139] = {
    [sym_primitive_type] = STATE(177),
    [sym_type] = STATE(176),
    [sym__base_type] = STATE(177),
    [sym__comma_list_types] = STATE(178),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(546),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [140] = {
    [sym_return_list] = STATE(173),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_returns] = ACTIONS(310),
  },
  [141] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(531),
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
    [sym_null] = ACTIONS(548),
    [sym_double] = ACTIONS(550),
    [sym_long] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(548),
    [sym_hex] = ACTIONS(550),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_identifier] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_binary] = ACTIONS(550),
    [sym_integer] = ACTIONS(548),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(302),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
  },
  [144] = {
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_LBRACK] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
  },
  [145] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(554),
  },
  [146] = {
    [sym_pointer] = STATE(146),
    [aux_sym_type_repeat1] = STATE(146),
    [anon_sym_LBRACK] = ACTIONS(556),
    [sym_identifier] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(558),
  },
  [147] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym_identifier] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
  },
  [148] = {
    [aux_sym_type_repeat2] = STATE(148),
    [sym_array] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(563),
    [sym_identifier] = ACTIONS(566),
    [sym__space] = ACTIONS(3),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(568),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(568),
  },
  [150] = {
    [sym__enum_element] = STATE(181),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(172),
  },
  [151] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(570),
  },
  [152] = {
    [aux_sym_enum_definition_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(572),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(574),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(574),
  },
  [154] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(154),
    [anon_sym_COMMA] = ACTIONS(576),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(574),
  },
  [155] = {
    [anon_sym_return] = ACTIONS(474),
    [sym_null] = ACTIONS(474),
    [anon_sym_switch] = ACTIONS(474),
    [sym_double] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(474),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_goto] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [sym_float] = ACTIONS(476),
    [anon_sym_while] = ACTIONS(474),
    [sym_binary] = ACTIONS(476),
    [sym_long] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_default] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [anon_sym_case] = ACTIONS(474),
    [anon_sym_if] = ACTIONS(474),
    [sym_hex] = ACTIONS(476),
    [sym_integer] = ACTIONS(474),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_RBRACE] = ACTIONS(476),
    [anon_sym_section] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(476),
  },
  [156] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(579),
  },
  [157] = {
    [sym__number] = STATE(186),
    [sym_string] = STATE(186),
    [sym_character] = STATE(186),
    [sym__value] = STATE(186),
    [sym__literal] = STATE(186),
    [sym_group_expression] = STATE(186),
    [sym_null] = ACTIONS(581),
    [sym_double] = ACTIONS(583),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(246),
    [sym_hex] = ACTIONS(583),
    [sym_identifier] = ACTIONS(581),
    [sym_oct] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [sym_integer] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [sym_float] = ACTIONS(583),
    [sym_binary] = ACTIONS(583),
    [sym_long] = ACTIONS(583),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_PLUS_DASH] = ACTIONS(442),
    [anon_sym_SLASH_STAR] = ACTIONS(442),
    [anon_sym_DASH_PLUS] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(440),
  },
  [160] = {
    [anon_sym_PLUS_DASH] = ACTIONS(516),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_DASH_PLUS] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(514),
  },
  [161] = {
    [sym_variable_definition] = STATE(187),
    [sym_access_control] = STATE(113),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [anon_sym_private] = ACTIONS(222),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(23),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(222),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_protected] = ACTIONS(222),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [162] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(188),
    [anon_sym_COMMA] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(587),
  },
  [163] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(589),
    [anon_sym_returns] = ACTIONS(589),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_DOT] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [sym__space] = ACTIONS(3),
  },
  [165] = {
    [sym__escape_sequence] = STATE(126),
    [aux_sym_string_repeat1] = STATE(126),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(264),
    [anon_sym_BSLASHf] = ACTIONS(264),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(264),
    [anon_sym_BSLASHr] = ACTIONS(264),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(264),
    [anon_sym_BSLASHn] = ACTIONS(264),
    [anon_sym_BSLASHa] = ACTIONS(264),
    [anon_sym_BSLASHt] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_BSLASH0] = ACTIONS(264),
    [anon_sym_BSLASHb] = ACTIONS(264),
    [anon_sym_BSLASHv] = ACTIONS(264),
    [aux_sym_string_token1] = ACTIONS(268),
  },
  [166] = {
    [anon_sym_SQUOTE] = ACTIONS(593),
    [sym__space] = ACTIONS(3),
  },
  [167] = {
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_LT] = ACTIONS(595),
    [anon_sym_PIPE] = ACTIONS(595),
    [anon_sym_AMP] = ACTIONS(595),
    [anon_sym_PLUS_PLUS] = ACTIONS(597),
    [anon_sym_PLUS_EQ] = ACTIONS(597),
    [anon_sym_SLASH_EQ] = ACTIONS(597),
    [anon_sym_AMP_EQ] = ACTIONS(597),
    [anon_sym_BANG_EQ] = ACTIONS(597),
    [anon_sym_LT_LT] = ACTIONS(595),
    [anon_sym_AMP_AMP] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_GT_GT_EQ] = ACTIONS(597),
    [anon_sym_PERCENT] = ACTIONS(595),
    [anon_sym_CARET] = ACTIONS(595),
    [anon_sym_DASH_DASH] = ACTIONS(597),
    [anon_sym_DASH_EQ] = ACTIONS(597),
    [anon_sym_PIPE_EQ] = ACTIONS(597),
    [sym__space] = ACTIONS(597),
    [anon_sym_EQ_EQ] = ACTIONS(597),
    [anon_sym_GT_EQ] = ACTIONS(597),
    [anon_sym_PIPE_PIPE] = ACTIONS(597),
    [anon_sym_DOT] = ACTIONS(597),
    [anon_sym_LT_LT_EQ] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_GT] = ACTIONS(595),
    [anon_sym_COLON_EQ] = ACTIONS(597),
    [anon_sym_DASH] = ACTIONS(595),
    [anon_sym_STAR_EQ] = ACTIONS(597),
    [anon_sym_CARET_EQ] = ACTIONS(597),
    [anon_sym_PERCENT_EQ] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_LT_EQ] = ACTIONS(597),
    [anon_sym_GT_GT] = ACTIONS(595),
  },
  [168] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(599),
  },
  [169] = {
    [anon_sym_PLUS_DASH] = ACTIONS(442),
    [anon_sym_SLASH_STAR] = ACTIONS(442),
    [anon_sym_STAR_SLASH] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(440),
  },
  [170] = {
    [anon_sym_PLUS_DASH] = ACTIONS(516),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_STAR_SLASH] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(514),
  },
  [171] = {
    [sym_static_assignment] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
  },
  [172] = {
    [sym_return_list] = STATE(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(601),
    [anon_sym_returns] = ACTIONS(310),
  },
  [173] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(601),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_RBRACE] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(605),
  },
  [176] = {
    [aux_sym__comma_list_types_repeat1] = STATE(196),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(609),
    [sym__space] = ACTIONS(3),
  },
  [177] = {
    [sym_pointer] = STATE(197),
    [aux_sym_type_repeat1] = STATE(197),
    [aux_sym_type_repeat2] = STATE(198),
    [sym_array] = STATE(198),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_DOT] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(164),
  },
  [178] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(611),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(615),
    [sym_identifier] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(617),
  },
  [182] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
  },
  [183] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(621),
  },
  [184] = {
    [aux_sym_enum_definition_repeat1] = STATE(184),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(617),
  },
  [185] = {
    [anon_sym_return] = ACTIONS(595),
    [sym_null] = ACTIONS(595),
    [anon_sym_switch] = ACTIONS(595),
    [sym_double] = ACTIONS(597),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(595),
    [anon_sym_DOT] = ACTIONS(597),
    [anon_sym_goto] = ACTIONS(595),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_float] = ACTIONS(597),
    [anon_sym_while] = ACTIONS(595),
    [sym_binary] = ACTIONS(597),
    [sym_long] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_end] = ACTIONS(595),
    [anon_sym_default] = ACTIONS(595),
    [anon_sym_LPAREN] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
    [anon_sym_case] = ACTIONS(595),
    [anon_sym_if] = ACTIONS(595),
    [sym_hex] = ACTIONS(597),
    [sym_integer] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_section] = ACTIONS(595),
    [anon_sym_LBRACE] = ACTIONS(597),
  },
  [186] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(626),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(628),
  },
  [188] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(188),
    [anon_sym_COMMA] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(628),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [sym__space] = ACTIONS(3),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_RBRACE] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
  },
  [191] = {
    [anon_sym_SLASH] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_PLUS_PLUS] = ACTIONS(635),
    [anon_sym_PLUS_EQ] = ACTIONS(635),
    [anon_sym_SLASH_EQ] = ACTIONS(635),
    [anon_sym_AMP_EQ] = ACTIONS(635),
    [anon_sym_BANG_EQ] = ACTIONS(635),
    [anon_sym_LT_LT] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [anon_sym_GT_GT_EQ] = ACTIONS(635),
    [anon_sym_PERCENT] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(633),
    [anon_sym_DASH_DASH] = ACTIONS(635),
    [anon_sym_DASH_EQ] = ACTIONS(635),
    [anon_sym_PIPE_EQ] = ACTIONS(635),
    [sym__space] = ACTIONS(635),
    [anon_sym_EQ_EQ] = ACTIONS(635),
    [anon_sym_GT_EQ] = ACTIONS(635),
    [anon_sym_PIPE_PIPE] = ACTIONS(635),
    [anon_sym_DOT] = ACTIONS(635),
    [anon_sym_LT_LT_EQ] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_STAR] = ACTIONS(633),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_COLON_EQ] = ACTIONS(635),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_STAR_EQ] = ACTIONS(635),
    [anon_sym_CARET_EQ] = ACTIONS(635),
    [anon_sym_PERCENT_EQ] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_LT_EQ] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(633),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [anon_sym_RPAREN] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
  },
  [193] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(639),
  },
  [194] = {
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(422),
    [anon_sym_RBRACE] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
  },
  [195] = {
    [sym__base_type] = STATE(177),
    [sym_primitive_type] = STATE(177),
    [sym_type] = STATE(201),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [sym_identifier] = ACTIONS(546),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
  },
  [196] = {
    [aux_sym__comma_list_types_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
  },
  [197] = {
    [sym_pointer] = STATE(203),
    [aux_sym_type_repeat1] = STATE(203),
    [aux_sym_type_repeat2] = STATE(204),
    [sym_array] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(164),
  },
  [198] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
  },
  [199] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(643),
  },
  [200] = {
    [anon_sym_return] = ACTIONS(633),
    [sym_null] = ACTIONS(633),
    [anon_sym_switch] = ACTIONS(633),
    [sym_double] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(633),
    [anon_sym_DOT] = ACTIONS(635),
    [anon_sym_goto] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_float] = ACTIONS(635),
    [anon_sym_while] = ACTIONS(633),
    [sym_binary] = ACTIONS(635),
    [sym_long] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_default] = ACTIONS(633),
    [anon_sym_LPAREN] = ACTIONS(633),
    [sym_identifier] = ACTIONS(633),
    [anon_sym_case] = ACTIONS(633),
    [anon_sym_if] = ACTIONS(633),
    [sym_hex] = ACTIONS(635),
    [sym_integer] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [anon_sym_section] = ACTIONS(633),
    [anon_sym_LBRACE] = ACTIONS(635),
  },
  [201] = {
    [anon_sym_COMMA] = ACTIONS(645),
    [anon_sym_DOT] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
  },
  [202] = {
    [aux_sym__comma_list_types_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
  },
  [203] = {
    [sym_pointer] = STATE(203),
    [aux_sym_type_repeat1] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(556),
    [anon_sym_LBRACK] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(558),
  },
  [204] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
  },
  [205] = {
    [aux_sym_type_repeat2] = STATE(205),
    [sym_array] = STATE(205),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_DOT] = ACTIONS(566),
    [anon_sym_LBRACK] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(38),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(38),
  [15] = {.count = 1, .reusable = false}, SHIFT(25),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(26),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(8),
  [27] = {.count = 1, .reusable = true}, SHIFT(10),
  [29] = {.count = 1, .reusable = false}, SHIFT(11),
  [31] = {.count = 1, .reusable = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = false}, SHIFT(15),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
  [41] = {.count = 1, .reusable = false}, SHIFT(17),
  [43] = {.count = 1, .reusable = false}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = true}, SHIFT(20),
  [49] = {.count = 1, .reusable = false}, SHIFT(21),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = true}, SHIFT(6),
  [59] = {.count = 1, .reusable = false}, SHIFT(24),
  [61] = {.count = 1, .reusable = true}, SHIFT(3),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(44),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(46),
  [71] = {.count = 1, .reusable = false}, SHIFT(46),
  [73] = {.count = 1, .reusable = true}, SHIFT(47),
  [75] = {.count = 1, .reusable = false}, SHIFT(48),
  [77] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [79] = {.count = 1, .reusable = false}, SHIFT(37),
  [81] = {.count = 1, .reusable = true}, SHIFT(50),
  [83] = {.count = 1, .reusable = true}, SHIFT(51),
  [85] = {.count = 1, .reusable = true}, SHIFT(52),
  [87] = {.count = 1, .reusable = false}, SHIFT(53),
  [89] = {.count = 1, .reusable = false}, SHIFT(54),
  [91] = {.count = 1, .reusable = false}, SHIFT(55),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [97] = {.count = 2, .reusable = true}, REDUCE(sym__value, 1), SHIFT(57),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 1),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [106] = {.count = 1, .reusable = true}, SHIFT(58),
  [108] = {.count = 1, .reusable = false}, SHIFT(67),
  [110] = {.count = 1, .reusable = true}, SHIFT(67),
  [112] = {.count = 1, .reusable = false}, SHIFT(64),
  [114] = {.count = 1, .reusable = true}, SHIFT(64),
  [116] = {.count = 1, .reusable = true}, SHIFT(68),
  [118] = {.count = 1, .reusable = true}, SHIFT(71),
  [120] = {.count = 1, .reusable = true}, SHIFT(70),
  [122] = {.count = 1, .reusable = false}, SHIFT(71),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [126] = {.count = 1, .reusable = true}, SHIFT(73),
  [128] = {.count = 1, .reusable = true}, SHIFT(74),
  [130] = {.count = 1, .reusable = true}, SHIFT(75),
  [132] = {.count = 1, .reusable = false}, SHIFT(76),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [136] = {.count = 1, .reusable = true}, SHIFT(77),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
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
  [172] = {.count = 1, .reusable = true}, SHIFT(93),
  [174] = {.count = 1, .reusable = true}, SHIFT(95),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [178] = {.count = 1, .reusable = true}, SHIFT(97),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [182] = {.count = 1, .reusable = false}, SHIFT(100),
  [184] = {.count = 1, .reusable = true}, SHIFT(100),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(101),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [196] = {.count = 1, .reusable = true}, SHIFT(102),
  [198] = {.count = 1, .reusable = true}, SHIFT(103),
  [200] = {.count = 1, .reusable = false}, SHIFT(104),
  [202] = {.count = 1, .reusable = true}, SHIFT(105),
  [204] = {.count = 1, .reusable = false}, SHIFT(106),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 2),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 2),
  [210] = {.count = 1, .reusable = true}, SHIFT(107),
  [212] = {.count = 1, .reusable = false}, SHIFT(108),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(57),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(109),
  [222] = {.count = 1, .reusable = false}, SHIFT(110),
  [224] = {.count = 1, .reusable = true}, SHIFT(111),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [234] = {.count = 1, .reusable = false}, SHIFT(117),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [240] = {.count = 1, .reusable = true}, SHIFT(119),
  [242] = {.count = 1, .reusable = false}, SHIFT(122),
  [244] = {.count = 1, .reusable = true}, SHIFT(122),
  [246] = {.count = 1, .reusable = false}, SHIFT(44),
  [248] = {.count = 1, .reusable = true}, SHIFT(120),
  [250] = {.count = 1, .reusable = true}, SHIFT(121),
  [252] = {.count = 1, .reusable = false}, SHIFT(123),
  [254] = {.count = 1, .reusable = true}, SHIFT(123),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [260] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [264] = {.count = 1, .reusable = true}, SHIFT(126),
  [266] = {.count = 1, .reusable = true}, SHIFT(125),
  [268] = {.count = 1, .reusable = false}, SHIFT(126),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(127),
  [274] = {.count = 1, .reusable = false}, SHIFT(128),
  [276] = {.count = 1, .reusable = true}, SHIFT(129),
  [278] = {.count = 1, .reusable = false}, SHIFT(130),
  [280] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(131),
  [286] = {.count = 1, .reusable = false}, SHIFT(132),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
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
  [316] = {.count = 1, .reusable = true}, SHIFT(144),
  [318] = {.count = 1, .reusable = true}, SHIFT(145),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [328] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [334] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [337] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [340] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [355] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [391] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [402] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [416] = {.count = 1, .reusable = true}, SHIFT(150),
  [418] = {.count = 1, .reusable = true}, SHIFT(151),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [424] = {.count = 1, .reusable = true}, SHIFT(155),
  [426] = {.count = 1, .reusable = false}, SHIFT(156),
  [428] = {.count = 1, .reusable = true}, SHIFT(156),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [436] = {.count = 1, .reusable = true}, SHIFT(159),
  [438] = {.count = 1, .reusable = true}, SHIFT(160),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 3),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(50),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(51),
  [450] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(108),
  [455] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [459] = {.count = 1, .reusable = true}, SHIFT(161),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [463] = {.count = 1, .reusable = true}, SHIFT(163),
  [465] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(57),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [470] = {.count = 1, .reusable = true}, SHIFT(54),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [478] = {.count = 1, .reusable = true}, SHIFT(165),
  [480] = {.count = 1, .reusable = true}, SHIFT(164),
  [482] = {.count = 1, .reusable = false}, SHIFT(165),
  [484] = {.count = 1, .reusable = true}, SHIFT(166),
  [486] = {.count = 1, .reusable = false}, SHIFT(166),
  [488] = {.count = 1, .reusable = true}, SHIFT(167),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [494] = {.count = 1, .reusable = false}, SHIFT(168),
  [496] = {.count = 1, .reusable = true}, SHIFT(168),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [502] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [505] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [510] = {.count = 1, .reusable = true}, SHIFT(169),
  [512] = {.count = 1, .reusable = true}, SHIFT(170),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 3),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(73),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(74),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [526] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(132),
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
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(87),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(86),
  [566] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [570] = {.count = 1, .reusable = true}, SHIFT(182),
  [572] = {.count = 1, .reusable = true}, SHIFT(183),
  [574] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(95),
  [579] = {.count = 1, .reusable = true}, SHIFT(185),
  [581] = {.count = 1, .reusable = false}, SHIFT(186),
  [583] = {.count = 1, .reusable = true}, SHIFT(186),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [591] = {.count = 1, .reusable = true}, SHIFT(189),
  [593] = {.count = 1, .reusable = true}, SHIFT(190),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [599] = {.count = 1, .reusable = true}, SHIFT(191),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [605] = {.count = 1, .reusable = true}, SHIFT(194),
  [607] = {.count = 1, .reusable = true}, SHIFT(195),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [617] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [621] = {.count = 1, .reusable = true}, SHIFT(199),
  [623] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(150),
  [626] = {.count = 1, .reusable = true}, SHIFT(200),
  [628] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [630] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(161),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
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
