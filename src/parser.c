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
#define STATE_COUNT 238
#define SYMBOL_COUNT 190
#define ALIAS_COUNT 0
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

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
  anon_sym_private = 14,
  anon_sym_protected = 15,
  anon_sym_DOT = 16,
  anon_sym_module = 17,
  anon_sym_end = 18,
  anon_sym_enum = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_function = 22,
  anon_sym_method = 23,
  sym_is_interface = 24,
  sym_is_overridable = 25,
  sym_is_override = 26,
  sym_is_primitive = 27,
  anon_sym_readonly = 28,
  anon_sym_writelimited = 29,
  anon_sym_private_write = 30,
  anon_sym_protected_write = 31,
  anon_sym_system_readwrite = 32,
  anon_sym_returns = 33,
  anon_sym_i8 = 34,
  anon_sym_i16 = 35,
  anon_sym_i32 = 36,
  anon_sym_i64 = 37,
  anon_sym_u8 = 38,
  anon_sym_u16 = 39,
  anon_sym_u32 = 40,
  anon_sym_u64 = 41,
  anon_sym_f32 = 42,
  anon_sym_f64 = 43,
  anon_sym_s8 = 44,
  anon_sym_s16 = 45,
  anon_sym_s32 = 46,
  anon_sym_STAR = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  sym_is_declare = 50,
  sym_is_external = 51,
  anon_sym_if = 52,
  anon_sym_while = 53,
  anon_sym_switch = 54,
  anon_sym_case = 55,
  anon_sym_default = 56,
  anon_sym_goto = 57,
  anon_sym_section = 58,
  anon_sym_COLON_EQ = 59,
  anon_sym_return = 60,
  sym_scope_op = 61,
  anon_sym_DOLLAR = 62,
  anon_sym_DOLLAR_DOLLAR = 63,
  anon_sym_DOLLAR_DOLLAR_DOLLAR = 64,
  anon_sym_DASH = 65,
  anon_sym_AMP = 66,
  anon_sym_BANG = 67,
  anon_sym_TILDE = 68,
  anon_sym_PLUS = 69,
  anon_sym_SLASH = 70,
  anon_sym_PERCENT = 71,
  anon_sym_PIPE = 72,
  anon_sym_CARET = 73,
  anon_sym_GT = 74,
  anon_sym_LT = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_LT_EQ = 77,
  anon_sym_BANG_EQ = 78,
  anon_sym_EQ_EQ = 79,
  anon_sym_AMP_AMP = 80,
  anon_sym_PIPE_PIPE = 81,
  anon_sym_GT_GT = 82,
  anon_sym_LT_LT = 83,
  anon_sym_PLUS_EQ = 84,
  anon_sym_DASH_EQ = 85,
  anon_sym_STAR_EQ = 86,
  anon_sym_SLASH_EQ = 87,
  anon_sym_PERCENT_EQ = 88,
  anon_sym_AMP_EQ = 89,
  anon_sym_PIPE_EQ = 90,
  anon_sym_CARET_EQ = 91,
  anon_sym_GT_GT_EQ = 92,
  anon_sym_LT_LT_EQ = 93,
  anon_sym_LBRACE = 94,
  anon_sym_RBRACE = 95,
  sym_null = 96,
  sym_identifier = 97,
  anon_sym_DQUOTE = 98,
  aux_sym_string_token1 = 99,
  anon_sym_SQUOTE = 100,
  aux_sym_character_token1 = 101,
  anon_sym_BSLASH_BSLASH = 102,
  anon_sym_BSLASH0 = 103,
  anon_sym_BSLASHa = 104,
  anon_sym_BSLASHb = 105,
  anon_sym_BSLASHf = 106,
  anon_sym_BSLASHn = 107,
  anon_sym_BSLASHr = 108,
  anon_sym_BSLASHt = 109,
  anon_sym_BSLASHv = 110,
  anon_sym_BSLASH_DQUOTE = 111,
  anon_sym_BSLASH_SQUOTE = 112,
  sym_oct = 113,
  sym_integer = 114,
  sym_long = 115,
  sym_float = 116,
  sym_double = 117,
  sym_hex = 118,
  sym_binary = 119,
  sym_source_file = 120,
  sym__block_comment_star = 121,
  sym__block_comment_plus = 122,
  sym__comment = 123,
  sym__comma_list_variables = 124,
  sym__comma_list_assignment_or_collection_or_value = 125,
  sym__comma_list_types = 126,
  sym_access_control = 127,
  sym__sentence = 128,
  sym_definition = 129,
  sym_module_definition = 130,
  sym_compound_extension = 131,
  sym_end_extension = 132,
  sym__enum_element = 133,
  sym_enum_definition = 134,
  sym_is_function = 135,
  sym_is_method = 136,
  sym__override = 137,
  sym_function_definition = 138,
  sym_readability = 139,
  sym_variable_definition = 140,
  sym_parameter_list = 141,
  sym_return_list = 142,
  sym_type = 143,
  sym__base_type = 144,
  sym_primitive_type = 145,
  sym_pointer = 146,
  sym_array = 147,
  sym_declaration_definition = 148,
  sym_statement = 149,
  sym_end_statement = 150,
  sym__control_flow_statement = 151,
  sym_goto_statement = 152,
  sym_section_statement = 153,
  sym_single_line_if_statement = 154,
  sym_if_statement = 155,
  sym_while_statement = 156,
  sym_switch_statement = 157,
  sym_case_statement = 158,
  sym_default_statement = 159,
  sym_static_assignment = 160,
  sym_expression_statement = 161,
  sym_return_statement = 162,
  sym_group_expression = 163,
  sym_assignment_expression = 164,
  sym_cast_ops = 165,
  sym_unary_op = 166,
  sym_binary_op = 167,
  sym_assignment_op = 168,
  sym_assignment_post_op = 169,
  sym__assignment_or_collection_or_value = 170,
  sym__collection_or_value = 171,
  sym_collection = 172,
  sym__value = 173,
  sym__literal = 174,
  sym_string = 175,
  sym_character = 176,
  sym__escape_sequence = 177,
  sym__number = 178,
  aux_sym_source_file_repeat1 = 179,
  aux_sym__block_comment_star_repeat1 = 180,
  aux_sym__block_comment_plus_repeat1 = 181,
  aux_sym__comma_list_variables_repeat1 = 182,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 183,
  aux_sym__comma_list_types_repeat1 = 184,
  aux_sym_compound_extension_repeat1 = 185,
  aux_sym_enum_definition_repeat1 = 186,
  aux_sym_type_repeat1 = 187,
  aux_sym_type_repeat2 = 188,
  aux_sym_string_repeat1 = 189,
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
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_DOT] = ".",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [sym_is_interface] = "is_interface",
  [sym_is_overridable] = "is_overridable",
  [sym_is_override] = "is_override",
  [sym_is_primitive] = "is_primitive",
  [anon_sym_readonly] = "readonly",
  [anon_sym_writelimited] = "writelimited",
  [anon_sym_private_write] = "private_write",
  [anon_sym_protected_write] = "protected_write",
  [anon_sym_system_readwrite] = "system_readwrite",
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
  [sym_scope_op] = "scope_op",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_DOLLAR] = "$$",
  [anon_sym_DOLLAR_DOLLAR_DOLLAR] = "$$$",
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
  [sym_compound_extension] = "compound_extension",
  [sym_end_extension] = "end_extension",
  [sym__enum_element] = "_enum_element",
  [sym_enum_definition] = "enum_definition",
  [sym_is_function] = "is_function",
  [sym_is_method] = "is_method",
  [sym__override] = "_override",
  [sym_function_definition] = "function_definition",
  [sym_readability] = "readability",
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
  [sym_cast_ops] = "cast_ops",
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
  [aux_sym_compound_extension_repeat1] = "compound_extension_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
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
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
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
  [sym_is_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_is_overridable] = {
    .visible = true,
    .named = true,
  },
  [sym_is_override] = {
    .visible = true,
    .named = true,
  },
  [sym_is_primitive] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writelimited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_system_readwrite] = {
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
  [sym_scope_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_DOLLAR_DOLLAR] = {
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
  [sym_compound_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_end_extension] = {
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
  [sym__override] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_readability] = {
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
  [sym_cast_ops] = {
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
  [aux_sym_compound_extension_repeat1] = {
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
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '0')
        ADVANCE(16);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(19);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == 'c')
        ADVANCE(25);
      if (lookahead == 'd')
        ADVANCE(26);
      if (lookahead == 'e')
        ADVANCE(27);
      if (lookahead == 'f')
        ADVANCE(28);
      if (lookahead == 'g')
        ADVANCE(29);
      if (lookahead == 'i')
        ADVANCE(30);
      if (lookahead == 'm')
        ADVANCE(31);
      if (lookahead == 'n')
        ADVANCE(32);
      if (lookahead == 'o')
        ADVANCE(33);
      if (lookahead == 'p')
        ADVANCE(34);
      if (lookahead == 'r')
        ADVANCE(35);
      if (lookahead == 's')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      if (lookahead == 'w')
        ADVANCE(38);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '~')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(47);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(49);
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(57);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == 'x')
        ADVANCE(64);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(66);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == ':')
        ADVANCE(67);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(69);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(72);
      if (lookahead == '>')
        ADVANCE(73);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '"')
        ADVANCE(74);
      if (lookahead == '\'')
        ADVANCE(75);
      if (lookahead == '0')
        ADVANCE(76);
      if (lookahead == '\\')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(81);
      if (lookahead == 'r')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(83);
      if (lookahead == 'v')
        ADVANCE(84);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(87);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'n')
        ADVANCE(88);
      if (lookahead == 'x')
        ADVANCE(89);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '3')
        ADVANCE(90);
      if (lookahead == '6')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(94);
      if (lookahead == '3')
        ADVANCE(95);
      if (lookahead == '6')
        ADVANCE(96);
      if (lookahead == '8')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(98);
      if (lookahead == 'n')
        ADVANCE(99);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'u')
        ADVANCE(102);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'r')
        ADVANCE(104);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(106);
      if (lookahead == '3')
        ADVANCE(107);
      if (lookahead == '8')
        ADVANCE(108);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'w')
        ADVANCE(110);
      if (lookahead == 'y')
        ADVANCE(111);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(112);
      if (lookahead == '3')
        ADVANCE(113);
      if (lookahead == '6')
        ADVANCE(114);
      if (lookahead == '8')
        ADVANCE(115);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'h')
        ADVANCE(116);
      if (lookahead == 'r')
        ADVANCE(117);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(118);
      if (lookahead == '|')
        ADVANCE(119);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '$')
        ADVANCE(120);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == ')')
        ADVANCE(122);
      if (lookahead == '.')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(124);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(125);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_scope_op);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(126);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(127);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 86:
      if (lookahead == 's')
        ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'c')
        ADVANCE(129);
      if (lookahead == 'f')
        ADVANCE(130);
      END_STATE();
    case 88:
      if (lookahead == 'd')
        ADVANCE(131);
      if (lookahead == 'u')
        ADVANCE(132);
      END_STATE();
    case 89:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == '2')
        ADVANCE(134);
      END_STATE();
    case 91:
      if (lookahead == '4')
        ADVANCE(135);
      END_STATE();
    case 92:
      if (lookahead == 'n')
        ADVANCE(136);
      END_STATE();
    case 93:
      if (lookahead == 't')
        ADVANCE(137);
      END_STATE();
    case 94:
      if (lookahead == '6')
        ADVANCE(138);
      END_STATE();
    case 95:
      if (lookahead == '2')
        ADVANCE(139);
      END_STATE();
    case 96:
      if (lookahead == '4')
        ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 99:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == 'd')
        ADVANCE(143);
      END_STATE();
    case 102:
      if (lookahead == 'l')
        ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'i')
        ADVANCE(146);
      if (lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 'a')
        ADVANCE(148);
      if (lookahead == 't')
        ADVANCE(149);
      END_STATE();
    case 106:
      if (lookahead == '6')
        ADVANCE(150);
      END_STATE();
    case 107:
      if (lookahead == '2')
        ADVANCE(151);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 109:
      if (lookahead == 'c')
        ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'i')
        ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 's')
        ADVANCE(154);
      END_STATE();
    case 112:
      if (lookahead == '6')
        ADVANCE(155);
      END_STATE();
    case 113:
      if (lookahead == '2')
        ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == '4')
        ADVANCE(157);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 116:
      if (lookahead == 'i')
        ADVANCE(158);
      END_STATE();
    case 117:
      if (lookahead == 'i')
        ADVANCE(159);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR_DOLLAR);
      END_STATE();
    case 121:
      if (lookahead == ')')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 123:
      if (lookahead == ')')
        ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 129:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 132:
      if (lookahead == 'm')
        ADVANCE(164);
      END_STATE();
    case 133:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 136:
      if (lookahead == 'c')
        ADVANCE(166);
      END_STATE();
    case 137:
      if (lookahead == 'o')
        ADVANCE(167);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 141:
      if (lookahead == 'e')
        ADVANCE(168);
      END_STATE();
    case 142:
      if (lookahead == 'h')
        ADVANCE(169);
      END_STATE();
    case 143:
      if (lookahead == 'u')
        ADVANCE(170);
      END_STATE();
    case 144:
      if (lookahead == 'l')
        ADVANCE(171);
      END_STATE();
    case 145:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 146:
      if (lookahead == 'm')
        ADVANCE(173);
      if (lookahead == 'v')
        ADVANCE(174);
      END_STATE();
    case 147:
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 148:
      if (lookahead == 'd')
        ADVANCE(176);
      END_STATE();
    case 149:
      if (lookahead == 'u')
        ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(178);
      END_STATE();
    case 153:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(181);
      END_STATE();
    case 159:
      if (lookahead == 't')
        ADVANCE(182);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'u')
        ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 165:
      if (lookahead == 'r')
        ADVANCE(185);
      END_STATE();
    case 166:
      if (lookahead == 't')
        ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 168:
      if (lookahead == 'r')
        ADVANCE(187);
      END_STATE();
    case 169:
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(189);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 172:
      if (lookahead == 'r')
        ADVANCE(190);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(191);
      END_STATE();
    case 174:
      if (lookahead == 'a')
        ADVANCE(192);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'o')
        ADVANCE(194);
      END_STATE();
    case 177:
      if (lookahead == 'r')
        ADVANCE(195);
      END_STATE();
    case 178:
      if (lookahead == 'i')
        ADVANCE(196);
      END_STATE();
    case 179:
      if (lookahead == 'c')
        ADVANCE(197);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 183:
      if (lookahead == 'r')
        ADVANCE(201);
      END_STATE();
    case 184:
      if (lookahead == 'l')
        ADVANCE(202);
      END_STATE();
    case 185:
      if (lookahead == 'n')
        ADVANCE(203);
      END_STATE();
    case 186:
      if (lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 187:
      if (lookahead == 'f')
        ADVANCE(205);
      END_STATE();
    case 188:
      if (lookahead == 'd')
        ADVANCE(206);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(207);
      END_STATE();
    case 190:
      if (lookahead == 'i')
        ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(209);
      END_STATE();
    case 192:
      if (lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 193:
      if (lookahead == 'c')
        ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 'n')
        ADVANCE(212);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(213);
      END_STATE();
    case 196:
      if (lookahead == 'o')
        ADVANCE(214);
      END_STATE();
    case 197:
      if (lookahead == 'h')
        ADVANCE(215);
      END_STATE();
    case 198:
      if (lookahead == 'm')
        ADVANCE(216);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 200:
      if (lookahead == 'l')
        ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 202:
      if (lookahead == 't')
        ADVANCE(219);
      END_STATE();
    case 203:
      if (lookahead == 'a')
        ADVANCE(220);
      END_STATE();
    case 204:
      if (lookahead == 'o')
        ADVANCE(221);
      END_STATE();
    case 205:
      if (lookahead == 'a')
        ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 208:
      if (lookahead == 'd')
        ADVANCE(223);
      END_STATE();
    case 209:
      if (lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 210:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 211:
      if (lookahead == 't')
        ADVANCE(226);
      END_STATE();
    case 212:
      if (lookahead == 'l')
        ADVANCE(227);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 214:
      if (lookahead == 'n')
        ADVANCE(228);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 216:
      if (lookahead == '_')
        ADVANCE(229);
      END_STATE();
    case 217:
      if (lookahead == 'i')
        ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 220:
      if (lookahead == 'l')
        ADVANCE(231);
      END_STATE();
    case 221:
      if (lookahead == 'n')
        ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 'c')
        ADVANCE(233);
      END_STATE();
    case 223:
      if (lookahead == 'a')
        ADVANCE(234);
      if (lookahead == 'e')
        ADVANCE(235);
      END_STATE();
    case 224:
      if (lookahead == 'v')
        ADVANCE(236);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
        ADVANCE(237);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(238);
      END_STATE();
    case 227:
      if (lookahead == 'y')
        ADVANCE(239);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 229:
      if (lookahead == 'r')
        ADVANCE(240);
      END_STATE();
    case 230:
      if (lookahead == 'm')
        ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 233:
      if (lookahead == 'e')
        ADVANCE(242);
      END_STATE();
    case 234:
      if (lookahead == 'b')
        ADVANCE(243);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_is_override);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(244);
      END_STATE();
    case 237:
      if (lookahead == 'w')
        ADVANCE(245);
      END_STATE();
    case 238:
      if (lookahead == 'd')
        ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 240:
      if (lookahead == 'e')
        ADVANCE(247);
      END_STATE();
    case 241:
      if (lookahead == 'i')
        ADVANCE(248);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_is_interface);
      END_STATE();
    case 243:
      if (lookahead == 'l')
        ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_is_primitive);
      END_STATE();
    case 245:
      if (lookahead == 'r')
        ADVANCE(250);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
        ADVANCE(251);
      END_STATE();
    case 247:
      if (lookahead == 'a')
        ADVANCE(252);
      END_STATE();
    case 248:
      if (lookahead == 't')
        ADVANCE(253);
      END_STATE();
    case 249:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 250:
      if (lookahead == 'i')
        ADVANCE(255);
      END_STATE();
    case 251:
      if (lookahead == 'w')
        ADVANCE(256);
      END_STATE();
    case 252:
      if (lookahead == 'd')
        ADVANCE(257);
      END_STATE();
    case 253:
      if (lookahead == 'e')
        ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_is_overridable);
      END_STATE();
    case 255:
      if (lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 256:
      if (lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 257:
      if (lookahead == 'w')
        ADVANCE(261);
      END_STATE();
    case 258:
      if (lookahead == 'd')
        ADVANCE(262);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(263);
      END_STATE();
    case 260:
      if (lookahead == 'i')
        ADVANCE(264);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_writelimited);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_private_write);
      END_STATE();
    case 264:
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 267:
      if (lookahead == 't')
        ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_protected_write);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_system_readwrite);
      END_STATE();
    case 271:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(272);
      if (lookahead == '+')
        ADVANCE(273);
      if (lookahead == '-')
        ADVANCE(274);
      if (lookahead == '/')
        ADVANCE(275);
      if (lookahead == '0')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(278);
      if (lookahead == 'e')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(280);
      if (lookahead == 'g')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'm')
        ADVANCE(283);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'p')
        ADVANCE(286);
      if (lookahead == 'r')
        ADVANCE(287);
      if (lookahead == 's')
        ADVANCE(288);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == 'w')
        ADVANCE(290);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 272:
      if (lookahead == '*')
        ADVANCE(292);
      END_STATE();
    case 273:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 274:
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(60);
      if (lookahead == '/')
        ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'l')
        ADVANCE(63);
      if (lookahead == 'x')
        ADVANCE(64);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(66);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(296);
      if (lookahead == 'x')
        ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(298);
      if (lookahead == '6')
        ADVANCE(299);
      if (lookahead == 'u')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(302);
      if (lookahead == '3')
        ADVANCE(303);
      if (lookahead == '6')
        ADVANCE(304);
      if (lookahead == '8')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(308);
      if (lookahead == 'o')
        ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(314);
      if (lookahead == '3')
        ADVANCE(315);
      if (lookahead == '8')
        ADVANCE(316);
      if (lookahead == 'e')
        ADVANCE(317);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(319);
      if (lookahead == '3')
        ADVANCE(320);
      if (lookahead == '6')
        ADVANCE(321);
      if (lookahead == '8')
        ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(325);
      if (lookahead == 'f')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(327);
      if (lookahead == 'u')
        ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(342);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(344);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_s8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_f32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_f64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(366);
      if (lookahead == 'v')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_s16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_s32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_goto);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_switch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_is_declare);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(419);
      if (lookahead == 'e')
        ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_is_external);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_is_override);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_readonly);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_is_interface);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_is_primitive);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_is_overridable);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 430:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(431);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 432:
      if (lookahead == '%')
        ADVANCE(433);
      if (lookahead == '&')
        ADVANCE(434);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(435);
      if (lookahead == '-')
        ADVANCE(436);
      if (lookahead == '/')
        ADVANCE(437);
      if (lookahead == ':')
        ADVANCE(438);
      if (lookahead == '<')
        ADVANCE(439);
      if (lookahead == '>')
        ADVANCE(440);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(441);
      if (lookahead == '|')
        ADVANCE(442);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '$' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '\\' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(291);
      END_STATE();
    case 433:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 435:
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 436:
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 438:
      if (lookahead == ':')
        ADVANCE(67);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 445:
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(447);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '"')
        ADVANCE(74);
      if (lookahead == '\'')
        ADVANCE(75);
      if (lookahead == '0')
        ADVANCE(76);
      if (lookahead == '\\')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(81);
      if (lookahead == 'r')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(83);
      if (lookahead == 'v')
        ADVANCE(84);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 448:
      if (lookahead == '(')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(280);
      if (lookahead == 'i')
        ADVANCE(450);
      if (lookahead == 'm')
        ADVANCE(451);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'p')
        ADVANCE(286);
      if (lookahead == 'r')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(302);
      if (lookahead == '3')
        ADVANCE(303);
      if (lookahead == '6')
        ADVANCE(304);
      if (lookahead == '8')
        ADVANCE(305);
      if (lookahead == 'n')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(314);
      if (lookahead == '3')
        ADVANCE(315);
      if (lookahead == '8')
        ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(456);
      if (lookahead != 0)
        ADVANCE(457);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(457);
      END_STATE();
    case 458:
      if (lookahead == 'f')
        ADVANCE(280);
      if (lookahead == 'i')
        ADVANCE(450);
      if (lookahead == 'm')
        ADVANCE(451);
      if (lookahead == 'o')
        ADVANCE(285);
      if (lookahead == 'p')
        ADVANCE(459);
      if (lookahead == 'r')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 462:
      if (lookahead == '+')
        ADVANCE(463);
      if (lookahead == '-')
        ADVANCE(464);
      if (lookahead == '/')
        ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(466);
      END_STATE();
    case 463:
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '+')
        ADVANCE(57);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '*')
        ADVANCE(60);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 467:
      if (lookahead == '!')
        ADVANCE(468);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(469);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(431);
      if (lookahead == '-')
        ADVANCE(470);
      if (lookahead == '0')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '~')
        ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '%' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 472:
      if (lookahead == '*')
        ADVANCE(431);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 473:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '0')
        ADVANCE(276);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < ')' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 474:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(476);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(74);
      if (lookahead == '\'')
        ADVANCE(75);
      if (lookahead == '0')
        ADVANCE(76);
      if (lookahead == '\\')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'b')
        ADVANCE(79);
      if (lookahead == 'f')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(81);
      if (lookahead == 'r')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(83);
      if (lookahead == 'v')
        ADVANCE(84);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 477:
      if (lookahead == 'c')
        ADVANCE(478);
      if (lookahead == 'd')
        ADVANCE(479);
      if (lookahead == 'f')
        ADVANCE(480);
      if (lookahead == 'i')
        ADVANCE(481);
      if (lookahead == 'm')
        ADVANCE(482);
      if (lookahead == 'o')
        ADVANCE(483);
      if (lookahead == 'p')
        ADVANCE(484);
      if (lookahead == 's')
        ADVANCE(485);
      if (lookahead == 'w')
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 478:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 479:
      if (lookahead == 'e')
        ADVANCE(487);
      END_STATE();
    case 480:
      if (lookahead == 'u')
        ADVANCE(92);
      END_STATE();
    case 481:
      if (lookahead == 'f')
        ADVANCE(98);
      END_STATE();
    case 482:
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 483:
      if (lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 484:
      if (lookahead == 'r')
        ADVANCE(488);
      END_STATE();
    case 485:
      if (lookahead == 'w')
        ADVANCE(110);
      END_STATE();
    case 486:
      if (lookahead == 'h')
        ADVANCE(116);
      END_STATE();
    case 487:
      if (lookahead == 'f')
        ADVANCE(130);
      END_STATE();
    case 488:
      if (lookahead == 'i')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'm')
        ADVANCE(173);
      END_STATE();
    case 490:
      if (lookahead == 'c')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'f')
        ADVANCE(492);
      if (lookahead == 'i')
        ADVANCE(493);
      if (lookahead == 'm')
        ADVANCE(283);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 496:
      if (lookahead == '*')
        ADVANCE(497);
      if (lookahead == '+')
        ADVANCE(498);
      if (lookahead == '/')
        ADVANCE(499);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(45);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '/')
        ADVANCE(500);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 499:
      if (lookahead == '*')
        ADVANCE(60);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 501:
      if (lookahead == 'w')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 502:
      if (lookahead == 'r')
        ADVANCE(117);
      END_STATE();
    case 503:
      if (lookahead == '%')
        ADVANCE(433);
      if (lookahead == '&')
        ADVANCE(504);
      if (lookahead == '*')
        ADVANCE(505);
      if (lookahead == '+')
        ADVANCE(435);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(436);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(506);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '<')
        ADVANCE(508);
      if (lookahead == '>')
        ADVANCE(509);
      if (lookahead == '^')
        ADVANCE(510);
      if (lookahead == '|')
        ADVANCE(511);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 504:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 505:
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 506:
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 507:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 508:
      if (lookahead == '<')
        ADVANCE(512);
      END_STATE();
    case 509:
      if (lookahead == '>')
        ADVANCE(513);
      END_STATE();
    case 510:
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 511:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 512:
      if (lookahead == '=')
        ADVANCE(126);
      END_STATE();
    case 513:
      if (lookahead == '=')
        ADVANCE(127);
      END_STATE();
    case 514:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(516);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(298);
      if (lookahead == '6')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(302);
      if (lookahead == '3')
        ADVANCE(303);
      if (lookahead == '6')
        ADVANCE(304);
      if (lookahead == '8')
        ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 517:
      if (lookahead == '%')
        ADVANCE(433);
      if (lookahead == '&')
        ADVANCE(504);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(435);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(436);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(506);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '<')
        ADVANCE(508);
      if (lookahead == '>')
        ADVANCE(509);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(510);
      if (lookahead == '|')
        ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 518:
      if (lookahead == '!')
        ADVANCE(519);
      if (lookahead == '$')
        ADVANCE(520);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(522);
      if (lookahead == '/')
        ADVANCE(523);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(524);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 519:
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 524:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 525:
      if (lookahead == '!')
        ADVANCE(519);
      if (lookahead == '$')
        ADVANCE(520);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(521);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(522);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(523);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(524);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 526:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(276);
      if (lookahead == 'c')
        ADVANCE(277);
      if (lookahead == 'd')
        ADVANCE(491);
      if (lookahead == 'e')
        ADVANCE(527);
      if (lookahead == 'g')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(493);
      if (lookahead == 'n')
        ADVANCE(284);
      if (lookahead == 'r')
        ADVANCE(528);
      if (lookahead == 's')
        ADVANCE(529);
      if (lookahead == 'w')
        ADVANCE(290);
      if (lookahead == '{')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < ')' || '-' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(317);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 532:
      if (lookahead == 'p')
        ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 533:
      if (lookahead == 'r')
        ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead == 'i')
        ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == 'v')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 'a')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 't')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'e')
        ADVANCE(539);
      END_STATE();
    case 539:
      if (lookahead == '_')
        ADVANCE(237);
      END_STATE();
    case 540:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 541:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 542:
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(543);
      END_STATE();
    case 544:
      if (lookahead == '%')
        ADVANCE(433);
      if (lookahead == '&')
        ADVANCE(504);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(505);
      if (lookahead == '+')
        ADVANCE(545);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(546);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(506);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '<')
        ADVANCE(508);
      if (lookahead == '>')
        ADVANCE(509);
      if (lookahead == '^')
        ADVANCE(510);
      if (lookahead == '|')
        ADVANCE(511);
      if (lookahead == '}')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 545:
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 546:
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 547:
      if (lookahead == '(')
        ADVANCE(449);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 548:
      if (lookahead == 'e')
        ADVANCE(549);
      END_STATE();
    case 549:
      if (lookahead == 't')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'u')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'r')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'n')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 's')
        ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 555:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(449);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 556:
      if (lookahead == 'p')
        ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 557:
      if (lookahead == 'r')
        ADVANCE(558);
      END_STATE();
    case 558:
      if (lookahead == 'o')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 't')
        ADVANCE(560);
      END_STATE();
    case 560:
      if (lookahead == 'e')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == 'c')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 't')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'e')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'd')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == '_')
        ADVANCE(251);
      END_STATE();
    case 566:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(431);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == ':')
        ADVANCE(507);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 567:
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(516);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 568:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(516);
      if (lookahead == 'p')
        ADVANCE(569);
      if (lookahead == 'r')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(571);
      if (lookahead == 'o')
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    case 572:
      if (lookahead == 's')
        ADVANCE(573);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      END_STATE();
    case 573:
      if (lookahead == 'y')
        ADVANCE(111);
      END_STATE();
    case 574:
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'i')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(452);
      if (lookahead == 's')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 271},
  [2] = {.lex_state = 430},
  [3] = {.lex_state = 432},
  [4] = {.lex_state = 445},
  [5] = {.lex_state = 448},
  [6] = {.lex_state = 448},
  [7] = {.lex_state = 455},
  [8] = {.lex_state = 458},
  [9] = {.lex_state = 462},
  [10] = {.lex_state = 467},
  [11] = {.lex_state = 472},
  [12] = {.lex_state = 472},
  [13] = {.lex_state = 473},
  [14] = {.lex_state = 472},
  [15] = {.lex_state = 474},
  [16] = {.lex_state = 472},
  [17] = {.lex_state = 448},
  [18] = {.lex_state = 477},
  [19] = {.lex_state = 490},
  [20] = {.lex_state = 472},
  [21] = {.lex_state = 472},
  [22] = {.lex_state = 448},
  [23] = {.lex_state = 448},
  [24] = {.lex_state = 496},
  [25] = {.lex_state = 501},
  [26] = {.lex_state = 473},
  [27] = {.lex_state = 448},
  [28] = {.lex_state = 477},
  [29] = {.lex_state = 472},
  [30] = {.lex_state = 477},
  [31] = {.lex_state = 472},
  [32] = {.lex_state = 472},
  [33] = {.lex_state = 472},
  [34] = {.lex_state = 472},
  [35] = {.lex_state = 503},
  [36] = {.lex_state = 271},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 458},
  [39] = {.lex_state = 514},
  [40] = {.lex_state = 517},
  [41] = {.lex_state = 472},
  [42] = {.lex_state = 472},
  [43] = {.lex_state = 432},
  [44] = {.lex_state = 472},
  [45] = {.lex_state = 271},
  [46] = {.lex_state = 472},
  [47] = {.lex_state = 472},
  [48] = {.lex_state = 271},
  [49] = {.lex_state = 462},
  [50] = {.lex_state = 496},
  [51] = {.lex_state = 271},
  [52] = {.lex_state = 462},
  [53] = {.lex_state = 473},
  [54] = {.lex_state = 448},
  [55] = {.lex_state = 518},
  [56] = {.lex_state = 514},
  [57] = {.lex_state = 473},
  [58] = {.lex_state = 472},
  [59] = {.lex_state = 472},
  [60] = {.lex_state = 503},
  [61] = {.lex_state = 472},
  [62] = {.lex_state = 525},
  [63] = {.lex_state = 474},
  [64] = {.lex_state = 472},
  [65] = {.lex_state = 472},
  [66] = {.lex_state = 472},
  [67] = {.lex_state = 472},
  [68] = {.lex_state = 472},
  [69] = {.lex_state = 467},
  [70] = {.lex_state = 526},
  [71] = {.lex_state = 472},
  [72] = {.lex_state = 462},
  [73] = {.lex_state = 496},
  [74] = {.lex_state = 271},
  [75] = {.lex_state = 496},
  [76] = {.lex_state = 532},
  [77] = {.lex_state = 540},
  [78] = {.lex_state = 540},
  [79] = {.lex_state = 472},
  [80] = {.lex_state = 477},
  [81] = {.lex_state = 477},
  [82] = {.lex_state = 541},
  [83] = {.lex_state = 430},
  [84] = {.lex_state = 542},
  [85] = {.lex_state = 472},
  [86] = {.lex_state = 472},
  [87] = {.lex_state = 271},
  [88] = {.lex_state = 544},
  [89] = {.lex_state = 544},
  [90] = {.lex_state = 271},
  [91] = {.lex_state = 477},
  [92] = {.lex_state = 472},
  [93] = {.lex_state = 514},
  [94] = {.lex_state = 547},
  [95] = {.lex_state = 473},
  [96] = {.lex_state = 473},
  [97] = {.lex_state = 555},
  [98] = {.lex_state = 525},
  [99] = {.lex_state = 462},
  [100] = {.lex_state = 462},
  [101] = {.lex_state = 462},
  [102] = {.lex_state = 496},
  [103] = {.lex_state = 271},
  [104] = {.lex_state = 462},
  [105] = {.lex_state = 514},
  [106] = {.lex_state = 525},
  [107] = {.lex_state = 473},
  [108] = {.lex_state = 473},
  [109] = {.lex_state = 514},
  [110] = {.lex_state = 525},
  [111] = {.lex_state = 474},
  [112] = {.lex_state = 547},
  [113] = {.lex_state = 518},
  [114] = {.lex_state = 514},
  [115] = {.lex_state = 473},
  [116] = {.lex_state = 477},
  [117] = {.lex_state = 472},
  [118] = {.lex_state = 496},
  [119] = {.lex_state = 462},
  [120] = {.lex_state = 496},
  [121] = {.lex_state = 496},
  [122] = {.lex_state = 271},
  [123] = {.lex_state = 496},
  [124] = {.lex_state = 556},
  [125] = {.lex_state = 473},
  [126] = {.lex_state = 540},
  [127] = {.lex_state = 544},
  [128] = {.lex_state = 566},
  [129] = {.lex_state = 566},
  [130] = {.lex_state = 472},
  [131] = {.lex_state = 477},
  [132] = {.lex_state = 473},
  [133] = {.lex_state = 541},
  [134] = {.lex_state = 430},
  [135] = {.lex_state = 542},
  [136] = {.lex_state = 472},
  [137] = {.lex_state = 472},
  [138] = {.lex_state = 472},
  [139] = {.lex_state = 477},
  [140] = {.lex_state = 541},
  [141] = {.lex_state = 472},
  [142] = {.lex_state = 567},
  [143] = {.lex_state = 568},
  [144] = {.lex_state = 472},
  [145] = {.lex_state = 547},
  [146] = {.lex_state = 544},
  [147] = {.lex_state = 474},
  [148] = {.lex_state = 555},
  [149] = {.lex_state = 555},
  [150] = {.lex_state = 472},
  [151] = {.lex_state = 462},
  [152] = {.lex_state = 462},
  [153] = {.lex_state = 514},
  [154] = {.lex_state = 566},
  [155] = {.lex_state = 514},
  [156] = {.lex_state = 525},
  [157] = {.lex_state = 472},
  [158] = {.lex_state = 547},
  [159] = {.lex_state = 526},
  [160] = {.lex_state = 473},
  [161] = {.lex_state = 514},
  [162] = {.lex_state = 496},
  [163] = {.lex_state = 496},
  [164] = {.lex_state = 572},
  [165] = {.lex_state = 540},
  [166] = {.lex_state = 540},
  [167] = {.lex_state = 566},
  [168] = {.lex_state = 472},
  [169] = {.lex_state = 472},
  [170] = {.lex_state = 566},
  [171] = {.lex_state = 547},
  [172] = {.lex_state = 472},
  [173] = {.lex_state = 541},
  [174] = {.lex_state = 430},
  [175] = {.lex_state = 477},
  [176] = {.lex_state = 541},
  [177] = {.lex_state = 541},
  [178] = {.lex_state = 517},
  [179] = {.lex_state = 517},
  [180] = {.lex_state = 472},
  [181] = {.lex_state = 547},
  [182] = {.lex_state = 574},
  [183] = {.lex_state = 574},
  [184] = {.lex_state = 514},
  [185] = {.lex_state = 566},
  [186] = {.lex_state = 555},
  [187] = {.lex_state = 474},
  [188] = {.lex_state = 555},
  [189] = {.lex_state = 555},
  [190] = {.lex_state = 472},
  [191] = {.lex_state = 473},
  [192] = {.lex_state = 566},
  [193] = {.lex_state = 514},
  [194] = {.lex_state = 525},
  [195] = {.lex_state = 472},
  [196] = {.lex_state = 514},
  [197] = {.lex_state = 526},
  [198] = {.lex_state = 514},
  [199] = {.lex_state = 566},
  [200] = {.lex_state = 472},
  [201] = {.lex_state = 472},
  [202] = {.lex_state = 566},
  [203] = {.lex_state = 547},
  [204] = {.lex_state = 547},
  [205] = {.lex_state = 472},
  [206] = {.lex_state = 541},
  [207] = {.lex_state = 514},
  [208] = {.lex_state = 517},
  [209] = {.lex_state = 517},
  [210] = {.lex_state = 517},
  [211] = {.lex_state = 547},
  [212] = {.lex_state = 568},
  [213] = {.lex_state = 566},
  [214] = {.lex_state = 555},
  [215] = {.lex_state = 566},
  [216] = {.lex_state = 514},
  [217] = {.lex_state = 514},
  [218] = {.lex_state = 526},
  [219] = {.lex_state = 542},
  [220] = {.lex_state = 514},
  [221] = {.lex_state = 472},
  [222] = {.lex_state = 472},
  [223] = {.lex_state = 547},
  [224] = {.lex_state = 547},
  [225] = {.lex_state = 517},
  [226] = {.lex_state = 517},
  [227] = {.lex_state = 517},
  [228] = {.lex_state = 517},
  [229] = {.lex_state = 517},
  [230] = {.lex_state = 566},
  [231] = {.lex_state = 566},
  [232] = {.lex_state = 514},
  [233] = {.lex_state = 542},
  [234] = {.lex_state = 472},
  [235] = {.lex_state = 547},
  [236] = {.lex_state = 514},
  [237] = {.lex_state = 472},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_protected_write] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_is_overridable] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_is_primitive] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_private_write] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym_scope_op] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PLUS_DASH] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_system_readwrite] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DASH_PLUS] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_is_override] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_writelimited] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [sym_is_interface] = ACTIONS(1),
  },
  [1] = {
    [sym__comment] = STATE(36),
    [sym_compound_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym__override] = STATE(30),
    [sym_function_definition] = STATE(29),
    [sym_type] = STATE(31),
    [sym__base_type] = STATE(32),
    [sym_statement] = STATE(33),
    [sym_end_statement] = STATE(34),
    [sym_if_statement] = STATE(34),
    [sym_while_statement] = STATE(34),
    [sym_expression_statement] = STATE(34),
    [sym_return_statement] = STATE(34),
    [sym_collection] = STATE(43),
    [sym__value] = STATE(35),
    [sym__number] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(36),
    [sym_source_file] = STATE(37),
    [sym_access_control] = STATE(38),
    [sym__sentence] = STATE(36),
    [sym_enum_definition] = STATE(29),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(29),
    [sym_primitive_type] = STATE(32),
    [sym__control_flow_statement] = STATE(34),
    [sym_goto_statement] = STATE(34),
    [sym_switch_statement] = STATE(34),
    [sym_case_statement] = STATE(34),
    [sym_group_expression] = STATE(40),
    [sym_assignment_expression] = STATE(41),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__block_comment_star] = STATE(36),
    [sym__block_comment_plus] = STATE(36),
    [sym_definition] = STATE(33),
    [sym_module_definition] = STATE(29),
    [sym_is_function] = STATE(42),
    [sym_is_method] = STATE(42),
    [sym_declaration_definition] = STATE(29),
    [sym_section_statement] = STATE(34),
    [sym_single_line_if_statement] = STATE(34),
    [sym_default_statement] = STATE(34),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(35),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_is_declare] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [sym_binary] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PLUS_DASH] = ACTIONS(25),
    [sym_is_override] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_is_external] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(41),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(19),
    [sym_long] = ACTIONS(21),
    [sym_double] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(45),
    [sym_null] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_method] = ACTIONS(49),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_section] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_if] = ACTIONS(55),
    [sym_oct] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(15),
    [sym_float] = ACTIONS(21),
    [sym_hex] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(59),
    [anon_sym_readonly] = ACTIONS(61),
    [sym_is_overridable] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(65),
    [sym_is_interface] = ACTIONS(67),
  },
  [2] = {
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_identifier] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
  },
  [3] = {
    [anon_sym_DASH_EQ] = ACTIONS(71),
    [anon_sym_DASH_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(71),
    [anon_sym_CARET_EQ] = ACTIONS(71),
    [anon_sym_LT_LT_EQ] = ACTIONS(71),
    [sym_scope_op] = ACTIONS(75),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_PIPE_EQ] = ACTIONS(71),
    [anon_sym_PLUS_EQ] = ACTIONS(71),
    [anon_sym_STAR_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_GT_GT_EQ] = ACTIONS(71),
    [anon_sym_AMP_EQ] = ACTIONS(71),
    [anon_sym_PERCENT_EQ] = ACTIONS(71),
  },
  [4] = {
    [sym__escape_sequence] = STATE(45),
    [aux_sym_character_token1] = ACTIONS(79),
    [anon_sym_BSLASHf] = ACTIONS(81),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(81),
    [anon_sym_BSLASHn] = ACTIONS(81),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(81),
    [anon_sym_BSLASHt] = ACTIONS(81),
    [anon_sym_BSLASH0] = ACTIONS(81),
    [anon_sym_BSLASHr] = ACTIONS(81),
    [anon_sym_BSLASHb] = ACTIONS(81),
    [anon_sym_BSLASHv] = ACTIONS(81),
    [anon_sym_BSLASHa] = ACTIONS(81),
  },
  [5] = {
    [sym_is_function] = STATE(42),
    [sym_is_method] = STATE(42),
    [sym__override] = STATE(30),
    [sym_function_definition] = STATE(46),
    [sym_access_control] = STATE(38),
    [sym_type] = STATE(31),
    [sym__base_type] = STATE(32),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(46),
    [sym_primitive_type] = STATE(32),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(19),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym_is_primitive] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(49),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [sym_is_override] = ACTIONS(27),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(61),
    [sym_is_overridable] = ACTIONS(27),
    [sym_is_interface] = ACTIONS(67),
  },
  [6] = {
    [sym_group_expression] = STATE(47),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(85),
  },
  [7] = {
    [aux_sym__comment_token1] = ACTIONS(87),
    [sym__space] = ACTIONS(89),
  },
  [8] = {
    [anon_sym_f32] = ACTIONS(91),
    [anon_sym_i32] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(91),
    [sym_is_primitive] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(91),
    [anon_sym_s8] = ACTIONS(91),
    [anon_sym_u64] = ACTIONS(91),
    [anon_sym_s32] = ACTIONS(91),
    [anon_sym_i16] = ACTIONS(91),
    [anon_sym_u32] = ACTIONS(91),
    [anon_sym_i64] = ACTIONS(91),
    [sym_is_override] = ACTIONS(91),
    [anon_sym_function] = ACTIONS(91),
    [anon_sym_f64] = ACTIONS(91),
    [anon_sym_s16] = ACTIONS(91),
    [anon_sym_i8] = ACTIONS(91),
    [anon_sym_u16] = ACTIONS(91),
    [anon_sym_readonly] = ACTIONS(91),
    [sym_is_overridable] = ACTIONS(91),
    [sym_is_interface] = ACTIONS(91),
  },
  [9] = {
    [sym__block_comment_plus] = STATE(52),
    [aux_sym__block_comment_plus_repeat1] = STATE(52),
    [sym__block_comment_star] = STATE(52),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(97),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(99),
  },
  [10] = {
    [sym_collection] = STATE(43),
    [sym__value] = STATE(55),
    [sym_group_expression] = STATE(55),
    [sym__number] = STATE(55),
    [sym_assignment_expression] = STATE(56),
    [sym__literal] = STATE(55),
    [sym_string] = STATE(55),
    [sym_cast_ops] = STATE(53),
    [sym_unary_op] = STATE(57),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(55),
    [sym_double] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(109),
    [sym_null] = ACTIONS(107),
    [sym_integer] = ACTIONS(107),
    [sym_binary] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(107),
    [sym_float] = ACTIONS(101),
    [sym_hex] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(101),
  },
  [11] = {
    [sym_identifier] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
  },
  [12] = {
    [sym_identifier] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
  },
  [13] = {
    [sym_collection] = STATE(60),
    [sym__value] = STATE(35),
    [sym_group_expression] = STATE(35),
    [sym_assignment_expression] = STATE(59),
    [sym__number] = STATE(35),
    [sym__assignment_or_collection_or_value] = STATE(59),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__collection_or_value] = STATE(60),
    [sym_character] = STATE(35),
    [sym_double] = ACTIONS(21),
    [sym_float] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(17),
    [sym_hex] = ACTIONS(21),
    [sym_binary] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
  },
  [14] = {
    [sym_identifier] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
  },
  [15] = {
    [sym__escape_sequence] = STATE(63),
    [aux_sym_string_repeat1] = STATE(63),
    [anon_sym_BSLASHf] = ACTIONS(119),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(119),
    [anon_sym_BSLASHn] = ACTIONS(119),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(119),
    [anon_sym_BSLASHt] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_BSLASH0] = ACTIONS(119),
    [anon_sym_BSLASHr] = ACTIONS(119),
    [anon_sym_BSLASHb] = ACTIONS(119),
    [anon_sym_BSLASHv] = ACTIONS(119),
    [aux_sym_string_token1] = ACTIONS(123),
    [anon_sym_BSLASHa] = ACTIONS(119),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(125),
  },
  [17] = {
    [sym_group_expression] = STATE(64),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(85),
  },
  [18] = {
    [sym_is_function] = STATE(65),
    [sym_is_method] = STATE(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(129),
  },
  [19] = {
    [anon_sym_while] = ACTIONS(131),
    [anon_sym_if] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_module] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_switch] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(131),
    [anon_sym_case] = ACTIONS(131),
    [anon_sym_default] = ACTIONS(131),
  },
  [20] = {
    [sym_identifier] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
  },
  [21] = {
    [sym_identifier] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
  },
  [22] = {
    [sym_group_expression] = STATE(70),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(139),
  },
  [23] = {
    [sym_group_expression] = STATE(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(85),
  },
  [24] = {
    [sym__block_comment_plus] = STATE(75),
    [sym__block_comment_star] = STATE(75),
    [aux_sym__block_comment_star_repeat1] = STATE(75),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(147),
  },
  [25] = {
    [anon_sym_writelimited] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
  },
  [26] = {
    [sym_collection] = STATE(60),
    [sym__value] = STATE(35),
    [sym_group_expression] = STATE(35),
    [sym_assignment_expression] = STATE(77),
    [sym__number] = STATE(35),
    [sym__assignment_or_collection_or_value] = STATE(77),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(78),
    [sym__collection_or_value] = STATE(60),
    [sym_character] = STATE(35),
    [sym_double] = ACTIONS(21),
    [sym_float] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(17),
    [sym_hex] = ACTIONS(21),
    [sym_binary] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(151),
  },
  [28] = {
    [sym_is_function] = STATE(65),
    [sym_is_method] = STATE(65),
    [sym__override] = STATE(81),
    [sym_is_override] = ACTIONS(153),
    [anon_sym_method] = ACTIONS(129),
    [sym_is_overridable] = ACTIONS(153),
    [anon_sym_function] = ACTIONS(127),
    [sym_is_primitive] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
  },
  [29] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(157),
  },
  [30] = {
    [sym_is_function] = STATE(65),
    [sym_is_method] = STATE(65),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [sym_is_primitive] = ACTIONS(155),
  },
  [31] = {
    [sym_identifier] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
  },
  [32] = {
    [sym_pointer] = STATE(85),
    [aux_sym_type_repeat1] = STATE(85),
    [sym_array] = STATE(86),
    [aux_sym_type_repeat2] = STATE(86),
    [anon_sym_STAR] = ACTIONS(161),
    [sym_identifier] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [33] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(167),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(169),
  },
  [35] = {
    [sym_assignment_post_op] = STATE(89),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
  },
  [36] = {
    [sym__comment] = STATE(90),
    [sym_compound_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym__override] = STATE(30),
    [sym_function_definition] = STATE(29),
    [sym_type] = STATE(31),
    [sym__base_type] = STATE(32),
    [sym_statement] = STATE(33),
    [sym_end_statement] = STATE(34),
    [sym_if_statement] = STATE(34),
    [sym_while_statement] = STATE(34),
    [sym_expression_statement] = STATE(34),
    [sym_return_statement] = STATE(34),
    [sym_collection] = STATE(43),
    [sym__value] = STATE(35),
    [sym__number] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(90),
    [sym_access_control] = STATE(38),
    [sym__sentence] = STATE(90),
    [sym_enum_definition] = STATE(29),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(29),
    [sym_primitive_type] = STATE(32),
    [sym__control_flow_statement] = STATE(34),
    [sym_goto_statement] = STATE(34),
    [sym_switch_statement] = STATE(34),
    [sym_case_statement] = STATE(34),
    [sym_group_expression] = STATE(40),
    [sym_assignment_expression] = STATE(41),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__block_comment_star] = STATE(90),
    [sym__block_comment_plus] = STATE(90),
    [sym_definition] = STATE(33),
    [sym_module_definition] = STATE(29),
    [sym_is_function] = STATE(42),
    [sym_is_method] = STATE(42),
    [sym_declaration_definition] = STATE(29),
    [sym_section_statement] = STATE(34),
    [sym_single_line_if_statement] = STATE(34),
    [sym_default_statement] = STATE(34),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(35),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_is_declare] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(13),
    [anon_sym_PLUS_PLUS] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [anon_sym_private] = ACTIONS(19),
    [sym_binary] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [anon_sym_PLUS_DASH] = ACTIONS(25),
    [sym_is_override] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_module] = ACTIONS(31),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_is_external] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(41),
    [anon_sym_while] = ACTIONS(43),
    [anon_sym_DASH_DASH] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(19),
    [sym_long] = ACTIONS(21),
    [sym_double] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(45),
    [sym_null] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_method] = ACTIONS(49),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_section] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(55),
    [sym_oct] = ACTIONS(17),
    [anon_sym_switch] = ACTIONS(57),
    [anon_sym_STAR_STAR] = ACTIONS(15),
    [sym_float] = ACTIONS(21),
    [sym_hex] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(59),
    [anon_sym_readonly] = ACTIONS(61),
    [sym_is_overridable] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_enum] = ACTIONS(65),
    [sym_is_interface] = ACTIONS(67),
  },
  [37] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(177),
  },
  [38] = {
    [sym_primitive_type] = STATE(32),
    [sym_is_function] = STATE(65),
    [sym__base_type] = STATE(32),
    [sym_is_method] = STATE(65),
    [sym_type] = STATE(92),
    [sym_readability] = STATE(93),
    [sym__override] = STATE(81),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym_is_primitive] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(49),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [sym_is_override] = ACTIONS(181),
    [anon_sym_function] = ACTIONS(33),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(61),
    [sym_is_overridable] = ACTIONS(181),
    [sym_is_interface] = ACTIONS(183),
  },
  [39] = {
    [sym_type] = STATE(92),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
  },
  [40] = {
    [anon_sym_DASH_EQ] = ACTIONS(71),
    [anon_sym_DASH_DASH] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(71),
    [anon_sym_CARET_EQ] = ACTIONS(71),
    [anon_sym_LT_LT_EQ] = ACTIONS(71),
    [anon_sym_SLASH_EQ] = ACTIONS(71),
    [anon_sym_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_PIPE_EQ] = ACTIONS(71),
    [anon_sym_PLUS_EQ] = ACTIONS(71),
    [anon_sym_STAR_EQ] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_GT_GT_EQ] = ACTIONS(71),
    [anon_sym_AMP_EQ] = ACTIONS(71),
    [anon_sym_PERCENT_EQ] = ACTIONS(71),
  },
  [41] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [42] = {
    [sym_identifier] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
  },
  [43] = {
    [sym_assignment_op] = STATE(96),
    [anon_sym_DASH_EQ] = ACTIONS(189),
    [anon_sym_PIPE_EQ] = ACTIONS(189),
    [anon_sym_PLUS_EQ] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_COLON_EQ] = ACTIONS(189),
    [anon_sym_CARET_EQ] = ACTIONS(189),
    [anon_sym_LT_LT_EQ] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(189),
    [anon_sym_GT_GT_EQ] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(189),
    [anon_sym_PERCENT_EQ] = ACTIONS(189),
  },
  [44] = {
    [sym_identifier] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
  },
  [45] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(193),
  },
  [46] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(195),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(197),
  },
  [48] = {
    [anon_sym_f32] = ACTIONS(199),
    [anon_sym_i32] = ACTIONS(199),
    [sym_identifier] = ACTIONS(199),
    [anon_sym_u8] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_is_declare] = ACTIONS(199),
    [anon_sym_case] = ACTIONS(199),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [sym_integer] = ACTIONS(199),
    [anon_sym_private] = ACTIONS(199),
    [sym_binary] = ACTIONS(201),
    [anon_sym_SLASH_SLASH] = ACTIONS(199),
    [anon_sym_PLUS_DASH] = ACTIONS(201),
    [sym_is_override] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_module] = ACTIONS(199),
    [anon_sym_function] = ACTIONS(199),
    [anon_sym_f64] = ACTIONS(199),
    [anon_sym_s16] = ACTIONS(199),
    [anon_sym_i8] = ACTIONS(199),
    [anon_sym_u16] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(199),
    [anon_sym_goto] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym_is_external] = ACTIONS(199),
    [anon_sym_default] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_DASH_DASH] = ACTIONS(201),
    [anon_sym_protected] = ACTIONS(199),
    [sym_long] = ACTIONS(201),
    [sym_double] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(199),
    [sym_null] = ACTIONS(199),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_method] = ACTIONS(199),
    [anon_sym_s8] = ACTIONS(199),
    [anon_sym_u64] = ACTIONS(199),
    [anon_sym_s32] = ACTIONS(199),
    [anon_sym_i16] = ACTIONS(199),
    [anon_sym_u32] = ACTIONS(199),
    [anon_sym_i64] = ACTIONS(199),
    [anon_sym_section] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(199),
    [sym_oct] = ACTIONS(199),
    [anon_sym_switch] = ACTIONS(199),
    [anon_sym_STAR_STAR] = ACTIONS(201),
    [sym_float] = ACTIONS(201),
    [sym_hex] = ACTIONS(201),
    [anon_sym_SLASH_STAR] = ACTIONS(201),
    [anon_sym_readonly] = ACTIONS(199),
    [sym_is_overridable] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_enum] = ACTIONS(199),
    [sym_is_interface] = ACTIONS(199),
  },
  [49] = {
    [sym__block_comment_plus] = STATE(100),
    [aux_sym__block_comment_plus_repeat1] = STATE(100),
    [sym__block_comment_star] = STATE(100),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(205),
  },
  [50] = {
    [sym__block_comment_plus] = STATE(102),
    [sym__block_comment_star] = STATE(102),
    [aux_sym__block_comment_star_repeat1] = STATE(102),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(209),
  },
  [51] = {
    [anon_sym_f32] = ACTIONS(211),
    [anon_sym_i32] = ACTIONS(211),
    [sym_identifier] = ACTIONS(211),
    [anon_sym_u8] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [sym_is_declare] = ACTIONS(211),
    [anon_sym_case] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(213),
    [sym_integer] = ACTIONS(211),
    [anon_sym_private] = ACTIONS(211),
    [sym_binary] = ACTIONS(213),
    [anon_sym_SLASH_SLASH] = ACTIONS(211),
    [anon_sym_PLUS_DASH] = ACTIONS(213),
    [sym_is_override] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_module] = ACTIONS(211),
    [anon_sym_function] = ACTIONS(211),
    [anon_sym_f64] = ACTIONS(211),
    [anon_sym_s16] = ACTIONS(211),
    [anon_sym_i8] = ACTIONS(211),
    [anon_sym_u16] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(211),
    [anon_sym_goto] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [sym_is_external] = ACTIONS(211),
    [anon_sym_default] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(211),
    [anon_sym_DASH_DASH] = ACTIONS(213),
    [anon_sym_protected] = ACTIONS(211),
    [sym_long] = ACTIONS(213),
    [sym_double] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(211),
    [sym_null] = ACTIONS(211),
    [anon_sym_end] = ACTIONS(211),
    [anon_sym_method] = ACTIONS(211),
    [anon_sym_s8] = ACTIONS(211),
    [anon_sym_u64] = ACTIONS(211),
    [anon_sym_s32] = ACTIONS(211),
    [anon_sym_i16] = ACTIONS(211),
    [anon_sym_u32] = ACTIONS(211),
    [anon_sym_i64] = ACTIONS(211),
    [anon_sym_section] = ACTIONS(211),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(211),
    [sym_oct] = ACTIONS(211),
    [anon_sym_switch] = ACTIONS(211),
    [anon_sym_STAR_STAR] = ACTIONS(213),
    [sym_float] = ACTIONS(213),
    [sym_hex] = ACTIONS(213),
    [anon_sym_SLASH_STAR] = ACTIONS(213),
    [anon_sym_readonly] = ACTIONS(211),
    [sym_is_overridable] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_enum] = ACTIONS(211),
    [sym_is_interface] = ACTIONS(211),
  },
  [52] = {
    [sym__block_comment_plus] = STATE(104),
    [aux_sym__block_comment_plus_repeat1] = STATE(104),
    [sym__block_comment_star] = STATE(104),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(217),
  },
  [53] = {
    [sym_double] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(221),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [sym_oct] = ACTIONS(221),
    [sym_null] = ACTIONS(221),
    [sym_float] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
    [sym_integer] = ACTIONS(221),
    [sym_hex] = ACTIONS(219),
    [sym_binary] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(219),
  },
  [54] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(223),
  },
  [55] = {
    [sym_binary_op] = STATE(108),
    [sym_assignment_post_op] = STATE(89),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
  },
  [56] = {
    [anon_sym_RPAREN] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
  },
  [57] = {
    [sym__literal] = STATE(109),
    [sym_string] = STATE(109),
    [sym__value] = STATE(109),
    [sym_group_expression] = STATE(109),
    [sym__number] = STATE(109),
    [sym_character] = STATE(109),
    [sym_double] = ACTIONS(231),
    [sym_float] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_oct] = ACTIONS(233),
    [sym_null] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(233),
    [sym_hex] = ACTIONS(231),
    [sym_binary] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(231),
  },
  [58] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(235),
  },
  [59] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(237),
  },
  [60] = {
    [sym_assignment_op] = STATE(96),
    [anon_sym_DASH_EQ] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(189),
    [anon_sym_COLON_EQ] = ACTIONS(189),
    [anon_sym_LT_LT_EQ] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(189),
    [anon_sym_PIPE_EQ] = ACTIONS(189),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_PLUS_EQ] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_GT_GT_EQ] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(189),
    [anon_sym_PERCENT_EQ] = ACTIONS(189),
  },
  [61] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(241),
  },
  [62] = {
    [anon_sym_DASH_EQ] = ACTIONS(243),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [anon_sym_PLUS_PLUS] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_PIPE_EQ] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
    [anon_sym_PLUS_EQ] = ACTIONS(243),
    [anon_sym_PIPE_PIPE] = ACTIONS(243),
    [anon_sym_STAR_EQ] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [anon_sym_DASH_DASH] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_CARET_EQ] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_LT_LT_EQ] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_SLASH_EQ] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(245),
    [anon_sym_AMP_AMP] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_GT_GT_EQ] = ACTIONS(243),
    [anon_sym_AMP_EQ] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_PERCENT_EQ] = ACTIONS(243),
  },
  [63] = {
    [sym__escape_sequence] = STATE(111),
    [aux_sym_string_repeat1] = STATE(111),
    [anon_sym_BSLASHf] = ACTIONS(247),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(247),
    [anon_sym_BSLASHn] = ACTIONS(247),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(247),
    [anon_sym_BSLASHt] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_BSLASH0] = ACTIONS(247),
    [anon_sym_BSLASHr] = ACTIONS(247),
    [anon_sym_BSLASHb] = ACTIONS(247),
    [anon_sym_BSLASHv] = ACTIONS(247),
    [aux_sym_string_token1] = ACTIONS(251),
    [anon_sym_BSLASHa] = ACTIONS(247),
  },
  [64] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(253),
  },
  [65] = {
    [sym_identifier] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
  },
  [66] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(257),
  },
  [67] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(259),
  },
  [68] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(261),
  },
  [69] = {
    [sym_collection] = STATE(43),
    [sym__value] = STATE(113),
    [sym_group_expression] = STATE(113),
    [sym__number] = STATE(113),
    [sym_assignment_expression] = STATE(114),
    [sym__literal] = STATE(113),
    [sym_string] = STATE(113),
    [sym_cast_ops] = STATE(53),
    [sym_unary_op] = STATE(115),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(113),
    [sym_double] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_identifier] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(109),
    [sym_null] = ACTIONS(265),
    [sym_integer] = ACTIONS(265),
    [sym_binary] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(103),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(265),
    [sym_float] = ACTIONS(263),
    [sym_hex] = ACTIONS(263),
    [anon_sym_AMP] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_DOLLAR] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(263),
  },
  [70] = {
    [sym__control_flow_statement] = STATE(34),
    [sym_goto_statement] = STATE(34),
    [sym_switch_statement] = STATE(34),
    [sym_case_statement] = STATE(34),
    [sym_group_expression] = STATE(40),
    [sym_assignment_expression] = STATE(41),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym_statement] = STATE(117),
    [sym_end_statement] = STATE(34),
    [sym_if_statement] = STATE(34),
    [sym_while_statement] = STATE(34),
    [sym_expression_statement] = STATE(34),
    [sym_return_statement] = STATE(34),
    [sym_collection] = STATE(43),
    [sym__value] = STATE(35),
    [sym__number] = STATE(35),
    [sym_section_statement] = STATE(34),
    [sym_single_line_if_statement] = STATE(34),
    [sym_default_statement] = STATE(34),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(35),
    [anon_sym_while] = ACTIONS(43),
    [sym_double] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(267),
    [anon_sym_case] = ACTIONS(13),
    [sym_integer] = ACTIONS(17),
    [sym_binary] = ACTIONS(21),
    [anon_sym_section] = ACTIONS(51),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_switch] = ACTIONS(57),
    [sym_oct] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(269),
    [sym_float] = ACTIONS(21),
    [sym_hex] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_goto] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(41),
  },
  [71] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(271),
  },
  [72] = {
    [sym__block_comment_plus] = STATE(119),
    [aux_sym__block_comment_plus_repeat1] = STATE(119),
    [sym__block_comment_star] = STATE(119),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(275),
  },
  [73] = {
    [sym__block_comment_plus] = STATE(121),
    [sym__block_comment_star] = STATE(121),
    [aux_sym__block_comment_star_repeat1] = STATE(121),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(279),
  },
  [74] = {
    [anon_sym_f32] = ACTIONS(281),
    [anon_sym_i32] = ACTIONS(281),
    [sym_identifier] = ACTIONS(281),
    [anon_sym_u8] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [sym_is_declare] = ACTIONS(281),
    [anon_sym_case] = ACTIONS(281),
    [anon_sym_PLUS_PLUS] = ACTIONS(283),
    [sym_integer] = ACTIONS(281),
    [anon_sym_private] = ACTIONS(281),
    [sym_binary] = ACTIONS(283),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS_DASH] = ACTIONS(283),
    [sym_is_override] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [anon_sym_module] = ACTIONS(281),
    [anon_sym_function] = ACTIONS(281),
    [anon_sym_f64] = ACTIONS(281),
    [anon_sym_s16] = ACTIONS(281),
    [anon_sym_i8] = ACTIONS(281),
    [anon_sym_u16] = ACTIONS(281),
    [anon_sym_return] = ACTIONS(281),
    [anon_sym_goto] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym_is_external] = ACTIONS(281),
    [anon_sym_default] = ACTIONS(281),
    [anon_sym_while] = ACTIONS(281),
    [anon_sym_DASH_DASH] = ACTIONS(283),
    [anon_sym_protected] = ACTIONS(281),
    [sym_long] = ACTIONS(283),
    [sym_double] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(281),
    [sym_null] = ACTIONS(281),
    [anon_sym_end] = ACTIONS(281),
    [anon_sym_method] = ACTIONS(281),
    [anon_sym_s8] = ACTIONS(281),
    [anon_sym_u64] = ACTIONS(281),
    [anon_sym_s32] = ACTIONS(281),
    [anon_sym_i16] = ACTIONS(281),
    [anon_sym_u32] = ACTIONS(281),
    [anon_sym_i64] = ACTIONS(281),
    [anon_sym_section] = ACTIONS(281),
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_if] = ACTIONS(281),
    [sym_oct] = ACTIONS(281),
    [anon_sym_switch] = ACTIONS(281),
    [anon_sym_STAR_STAR] = ACTIONS(283),
    [sym_float] = ACTIONS(283),
    [sym_hex] = ACTIONS(283),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [anon_sym_readonly] = ACTIONS(281),
    [sym_is_overridable] = ACTIONS(281),
    [anon_sym_LBRACE] = ACTIONS(283),
    [anon_sym_enum] = ACTIONS(281),
    [sym_is_interface] = ACTIONS(281),
  },
  [75] = {
    [sym__block_comment_plus] = STATE(123),
    [sym__block_comment_star] = STATE(123),
    [aux_sym__block_comment_star_repeat1] = STATE(123),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(287),
  },
  [76] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(289),
  },
  [77] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(126),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(293),
  },
  [78] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(295),
  },
  [79] = {
    [sym__enum_element] = STATE(129),
    [sym_identifier] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
  },
  [80] = {
    [sym_is_function] = STATE(130),
    [sym_is_method] = STATE(130),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(129),
  },
  [81] = {
    [sym_is_function] = STATE(130),
    [sym_is_method] = STATE(130),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [sym_is_primitive] = ACTIONS(299),
  },
  [82] = {
    [sym_static_assignment] = STATE(133),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(301),
  },
  [83] = {
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(305),
    [anon_sym_STAR] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(305),
    [sym_identifier] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(305),
  },
  [84] = {
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_integer] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
  },
  [85] = {
    [sym_pointer] = STATE(136),
    [aux_sym_type_repeat1] = STATE(136),
    [sym_array] = STATE(137),
    [aux_sym_type_repeat2] = STATE(137),
    [anon_sym_STAR] = ACTIONS(161),
    [sym_identifier] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [86] = {
    [sym_array] = STATE(138),
    [aux_sym_type_repeat2] = STATE(138),
    [sym_identifier] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [87] = {
    [anon_sym_f32] = ACTIONS(313),
    [anon_sym_i32] = ACTIONS(313),
    [sym_identifier] = ACTIONS(313),
    [anon_sym_u8] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [sym_is_declare] = ACTIONS(313),
    [anon_sym_case] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(315),
    [sym_integer] = ACTIONS(313),
    [anon_sym_private] = ACTIONS(313),
    [sym_binary] = ACTIONS(315),
    [anon_sym_SLASH_SLASH] = ACTIONS(313),
    [anon_sym_PLUS_DASH] = ACTIONS(315),
    [sym_is_override] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_module] = ACTIONS(313),
    [anon_sym_function] = ACTIONS(313),
    [anon_sym_f64] = ACTIONS(313),
    [anon_sym_s16] = ACTIONS(313),
    [anon_sym_i8] = ACTIONS(313),
    [anon_sym_u16] = ACTIONS(313),
    [anon_sym_return] = ACTIONS(313),
    [anon_sym_goto] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [sym_is_external] = ACTIONS(313),
    [anon_sym_default] = ACTIONS(313),
    [anon_sym_while] = ACTIONS(313),
    [anon_sym_DASH_DASH] = ACTIONS(315),
    [anon_sym_protected] = ACTIONS(313),
    [sym_long] = ACTIONS(315),
    [sym_double] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(313),
    [sym_null] = ACTIONS(313),
    [anon_sym_end] = ACTIONS(313),
    [anon_sym_method] = ACTIONS(313),
    [anon_sym_s8] = ACTIONS(313),
    [anon_sym_u64] = ACTIONS(313),
    [anon_sym_s32] = ACTIONS(313),
    [anon_sym_i16] = ACTIONS(313),
    [anon_sym_u32] = ACTIONS(313),
    [anon_sym_i64] = ACTIONS(313),
    [anon_sym_section] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(313),
    [sym_oct] = ACTIONS(313),
    [anon_sym_switch] = ACTIONS(313),
    [anon_sym_STAR_STAR] = ACTIONS(315),
    [sym_float] = ACTIONS(315),
    [sym_hex] = ACTIONS(315),
    [anon_sym_SLASH_STAR] = ACTIONS(315),
    [anon_sym_readonly] = ACTIONS(313),
    [sym_is_overridable] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(313),
    [sym_is_interface] = ACTIONS(313),
  },
  [88] = {
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(317),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(319),
  },
  [90] = {
    [sym__comment] = STATE(90),
    [sym_compound_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym__override] = STATE(30),
    [sym_function_definition] = STATE(29),
    [sym_type] = STATE(31),
    [sym__base_type] = STATE(32),
    [sym_statement] = STATE(33),
    [sym_end_statement] = STATE(34),
    [sym_if_statement] = STATE(34),
    [sym_while_statement] = STATE(34),
    [sym_expression_statement] = STATE(34),
    [sym_return_statement] = STATE(34),
    [sym_collection] = STATE(43),
    [sym__value] = STATE(35),
    [sym__number] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(90),
    [sym_access_control] = STATE(38),
    [sym__sentence] = STATE(90),
    [sym_enum_definition] = STATE(29),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(29),
    [sym_primitive_type] = STATE(32),
    [sym__control_flow_statement] = STATE(34),
    [sym_goto_statement] = STATE(34),
    [sym_switch_statement] = STATE(34),
    [sym_case_statement] = STATE(34),
    [sym_group_expression] = STATE(40),
    [sym_assignment_expression] = STATE(41),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__block_comment_star] = STATE(90),
    [sym__block_comment_plus] = STATE(90),
    [sym_definition] = STATE(33),
    [sym_module_definition] = STATE(29),
    [sym_is_function] = STATE(42),
    [sym_is_method] = STATE(42),
    [sym_declaration_definition] = STATE(29),
    [sym_section_statement] = STATE(34),
    [sym_single_line_if_statement] = STATE(34),
    [sym_default_statement] = STATE(34),
    [sym__collection_or_value] = STATE(43),
    [sym_character] = STATE(35),
    [anon_sym_f32] = ACTIONS(321),
    [anon_sym_i32] = ACTIONS(321),
    [sym_identifier] = ACTIONS(324),
    [anon_sym_u8] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [sym_is_declare] = ACTIONS(330),
    [anon_sym_case] = ACTIONS(333),
    [anon_sym_PLUS_PLUS] = ACTIONS(336),
    [sym_integer] = ACTIONS(339),
    [anon_sym_private] = ACTIONS(342),
    [sym_binary] = ACTIONS(345),
    [anon_sym_SLASH_SLASH] = ACTIONS(348),
    [anon_sym_PLUS_DASH] = ACTIONS(351),
    [sym_is_override] = ACTIONS(354),
    [anon_sym_LPAREN] = ACTIONS(357),
    [anon_sym_module] = ACTIONS(360),
    [anon_sym_function] = ACTIONS(363),
    [anon_sym_f64] = ACTIONS(321),
    [anon_sym_s16] = ACTIONS(321),
    [anon_sym_i8] = ACTIONS(321),
    [anon_sym_u16] = ACTIONS(321),
    [anon_sym_return] = ACTIONS(366),
    [anon_sym_goto] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(372),
    [sym_is_external] = ACTIONS(330),
    [anon_sym_default] = ACTIONS(375),
    [anon_sym_while] = ACTIONS(378),
    [anon_sym_DASH_DASH] = ACTIONS(336),
    [anon_sym_protected] = ACTIONS(342),
    [sym_long] = ACTIONS(345),
    [sym_double] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(381),
    [sym_null] = ACTIONS(339),
    [anon_sym_end] = ACTIONS(384),
    [anon_sym_method] = ACTIONS(387),
    [anon_sym_s8] = ACTIONS(321),
    [anon_sym_u64] = ACTIONS(321),
    [anon_sym_s32] = ACTIONS(321),
    [anon_sym_i16] = ACTIONS(321),
    [anon_sym_u32] = ACTIONS(321),
    [anon_sym_i64] = ACTIONS(321),
    [anon_sym_section] = ACTIONS(390),
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_if] = ACTIONS(395),
    [sym_oct] = ACTIONS(339),
    [anon_sym_switch] = ACTIONS(398),
    [anon_sym_STAR_STAR] = ACTIONS(336),
    [sym_float] = ACTIONS(345),
    [sym_hex] = ACTIONS(345),
    [anon_sym_SLASH_STAR] = ACTIONS(401),
    [anon_sym_readonly] = ACTIONS(404),
    [sym_is_overridable] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(407),
    [anon_sym_enum] = ACTIONS(410),
    [sym_is_interface] = ACTIONS(413),
  },
  [91] = {
    [sym_is_function] = STATE(130),
    [sym_is_method] = STATE(130),
    [sym__override] = STATE(139),
    [sym_is_override] = ACTIONS(416),
    [anon_sym_method] = ACTIONS(129),
    [sym_is_overridable] = ACTIONS(416),
    [anon_sym_function] = ACTIONS(127),
    [sym_is_primitive] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
  },
  [92] = {
    [sym_identifier] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
  },
  [93] = {
    [sym_type] = STATE(141),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
  },
  [94] = {
    [sym_return_list] = STATE(144),
    [sym_parameter_list] = STATE(145),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(424),
  },
  [95] = {
    [sym_double] = ACTIONS(426),
    [anon_sym_LPAREN] = ACTIONS(428),
    [sym_oct] = ACTIONS(428),
    [sym_identifier] = ACTIONS(428),
    [anon_sym_SQUOTE] = ACTIONS(426),
    [sym_null] = ACTIONS(428),
    [sym_float] = ACTIONS(426),
    [anon_sym_DQUOTE] = ACTIONS(426),
    [sym_integer] = ACTIONS(428),
    [sym_hex] = ACTIONS(426),
    [sym_binary] = ACTIONS(426),
    [anon_sym_LBRACE] = ACTIONS(426),
    [sym_long] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
  },
  [96] = {
    [sym_collection] = STATE(146),
    [sym__value] = STATE(146),
    [sym_group_expression] = STATE(146),
    [sym__number] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_string] = STATE(146),
    [sym__collection_or_value] = STATE(146),
    [sym_character] = STATE(146),
    [sym_double] = ACTIONS(430),
    [sym_float] = ACTIONS(430),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(432),
    [sym_identifier] = ACTIONS(432),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null] = ACTIONS(432),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(432),
    [sym_hex] = ACTIONS(430),
    [sym_binary] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
  },
  [97] = {
    [aux_sym_compound_extension_repeat1] = STATE(149),
    [sym_string] = STATE(149),
    [sym_parameter_list] = STATE(150),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(420),
    [sym_identifier] = ACTIONS(436),
    [sym__space] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(440),
  },
  [98] = {
    [anon_sym_DASH_EQ] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_COLON_EQ] = ACTIONS(442),
    [anon_sym_PLUS_PLUS] = ACTIONS(442),
    [anon_sym_CARET] = ACTIONS(444),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_PIPE] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_PIPE_EQ] = ACTIONS(442),
    [anon_sym_RBRACE] = ACTIONS(442),
    [anon_sym_PLUS_EQ] = ACTIONS(442),
    [anon_sym_PIPE_PIPE] = ACTIONS(442),
    [anon_sym_STAR_EQ] = ACTIONS(442),
    [anon_sym_DOLLAR] = ACTIONS(442),
    [anon_sym_DASH_DASH] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_CARET_EQ] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_LT_LT_EQ] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(444),
    [anon_sym_AMP_AMP] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PERCENT] = ACTIONS(444),
    [anon_sym_GT_GT_EQ] = ACTIONS(442),
    [anon_sym_AMP_EQ] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_LT_LT] = ACTIONS(444),
    [anon_sym_PERCENT_EQ] = ACTIONS(442),
  },
  [99] = {
    [anon_sym_PLUS_DASH] = ACTIONS(213),
    [anon_sym_SLASH_STAR] = ACTIONS(213),
    [anon_sym_DASH_PLUS] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(211),
  },
  [100] = {
    [sym__block_comment_plus] = STATE(104),
    [aux_sym__block_comment_plus_repeat1] = STATE(104),
    [sym__block_comment_star] = STATE(104),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(446),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(217),
  },
  [101] = {
    [anon_sym_PLUS_DASH] = ACTIONS(283),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [anon_sym_DASH_PLUS] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(281),
  },
  [102] = {
    [sym__block_comment_plus] = STATE(123),
    [sym__block_comment_star] = STATE(123),
    [aux_sym__block_comment_star_repeat1] = STATE(123),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(287),
  },
  [103] = {
    [anon_sym_f32] = ACTIONS(450),
    [anon_sym_i32] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_u8] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(452),
    [sym_is_declare] = ACTIONS(450),
    [anon_sym_case] = ACTIONS(450),
    [anon_sym_PLUS_PLUS] = ACTIONS(452),
    [sym_integer] = ACTIONS(450),
    [anon_sym_private] = ACTIONS(450),
    [sym_binary] = ACTIONS(452),
    [anon_sym_SLASH_SLASH] = ACTIONS(450),
    [anon_sym_PLUS_DASH] = ACTIONS(452),
    [sym_is_override] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_module] = ACTIONS(450),
    [anon_sym_function] = ACTIONS(450),
    [anon_sym_f64] = ACTIONS(450),
    [anon_sym_s16] = ACTIONS(450),
    [anon_sym_i8] = ACTIONS(450),
    [anon_sym_u16] = ACTIONS(450),
    [anon_sym_return] = ACTIONS(450),
    [anon_sym_goto] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [sym_is_external] = ACTIONS(450),
    [anon_sym_default] = ACTIONS(450),
    [anon_sym_while] = ACTIONS(450),
    [anon_sym_DASH_DASH] = ACTIONS(452),
    [anon_sym_protected] = ACTIONS(450),
    [sym_long] = ACTIONS(452),
    [sym_double] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(450),
    [sym_null] = ACTIONS(450),
    [anon_sym_end] = ACTIONS(450),
    [anon_sym_method] = ACTIONS(450),
    [anon_sym_s8] = ACTIONS(450),
    [anon_sym_u64] = ACTIONS(450),
    [anon_sym_s32] = ACTIONS(450),
    [anon_sym_i16] = ACTIONS(450),
    [anon_sym_u32] = ACTIONS(450),
    [anon_sym_i64] = ACTIONS(450),
    [anon_sym_section] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_if] = ACTIONS(450),
    [sym_oct] = ACTIONS(450),
    [anon_sym_switch] = ACTIONS(450),
    [anon_sym_STAR_STAR] = ACTIONS(452),
    [sym_float] = ACTIONS(452),
    [sym_hex] = ACTIONS(452),
    [anon_sym_SLASH_STAR] = ACTIONS(452),
    [anon_sym_readonly] = ACTIONS(450),
    [sym_is_overridable] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_enum] = ACTIONS(450),
    [sym_is_interface] = ACTIONS(450),
  },
  [104] = {
    [sym__block_comment_plus] = STATE(104),
    [aux_sym__block_comment_plus_repeat1] = STATE(104),
    [sym__block_comment_star] = STATE(104),
    [anon_sym_PLUS_DASH] = ACTIONS(454),
    [anon_sym_SLASH_STAR] = ACTIONS(457),
    [anon_sym_DASH_PLUS] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(462),
  },
  [105] = {
    [sym_type] = STATE(153),
    [sym__base_type] = STATE(154),
    [sym_primitive_type] = STATE(154),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(465),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
  },
  [106] = {
    [anon_sym_DASH_EQ] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_COLON_EQ] = ACTIONS(467),
    [anon_sym_PLUS_PLUS] = ACTIONS(467),
    [anon_sym_CARET] = ACTIONS(469),
    [anon_sym_GT_EQ] = ACTIONS(467),
    [anon_sym_BANG_EQ] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_PIPE_EQ] = ACTIONS(467),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_PLUS_EQ] = ACTIONS(467),
    [anon_sym_PIPE_PIPE] = ACTIONS(467),
    [anon_sym_STAR_EQ] = ACTIONS(467),
    [anon_sym_DOLLAR] = ACTIONS(467),
    [anon_sym_DASH_DASH] = ACTIONS(467),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_EQ_EQ] = ACTIONS(467),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_CARET_EQ] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(469),
    [anon_sym_LT_LT_EQ] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(469),
    [anon_sym_SLASH_EQ] = ACTIONS(467),
    [anon_sym_LT] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(467),
    [anon_sym_AMP_AMP] = ACTIONS(467),
    [anon_sym_LT_EQ] = ACTIONS(467),
    [anon_sym_AMP] = ACTIONS(469),
    [anon_sym_GT_GT_EQ] = ACTIONS(467),
    [anon_sym_AMP_EQ] = ACTIONS(467),
    [anon_sym_PERCENT] = ACTIONS(469),
    [anon_sym_LT_LT] = ACTIONS(469),
    [anon_sym_PERCENT_EQ] = ACTIONS(467),
  },
  [107] = {
    [sym_double] = ACTIONS(471),
    [anon_sym_LPAREN] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [sym_oct] = ACTIONS(473),
    [sym_null] = ACTIONS(473),
    [sym_float] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [sym_integer] = ACTIONS(473),
    [sym_hex] = ACTIONS(471),
    [sym_binary] = ACTIONS(471),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(471),
  },
  [108] = {
    [sym__literal] = STATE(155),
    [sym_string] = STATE(155),
    [sym__value] = STATE(155),
    [sym_group_expression] = STATE(155),
    [sym__number] = STATE(155),
    [sym_character] = STATE(155),
    [sym_double] = ACTIONS(475),
    [sym_float] = ACTIONS(475),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(477),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_oct] = ACTIONS(477),
    [sym_null] = ACTIONS(477),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(477),
    [sym_hex] = ACTIONS(475),
    [sym_binary] = ACTIONS(475),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(475),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym__space] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_DASH_EQ] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_STAR] = ACTIONS(483),
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_COLON_EQ] = ACTIONS(481),
    [anon_sym_PLUS_PLUS] = ACTIONS(481),
    [anon_sym_CARET] = ACTIONS(483),
    [anon_sym_GT_EQ] = ACTIONS(481),
    [anon_sym_BANG_EQ] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PLUS] = ACTIONS(483),
    [anon_sym_PIPE_EQ] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(481),
    [anon_sym_PLUS_EQ] = ACTIONS(481),
    [anon_sym_PIPE_PIPE] = ACTIONS(481),
    [anon_sym_STAR_EQ] = ACTIONS(481),
    [anon_sym_DOLLAR] = ACTIONS(481),
    [anon_sym_DASH_DASH] = ACTIONS(481),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_EQ_EQ] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(483),
    [anon_sym_CARET_EQ] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(483),
    [anon_sym_LT_LT_EQ] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(483),
    [anon_sym_SLASH_EQ] = ACTIONS(481),
    [anon_sym_LT] = ACTIONS(483),
    [anon_sym_AMP_AMP] = ACTIONS(481),
    [anon_sym_LT_EQ] = ACTIONS(481),
    [anon_sym_AMP] = ACTIONS(483),
    [anon_sym_PERCENT] = ACTIONS(483),
    [anon_sym_GT_GT_EQ] = ACTIONS(481),
    [anon_sym_AMP_EQ] = ACTIONS(481),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_LT_LT] = ACTIONS(483),
    [anon_sym_PERCENT_EQ] = ACTIONS(481),
  },
  [111] = {
    [sym__escape_sequence] = STATE(111),
    [aux_sym_string_repeat1] = STATE(111),
    [anon_sym_BSLASHf] = ACTIONS(485),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(485),
    [anon_sym_BSLASHn] = ACTIONS(485),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(485),
    [anon_sym_BSLASHt] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(488),
    [anon_sym_BSLASH0] = ACTIONS(485),
    [anon_sym_BSLASHr] = ACTIONS(485),
    [anon_sym_BSLASHb] = ACTIONS(485),
    [anon_sym_BSLASHv] = ACTIONS(485),
    [aux_sym_string_token1] = ACTIONS(490),
    [anon_sym_BSLASHa] = ACTIONS(485),
  },
  [112] = {
    [sym_return_list] = STATE(157),
    [sym_parameter_list] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(493),
  },
  [113] = {
    [sym_binary_op] = STATE(160),
    [sym_assignment_post_op] = STATE(89),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(229),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_DASH_DASH] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(229),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
  },
  [115] = {
    [sym__literal] = STATE(161),
    [sym_string] = STATE(161),
    [sym__value] = STATE(161),
    [sym_group_expression] = STATE(161),
    [sym__number] = STATE(161),
    [sym_character] = STATE(161),
    [sym_double] = ACTIONS(497),
    [sym_float] = ACTIONS(497),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(499),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_oct] = ACTIONS(499),
    [sym_null] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(499),
    [sym_hex] = ACTIONS(497),
    [sym_binary] = ACTIONS(497),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(497),
  },
  [116] = {
    [anon_sym_while] = ACTIONS(501),
    [anon_sym_if] = ACTIONS(501),
    [anon_sym_module] = ACTIONS(501),
    [anon_sym_function] = ACTIONS(501),
    [anon_sym_switch] = ACTIONS(501),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(501),
    [anon_sym_case] = ACTIONS(501),
    [anon_sym_default] = ACTIONS(501),
  },
  [117] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(503),
  },
  [118] = {
    [anon_sym_PLUS_DASH] = ACTIONS(213),
    [anon_sym_SLASH_STAR] = ACTIONS(213),
    [anon_sym_STAR_SLASH] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(211),
  },
  [119] = {
    [sym__block_comment_plus] = STATE(104),
    [aux_sym__block_comment_plus_repeat1] = STATE(104),
    [sym__block_comment_star] = STATE(104),
    [anon_sym_PLUS_DASH] = ACTIONS(93),
    [anon_sym_SLASH_STAR] = ACTIONS(95),
    [anon_sym_DASH_PLUS] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(217),
  },
  [120] = {
    [anon_sym_PLUS_DASH] = ACTIONS(283),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [anon_sym_STAR_SLASH] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(281),
  },
  [121] = {
    [sym__block_comment_plus] = STATE(123),
    [sym__block_comment_star] = STATE(123),
    [aux_sym__block_comment_star_repeat1] = STATE(123),
    [anon_sym_PLUS_DASH] = ACTIONS(141),
    [anon_sym_SLASH_STAR] = ACTIONS(143),
    [anon_sym_STAR_SLASH] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(287),
  },
  [122] = {
    [anon_sym_f32] = ACTIONS(509),
    [anon_sym_i32] = ACTIONS(509),
    [sym_identifier] = ACTIONS(509),
    [anon_sym_u8] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_is_declare] = ACTIONS(509),
    [anon_sym_case] = ACTIONS(509),
    [anon_sym_PLUS_PLUS] = ACTIONS(511),
    [sym_integer] = ACTIONS(509),
    [anon_sym_private] = ACTIONS(509),
    [sym_binary] = ACTIONS(511),
    [anon_sym_SLASH_SLASH] = ACTIONS(509),
    [anon_sym_PLUS_DASH] = ACTIONS(511),
    [sym_is_override] = ACTIONS(509),
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_module] = ACTIONS(509),
    [anon_sym_function] = ACTIONS(509),
    [anon_sym_f64] = ACTIONS(509),
    [anon_sym_s16] = ACTIONS(509),
    [anon_sym_i8] = ACTIONS(509),
    [anon_sym_u16] = ACTIONS(509),
    [anon_sym_return] = ACTIONS(509),
    [anon_sym_goto] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(511),
    [sym_is_external] = ACTIONS(509),
    [anon_sym_default] = ACTIONS(509),
    [anon_sym_while] = ACTIONS(509),
    [anon_sym_DASH_DASH] = ACTIONS(511),
    [anon_sym_protected] = ACTIONS(509),
    [sym_long] = ACTIONS(511),
    [sym_double] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [sym_is_primitive] = ACTIONS(509),
    [sym_null] = ACTIONS(509),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_method] = ACTIONS(509),
    [anon_sym_s8] = ACTIONS(509),
    [anon_sym_u64] = ACTIONS(509),
    [anon_sym_s32] = ACTIONS(509),
    [anon_sym_i16] = ACTIONS(509),
    [anon_sym_u32] = ACTIONS(509),
    [anon_sym_i64] = ACTIONS(509),
    [anon_sym_section] = ACTIONS(509),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_if] = ACTIONS(509),
    [sym_oct] = ACTIONS(509),
    [anon_sym_switch] = ACTIONS(509),
    [anon_sym_STAR_STAR] = ACTIONS(511),
    [sym_float] = ACTIONS(511),
    [sym_hex] = ACTIONS(511),
    [anon_sym_SLASH_STAR] = ACTIONS(511),
    [anon_sym_readonly] = ACTIONS(509),
    [sym_is_overridable] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_enum] = ACTIONS(509),
    [sym_is_interface] = ACTIONS(509),
  },
  [123] = {
    [sym__block_comment_plus] = STATE(123),
    [sym__block_comment_star] = STATE(123),
    [aux_sym__block_comment_star_repeat1] = STATE(123),
    [anon_sym_PLUS_DASH] = ACTIONS(513),
    [anon_sym_SLASH_STAR] = ACTIONS(516),
    [anon_sym_STAR_SLASH] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(521),
  },
  [124] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(524),
  },
  [125] = {
    [sym_collection] = STATE(60),
    [sym__value] = STATE(35),
    [sym_group_expression] = STATE(35),
    [sym_assignment_expression] = STATE(165),
    [sym__number] = STATE(35),
    [sym__assignment_or_collection_or_value] = STATE(165),
    [sym__literal] = STATE(35),
    [sym_string] = STATE(35),
    [sym__collection_or_value] = STATE(60),
    [sym_character] = STATE(35),
    [sym_double] = ACTIONS(21),
    [sym_float] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(17),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(17),
    [sym_hex] = ACTIONS(21),
    [sym_binary] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(21),
    [sym__space] = ACTIONS(3),
  },
  [126] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(526),
  },
  [127] = {
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(528),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [anon_sym_LT_LT_EQ] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_PIPE_EQ] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_GT_GT_EQ] = ACTIONS(528),
    [anon_sym_AMP_EQ] = ACTIONS(528),
    [anon_sym_PERCENT_EQ] = ACTIONS(528),
  },
  [128] = {
    [sym_static_assignment] = STATE(167),
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(303),
  },
  [129] = {
    [aux_sym_enum_definition_repeat1] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
  },
  [130] = {
    [sym_identifier] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
  },
  [131] = {
    [sym_is_function] = STATE(172),
    [sym_is_method] = STATE(172),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(129),
  },
  [132] = {
    [sym_collection] = STATE(173),
    [sym__value] = STATE(173),
    [sym_group_expression] = STATE(173),
    [sym__number] = STATE(173),
    [sym__literal] = STATE(173),
    [sym_string] = STATE(173),
    [sym__collection_or_value] = STATE(173),
    [sym_character] = STATE(173),
    [sym_double] = ACTIONS(538),
    [sym_float] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_oct] = ACTIONS(540),
    [sym_identifier] = ACTIONS(540),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_null] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(540),
    [sym_hex] = ACTIONS(538),
    [sym_binary] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(63),
    [sym_long] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_DOT] = ACTIONS(544),
    [sym_identifier] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(544),
  },
  [135] = {
    [anon_sym_RBRACK] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
  },
  [136] = {
    [sym_pointer] = STATE(136),
    [aux_sym_type_repeat1] = STATE(136),
    [anon_sym_STAR] = ACTIONS(548),
    [sym_identifier] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(551),
  },
  [137] = {
    [sym_array] = STATE(138),
    [aux_sym_type_repeat2] = STATE(138),
    [sym_identifier] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [138] = {
    [sym_array] = STATE(138),
    [aux_sym_type_repeat2] = STATE(138),
    [sym_identifier] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(557),
  },
  [139] = {
    [sym_is_function] = STATE(172),
    [sym_is_method] = STATE(172),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [sym_is_primitive] = ACTIONS(560),
  },
  [140] = {
    [sym_static_assignment] = STATE(176),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(542),
  },
  [141] = {
    [sym_identifier] = ACTIONS(562),
    [sym__space] = ACTIONS(3),
  },
  [142] = {
    [sym_type] = STATE(178),
    [sym__base_type] = STATE(179),
    [sym__comma_list_types] = STATE(180),
    [sym_primitive_type] = STATE(179),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(564),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(566),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
  },
  [143] = {
    [sym_type] = STATE(31),
    [sym_access_control] = STATE(183),
    [sym__base_type] = STATE(32),
    [sym__comma_list_variables] = STATE(184),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(185),
    [sym_primitive_type] = STATE(32),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(570),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(570),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(61),
  },
  [144] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(493),
  },
  [145] = {
    [sym_return_list] = STATE(157),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(493),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_RBRACE] = ACTIONS(572),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(572),
  },
  [147] = {
    [sym__escape_sequence] = STATE(187),
    [aux_sym_string_repeat1] = STATE(187),
    [anon_sym_BSLASHf] = ACTIONS(574),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(574),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(574),
    [anon_sym_BSLASHn] = ACTIONS(574),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(574),
    [anon_sym_BSLASHt] = ACTIONS(574),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_BSLASH0] = ACTIONS(574),
    [anon_sym_BSLASHr] = ACTIONS(574),
    [anon_sym_BSLASHb] = ACTIONS(574),
    [anon_sym_BSLASHv] = ACTIONS(574),
    [aux_sym_string_token1] = ACTIONS(578),
    [anon_sym_BSLASHa] = ACTIONS(574),
  },
  [148] = {
    [sym_string] = STATE(188),
    [sym_identifier] = ACTIONS(580),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
  },
  [149] = {
    [aux_sym_compound_extension_repeat1] = STATE(189),
    [sym_string] = STATE(189),
    [sym_parameter_list] = STATE(190),
    [anon_sym_DQUOTE] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(420),
    [sym_identifier] = ACTIONS(582),
    [sym__space] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(584),
  },
  [150] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(584),
  },
  [151] = {
    [anon_sym_PLUS_DASH] = ACTIONS(452),
    [anon_sym_SLASH_STAR] = ACTIONS(452),
    [anon_sym_DASH_PLUS] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(450),
  },
  [152] = {
    [anon_sym_PLUS_DASH] = ACTIONS(511),
    [anon_sym_SLASH_STAR] = ACTIONS(511),
    [anon_sym_DASH_PLUS] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(509),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
  },
  [154] = {
    [sym_pointer] = STATE(192),
    [aux_sym_type_repeat1] = STATE(192),
    [sym_array] = STATE(193),
    [aux_sym_type_repeat2] = STATE(193),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_STAR] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [155] = {
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym__space] = ACTIONS(3),
  },
  [156] = {
    [anon_sym_DASH_EQ] = ACTIONS(590),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(592),
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_COLON_EQ] = ACTIONS(590),
    [anon_sym_PLUS_PLUS] = ACTIONS(590),
    [anon_sym_CARET] = ACTIONS(592),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_PIPE] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(592),
    [anon_sym_PIPE_EQ] = ACTIONS(590),
    [anon_sym_RBRACE] = ACTIONS(590),
    [anon_sym_PLUS_EQ] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(590),
    [anon_sym_STAR_EQ] = ACTIONS(590),
    [anon_sym_DOLLAR] = ACTIONS(590),
    [anon_sym_DASH_DASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(592),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(592),
    [anon_sym_CARET_EQ] = ACTIONS(590),
    [anon_sym_SLASH] = ACTIONS(592),
    [anon_sym_LT_LT_EQ] = ACTIONS(590),
    [anon_sym_GT_GT] = ACTIONS(592),
    [anon_sym_SLASH_EQ] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_AMP] = ACTIONS(592),
    [anon_sym_GT_GT_EQ] = ACTIONS(590),
    [anon_sym_AMP_EQ] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(592),
    [anon_sym_LT_LT] = ACTIONS(592),
    [anon_sym_PERCENT_EQ] = ACTIONS(590),
  },
  [157] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(594),
  },
  [158] = {
    [sym_return_list] = STATE(195),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(594),
  },
  [159] = {
    [anon_sym_while] = ACTIONS(469),
    [sym_double] = ACTIONS(467),
    [anon_sym_SQUOTE] = ACTIONS(467),
    [sym_identifier] = ACTIONS(469),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(469),
    [anon_sym_end] = ACTIONS(469),
    [anon_sym_case] = ACTIONS(469),
    [sym_integer] = ACTIONS(469),
    [sym_binary] = ACTIONS(467),
    [anon_sym_section] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(469),
    [anon_sym_if] = ACTIONS(469),
    [anon_sym_switch] = ACTIONS(469),
    [sym_oct] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(467),
    [sym_float] = ACTIONS(467),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym_hex] = ACTIONS(467),
    [anon_sym_return] = ACTIONS(469),
    [anon_sym_goto] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(467),
    [sym_long] = ACTIONS(467),
    [anon_sym_default] = ACTIONS(469),
  },
  [160] = {
    [sym__literal] = STATE(196),
    [sym_string] = STATE(196),
    [sym__value] = STATE(196),
    [sym_group_expression] = STATE(196),
    [sym__number] = STATE(196),
    [sym_character] = STATE(196),
    [sym_double] = ACTIONS(596),
    [sym_float] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_identifier] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_oct] = ACTIONS(598),
    [sym_null] = ACTIONS(598),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_integer] = ACTIONS(598),
    [sym_hex] = ACTIONS(596),
    [sym_binary] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(596),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
  },
  [162] = {
    [anon_sym_PLUS_DASH] = ACTIONS(452),
    [anon_sym_SLASH_STAR] = ACTIONS(452),
    [anon_sym_STAR_SLASH] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(450),
  },
  [163] = {
    [anon_sym_PLUS_DASH] = ACTIONS(511),
    [anon_sym_SLASH_STAR] = ACTIONS(511),
    [anon_sym_STAR_SLASH] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(509),
  },
  [164] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(602),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(604),
  },
  [166] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(604),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
    [sym__space] = ACTIONS(3),
  },
  [168] = {
    [sym__enum_element] = STATE(199),
    [sym_identifier] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
  },
  [169] = {
    [sym_identifier] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [aux_sym_enum_definition_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
  },
  [171] = {
    [sym_return_list] = STATE(195),
    [sym_parameter_list] = STATE(203),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(594),
  },
  [172] = {
    [sym_identifier] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(617),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_DOT] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(619),
  },
  [175] = {
    [sym_is_function] = STATE(205),
    [sym_is_method] = STATE(205),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(129),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(621),
  },
  [177] = {
    [sym_static_assignment] = STATE(206),
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(621),
  },
  [178] = {
    [aux_sym__comma_list_types_repeat1] = STATE(208),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(625),
  },
  [179] = {
    [sym_pointer] = STATE(209),
    [aux_sym_type_repeat1] = STATE(209),
    [sym_array] = STATE(210),
    [aux_sym_type_repeat2] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(163),
  },
  [180] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(627),
  },
  [181] = {
    [anon_sym_returns] = ACTIONS(629),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(629),
  },
  [182] = {
    [anon_sym_f32] = ACTIONS(91),
    [anon_sym_i32] = ACTIONS(91),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(91),
    [anon_sym_u64] = ACTIONS(91),
    [anon_sym_s32] = ACTIONS(91),
    [anon_sym_i16] = ACTIONS(91),
    [anon_sym_u32] = ACTIONS(91),
    [anon_sym_i64] = ACTIONS(91),
    [anon_sym_f64] = ACTIONS(91),
    [anon_sym_s16] = ACTIONS(91),
    [anon_sym_i8] = ACTIONS(91),
    [anon_sym_u16] = ACTIONS(91),
    [anon_sym_readonly] = ACTIONS(91),
  },
  [183] = {
    [sym_type] = STATE(92),
    [sym__base_type] = STATE(32),
    [sym_readability] = STATE(93),
    [sym_primitive_type] = STATE(32),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(61),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(631),
    [sym__space] = ACTIONS(3),
  },
  [185] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(213),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
  },
  [186] = {
    [anon_sym_DQUOTE] = ACTIONS(243),
    [anon_sym_LPAREN] = ACTIONS(243),
    [sym__space] = ACTIONS(243),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
  },
  [187] = {
    [sym__escape_sequence] = STATE(111),
    [aux_sym_string_repeat1] = STATE(111),
    [anon_sym_BSLASHf] = ACTIONS(247),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(247),
    [anon_sym_BSLASHn] = ACTIONS(247),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(247),
    [anon_sym_BSLASHt] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(637),
    [anon_sym_BSLASH0] = ACTIONS(247),
    [anon_sym_BSLASHr] = ACTIONS(247),
    [anon_sym_BSLASHb] = ACTIONS(247),
    [anon_sym_BSLASHv] = ACTIONS(247),
    [aux_sym_string_token1] = ACTIONS(251),
    [anon_sym_BSLASHa] = ACTIONS(247),
  },
  [188] = {
    [anon_sym_DQUOTE] = ACTIONS(639),
    [anon_sym_LPAREN] = ACTIONS(639),
    [sym__space] = ACTIONS(639),
    [sym_identifier] = ACTIONS(639),
    [anon_sym_DOT] = ACTIONS(639),
  },
  [189] = {
    [aux_sym_compound_extension_repeat1] = STATE(189),
    [sym_string] = STATE(189),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(639),
    [sym__space] = ACTIONS(644),
    [sym_identifier] = ACTIONS(647),
    [anon_sym_DOT] = ACTIONS(639),
  },
  [190] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(650),
  },
  [191] = {
    [sym_double] = ACTIONS(652),
    [anon_sym_LPAREN] = ACTIONS(654),
    [sym_identifier] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [sym_oct] = ACTIONS(654),
    [sym_null] = ACTIONS(654),
    [sym_float] = ACTIONS(652),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [sym_integer] = ACTIONS(654),
    [sym_hex] = ACTIONS(652),
    [sym_binary] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(652),
  },
  [192] = {
    [sym_pointer] = STATE(215),
    [aux_sym_type_repeat1] = STATE(215),
    [sym_array] = STATE(216),
    [aux_sym_type_repeat2] = STATE(216),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_STAR] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [193] = {
    [sym_array] = STATE(217),
    [aux_sym_type_repeat2] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [194] = {
    [anon_sym_DASH_EQ] = ACTIONS(656),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_STAR] = ACTIONS(658),
    [anon_sym_COMMA] = ACTIONS(656),
    [anon_sym_COLON_EQ] = ACTIONS(656),
    [anon_sym_PLUS_PLUS] = ACTIONS(656),
    [anon_sym_CARET] = ACTIONS(658),
    [anon_sym_GT_EQ] = ACTIONS(656),
    [anon_sym_BANG_EQ] = ACTIONS(656),
    [anon_sym_PIPE] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(656),
    [anon_sym_RBRACE] = ACTIONS(656),
    [anon_sym_PLUS_EQ] = ACTIONS(656),
    [anon_sym_PIPE_PIPE] = ACTIONS(656),
    [anon_sym_STAR_EQ] = ACTIONS(656),
    [anon_sym_DOLLAR] = ACTIONS(656),
    [anon_sym_DASH_DASH] = ACTIONS(656),
    [anon_sym_GT] = ACTIONS(658),
    [anon_sym_EQ_EQ] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(658),
    [anon_sym_CARET_EQ] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(656),
    [anon_sym_GT_GT] = ACTIONS(658),
    [anon_sym_SLASH_EQ] = ACTIONS(656),
    [anon_sym_LT] = ACTIONS(658),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_AMP_AMP] = ACTIONS(656),
    [anon_sym_LT_EQ] = ACTIONS(656),
    [anon_sym_AMP] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(656),
    [anon_sym_AMP_EQ] = ACTIONS(656),
    [anon_sym_PERCENT] = ACTIONS(658),
    [anon_sym_LT_LT] = ACTIONS(658),
    [anon_sym_PERCENT_EQ] = ACTIONS(656),
  },
  [195] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(660),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym__space] = ACTIONS(3),
  },
  [197] = {
    [anon_sym_while] = ACTIONS(592),
    [sym_double] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [sym_identifier] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(592),
    [anon_sym_end] = ACTIONS(592),
    [anon_sym_case] = ACTIONS(592),
    [sym_integer] = ACTIONS(592),
    [sym_binary] = ACTIONS(590),
    [anon_sym_section] = ACTIONS(592),
    [anon_sym_LPAREN] = ACTIONS(592),
    [anon_sym_if] = ACTIONS(592),
    [anon_sym_switch] = ACTIONS(592),
    [sym_oct] = ACTIONS(592),
    [anon_sym_DOT] = ACTIONS(590),
    [sym_float] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [sym_hex] = ACTIONS(590),
    [anon_sym_return] = ACTIONS(592),
    [anon_sym_goto] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(590),
    [sym_long] = ACTIONS(590),
    [anon_sym_default] = ACTIONS(592),
  },
  [198] = {
    [sym_array] = STATE(220),
    [anon_sym_f32] = ACTIONS(664),
    [anon_sym_i32] = ACTIONS(664),
    [sym_identifier] = ACTIONS(664),
    [anon_sym_u8] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(664),
    [anon_sym_u64] = ACTIONS(664),
    [anon_sym_s32] = ACTIONS(664),
    [anon_sym_i16] = ACTIONS(664),
    [anon_sym_u32] = ACTIONS(664),
    [anon_sym_i64] = ACTIONS(664),
    [anon_sym_f64] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(666),
    [anon_sym_s16] = ACTIONS(664),
    [anon_sym_i8] = ACTIONS(664),
    [anon_sym_u16] = ACTIONS(664),
  },
  [199] = {
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_RPAREN] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
  },
  [200] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(670),
  },
  [201] = {
    [sym_identifier] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
  },
  [202] = {
    [aux_sym_enum_definition_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
  },
  [203] = {
    [sym_return_list] = STATE(222),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(660),
  },
  [204] = {
    [sym_return_list] = STATE(222),
    [sym_parameter_list] = STATE(223),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(660),
  },
  [205] = {
    [sym_identifier] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
  },
  [206] = {
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(679),
  },
  [207] = {
    [sym_type] = STATE(225),
    [sym__base_type] = STATE(179),
    [sym_primitive_type] = STATE(179),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(564),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
  },
  [208] = {
    [aux_sym__comma_list_types_repeat1] = STATE(226),
    [anon_sym_COMMA] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(681),
  },
  [209] = {
    [sym_pointer] = STATE(227),
    [aux_sym_type_repeat1] = STATE(227),
    [sym_array] = STATE(228),
    [aux_sym_type_repeat2] = STATE(228),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(311),
  },
  [210] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [211] = {
    [anon_sym_returns] = ACTIONS(683),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(683),
  },
  [212] = {
    [sym_type] = STATE(31),
    [sym_access_control] = STATE(183),
    [sym__base_type] = STATE(32),
    [sym_readability] = STATE(39),
    [sym_variable_definition] = STATE(230),
    [sym_primitive_type] = STATE(32),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(570),
    [anon_sym_i32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(570),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(61),
  },
  [213] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(231),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_DQUOTE] = ACTIONS(481),
    [anon_sym_LPAREN] = ACTIONS(481),
    [sym__space] = ACTIONS(481),
    [sym_identifier] = ACTIONS(481),
    [anon_sym_DOT] = ACTIONS(481),
  },
  [215] = {
    [sym_pointer] = STATE(215),
    [aux_sym_type_repeat1] = STATE(215),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_STAR] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(551),
  },
  [216] = {
    [sym_array] = STATE(217),
    [aux_sym_type_repeat2] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [217] = {
    [sym_array] = STATE(217),
    [aux_sym_type_repeat2] = STATE(217),
    [anon_sym_RPAREN] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(557),
  },
  [218] = {
    [anon_sym_while] = ACTIONS(658),
    [sym_double] = ACTIONS(656),
    [anon_sym_SQUOTE] = ACTIONS(656),
    [sym_identifier] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(658),
    [anon_sym_end] = ACTIONS(658),
    [anon_sym_case] = ACTIONS(658),
    [sym_integer] = ACTIONS(658),
    [sym_binary] = ACTIONS(656),
    [anon_sym_section] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_if] = ACTIONS(658),
    [anon_sym_switch] = ACTIONS(658),
    [sym_oct] = ACTIONS(658),
    [anon_sym_DOT] = ACTIONS(656),
    [sym_float] = ACTIONS(656),
    [anon_sym_DQUOTE] = ACTIONS(656),
    [sym_hex] = ACTIONS(656),
    [anon_sym_return] = ACTIONS(658),
    [anon_sym_goto] = ACTIONS(658),
    [anon_sym_LBRACE] = ACTIONS(656),
    [sym_long] = ACTIONS(656),
    [anon_sym_default] = ACTIONS(658),
  },
  [219] = {
    [anon_sym_RBRACK] = ACTIONS(687),
    [sym_integer] = ACTIONS(689),
    [sym__space] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_f32] = ACTIONS(691),
    [anon_sym_i32] = ACTIONS(691),
    [sym_identifier] = ACTIONS(691),
    [anon_sym_u8] = ACTIONS(691),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(691),
    [anon_sym_u64] = ACTIONS(691),
    [anon_sym_s32] = ACTIONS(691),
    [anon_sym_i16] = ACTIONS(691),
    [anon_sym_u32] = ACTIONS(691),
    [anon_sym_i64] = ACTIONS(691),
    [anon_sym_f64] = ACTIONS(691),
    [anon_sym_s16] = ACTIONS(691),
    [anon_sym_i8] = ACTIONS(691),
    [anon_sym_u16] = ACTIONS(691),
  },
  [221] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(693),
  },
  [222] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
  },
  [223] = {
    [sym_return_list] = STATE(234),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
  },
  [224] = {
    [sym_return_list] = STATE(234),
    [sym_parameter_list] = STATE(235),
    [anon_sym_LPAREN] = ACTIONS(420),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
  },
  [225] = {
    [anon_sym_COMMA] = ACTIONS(697),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(697),
  },
  [226] = {
    [aux_sym__comma_list_types_repeat1] = STATE(226),
    [anon_sym_COMMA] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(697),
  },
  [227] = {
    [sym_pointer] = STATE(227),
    [aux_sym_type_repeat1] = STATE(227),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_STAR] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(551),
  },
  [228] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_DOT] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(165),
  },
  [229] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(557),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [sym__space] = ACTIONS(3),
  },
  [231] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(704),
    [anon_sym_RPAREN] = ACTIONS(702),
    [sym__space] = ACTIONS(3),
  },
  [232] = {
    [anon_sym_f32] = ACTIONS(707),
    [anon_sym_i32] = ACTIONS(707),
    [sym_identifier] = ACTIONS(707),
    [anon_sym_u8] = ACTIONS(707),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(707),
    [anon_sym_u64] = ACTIONS(707),
    [anon_sym_s32] = ACTIONS(707),
    [anon_sym_i16] = ACTIONS(707),
    [anon_sym_u32] = ACTIONS(707),
    [anon_sym_i64] = ACTIONS(707),
    [anon_sym_f64] = ACTIONS(707),
    [anon_sym_s16] = ACTIONS(707),
    [anon_sym_i8] = ACTIONS(707),
    [anon_sym_u16] = ACTIONS(707),
  },
  [233] = {
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym__space] = ACTIONS(3),
  },
  [234] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(711),
  },
  [235] = {
    [sym_return_list] = STATE(237),
    [anon_sym_returns] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(711),
  },
  [236] = {
    [anon_sym_f32] = ACTIONS(713),
    [anon_sym_i32] = ACTIONS(713),
    [sym_identifier] = ACTIONS(713),
    [anon_sym_u8] = ACTIONS(713),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(713),
    [anon_sym_u64] = ACTIONS(713),
    [anon_sym_s32] = ACTIONS(713),
    [anon_sym_i16] = ACTIONS(713),
    [anon_sym_u32] = ACTIONS(713),
    [anon_sym_i64] = ACTIONS(713),
    [anon_sym_f64] = ACTIONS(713),
    [anon_sym_s16] = ACTIONS(713),
    [anon_sym_i8] = ACTIONS(713),
    [anon_sym_u16] = ACTIONS(713),
  },
  [237] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(715),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = false}, SHIFT(35),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(35),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, SHIFT(9),
  [27] = {.count = 1, .reusable = false}, SHIFT(30),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = false}, SHIFT(12),
  [35] = {.count = 1, .reusable = false}, SHIFT(13),
  [37] = {.count = 1, .reusable = false}, SHIFT(14),
  [39] = {.count = 1, .reusable = true}, SHIFT(15),
  [41] = {.count = 1, .reusable = false}, SHIFT(16),
  [43] = {.count = 1, .reusable = false}, SHIFT(17),
  [45] = {.count = 1, .reusable = false}, SHIFT(18),
  [47] = {.count = 1, .reusable = false}, SHIFT(19),
  [49] = {.count = 1, .reusable = false}, SHIFT(20),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [55] = {.count = 1, .reusable = false}, SHIFT(22),
  [57] = {.count = 1, .reusable = false}, SHIFT(23),
  [59] = {.count = 1, .reusable = true}, SHIFT(24),
  [61] = {.count = 1, .reusable = false}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(26),
  [65] = {.count = 1, .reusable = false}, SHIFT(27),
  [67] = {.count = 1, .reusable = false}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(44),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [79] = {.count = 1, .reusable = false}, SHIFT(45),
  [81] = {.count = 1, .reusable = true}, SHIFT(45),
  [83] = {.count = 1, .reusable = false}, SHIFT(32),
  [85] = {.count = 1, .reusable = true}, SHIFT(10),
  [87] = {.count = 1, .reusable = false}, SHIFT(48),
  [89] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(49),
  [95] = {.count = 1, .reusable = true}, SHIFT(50),
  [97] = {.count = 1, .reusable = true}, SHIFT(51),
  [99] = {.count = 1, .reusable = false}, SHIFT(52),
  [101] = {.count = 1, .reusable = true}, SHIFT(55),
  [103] = {.count = 1, .reusable = true}, SHIFT(53),
  [105] = {.count = 1, .reusable = false}, SHIFT(53),
  [107] = {.count = 1, .reusable = false}, SHIFT(55),
  [109] = {.count = 1, .reusable = true}, SHIFT(54),
  [111] = {.count = 1, .reusable = false}, SHIFT(54),
  [113] = {.count = 1, .reusable = true}, SHIFT(58),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(61),
  [119] = {.count = 1, .reusable = true}, SHIFT(63),
  [121] = {.count = 1, .reusable = true}, SHIFT(62),
  [123] = {.count = 1, .reusable = false}, SHIFT(63),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(12),
  [129] = {.count = 1, .reusable = true}, SHIFT(20),
  [131] = {.count = 1, .reusable = false}, SHIFT(66),
  [133] = {.count = 1, .reusable = false}, SHIFT(67),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [137] = {.count = 1, .reusable = true}, SHIFT(68),
  [139] = {.count = 1, .reusable = true}, SHIFT(69),
  [141] = {.count = 1, .reusable = true}, SHIFT(72),
  [143] = {.count = 1, .reusable = true}, SHIFT(73),
  [145] = {.count = 1, .reusable = true}, SHIFT(74),
  [147] = {.count = 1, .reusable = false}, SHIFT(75),
  [149] = {.count = 1, .reusable = true}, SHIFT(76),
  [151] = {.count = 1, .reusable = true}, SHIFT(79),
  [153] = {.count = 1, .reusable = true}, SHIFT(81),
  [155] = {.count = 1, .reusable = true}, SHIFT(80),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(82),
  [161] = {.count = 1, .reusable = true}, SHIFT(83),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(84),
  [167] = {.count = 1, .reusable = true}, SHIFT(87),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [173] = {.count = 1, .reusable = true}, SHIFT(88),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [177] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [179] = {.count = 1, .reusable = false}, SHIFT(80),
  [181] = {.count = 1, .reusable = false}, SHIFT(81),
  [183] = {.count = 1, .reusable = false}, SHIFT(91),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [187] = {.count = 1, .reusable = true}, SHIFT(94),
  [189] = {.count = 1, .reusable = true}, SHIFT(95),
  [191] = {.count = 1, .reusable = true}, SHIFT(97),
  [193] = {.count = 1, .reusable = true}, SHIFT(98),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(99),
  [205] = {.count = 1, .reusable = false}, SHIFT(100),
  [207] = {.count = 1, .reusable = true}, SHIFT(101),
  [209] = {.count = 1, .reusable = false}, SHIFT(102),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(103),
  [217] = {.count = 1, .reusable = false}, SHIFT(104),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [223] = {.count = 1, .reusable = true}, SHIFT(105),
  [225] = {.count = 1, .reusable = true}, SHIFT(106),
  [227] = {.count = 1, .reusable = false}, SHIFT(107),
  [229] = {.count = 1, .reusable = true}, SHIFT(107),
  [231] = {.count = 1, .reusable = true}, SHIFT(109),
  [233] = {.count = 1, .reusable = false}, SHIFT(109),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(111),
  [249] = {.count = 1, .reusable = true}, SHIFT(110),
  [251] = {.count = 1, .reusable = false}, SHIFT(111),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(112),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_end_extension, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(113),
  [265] = {.count = 1, .reusable = false}, SHIFT(113),
  [267] = {.count = 1, .reusable = false}, SHIFT(116),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [273] = {.count = 1, .reusable = true}, SHIFT(118),
  [275] = {.count = 1, .reusable = false}, SHIFT(119),
  [277] = {.count = 1, .reusable = true}, SHIFT(120),
  [279] = {.count = 1, .reusable = false}, SHIFT(121),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(122),
  [287] = {.count = 1, .reusable = false}, SHIFT(123),
  [289] = {.count = 1, .reusable = true}, SHIFT(124),
  [291] = {.count = 1, .reusable = true}, SHIFT(125),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [295] = {.count = 1, .reusable = true}, SHIFT(127),
  [297] = {.count = 1, .reusable = true}, SHIFT(128),
  [299] = {.count = 1, .reusable = true}, SHIFT(131),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [303] = {.count = 1, .reusable = true}, SHIFT(132),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [307] = {.count = 1, .reusable = true}, SHIFT(134),
  [309] = {.count = 1, .reusable = true}, SHIFT(135),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [321] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [324] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [327] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [330] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [333] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [339] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [342] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [345] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [348] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [351] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [357] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [360] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [369] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [372] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [393] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [395] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [416] = {.count = 1, .reusable = true}, SHIFT(139),
  [418] = {.count = 1, .reusable = true}, SHIFT(140),
  [420] = {.count = 1, .reusable = true}, SHIFT(143),
  [422] = {.count = 1, .reusable = true}, SHIFT(142),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [430] = {.count = 1, .reusable = true}, SHIFT(146),
  [432] = {.count = 1, .reusable = false}, SHIFT(146),
  [434] = {.count = 1, .reusable = true}, SHIFT(147),
  [436] = {.count = 1, .reusable = true}, SHIFT(149),
  [438] = {.count = 1, .reusable = true}, SHIFT(148),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_compound_extension, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [446] = {.count = 1, .reusable = true}, SHIFT(151),
  [448] = {.count = 1, .reusable = true}, SHIFT(152),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 3),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(49),
  [457] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(50),
  [460] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [462] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(104),
  [465] = {.count = 1, .reusable = false}, SHIFT(154),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [475] = {.count = 1, .reusable = true}, SHIFT(155),
  [477] = {.count = 1, .reusable = false}, SHIFT(155),
  [479] = {.count = 1, .reusable = true}, SHIFT(156),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(111),
  [488] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [490] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(111),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(159),
  [497] = {.count = 1, .reusable = true}, SHIFT(161),
  [499] = {.count = 1, .reusable = false}, SHIFT(161),
  [501] = {.count = 1, .reusable = true}, SHIFT(66),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [505] = {.count = 1, .reusable = true}, SHIFT(162),
  [507] = {.count = 1, .reusable = true}, SHIFT(163),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 3),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(72),
  [516] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(73),
  [519] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(123),
  [524] = {.count = 1, .reusable = true}, SHIFT(164),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [532] = {.count = 1, .reusable = true}, SHIFT(168),
  [534] = {.count = 1, .reusable = true}, SHIFT(169),
  [536] = {.count = 1, .reusable = true}, SHIFT(171),
  [538] = {.count = 1, .reusable = true}, SHIFT(173),
  [540] = {.count = 1, .reusable = false}, SHIFT(173),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [546] = {.count = 1, .reusable = true}, SHIFT(174),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(83),
  [551] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [555] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(84),
  [560] = {.count = 1, .reusable = true}, SHIFT(175),
  [562] = {.count = 1, .reusable = true}, SHIFT(177),
  [564] = {.count = 1, .reusable = false}, SHIFT(179),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [568] = {.count = 1, .reusable = true}, SHIFT(181),
  [570] = {.count = 1, .reusable = false}, SHIFT(182),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [574] = {.count = 1, .reusable = true}, SHIFT(187),
  [576] = {.count = 1, .reusable = true}, SHIFT(186),
  [578] = {.count = 1, .reusable = false}, SHIFT(187),
  [580] = {.count = 1, .reusable = true}, SHIFT(188),
  [582] = {.count = 1, .reusable = true}, SHIFT(189),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_compound_extension, 4),
  [586] = {.count = 1, .reusable = true}, SHIFT(191),
  [588] = {.count = 1, .reusable = true}, SHIFT(194),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [596] = {.count = 1, .reusable = true}, SHIFT(196),
  [598] = {.count = 1, .reusable = false}, SHIFT(196),
  [600] = {.count = 1, .reusable = true}, SHIFT(197),
  [602] = {.count = 1, .reusable = true}, SHIFT(198),
  [604] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(125),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [611] = {.count = 1, .reusable = true}, SHIFT(200),
  [613] = {.count = 1, .reusable = true}, SHIFT(201),
  [615] = {.count = 1, .reusable = true}, SHIFT(204),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [621] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [623] = {.count = 1, .reusable = true}, SHIFT(207),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [631] = {.count = 1, .reusable = true}, SHIFT(211),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [635] = {.count = 1, .reusable = true}, SHIFT(212),
  [637] = {.count = 1, .reusable = true}, SHIFT(214),
  [639] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_extension_repeat1, 2),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_extension_repeat1, 2), SHIFT_REPEAT(147),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_extension_repeat1, 2), SHIFT_REPEAT(148),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_extension_repeat1, 2), SHIFT_REPEAT(189),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_compound_extension, 5),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_cast_ops, 4),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_cast_ops, 4),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [662] = {.count = 1, .reusable = true}, SHIFT(218),
  [664] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 5),
  [666] = {.count = 1, .reusable = true}, SHIFT(219),
  [668] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [672] = {.count = 1, .reusable = true}, SHIFT(221),
  [674] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(168),
  [677] = {.count = 1, .reusable = true}, SHIFT(224),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [687] = {.count = 1, .reusable = true}, SHIFT(232),
  [689] = {.count = 1, .reusable = true}, SHIFT(233),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 6),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [697] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(207),
  [702] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [704] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(212),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [709] = {.count = 1, .reusable = true}, SHIFT(236),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 8),
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
