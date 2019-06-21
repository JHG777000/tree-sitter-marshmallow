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
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 0
#define TOKEN_COUNT 110
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
  anon_sym_DASH_DASH = 83,
  anon_sym_LBRACE = 84,
  anon_sym_RBRACE = 85,
  sym_null = 86,
  sym_identifier = 87,
  anon_sym_DQUOTE = 88,
  aux_sym_string_token1 = 89,
  anon_sym_SQUOTE = 90,
  aux_sym_character_token1 = 91,
  anon_sym_BSLASH_BSLASH = 92,
  anon_sym_BSLASH0 = 93,
  anon_sym_BSLASHa = 94,
  anon_sym_BSLASHb = 95,
  anon_sym_BSLASHf = 96,
  anon_sym_BSLASHn = 97,
  anon_sym_BSLASHr = 98,
  anon_sym_BSLASHt = 99,
  anon_sym_BSLASHv = 100,
  anon_sym_BSLASH_DQUOTE = 101,
  anon_sym_BSLASH_SQUOTE = 102,
  sym_oct = 103,
  sym_integer = 104,
  sym_long = 105,
  sym_float = 106,
  sym_double = 107,
  sym_hex = 108,
  sym_binary = 109,
  sym_source_file = 110,
  sym__block_comment_star = 111,
  sym__block_comment_plus = 112,
  sym__comment = 113,
  sym__comma_list_variables = 114,
  sym__comma_list_assignment_or_collection_or_value = 115,
  sym__comma_list_types = 116,
  sym_access_control = 117,
  sym__sentence = 118,
  sym_definition = 119,
  sym_module_definition = 120,
  sym_compound_macro = 121,
  sym_end_compound_macro = 122,
  sym__enum_element = 123,
  sym_enum_definition = 124,
  sym_is_function = 125,
  sym_is_method = 126,
  sym_function_definition = 127,
  sym_variable_definition = 128,
  sym_parameter_list = 129,
  sym_return_list = 130,
  sym_type = 131,
  sym__base_type = 132,
  sym_primitive_type = 133,
  sym_pointer = 134,
  sym_array = 135,
  sym_declaration_definition = 136,
  sym_statement = 137,
  sym_end_statement = 138,
  sym__control_flow_statement = 139,
  sym_goto_statement = 140,
  sym_section_statement = 141,
  sym_single_line_if_statement = 142,
  sym_if_statement = 143,
  sym_while_statement = 144,
  sym_switch_statement = 145,
  sym_case_statement = 146,
  sym_default_statement = 147,
  sym_static_assignment = 148,
  sym_expression_statement = 149,
  sym_return_statement = 150,
  sym_group_expression = 151,
  sym_assignment_expression = 152,
  sym_unary_op = 153,
  sym_binary_op = 154,
  sym_assignment_op = 155,
  sym_assignment_post_op = 156,
  sym__assignment_or_collection_or_value = 157,
  sym__collection_or_value = 158,
  sym_collection = 159,
  sym__value = 160,
  sym__literal = 161,
  sym_string = 162,
  sym_character = 163,
  sym__escape_sequence = 164,
  sym__number = 165,
  aux_sym_source_file_repeat1 = 166,
  aux_sym__block_comment_star_repeat1 = 167,
  aux_sym__block_comment_plus_repeat1 = 168,
  aux_sym__comma_list_variables_repeat1 = 169,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 170,
  aux_sym__comma_list_types_repeat1 = 171,
  aux_sym_compound_macro_repeat1 = 172,
  aux_sym_enum_definition_repeat1 = 173,
  aux_sym_type_repeat1 = 174,
  aux_sym_type_repeat2 = 175,
  aux_sym_assignment_expression_repeat1 = 176,
  aux_sym_string_repeat1 = 177,
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
      if (lookahead == '-')
        ADVANCE(116);
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
        ADVANCE(117);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
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
        ADVANCE(119);
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
        ADVANCE(120);
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
        ADVANCE(121);
      END_STATE();
    case 83:
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 84:
      if (lookahead == 'd')
        ADVANCE(124);
      if (lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == '2')
        ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == '4')
        ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 'n')
        ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == '6')
        ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == '2')
        ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == '4')
        ADVANCE(133);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'd')
        ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'l')
        ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'i')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'b')
        ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 101:
      if (lookahead == '6')
        ADVANCE(142);
      END_STATE();
    case 102:
      if (lookahead == '2')
        ADVANCE(143);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 104:
      if (lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == 'i')
        ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == '6')
        ADVANCE(146);
      END_STATE();
    case 107:
      if (lookahead == '2')
        ADVANCE(147);
      END_STATE();
    case 108:
      if (lookahead == '4')
        ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(149);
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
        ADVANCE(150);
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
        ADVANCE(62);
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
        ADVANCE(230);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(231);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
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
    case 215:
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
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(235);
      if (lookahead == 'x')
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
        ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(237);
      if (lookahead == '6')
        ADVANCE(238);
      if (lookahead == 'u')
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
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(241);
      if (lookahead == '3')
        ADVANCE(242);
      if (lookahead == '6')
        ADVANCE(243);
      if (lookahead == '8')
        ADVANCE(244);
      if (lookahead == 'f')
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
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(246);
      if (lookahead == 'o')
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
    case 223:
      ACCEPT_TOKEN(sym_identifier);
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
        ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(249);
      if (lookahead == 'u')
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
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(252);
      if (lookahead == '3')
        ADVANCE(253);
      if (lookahead == '8')
        ADVANCE(254);
      if (lookahead == 'e')
        ADVANCE(255);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(257);
      if (lookahead == '3')
        ADVANCE(258);
      if (lookahead == '6')
        ADVANCE(259);
      if (lookahead == '8')
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
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
      if (lookahead == '*')
        ADVANCE(262);
      END_STATE();
    case 231:
      if (lookahead == '-')
        ADVANCE(116);
      END_STATE();
    case 232:
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
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
      if (lookahead == 'c')
        ADVANCE(264);
      if (lookahead == 'f')
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
      if (lookahead == 'd')
        ADVANCE(266);
      if (lookahead == 'u')
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
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
    case 244:
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
    case 245:
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
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
      if (lookahead == 'i')
        ADVANCE(279);
      if (lookahead == 'o')
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
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
      if (lookahead == 'a')
        ADVANCE(282);
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
        ADVANCE(229);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
    case 254:
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
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
    case 256:
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
        ADVANCE(229);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
    case 260:
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
    case 261:
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
        ADVANCE(229);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
    case 266:
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
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
    case 269:
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
    case 270:
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
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
    case 273:
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
    case 274:
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
    case 275:
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
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
    case 284:
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
    case 285:
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
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 288:
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
    case 289:
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
    case 290:
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
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
    case 292:
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
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
    case 295:
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
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
    case 298:
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
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
    case 301:
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
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 'i')
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
      if (lookahead == 'c')
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
      if (lookahead == 'e')
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
      if (lookahead == 'r')
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
      if (lookahead == 'l')
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
      if (lookahead == 'n')
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
      if (lookahead == 'i')
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
      if (lookahead == 'd')
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
      if (lookahead == 'e')
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
      if (lookahead == 't')
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
      if (lookahead == 'c')
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
      if (lookahead == 's')
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
      if (lookahead == 'n')
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
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
    case 323:
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
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
    case 328:
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
    case 329:
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
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
      if (lookahead == 't')
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
    case 333:
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
    case 334:
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
    case 335:
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
    case 336:
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
    case 337:
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
    case 338:
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
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
    case 341:
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
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
    case 343:
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
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 346:
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
    case 347:
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
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 350:
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
    case 351:
      if (lookahead == '!')
        ADVANCE(352);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(353);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(354);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(356);
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
        ADVANCE(229);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 353:
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
    case 354:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 356:
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
    case 357:
      if (lookahead == '(')
        ADVANCE(358);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'm')
        ADVANCE(360);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 358:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(241);
      if (lookahead == '3')
        ADVANCE(242);
      if (lookahead == '6')
        ADVANCE(243);
      if (lookahead == '8')
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
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(252);
      if (lookahead == '3')
        ADVANCE(253);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
    case 364:
      if (lookahead == '*')
        ADVANCE(354);
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
    case 365:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(367);
      END_STATE();
    case 366:
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
    case 367:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 368:
      if (lookahead == '(')
        ADVANCE(358);
      if (lookahead == '*')
        ADVANCE(354);
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
    case 369:
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'm')
        ADVANCE(360);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 370:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 373:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 377:
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
        ADVANCE(229);
      END_STATE();
    case 378:
      if (lookahead == '\\')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(380);
      END_STATE();
    case 379:
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
    case 380:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 381:
      if (lookahead == '%')
        ADVANCE(382);
      if (lookahead == '&')
        ADVANCE(383);
      if (lookahead == '(')
        ADVANCE(358);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(384);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(386);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '<')
        ADVANCE(388);
      if (lookahead == '>')
        ADVANCE(389);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(390);
      if (lookahead == '|')
        ADVANCE(391);
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
    case 382:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 383:
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
    case 384:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 386:
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
        ADVANCE(229);
      END_STATE();
    case 387:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 390:
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
        ADVANCE(229);
      END_STATE();
    case 391:
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
        ADVANCE(229);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 393:
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
    case 394:
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
    case 395:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(237);
      if (lookahead == '6')
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
    case 397:
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(399);
      if (lookahead == '/')
        ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(43);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '/')
        ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 400:
      if (lookahead == '*')
        ADVANCE(57);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 402:
      if (lookahead == 'c')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'f')
        ADVANCE(404);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(406);
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
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
    case 408:
      if (lookahead == '%')
        ADVANCE(382);
      if (lookahead == '&')
        ADVANCE(409);
      if (lookahead == '*')
        ADVANCE(410);
      if (lookahead == '+')
        ADVANCE(384);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(385);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(411);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '<')
        ADVANCE(412);
      if (lookahead == '>')
        ADVANCE(413);
      if (lookahead == '^')
        ADVANCE(414);
      if (lookahead == '|')
        ADVANCE(415);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 409:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 410:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 411:
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 412:
      if (lookahead == '<')
        ADVANCE(416);
      END_STATE();
    case 413:
      if (lookahead == '>')
        ADVANCE(417);
      END_STATE();
    case 414:
      if (lookahead == '=')
        ADVANCE(81);
      END_STATE();
    case 415:
      if (lookahead == '=')
        ADVANCE(111);
      END_STATE();
    case 416:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 417:
      if (lookahead == '=')
        ADVANCE(120);
      END_STATE();
    case 418:
      if (lookahead == '!')
        ADVANCE(419);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(420);
      if (lookahead == '-')
        ADVANCE(421);
      if (lookahead == '/')
        ADVANCE(422);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(423);
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
    case 419:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 423:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 424:
      if (lookahead == '!')
        ADVANCE(419);
      if (lookahead == '%')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(5);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(420);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(421);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(422);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(423);
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
    case 425:
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
    case 426:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == 'f')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 427:
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
        ADVANCE(403);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(429);
      if (lookahead == 's')
        ADVANCE(430);
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
        ADVANCE(229);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
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
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(255);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
    case 432:
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
        ADVANCE(229);
      END_STATE();
    case 433:
      if (lookahead == '(')
        ADVANCE(358);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'r')
        ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 434:
      if (lookahead == 'e')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 't')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'u')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'r')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'n')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 's')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 441:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 442:
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(443);
      END_STATE();
    case 444:
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
    case 445:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 446:
      if (lookahead == 'f')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'r')
        ADVANCE(361);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 447:
      if (lookahead == 'c')
        ADVANCE(448);
      if (lookahead == 'd')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'i')
        ADVANCE(451);
      if (lookahead == 'm')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'w')
        ADVANCE(454);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 448:
      if (lookahead == 'a')
        ADVANCE(82);
      END_STATE();
    case 449:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 450:
      if (lookahead == 'u')
        ADVANCE(88);
      END_STATE();
    case 451:
      if (lookahead == 'f')
        ADVANCE(94);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(95);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 453:
      if (lookahead == 'w')
        ADVANCE(105);
      END_STATE();
    case 454:
      if (lookahead == 'h')
        ADVANCE(110);
      END_STATE();
    case 455:
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 456:
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == 'f')
        ADVANCE(396);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(362);
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
    case 457:
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
        ADVANCE(403);
      if (lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(429);
      if (lookahead == 's')
        ADVANCE(430);
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
        ADVANCE(62);
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
    case 458:
      if (lookahead == '*')
        ADVANCE(354);
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
  [2] = {.lex_state = 351},
  [3] = {.lex_state = 357},
  [4] = {.lex_state = 357},
  [5] = {.lex_state = 364},
  [6] = {.lex_state = 365},
  [7] = {.lex_state = 368},
  [8] = {.lex_state = 369},
  [9] = {.lex_state = 370},
  [10] = {.lex_state = 373},
  [11] = {.lex_state = 357},
  [12] = {.lex_state = 377},
  [13] = {.lex_state = 364},
  [14] = {.lex_state = 357},
  [15] = {.lex_state = 378},
  [16] = {.lex_state = 368},
  [17] = {.lex_state = 381},
  [18] = {.lex_state = 368},
  [19] = {.lex_state = 357},
  [20] = {.lex_state = 357},
  [21] = {.lex_state = 377},
  [22] = {.lex_state = 368},
  [23] = {.lex_state = 395},
  [24] = {.lex_state = 397},
  [25] = {.lex_state = 402},
  [26] = {.lex_state = 368},
  [27] = {.lex_state = 364},
  [28] = {.lex_state = 364},
  [29] = {.lex_state = 381},
  [30] = {.lex_state = 364},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 369},
  [33] = {.lex_state = 381},
  [34] = {.lex_state = 364},
  [35] = {.lex_state = 368},
  [36] = {.lex_state = 368},
  [37] = {.lex_state = 368},
  [38] = {.lex_state = 408},
  [39] = {.lex_state = 210},
  [40] = {.lex_state = 377},
  [41] = {.lex_state = 395},
  [42] = {.lex_state = 377},
  [43] = {.lex_state = 418},
  [44] = {.lex_state = 364},
  [45] = {.lex_state = 351},
  [46] = {.lex_state = 364},
  [47] = {.lex_state = 424},
  [48] = {.lex_state = 365},
  [49] = {.lex_state = 364},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 373},
  [52] = {.lex_state = 397},
  [53] = {.lex_state = 210},
  [54] = {.lex_state = 373},
  [55] = {.lex_state = 368},
  [56] = {.lex_state = 425},
  [57] = {.lex_state = 425},
  [58] = {.lex_state = 408},
  [59] = {.lex_state = 364},
  [60] = {.lex_state = 210},
  [61] = {.lex_state = 364},
  [62] = {.lex_state = 426},
  [63] = {.lex_state = 368},
  [64] = {.lex_state = 368},
  [65] = {.lex_state = 364},
  [66] = {.lex_state = 427},
  [67] = {.lex_state = 364},
  [68] = {.lex_state = 364},
  [69] = {.lex_state = 364},
  [70] = {.lex_state = 368},
  [71] = {.lex_state = 373},
  [72] = {.lex_state = 397},
  [73] = {.lex_state = 210},
  [74] = {.lex_state = 397},
  [75] = {.lex_state = 364},
  [76] = {.lex_state = 368},
  [77] = {.lex_state = 364},
  [78] = {.lex_state = 395},
  [79] = {.lex_state = 368},
  [80] = {.lex_state = 377},
  [81] = {.lex_state = 381},
  [82] = {.lex_state = 377},
  [83] = {.lex_state = 210},
  [84] = {.lex_state = 433},
  [85] = {.lex_state = 441},
  [86] = {.lex_state = 364},
  [87] = {.lex_state = 442},
  [88] = {.lex_state = 368},
  [89] = {.lex_state = 368},
  [90] = {.lex_state = 444},
  [91] = {.lex_state = 444},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 424},
  [94] = {.lex_state = 378},
  [95] = {.lex_state = 365},
  [96] = {.lex_state = 395},
  [97] = {.lex_state = 377},
  [98] = {.lex_state = 377},
  [99] = {.lex_state = 395},
  [100] = {.lex_state = 377},
  [101] = {.lex_state = 418},
  [102] = {.lex_state = 424},
  [103] = {.lex_state = 365},
  [104] = {.lex_state = 373},
  [105] = {.lex_state = 373},
  [106] = {.lex_state = 373},
  [107] = {.lex_state = 397},
  [108] = {.lex_state = 210},
  [109] = {.lex_state = 373},
  [110] = {.lex_state = 445},
  [111] = {.lex_state = 445},
  [112] = {.lex_state = 377},
  [113] = {.lex_state = 425},
  [114] = {.lex_state = 408},
  [115] = {.lex_state = 424},
  [116] = {.lex_state = 446},
  [117] = {.lex_state = 433},
  [118] = {.lex_state = 445},
  [119] = {.lex_state = 446},
  [120] = {.lex_state = 395},
  [121] = {.lex_state = 368},
  [122] = {.lex_state = 368},
  [123] = {.lex_state = 364},
  [124] = {.lex_state = 447},
  [125] = {.lex_state = 364},
  [126] = {.lex_state = 441},
  [127] = {.lex_state = 397},
  [128] = {.lex_state = 373},
  [129] = {.lex_state = 397},
  [130] = {.lex_state = 397},
  [131] = {.lex_state = 210},
  [132] = {.lex_state = 397},
  [133] = {.lex_state = 368},
  [134] = {.lex_state = 433},
  [135] = {.lex_state = 381},
  [136] = {.lex_state = 377},
  [137] = {.lex_state = 377},
  [138] = {.lex_state = 444},
  [139] = {.lex_state = 456},
  [140] = {.lex_state = 433},
  [141] = {.lex_state = 364},
  [142] = {.lex_state = 377},
  [143] = {.lex_state = 441},
  [144] = {.lex_state = 364},
  [145] = {.lex_state = 442},
  [146] = {.lex_state = 368},
  [147] = {.lex_state = 368},
  [148] = {.lex_state = 368},
  [149] = {.lex_state = 210},
  [150] = {.lex_state = 444},
  [151] = {.lex_state = 365},
  [152] = {.lex_state = 424},
  [153] = {.lex_state = 395},
  [154] = {.lex_state = 457},
  [155] = {.lex_state = 395},
  [156] = {.lex_state = 377},
  [157] = {.lex_state = 373},
  [158] = {.lex_state = 373},
  [159] = {.lex_state = 445},
  [160] = {.lex_state = 368},
  [161] = {.lex_state = 368},
  [162] = {.lex_state = 445},
  [163] = {.lex_state = 425},
  [164] = {.lex_state = 425},
  [165] = {.lex_state = 426},
  [166] = {.lex_state = 445},
  [167] = {.lex_state = 433},
  [168] = {.lex_state = 441},
  [169] = {.lex_state = 397},
  [170] = {.lex_state = 397},
  [171] = {.lex_state = 441},
  [172] = {.lex_state = 433},
  [173] = {.lex_state = 364},
  [174] = {.lex_state = 444},
  [175] = {.lex_state = 425},
  [176] = {.lex_state = 458},
  [177] = {.lex_state = 458},
  [178] = {.lex_state = 364},
  [179] = {.lex_state = 441},
  [180] = {.lex_state = 364},
  [181] = {.lex_state = 444},
  [182] = {.lex_state = 444},
  [183] = {.lex_state = 424},
  [184] = {.lex_state = 457},
  [185] = {.lex_state = 395},
  [186] = {.lex_state = 364},
  [187] = {.lex_state = 445},
  [188] = {.lex_state = 368},
  [189] = {.lex_state = 445},
  [190] = {.lex_state = 445},
  [191] = {.lex_state = 445},
  [192] = {.lex_state = 441},
  [193] = {.lex_state = 364},
  [194] = {.lex_state = 444},
  [195] = {.lex_state = 395},
  [196] = {.lex_state = 458},
  [197] = {.lex_state = 458},
  [198] = {.lex_state = 458},
  [199] = {.lex_state = 457},
  [200] = {.lex_state = 364},
  [201] = {.lex_state = 458},
  [202] = {.lex_state = 458},
  [203] = {.lex_state = 458},
  [204] = {.lex_state = 458},
  [205] = {.lex_state = 458},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_PLUS_DASH] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DASH_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
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
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
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
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
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
    [sym_float] = ACTIONS(13),
    [anon_sym_method] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PLUS_DASH] = ACTIONS(23),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_oct] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_switch] = ACTIONS(47),
    [anon_sym_f64] = ACTIONS(11),
    [sym_integer] = ACTIONS(29),
    [anon_sym_s16] = ACTIONS(11),
    [sym_long] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_hex] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_goto] = ACTIONS(53),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(37),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
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
    [sym_float] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym__space] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(63),
    [sym_identifier] = ACTIONS(67),
    [sym_long] = ACTIONS(65),
    [sym_hex] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(69),
    [sym_null] = ACTIONS(67),
    [sym_double] = ACTIONS(65),
    [sym_binary] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(63),
    [sym_oct] = ACTIONS(67),
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
    [anon_sym_protected] = ACTIONS(19),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(43),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(15),
  },
  [4] = {
    [sym_group_expression] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [5] = {
    [sym_identifier] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
  },
  [6] = {
    [sym__escape_sequence] = STATE(48),
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(77),
    [anon_sym_BSLASHb] = ACTIONS(77),
    [anon_sym_BSLASHv] = ACTIONS(77),
    [anon_sym_BSLASHn] = ACTIONS(77),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(77),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(77),
    [anon_sym_BSLASH0] = ACTIONS(77),
    [anon_sym_BSLASHr] = ACTIONS(77),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(77),
    [aux_sym_string_token1] = ACTIONS(79),
    [anon_sym_BSLASHa] = ACTIONS(77),
    [anon_sym_BSLASHt] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(81),
  },
  [7] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(83),
  },
  [8] = {
    [anon_sym_s8] = ACTIONS(85),
    [anon_sym_u64] = ACTIONS(85),
    [anon_sym_s32] = ACTIONS(85),
    [anon_sym_i16] = ACTIONS(85),
    [anon_sym_u32] = ACTIONS(85),
    [anon_sym_i64] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_f64] = ACTIONS(85),
    [anon_sym_s16] = ACTIONS(85),
    [anon_sym_i8] = ACTIONS(85),
    [anon_sym_u16] = ACTIONS(85),
    [sym_readonly] = ACTIONS(85),
    [anon_sym_f32] = ACTIONS(85),
    [anon_sym_i32] = ACTIONS(85),
    [anon_sym_u8] = ACTIONS(85),
    [anon_sym_method] = ACTIONS(85),
  },
  [9] = {
    [aux_sym__comment_token1] = ACTIONS(87),
    [sym__space] = ACTIONS(89),
  },
  [10] = {
    [sym__block_comment_plus] = STATE(54),
    [aux_sym__block_comment_plus_repeat1] = STATE(54),
    [sym__block_comment_star] = STATE(54),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(97),
  },
  [11] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
  },
  [12] = {
    [sym_assignment_expression] = STATE(56),
    [sym__assignment_or_collection_or_value] = STATE(56),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(58),
    [sym_collection] = STATE(58),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(57),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_null] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_oct] = ACTIONS(29),
    [sym_long] = ACTIONS(13),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(29),
  },
  [13] = {
    [anon_sym_DOT] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
  },
  [14] = {
    [sym_group_expression] = STATE(59),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [15] = {
    [sym__escape_sequence] = STATE(60),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(103),
    [anon_sym_BSLASHb] = ACTIONS(103),
    [anon_sym_BSLASHv] = ACTIONS(103),
    [anon_sym_BSLASHn] = ACTIONS(103),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(103),
    [aux_sym_character_token1] = ACTIONS(105),
    [anon_sym_BSLASHf] = ACTIONS(103),
    [anon_sym_BSLASH0] = ACTIONS(103),
    [anon_sym_BSLASHr] = ACTIONS(103),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(103),
    [anon_sym_BSLASHa] = ACTIONS(103),
    [anon_sym_BSLASHt] = ACTIONS(103),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
  },
  [17] = {
    [aux_sym_compound_macro_repeat1] = STATE(64),
    [sym_parameter_list] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [sym__space] = ACTIONS(113),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(116),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(111),
  },
  [18] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(122),
  },
  [19] = {
    [sym_group_expression] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [20] = {
    [sym_group_expression] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
  },
  [21] = {
    [sym_assignment_expression] = STATE(68),
    [sym__assignment_or_collection_or_value] = STATE(68),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(58),
    [sym_collection] = STATE(58),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_null] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_oct] = ACTIONS(29),
    [sym_long] = ACTIONS(13),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(29),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(124),
  },
  [23] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(70),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [24] = {
    [sym__block_comment_plus] = STATE(74),
    [aux_sym__block_comment_star_repeat1] = STATE(74),
    [sym__block_comment_star] = STATE(74),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(130),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(132),
  },
  [25] = {
    [sym_compound_macro] = STATE(77),
    [anon_sym_case] = ACTIONS(134),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_while] = ACTIONS(134),
    [anon_sym_module] = ACTIONS(134),
    [sym_identifier] = ACTIONS(136),
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
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [sym__space] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(144),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(111),
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
    [sym_type] = STATE(70),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(15),
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
    [sym_identifier] = ACTIONS(160),
    [anon_sym_STAR] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(164),
  },
  [38] = {
    [sym_assignment_post_op] = STATE(91),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_STAR_EQ] = ACTIONS(166),
    [anon_sym_CARET_EQ] = ACTIONS(166),
    [sym__space] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_PERCENT_EQ] = ACTIONS(166),
    [anon_sym_DASH_EQ] = ACTIONS(166),
    [anon_sym_PIPE_EQ] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_PLUS_EQ] = ACTIONS(166),
    [anon_sym_LT_LT_EQ] = ACTIONS(166),
    [anon_sym_DOT] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [anon_sym_GT_GT_EQ] = ACTIONS(166),
    [anon_sym_AMP_EQ] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(168),
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
    [sym_float] = ACTIONS(13),
    [anon_sym_method] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [anon_sym_PLUS_DASH] = ACTIONS(23),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [sym_is_external] = ACTIONS(7),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_oct] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym_binary] = ACTIONS(13),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(39),
    [sym_identifier] = ACTIONS(41),
    [anon_sym_function] = ACTIONS(43),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_switch] = ACTIONS(47),
    [anon_sym_f64] = ACTIONS(11),
    [sym_integer] = ACTIONS(29),
    [anon_sym_s16] = ACTIONS(11),
    [sym_long] = ACTIONS(13),
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_hex] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_goto] = ACTIONS(53),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(37),
    [anon_sym_publish] = ACTIONS(19),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(61),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [sym_float] = ACTIONS(174),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(172),
    [sym_double] = ACTIONS(174),
    [sym_binary] = ACTIONS(174),
    [sym_identifier] = ACTIONS(172),
    [sym_oct] = ACTIONS(172),
    [sym_long] = ACTIONS(174),
    [sym_hex] = ACTIONS(174),
    [sym_integer] = ACTIONS(172),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(182),
    [sym_integer] = ACTIONS(184),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(184),
    [sym_double] = ACTIONS(182),
    [sym_binary] = ACTIONS(182),
    [sym_identifier] = ACTIONS(184),
    [sym_oct] = ACTIONS(184),
    [sym_long] = ACTIONS(182),
    [sym_hex] = ACTIONS(182),
    [anon_sym_DQUOTE] = ACTIONS(186),
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
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [sym__space] = ACTIONS(166),
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
    [anon_sym_DASH_DASH] = ACTIONS(168),
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
    [sym_float] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym__space] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(63),
    [sym_identifier] = ACTIONS(196),
    [sym_long] = ACTIONS(194),
    [sym_hex] = ACTIONS(194),
    [sym_integer] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_AMP] = ACTIONS(69),
    [sym_null] = ACTIONS(196),
    [sym_double] = ACTIONS(194),
    [sym_binary] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(63),
    [sym_oct] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(69),
  },
  [46] = {
    [anon_sym_DOT] = ACTIONS(198),
    [sym__space] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_PERCENT] = ACTIONS(202),
    [anon_sym_GT_EQ] = ACTIONS(200),
    [anon_sym_CARET] = ACTIONS(202),
    [anon_sym_PERCENT_EQ] = ACTIONS(200),
    [anon_sym_DASH_EQ] = ACTIONS(200),
    [anon_sym_PIPE_EQ] = ACTIONS(200),
    [anon_sym_EQ_EQ] = ACTIONS(200),
    [anon_sym_PLUS_EQ] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_LT_LT_EQ] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_STAR] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_COLON_EQ] = ACTIONS(200),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_STAR_EQ] = ACTIONS(200),
    [anon_sym_CARET_EQ] = ACTIONS(200),
    [anon_sym_AMP_AMP] = ACTIONS(200),
    [sym__space] = ACTIONS(200),
    [anon_sym_LT_EQ] = ACTIONS(200),
    [anon_sym_GT_GT] = ACTIONS(202),
    [anon_sym_PLUS_PLUS] = ACTIONS(200),
    [anon_sym_SLASH] = ACTIONS(202),
    [anon_sym_LT] = ACTIONS(202),
    [anon_sym_AMP] = ACTIONS(202),
    [anon_sym_SLASH_EQ] = ACTIONS(200),
    [anon_sym_GT_GT_EQ] = ACTIONS(200),
    [anon_sym_AMP_EQ] = ACTIONS(200),
    [anon_sym_BANG_EQ] = ACTIONS(200),
    [anon_sym_LT_LT] = ACTIONS(202),
    [anon_sym_DASH_DASH] = ACTIONS(200),
  },
  [48] = {
    [sym__escape_sequence] = STATE(103),
    [aux_sym_string_repeat1] = STATE(103),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(204),
    [anon_sym_BSLASHb] = ACTIONS(204),
    [anon_sym_BSLASHv] = ACTIONS(204),
    [anon_sym_BSLASHn] = ACTIONS(204),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(204),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(204),
    [anon_sym_BSLASH0] = ACTIONS(204),
    [anon_sym_BSLASHr] = ACTIONS(204),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(204),
    [aux_sym_string_token1] = ACTIONS(206),
    [anon_sym_BSLASHa] = ACTIONS(204),
    [anon_sym_BSLASHt] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(208),
  },
  [49] = {
    [anon_sym_DOT] = ACTIONS(210),
    [sym__space] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_LPAREN] = ACTIONS(212),
    [sym_is_declare] = ACTIONS(212),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_s8] = ACTIONS(212),
    [anon_sym_u64] = ACTIONS(212),
    [anon_sym_s32] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_float] = ACTIONS(214),
    [anon_sym_section] = ACTIONS(212),
    [anon_sym_private] = ACTIONS(212),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS_DASH] = ACTIONS(214),
    [anon_sym_i8] = ACTIONS(212),
    [anon_sym_u16] = ACTIONS(212),
    [anon_sym_enum] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(214),
    [sym_null] = ACTIONS(212),
    [sym_is_external] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(212),
    [anon_sym_while] = ACTIONS(212),
    [anon_sym_f32] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [sym_oct] = ACTIONS(212),
    [sym_double] = ACTIONS(214),
    [sym_binary] = ACTIONS(214),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(214),
    [anon_sym_protected] = ACTIONS(212),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(212),
    [anon_sym_u32] = ACTIONS(212),
    [anon_sym_i64] = ACTIONS(212),
    [anon_sym_module] = ACTIONS(212),
    [anon_sym_function] = ACTIONS(212),
    [anon_sym_if] = ACTIONS(212),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_switch] = ACTIONS(212),
    [anon_sym_f64] = ACTIONS(212),
    [sym_integer] = ACTIONS(212),
    [anon_sym_s16] = ACTIONS(212),
    [sym_long] = ACTIONS(214),
    [sym_hex] = ACTIONS(214),
    [anon_sym_return] = ACTIONS(212),
    [anon_sym_goto] = ACTIONS(212),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(214),
    [anon_sym_publish] = ACTIONS(212),
    [sym_readonly] = ACTIONS(212),
    [anon_sym_SLASH_STAR] = ACTIONS(214),
    [anon_sym_i32] = ACTIONS(212),
    [anon_sym_u8] = ACTIONS(212),
    [anon_sym_end] = ACTIONS(212),
    [anon_sym_method] = ACTIONS(212),
  },
  [51] = {
    [sym__block_comment_plus] = STATE(105),
    [aux_sym__block_comment_plus_repeat1] = STATE(105),
    [sym__block_comment_star] = STATE(105),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(216),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(218),
  },
  [52] = {
    [sym__block_comment_plus] = STATE(107),
    [aux_sym__block_comment_star_repeat1] = STATE(107),
    [sym__block_comment_star] = STATE(107),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(220),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(222),
  },
  [53] = {
    [anon_sym_LPAREN] = ACTIONS(224),
    [sym_is_declare] = ACTIONS(224),
    [anon_sym_case] = ACTIONS(224),
    [anon_sym_s8] = ACTIONS(224),
    [anon_sym_u64] = ACTIONS(224),
    [anon_sym_s32] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [sym_float] = ACTIONS(226),
    [anon_sym_section] = ACTIONS(224),
    [anon_sym_private] = ACTIONS(224),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS_DASH] = ACTIONS(226),
    [anon_sym_i8] = ACTIONS(224),
    [anon_sym_u16] = ACTIONS(224),
    [anon_sym_enum] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(226),
    [sym_null] = ACTIONS(224),
    [sym_is_external] = ACTIONS(224),
    [anon_sym_default] = ACTIONS(224),
    [anon_sym_while] = ACTIONS(224),
    [anon_sym_f32] = ACTIONS(224),
    [anon_sym_SQUOTE] = ACTIONS(226),
    [sym_oct] = ACTIONS(224),
    [sym_double] = ACTIONS(226),
    [sym_binary] = ACTIONS(226),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(226),
    [anon_sym_protected] = ACTIONS(224),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(224),
    [anon_sym_u32] = ACTIONS(224),
    [anon_sym_i64] = ACTIONS(224),
    [anon_sym_module] = ACTIONS(224),
    [anon_sym_function] = ACTIONS(224),
    [anon_sym_if] = ACTIONS(224),
    [sym_identifier] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(224),
    [anon_sym_f64] = ACTIONS(224),
    [sym_integer] = ACTIONS(224),
    [anon_sym_s16] = ACTIONS(224),
    [sym_long] = ACTIONS(226),
    [sym_hex] = ACTIONS(226),
    [anon_sym_return] = ACTIONS(224),
    [anon_sym_goto] = ACTIONS(224),
    [ts_builtin_sym_end] = ACTIONS(226),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(226),
    [anon_sym_publish] = ACTIONS(224),
    [sym_readonly] = ACTIONS(224),
    [anon_sym_SLASH_STAR] = ACTIONS(226),
    [anon_sym_i32] = ACTIONS(224),
    [anon_sym_u8] = ACTIONS(224),
    [anon_sym_end] = ACTIONS(224),
    [anon_sym_method] = ACTIONS(224),
  },
  [54] = {
    [sym__block_comment_plus] = STATE(109),
    [aux_sym__block_comment_plus_repeat1] = STATE(109),
    [sym__block_comment_star] = STATE(109),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(228),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(230),
  },
  [55] = {
    [sym__enum_element] = STATE(111),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(232),
  },
  [56] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(113),
    [anon_sym_RBRACE] = ACTIONS(234),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(236),
  },
  [57] = {
    [anon_sym_RBRACE] = ACTIONS(238),
    [sym__space] = ACTIONS(3),
  },
  [58] = {
    [aux_sym_assignment_expression_repeat1] = STATE(81),
    [sym_assignment_op] = STATE(82),
    [anon_sym_RBRACE] = ACTIONS(240),
    [anon_sym_STAR_EQ] = ACTIONS(150),
    [anon_sym_CARET_EQ] = ACTIONS(150),
    [sym__space] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_PERCENT_EQ] = ACTIONS(150),
    [anon_sym_DASH_EQ] = ACTIONS(150),
    [anon_sym_PIPE_EQ] = ACTIONS(150),
    [anon_sym_PLUS_EQ] = ACTIONS(150),
    [anon_sym_LT_LT_EQ] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(240),
    [anon_sym_SLASH_EQ] = ACTIONS(150),
    [anon_sym_GT_GT_EQ] = ACTIONS(150),
    [anon_sym_AMP_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(150),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
  },
  [60] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(244),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(246),
    [sym__space] = ACTIONS(3),
  },
  [62] = {
    [sym_variable_definition] = STATE(118),
    [sym_access_control] = STATE(119),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(36),
    [sym__base_type] = STATE(37),
    [sym__comma_list_variables] = STATE(120),
    [anon_sym_protected] = ACTIONS(248),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(250),
    [anon_sym_publish] = ACTIONS(248),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [63] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(252),
  },
  [64] = {
    [aux_sym_compound_macro_repeat1] = STATE(122),
    [sym_parameter_list] = STATE(123),
    [anon_sym_DOT] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym__space] = ACTIONS(256),
  },
  [65] = {
    [anon_sym_DOT] = ACTIONS(254),
    [sym__space] = ACTIONS(3),
  },
  [66] = {
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
    [sym_statement] = STATE(125),
    [sym_end_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_float] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(9),
    [sym__space] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(17),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(45),
    [sym_long] = ACTIONS(13),
    [anon_sym_switch] = ACTIONS(47),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(258),
    [anon_sym_goto] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(27),
    [sym_null] = ACTIONS(29),
    [anon_sym_default] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(33),
    [sym_double] = ACTIONS(13),
    [sym_oct] = ACTIONS(29),
    [sym_binary] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(61),
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
    [anon_sym_DOT] = ACTIONS(266),
    [sym__space] = ACTIONS(3),
  },
  [70] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(268),
  },
  [71] = {
    [sym__block_comment_plus] = STATE(128),
    [aux_sym__block_comment_plus_repeat1] = STATE(128),
    [sym__block_comment_star] = STATE(128),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(270),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(272),
  },
  [72] = {
    [sym__block_comment_plus] = STATE(130),
    [aux_sym__block_comment_star_repeat1] = STATE(130),
    [sym__block_comment_star] = STATE(130),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(274),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(276),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(278),
    [sym_is_declare] = ACTIONS(278),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_s8] = ACTIONS(278),
    [anon_sym_u64] = ACTIONS(278),
    [anon_sym_s32] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym_float] = ACTIONS(280),
    [anon_sym_section] = ACTIONS(278),
    [anon_sym_private] = ACTIONS(278),
    [anon_sym_SLASH_SLASH] = ACTIONS(278),
    [anon_sym_PLUS_DASH] = ACTIONS(280),
    [anon_sym_i8] = ACTIONS(278),
    [anon_sym_u16] = ACTIONS(278),
    [anon_sym_enum] = ACTIONS(278),
    [anon_sym_LBRACE] = ACTIONS(280),
    [sym_null] = ACTIONS(278),
    [sym_is_external] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_while] = ACTIONS(278),
    [anon_sym_f32] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [sym_oct] = ACTIONS(278),
    [sym_double] = ACTIONS(280),
    [sym_binary] = ACTIONS(280),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(280),
    [anon_sym_protected] = ACTIONS(278),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(278),
    [anon_sym_u32] = ACTIONS(278),
    [anon_sym_i64] = ACTIONS(278),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_function] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [sym_identifier] = ACTIONS(278),
    [anon_sym_switch] = ACTIONS(278),
    [anon_sym_f64] = ACTIONS(278),
    [sym_integer] = ACTIONS(278),
    [anon_sym_s16] = ACTIONS(278),
    [sym_long] = ACTIONS(280),
    [sym_hex] = ACTIONS(280),
    [anon_sym_return] = ACTIONS(278),
    [anon_sym_goto] = ACTIONS(278),
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(280),
    [anon_sym_publish] = ACTIONS(278),
    [sym_readonly] = ACTIONS(278),
    [anon_sym_SLASH_STAR] = ACTIONS(280),
    [anon_sym_i32] = ACTIONS(278),
    [anon_sym_u8] = ACTIONS(278),
    [anon_sym_end] = ACTIONS(278),
    [anon_sym_method] = ACTIONS(278),
  },
  [74] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(284),
  },
  [75] = {
    [anon_sym_DOT] = ACTIONS(286),
    [sym__space] = ACTIONS(3),
  },
  [76] = {
    [aux_sym_compound_macro_repeat1] = STATE(64),
    [sym_parameter_list] = STATE(65),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(109),
    [sym__space] = ACTIONS(256),
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
    [sym_identifier] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
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
    [anon_sym_SQUOTE] = ACTIONS(294),
    [sym_integer] = ACTIONS(292),
    [anon_sym_LBRACE] = ACTIONS(294),
    [sym_float] = ACTIONS(294),
    [sym_null] = ACTIONS(292),
    [sym_double] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(294),
    [sym_identifier] = ACTIONS(292),
    [sym_oct] = ACTIONS(292),
    [sym_long] = ACTIONS(294),
    [sym_hex] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [sym_null] = ACTIONS(302),
    [sym_double] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(298),
    [sym_identifier] = ACTIONS(302),
    [sym_oct] = ACTIONS(302),
    [sym_long] = ACTIONS(298),
    [sym_hex] = ACTIONS(298),
    [sym_integer] = ACTIONS(302),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(304),
    [sym_is_declare] = ACTIONS(304),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_s8] = ACTIONS(304),
    [anon_sym_u64] = ACTIONS(304),
    [anon_sym_s32] = ACTIONS(304),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym_float] = ACTIONS(306),
    [anon_sym_section] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_SLASH_SLASH] = ACTIONS(304),
    [anon_sym_PLUS_DASH] = ACTIONS(306),
    [anon_sym_i8] = ACTIONS(304),
    [anon_sym_u16] = ACTIONS(304),
    [anon_sym_enum] = ACTIONS(304),
    [anon_sym_LBRACE] = ACTIONS(306),
    [sym_null] = ACTIONS(304),
    [sym_is_external] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_f32] = ACTIONS(304),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [sym_oct] = ACTIONS(304),
    [sym_double] = ACTIONS(306),
    [sym_binary] = ACTIONS(306),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(306),
    [anon_sym_protected] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(304),
    [anon_sym_u32] = ACTIONS(304),
    [anon_sym_i64] = ACTIONS(304),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_function] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [anon_sym_switch] = ACTIONS(304),
    [anon_sym_f64] = ACTIONS(304),
    [sym_integer] = ACTIONS(304),
    [anon_sym_s16] = ACTIONS(304),
    [sym_long] = ACTIONS(306),
    [sym_hex] = ACTIONS(306),
    [anon_sym_return] = ACTIONS(304),
    [anon_sym_goto] = ACTIONS(304),
    [ts_builtin_sym_end] = ACTIONS(306),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(306),
    [anon_sym_publish] = ACTIONS(304),
    [sym_readonly] = ACTIONS(304),
    [anon_sym_SLASH_STAR] = ACTIONS(306),
    [anon_sym_i32] = ACTIONS(304),
    [anon_sym_u8] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_method] = ACTIONS(304),
  },
  [84] = {
    [sym_parameter_list] = STATE(140),
    [sym_return_list] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(109),
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
    [sym_identifier] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(316),
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
    [sym_identifier] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(162),
    [sym__space] = ACTIONS(3),
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
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(324),
  },
  [91] = {
    [anon_sym_RBRACE] = ACTIONS(326),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_DOT] = ACTIONS(326),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(326),
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
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym_float] = ACTIONS(343),
    [anon_sym_section] = ACTIONS(346),
    [anon_sym_private] = ACTIONS(349),
    [anon_sym_SLASH_SLASH] = ACTIONS(352),
    [anon_sym_PLUS_DASH] = ACTIONS(355),
    [anon_sym_i8] = ACTIONS(337),
    [anon_sym_u16] = ACTIONS(337),
    [anon_sym_enum] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(361),
    [sym_null] = ACTIONS(364),
    [sym_is_external] = ACTIONS(331),
    [anon_sym_default] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(370),
    [anon_sym_f32] = ACTIONS(337),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [sym_oct] = ACTIONS(364),
    [sym_double] = ACTIONS(343),
    [sym_binary] = ACTIONS(343),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(376),
    [anon_sym_protected] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(337),
    [anon_sym_u32] = ACTIONS(337),
    [anon_sym_i64] = ACTIONS(337),
    [anon_sym_module] = ACTIONS(379),
    [anon_sym_function] = ACTIONS(382),
    [anon_sym_if] = ACTIONS(385),
    [sym_identifier] = ACTIONS(388),
    [anon_sym_switch] = ACTIONS(391),
    [anon_sym_f64] = ACTIONS(337),
    [sym_integer] = ACTIONS(364),
    [anon_sym_s16] = ACTIONS(337),
    [sym_long] = ACTIONS(343),
    [sym_hex] = ACTIONS(343),
    [anon_sym_return] = ACTIONS(394),
    [anon_sym_goto] = ACTIONS(397),
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(376),
    [anon_sym_publish] = ACTIONS(349),
    [sym_readonly] = ACTIONS(402),
    [anon_sym_SLASH_STAR] = ACTIONS(405),
    [anon_sym_i32] = ACTIONS(337),
    [anon_sym_u8] = ACTIONS(337),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_method] = ACTIONS(411),
  },
  [93] = {
    [anon_sym_RBRACE] = ACTIONS(414),
    [anon_sym_PERCENT] = ACTIONS(416),
    [anon_sym_GT_EQ] = ACTIONS(414),
    [anon_sym_CARET] = ACTIONS(416),
    [anon_sym_PERCENT_EQ] = ACTIONS(414),
    [anon_sym_DASH_EQ] = ACTIONS(414),
    [anon_sym_PIPE_EQ] = ACTIONS(414),
    [anon_sym_EQ_EQ] = ACTIONS(414),
    [anon_sym_PLUS_EQ] = ACTIONS(414),
    [anon_sym_PIPE_PIPE] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_LT_LT_EQ] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_STAR] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(416),
    [anon_sym_PLUS] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(416),
    [anon_sym_COLON_EQ] = ACTIONS(414),
    [anon_sym_DASH] = ACTIONS(416),
    [anon_sym_STAR_EQ] = ACTIONS(414),
    [anon_sym_CARET_EQ] = ACTIONS(414),
    [anon_sym_AMP_AMP] = ACTIONS(414),
    [sym__space] = ACTIONS(414),
    [anon_sym_LT_EQ] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(416),
    [anon_sym_PLUS_PLUS] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(416),
    [anon_sym_AMP] = ACTIONS(416),
    [anon_sym_SLASH_EQ] = ACTIONS(414),
    [anon_sym_GT_GT_EQ] = ACTIONS(414),
    [anon_sym_AMP_EQ] = ACTIONS(414),
    [anon_sym_BANG_EQ] = ACTIONS(414),
    [anon_sym_LT_LT] = ACTIONS(416),
    [anon_sym_DASH_DASH] = ACTIONS(414),
  },
  [94] = {
    [sym__escape_sequence] = STATE(149),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(418),
    [anon_sym_BSLASHb] = ACTIONS(418),
    [anon_sym_BSLASHv] = ACTIONS(418),
    [anon_sym_BSLASHn] = ACTIONS(418),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(418),
    [aux_sym_character_token1] = ACTIONS(420),
    [anon_sym_BSLASHf] = ACTIONS(418),
    [anon_sym_BSLASH0] = ACTIONS(418),
    [anon_sym_BSLASHr] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(418),
    [anon_sym_BSLASHa] = ACTIONS(418),
    [anon_sym_BSLASHt] = ACTIONS(418),
  },
  [95] = {
    [sym__escape_sequence] = STATE(151),
    [aux_sym_string_repeat1] = STATE(151),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(422),
    [anon_sym_BSLASHb] = ACTIONS(422),
    [anon_sym_BSLASHv] = ACTIONS(422),
    [anon_sym_BSLASHn] = ACTIONS(422),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(422),
    [anon_sym_BSLASH0] = ACTIONS(422),
    [anon_sym_BSLASHr] = ACTIONS(422),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(422),
    [aux_sym_string_token1] = ACTIONS(424),
    [anon_sym_BSLASHa] = ACTIONS(422),
    [anon_sym_BSLASHt] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(426),
  },
  [96] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(428),
  },
  [97] = {
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_SQUOTE] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(432),
    [sym_float] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(430),
    [sym_double] = ACTIONS(432),
    [sym_binary] = ACTIONS(432),
    [sym_identifier] = ACTIONS(430),
    [sym_oct] = ACTIONS(430),
    [sym_long] = ACTIONS(432),
    [sym_hex] = ACTIONS(432),
    [sym_integer] = ACTIONS(430),
  },
  [98] = {
    [sym__number] = STATE(153),
    [sym_string] = STATE(153),
    [sym_character] = STATE(153),
    [sym__value] = STATE(153),
    [sym__literal] = STATE(153),
    [sym_group_expression] = STATE(153),
    [anon_sym_LPAREN] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(434),
    [sym_integer] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(436),
    [sym_double] = ACTIONS(434),
    [sym_binary] = ACTIONS(434),
    [sym_identifier] = ACTIONS(436),
    [sym_oct] = ACTIONS(436),
    [sym_long] = ACTIONS(434),
    [sym_hex] = ACTIONS(434),
    [anon_sym_DQUOTE] = ACTIONS(186),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(440),
    [sym_integer] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(442),
    [sym_double] = ACTIONS(440),
    [sym_binary] = ACTIONS(440),
    [sym_identifier] = ACTIONS(442),
    [sym_oct] = ACTIONS(442),
    [sym_long] = ACTIONS(440),
    [sym_hex] = ACTIONS(440),
    [anon_sym_DQUOTE] = ACTIONS(186),
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
    [anon_sym_AMP_AMP] = ACTIONS(190),
    [sym__space] = ACTIONS(166),
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
    [anon_sym_DASH_DASH] = ACTIONS(168),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(444),
    [anon_sym_CARET] = ACTIONS(446),
    [anon_sym_PERCENT_EQ] = ACTIONS(444),
    [anon_sym_DASH_EQ] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(444),
    [anon_sym_PLUS_EQ] = ACTIONS(444),
    [anon_sym_PIPE_PIPE] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [anon_sym_COLON_EQ] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(444),
    [anon_sym_AMP_AMP] = ACTIONS(444),
    [sym__space] = ACTIONS(444),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_GT_GT] = ACTIONS(446),
    [anon_sym_PLUS_PLUS] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_LT] = ACTIONS(446),
    [anon_sym_AMP] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(444),
    [anon_sym_AMP_EQ] = ACTIONS(444),
    [anon_sym_BANG_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(446),
    [anon_sym_DASH_DASH] = ACTIONS(444),
  },
  [103] = {
    [sym__escape_sequence] = STATE(103),
    [aux_sym_string_repeat1] = STATE(103),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(448),
    [anon_sym_BSLASHb] = ACTIONS(448),
    [anon_sym_BSLASHv] = ACTIONS(448),
    [anon_sym_BSLASHn] = ACTIONS(448),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(448),
    [anon_sym_BSLASH0] = ACTIONS(448),
    [anon_sym_BSLASHr] = ACTIONS(448),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(448),
    [aux_sym_string_token1] = ACTIONS(451),
    [anon_sym_BSLASHa] = ACTIONS(448),
    [anon_sym_BSLASHt] = ACTIONS(448),
    [anon_sym_DQUOTE] = ACTIONS(454),
  },
  [104] = {
    [anon_sym_PLUS_DASH] = ACTIONS(226),
    [anon_sym_SLASH_STAR] = ACTIONS(226),
    [anon_sym_DASH_PLUS] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(224),
  },
  [105] = {
    [sym__block_comment_plus] = STATE(109),
    [aux_sym__block_comment_plus_repeat1] = STATE(109),
    [sym__block_comment_star] = STATE(109),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(456),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(230),
  },
  [106] = {
    [anon_sym_PLUS_DASH] = ACTIONS(280),
    [anon_sym_SLASH_STAR] = ACTIONS(280),
    [anon_sym_DASH_PLUS] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(278),
  },
  [107] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(284),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(460),
    [sym_is_declare] = ACTIONS(460),
    [anon_sym_case] = ACTIONS(460),
    [anon_sym_s8] = ACTIONS(460),
    [anon_sym_u64] = ACTIONS(460),
    [anon_sym_s32] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(462),
    [sym_float] = ACTIONS(462),
    [anon_sym_section] = ACTIONS(460),
    [anon_sym_private] = ACTIONS(460),
    [anon_sym_SLASH_SLASH] = ACTIONS(460),
    [anon_sym_PLUS_DASH] = ACTIONS(462),
    [anon_sym_i8] = ACTIONS(460),
    [anon_sym_u16] = ACTIONS(460),
    [anon_sym_enum] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(462),
    [sym_null] = ACTIONS(460),
    [sym_is_external] = ACTIONS(460),
    [anon_sym_default] = ACTIONS(460),
    [anon_sym_while] = ACTIONS(460),
    [anon_sym_f32] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(462),
    [sym_oct] = ACTIONS(460),
    [sym_double] = ACTIONS(462),
    [sym_binary] = ACTIONS(462),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(462),
    [anon_sym_protected] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(460),
    [anon_sym_u32] = ACTIONS(460),
    [anon_sym_i64] = ACTIONS(460),
    [anon_sym_module] = ACTIONS(460),
    [anon_sym_function] = ACTIONS(460),
    [anon_sym_if] = ACTIONS(460),
    [sym_identifier] = ACTIONS(460),
    [anon_sym_switch] = ACTIONS(460),
    [anon_sym_f64] = ACTIONS(460),
    [sym_integer] = ACTIONS(460),
    [anon_sym_s16] = ACTIONS(460),
    [sym_long] = ACTIONS(462),
    [sym_hex] = ACTIONS(462),
    [anon_sym_return] = ACTIONS(460),
    [anon_sym_goto] = ACTIONS(460),
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(462),
    [anon_sym_publish] = ACTIONS(460),
    [sym_readonly] = ACTIONS(460),
    [anon_sym_SLASH_STAR] = ACTIONS(462),
    [anon_sym_i32] = ACTIONS(460),
    [anon_sym_u8] = ACTIONS(460),
    [anon_sym_end] = ACTIONS(460),
    [anon_sym_method] = ACTIONS(460),
  },
  [109] = {
    [sym__block_comment_plus] = STATE(109),
    [aux_sym__block_comment_plus_repeat1] = STATE(109),
    [sym__block_comment_star] = STATE(109),
    [anon_sym_PLUS_DASH] = ACTIONS(464),
    [anon_sym_SLASH_STAR] = ACTIONS(467),
    [anon_sym_DASH_PLUS] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(472),
  },
  [110] = {
    [sym_static_assignment] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_COLON_EQ] = ACTIONS(314),
  },
  [111] = {
    [aux_sym_enum_definition_repeat1] = STATE(162),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(479),
  },
  [112] = {
    [sym_assignment_expression] = STATE(163),
    [sym__assignment_or_collection_or_value] = STATE(163),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(58),
    [sym_collection] = STATE(58),
    [sym__number] = STATE(38),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [sym_group_expression] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_null] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_oct] = ACTIONS(29),
    [sym_long] = ACTIONS(13),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(29),
  },
  [113] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(236),
  },
  [114] = {
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_STAR_EQ] = ACTIONS(483),
    [anon_sym_CARET_EQ] = ACTIONS(483),
    [sym__space] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_PERCENT_EQ] = ACTIONS(483),
    [anon_sym_DASH_EQ] = ACTIONS(483),
    [anon_sym_PIPE_EQ] = ACTIONS(483),
    [anon_sym_PLUS_EQ] = ACTIONS(483),
    [anon_sym_LT_LT_EQ] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(483),
    [anon_sym_GT_GT_EQ] = ACTIONS(483),
    [anon_sym_AMP_EQ] = ACTIONS(483),
    [anon_sym_COLON_EQ] = ACTIONS(483),
  },
  [115] = {
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(485),
    [anon_sym_CARET] = ACTIONS(487),
    [anon_sym_PERCENT_EQ] = ACTIONS(485),
    [anon_sym_DASH_EQ] = ACTIONS(485),
    [anon_sym_PIPE_EQ] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(485),
    [anon_sym_PLUS_EQ] = ACTIONS(485),
    [anon_sym_PIPE_PIPE] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_LT_LT_EQ] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_DOT] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_COLON_EQ] = ACTIONS(485),
    [anon_sym_DASH] = ACTIONS(487),
    [anon_sym_STAR_EQ] = ACTIONS(485),
    [anon_sym_CARET_EQ] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(485),
    [sym__space] = ACTIONS(485),
    [anon_sym_LT_EQ] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(487),
    [anon_sym_PLUS_PLUS] = ACTIONS(485),
    [anon_sym_SLASH] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(487),
    [anon_sym_AMP] = ACTIONS(487),
    [anon_sym_SLASH_EQ] = ACTIONS(485),
    [anon_sym_GT_GT_EQ] = ACTIONS(485),
    [anon_sym_AMP_EQ] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(485),
    [anon_sym_LT_LT] = ACTIONS(487),
    [anon_sym_DASH_DASH] = ACTIONS(485),
  },
  [116] = {
    [anon_sym_s8] = ACTIONS(85),
    [anon_sym_u64] = ACTIONS(85),
    [anon_sym_s32] = ACTIONS(85),
    [anon_sym_i16] = ACTIONS(85),
    [anon_sym_u32] = ACTIONS(85),
    [anon_sym_i64] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_f64] = ACTIONS(85),
    [anon_sym_s16] = ACTIONS(85),
    [anon_sym_i8] = ACTIONS(85),
    [anon_sym_u16] = ACTIONS(85),
    [sym_readonly] = ACTIONS(85),
    [anon_sym_f32] = ACTIONS(85),
    [anon_sym_i32] = ACTIONS(85),
    [anon_sym_u8] = ACTIONS(85),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(489),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(489),
  },
  [118] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(166),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(493),
  },
  [119] = {
    [sym__base_type] = STATE(37),
    [sym_primitive_type] = STATE(37),
    [sym_type] = STATE(70),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [sym_readonly] = ACTIONS(148),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [120] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [121] = {
    [sym__space] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
  },
  [122] = {
    [aux_sym_compound_macro_repeat1] = STATE(122),
    [sym__space] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(497),
  },
  [123] = {
    [anon_sym_DOT] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
  },
  [124] = {
    [anon_sym_case] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(504),
    [anon_sym_while] = ACTIONS(504),
    [anon_sym_module] = ACTIONS(504),
    [anon_sym_function] = ACTIONS(504),
    [anon_sym_if] = ACTIONS(504),
    [anon_sym_switch] = ACTIONS(504),
    [anon_sym_method] = ACTIONS(504),
  },
  [125] = {
    [anon_sym_DOT] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
  },
  [126] = {
    [sym_static_assignment] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(508),
  },
  [127] = {
    [anon_sym_PLUS_DASH] = ACTIONS(226),
    [anon_sym_SLASH_STAR] = ACTIONS(226),
    [anon_sym_STAR_SLASH] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(224),
  },
  [128] = {
    [sym__block_comment_plus] = STATE(109),
    [aux_sym__block_comment_plus_repeat1] = STATE(109),
    [sym__block_comment_star] = STATE(109),
    [anon_sym_PLUS_DASH] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [anon_sym_DASH_PLUS] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(230),
  },
  [129] = {
    [anon_sym_PLUS_DASH] = ACTIONS(280),
    [anon_sym_SLASH_STAR] = ACTIONS(280),
    [anon_sym_STAR_SLASH] = ACTIONS(280),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(278),
  },
  [130] = {
    [sym__block_comment_plus] = STATE(132),
    [aux_sym__block_comment_star_repeat1] = STATE(132),
    [sym__block_comment_star] = STATE(132),
    [anon_sym_PLUS_DASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [anon_sym_STAR_SLASH] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(284),
  },
  [131] = {
    [anon_sym_LPAREN] = ACTIONS(514),
    [sym_is_declare] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(514),
    [anon_sym_s8] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [sym_float] = ACTIONS(516),
    [anon_sym_section] = ACTIONS(514),
    [anon_sym_private] = ACTIONS(514),
    [anon_sym_SLASH_SLASH] = ACTIONS(514),
    [anon_sym_PLUS_DASH] = ACTIONS(516),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_null] = ACTIONS(514),
    [sym_is_external] = ACTIONS(514),
    [anon_sym_default] = ACTIONS(514),
    [anon_sym_while] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [sym_oct] = ACTIONS(514),
    [sym_double] = ACTIONS(516),
    [sym_binary] = ACTIONS(516),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(516),
    [anon_sym_protected] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(514),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_i64] = ACTIONS(514),
    [anon_sym_module] = ACTIONS(514),
    [anon_sym_function] = ACTIONS(514),
    [anon_sym_if] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [anon_sym_switch] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [sym_integer] = ACTIONS(514),
    [anon_sym_s16] = ACTIONS(514),
    [sym_long] = ACTIONS(516),
    [sym_hex] = ACTIONS(516),
    [anon_sym_return] = ACTIONS(514),
    [anon_sym_goto] = ACTIONS(514),
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(516),
    [anon_sym_publish] = ACTIONS(514),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_i32] = ACTIONS(514),
    [anon_sym_u8] = ACTIONS(514),
    [anon_sym_end] = ACTIONS(514),
    [anon_sym_method] = ACTIONS(514),
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
    [anon_sym_LPAREN] = ACTIONS(109),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [sym_null] = ACTIONS(540),
    [sym_double] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(538),
    [sym_identifier] = ACTIONS(540),
    [sym_oct] = ACTIONS(540),
    [sym_long] = ACTIONS(538),
    [sym_hex] = ACTIONS(538),
    [sym_integer] = ACTIONS(540),
  },
  [137] = {
    [sym_assignment_expression] = STATE(56),
    [sym__assignment_or_collection_or_value] = STATE(56),
    [sym_group_expression] = STATE(38),
    [sym_string] = STATE(38),
    [sym_character] = STATE(38),
    [sym__collection_or_value] = STATE(58),
    [sym_collection] = STATE(58),
    [sym__number] = STATE(38),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(175),
    [sym__value] = STATE(38),
    [sym__literal] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [sym_float] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(61),
    [sym_null] = ACTIONS(29),
    [sym_double] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(13),
    [sym_identifier] = ACTIONS(29),
    [sym_oct] = ACTIONS(29),
    [sym_long] = ACTIONS(13),
    [sym_hex] = ACTIONS(13),
    [sym_integer] = ACTIONS(29),
  },
  [138] = {
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(542),
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
    [sym_identifier] = ACTIONS(544),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(546),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(548),
    [anon_sym_LBRACE] = ACTIONS(300),
    [anon_sym_DQUOTE] = ACTIONS(186),
    [sym_null] = ACTIONS(550),
    [sym_double] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym_binary] = ACTIONS(548),
    [sym_identifier] = ACTIONS(550),
    [sym_oct] = ACTIONS(550),
    [sym_long] = ACTIONS(548),
    [sym_hex] = ACTIONS(548),
    [sym_integer] = ACTIONS(550),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(508),
  },
  [144] = {
    [sym_identifier] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
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
    [sym_identifier] = ACTIONS(556),
    [anon_sym_STAR] = ACTIONS(558),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(556),
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
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(568),
  },
  [150] = {
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(200),
  },
  [151] = {
    [sym__escape_sequence] = STATE(103),
    [aux_sym_string_repeat1] = STATE(103),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(204),
    [anon_sym_BSLASHb] = ACTIONS(204),
    [anon_sym_BSLASHv] = ACTIONS(204),
    [anon_sym_BSLASHn] = ACTIONS(204),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(204),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(204),
    [anon_sym_BSLASH0] = ACTIONS(204),
    [anon_sym_BSLASHr] = ACTIONS(204),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(204),
    [aux_sym_string_token1] = ACTIONS(206),
    [anon_sym_BSLASHa] = ACTIONS(204),
    [anon_sym_BSLASHt] = ACTIONS(204),
    [anon_sym_DQUOTE] = ACTIONS(570),
  },
  [152] = {
    [anon_sym_RBRACE] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(574),
    [anon_sym_GT_EQ] = ACTIONS(572),
    [anon_sym_CARET] = ACTIONS(574),
    [anon_sym_PERCENT_EQ] = ACTIONS(572),
    [anon_sym_DASH_EQ] = ACTIONS(572),
    [anon_sym_PIPE_EQ] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(572),
    [anon_sym_PLUS_EQ] = ACTIONS(572),
    [anon_sym_PIPE_PIPE] = ACTIONS(572),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_LT_LT_EQ] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(574),
    [anon_sym_COLON_EQ] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(574),
    [anon_sym_STAR_EQ] = ACTIONS(572),
    [anon_sym_CARET_EQ] = ACTIONS(572),
    [anon_sym_AMP_AMP] = ACTIONS(572),
    [sym__space] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(574),
    [anon_sym_PLUS_PLUS] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(574),
    [anon_sym_LT] = ACTIONS(574),
    [anon_sym_AMP] = ACTIONS(574),
    [anon_sym_SLASH_EQ] = ACTIONS(572),
    [anon_sym_GT_GT_EQ] = ACTIONS(572),
    [anon_sym_AMP_EQ] = ACTIONS(572),
    [anon_sym_BANG_EQ] = ACTIONS(572),
    [anon_sym_LT_LT] = ACTIONS(574),
    [anon_sym_DASH_DASH] = ACTIONS(572),
  },
  [153] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(576),
  },
  [154] = {
    [anon_sym_LPAREN] = ACTIONS(416),
    [sym_float] = ACTIONS(414),
    [anon_sym_case] = ACTIONS(416),
    [anon_sym_RBRACE] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(416),
    [sym_identifier] = ACTIONS(416),
    [anon_sym_if] = ACTIONS(416),
    [sym_long] = ACTIONS(414),
    [anon_sym_switch] = ACTIONS(416),
    [sym_hex] = ACTIONS(414),
    [sym_integer] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_return] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_goto] = ACTIONS(416),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(416),
    [anon_sym_while] = ACTIONS(416),
    [sym_null] = ACTIONS(416),
    [sym_oct] = ACTIONS(416),
    [sym_double] = ACTIONS(414),
    [sym_binary] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [anon_sym_end] = ACTIONS(416),
    [anon_sym_DQUOTE] = ACTIONS(414),
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
    [anon_sym_SQUOTE] = ACTIONS(180),
    [sym_float] = ACTIONS(580),
    [sym_integer] = ACTIONS(582),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(582),
    [sym_double] = ACTIONS(580),
    [sym_binary] = ACTIONS(580),
    [sym_identifier] = ACTIONS(582),
    [sym_oct] = ACTIONS(582),
    [sym_long] = ACTIONS(580),
    [sym_hex] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(186),
  },
  [157] = {
    [anon_sym_PLUS_DASH] = ACTIONS(462),
    [anon_sym_SLASH_STAR] = ACTIONS(462),
    [anon_sym_DASH_PLUS] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(460),
  },
  [158] = {
    [anon_sym_PLUS_DASH] = ACTIONS(516),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_DASH_PLUS] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(514),
  },
  [159] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_COMMA] = ACTIONS(584),
  },
  [160] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(586),
  },
  [161] = {
    [sym__enum_element] = STATE(187),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(232),
  },
  [162] = {
    [aux_sym_enum_definition_repeat1] = STATE(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_COMMA] = ACTIONS(479),
  },
  [163] = {
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(590),
  },
  [164] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(164),
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(592),
  },
  [165] = {
    [sym_variable_definition] = STATE(190),
    [sym_access_control] = STATE(119),
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
    [sym_identifier] = ACTIONS(71),
    [anon_sym_private] = ACTIONS(248),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(248),
    [sym_readonly] = ACTIONS(55),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
  },
  [166] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_COMMA] = ACTIONS(493),
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
    [anon_sym_PLUS_DASH] = ACTIONS(462),
    [anon_sym_SLASH_STAR] = ACTIONS(462),
    [anon_sym_STAR_SLASH] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(460),
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
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(603),
  },
  [175] = {
    [anon_sym_RBRACE] = ACTIONS(605),
    [sym__space] = ACTIONS(3),
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
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_DOT] = ACTIONS(160),
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
    [sym_identifier] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(615),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_DOT] = ACTIONS(485),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(444),
  },
  [183] = {
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(619),
    [anon_sym_GT_EQ] = ACTIONS(617),
    [anon_sym_CARET] = ACTIONS(619),
    [anon_sym_PERCENT_EQ] = ACTIONS(617),
    [anon_sym_DASH_EQ] = ACTIONS(617),
    [anon_sym_PIPE_EQ] = ACTIONS(617),
    [anon_sym_EQ_EQ] = ACTIONS(617),
    [anon_sym_PLUS_EQ] = ACTIONS(617),
    [anon_sym_PIPE_PIPE] = ACTIONS(617),
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_LT_LT_EQ] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_STAR] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_PLUS] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_COLON_EQ] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(619),
    [anon_sym_STAR_EQ] = ACTIONS(617),
    [anon_sym_CARET_EQ] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(617),
    [sym__space] = ACTIONS(617),
    [anon_sym_LT_EQ] = ACTIONS(617),
    [anon_sym_GT_GT] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(617),
    [anon_sym_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(617),
    [anon_sym_GT_GT_EQ] = ACTIONS(617),
    [anon_sym_AMP_EQ] = ACTIONS(617),
    [anon_sym_BANG_EQ] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(617),
  },
  [184] = {
    [anon_sym_LPAREN] = ACTIONS(574),
    [sym_float] = ACTIONS(572),
    [anon_sym_case] = ACTIONS(574),
    [anon_sym_RBRACE] = ACTIONS(572),
    [sym__space] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(574),
    [sym_identifier] = ACTIONS(574),
    [anon_sym_if] = ACTIONS(574),
    [sym_long] = ACTIONS(572),
    [anon_sym_switch] = ACTIONS(574),
    [sym_hex] = ACTIONS(572),
    [sym_integer] = ACTIONS(574),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_SQUOTE] = ACTIONS(572),
    [anon_sym_return] = ACTIONS(574),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_goto] = ACTIONS(574),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_default] = ACTIONS(574),
    [anon_sym_while] = ACTIONS(574),
    [sym_null] = ACTIONS(574),
    [sym_oct] = ACTIONS(574),
    [sym_double] = ACTIONS(572),
    [sym_binary] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_end] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(572),
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
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(483),
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
    [sym_identifier] = ACTIONS(544),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_u16] = ACTIONS(11),
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
    [anon_sym_STAR] = ACTIONS(162),
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
    [anon_sym_LPAREN] = ACTIONS(619),
    [sym_float] = ACTIONS(617),
    [anon_sym_case] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
    [anon_sym_if] = ACTIONS(619),
    [sym_long] = ACTIONS(617),
    [anon_sym_switch] = ACTIONS(619),
    [sym_hex] = ACTIONS(617),
    [sym_integer] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_return] = ACTIONS(619),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_goto] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(617),
    [anon_sym_default] = ACTIONS(619),
    [anon_sym_while] = ACTIONS(619),
    [sym_null] = ACTIONS(619),
    [sym_oct] = ACTIONS(619),
    [sym_double] = ACTIONS(617),
    [sym_binary] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_end] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(617),
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
    [anon_sym_STAR] = ACTIONS(558),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(556),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(38),
  [15] = {.count = 1, .reusable = false}, SHIFT(26),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(38),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = false}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT(9),
  [39] = {.count = 1, .reusable = false}, SHIFT(16),
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
  [61] = {.count = 1, .reusable = true}, SHIFT(6),
  [63] = {.count = 1, .reusable = true}, SHIFT(40),
  [65] = {.count = 1, .reusable = true}, SHIFT(43),
  [67] = {.count = 1, .reusable = false}, SHIFT(43),
  [69] = {.count = 1, .reusable = false}, SHIFT(40),
  [71] = {.count = 1, .reusable = false}, SHIFT(37),
  [73] = {.count = 1, .reusable = true}, SHIFT(45),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(48),
  [79] = {.count = 1, .reusable = false}, SHIFT(48),
  [81] = {.count = 1, .reusable = true}, SHIFT(47),
  [83] = {.count = 1, .reusable = true}, SHIFT(49),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(50),
  [89] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [91] = {.count = 1, .reusable = true}, SHIFT(51),
  [93] = {.count = 1, .reusable = true}, SHIFT(52),
  [95] = {.count = 1, .reusable = true}, SHIFT(53),
  [97] = {.count = 1, .reusable = false}, SHIFT(54),
  [99] = {.count = 1, .reusable = true}, SHIFT(55),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = false}, SHIFT(60),
  [107] = {.count = 1, .reusable = true}, SHIFT(61),
  [109] = {.count = 1, .reusable = true}, SHIFT(62),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [113] = {.count = 2, .reusable = true}, REDUCE(sym__value, 1), SHIFT(63),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(69),
  [126] = {.count = 1, .reusable = true}, SHIFT(71),
  [128] = {.count = 1, .reusable = true}, SHIFT(72),
  [130] = {.count = 1, .reusable = true}, SHIFT(73),
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
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [162] = {.count = 1, .reusable = true}, SHIFT(86),
  [164] = {.count = 1, .reusable = true}, SHIFT(87),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [168] = {.count = 1, .reusable = true}, SHIFT(90),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(93),
  [178] = {.count = 1, .reusable = false}, SHIFT(45),
  [180] = {.count = 1, .reusable = true}, SHIFT(94),
  [182] = {.count = 1, .reusable = true}, SHIFT(96),
  [184] = {.count = 1, .reusable = false}, SHIFT(96),
  [186] = {.count = 1, .reusable = true}, SHIFT(95),
  [188] = {.count = 1, .reusable = false}, SHIFT(97),
  [190] = {.count = 1, .reusable = true}, SHIFT(97),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [194] = {.count = 1, .reusable = true}, SHIFT(101),
  [196] = {.count = 1, .reusable = false}, SHIFT(101),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(103),
  [206] = {.count = 1, .reusable = false}, SHIFT(103),
  [208] = {.count = 1, .reusable = true}, SHIFT(102),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(104),
  [218] = {.count = 1, .reusable = false}, SHIFT(105),
  [220] = {.count = 1, .reusable = true}, SHIFT(106),
  [222] = {.count = 1, .reusable = false}, SHIFT(107),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 2),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 2),
  [228] = {.count = 1, .reusable = true}, SHIFT(108),
  [230] = {.count = 1, .reusable = false}, SHIFT(109),
  [232] = {.count = 1, .reusable = true}, SHIFT(110),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [236] = {.count = 1, .reusable = true}, SHIFT(112),
  [238] = {.count = 1, .reusable = true}, SHIFT(114),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(115),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [248] = {.count = 1, .reusable = false}, SHIFT(116),
  [250] = {.count = 1, .reusable = true}, SHIFT(117),
  [252] = {.count = 1, .reusable = true}, SHIFT(121),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [256] = {.count = 1, .reusable = true}, SHIFT(63),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [260] = {.count = 1, .reusable = false}, SHIFT(124),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [268] = {.count = 1, .reusable = true}, SHIFT(126),
  [270] = {.count = 1, .reusable = true}, SHIFT(127),
  [272] = {.count = 1, .reusable = false}, SHIFT(128),
  [274] = {.count = 1, .reusable = true}, SHIFT(129),
  [276] = {.count = 1, .reusable = false}, SHIFT(130),
  [278] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 2),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 2),
  [282] = {.count = 1, .reusable = true}, SHIFT(131),
  [284] = {.count = 1, .reusable = false}, SHIFT(132),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [288] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [290] = {.count = 1, .reusable = true}, SHIFT(134),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [296] = {.count = 1, .reusable = true}, SHIFT(135),
  [298] = {.count = 1, .reusable = true}, SHIFT(138),
  [300] = {.count = 1, .reusable = true}, SHIFT(137),
  [302] = {.count = 1, .reusable = false}, SHIFT(138),
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
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [346] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [349] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [352] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [355] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [358] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [361] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [364] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [367] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [370] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [373] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [400] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [405] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [418] = {.count = 1, .reusable = true}, SHIFT(149),
  [420] = {.count = 1, .reusable = false}, SHIFT(149),
  [422] = {.count = 1, .reusable = true}, SHIFT(151),
  [424] = {.count = 1, .reusable = false}, SHIFT(151),
  [426] = {.count = 1, .reusable = true}, SHIFT(150),
  [428] = {.count = 1, .reusable = true}, SHIFT(152),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [434] = {.count = 1, .reusable = true}, SHIFT(153),
  [436] = {.count = 1, .reusable = false}, SHIFT(153),
  [438] = {.count = 1, .reusable = true}, SHIFT(154),
  [440] = {.count = 1, .reusable = true}, SHIFT(155),
  [442] = {.count = 1, .reusable = false}, SHIFT(155),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [448] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [451] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(103),
  [454] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [456] = {.count = 1, .reusable = true}, SHIFT(157),
  [458] = {.count = 1, .reusable = true}, SHIFT(158),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 3),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 3),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(51),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(52),
  [470] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [472] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(109),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [477] = {.count = 1, .reusable = true}, SHIFT(160),
  [479] = {.count = 1, .reusable = true}, SHIFT(161),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [493] = {.count = 1, .reusable = true}, SHIFT(165),
  [495] = {.count = 1, .reusable = true}, SHIFT(167),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(63),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [504] = {.count = 1, .reusable = true}, SHIFT(75),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [510] = {.count = 1, .reusable = true}, SHIFT(169),
  [512] = {.count = 1, .reusable = true}, SHIFT(170),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 3),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(71),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(72),
  [524] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [526] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(132),
  [529] = {.count = 1, .reusable = true}, SHIFT(171),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2),
  [535] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2), SHIFT_REPEAT(135),
  [538] = {.count = 1, .reusable = true}, SHIFT(174),
  [540] = {.count = 1, .reusable = false}, SHIFT(174),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [544] = {.count = 1, .reusable = false}, SHIFT(177),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(179),
  [550] = {.count = 1, .reusable = false}, SHIFT(179),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [554] = {.count = 1, .reusable = true}, SHIFT(180),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(86),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [565] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(87),
  [568] = {.count = 1, .reusable = true}, SHIFT(181),
  [570] = {.count = 1, .reusable = true}, SHIFT(182),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [576] = {.count = 1, .reusable = true}, SHIFT(183),
  [578] = {.count = 1, .reusable = true}, SHIFT(184),
  [580] = {.count = 1, .reusable = true}, SHIFT(185),
  [582] = {.count = 1, .reusable = false}, SHIFT(185),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [586] = {.count = 1, .reusable = true}, SHIFT(186),
  [588] = {.count = 1, .reusable = true}, SHIFT(188),
  [590] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(112),
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
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [621] = {.count = 1, .reusable = true}, SHIFT(199),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [625] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [627] = {.count = 1, .reusable = true}, SHIFT(200),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(161),
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
