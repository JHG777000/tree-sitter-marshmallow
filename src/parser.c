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
#define STATE_COUNT 345
#define SYMBOL_COUNT 209
#define ALIAS_COUNT 0
#define TOKEN_COUNT 128
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
  anon_sym_use = 17,
  anon_sym_require = 18,
  anon_sym_module = 19,
  anon_sym_package = 20,
  anon_sym_end = 21,
  anon_sym_enum = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_function = 25,
  anon_sym_method = 26,
  sym_is_interface = 27,
  sym_is_overridable = 28,
  sym_is_override = 29,
  sym_is_primitive = 30,
  anon_sym_readonly = 31,
  anon_sym_writelimited = 32,
  anon_sym_private_write = 33,
  anon_sym_protected_write = 34,
  anon_sym_system_readwrite = 35,
  anon_sym_COLON = 36,
  anon_sym_returns = 37,
  anon_sym_string = 38,
  anon_sym_symbol = 39,
  anon_sym_arguments = 40,
  anon_sym_i8 = 41,
  anon_sym_i16 = 42,
  anon_sym_i32 = 43,
  anon_sym_i64 = 44,
  anon_sym_u8 = 45,
  anon_sym_u16 = 46,
  anon_sym_u32 = 47,
  anon_sym_u64 = 48,
  anon_sym_f32 = 49,
  anon_sym_f64 = 50,
  anon_sym_s8 = 51,
  anon_sym_s16 = 52,
  anon_sym_s32 = 53,
  anon_sym_STAR = 54,
  anon_sym_LBRACK = 55,
  anon_sym_RBRACK = 56,
  sym_is_declare = 57,
  sym_is_external = 58,
  anon_sym_if = 59,
  anon_sym_while = 60,
  anon_sym_switch = 61,
  anon_sym_case = 62,
  anon_sym_default = 63,
  anon_sym_goto = 64,
  anon_sym_section = 65,
  anon_sym_COLON_EQ = 66,
  anon_sym_return = 67,
  sym__scope_op = 68,
  sym__access_op = 69,
  anon_sym_DOLLAR = 70,
  anon_sym_DOLLAR_DOLLAR = 71,
  anon_sym_DOLLAR_DOLLAR_DOLLAR = 72,
  anon_sym_DASH = 73,
  anon_sym_AMP = 74,
  anon_sym_BANG = 75,
  anon_sym_TILDE = 76,
  anon_sym_PLUS = 77,
  anon_sym_SLASH = 78,
  anon_sym_PERCENT = 79,
  anon_sym_PIPE = 80,
  anon_sym_CARET = 81,
  anon_sym_GT = 82,
  anon_sym_LT = 83,
  anon_sym_GT_EQ = 84,
  anon_sym_LT_EQ = 85,
  anon_sym_BANG_EQ = 86,
  anon_sym_EQ_EQ = 87,
  anon_sym_AMP_AMP = 88,
  anon_sym_PIPE_PIPE = 89,
  anon_sym_GT_GT = 90,
  anon_sym_LT_LT = 91,
  anon_sym_PLUS_EQ = 92,
  anon_sym_DASH_EQ = 93,
  anon_sym_STAR_EQ = 94,
  anon_sym_SLASH_EQ = 95,
  anon_sym_PERCENT_EQ = 96,
  anon_sym_AMP_EQ = 97,
  anon_sym_PIPE_EQ = 98,
  anon_sym_CARET_EQ = 99,
  anon_sym_GT_GT_EQ = 100,
  anon_sym_LT_LT_EQ = 101,
  anon_sym_LBRACE = 102,
  anon_sym_RBRACE = 103,
  sym_null = 104,
  sym_identifier = 105,
  anon_sym_DQUOTE = 106,
  aux_sym_string_token1 = 107,
  anon_sym_SQUOTE = 108,
  aux_sym_character_token1 = 109,
  anon_sym_BSLASH_BSLASH = 110,
  anon_sym_BSLASH0 = 111,
  anon_sym_BSLASHa = 112,
  anon_sym_BSLASHb = 113,
  anon_sym_BSLASHf = 114,
  anon_sym_BSLASHn = 115,
  anon_sym_BSLASHr = 116,
  anon_sym_BSLASHt = 117,
  anon_sym_BSLASHv = 118,
  anon_sym_BSLASH_DQUOTE = 119,
  anon_sym_BSLASH_SQUOTE = 120,
  sym_oct = 121,
  sym_integer = 122,
  sym_long = 123,
  sym_float = 124,
  sym_double = 125,
  sym_hex = 126,
  sym_binary = 127,
  sym_source_file = 128,
  sym__block_comment_star = 129,
  sym__block_comment_plus = 130,
  sym__comment = 131,
  sym__comma_list_variables = 132,
  sym__comma_list_values = 133,
  sym__comma_list_assignment_or_collection_or_value = 134,
  sym__comma_list_types = 135,
  sym_access_control = 136,
  sym__sentence = 137,
  sym_definition = 138,
  sym_use_definition = 139,
  sym_module_definition = 140,
  sym_extension = 141,
  sym_end_extension = 142,
  sym__enum_element = 143,
  sym_enum_definition = 144,
  sym_is_function = 145,
  sym_is_method = 146,
  sym__override = 147,
  sym_function_definition = 148,
  sym_readability = 149,
  sym_variable_definition = 150,
  sym_container_definition = 151,
  sym_parameter_list = 152,
  sym_return_list = 153,
  sym_container_types = 154,
  sym_type = 155,
  sym__base_type = 156,
  sym_primitive_type = 157,
  sym_pointer = 158,
  sym_array = 159,
  sym_declaration_definition = 160,
  sym_statement = 161,
  sym_end_statement = 162,
  sym__control_flow_statement = 163,
  sym_goto_statement = 164,
  sym_section_statement = 165,
  sym_single_line_if_statement = 166,
  sym_if_statement = 167,
  sym_while_statement = 168,
  sym_switch_statement = 169,
  sym_case_statement = 170,
  sym_default_statement = 171,
  sym_static_assignment = 172,
  sym_expression_statement = 173,
  sym_return_statement = 174,
  sym_group_expression = 175,
  sym_assignment_expression = 176,
  sym_access_expression = 177,
  sym_cast_expression = 178,
  sym_array_expression = 179,
  sym_call_expression = 180,
  sym_scope_expression = 181,
  sym_binding_expression = 182,
  sym_cast_ops = 183,
  sym_unary_op = 184,
  sym_binary_op = 185,
  sym_assignment_op = 186,
  sym_assignment_post_op = 187,
  sym__assignment_or_collection_or_value = 188,
  sym__collection_or_value = 189,
  sym_collection = 190,
  sym__value = 191,
  sym__literal = 192,
  sym_string = 193,
  sym_character = 194,
  sym__escape_sequence = 195,
  sym__number = 196,
  aux_sym_source_file_repeat1 = 197,
  aux_sym__block_comment_star_repeat1 = 198,
  aux_sym__block_comment_plus_repeat1 = 199,
  aux_sym__comma_list_variables_repeat1 = 200,
  aux_sym__comma_list_values_repeat1 = 201,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 202,
  aux_sym__comma_list_types_repeat1 = 203,
  aux_sym_extension_repeat1 = 204,
  aux_sym_enum_definition_repeat1 = 205,
  aux_sym_type_repeat1 = 206,
  aux_sym_type_repeat2 = 207,
  aux_sym_string_repeat1 = 208,
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
  [anon_sym_use] = "use",
  [anon_sym_require] = "require",
  [anon_sym_module] = "module",
  [anon_sym_package] = "package",
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
  [anon_sym_COLON] = ":",
  [anon_sym_returns] = "returns",
  [anon_sym_string] = "string",
  [anon_sym_symbol] = "symbol",
  [anon_sym_arguments] = "arguments",
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
  [sym__scope_op] = "_scope_op",
  [sym__access_op] = "_access_op",
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
  [sym__comma_list_values] = "_comma_list_values",
  [sym__comma_list_assignment_or_collection_or_value] = "_comma_list_assignment_or_collection_or_value",
  [sym__comma_list_types] = "_comma_list_types",
  [sym_access_control] = "access_control",
  [sym__sentence] = "_sentence",
  [sym_definition] = "definition",
  [sym_use_definition] = "use_definition",
  [sym_module_definition] = "module_definition",
  [sym_extension] = "extension",
  [sym_end_extension] = "end_extension",
  [sym__enum_element] = "_enum_element",
  [sym_enum_definition] = "enum_definition",
  [sym_is_function] = "is_function",
  [sym_is_method] = "is_method",
  [sym__override] = "_override",
  [sym_function_definition] = "function_definition",
  [sym_readability] = "readability",
  [sym_variable_definition] = "variable_definition",
  [sym_container_definition] = "container_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_return_list] = "return_list",
  [sym_container_types] = "container_types",
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
  [sym_access_expression] = "access_expression",
  [sym_cast_expression] = "cast_expression",
  [sym_array_expression] = "array_expression",
  [sym_call_expression] = "call_expression",
  [sym_scope_expression] = "scope_expression",
  [sym_binding_expression] = "binding_expression",
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
  [aux_sym__comma_list_values_repeat1] = "_comma_list_values_repeat1",
  [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = "_comma_list_assignment_or_collection_or_value_repeat1",
  [aux_sym__comma_list_types_repeat1] = "_comma_list_types_repeat1",
  [aux_sym_extension_repeat1] = "extension_repeat1",
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arguments] = {
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
  [sym__scope_op] = {
    .visible = false,
    .named = true,
  },
  [sym__access_op] = {
    .visible = false,
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
  [sym__comma_list_values] = {
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
  [sym_use_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_extension] = {
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
  [sym_container_definition] = {
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
  [sym_container_types] = {
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
  [sym_access_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binding_expression] = {
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
  [aux_sym__comma_list_values_repeat1] = {
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
  [aux_sym_extension_repeat1] = {
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
      if (lookahead == 'a')
        ADVANCE(25);
      if (lookahead == 'c')
        ADVANCE(26);
      if (lookahead == 'd')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(28);
      if (lookahead == 'f')
        ADVANCE(29);
      if (lookahead == 'g')
        ADVANCE(30);
      if (lookahead == 'i')
        ADVANCE(31);
      if (lookahead == 'm')
        ADVANCE(32);
      if (lookahead == 'n')
        ADVANCE(33);
      if (lookahead == 'o')
        ADVANCE(34);
      if (lookahead == 'p')
        ADVANCE(35);
      if (lookahead == 'r')
        ADVANCE(36);
      if (lookahead == 's')
        ADVANCE(37);
      if (lookahead == 'u')
        ADVANCE(38);
      if (lookahead == 'w')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '~')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '$')
        ADVANCE(48);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(50);
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(55);
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(58);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(62);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'b')
        ADVANCE(64);
      if (lookahead == 'l')
        ADVANCE(65);
      if (lookahead == 'x')
        ADVANCE(66);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(68);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(69);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(71);
      if (lookahead == '=')
        ADVANCE(72);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(74);
      if (lookahead == '>')
        ADVANCE(75);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '"')
        ADVANCE(76);
      if (lookahead == '\'')
        ADVANCE(77);
      if (lookahead == '0')
        ADVANCE(78);
      if (lookahead == '\\')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(86);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(87);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'r')
        ADVANCE(88);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'n')
        ADVANCE(91);
      if (lookahead == 'x')
        ADVANCE(92);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '3')
        ADVANCE(93);
      if (lookahead == '6')
        ADVANCE(94);
      if (lookahead == 'u')
        ADVANCE(95);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'o')
        ADVANCE(96);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(97);
      if (lookahead == '3')
        ADVANCE(98);
      if (lookahead == '6')
        ADVANCE(99);
      if (lookahead == '8')
        ADVANCE(100);
      if (lookahead == 'f')
        ADVANCE(101);
      if (lookahead == 'n')
        ADVANCE(102);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'u')
        ADVANCE(105);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'v')
        ADVANCE(106);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'a')
        ADVANCE(107);
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(110);
      if (lookahead == '3')
        ADVANCE(111);
      if (lookahead == '8')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(113);
      if (lookahead == 't')
        ADVANCE(114);
      if (lookahead == 'w')
        ADVANCE(115);
      if (lookahead == 'y')
        ADVANCE(116);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '1')
        ADVANCE(117);
      if (lookahead == '3')
        ADVANCE(118);
      if (lookahead == '6')
        ADVANCE(119);
      if (lookahead == '8')
        ADVANCE(120);
      if (lookahead == 's')
        ADVANCE(121);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'h')
        ADVANCE(122);
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '|')
        ADVANCE(125);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == 'l')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '$')
        ADVANCE(126);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == ')')
        ADVANCE(128);
      if (lookahead == '.')
        ADVANCE(127);
      if (lookahead == 'f')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__access_op);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(130);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(131);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == 'l')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__scope_op);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(133);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 88:
      if (lookahead == 'g')
        ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 's')
        ADVANCE(135);
      END_STATE();
    case 90:
      if (lookahead == 'c')
        ADVANCE(136);
      if (lookahead == 'f')
        ADVANCE(137);
      END_STATE();
    case 91:
      if (lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 92:
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 93:
      if (lookahead == '2')
        ADVANCE(141);
      END_STATE();
    case 94:
      if (lookahead == '4')
        ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'n')
        ADVANCE(143);
      END_STATE();
    case 96:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == '6')
        ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == '2')
        ADVANCE(146);
      END_STATE();
    case 99:
      if (lookahead == '4')
        ADVANCE(147);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 103:
      if (lookahead == 't')
        ADVANCE(149);
      END_STATE();
    case 104:
      if (lookahead == 'd')
        ADVANCE(150);
      END_STATE();
    case 105:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 107:
      if (lookahead == 'c')
        ADVANCE(153);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 'a')
        ADVANCE(156);
      if (lookahead == 'q')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == '6')
        ADVANCE(159);
      END_STATE();
    case 111:
      if (lookahead == '2')
        ADVANCE(160);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 113:
      if (lookahead == 'c')
        ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'r')
        ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 116:
      if (lookahead == 'm')
        ADVANCE(164);
      if (lookahead == 's')
        ADVANCE(165);
      END_STATE();
    case 117:
      if (lookahead == '6')
        ADVANCE(166);
      END_STATE();
    case 118:
      if (lookahead == '2')
        ADVANCE(167);
      END_STATE();
    case 119:
      if (lookahead == '4')
        ADVANCE(168);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 122:
      if (lookahead == 'i')
        ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 'i')
        ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR_DOLLAR);
      END_STATE();
    case 127:
      if (lookahead == ')')
        ADVANCE(128);
      if (lookahead == 'f')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 129:
      if (lookahead == ')')
        ADVANCE(172);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 134:
      if (lookahead == 'u')
        ADVANCE(173);
      END_STATE();
    case 135:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 'a')
        ADVANCE(176);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(177);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(178);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 143:
      if (lookahead == 'c')
        ADVANCE(179);
      END_STATE();
    case 144:
      if (lookahead == 'o')
        ADVANCE(180);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 148:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 149:
      if (lookahead == 'h')
        ADVANCE(182);
      END_STATE();
    case 150:
      if (lookahead == 'u')
        ADVANCE(183);
      END_STATE();
    case 151:
      if (lookahead == 'l')
        ADVANCE(184);
      END_STATE();
    case 152:
      if (lookahead == 'r')
        ADVANCE(185);
      END_STATE();
    case 153:
      if (lookahead == 'k')
        ADVANCE(186);
      END_STATE();
    case 154:
      if (lookahead == 'm')
        ADVANCE(187);
      if (lookahead == 'v')
        ADVANCE(188);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(189);
      END_STATE();
    case 156:
      if (lookahead == 'd')
        ADVANCE(190);
      END_STATE();
    case 157:
      if (lookahead == 'u')
        ADVANCE(191);
      END_STATE();
    case 158:
      if (lookahead == 'u')
        ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(194);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 164:
      if (lookahead == 'b')
        ADVANCE(196);
      END_STATE();
    case 165:
      if (lookahead == 't')
        ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 170:
      if (lookahead == 'l')
        ADVANCE(198);
      END_STATE();
    case 171:
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 173:
      if (lookahead == 'm')
        ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 175:
      if (lookahead == 'a')
        ADVANCE(201);
      END_STATE();
    case 176:
      if (lookahead == 'u')
        ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 178:
      if (lookahead == 'r')
        ADVANCE(203);
      END_STATE();
    case 179:
      if (lookahead == 't')
        ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 181:
      if (lookahead == 'r')
        ADVANCE(205);
      END_STATE();
    case 182:
      if (lookahead == 'o')
        ADVANCE(206);
      END_STATE();
    case 183:
      if (lookahead == 'l')
        ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 185:
      if (lookahead == 'r')
        ADVANCE(208);
      END_STATE();
    case 186:
      if (lookahead == 'a')
        ADVANCE(209);
      END_STATE();
    case 187:
      if (lookahead == 'i')
        ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'e')
        ADVANCE(212);
      END_STATE();
    case 190:
      if (lookahead == 'o')
        ADVANCE(213);
      END_STATE();
    case 191:
      if (lookahead == 'i')
        ADVANCE(214);
      END_STATE();
    case 192:
      if (lookahead == 'r')
        ADVANCE(215);
      END_STATE();
    case 193:
      if (lookahead == 'i')
        ADVANCE(216);
      END_STATE();
    case 194:
      if (lookahead == 'n')
        ADVANCE(217);
      END_STATE();
    case 195:
      if (lookahead == 'c')
        ADVANCE(218);
      END_STATE();
    case 196:
      if (lookahead == 'o')
        ADVANCE(219);
      END_STATE();
    case 197:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 201:
      if (lookahead == 'r')
        ADVANCE(224);
      END_STATE();
    case 202:
      if (lookahead == 'l')
        ADVANCE(225);
      END_STATE();
    case 203:
      if (lookahead == 'n')
        ADVANCE(226);
      END_STATE();
    case 204:
      if (lookahead == 'i')
        ADVANCE(227);
      END_STATE();
    case 205:
      if (lookahead == 'f')
        ADVANCE(228);
      END_STATE();
    case 206:
      if (lookahead == 'd')
        ADVANCE(229);
      END_STATE();
    case 207:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead == 'i')
        ADVANCE(231);
      END_STATE();
    case 209:
      if (lookahead == 'g')
        ADVANCE(232);
      END_STATE();
    case 210:
      if (lookahead == 't')
        ADVANCE(233);
      END_STATE();
    case 211:
      if (lookahead == 't')
        ADVANCE(234);
      END_STATE();
    case 212:
      if (lookahead == 'c')
        ADVANCE(235);
      END_STATE();
    case 213:
      if (lookahead == 'n')
        ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 'o')
        ADVANCE(239);
      END_STATE();
    case 217:
      if (lookahead == 'g')
        ADVANCE(240);
      END_STATE();
    case 218:
      if (lookahead == 'h')
        ADVANCE(241);
      END_STATE();
    case 219:
      if (lookahead == 'l')
        ADVANCE(242);
      END_STATE();
    case 220:
      if (lookahead == 'm')
        ADVANCE(243);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 222:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 223:
      if (lookahead == 'n')
        ADVANCE(245);
      END_STATE();
    case 224:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 225:
      if (lookahead == 't')
        ADVANCE(247);
      END_STATE();
    case 226:
      if (lookahead == 'a')
        ADVANCE(248);
      END_STATE();
    case 227:
      if (lookahead == 'o')
        ADVANCE(249);
      END_STATE();
    case 228:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 231:
      if (lookahead == 'd')
        ADVANCE(251);
      END_STATE();
    case 232:
      if (lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 233:
      if (lookahead == 'i')
        ADVANCE(253);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 235:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 237:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 239:
      if (lookahead == 'n')
        ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 243:
      if (lookahead == '_')
        ADVANCE(259);
      END_STATE();
    case 244:
      if (lookahead == 'i')
        ADVANCE(260);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 248:
      if (lookahead == 'l')
        ADVANCE(262);
      END_STATE();
    case 249:
      if (lookahead == 'n')
        ADVANCE(263);
      END_STATE();
    case 250:
      if (lookahead == 'c')
        ADVANCE(264);
      END_STATE();
    case 251:
      if (lookahead == 'a')
        ADVANCE(265);
      if (lookahead == 'e')
        ADVANCE(266);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 253:
      if (lookahead == 'v')
        ADVANCE(267);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
        ADVANCE(268);
      END_STATE();
    case 255:
      if (lookahead == 'e')
        ADVANCE(269);
      END_STATE();
    case 256:
      if (lookahead == 'y')
        ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 259:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 260:
      if (lookahead == 'm')
        ADVANCE(272);
      END_STATE();
    case 261:
      if (lookahead == 's')
        ADVANCE(273);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 264:
      if (lookahead == 'e')
        ADVANCE(274);
      END_STATE();
    case 265:
      if (lookahead == 'b')
        ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_is_override);
      END_STATE();
    case 267:
      if (lookahead == 'e')
        ADVANCE(276);
      END_STATE();
    case 268:
      if (lookahead == 'w')
        ADVANCE(277);
      END_STATE();
    case 269:
      if (lookahead == 'd')
        ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 271:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 272:
      if (lookahead == 'i')
        ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_arguments);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_is_interface);
      END_STATE();
    case 275:
      if (lookahead == 'l')
        ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_is_primitive);
      END_STATE();
    case 277:
      if (lookahead == 'r')
        ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
        ADVANCE(283);
      END_STATE();
    case 279:
      if (lookahead == 'a')
        ADVANCE(284);
      END_STATE();
    case 280:
      if (lookahead == 't')
        ADVANCE(285);
      END_STATE();
    case 281:
      if (lookahead == 'e')
        ADVANCE(286);
      END_STATE();
    case 282:
      if (lookahead == 'i')
        ADVANCE(287);
      END_STATE();
    case 283:
      if (lookahead == 'w')
        ADVANCE(288);
      END_STATE();
    case 284:
      if (lookahead == 'd')
        ADVANCE(289);
      END_STATE();
    case 285:
      if (lookahead == 'e')
        ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_is_overridable);
      END_STATE();
    case 287:
      if (lookahead == 't')
        ADVANCE(291);
      END_STATE();
    case 288:
      if (lookahead == 'r')
        ADVANCE(292);
      END_STATE();
    case 289:
      if (lookahead == 'w')
        ADVANCE(293);
      END_STATE();
    case 290:
      if (lookahead == 'd')
        ADVANCE(294);
      END_STATE();
    case 291:
      if (lookahead == 'e')
        ADVANCE(295);
      END_STATE();
    case 292:
      if (lookahead == 'i')
        ADVANCE(296);
      END_STATE();
    case 293:
      if (lookahead == 'r')
        ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_writelimited);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_private_write);
      END_STATE();
    case 296:
      if (lookahead == 't')
        ADVANCE(298);
      END_STATE();
    case 297:
      if (lookahead == 'i')
        ADVANCE(299);
      END_STATE();
    case 298:
      if (lookahead == 'e')
        ADVANCE(300);
      END_STATE();
    case 299:
      if (lookahead == 't')
        ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_protected_write);
      END_STATE();
    case 301:
      if (lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_system_readwrite);
      END_STATE();
    case 303:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(304);
      if (lookahead == '+')
        ADVANCE(305);
      if (lookahead == '-')
        ADVANCE(306);
      if (lookahead == '/')
        ADVANCE(307);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'd')
        ADVANCE(310);
      if (lookahead == 'e')
        ADVANCE(311);
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'm')
        ADVANCE(315);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead == 'o')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(318);
      if (lookahead == 'r')
        ADVANCE(319);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(321);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(323);
      END_STATE();
    case 304:
      if (lookahead == '*')
        ADVANCE(324);
      END_STATE();
    case 305:
      if (lookahead == '+')
        ADVANCE(55);
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 306:
      if (lookahead == '-')
        ADVANCE(59);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(62);
      if (lookahead == '/')
        ADVANCE(325);
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
        ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b')
        ADVANCE(64);
      if (lookahead == 'l')
        ADVANCE(65);
      if (lookahead == 'x')
        ADVANCE(66);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(68);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(328);
      if (lookahead == 'x')
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
        ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(330);
      if (lookahead == '6')
        ADVANCE(331);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(334);
      if (lookahead == '3')
        ADVANCE(335);
      if (lookahead == '6')
        ADVANCE(336);
      if (lookahead == '8')
        ADVANCE(337);
      if (lookahead == 'f')
        ADVANCE(338);
      if (lookahead == 'n')
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
        ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(340);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(342);
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
        ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(346);
      if (lookahead == '3')
        ADVANCE(347);
      if (lookahead == '8')
        ADVANCE(348);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == 'w')
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
        ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(351);
      if (lookahead == '3')
        ADVANCE(352);
      if (lookahead == '6')
        ADVANCE(353);
      if (lookahead == '8')
        ADVANCE(354);
      if (lookahead == 's')
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
        ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(323);
      END_STATE();
    case 323:
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
        ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 325:
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
        ADVANCE(323);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(323);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(358);
      if (lookahead == 'f')
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
        ADVANCE(323);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(360);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(323);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(323);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(323);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(323);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(323);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(323);
      END_STATE();
    case 337:
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
        ADVANCE(323);
      END_STATE();
    case 338:
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
        ADVANCE(323);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 340:
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
        ADVANCE(323);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(323);
      END_STATE();
    case 342:
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
        ADVANCE(323);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(375);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(377);
      if (lookahead == 'q')
        ADVANCE(378);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(323);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(323);
      END_STATE();
    case 348:
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
        ADVANCE(323);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(323);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(323);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(323);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(323);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(323);
      END_STATE();
    case 354:
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
        ADVANCE(323);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(323);
      END_STATE();
    case 357:
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
        ADVANCE(323);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(323);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(323);
      END_STATE();
    case 360:
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
        ADVANCE(323);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(323);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 363:
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
        ADVANCE(323);
      END_STATE();
    case 364:
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
        ADVANCE(323);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(323);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 367:
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
        ADVANCE(323);
      END_STATE();
    case 368:
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
        ADVANCE(323);
      END_STATE();
    case 369:
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
        ADVANCE(323);
      END_STATE();
    case 370:
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
        ADVANCE(323);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(323);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(323);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(401);
      if (lookahead == 'v')
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
        ADVANCE(323);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(323);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 380:
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
        ADVANCE(323);
      END_STATE();
    case 381:
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
        ADVANCE(323);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 384:
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
        ADVANCE(323);
      END_STATE();
    case 385:
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
        ADVANCE(323);
      END_STATE();
    case 386:
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
        ADVANCE(323);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_use);
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
        ADVANCE(323);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(323);
      END_STATE();
    case 389:
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
        ADVANCE(323);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(323);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 392:
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
        ADVANCE(323);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 394:
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
        ADVANCE(323);
      END_STATE();
    case 395:
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
        ADVANCE(323);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 398:
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
        ADVANCE(323);
      END_STATE();
    case 399:
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
        ADVANCE(323);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(323);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(419);
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
        ADVANCE(323);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
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
        ADVANCE(323);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(323);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(323);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(323);
      END_STATE();
    case 409:
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
        ADVANCE(323);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(323);
      END_STATE();
    case 411:
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
        ADVANCE(323);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(323);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(430);
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
        ADVANCE(323);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
        ADVANCE(431);
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
        ADVANCE(323);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(432);
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
        ADVANCE(323);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(433);
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
        ADVANCE(323);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(434);
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
        ADVANCE(323);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(435);
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
        ADVANCE(323);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(436);
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
        ADVANCE(323);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(437);
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
        ADVANCE(323);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(438);
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
        ADVANCE(323);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(439);
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
        ADVANCE(323);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(440);
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
        ADVANCE(323);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(441);
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
        ADVANCE(323);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(442);
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
        ADVANCE(323);
      END_STATE();
    case 426:
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
        ADVANCE(323);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(445);
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
        ADVANCE(323);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(446);
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
        ADVANCE(323);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(447);
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
        ADVANCE(323);
      END_STATE();
    case 432:
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
        ADVANCE(323);
      END_STATE();
    case 433:
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
        ADVANCE(323);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(448);
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
        ADVANCE(323);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(449);
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
        ADVANCE(323);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(450);
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
        ADVANCE(323);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(451);
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
        ADVANCE(323);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(452);
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
        ADVANCE(323);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(453);
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
        ADVANCE(323);
      END_STATE();
    case 440:
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
        ADVANCE(323);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(323);
      END_STATE();
    case 442:
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
        ADVANCE(323);
      END_STATE();
    case 443:
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
        ADVANCE(323);
      END_STATE();
    case 444:
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
        ADVANCE(323);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(455);
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
        ADVANCE(323);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(456);
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
        ADVANCE(323);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(457);
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
        ADVANCE(323);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'e')
        ADVANCE(459);
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
        ADVANCE(323);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(323);
      END_STATE();
    case 450:
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
        ADVANCE(323);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(462);
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
        ADVANCE(323);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_require);
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
        ADVANCE(323);
      END_STATE();
    case 454:
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
        ADVANCE(323);
      END_STATE();
    case 455:
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
        ADVANCE(323);
      END_STATE();
    case 456:
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
        ADVANCE(323);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(463);
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
        ADVANCE(323);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(464);
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
        ADVANCE(323);
      END_STATE();
    case 459:
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
        ADVANCE(323);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(465);
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
        ADVANCE(323);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(466);
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
        ADVANCE(323);
      END_STATE();
    case 462:
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
        ADVANCE(323);
      END_STATE();
    case 463:
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
        ADVANCE(323);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(467);
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
        ADVANCE(323);
      END_STATE();
    case 465:
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
        ADVANCE(323);
      END_STATE();
    case 466:
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
        ADVANCE(323);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(468);
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
        ADVANCE(323);
      END_STATE();
    case 468:
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
        ADVANCE(323);
      END_STATE();
    case 469:
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'd')
        ADVANCE(471);
      if (lookahead == 'f')
        ADVANCE(472);
      if (lookahead == 'i')
        ADVANCE(473);
      if (lookahead == 'm')
        ADVANCE(315);
      if (lookahead == 's')
        ADVANCE(474);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(475);
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
        ADVANCE(323);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(323);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(323);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(323);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(323);
      END_STATE();
    case 476:
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(477);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(478);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '-' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(323);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 478:
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 479:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(76);
      if (lookahead == '\'')
        ADVANCE(77);
      if (lookahead == '0')
        ADVANCE(78);
      if (lookahead == '\\')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(86);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 482:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
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
        ADVANCE(323);
      END_STATE();
    case 483:
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(477);
      if (lookahead == '-')
        ADVANCE(484);
      if (lookahead == ':')
        ADVANCE(485);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(323);
      END_STATE();
    case 484:
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 485:
      if (lookahead == ':')
        ADVANCE(69);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(488);
      END_STATE();
    case 489:
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 'i')
        ADVANCE(490);
      if (lookahead == 'm')
        ADVANCE(491);
      if (lookahead == 'o')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(492);
      if (lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(334);
      if (lookahead == '3')
        ADVANCE(335);
      if (lookahead == '6')
        ADVANCE(336);
      if (lookahead == '8')
        ADVANCE(337);
      if (lookahead == 'n')
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
        ADVANCE(323);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(323);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(496);
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
        ADVANCE(323);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(497);
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
        ADVANCE(323);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(346);
      if (lookahead == '3')
        ADVANCE(347);
      if (lookahead == '8')
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
        ADVANCE(323);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(351);
      if (lookahead == '3')
        ADVANCE(352);
      if (lookahead == '6')
        ADVANCE(353);
      if (lookahead == '8')
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
        ADVANCE(323);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(498);
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
        ADVANCE(323);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(323);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(323);
      END_STATE();
    case 499:
      if (lookahead == '+')
        ADVANCE(500);
      if (lookahead == '-')
        ADVANCE(501);
      if (lookahead == '/')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(503);
      END_STATE();
    case 500:
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '+')
        ADVANCE(58);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      if (lookahead == '*')
        ADVANCE(62);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__block_comment_plus_token1);
      END_STATE();
    case 504:
      if (lookahead == 'w')
        ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 505:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 506:
      if (lookahead == 'm')
        ADVANCE(507);
      if (lookahead == 'p')
        ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 507:
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 508:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 509:
      if (lookahead == 'f')
        ADVANCE(312);
      if (lookahead == 'i')
        ADVANCE(490);
      if (lookahead == 'm')
        ADVANCE(491);
      if (lookahead == 'o')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(318);
      if (lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 510:
      if (lookahead == 'c')
        ADVANCE(511);
      if (lookahead == 'd')
        ADVANCE(512);
      if (lookahead == 'f')
        ADVANCE(513);
      if (lookahead == 'i')
        ADVANCE(514);
      if (lookahead == 'm')
        ADVANCE(515);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'p')
        ADVANCE(517);
      if (lookahead == 's')
        ADVANCE(518);
      if (lookahead == 'w')
        ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 511:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 512:
      if (lookahead == 'e')
        ADVANCE(520);
      END_STATE();
    case 513:
      if (lookahead == 'u')
        ADVANCE(95);
      END_STATE();
    case 514:
      if (lookahead == 'f')
        ADVANCE(101);
      END_STATE();
    case 515:
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'o')
        ADVANCE(104);
      END_STATE();
    case 516:
      if (lookahead == 'v')
        ADVANCE(106);
      END_STATE();
    case 517:
      if (lookahead == 'r')
        ADVANCE(521);
      END_STATE();
    case 518:
      if (lookahead == 'w')
        ADVANCE(115);
      END_STATE();
    case 519:
      if (lookahead == 'h')
        ADVANCE(122);
      END_STATE();
    case 520:
      if (lookahead == 'f')
        ADVANCE(137);
      END_STATE();
    case 521:
      if (lookahead == 'i')
        ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == 'm')
        ADVANCE(187);
      END_STATE();
    case 523:
      if (lookahead == '!')
        ADVANCE(524);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(525);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(477);
      if (lookahead == '-')
        ADVANCE(526);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '%' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(323);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 525:
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
        ADVANCE(323);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 527:
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
        ADVANCE(323);
      END_STATE();
    case 528:
      if (lookahead == '%')
        ADVANCE(529);
      if (lookahead == '&')
        ADVANCE(530);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(531);
      if (lookahead == '-')
        ADVANCE(532);
      if (lookahead == '/')
        ADVANCE(533);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(534);
      if (lookahead == '>')
        ADVANCE(535);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(536);
      if (lookahead == '|')
        ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '$' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '\\' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(323);
      END_STATE();
    case 529:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(51);
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
        ADVANCE(323);
      END_STATE();
    case 531:
      if (lookahead == '+')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 532:
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(63);
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
        ADVANCE(323);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(538);
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
        ADVANCE(323);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(539);
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
        ADVANCE(323);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(87);
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
        ADVANCE(323);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(124);
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
        ADVANCE(323);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(132);
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
        ADVANCE(323);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(133);
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
        ADVANCE(323);
      END_STATE();
    case 540:
      if (lookahead == '\\')
        ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(542);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '"')
        ADVANCE(76);
      if (lookahead == '\'')
        ADVANCE(77);
      if (lookahead == '0')
        ADVANCE(78);
      if (lookahead == '\\')
        ADVANCE(79);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead == 'f')
        ADVANCE(82);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'r')
        ADVANCE(84);
      if (lookahead == 't')
        ADVANCE(85);
      if (lookahead == 'v')
        ADVANCE(86);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 543:
      if (lookahead == '*')
        ADVANCE(544);
      if (lookahead == '+')
        ADVANCE(545);
      if (lookahead == '/')
        ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '/')
        ADVANCE(547);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__block_comment_star_token1);
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 546:
      if (lookahead == '*')
        ADVANCE(62);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 548:
      if (lookahead == '!')
        ADVANCE(549);
      if (lookahead == '$')
        ADVANCE(550);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(551);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(552);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(553);
      if (lookahead == ':')
        ADVANCE(478);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(554);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 549:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(59);
      if (lookahead == '=')
        ADVANCE(60);
      if (lookahead == '>')
        ADVANCE(61);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 554:
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 555:
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(556);
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(330);
      if (lookahead == '6')
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
        ADVANCE(323);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(334);
      if (lookahead == '3')
        ADVANCE(335);
      if (lookahead == '6')
        ADVANCE(336);
      if (lookahead == '8')
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
        ADVANCE(323);
      END_STATE();
    case 558:
      if (lookahead == '%')
        ADVANCE(529);
      if (lookahead == '&')
        ADVANCE(559);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(531);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(532);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(560);
      if (lookahead == ':')
        ADVANCE(561);
      if (lookahead == '<')
        ADVANCE(562);
      if (lookahead == '>')
        ADVANCE(563);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(564);
      if (lookahead == '|')
        ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 559:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 560:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 561:
      if (lookahead == ':')
        ADVANCE(69);
      if (lookahead == '=')
        ADVANCE(70);
      END_STATE();
    case 562:
      if (lookahead == '<')
        ADVANCE(566);
      END_STATE();
    case 563:
      if (lookahead == '>')
        ADVANCE(567);
      END_STATE();
    case 564:
      if (lookahead == '=')
        ADVANCE(87);
      END_STATE();
    case 565:
      if (lookahead == '=')
        ADVANCE(124);
      END_STATE();
    case 566:
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 567:
      if (lookahead == '=')
        ADVANCE(133);
      END_STATE();
    case 568:
      if (lookahead == '%')
        ADVANCE(529);
      if (lookahead == '&')
        ADVANCE(559);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == '*')
        ADVANCE(569);
      if (lookahead == '+')
        ADVANCE(531);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(532);
      if (lookahead == '/')
        ADVANCE(560);
      if (lookahead == ':')
        ADVANCE(561);
      if (lookahead == '<')
        ADVANCE(562);
      if (lookahead == '>')
        ADVANCE(563);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(564);
      if (lookahead == '|')
        ADVANCE(565);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 569:
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 570:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'c')
        ADVANCE(309);
      if (lookahead == 'd')
        ADVANCE(471);
      if (lookahead == 'e')
        ADVANCE(571);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(473);
      if (lookahead == 'n')
        ADVANCE(316);
      if (lookahead == 'r')
        ADVANCE(572);
      if (lookahead == 's')
        ADVANCE(573);
      if (lookahead == 'w')
        ADVANCE(322);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(67);
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
        ADVANCE(323);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(574);
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
        ADVANCE(323);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(575);
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
        ADVANCE(323);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == 'w')
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
        ADVANCE(323);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(323);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(323);
      END_STATE();
    case 576:
      if (lookahead == 'p')
        ADVANCE(577);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 577:
      if (lookahead == 'r')
        ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == 'i')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == 'v')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'a')
        ADVANCE(581);
      END_STATE();
    case 581:
      if (lookahead == 't')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'e')
        ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == '_')
        ADVANCE(268);
      END_STATE();
    case 584:
      if (lookahead == '!')
        ADVANCE(549);
      if (lookahead == '$')
        ADVANCE(550);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(551);
      if (lookahead == '-')
        ADVANCE(552);
      if (lookahead == '/')
        ADVANCE(553);
      if (lookahead == ':')
        ADVANCE(561);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(554);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 585:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 586:
      if (lookahead == 'a')
        ADVANCE(587);
      if (lookahead == 'f')
        ADVANCE(556);
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead == 's')
        ADVANCE(588);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(589);
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
        ADVANCE(323);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(346);
      if (lookahead == '3')
        ADVANCE(347);
      if (lookahead == '8')
        ADVANCE(348);
      if (lookahead == 't')
        ADVANCE(590);
      if (lookahead == 'y')
        ADVANCE(591);
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
        ADVANCE(323);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(592);
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
        ADVANCE(323);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(593);
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
        ADVANCE(323);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(594);
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
        ADVANCE(323);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(595);
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
        ADVANCE(323);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(596);
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
        ADVANCE(323);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(597);
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
        ADVANCE(323);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(598);
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
        ADVANCE(323);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(599);
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
        ADVANCE(323);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(600);
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
        ADVANCE(323);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(601);
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
        ADVANCE(323);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(602);
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
        ADVANCE(323);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(603);
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
        ADVANCE(323);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(604);
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
        ADVANCE(323);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_string);
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
        ADVANCE(323);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_symbol);
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
        ADVANCE(323);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(605);
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
        ADVANCE(323);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(606);
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
        ADVANCE(323);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_arguments);
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
        ADVANCE(323);
      END_STATE();
    case 607:
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == 'r')
        ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 608:
      if (lookahead == 'e')
        ADVANCE(609);
      END_STATE();
    case 609:
      if (lookahead == 't')
        ADVANCE(610);
      END_STATE();
    case 610:
      if (lookahead == 'u')
        ADVANCE(611);
      END_STATE();
    case 611:
      if (lookahead == 'r')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'n')
        ADVANCE(613);
      END_STATE();
    case 613:
      if (lookahead == 's')
        ADVANCE(614);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 615:
      if (lookahead == '%')
        ADVANCE(529);
      if (lookahead == '&')
        ADVANCE(559);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(569);
      if (lookahead == '+')
        ADVANCE(616);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(617);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(560);
      if (lookahead == ':')
        ADVANCE(478);
      if (lookahead == '<')
        ADVANCE(562);
      if (lookahead == '>')
        ADVANCE(563);
      if (lookahead == '^')
        ADVANCE(564);
      if (lookahead == '|')
        ADVANCE(565);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 616:
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 617:
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 618:
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(619);
      END_STATE();
    case 620:
      if (lookahead == 'p')
        ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 621:
      if (lookahead == 'r')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 'o')
        ADVANCE(623);
      END_STATE();
    case 623:
      if (lookahead == 't')
        ADVANCE(624);
      END_STATE();
    case 624:
      if (lookahead == 'e')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 'c')
        ADVANCE(626);
      END_STATE();
    case 626:
      if (lookahead == 't')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'e')
        ADVANCE(628);
      END_STATE();
    case 628:
      if (lookahead == 'd')
        ADVANCE(629);
      END_STATE();
    case 629:
      if (lookahead == '_')
        ADVANCE(283);
      END_STATE();
    case 630:
      if (lookahead == '(')
        ADVANCE(470);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(477);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(484);
      if (lookahead == ':')
        ADVANCE(561);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 631:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == 'f')
        ADVANCE(556);
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead == 'p')
        ADVANCE(632);
      if (lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(633);
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
        ADVANCE(323);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(634);
      if (lookahead == 'o')
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
        ADVANCE(323);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(323);
      END_STATE();
    case 635:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 636:
      if (lookahead == 's')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 637:
      if (lookahead == 'y')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 's')
        ADVANCE(165);
      END_STATE();
    case 639:
      if (lookahead == 'f')
        ADVANCE(556);
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead == 'r')
        ADVANCE(493);
      if (lookahead == 's')
        ADVANCE(494);
      if (lookahead == 'u')
        ADVANCE(495);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(323);
      END_STATE();
    case 640:
      if (lookahead == '*')
        ADVANCE(477);
      if (lookahead == ':')
        ADVANCE(641);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(323);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 303},
  [2] = {.lex_state = 469},
  [3] = {.lex_state = 476},
  [4] = {.lex_state = 479},
  [5] = {.lex_state = 482},
  [6] = {.lex_state = 469},
  [7] = {.lex_state = 483},
  [8] = {.lex_state = 469},
  [9] = {.lex_state = 486},
  [10] = {.lex_state = 489},
  [11] = {.lex_state = 482},
  [12] = {.lex_state = 499},
  [13] = {.lex_state = 483},
  [14] = {.lex_state = 504},
  [15] = {.lex_state = 506},
  [16] = {.lex_state = 469},
  [17] = {.lex_state = 469},
  [18] = {.lex_state = 509},
  [19] = {.lex_state = 469},
  [20] = {.lex_state = 483},
  [21] = {.lex_state = 510},
  [22] = {.lex_state = 523},
  [23] = {.lex_state = 528},
  [24] = {.lex_state = 540},
  [25] = {.lex_state = 482},
  [26] = {.lex_state = 543},
  [27] = {.lex_state = 483},
  [28] = {.lex_state = 510},
  [29] = {.lex_state = 483},
  [30] = {.lex_state = 482},
  [31] = {.lex_state = 483},
  [32] = {.lex_state = 510},
  [33] = {.lex_state = 482},
  [34] = {.lex_state = 548},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 528},
  [37] = {.lex_state = 489},
  [38] = {.lex_state = 555},
  [39] = {.lex_state = 483},
  [40] = {.lex_state = 482},
  [41] = {.lex_state = 482},
  [42] = {.lex_state = 528},
  [43] = {.lex_state = 303},
  [44] = {.lex_state = 483},
  [45] = {.lex_state = 558},
  [46] = {.lex_state = 528},
  [47] = {.lex_state = 482},
  [48] = {.lex_state = 482},
  [49] = {.lex_state = 548},
  [50] = {.lex_state = 479},
  [51] = {.lex_state = 568},
  [52] = {.lex_state = 568},
  [53] = {.lex_state = 568},
  [54] = {.lex_state = 568},
  [55] = {.lex_state = 568},
  [56] = {.lex_state = 568},
  [57] = {.lex_state = 523},
  [58] = {.lex_state = 570},
  [59] = {.lex_state = 482},
  [60] = {.lex_state = 482},
  [61] = {.lex_state = 303},
  [62] = {.lex_state = 558},
  [63] = {.lex_state = 482},
  [64] = {.lex_state = 558},
  [65] = {.lex_state = 558},
  [66] = {.lex_state = 558},
  [67] = {.lex_state = 499},
  [68] = {.lex_state = 543},
  [69] = {.lex_state = 303},
  [70] = {.lex_state = 499},
  [71] = {.lex_state = 576},
  [72] = {.lex_state = 483},
  [73] = {.lex_state = 483},
  [74] = {.lex_state = 482},
  [75] = {.lex_state = 482},
  [76] = {.lex_state = 482},
  [77] = {.lex_state = 482},
  [78] = {.lex_state = 510},
  [79] = {.lex_state = 510},
  [80] = {.lex_state = 483},
  [81] = {.lex_state = 482},
  [82] = {.lex_state = 555},
  [83] = {.lex_state = 584},
  [84] = {.lex_state = 469},
  [85] = {.lex_state = 483},
  [86] = {.lex_state = 584},
  [87] = {.lex_state = 482},
  [88] = {.lex_state = 528},
  [89] = {.lex_state = 584},
  [90] = {.lex_state = 585},
  [91] = {.lex_state = 483},
  [92] = {.lex_state = 586},
  [93] = {.lex_state = 303},
  [94] = {.lex_state = 499},
  [95] = {.lex_state = 543},
  [96] = {.lex_state = 303},
  [97] = {.lex_state = 543},
  [98] = {.lex_state = 558},
  [99] = {.lex_state = 607},
  [100] = {.lex_state = 482},
  [101] = {.lex_state = 482},
  [102] = {.lex_state = 510},
  [103] = {.lex_state = 483},
  [104] = {.lex_state = 555},
  [105] = {.lex_state = 558},
  [106] = {.lex_state = 303},
  [107] = {.lex_state = 482},
  [108] = {.lex_state = 615},
  [109] = {.lex_state = 618},
  [110] = {.lex_state = 482},
  [111] = {.lex_state = 615},
  [112] = {.lex_state = 548},
  [113] = {.lex_state = 303},
  [114] = {.lex_state = 476},
  [115] = {.lex_state = 618},
  [116] = {.lex_state = 483},
  [117] = {.lex_state = 483},
  [118] = {.lex_state = 548},
  [119] = {.lex_state = 479},
  [120] = {.lex_state = 483},
  [121] = {.lex_state = 482},
  [122] = {.lex_state = 568},
  [123] = {.lex_state = 482},
  [124] = {.lex_state = 615},
  [125] = {.lex_state = 482},
  [126] = {.lex_state = 483},
  [127] = {.lex_state = 584},
  [128] = {.lex_state = 482},
  [129] = {.lex_state = 510},
  [130] = {.lex_state = 528},
  [131] = {.lex_state = 482},
  [132] = {.lex_state = 528},
  [133] = {.lex_state = 483},
  [134] = {.lex_state = 482},
  [135] = {.lex_state = 499},
  [136] = {.lex_state = 499},
  [137] = {.lex_state = 499},
  [138] = {.lex_state = 543},
  [139] = {.lex_state = 303},
  [140] = {.lex_state = 499},
  [141] = {.lex_state = 620},
  [142] = {.lex_state = 558},
  [143] = {.lex_state = 630},
  [144] = {.lex_state = 630},
  [145] = {.lex_state = 483},
  [146] = {.lex_state = 510},
  [147] = {.lex_state = 607},
  [148] = {.lex_state = 469},
  [149] = {.lex_state = 476},
  [150] = {.lex_state = 483},
  [151] = {.lex_state = 483},
  [152] = {.lex_state = 548},
  [153] = {.lex_state = 482},
  [154] = {.lex_state = 482},
  [155] = {.lex_state = 482},
  [156] = {.lex_state = 483},
  [157] = {.lex_state = 483},
  [158] = {.lex_state = 483},
  [159] = {.lex_state = 482},
  [160] = {.lex_state = 479},
  [161] = {.lex_state = 631},
  [162] = {.lex_state = 585},
  [163] = {.lex_state = 585},
  [164] = {.lex_state = 482},
  [165] = {.lex_state = 528},
  [166] = {.lex_state = 635},
  [167] = {.lex_state = 558},
  [168] = {.lex_state = 558},
  [169] = {.lex_state = 548},
  [170] = {.lex_state = 543},
  [171] = {.lex_state = 499},
  [172] = {.lex_state = 543},
  [173] = {.lex_state = 543},
  [174] = {.lex_state = 303},
  [175] = {.lex_state = 543},
  [176] = {.lex_state = 483},
  [177] = {.lex_state = 555},
  [178] = {.lex_state = 607},
  [179] = {.lex_state = 482},
  [180] = {.lex_state = 558},
  [181] = {.lex_state = 615},
  [182] = {.lex_state = 558},
  [183] = {.lex_state = 558},
  [184] = {.lex_state = 510},
  [185] = {.lex_state = 558},
  [186] = {.lex_state = 483},
  [187] = {.lex_state = 482},
  [188] = {.lex_state = 635},
  [189] = {.lex_state = 528},
  [190] = {.lex_state = 618},
  [191] = {.lex_state = 548},
  [192] = {.lex_state = 630},
  [193] = {.lex_state = 483},
  [194] = {.lex_state = 630},
  [195] = {.lex_state = 630},
  [196] = {.lex_state = 618},
  [197] = {.lex_state = 483},
  [198] = {.lex_state = 483},
  [199] = {.lex_state = 483},
  [200] = {.lex_state = 483},
  [201] = {.lex_state = 568},
  [202] = {.lex_state = 568},
  [203] = {.lex_state = 568},
  [204] = {.lex_state = 568},
  [205] = {.lex_state = 568},
  [206] = {.lex_state = 568},
  [207] = {.lex_state = 568},
  [208] = {.lex_state = 570},
  [209] = {.lex_state = 482},
  [210] = {.lex_state = 483},
  [211] = {.lex_state = 483},
  [212] = {.lex_state = 558},
  [213] = {.lex_state = 558},
  [214] = {.lex_state = 499},
  [215] = {.lex_state = 499},
  [216] = {.lex_state = 636},
  [217] = {.lex_state = 482},
  [218] = {.lex_state = 630},
  [219] = {.lex_state = 483},
  [220] = {.lex_state = 483},
  [221] = {.lex_state = 630},
  [222] = {.lex_state = 607},
  [223] = {.lex_state = 483},
  [224] = {.lex_state = 607},
  [225] = {.lex_state = 482},
  [226] = {.lex_state = 476},
  [227] = {.lex_state = 476},
  [228] = {.lex_state = 584},
  [229] = {.lex_state = 584},
  [230] = {.lex_state = 483},
  [231] = {.lex_state = 483},
  [232] = {.lex_state = 482},
  [233] = {.lex_state = 548},
  [234] = {.lex_state = 483},
  [235] = {.lex_state = 585},
  [236] = {.lex_state = 479},
  [237] = {.lex_state = 639},
  [238] = {.lex_state = 640},
  [239] = {.lex_state = 607},
  [240] = {.lex_state = 483},
  [241] = {.lex_state = 483},
  [242] = {.lex_state = 630},
  [243] = {.lex_state = 639},
  [244] = {.lex_state = 555},
  [245] = {.lex_state = 585},
  [246] = {.lex_state = 585},
  [247] = {.lex_state = 482},
  [248] = {.lex_state = 558},
  [249] = {.lex_state = 558},
  [250] = {.lex_state = 635},
  [251] = {.lex_state = 543},
  [252] = {.lex_state = 543},
  [253] = {.lex_state = 558},
  [254] = {.lex_state = 558},
  [255] = {.lex_state = 482},
  [256] = {.lex_state = 558},
  [257] = {.lex_state = 483},
  [258] = {.lex_state = 482},
  [259] = {.lex_state = 510},
  [260] = {.lex_state = 635},
  [261] = {.lex_state = 558},
  [262] = {.lex_state = 635},
  [263] = {.lex_state = 548},
  [264] = {.lex_state = 483},
  [265] = {.lex_state = 548},
  [266] = {.lex_state = 482},
  [267] = {.lex_state = 482},
  [268] = {.lex_state = 630},
  [269] = {.lex_state = 483},
  [270] = {.lex_state = 483},
  [271] = {.lex_state = 482},
  [272] = {.lex_state = 483},
  [273] = {.lex_state = 570},
  [274] = {.lex_state = 528},
  [275] = {.lex_state = 555},
  [276] = {.lex_state = 630},
  [277] = {.lex_state = 630},
  [278] = {.lex_state = 482},
  [279] = {.lex_state = 483},
  [280] = {.lex_state = 630},
  [281] = {.lex_state = 607},
  [282] = {.lex_state = 482},
  [283] = {.lex_state = 607},
  [284] = {.lex_state = 476},
  [285] = {.lex_state = 476},
  [286] = {.lex_state = 476},
  [287] = {.lex_state = 548},
  [288] = {.lex_state = 483},
  [289] = {.lex_state = 483},
  [290] = {.lex_state = 585},
  [291] = {.lex_state = 586},
  [292] = {.lex_state = 630},
  [293] = {.lex_state = 607},
  [294] = {.lex_state = 631},
  [295] = {.lex_state = 630},
  [296] = {.lex_state = 483},
  [297] = {.lex_state = 555},
  [298] = {.lex_state = 558},
  [299] = {.lex_state = 558},
  [300] = {.lex_state = 558},
  [301] = {.lex_state = 555},
  [302] = {.lex_state = 558},
  [303] = {.lex_state = 558},
  [304] = {.lex_state = 558},
  [305] = {.lex_state = 558},
  [306] = {.lex_state = 558},
  [307] = {.lex_state = 483},
  [308] = {.lex_state = 635},
  [309] = {.lex_state = 630},
  [310] = {.lex_state = 630},
  [311] = {.lex_state = 630},
  [312] = {.lex_state = 630},
  [313] = {.lex_state = 568},
  [314] = {.lex_state = 568},
  [315] = {.lex_state = 570},
  [316] = {.lex_state = 618},
  [317] = {.lex_state = 555},
  [318] = {.lex_state = 482},
  [319] = {.lex_state = 482},
  [320] = {.lex_state = 607},
  [321] = {.lex_state = 630},
  [322] = {.lex_state = 630},
  [323] = {.lex_state = 630},
  [324] = {.lex_state = 630},
  [325] = {.lex_state = 630},
  [326] = {.lex_state = 483},
  [327] = {.lex_state = 558},
  [328] = {.lex_state = 558},
  [329] = {.lex_state = 558},
  [330] = {.lex_state = 558},
  [331] = {.lex_state = 558},
  [332] = {.lex_state = 607},
  [333] = {.lex_state = 618},
  [334] = {.lex_state = 555},
  [335] = {.lex_state = 482},
  [336] = {.lex_state = 630},
  [337] = {.lex_state = 630},
  [338] = {.lex_state = 630},
  [339] = {.lex_state = 607},
  [340] = {.lex_state = 555},
  [341] = {.lex_state = 630},
  [342] = {.lex_state = 630},
  [343] = {.lex_state = 630},
  [344] = {.lex_state = 482},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym__block_comment_star_token1] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_protected_write] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym__block_comment_plus_token1] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__access_op] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [sym__scope_op] = ACTIONS(1),
    [sym_is_interface] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_is_primitive] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_private_write] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS_DASH] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_writelimited] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_system_readwrite] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DASH_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_is_override] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_arguments] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_is_overridable] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym__comment] = STATE(43),
    [sym_string] = STATE(42),
    [sym_character] = STATE(42),
    [sym_module_definition] = STATE(30),
    [sym_extension] = STATE(30),
    [sym_is_method] = STATE(31),
    [sym__override] = STATE(32),
    [sym_goto_statement] = STATE(41),
    [sym_section_statement] = STATE(41),
    [sym_case_statement] = STATE(41),
    [sym_default_statement] = STATE(41),
    [sym_assignment_expression] = STATE(33),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(42),
    [sym_source_file] = STATE(35),
    [sym__collection_or_value] = STATE(36),
    [sym_collection] = STATE(36),
    [sym_access_control] = STATE(37),
    [sym__number] = STATE(42),
    [sym_end_extension] = STATE(30),
    [sym__sentence] = STATE(43),
    [sym_function_definition] = STATE(30),
    [sym_readability] = STATE(38),
    [sym_type] = STATE(39),
    [sym_declaration_definition] = STATE(30),
    [sym_statement] = STATE(40),
    [sym_single_line_if_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym_expression_statement] = STATE(41),
    [sym_array_expression] = STATE(34),
    [sym__block_comment_star] = STATE(43),
    [sym__block_comment_plus] = STATE(43),
    [sym__value] = STATE(42),
    [sym__literal] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(43),
    [sym_use_definition] = STATE(30),
    [sym_enum_definition] = STATE(30),
    [sym_definition] = STATE(40),
    [sym_variable_definition] = STATE(30),
    [sym_container_definition] = STATE(30),
    [sym_is_function] = STATE(31),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_end_statement] = STATE(41),
    [sym__control_flow_statement] = STATE(41),
    [sym_while_statement] = STATE(41),
    [sym_return_statement] = STATE(41),
    [sym_switch_statement] = STATE(41),
    [sym_group_expression] = STATE(45),
    [sym_scope_expression] = STATE(46),
    [sym_call_expression] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(13),
    [anon_sym_PLUS_DASH] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_use] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_section] = ACTIONS(29),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_i8] = ACTIONS(7),
    [sym_null] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(35),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(39),
    [anon_sym_i16] = ACTIONS(7),
    [sym_long] = ACTIONS(41),
    [anon_sym_goto] = ACTIONS(43),
    [sym_double] = ACTIONS(41),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_private] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [anon_sym_method] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_float] = ACTIONS(41),
    [sym_is_declare] = ACTIONS(55),
    [sym_hex] = ACTIONS(41),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(57),
    [sym_is_override] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_u16] = ACTIONS(7),
    [sym_is_external] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_s16] = ACTIONS(7),
    [sym_binary] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [sym_is_overridable] = ACTIONS(59),
    [sym_is_primitive] = ACTIONS(69),
  },
  [2] = {
    [anon_sym_method] = ACTIONS(71),
    [anon_sym_default] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_switch] = ACTIONS(71),
    [anon_sym_while] = ACTIONS(71),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_function] = ACTIONS(71),
    [anon_sym_module] = ACTIONS(71),
    [anon_sym_case] = ACTIONS(71),
  },
  [3] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_COLON_EQ] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
  },
  [4] = {
    [sym__escape_sequence] = STATE(50),
    [aux_sym_string_repeat1] = STATE(50),
    [anon_sym_BSLASHt] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_BSLASH0] = ACTIONS(77),
    [anon_sym_BSLASHr] = ACTIONS(77),
    [anon_sym_BSLASHb] = ACTIONS(77),
    [anon_sym_BSLASHv] = ACTIONS(77),
    [aux_sym_string_token1] = ACTIONS(81),
    [anon_sym_BSLASHa] = ACTIONS(77),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(77),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(77),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(77),
    [anon_sym_BSLASHn] = ACTIONS(77),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(77),
  },
  [5] = {
    [sym__assignment_or_collection_or_value] = STATE(52),
    [sym_string] = STATE(53),
    [sym_character] = STATE(53),
    [sym_array_expression] = STATE(34),
    [sym__value] = STATE(53),
    [sym__literal] = STATE(53),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(54),
    [sym_assignment_expression] = STATE(52),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym_collection] = STATE(55),
    [sym__number] = STATE(53),
    [sym_group_expression] = STATE(53),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(56),
    [sym_null] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(83),
    [sym_binary] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(85),
    [sym_double] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(87),
    [sym_hex] = ACTIONS(85),
    [sym_oct] = ACTIONS(83),
    [sym_float] = ACTIONS(85),
  },
  [6] = {
    [sym_group_expression] = STATE(58),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(89),
  },
  [7] = {
    [sym_identifier] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
  },
  [8] = {
    [sym_group_expression] = STATE(60),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [9] = {
    [aux_sym__comment_token1] = ACTIONS(95),
    [sym__space] = ACTIONS(97),
  },
  [10] = {
    [anon_sym_s32] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(99),
    [sym_is_override] = ACTIONS(99),
    [anon_sym_f64] = ACTIONS(99),
    [anon_sym_i64] = ACTIONS(99),
    [anon_sym_i8] = ACTIONS(99),
    [anon_sym_u16] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_method] = ACTIONS(99),
    [anon_sym_readonly] = ACTIONS(99),
    [anon_sym_s16] = ACTIONS(99),
    [anon_sym_f32] = ACTIONS(99),
    [anon_sym_i32] = ACTIONS(99),
    [anon_sym_u64] = ACTIONS(99),
    [anon_sym_u8] = ACTIONS(99),
    [sym_is_overridable] = ACTIONS(99),
    [anon_sym_function] = ACTIONS(99),
    [sym_is_primitive] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(99),
  },
  [11] = {
    [sym__assignment_or_collection_or_value] = STATE(63),
    [sym_string] = STATE(64),
    [sym_character] = STATE(64),
    [sym_array_expression] = STATE(34),
    [sym__value] = STATE(64),
    [sym__literal] = STATE(64),
    [sym_assignment_expression] = STATE(63),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(64),
    [sym__collection_or_value] = STATE(65),
    [sym_collection] = STATE(65),
    [sym__number] = STATE(64),
    [sym_group_expression] = STATE(64),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(66),
    [sym_null] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(101),
    [sym_binary] = ACTIONS(103),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(103),
    [sym_double] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(105),
    [sym_hex] = ACTIONS(103),
    [sym_oct] = ACTIONS(101),
    [sym_float] = ACTIONS(103),
  },
  [12] = {
    [sym__block_comment_plus] = STATE(70),
    [aux_sym__block_comment_plus_repeat1] = STATE(70),
    [sym__block_comment_star] = STATE(70),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(113),
  },
  [13] = {
    [sym_identifier] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
  },
  [14] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(117),
  },
  [15] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(119),
    [anon_sym_package] = ACTIONS(119),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(121),
  },
  [17] = {
    [sym_group_expression] = STATE(74),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [18] = {
    [sym_type] = STATE(39),
    [sym_is_function] = STATE(31),
    [sym_variable_definition] = STATE(75),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_is_method] = STATE(31),
    [sym__override] = STATE(32),
    [sym_access_control] = STATE(37),
    [sym_function_definition] = STATE(75),
    [sym_readability] = STATE(38),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(45),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(57),
    [sym_is_override] = ACTIONS(59),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(45),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_method] = ACTIONS(51),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_is_overridable] = ACTIONS(59),
    [anon_sym_function] = ACTIONS(35),
    [sym_is_primitive] = ACTIONS(69),
    [anon_sym_s8] = ACTIONS(7),
  },
  [19] = {
    [sym_group_expression] = STATE(76),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [20] = {
    [sym_identifier] = ACTIONS(125),
    [sym__space] = ACTIONS(3),
  },
  [21] = {
    [sym__override] = STATE(79),
    [sym_is_function] = STATE(80),
    [sym_is_method] = STATE(80),
    [sym_is_override] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(129),
    [sym_is_overridable] = ACTIONS(127),
    [anon_sym_function] = ACTIONS(131),
    [sym_is_primitive] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
  },
  [22] = {
    [sym_cast_ops] = STATE(84),
    [sym_string] = STATE(86),
    [sym_character] = STATE(86),
    [sym_cast_expression] = STATE(85),
    [sym_array_expression] = STATE(34),
    [sym__value] = STATE(86),
    [sym__literal] = STATE(86),
    [sym_assignment_expression] = STATE(85),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(86),
    [sym_unary_op] = STATE(87),
    [sym__collection_or_value] = STATE(88),
    [sym_collection] = STATE(88),
    [sym__number] = STATE(86),
    [sym_group_expression] = STATE(86),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(89),
    [anon_sym_AMP] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(139),
    [sym_double] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(141),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(145),
    [sym_null] = ACTIONS(147),
    [sym_integer] = ACTIONS(147),
    [sym_binary] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(137),
    [sym_float] = ACTIONS(139),
    [sym_oct] = ACTIONS(147),
    [sym_hex] = ACTIONS(139),
  },
  [23] = {
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
  },
  [24] = {
    [sym__escape_sequence] = STATE(93),
    [anon_sym_BSLASHt] = ACTIONS(163),
    [anon_sym_BSLASH0] = ACTIONS(163),
    [anon_sym_BSLASHr] = ACTIONS(163),
    [anon_sym_BSLASHb] = ACTIONS(163),
    [anon_sym_BSLASHv] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHa] = ACTIONS(163),
    [aux_sym_character_token1] = ACTIONS(165),
    [anon_sym_BSLASHf] = ACTIONS(163),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(163),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(163),
    [anon_sym_BSLASHn] = ACTIONS(163),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(163),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(167),
  },
  [26] = {
    [sym__block_comment_plus] = STATE(97),
    [aux_sym__block_comment_star_repeat1] = STATE(97),
    [sym__block_comment_star] = STATE(97),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(175),
  },
  [27] = {
    [sym_identifier] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
  },
  [28] = {
    [sym_is_function] = STATE(80),
    [sym_is_method] = STATE(80),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
  },
  [29] = {
    [sym_scope_expression] = STATE(98),
    [sym_identifier] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
  },
  [30] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(181),
  },
  [31] = {
    [sym_identifier] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
  },
  [32] = {
    [sym_is_function] = STATE(80),
    [sym_is_method] = STATE(80),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(131),
    [sym_is_primitive] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
  },
  [33] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(185),
  },
  [34] = {
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(191),
  },
  [36] = {
    [sym_assignment_op] = STATE(101),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
  },
  [37] = {
    [sym__override] = STATE(79),
    [sym_type] = STATE(103),
    [sym_is_function] = STATE(80),
    [sym_is_method] = STATE(80),
    [sym__base_type] = STATE(44),
    [sym_readability] = STATE(104),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(195),
    [sym_is_override] = ACTIONS(197),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_method] = ACTIONS(51),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_is_overridable] = ACTIONS(197),
    [anon_sym_function] = ACTIONS(35),
    [sym_is_primitive] = ACTIONS(199),
    [anon_sym_s8] = ACTIONS(7),
  },
  [38] = {
    [sym_type] = STATE(103),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [39] = {
    [sym_identifier] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
  },
  [40] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(203),
  },
  [41] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(205),
  },
  [42] = {
    [sym_assignment_post_op] = STATE(111),
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [anon_sym_GT_GT_EQ] = ACTIONS(209),
    [anon_sym_AMP_EQ] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(209),
    [anon_sym_DASH_EQ] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_LT_LT_EQ] = ACTIONS(209),
    [sym__access_op] = ACTIONS(215),
    [anon_sym_SLASH_EQ] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_PLUS_EQ] = ACTIONS(209),
    [anon_sym_STAR_EQ] = ACTIONS(209),
  },
  [43] = {
    [sym__comment] = STATE(113),
    [sym_string] = STATE(42),
    [sym_character] = STATE(42),
    [sym_module_definition] = STATE(30),
    [sym_extension] = STATE(30),
    [sym_is_method] = STATE(31),
    [sym__override] = STATE(32),
    [sym_goto_statement] = STATE(41),
    [sym_section_statement] = STATE(41),
    [sym_case_statement] = STATE(41),
    [sym_default_statement] = STATE(41),
    [sym_assignment_expression] = STATE(33),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(42),
    [sym__collection_or_value] = STATE(36),
    [sym_collection] = STATE(36),
    [sym_access_control] = STATE(37),
    [sym__number] = STATE(42),
    [sym_end_extension] = STATE(30),
    [sym__sentence] = STATE(113),
    [sym_function_definition] = STATE(30),
    [sym_readability] = STATE(38),
    [sym_type] = STATE(39),
    [sym_declaration_definition] = STATE(30),
    [sym_statement] = STATE(40),
    [sym_single_line_if_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym_expression_statement] = STATE(41),
    [sym_array_expression] = STATE(34),
    [sym__block_comment_star] = STATE(113),
    [sym__block_comment_plus] = STATE(113),
    [sym__value] = STATE(42),
    [sym__literal] = STATE(42),
    [sym_definition] = STATE(40),
    [sym_use_definition] = STATE(30),
    [sym_enum_definition] = STATE(30),
    [sym_is_function] = STATE(31),
    [sym_variable_definition] = STATE(30),
    [sym_container_definition] = STATE(30),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_end_statement] = STATE(41),
    [sym__control_flow_statement] = STATE(41),
    [sym_while_statement] = STATE(41),
    [sym_switch_statement] = STATE(41),
    [sym_return_statement] = STATE(41),
    [sym_group_expression] = STATE(45),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(113),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_switch] = ACTIONS(13),
    [anon_sym_PLUS_DASH] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_use] = ACTIONS(19),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_section] = ACTIONS(29),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_i8] = ACTIONS(7),
    [sym_null] = ACTIONS(23),
    [sym_integer] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(33),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_STAR_STAR] = ACTIONS(27),
    [anon_sym_function] = ACTIONS(35),
    [anon_sym_module] = ACTIONS(37),
    [anon_sym_end] = ACTIONS(39),
    [anon_sym_i16] = ACTIONS(7),
    [sym_long] = ACTIONS(41),
    [anon_sym_goto] = ACTIONS(43),
    [sym_double] = ACTIONS(41),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(27),
    [anon_sym_private] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(47),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
    [anon_sym_method] = ACTIONS(51),
    [anon_sym_enum] = ACTIONS(53),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_float] = ACTIONS(41),
    [sym_is_declare] = ACTIONS(55),
    [sym_hex] = ACTIONS(41),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(45),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(57),
    [sym_is_override] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_u16] = ACTIONS(7),
    [sym_is_external] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_s16] = ACTIONS(7),
    [sym_binary] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [sym_is_overridable] = ACTIONS(59),
    [sym_is_primitive] = ACTIONS(69),
  },
  [44] = {
    [sym_pointer] = STATE(116),
    [sym_array] = STATE(117),
    [aux_sym_type_repeat1] = STATE(116),
    [aux_sym_type_repeat2] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
  },
  [46] = {
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [sym_identifier] = ACTIONS(225),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(227),
  },
  [48] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(229),
  },
  [49] = {
    [anon_sym_LT_EQ] = ACTIONS(231),
    [anon_sym_LT] = ACTIONS(233),
    [anon_sym_AMP_AMP] = ACTIONS(231),
    [anon_sym_GT_GT_EQ] = ACTIONS(231),
    [anon_sym_AMP_EQ] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_PLUS_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [sym__access_op] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_SLASH_EQ] = ACTIONS(231),
    [anon_sym_GT_EQ] = ACTIONS(231),
    [anon_sym_CARET] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(231),
    [anon_sym_PIPE_EQ] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(231),
    [anon_sym_DASH_DASH] = ACTIONS(231),
    [anon_sym_AMP] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(231),
    [anon_sym_LT_LT] = ACTIONS(233),
    [anon_sym_PERCENT_EQ] = ACTIONS(231),
    [anon_sym_DASH_EQ] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(231),
    [anon_sym_CARET_EQ] = ACTIONS(231),
    [anon_sym_LT_LT_EQ] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PLUS_EQ] = ACTIONS(231),
    [anon_sym_PLUS] = ACTIONS(233),
    [anon_sym_STAR_EQ] = ACTIONS(231),
    [anon_sym_PIPE_PIPE] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
  },
  [50] = {
    [sym__escape_sequence] = STATE(119),
    [aux_sym_string_repeat1] = STATE(119),
    [anon_sym_BSLASHt] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_BSLASH0] = ACTIONS(235),
    [anon_sym_BSLASHr] = ACTIONS(235),
    [anon_sym_BSLASHb] = ACTIONS(235),
    [anon_sym_BSLASHv] = ACTIONS(235),
    [aux_sym_string_token1] = ACTIONS(239),
    [anon_sym_BSLASHa] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(235),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(235),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(235),
    [anon_sym_BSLASHn] = ACTIONS(235),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(235),
  },
  [51] = {
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
  },
  [52] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(122),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [53] = {
    [sym_assignment_post_op] = STATE(111),
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [anon_sym_GT_GT_EQ] = ACTIONS(209),
    [anon_sym_AMP_EQ] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(209),
    [anon_sym_DASH_EQ] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_LT_LT_EQ] = ACTIONS(209),
    [sym__access_op] = ACTIONS(247),
    [anon_sym_SLASH_EQ] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_PLUS_EQ] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_STAR_EQ] = ACTIONS(209),
  },
  [54] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [55] = {
    [sym_assignment_op] = STATE(125),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_RBRACE] = ACTIONS(251),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
  },
  [56] = {
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
  },
  [57] = {
    [sym_cast_ops] = STATE(84),
    [sym_string] = STATE(127),
    [sym_character] = STATE(127),
    [sym_cast_expression] = STATE(126),
    [sym_array_expression] = STATE(34),
    [sym__value] = STATE(127),
    [sym__literal] = STATE(127),
    [sym_assignment_expression] = STATE(126),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(127),
    [sym_unary_op] = STATE(128),
    [sym__collection_or_value] = STATE(88),
    [sym_collection] = STATE(88),
    [sym__number] = STATE(127),
    [sym_group_expression] = STATE(127),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(89),
    [anon_sym_AMP] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(253),
    [sym_double] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(141),
    [sym_identifier] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(145),
    [sym_null] = ACTIONS(255),
    [sym_integer] = ACTIONS(255),
    [sym_binary] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(137),
    [sym_float] = ACTIONS(253),
    [sym_oct] = ACTIONS(255),
    [sym_hex] = ACTIONS(253),
  },
  [58] = {
    [sym_scope_expression] = STATE(132),
    [sym_call_expression] = STATE(34),
    [sym_statement] = STATE(131),
    [sym_single_line_if_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym_string] = STATE(42),
    [sym_expression_statement] = STATE(41),
    [sym_character] = STATE(42),
    [sym_array_expression] = STATE(34),
    [sym_goto_statement] = STATE(41),
    [sym_section_statement] = STATE(41),
    [sym_case_statement] = STATE(41),
    [sym_default_statement] = STATE(41),
    [sym_assignment_expression] = STATE(33),
    [sym__value] = STATE(42),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(42),
    [sym__literal] = STATE(42),
    [sym_end_statement] = STATE(41),
    [sym_collection] = STATE(36),
    [sym__control_flow_statement] = STATE(41),
    [sym__number] = STATE(42),
    [sym_while_statement] = STATE(41),
    [sym_switch_statement] = STATE(41),
    [sym_return_statement] = STATE(41),
    [sym_group_expression] = STATE(45),
    [sym__collection_or_value] = STATE(36),
    [anon_sym_end] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_section] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_goto] = ACTIONS(43),
    [anon_sym_switch] = ACTIONS(13),
    [sym_long] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(259),
    [sym_double] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(47),
    [sym_null] = ACTIONS(23),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(33),
    [sym_binary] = ACTIONS(41),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_while] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [sym_float] = ACTIONS(41),
    [sym_hex] = ACTIONS(41),
  },
  [59] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(263),
  },
  [60] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(265),
  },
  [61] = {
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_u32] = ACTIONS(269),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_if] = ACTIONS(269),
    [anon_sym_switch] = ACTIONS(269),
    [anon_sym_PLUS_DASH] = ACTIONS(267),
    [anon_sym_readonly] = ACTIONS(269),
    [anon_sym_use] = ACTIONS(269),
    [anon_sym_u64] = ACTIONS(269),
    [anon_sym_while] = ACTIONS(269),
    [sym_oct] = ACTIONS(269),
    [anon_sym_case] = ACTIONS(269),
    [anon_sym_DASH_DASH] = ACTIONS(267),
    [anon_sym_section] = ACTIONS(269),
    [anon_sym_require] = ACTIONS(269),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_i8] = ACTIONS(269),
    [sym_null] = ACTIONS(269),
    [sym_integer] = ACTIONS(269),
    [anon_sym_default] = ACTIONS(269),
    [anon_sym_f32] = ACTIONS(269),
    [anon_sym_STAR_STAR] = ACTIONS(267),
    [anon_sym_function] = ACTIONS(269),
    [anon_sym_module] = ACTIONS(269),
    [anon_sym_end] = ACTIONS(269),
    [anon_sym_i16] = ACTIONS(269),
    [sym_long] = ACTIONS(267),
    [anon_sym_goto] = ACTIONS(269),
    [sym_double] = ACTIONS(267),
    [anon_sym_f64] = ACTIONS(269),
    [anon_sym_PLUS_PLUS] = ACTIONS(267),
    [anon_sym_private] = ACTIONS(269),
    [anon_sym_return] = ACTIONS(269),
    [anon_sym_SLASH_SLASH] = ACTIONS(269),
    [anon_sym_method] = ACTIONS(269),
    [anon_sym_enum] = ACTIONS(269),
    [anon_sym_i32] = ACTIONS(269),
    [anon_sym_u8] = ACTIONS(269),
    [sym_float] = ACTIONS(267),
    [sym_is_declare] = ACTIONS(269),
    [sym_hex] = ACTIONS(267),
    [anon_sym_s8] = ACTIONS(269),
    [anon_sym_s32] = ACTIONS(269),
    [anon_sym_protected] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(269),
    [sym_is_override] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
    [anon_sym_i64] = ACTIONS(269),
    [sym_identifier] = ACTIONS(269),
    [anon_sym_u16] = ACTIONS(269),
    [sym_is_external] = ACTIONS(269),
    [sym_binary] = ACTIONS(267),
    [anon_sym_s16] = ACTIONS(269),
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_SLASH_STAR] = ACTIONS(267),
    [sym_is_overridable] = ACTIONS(269),
    [sym_is_primitive] = ACTIONS(269),
  },
  [62] = {
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
  },
  [63] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(273),
  },
  [64] = {
    [sym_assignment_post_op] = STATE(111),
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [anon_sym_GT_GT_EQ] = ACTIONS(209),
    [anon_sym_AMP_EQ] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(209),
    [anon_sym_DASH_EQ] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_LT_LT_EQ] = ACTIONS(209),
    [sym__access_op] = ACTIONS(275),
    [anon_sym_SLASH_EQ] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_PLUS_EQ] = ACTIONS(209),
    [anon_sym_STAR_EQ] = ACTIONS(209),
  },
  [65] = {
    [sym_assignment_op] = STATE(101),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(251),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
  },
  [66] = {
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
  },
  [67] = {
    [sym__block_comment_plus] = STATE(136),
    [aux_sym__block_comment_plus_repeat1] = STATE(136),
    [sym__block_comment_star] = STATE(136),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(279),
  },
  [68] = {
    [sym__block_comment_plus] = STATE(138),
    [aux_sym__block_comment_star_repeat1] = STATE(138),
    [sym__block_comment_star] = STATE(138),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(283),
  },
  [69] = {
    [anon_sym_DQUOTE] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(287),
    [anon_sym_LBRACE] = ACTIONS(285),
    [anon_sym_if] = ACTIONS(287),
    [anon_sym_switch] = ACTIONS(287),
    [anon_sym_PLUS_DASH] = ACTIONS(285),
    [anon_sym_readonly] = ACTIONS(287),
    [anon_sym_use] = ACTIONS(287),
    [anon_sym_u64] = ACTIONS(287),
    [anon_sym_while] = ACTIONS(287),
    [sym_oct] = ACTIONS(287),
    [anon_sym_case] = ACTIONS(287),
    [anon_sym_DASH_DASH] = ACTIONS(285),
    [anon_sym_section] = ACTIONS(287),
    [anon_sym_require] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_i8] = ACTIONS(287),
    [sym_null] = ACTIONS(287),
    [sym_integer] = ACTIONS(287),
    [anon_sym_default] = ACTIONS(287),
    [anon_sym_f32] = ACTIONS(287),
    [anon_sym_STAR_STAR] = ACTIONS(285),
    [anon_sym_function] = ACTIONS(287),
    [anon_sym_module] = ACTIONS(287),
    [anon_sym_end] = ACTIONS(287),
    [anon_sym_i16] = ACTIONS(287),
    [sym_long] = ACTIONS(285),
    [anon_sym_goto] = ACTIONS(287),
    [sym_double] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(287),
    [anon_sym_PLUS_PLUS] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(287),
    [anon_sym_return] = ACTIONS(287),
    [anon_sym_SLASH_SLASH] = ACTIONS(287),
    [anon_sym_method] = ACTIONS(287),
    [anon_sym_enum] = ACTIONS(287),
    [anon_sym_i32] = ACTIONS(287),
    [anon_sym_u8] = ACTIONS(287),
    [sym_float] = ACTIONS(285),
    [sym_is_declare] = ACTIONS(287),
    [sym_hex] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(287),
    [anon_sym_s32] = ACTIONS(287),
    [anon_sym_protected] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(287),
    [sym_is_override] = ACTIONS(287),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_i64] = ACTIONS(287),
    [sym_identifier] = ACTIONS(287),
    [anon_sym_u16] = ACTIONS(287),
    [sym_is_external] = ACTIONS(287),
    [sym_binary] = ACTIONS(285),
    [anon_sym_s16] = ACTIONS(287),
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_SLASH_STAR] = ACTIONS(285),
    [sym_is_overridable] = ACTIONS(287),
    [sym_is_primitive] = ACTIONS(287),
  },
  [70] = {
    [sym__block_comment_plus] = STATE(140),
    [aux_sym__block_comment_plus_repeat1] = STATE(140),
    [sym__block_comment_star] = STATE(140),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(289),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(291),
  },
  [71] = {
    [anon_sym_private_write] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
  },
  [72] = {
    [sym_scope_expression] = STATE(142),
    [sym_identifier] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
  },
  [73] = {
    [sym__enum_element] = STATE(144),
    [sym_identifier] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
  },
  [74] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(299),
  },
  [75] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(301),
  },
  [76] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(303),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(305),
  },
  [78] = {
    [sym_is_function] = STATE(145),
    [sym_is_method] = STATE(145),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
  },
  [79] = {
    [sym_is_function] = STATE(145),
    [sym_is_method] = STATE(145),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(131),
    [sym_is_primitive] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
  },
  [80] = {
    [sym_identifier] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
  },
  [81] = {
    [sym_hex] = ACTIONS(311),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [sym_integer] = ACTIONS(313),
    [sym_binary] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(311),
    [sym_double] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(311),
    [sym_identifier] = ACTIONS(313),
    [sym_oct] = ACTIONS(313),
    [sym_float] = ACTIONS(311),
    [sym_null] = ACTIONS(313),
  },
  [82] = {
    [sym_type] = STATE(148),
    [sym__base_type] = STATE(149),
    [sym_primitive_type] = STATE(149),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(315),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [83] = {
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_SLASH] = ACTIONS(317),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(317),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(317),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(317),
    [anon_sym_PERCENT] = ACTIONS(317),
    [sym__scope_op] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(317),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(317),
    [anon_sym_AMP_AMP] = ACTIONS(149),
  },
  [84] = {
    [sym_group_expression] = STATE(151),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [85] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(321),
  },
  [86] = {
    [sym_assignment_post_op] = STATE(111),
    [sym_array] = STATE(112),
    [sym_binary_op] = STATE(155),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_GT_GT_EQ] = ACTIONS(209),
    [anon_sym_AMP_EQ] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [sym__access_op] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_SLASH_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_PERCENT_EQ] = ACTIONS(209),
    [anon_sym_DASH_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_LT_LT_EQ] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_PLUS_EQ] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(321),
  },
  [87] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(157),
    [sym_string] = STATE(157),
    [sym_character] = STATE(157),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(157),
    [sym_group_expression] = STATE(157),
    [sym__value] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(329),
    [sym_binary] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(331),
    [sym_double] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(331),
    [sym_oct] = ACTIONS(329),
    [sym_float] = ACTIONS(331),
  },
  [88] = {
    [sym_assignment_op] = STATE(159),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
  },
  [89] = {
    [anon_sym_LT_EQ] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_EQ] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_AMP] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [sym__scope_op] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(187),
    [anon_sym_LT_LT] = ACTIONS(189),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_LT] = ACTIONS(189),
    [anon_sym_AMP_AMP] = ACTIONS(187),
  },
  [90] = {
    [aux_sym_extension_repeat1] = STATE(163),
    [sym_parameter_list] = STATE(164),
    [sym_string] = STATE(163),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym_identifier] = ACTIONS(339),
    [sym__space] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
  },
  [91] = {
    [sym_scope_expression] = STATE(165),
    [sym_identifier] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
  },
  [92] = {
    [sym_type] = STATE(166),
    [sym__base_type] = STATE(167),
    [sym_primitive_type] = STATE(167),
    [sym_container_types] = STATE(168),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(349),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_arguments] = ACTIONS(347),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_symbol] = ACTIONS(347),
    [anon_sym_s8] = ACTIONS(7),
  },
  [93] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(351),
  },
  [94] = {
    [sym__block_comment_plus] = STATE(171),
    [aux_sym__block_comment_plus_repeat1] = STATE(171),
    [sym__block_comment_star] = STATE(171),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(355),
  },
  [95] = {
    [sym__block_comment_plus] = STATE(173),
    [aux_sym__block_comment_star_repeat1] = STATE(173),
    [sym__block_comment_star] = STATE(173),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(359),
  },
  [96] = {
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_u32] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_switch] = ACTIONS(363),
    [anon_sym_PLUS_DASH] = ACTIONS(361),
    [anon_sym_readonly] = ACTIONS(363),
    [anon_sym_use] = ACTIONS(363),
    [anon_sym_u64] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(363),
    [sym_oct] = ACTIONS(363),
    [anon_sym_case] = ACTIONS(363),
    [anon_sym_DASH_DASH] = ACTIONS(361),
    [anon_sym_section] = ACTIONS(363),
    [anon_sym_require] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_i8] = ACTIONS(363),
    [sym_null] = ACTIONS(363),
    [sym_integer] = ACTIONS(363),
    [anon_sym_default] = ACTIONS(363),
    [anon_sym_f32] = ACTIONS(363),
    [anon_sym_STAR_STAR] = ACTIONS(361),
    [anon_sym_function] = ACTIONS(363),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [anon_sym_i16] = ACTIONS(363),
    [sym_long] = ACTIONS(361),
    [anon_sym_goto] = ACTIONS(363),
    [sym_double] = ACTIONS(361),
    [anon_sym_f64] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(361),
    [anon_sym_private] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(363),
    [anon_sym_SLASH_SLASH] = ACTIONS(363),
    [anon_sym_method] = ACTIONS(363),
    [anon_sym_enum] = ACTIONS(363),
    [anon_sym_i32] = ACTIONS(363),
    [anon_sym_u8] = ACTIONS(363),
    [sym_float] = ACTIONS(361),
    [sym_is_declare] = ACTIONS(363),
    [sym_hex] = ACTIONS(361),
    [anon_sym_s8] = ACTIONS(363),
    [anon_sym_s32] = ACTIONS(363),
    [anon_sym_protected] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(363),
    [sym_is_override] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(363),
    [anon_sym_i64] = ACTIONS(363),
    [sym_identifier] = ACTIONS(363),
    [anon_sym_u16] = ACTIONS(363),
    [sym_is_external] = ACTIONS(363),
    [sym_binary] = ACTIONS(361),
    [anon_sym_s16] = ACTIONS(363),
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_SLASH_STAR] = ACTIONS(361),
    [sym_is_overridable] = ACTIONS(363),
    [sym_is_primitive] = ACTIONS(363),
  },
  [97] = {
    [sym__block_comment_plus] = STATE(175),
    [aux_sym__block_comment_star_repeat1] = STATE(175),
    [sym__block_comment_star] = STATE(175),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(367),
  },
  [98] = {
    [sym__scope_op] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(371),
  },
  [99] = {
    [sym_parameter_list] = STATE(178),
    [sym_return_list] = STATE(179),
    [anon_sym_returns] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(375),
  },
  [100] = {
    [sym_hex] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [sym_integer] = ACTIONS(379),
    [sym_binary] = ACTIONS(377),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(377),
    [sym_long] = ACTIONS(377),
    [sym_double] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [sym_identifier] = ACTIONS(379),
    [sym_oct] = ACTIONS(379),
    [sym_float] = ACTIONS(377),
    [sym_null] = ACTIONS(379),
  },
  [101] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(182),
    [sym_string] = STATE(182),
    [sym_character] = STATE(182),
    [sym__collection_or_value] = STATE(181),
    [sym_array_expression] = STATE(34),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(182),
    [sym_group_expression] = STATE(182),
    [sym__value] = STATE(182),
    [sym__literal] = STATE(182),
    [sym_scope_expression] = STATE(183),
    [sym_null] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(381),
    [sym_binary] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(383),
    [sym_double] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(385),
    [sym_hex] = ACTIONS(383),
    [sym_oct] = ACTIONS(381),
    [sym_float] = ACTIONS(383),
  },
  [102] = {
    [sym__override] = STATE(184),
    [sym_is_function] = STATE(145),
    [sym_is_method] = STATE(145),
    [sym_is_override] = ACTIONS(387),
    [anon_sym_method] = ACTIONS(129),
    [sym_is_overridable] = ACTIONS(387),
    [anon_sym_function] = ACTIONS(131),
    [sym_is_primitive] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
  },
  [103] = {
    [sym_identifier] = ACTIONS(389),
    [sym__space] = ACTIONS(3),
  },
  [104] = {
    [sym_type] = STATE(186),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [105] = {
    [sym_static_assignment] = STATE(188),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(393),
  },
  [106] = {
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_u32] = ACTIONS(397),
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_if] = ACTIONS(397),
    [anon_sym_switch] = ACTIONS(397),
    [anon_sym_PLUS_DASH] = ACTIONS(395),
    [anon_sym_readonly] = ACTIONS(397),
    [anon_sym_use] = ACTIONS(397),
    [anon_sym_u64] = ACTIONS(397),
    [anon_sym_while] = ACTIONS(397),
    [sym_oct] = ACTIONS(397),
    [anon_sym_case] = ACTIONS(397),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [anon_sym_section] = ACTIONS(397),
    [anon_sym_require] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_i8] = ACTIONS(397),
    [sym_null] = ACTIONS(397),
    [sym_integer] = ACTIONS(397),
    [anon_sym_default] = ACTIONS(397),
    [anon_sym_f32] = ACTIONS(397),
    [anon_sym_STAR_STAR] = ACTIONS(395),
    [anon_sym_function] = ACTIONS(397),
    [anon_sym_module] = ACTIONS(397),
    [anon_sym_end] = ACTIONS(397),
    [anon_sym_i16] = ACTIONS(397),
    [sym_long] = ACTIONS(395),
    [anon_sym_goto] = ACTIONS(397),
    [sym_double] = ACTIONS(395),
    [anon_sym_f64] = ACTIONS(397),
    [anon_sym_PLUS_PLUS] = ACTIONS(395),
    [anon_sym_private] = ACTIONS(397),
    [anon_sym_return] = ACTIONS(397),
    [anon_sym_SLASH_SLASH] = ACTIONS(397),
    [anon_sym_method] = ACTIONS(397),
    [anon_sym_enum] = ACTIONS(397),
    [anon_sym_i32] = ACTIONS(397),
    [anon_sym_u8] = ACTIONS(397),
    [sym_float] = ACTIONS(395),
    [sym_is_declare] = ACTIONS(397),
    [sym_hex] = ACTIONS(395),
    [anon_sym_s8] = ACTIONS(397),
    [anon_sym_s32] = ACTIONS(397),
    [anon_sym_protected] = ACTIONS(397),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(397),
    [sym_is_override] = ACTIONS(397),
    [anon_sym_LPAREN] = ACTIONS(397),
    [anon_sym_i64] = ACTIONS(397),
    [sym_identifier] = ACTIONS(397),
    [anon_sym_u16] = ACTIONS(397),
    [sym_is_external] = ACTIONS(397),
    [sym_binary] = ACTIONS(395),
    [anon_sym_s16] = ACTIONS(397),
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_SLASH_STAR] = ACTIONS(395),
    [sym_is_overridable] = ACTIONS(397),
    [sym_is_primitive] = ACTIONS(397),
  },
  [107] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(189),
    [sym_string] = STATE(189),
    [sym_character] = STATE(189),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(189),
    [sym_group_expression] = STATE(189),
    [sym__value] = STATE(189),
    [sym__literal] = STATE(189),
    [sym_scope_expression] = STATE(132),
    [sym_null] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(399),
    [sym_binary] = ACTIONS(401),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(401),
    [sym_double] = ACTIONS(401),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(259),
    [sym_hex] = ACTIONS(401),
    [sym_oct] = ACTIONS(399),
    [sym_float] = ACTIONS(401),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_RBRACE] = ACTIONS(403),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(403),
  },
  [109] = {
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(407),
  },
  [110] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(194),
    [sym_string] = STATE(194),
    [sym_character] = STATE(194),
    [sym__comma_list_values] = STATE(193),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(194),
    [sym_group_expression] = STATE(194),
    [sym__value] = STATE(194),
    [sym__literal] = STATE(194),
    [sym_scope_expression] = STATE(195),
    [sym_null] = ACTIONS(409),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(409),
    [sym_binary] = ACTIONS(411),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(411),
    [sym_double] = ACTIONS(411),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(413),
    [sym_hex] = ACTIONS(411),
    [sym_oct] = ACTIONS(409),
    [sym_float] = ACTIONS(411),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(415),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(415),
  },
  [112] = {
    [anon_sym_LT_EQ] = ACTIONS(417),
    [anon_sym_LT] = ACTIONS(419),
    [anon_sym_AMP_AMP] = ACTIONS(417),
    [anon_sym_GT_GT_EQ] = ACTIONS(417),
    [anon_sym_AMP_EQ] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_PLUS_PLUS] = ACTIONS(417),
    [anon_sym_DASH] = ACTIONS(419),
    [anon_sym_SLASH] = ACTIONS(419),
    [sym__access_op] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(419),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [anon_sym_CARET] = ACTIONS(419),
    [anon_sym_BANG_EQ] = ACTIONS(417),
    [anon_sym_PIPE_EQ] = ACTIONS(417),
    [anon_sym_RBRACE] = ACTIONS(417),
    [anon_sym_DASH_DASH] = ACTIONS(417),
    [anon_sym_AMP] = ACTIONS(419),
    [anon_sym_PERCENT] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(417),
    [anon_sym_LT_LT] = ACTIONS(419),
    [anon_sym_PERCENT_EQ] = ACTIONS(417),
    [anon_sym_DASH_EQ] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(417),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [anon_sym_CARET_EQ] = ACTIONS(417),
    [anon_sym_LT_LT_EQ] = ACTIONS(417),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_COLON_EQ] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PLUS_EQ] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(419),
    [anon_sym_STAR_EQ] = ACTIONS(417),
    [anon_sym_PIPE_PIPE] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
  },
  [113] = {
    [sym__comment] = STATE(113),
    [sym_string] = STATE(42),
    [sym_character] = STATE(42),
    [sym_module_definition] = STATE(30),
    [sym_extension] = STATE(30),
    [sym_is_method] = STATE(31),
    [sym__override] = STATE(32),
    [sym_goto_statement] = STATE(41),
    [sym_section_statement] = STATE(41),
    [sym_case_statement] = STATE(41),
    [sym_default_statement] = STATE(41),
    [sym_assignment_expression] = STATE(33),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(42),
    [sym__collection_or_value] = STATE(36),
    [sym_collection] = STATE(36),
    [sym_access_control] = STATE(37),
    [sym__number] = STATE(42),
    [sym_end_extension] = STATE(30),
    [sym__sentence] = STATE(113),
    [sym_function_definition] = STATE(30),
    [sym_readability] = STATE(38),
    [sym_type] = STATE(39),
    [sym_declaration_definition] = STATE(30),
    [sym_statement] = STATE(40),
    [sym_single_line_if_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym_expression_statement] = STATE(41),
    [sym_array_expression] = STATE(34),
    [sym__block_comment_star] = STATE(113),
    [sym__block_comment_plus] = STATE(113),
    [sym__value] = STATE(42),
    [sym__literal] = STATE(42),
    [sym_definition] = STATE(40),
    [sym_use_definition] = STATE(30),
    [sym_enum_definition] = STATE(30),
    [sym_is_function] = STATE(31),
    [sym_variable_definition] = STATE(30),
    [sym_container_definition] = STATE(30),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_end_statement] = STATE(41),
    [sym__control_flow_statement] = STATE(41),
    [sym_while_statement] = STATE(41),
    [sym_switch_statement] = STATE(41),
    [sym_return_statement] = STATE(41),
    [sym_group_expression] = STATE(45),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(113),
    [anon_sym_DQUOTE] = ACTIONS(421),
    [anon_sym_u32] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(427),
    [anon_sym_if] = ACTIONS(430),
    [anon_sym_switch] = ACTIONS(433),
    [anon_sym_PLUS_DASH] = ACTIONS(436),
    [anon_sym_readonly] = ACTIONS(439),
    [anon_sym_use] = ACTIONS(442),
    [anon_sym_u64] = ACTIONS(424),
    [anon_sym_while] = ACTIONS(445),
    [sym_oct] = ACTIONS(448),
    [anon_sym_case] = ACTIONS(451),
    [anon_sym_DASH_DASH] = ACTIONS(454),
    [anon_sym_section] = ACTIONS(457),
    [anon_sym_require] = ACTIONS(442),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [anon_sym_i8] = ACTIONS(424),
    [sym_null] = ACTIONS(448),
    [sym_integer] = ACTIONS(448),
    [anon_sym_default] = ACTIONS(463),
    [anon_sym_f32] = ACTIONS(424),
    [anon_sym_STAR_STAR] = ACTIONS(454),
    [anon_sym_function] = ACTIONS(466),
    [anon_sym_module] = ACTIONS(469),
    [anon_sym_end] = ACTIONS(472),
    [anon_sym_i16] = ACTIONS(424),
    [sym_long] = ACTIONS(475),
    [anon_sym_goto] = ACTIONS(478),
    [sym_double] = ACTIONS(475),
    [anon_sym_f64] = ACTIONS(424),
    [anon_sym_PLUS_PLUS] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(481),
    [anon_sym_return] = ACTIONS(484),
    [anon_sym_SLASH_SLASH] = ACTIONS(487),
    [anon_sym_method] = ACTIONS(490),
    [anon_sym_enum] = ACTIONS(493),
    [anon_sym_i32] = ACTIONS(424),
    [anon_sym_u8] = ACTIONS(424),
    [sym_float] = ACTIONS(475),
    [sym_is_declare] = ACTIONS(496),
    [sym_hex] = ACTIONS(475),
    [anon_sym_s8] = ACTIONS(424),
    [anon_sym_s32] = ACTIONS(424),
    [anon_sym_protected] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(499),
    [sym_is_override] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(505),
    [anon_sym_i64] = ACTIONS(424),
    [sym_identifier] = ACTIONS(508),
    [anon_sym_u16] = ACTIONS(424),
    [sym_is_external] = ACTIONS(496),
    [sym_binary] = ACTIONS(475),
    [anon_sym_s16] = ACTIONS(424),
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_SLASH_STAR] = ACTIONS(513),
    [sym_is_overridable] = ACTIONS(502),
    [sym_is_primitive] = ACTIONS(516),
  },
  [114] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_COLON_EQ] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(519),
    [sym_identifier] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
  },
  [115] = {
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(523),
  },
  [116] = {
    [sym_pointer] = STATE(198),
    [sym_array] = STATE(199),
    [aux_sym_type_repeat1] = STATE(198),
    [aux_sym_type_repeat2] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_identifier] = ACTIONS(525),
    [anon_sym_STAR] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
  },
  [117] = {
    [sym_array] = STATE(200),
    [aux_sym_type_repeat2] = STATE(200),
    [sym_identifier] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(219),
  },
  [118] = {
    [anon_sym_LT_EQ] = ACTIONS(527),
    [anon_sym_LT] = ACTIONS(529),
    [anon_sym_AMP_AMP] = ACTIONS(527),
    [anon_sym_GT_GT_EQ] = ACTIONS(527),
    [anon_sym_AMP_EQ] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(527),
    [anon_sym_PLUS_PLUS] = ACTIONS(527),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym_SLASH] = ACTIONS(529),
    [sym__access_op] = ACTIONS(527),
    [anon_sym_GT_GT] = ACTIONS(529),
    [anon_sym_SLASH_EQ] = ACTIONS(527),
    [anon_sym_GT_EQ] = ACTIONS(527),
    [anon_sym_CARET] = ACTIONS(529),
    [anon_sym_BANG_EQ] = ACTIONS(527),
    [anon_sym_PIPE_EQ] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_DASH_DASH] = ACTIONS(527),
    [anon_sym_AMP] = ACTIONS(529),
    [anon_sym_PERCENT] = ACTIONS(529),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(527),
    [anon_sym_LT_LT] = ACTIONS(529),
    [anon_sym_PERCENT_EQ] = ACTIONS(527),
    [anon_sym_DASH_EQ] = ACTIONS(527),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(527),
    [anon_sym_EQ_EQ] = ACTIONS(527),
    [anon_sym_CARET_EQ] = ACTIONS(527),
    [anon_sym_LT_LT_EQ] = ACTIONS(527),
    [anon_sym_STAR] = ACTIONS(529),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_COLON_EQ] = ACTIONS(527),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PLUS_EQ] = ACTIONS(527),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_STAR_EQ] = ACTIONS(527),
    [anon_sym_PIPE_PIPE] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
  },
  [119] = {
    [sym__escape_sequence] = STATE(119),
    [aux_sym_string_repeat1] = STATE(119),
    [anon_sym_BSLASHt] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_BSLASH0] = ACTIONS(531),
    [anon_sym_BSLASHr] = ACTIONS(531),
    [anon_sym_BSLASHb] = ACTIONS(531),
    [anon_sym_BSLASHv] = ACTIONS(531),
    [aux_sym_string_token1] = ACTIONS(536),
    [anon_sym_BSLASHa] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(531),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(531),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(531),
    [anon_sym_BSLASHn] = ACTIONS(531),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(531),
  },
  [120] = {
    [sym_scope_expression] = STATE(201),
    [sym_identifier] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
  },
  [121] = {
    [sym__assignment_or_collection_or_value] = STATE(202),
    [sym_string] = STATE(53),
    [sym_character] = STATE(53),
    [sym_array_expression] = STATE(34),
    [sym__value] = STATE(53),
    [sym__literal] = STATE(53),
    [sym_assignment_expression] = STATE(202),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym_collection] = STATE(55),
    [sym__number] = STATE(53),
    [sym_group_expression] = STATE(53),
    [sym_call_expression] = STATE(34),
    [sym_scope_expression] = STATE(56),
    [sym_null] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(83),
    [sym_binary] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(85),
    [sym_double] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(87),
    [sym_hex] = ACTIONS(85),
    [sym_oct] = ACTIONS(83),
    [sym_float] = ACTIONS(85),
  },
  [122] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(541),
  },
  [123] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(204),
    [sym_string] = STATE(204),
    [sym_character] = STATE(204),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(204),
    [sym_group_expression] = STATE(204),
    [sym__value] = STATE(204),
    [sym__literal] = STATE(204),
    [sym_scope_expression] = STATE(56),
    [sym_null] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(543),
    [sym_binary] = ACTIONS(545),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(545),
    [sym_double] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(87),
    [sym_hex] = ACTIONS(545),
    [sym_oct] = ACTIONS(543),
    [sym_float] = ACTIONS(545),
  },
  [124] = {
    [anon_sym_GT_GT_EQ] = ACTIONS(547),
    [anon_sym_AMP_EQ] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(547),
    [anon_sym_DASH_EQ] = ACTIONS(547),
    [anon_sym_CARET_EQ] = ACTIONS(547),
    [anon_sym_LT_LT_EQ] = ACTIONS(547),
    [anon_sym_SLASH_EQ] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_COLON_EQ] = ACTIONS(547),
    [anon_sym_PIPE_EQ] = ACTIONS(547),
    [anon_sym_PLUS_EQ] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(547),
    [anon_sym_STAR_EQ] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
  },
  [125] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(206),
    [sym_string] = STATE(206),
    [sym_character] = STATE(206),
    [sym__collection_or_value] = STATE(181),
    [sym_array_expression] = STATE(34),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(206),
    [sym_group_expression] = STATE(206),
    [sym__value] = STATE(206),
    [sym__literal] = STATE(206),
    [sym_scope_expression] = STATE(207),
    [sym_null] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(549),
    [sym_binary] = ACTIONS(551),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(551),
    [sym_double] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(553),
    [sym_hex] = ACTIONS(551),
    [sym_oct] = ACTIONS(549),
    [sym_float] = ACTIONS(551),
  },
  [126] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(555),
  },
  [127] = {
    [sym_assignment_post_op] = STATE(111),
    [sym_array] = STATE(112),
    [sym_binary_op] = STATE(209),
    [anon_sym_LT_EQ] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(323),
    [anon_sym_GT_GT_EQ] = ACTIONS(209),
    [anon_sym_AMP_EQ] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_PLUS_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [sym__access_op] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(325),
    [anon_sym_SLASH_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(323),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(325),
    [anon_sym_DASH_DASH] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [anon_sym_LT_LT] = ACTIONS(325),
    [anon_sym_PERCENT_EQ] = ACTIONS(209),
    [anon_sym_DASH_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_LT_LT_EQ] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_COLON_EQ] = ACTIONS(209),
    [anon_sym_PLUS_EQ] = ACTIONS(209),
    [anon_sym_PIPE_PIPE] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(555),
  },
  [128] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(210),
    [sym_string] = STATE(210),
    [sym_character] = STATE(210),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(210),
    [sym_group_expression] = STATE(210),
    [sym__value] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(557),
    [sym_binary] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(559),
    [sym_double] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(559),
    [sym_oct] = ACTIONS(557),
    [sym_float] = ACTIONS(559),
  },
  [129] = {
    [anon_sym_method] = ACTIONS(561),
    [anon_sym_default] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(561),
    [anon_sym_switch] = ACTIONS(561),
    [anon_sym_while] = ACTIONS(561),
    [anon_sym_function] = ACTIONS(561),
    [anon_sym_case] = ACTIONS(561),
    [anon_sym_module] = ACTIONS(561),
  },
  [130] = {
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
  },
  [131] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(565),
  },
  [132] = {
    [anon_sym_DASH_DASH] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
  },
  [133] = {
    [sym_scope_expression] = STATE(212),
    [sym_identifier] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
  },
  [134] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(213),
    [sym_string] = STATE(213),
    [sym_character] = STATE(213),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(213),
    [sym_group_expression] = STATE(213),
    [sym__value] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_scope_expression] = STATE(66),
    [sym_null] = ACTIONS(569),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(569),
    [sym_binary] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(571),
    [sym_double] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(105),
    [sym_hex] = ACTIONS(571),
    [sym_oct] = ACTIONS(569),
    [sym_float] = ACTIONS(571),
  },
  [135] = {
    [anon_sym_PLUS_DASH] = ACTIONS(285),
    [anon_sym_SLASH_STAR] = ACTIONS(285),
    [anon_sym_DASH_PLUS] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(287),
  },
  [136] = {
    [sym__block_comment_plus] = STATE(140),
    [aux_sym__block_comment_plus_repeat1] = STATE(140),
    [sym__block_comment_star] = STATE(140),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(291),
  },
  [137] = {
    [anon_sym_PLUS_DASH] = ACTIONS(361),
    [anon_sym_SLASH_STAR] = ACTIONS(361),
    [anon_sym_DASH_PLUS] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(363),
  },
  [138] = {
    [sym__block_comment_plus] = STATE(175),
    [aux_sym__block_comment_star_repeat1] = STATE(175),
    [sym__block_comment_star] = STATE(175),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(367),
  },
  [139] = {
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_u32] = ACTIONS(579),
    [anon_sym_LBRACE] = ACTIONS(577),
    [anon_sym_if] = ACTIONS(579),
    [anon_sym_switch] = ACTIONS(579),
    [anon_sym_PLUS_DASH] = ACTIONS(577),
    [anon_sym_readonly] = ACTIONS(579),
    [anon_sym_use] = ACTIONS(579),
    [anon_sym_u64] = ACTIONS(579),
    [anon_sym_while] = ACTIONS(579),
    [sym_oct] = ACTIONS(579),
    [anon_sym_case] = ACTIONS(579),
    [anon_sym_DASH_DASH] = ACTIONS(577),
    [anon_sym_section] = ACTIONS(579),
    [anon_sym_require] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_i8] = ACTIONS(579),
    [sym_null] = ACTIONS(579),
    [sym_integer] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(579),
    [anon_sym_f32] = ACTIONS(579),
    [anon_sym_STAR_STAR] = ACTIONS(577),
    [anon_sym_function] = ACTIONS(579),
    [anon_sym_module] = ACTIONS(579),
    [anon_sym_end] = ACTIONS(579),
    [anon_sym_i16] = ACTIONS(579),
    [sym_long] = ACTIONS(577),
    [anon_sym_goto] = ACTIONS(579),
    [sym_double] = ACTIONS(577),
    [anon_sym_f64] = ACTIONS(579),
    [anon_sym_PLUS_PLUS] = ACTIONS(577),
    [anon_sym_private] = ACTIONS(579),
    [anon_sym_return] = ACTIONS(579),
    [anon_sym_SLASH_SLASH] = ACTIONS(579),
    [anon_sym_method] = ACTIONS(579),
    [anon_sym_enum] = ACTIONS(579),
    [anon_sym_i32] = ACTIONS(579),
    [anon_sym_u8] = ACTIONS(579),
    [sym_float] = ACTIONS(577),
    [sym_is_declare] = ACTIONS(579),
    [sym_hex] = ACTIONS(577),
    [anon_sym_s8] = ACTIONS(579),
    [anon_sym_s32] = ACTIONS(579),
    [anon_sym_protected] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(579),
    [sym_is_override] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [anon_sym_i64] = ACTIONS(579),
    [sym_identifier] = ACTIONS(579),
    [anon_sym_u16] = ACTIONS(579),
    [sym_is_external] = ACTIONS(579),
    [sym_binary] = ACTIONS(577),
    [anon_sym_s16] = ACTIONS(579),
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_SLASH_STAR] = ACTIONS(577),
    [sym_is_overridable] = ACTIONS(579),
    [sym_is_primitive] = ACTIONS(579),
  },
  [140] = {
    [sym__block_comment_plus] = STATE(140),
    [aux_sym__block_comment_plus_repeat1] = STATE(140),
    [sym__block_comment_star] = STATE(140),
    [anon_sym_PLUS_DASH] = ACTIONS(581),
    [anon_sym_SLASH_STAR] = ACTIONS(584),
    [anon_sym_DASH_PLUS] = ACTIONS(587),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(589),
  },
  [141] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(592),
  },
  [142] = {
    [sym__scope_op] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(594),
  },
  [143] = {
    [sym_static_assignment] = STATE(218),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_COLON_EQ] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(596),
  },
  [144] = {
    [aux_sym_enum_definition_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(602),
  },
  [145] = {
    [sym_identifier] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
  },
  [146] = {
    [sym_is_function] = STATE(223),
    [sym_is_method] = STATE(223),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
  },
  [147] = {
    [sym_parameter_list] = STATE(224),
    [sym_return_list] = STATE(225),
    [anon_sym_returns] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(606),
  },
  [148] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(608),
  },
  [149] = {
    [sym_pointer] = STATE(226),
    [sym_array] = STATE(227),
    [aux_sym_type_repeat1] = STATE(226),
    [aux_sym_type_repeat2] = STATE(227),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
  },
  [150] = {
    [sym_scope_expression] = STATE(228),
    [sym_identifier] = ACTIONS(610),
    [sym__space] = ACTIONS(3),
  },
  [151] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(612),
  },
  [152] = {
    [anon_sym_LT_EQ] = ACTIONS(614),
    [anon_sym_LT] = ACTIONS(616),
    [anon_sym_AMP_AMP] = ACTIONS(614),
    [anon_sym_GT_GT_EQ] = ACTIONS(614),
    [anon_sym_AMP_EQ] = ACTIONS(614),
    [anon_sym_LBRACK] = ACTIONS(614),
    [anon_sym_PLUS_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(616),
    [anon_sym_SLASH] = ACTIONS(616),
    [sym__access_op] = ACTIONS(614),
    [anon_sym_GT_GT] = ACTIONS(616),
    [anon_sym_SLASH_EQ] = ACTIONS(614),
    [anon_sym_GT_EQ] = ACTIONS(614),
    [anon_sym_CARET] = ACTIONS(616),
    [anon_sym_BANG_EQ] = ACTIONS(614),
    [anon_sym_PIPE_EQ] = ACTIONS(614),
    [anon_sym_RBRACE] = ACTIONS(614),
    [anon_sym_DASH_DASH] = ACTIONS(614),
    [anon_sym_AMP] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(614),
    [anon_sym_LT_LT] = ACTIONS(616),
    [anon_sym_PERCENT_EQ] = ACTIONS(614),
    [anon_sym_DASH_EQ] = ACTIONS(614),
    [anon_sym_GT] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(614),
    [anon_sym_EQ_EQ] = ACTIONS(614),
    [anon_sym_CARET_EQ] = ACTIONS(614),
    [anon_sym_LT_LT_EQ] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(616),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON_EQ] = ACTIONS(614),
    [anon_sym_PIPE] = ACTIONS(616),
    [anon_sym_PLUS_EQ] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(616),
    [anon_sym_STAR_EQ] = ACTIONS(614),
    [anon_sym_PIPE_PIPE] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
  },
  [153] = {
    [sym_hex] = ACTIONS(618),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym_integer] = ACTIONS(620),
    [sym_binary] = ACTIONS(618),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(618),
    [sym_double] = ACTIONS(618),
    [anon_sym_LPAREN] = ACTIONS(620),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [sym_identifier] = ACTIONS(620),
    [sym_oct] = ACTIONS(620),
    [sym_float] = ACTIONS(618),
    [sym_null] = ACTIONS(620),
  },
  [154] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(229),
    [sym_string] = STATE(229),
    [sym_character] = STATE(229),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(229),
    [sym_group_expression] = STATE(229),
    [sym__value] = STATE(229),
    [sym__literal] = STATE(229),
    [sym_scope_expression] = STATE(89),
    [sym_null] = ACTIONS(622),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(622),
    [sym_binary] = ACTIONS(624),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(624),
    [sym_double] = ACTIONS(624),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(143),
    [sym_hex] = ACTIONS(624),
    [sym_oct] = ACTIONS(622),
    [sym_float] = ACTIONS(624),
  },
  [155] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(230),
    [sym_string] = STATE(230),
    [sym_character] = STATE(230),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(230),
    [sym_group_expression] = STATE(230),
    [sym__value] = STATE(230),
    [sym__literal] = STATE(230),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(626),
    [sym_binary] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(628),
    [sym_double] = ACTIONS(628),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(628),
    [sym_oct] = ACTIONS(626),
    [sym_float] = ACTIONS(628),
  },
  [156] = {
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(149),
  },
  [157] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(634),
  },
  [158] = {
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(187),
  },
  [159] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(234),
    [sym_string] = STATE(234),
    [sym_character] = STATE(234),
    [sym__collection_or_value] = STATE(181),
    [sym_array_expression] = STATE(34),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(234),
    [sym_group_expression] = STATE(234),
    [sym__value] = STATE(234),
    [sym__literal] = STATE(234),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(636),
    [sym_binary] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(638),
    [sym_double] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(638),
    [sym_oct] = ACTIONS(636),
    [sym_float] = ACTIONS(638),
  },
  [160] = {
    [sym__escape_sequence] = STATE(236),
    [aux_sym_string_repeat1] = STATE(236),
    [anon_sym_BSLASHt] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_BSLASH0] = ACTIONS(640),
    [anon_sym_BSLASHr] = ACTIONS(640),
    [anon_sym_BSLASHb] = ACTIONS(640),
    [anon_sym_BSLASHv] = ACTIONS(640),
    [aux_sym_string_token1] = ACTIONS(644),
    [anon_sym_BSLASHa] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(640),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(640),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(640),
    [anon_sym_BSLASHn] = ACTIONS(640),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(640),
  },
  [161] = {
    [sym_type] = STATE(240),
    [sym__comma_list_variables] = STATE(241),
    [sym_variable_definition] = STATE(242),
    [sym_container_definition] = STATE(242),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_access_control] = STATE(243),
    [sym_readability] = STATE(244),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(648),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(650),
  },
  [162] = {
    [sym_string] = STATE(245),
    [sym_identifier] = ACTIONS(652),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [sym__space] = ACTIONS(3),
  },
  [163] = {
    [aux_sym_extension_repeat1] = STATE(246),
    [sym_parameter_list] = STATE(247),
    [sym_string] = STATE(246),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym_identifier] = ACTIONS(654),
    [sym__space] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(656),
  },
  [164] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(656),
  },
  [165] = {
    [anon_sym_DASH_DASH] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(660),
    [anon_sym_AMP_EQ] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(658),
    [anon_sym_DASH_EQ] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_PLUS_PLUS] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [sym_identifier] = ACTIONS(663),
    [anon_sym_CARET_EQ] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(658),
    [anon_sym_SLASH_EQ] = ACTIONS(658),
    [anon_sym_COLON_EQ] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(658),
    [anon_sym_PLUS_EQ] = ACTIONS(658),
    [anon_sym_STAR_EQ] = ACTIONS(658),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_COLON_EQ] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(665),
  },
  [167] = {
    [sym_pointer] = STATE(248),
    [sym_array] = STATE(249),
    [aux_sym_type_repeat1] = STATE(248),
    [aux_sym_type_repeat2] = STATE(249),
    [anon_sym_COLON_EQ] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [168] = {
    [sym_static_assignment] = STATE(250),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(667),
  },
  [169] = {
    [anon_sym_LT_EQ] = ACTIONS(669),
    [anon_sym_LT] = ACTIONS(671),
    [anon_sym_AMP_AMP] = ACTIONS(669),
    [anon_sym_GT_GT_EQ] = ACTIONS(669),
    [anon_sym_AMP_EQ] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_PLUS_PLUS] = ACTIONS(669),
    [anon_sym_DASH] = ACTIONS(671),
    [anon_sym_SLASH] = ACTIONS(671),
    [sym__access_op] = ACTIONS(669),
    [anon_sym_GT_GT] = ACTIONS(671),
    [anon_sym_SLASH_EQ] = ACTIONS(669),
    [anon_sym_GT_EQ] = ACTIONS(669),
    [anon_sym_CARET] = ACTIONS(671),
    [anon_sym_BANG_EQ] = ACTIONS(669),
    [anon_sym_PIPE_EQ] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_DASH_DASH] = ACTIONS(669),
    [anon_sym_AMP] = ACTIONS(671),
    [anon_sym_PERCENT] = ACTIONS(671),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(669),
    [anon_sym_LT_LT] = ACTIONS(671),
    [anon_sym_PERCENT_EQ] = ACTIONS(669),
    [anon_sym_DASH_EQ] = ACTIONS(669),
    [anon_sym_GT] = ACTIONS(671),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_EQ_EQ] = ACTIONS(669),
    [anon_sym_CARET_EQ] = ACTIONS(669),
    [anon_sym_LT_LT_EQ] = ACTIONS(669),
    [anon_sym_STAR] = ACTIONS(671),
    [anon_sym_DOT] = ACTIONS(669),
    [anon_sym_COMMA] = ACTIONS(669),
    [anon_sym_COLON_EQ] = ACTIONS(669),
    [anon_sym_PIPE] = ACTIONS(671),
    [anon_sym_PLUS_EQ] = ACTIONS(669),
    [anon_sym_PLUS] = ACTIONS(671),
    [anon_sym_STAR_EQ] = ACTIONS(669),
    [anon_sym_PIPE_PIPE] = ACTIONS(669),
    [anon_sym_RPAREN] = ACTIONS(669),
  },
  [170] = {
    [anon_sym_PLUS_DASH] = ACTIONS(285),
    [anon_sym_SLASH_STAR] = ACTIONS(285),
    [anon_sym_STAR_SLASH] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(287),
  },
  [171] = {
    [sym__block_comment_plus] = STATE(140),
    [aux_sym__block_comment_plus_repeat1] = STATE(140),
    [sym__block_comment_star] = STATE(140),
    [anon_sym_PLUS_DASH] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(109),
    [anon_sym_DASH_PLUS] = ACTIONS(673),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(291),
  },
  [172] = {
    [anon_sym_PLUS_DASH] = ACTIONS(361),
    [anon_sym_SLASH_STAR] = ACTIONS(361),
    [anon_sym_STAR_SLASH] = ACTIONS(361),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(363),
  },
  [173] = {
    [sym__block_comment_plus] = STATE(175),
    [aux_sym__block_comment_star_repeat1] = STATE(175),
    [sym__block_comment_star] = STATE(175),
    [anon_sym_PLUS_DASH] = ACTIONS(169),
    [anon_sym_SLASH_STAR] = ACTIONS(171),
    [anon_sym_STAR_SLASH] = ACTIONS(675),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(367),
  },
  [174] = {
    [anon_sym_DQUOTE] = ACTIONS(677),
    [anon_sym_u32] = ACTIONS(679),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_if] = ACTIONS(679),
    [anon_sym_switch] = ACTIONS(679),
    [anon_sym_PLUS_DASH] = ACTIONS(677),
    [anon_sym_readonly] = ACTIONS(679),
    [anon_sym_use] = ACTIONS(679),
    [anon_sym_u64] = ACTIONS(679),
    [anon_sym_while] = ACTIONS(679),
    [sym_oct] = ACTIONS(679),
    [anon_sym_case] = ACTIONS(679),
    [anon_sym_DASH_DASH] = ACTIONS(677),
    [anon_sym_section] = ACTIONS(679),
    [anon_sym_require] = ACTIONS(679),
    [anon_sym_SQUOTE] = ACTIONS(677),
    [anon_sym_i8] = ACTIONS(679),
    [sym_null] = ACTIONS(679),
    [sym_integer] = ACTIONS(679),
    [anon_sym_default] = ACTIONS(679),
    [anon_sym_f32] = ACTIONS(679),
    [anon_sym_STAR_STAR] = ACTIONS(677),
    [anon_sym_function] = ACTIONS(679),
    [anon_sym_module] = ACTIONS(679),
    [anon_sym_end] = ACTIONS(679),
    [anon_sym_i16] = ACTIONS(679),
    [sym_long] = ACTIONS(677),
    [anon_sym_goto] = ACTIONS(679),
    [sym_double] = ACTIONS(677),
    [anon_sym_f64] = ACTIONS(679),
    [anon_sym_PLUS_PLUS] = ACTIONS(677),
    [anon_sym_private] = ACTIONS(679),
    [anon_sym_return] = ACTIONS(679),
    [anon_sym_SLASH_SLASH] = ACTIONS(679),
    [anon_sym_method] = ACTIONS(679),
    [anon_sym_enum] = ACTIONS(679),
    [anon_sym_i32] = ACTIONS(679),
    [anon_sym_u8] = ACTIONS(679),
    [sym_float] = ACTIONS(677),
    [sym_is_declare] = ACTIONS(679),
    [sym_hex] = ACTIONS(677),
    [anon_sym_s8] = ACTIONS(679),
    [anon_sym_s32] = ACTIONS(679),
    [anon_sym_protected] = ACTIONS(679),
    [sym__space] = ACTIONS(3),
    [sym_is_interface] = ACTIONS(679),
    [sym_is_override] = ACTIONS(679),
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_i64] = ACTIONS(679),
    [sym_identifier] = ACTIONS(679),
    [anon_sym_u16] = ACTIONS(679),
    [sym_is_external] = ACTIONS(679),
    [sym_binary] = ACTIONS(677),
    [anon_sym_s16] = ACTIONS(679),
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_SLASH_STAR] = ACTIONS(677),
    [sym_is_overridable] = ACTIONS(679),
    [sym_is_primitive] = ACTIONS(679),
  },
  [175] = {
    [sym__block_comment_plus] = STATE(175),
    [aux_sym__block_comment_star_repeat1] = STATE(175),
    [sym__block_comment_star] = STATE(175),
    [anon_sym_PLUS_DASH] = ACTIONS(681),
    [anon_sym_SLASH_STAR] = ACTIONS(684),
    [anon_sym_STAR_SLASH] = ACTIONS(687),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(689),
  },
  [176] = {
    [sym_scope_expression] = STATE(253),
    [sym_identifier] = ACTIONS(692),
    [sym__space] = ACTIONS(3),
  },
  [177] = {
    [sym_type] = STATE(254),
    [sym__comma_list_types] = STATE(255),
    [sym__base_type] = STATE(256),
    [sym_primitive_type] = STATE(256),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(694),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(696),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [178] = {
    [sym_return_list] = STATE(225),
    [anon_sym_returns] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(606),
  },
  [179] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(606),
  },
  [180] = {
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(698),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_RPAREN] = ACTIONS(700),
    [anon_sym_RBRACE] = ACTIONS(700),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(700),
  },
  [182] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(209),
  },
  [183] = {
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(698),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(187),
  },
  [184] = {
    [sym_is_function] = STATE(223),
    [sym_is_method] = STATE(223),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(131),
    [sym_is_primitive] = ACTIONS(704),
    [sym__space] = ACTIONS(3),
  },
  [185] = {
    [sym_static_assignment] = STATE(260),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(706),
  },
  [186] = {
    [sym_identifier] = ACTIONS(708),
    [sym__space] = ACTIONS(3),
  },
  [187] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(182),
    [sym_string] = STATE(182),
    [sym_character] = STATE(182),
    [sym__collection_or_value] = STATE(262),
    [sym_array_expression] = STATE(34),
    [sym_collection] = STATE(262),
    [sym__number] = STATE(182),
    [sym_group_expression] = STATE(182),
    [sym__value] = STATE(182),
    [sym__literal] = STATE(182),
    [sym_scope_expression] = STATE(183),
    [sym_null] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(381),
    [sym_binary] = ACTIONS(383),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(383),
    [sym_double] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(385),
    [sym_hex] = ACTIONS(383),
    [sym_oct] = ACTIONS(381),
    [sym_float] = ACTIONS(383),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(706),
  },
  [189] = {
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(710),
    [anon_sym_GT_GT_EQ] = ACTIONS(710),
    [anon_sym_AMP_EQ] = ACTIONS(710),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(710),
    [anon_sym_DASH_EQ] = ACTIONS(710),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_PLUS_PLUS] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_CARET_EQ] = ACTIONS(710),
    [sym__access_op] = ACTIONS(718),
    [anon_sym_LT_LT_EQ] = ACTIONS(710),
    [anon_sym_SLASH_EQ] = ACTIONS(710),
    [anon_sym_COLON_EQ] = ACTIONS(710),
    [anon_sym_PIPE_EQ] = ACTIONS(710),
    [anon_sym_PLUS_EQ] = ACTIONS(710),
    [anon_sym_STAR_EQ] = ACTIONS(710),
  },
  [190] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(721),
  },
  [191] = {
    [anon_sym_LT_EQ] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_GT_GT_EQ] = ACTIONS(723),
    [anon_sym_AMP_EQ] = ACTIONS(723),
    [anon_sym_LBRACK] = ACTIONS(723),
    [anon_sym_PLUS_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(725),
    [anon_sym_SLASH] = ACTIONS(725),
    [sym__access_op] = ACTIONS(723),
    [anon_sym_GT_GT] = ACTIONS(725),
    [anon_sym_SLASH_EQ] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(723),
    [anon_sym_CARET] = ACTIONS(725),
    [anon_sym_BANG_EQ] = ACTIONS(723),
    [anon_sym_PIPE_EQ] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(723),
    [anon_sym_DASH_DASH] = ACTIONS(723),
    [anon_sym_AMP] = ACTIONS(725),
    [anon_sym_PERCENT] = ACTIONS(725),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_LT_LT] = ACTIONS(725),
    [anon_sym_PERCENT_EQ] = ACTIONS(723),
    [anon_sym_DASH_EQ] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(725),
    [anon_sym_LPAREN] = ACTIONS(723),
    [anon_sym_EQ_EQ] = ACTIONS(723),
    [anon_sym_CARET_EQ] = ACTIONS(723),
    [anon_sym_LT_LT_EQ] = ACTIONS(723),
    [anon_sym_STAR] = ACTIONS(725),
    [anon_sym_DOT] = ACTIONS(723),
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_COLON_EQ] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_PLUS_EQ] = ACTIONS(723),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_STAR_EQ] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(727),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(149),
  },
  [193] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(729),
  },
  [194] = {
    [sym_array] = STATE(112),
    [aux_sym__comma_list_values_repeat1] = STATE(268),
    [anon_sym_COMMA] = ACTIONS(731),
    [sym__access_op] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(735),
  },
  [195] = {
    [anon_sym_COMMA] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(727),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(187),
  },
  [196] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(737),
  },
  [197] = {
    [sym_identifier] = ACTIONS(723),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(723),
  },
  [198] = {
    [sym_pointer] = STATE(198),
    [aux_sym_type_repeat1] = STATE(198),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym_identifier] = ACTIONS(739),
    [anon_sym_STAR] = ACTIONS(741),
    [sym__space] = ACTIONS(3),
  },
  [199] = {
    [sym_array] = STATE(200),
    [aux_sym_type_repeat2] = STATE(200),
    [sym_identifier] = ACTIONS(744),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(219),
  },
  [200] = {
    [sym_array] = STATE(200),
    [aux_sym_type_repeat2] = STATE(200),
    [sym_identifier] = ACTIONS(746),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(748),
  },
  [201] = {
    [anon_sym_DASH_DASH] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(751),
    [anon_sym_AMP_EQ] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(658),
    [anon_sym_DASH_EQ] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_PLUS_PLUS] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_CARET_EQ] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(658),
    [anon_sym_SLASH_EQ] = ACTIONS(658),
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_COLON_EQ] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(658),
    [anon_sym_PLUS_EQ] = ACTIONS(658),
    [anon_sym_RBRACE] = ACTIONS(658),
    [anon_sym_STAR_EQ] = ACTIONS(658),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(754),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(754),
  },
  [203] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(203),
    [anon_sym_COMMA] = ACTIONS(756),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(754),
  },
  [204] = {
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(710),
    [anon_sym_GT_GT_EQ] = ACTIONS(710),
    [anon_sym_AMP_EQ] = ACTIONS(710),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(710),
    [anon_sym_DASH_EQ] = ACTIONS(710),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_PLUS_PLUS] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_CARET_EQ] = ACTIONS(710),
    [sym__access_op] = ACTIONS(759),
    [anon_sym_LT_LT_EQ] = ACTIONS(710),
    [anon_sym_SLASH_EQ] = ACTIONS(710),
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_PIPE_EQ] = ACTIONS(710),
    [anon_sym_COLON_EQ] = ACTIONS(710),
    [anon_sym_PLUS_EQ] = ACTIONS(710),
    [anon_sym_RBRACE] = ACTIONS(710),
    [anon_sym_STAR_EQ] = ACTIONS(710),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(762),
    [sym__space] = ACTIONS(3),
  },
  [206] = {
    [sym_array] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym__access_op] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_COMMA] = ACTIONS(187),
    [sym__access_op] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(187),
    [sym__scope_op] = ACTIONS(762),
    [sym__space] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_end] = ACTIONS(616),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [anon_sym_section] = ACTIONS(616),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_if] = ACTIONS(616),
    [anon_sym_goto] = ACTIONS(616),
    [anon_sym_switch] = ACTIONS(616),
    [sym_long] = ACTIONS(614),
    [anon_sym_LPAREN] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(614),
    [sym_identifier] = ACTIONS(616),
    [sym_double] = ACTIONS(614),
    [anon_sym_return] = ACTIONS(616),
    [sym_null] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(616),
    [anon_sym_default] = ACTIONS(616),
    [sym_binary] = ACTIONS(614),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_while] = ACTIONS(616),
    [sym_oct] = ACTIONS(616),
    [anon_sym_case] = ACTIONS(616),
    [sym_float] = ACTIONS(614),
    [sym_hex] = ACTIONS(614),
  },
  [209] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(272),
    [sym_string] = STATE(272),
    [sym_character] = STATE(272),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(272),
    [sym_group_expression] = STATE(272),
    [sym__value] = STATE(272),
    [sym__literal] = STATE(272),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(766),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(766),
    [sym_binary] = ACTIONS(768),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(768),
    [sym_double] = ACTIONS(768),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(768),
    [sym_oct] = ACTIONS(766),
    [sym_float] = ACTIONS(768),
  },
  [210] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(770),
  },
  [211] = {
    [sym_scope_expression] = STATE(274),
    [sym_identifier] = ACTIONS(772),
    [sym__space] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_DASH_DASH] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(774),
    [anon_sym_AMP_EQ] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(658),
    [anon_sym_DASH_EQ] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_PLUS_PLUS] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_CARET_EQ] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(658),
    [anon_sym_SLASH_EQ] = ACTIONS(658),
    [anon_sym_DOT] = ACTIONS(658),
    [anon_sym_COLON_EQ] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(658),
    [anon_sym_PLUS_EQ] = ACTIONS(658),
    [anon_sym_STAR_EQ] = ACTIONS(658),
  },
  [213] = {
    [sym_array] = STATE(112),
    [anon_sym_DASH_DASH] = ACTIONS(710),
    [anon_sym_GT_GT_EQ] = ACTIONS(710),
    [anon_sym_AMP_EQ] = ACTIONS(710),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(710),
    [anon_sym_DASH_EQ] = ACTIONS(710),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_PLUS_PLUS] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_CARET_EQ] = ACTIONS(710),
    [sym__access_op] = ACTIONS(777),
    [anon_sym_LT_LT_EQ] = ACTIONS(710),
    [anon_sym_SLASH_EQ] = ACTIONS(710),
    [anon_sym_DOT] = ACTIONS(710),
    [anon_sym_PIPE_EQ] = ACTIONS(710),
    [anon_sym_COLON_EQ] = ACTIONS(710),
    [anon_sym_PLUS_EQ] = ACTIONS(710),
    [anon_sym_STAR_EQ] = ACTIONS(710),
  },
  [214] = {
    [anon_sym_PLUS_DASH] = ACTIONS(577),
    [anon_sym_SLASH_STAR] = ACTIONS(577),
    [anon_sym_DASH_PLUS] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(579),
  },
  [215] = {
    [anon_sym_PLUS_DASH] = ACTIONS(677),
    [anon_sym_SLASH_STAR] = ACTIONS(677),
    [anon_sym_DASH_PLUS] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_plus_token1] = ACTIONS(679),
  },
  [216] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(780),
  },
  [217] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(276),
    [sym_string] = STATE(276),
    [sym_character] = STATE(276),
    [sym__collection_or_value] = STATE(262),
    [sym_array_expression] = STATE(34),
    [sym_collection] = STATE(262),
    [sym__number] = STATE(276),
    [sym_group_expression] = STATE(276),
    [sym__value] = STATE(276),
    [sym__literal] = STATE(276),
    [sym_scope_expression] = STATE(195),
    [sym_null] = ACTIONS(782),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(782),
    [sym_binary] = ACTIONS(784),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_long] = ACTIONS(784),
    [sym_double] = ACTIONS(784),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(413),
    [sym_hex] = ACTIONS(784),
    [sym_oct] = ACTIONS(782),
    [sym_float] = ACTIONS(784),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(786),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(786),
  },
  [219] = {
    [sym__enum_element] = STATE(277),
    [sym_identifier] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
  },
  [220] = {
    [sym_identifier] = ACTIONS(788),
    [sym__space] = ACTIONS(3),
  },
  [221] = {
    [aux_sym_enum_definition_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(790),
  },
  [222] = {
    [sym_parameter_list] = STATE(281),
    [sym_return_list] = STATE(282),
    [anon_sym_returns] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(792),
  },
  [223] = {
    [sym_identifier] = ACTIONS(794),
    [sym__space] = ACTIONS(3),
  },
  [224] = {
    [sym_return_list] = STATE(282),
    [anon_sym_returns] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(792),
  },
  [225] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(792),
  },
  [226] = {
    [sym_pointer] = STATE(284),
    [sym_array] = STATE(285),
    [aux_sym_type_repeat1] = STATE(284),
    [aux_sym_type_repeat2] = STATE(285),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
  },
  [227] = {
    [sym_array] = STATE(286),
    [aux_sym_type_repeat2] = STATE(286),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
  },
  [228] = {
    [anon_sym_LT_EQ] = ACTIONS(658),
    [anon_sym_RPAREN] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(658),
    [anon_sym_AMP_EQ] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_PLUS_PLUS] = ACTIONS(658),
    [anon_sym_DASH] = ACTIONS(663),
    [anon_sym_SLASH] = ACTIONS(663),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_GT_GT] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(658),
    [anon_sym_GT_EQ] = ACTIONS(658),
    [anon_sym_CARET] = ACTIONS(663),
    [anon_sym_BANG_EQ] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(658),
    [anon_sym_DASH_DASH] = ACTIONS(658),
    [anon_sym_AMP] = ACTIONS(663),
    [sym__scope_op] = ACTIONS(796),
    [anon_sym_PERCENT] = ACTIONS(663),
    [anon_sym_DOLLAR] = ACTIONS(658),
    [anon_sym_LT_LT] = ACTIONS(663),
    [anon_sym_PERCENT_EQ] = ACTIONS(658),
    [anon_sym_DASH_EQ] = ACTIONS(658),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_EQ_EQ] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(658),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_PIPE] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_COLON_EQ] = ACTIONS(658),
    [anon_sym_PLUS_EQ] = ACTIONS(658),
    [anon_sym_PIPE_PIPE] = ACTIONS(658),
    [anon_sym_STAR_EQ] = ACTIONS(658),
    [anon_sym_LT] = ACTIONS(663),
    [anon_sym_AMP_AMP] = ACTIONS(658),
  },
  [229] = {
    [sym_array] = STATE(112),
    [anon_sym_LT_EQ] = ACTIONS(710),
    [anon_sym_RPAREN] = ACTIONS(710),
    [anon_sym_GT_GT_EQ] = ACTIONS(710),
    [anon_sym_AMP_EQ] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_PLUS_PLUS] = ACTIONS(710),
    [anon_sym_DASH] = ACTIONS(799),
    [anon_sym_SLASH] = ACTIONS(799),
    [sym__access_op] = ACTIONS(801),
    [anon_sym_GT_GT] = ACTIONS(799),
    [anon_sym_SLASH_EQ] = ACTIONS(710),
    [anon_sym_GT_EQ] = ACTIONS(710),
    [anon_sym_CARET] = ACTIONS(799),
    [anon_sym_BANG_EQ] = ACTIONS(710),
    [anon_sym_PIPE_EQ] = ACTIONS(710),
    [anon_sym_DASH_DASH] = ACTIONS(710),
    [anon_sym_AMP] = ACTIONS(799),
    [anon_sym_PERCENT] = ACTIONS(799),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(710),
    [anon_sym_LT_LT] = ACTIONS(799),
    [anon_sym_PERCENT_EQ] = ACTIONS(710),
    [anon_sym_DASH_EQ] = ACTIONS(710),
    [anon_sym_GT] = ACTIONS(799),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_EQ_EQ] = ACTIONS(710),
    [anon_sym_CARET_EQ] = ACTIONS(710),
    [anon_sym_LT_LT_EQ] = ACTIONS(710),
    [anon_sym_STAR] = ACTIONS(799),
    [anon_sym_PIPE] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(799),
    [anon_sym_COLON_EQ] = ACTIONS(710),
    [anon_sym_PLUS_EQ] = ACTIONS(710),
    [anon_sym_PIPE_PIPE] = ACTIONS(710),
    [anon_sym_STAR_EQ] = ACTIONS(710),
    [anon_sym_LT] = ACTIONS(799),
    [anon_sym_AMP_AMP] = ACTIONS(710),
  },
  [230] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(804),
  },
  [231] = {
    [sym_scope_expression] = STATE(288),
    [sym_identifier] = ACTIONS(806),
    [sym__space] = ACTIONS(3),
  },
  [232] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(289),
    [sym_string] = STATE(289),
    [sym_character] = STATE(289),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(289),
    [sym_group_expression] = STATE(289),
    [sym__value] = STATE(289),
    [sym__literal] = STATE(289),
    [sym_scope_expression] = STATE(158),
    [sym_null] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(808),
    [sym_binary] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(810),
    [sym_double] = ACTIONS(810),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(333),
    [sym_hex] = ACTIONS(810),
    [sym_oct] = ACTIONS(808),
    [sym_float] = ACTIONS(810),
  },
  [233] = {
    [anon_sym_LT_EQ] = ACTIONS(812),
    [anon_sym_LT] = ACTIONS(814),
    [anon_sym_AMP_AMP] = ACTIONS(812),
    [anon_sym_GT_GT_EQ] = ACTIONS(812),
    [anon_sym_AMP_EQ] = ACTIONS(812),
    [anon_sym_LBRACK] = ACTIONS(812),
    [anon_sym_PLUS_PLUS] = ACTIONS(812),
    [anon_sym_DASH] = ACTIONS(814),
    [anon_sym_SLASH] = ACTIONS(814),
    [sym__access_op] = ACTIONS(812),
    [anon_sym_GT_GT] = ACTIONS(814),
    [anon_sym_SLASH_EQ] = ACTIONS(812),
    [anon_sym_GT_EQ] = ACTIONS(812),
    [anon_sym_CARET] = ACTIONS(814),
    [anon_sym_BANG_EQ] = ACTIONS(812),
    [anon_sym_PIPE_EQ] = ACTIONS(812),
    [anon_sym_RBRACE] = ACTIONS(812),
    [anon_sym_DASH_DASH] = ACTIONS(812),
    [anon_sym_AMP] = ACTIONS(814),
    [anon_sym_PERCENT] = ACTIONS(814),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(812),
    [anon_sym_LT_LT] = ACTIONS(814),
    [anon_sym_PERCENT_EQ] = ACTIONS(812),
    [anon_sym_DASH_EQ] = ACTIONS(812),
    [anon_sym_GT] = ACTIONS(814),
    [anon_sym_LPAREN] = ACTIONS(812),
    [anon_sym_EQ_EQ] = ACTIONS(812),
    [anon_sym_CARET_EQ] = ACTIONS(812),
    [anon_sym_LT_LT_EQ] = ACTIONS(812),
    [anon_sym_STAR] = ACTIONS(814),
    [anon_sym_DOT] = ACTIONS(812),
    [anon_sym_COMMA] = ACTIONS(812),
    [anon_sym_COLON_EQ] = ACTIONS(812),
    [anon_sym_PIPE] = ACTIONS(814),
    [anon_sym_PLUS_EQ] = ACTIONS(812),
    [anon_sym_PLUS] = ACTIONS(814),
    [anon_sym_STAR_EQ] = ACTIONS(812),
    [anon_sym_PIPE_PIPE] = ACTIONS(812),
    [anon_sym_RPAREN] = ACTIONS(812),
  },
  [234] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(209),
  },
  [235] = {
    [anon_sym_DQUOTE] = ACTIONS(231),
    [anon_sym_LPAREN] = ACTIONS(231),
    [sym__space] = ACTIONS(231),
    [sym_identifier] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(231),
  },
  [236] = {
    [sym__escape_sequence] = STATE(119),
    [aux_sym_string_repeat1] = STATE(119),
    [anon_sym_BSLASHt] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(816),
    [anon_sym_BSLASH0] = ACTIONS(235),
    [anon_sym_BSLASHr] = ACTIONS(235),
    [anon_sym_BSLASHb] = ACTIONS(235),
    [anon_sym_BSLASHv] = ACTIONS(235),
    [aux_sym_string_token1] = ACTIONS(239),
    [anon_sym_BSLASHa] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHf] = ACTIONS(235),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(235),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(235),
    [anon_sym_BSLASHn] = ACTIONS(235),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(235),
  },
  [237] = {
    [anon_sym_s32] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(99),
    [anon_sym_i64] = ACTIONS(99),
    [anon_sym_i8] = ACTIONS(99),
    [anon_sym_u16] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_readonly] = ACTIONS(99),
    [anon_sym_s16] = ACTIONS(99),
    [anon_sym_f32] = ACTIONS(99),
    [anon_sym_i32] = ACTIONS(99),
    [anon_sym_u64] = ACTIONS(99),
    [anon_sym_u8] = ACTIONS(99),
    [anon_sym_s8] = ACTIONS(99),
  },
  [238] = {
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_COLON] = ACTIONS(820),
    [sym_identifier] = ACTIONS(818),
    [anon_sym_STAR] = ACTIONS(818),
    [sym__space] = ACTIONS(3),
  },
  [239] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(822),
    [anon_sym_DOT] = ACTIONS(822),
  },
  [240] = {
    [sym_identifier] = ACTIONS(824),
    [sym__space] = ACTIONS(3),
  },
  [241] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(826),
  },
  [242] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(828),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(830),
  },
  [243] = {
    [sym_type] = STATE(296),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [sym_readability] = STATE(297),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [244] = {
    [sym_type] = STATE(296),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [245] = {
    [anon_sym_DQUOTE] = ACTIONS(832),
    [anon_sym_LPAREN] = ACTIONS(832),
    [sym__space] = ACTIONS(832),
    [sym_identifier] = ACTIONS(832),
    [anon_sym_DOT] = ACTIONS(832),
  },
  [246] = {
    [aux_sym_extension_repeat1] = STATE(246),
    [sym_string] = STATE(246),
    [anon_sym_DQUOTE] = ACTIONS(834),
    [anon_sym_LPAREN] = ACTIONS(832),
    [sym__space] = ACTIONS(837),
    [sym_identifier] = ACTIONS(840),
    [anon_sym_DOT] = ACTIONS(832),
  },
  [247] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(843),
  },
  [248] = {
    [sym_pointer] = STATE(298),
    [sym_array] = STATE(299),
    [aux_sym_type_repeat1] = STATE(298),
    [aux_sym_type_repeat2] = STATE(299),
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(525),
  },
  [249] = {
    [sym_array] = STATE(300),
    [aux_sym_type_repeat2] = STATE(300),
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(525),
  },
  [250] = {
    [anon_sym_COMMA] = ACTIONS(845),
    [anon_sym_RPAREN] = ACTIONS(845),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(845),
  },
  [251] = {
    [anon_sym_PLUS_DASH] = ACTIONS(577),
    [anon_sym_SLASH_STAR] = ACTIONS(577),
    [anon_sym_STAR_SLASH] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(579),
  },
  [252] = {
    [anon_sym_PLUS_DASH] = ACTIONS(677),
    [anon_sym_SLASH_STAR] = ACTIONS(677),
    [anon_sym_STAR_SLASH] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [aux_sym__block_comment_star_token1] = ACTIONS(679),
  },
  [253] = {
    [sym__scope_op] = ACTIONS(847),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(658),
  },
  [254] = {
    [aux_sym__comma_list_types_repeat1] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(850),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(852),
  },
  [255] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(854),
  },
  [256] = {
    [sym_pointer] = STATE(303),
    [sym_array] = STATE(304),
    [aux_sym_type_repeat1] = STATE(303),
    [aux_sym_type_repeat2] = STATE(304),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
  },
  [257] = {
    [sym_scope_expression] = STATE(305),
    [sym_identifier] = ACTIONS(856),
    [sym__space] = ACTIONS(3),
  },
  [258] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(306),
    [sym_string] = STATE(306),
    [sym_character] = STATE(306),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(306),
    [sym_group_expression] = STATE(306),
    [sym__value] = STATE(306),
    [sym__literal] = STATE(306),
    [sym_scope_expression] = STATE(183),
    [sym_null] = ACTIONS(858),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(858),
    [sym_binary] = ACTIONS(860),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(860),
    [sym_double] = ACTIONS(860),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(385),
    [sym_hex] = ACTIONS(860),
    [sym_oct] = ACTIONS(858),
    [sym_float] = ACTIONS(860),
  },
  [259] = {
    [sym_is_function] = STATE(307),
    [sym_is_method] = STATE(307),
    [anon_sym_function] = ACTIONS(131),
    [anon_sym_method] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(862),
  },
  [261] = {
    [sym_static_assignment] = STATE(308),
    [sym__space] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(862),
  },
  [262] = {
    [anon_sym_COMMA] = ACTIONS(864),
    [anon_sym_RPAREN] = ACTIONS(864),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(864),
  },
  [263] = {
    [anon_sym_LT_EQ] = ACTIONS(866),
    [anon_sym_LT] = ACTIONS(868),
    [anon_sym_AMP_AMP] = ACTIONS(866),
    [anon_sym_GT_GT_EQ] = ACTIONS(866),
    [anon_sym_AMP_EQ] = ACTIONS(866),
    [anon_sym_LBRACK] = ACTIONS(866),
    [anon_sym_PLUS_PLUS] = ACTIONS(866),
    [anon_sym_DASH] = ACTIONS(868),
    [anon_sym_SLASH] = ACTIONS(868),
    [sym__access_op] = ACTIONS(866),
    [anon_sym_GT_GT] = ACTIONS(868),
    [anon_sym_SLASH_EQ] = ACTIONS(866),
    [anon_sym_GT_EQ] = ACTIONS(866),
    [anon_sym_CARET] = ACTIONS(868),
    [anon_sym_BANG_EQ] = ACTIONS(866),
    [anon_sym_PIPE_EQ] = ACTIONS(866),
    [anon_sym_RBRACE] = ACTIONS(866),
    [anon_sym_DASH_DASH] = ACTIONS(866),
    [anon_sym_AMP] = ACTIONS(868),
    [anon_sym_PERCENT] = ACTIONS(868),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(866),
    [anon_sym_LT_LT] = ACTIONS(868),
    [anon_sym_PERCENT_EQ] = ACTIONS(866),
    [anon_sym_DASH_EQ] = ACTIONS(866),
    [anon_sym_GT] = ACTIONS(868),
    [anon_sym_LPAREN] = ACTIONS(866),
    [anon_sym_EQ_EQ] = ACTIONS(866),
    [anon_sym_CARET_EQ] = ACTIONS(866),
    [anon_sym_LT_LT_EQ] = ACTIONS(866),
    [anon_sym_STAR] = ACTIONS(868),
    [anon_sym_DOT] = ACTIONS(866),
    [anon_sym_COMMA] = ACTIONS(866),
    [anon_sym_COLON_EQ] = ACTIONS(866),
    [anon_sym_PIPE] = ACTIONS(868),
    [anon_sym_PLUS_EQ] = ACTIONS(866),
    [anon_sym_PLUS] = ACTIONS(868),
    [anon_sym_STAR_EQ] = ACTIONS(866),
    [anon_sym_PIPE_PIPE] = ACTIONS(866),
    [anon_sym_RPAREN] = ACTIONS(866),
  },
  [264] = {
    [sym_scope_expression] = STATE(309),
    [sym_identifier] = ACTIONS(870),
    [sym__space] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_LT_EQ] = ACTIONS(872),
    [anon_sym_LT] = ACTIONS(874),
    [anon_sym_AMP_AMP] = ACTIONS(872),
    [anon_sym_GT_GT_EQ] = ACTIONS(872),
    [anon_sym_AMP_EQ] = ACTIONS(872),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_PLUS_PLUS] = ACTIONS(872),
    [anon_sym_DASH] = ACTIONS(874),
    [anon_sym_SLASH] = ACTIONS(874),
    [sym__access_op] = ACTIONS(872),
    [anon_sym_GT_GT] = ACTIONS(874),
    [anon_sym_SLASH_EQ] = ACTIONS(872),
    [anon_sym_GT_EQ] = ACTIONS(872),
    [anon_sym_CARET] = ACTIONS(874),
    [anon_sym_BANG_EQ] = ACTIONS(872),
    [anon_sym_PIPE_EQ] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(872),
    [anon_sym_DASH_DASH] = ACTIONS(872),
    [anon_sym_AMP] = ACTIONS(874),
    [anon_sym_PERCENT] = ACTIONS(874),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(872),
    [anon_sym_LT_LT] = ACTIONS(874),
    [anon_sym_PERCENT_EQ] = ACTIONS(872),
    [anon_sym_DASH_EQ] = ACTIONS(872),
    [anon_sym_GT] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_EQ_EQ] = ACTIONS(872),
    [anon_sym_CARET_EQ] = ACTIONS(872),
    [anon_sym_LT_LT_EQ] = ACTIONS(872),
    [anon_sym_STAR] = ACTIONS(874),
    [anon_sym_DOT] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(872),
    [anon_sym_COLON_EQ] = ACTIONS(872),
    [anon_sym_PIPE] = ACTIONS(874),
    [anon_sym_PLUS_EQ] = ACTIONS(872),
    [anon_sym_PLUS] = ACTIONS(874),
    [anon_sym_STAR_EQ] = ACTIONS(872),
    [anon_sym_PIPE_PIPE] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(872),
  },
  [266] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(310),
    [sym_string] = STATE(310),
    [sym_character] = STATE(310),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(310),
    [sym_group_expression] = STATE(310),
    [sym__value] = STATE(310),
    [sym__literal] = STATE(310),
    [sym_scope_expression] = STATE(195),
    [sym_null] = ACTIONS(876),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(876),
    [sym_binary] = ACTIONS(878),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(878),
    [sym_double] = ACTIONS(878),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(413),
    [sym_hex] = ACTIONS(878),
    [sym_oct] = ACTIONS(876),
    [sym_float] = ACTIONS(878),
  },
  [267] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(311),
    [sym_string] = STATE(311),
    [sym_character] = STATE(311),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(311),
    [sym_group_expression] = STATE(311),
    [sym__value] = STATE(311),
    [sym__literal] = STATE(311),
    [sym_scope_expression] = STATE(195),
    [sym_null] = ACTIONS(880),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(880),
    [sym_binary] = ACTIONS(882),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(882),
    [sym_double] = ACTIONS(882),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(413),
    [sym_hex] = ACTIONS(882),
    [sym_oct] = ACTIONS(880),
    [sym_float] = ACTIONS(882),
  },
  [268] = {
    [aux_sym__comma_list_values_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(731),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(884),
  },
  [269] = {
    [sym_identifier] = ACTIONS(866),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(866),
  },
  [270] = {
    [sym_scope_expression] = STATE(313),
    [sym_identifier] = ACTIONS(886),
    [sym__space] = ACTIONS(3),
  },
  [271] = {
    [sym_call_expression] = STATE(34),
    [sym_access_expression] = STATE(34),
    [sym_binding_expression] = STATE(314),
    [sym_string] = STATE(314),
    [sym_character] = STATE(314),
    [sym_array_expression] = STATE(34),
    [sym__number] = STATE(314),
    [sym_group_expression] = STATE(314),
    [sym__value] = STATE(314),
    [sym__literal] = STATE(314),
    [sym_scope_expression] = STATE(207),
    [sym_null] = ACTIONS(888),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym_integer] = ACTIONS(888),
    [sym_binary] = ACTIONS(890),
    [sym__space] = ACTIONS(3),
    [sym_long] = ACTIONS(890),
    [sym_double] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(553),
    [sym_hex] = ACTIONS(890),
    [sym_oct] = ACTIONS(888),
    [sym_float] = ACTIONS(890),
  },
  [272] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(892),
  },
  [273] = {
    [anon_sym_end] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(812),
    [anon_sym_section] = ACTIONS(814),
    [anon_sym_LBRACE] = ACTIONS(812),
    [anon_sym_if] = ACTIONS(814),
    [anon_sym_goto] = ACTIONS(814),
    [anon_sym_switch] = ACTIONS(814),
    [sym_long] = ACTIONS(812),
    [anon_sym_LPAREN] = ACTIONS(814),
    [anon_sym_SQUOTE] = ACTIONS(812),
    [sym_identifier] = ACTIONS(814),
    [sym_double] = ACTIONS(812),
    [anon_sym_return] = ACTIONS(814),
    [sym_null] = ACTIONS(814),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(814),
    [anon_sym_default] = ACTIONS(814),
    [sym_binary] = ACTIONS(812),
    [anon_sym_DOT] = ACTIONS(812),
    [anon_sym_while] = ACTIONS(814),
    [sym_oct] = ACTIONS(814),
    [anon_sym_case] = ACTIONS(814),
    [sym_float] = ACTIONS(812),
    [sym_hex] = ACTIONS(812),
  },
  [274] = {
    [anon_sym_DASH_DASH] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(894),
    [anon_sym_AMP_EQ] = ACTIONS(658),
    [anon_sym_GT_GT_EQ] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(658),
    [anon_sym_DASH_EQ] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_PLUS_PLUS] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_CARET_EQ] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LT_LT_EQ] = ACTIONS(658),
    [anon_sym_SLASH_EQ] = ACTIONS(658),
    [anon_sym_COLON_EQ] = ACTIONS(658),
    [anon_sym_PIPE_EQ] = ACTIONS(658),
    [anon_sym_PLUS_EQ] = ACTIONS(658),
    [anon_sym_STAR_EQ] = ACTIONS(658),
  },
  [275] = {
    [sym_array] = STATE(317),
    [anon_sym_s32] = ACTIONS(897),
    [anon_sym_i16] = ACTIONS(897),
    [anon_sym_u32] = ACTIONS(897),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(897),
    [anon_sym_LBRACK] = ACTIONS(899),
    [anon_sym_i64] = ACTIONS(897),
    [anon_sym_i8] = ACTIONS(897),
    [anon_sym_u16] = ACTIONS(897),
    [sym_identifier] = ACTIONS(897),
    [anon_sym_s16] = ACTIONS(897),
    [anon_sym_f32] = ACTIONS(897),
    [anon_sym_i32] = ACTIONS(897),
    [anon_sym_u64] = ACTIONS(897),
    [anon_sym_u8] = ACTIONS(897),
    [anon_sym_s8] = ACTIONS(897),
  },
  [276] = {
    [sym_array] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym__access_op] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(209),
  },
  [277] = {
    [anon_sym_COMMA] = ACTIONS(901),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(901),
  },
  [278] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(903),
  },
  [279] = {
    [sym_identifier] = ACTIONS(905),
    [sym__space] = ACTIONS(3),
  },
  [280] = {
    [aux_sym_enum_definition_repeat1] = STATE(280),
    [anon_sym_COMMA] = ACTIONS(907),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(901),
  },
  [281] = {
    [sym_return_list] = STATE(319),
    [anon_sym_returns] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
  },
  [282] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
  },
  [283] = {
    [sym_parameter_list] = STATE(320),
    [sym_return_list] = STATE(319),
    [anon_sym_returns] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
  },
  [284] = {
    [sym_pointer] = STATE(284),
    [aux_sym_type_repeat1] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(741),
  },
  [285] = {
    [sym_array] = STATE(286),
    [aux_sym_type_repeat2] = STATE(286),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(211),
  },
  [286] = {
    [sym_array] = STATE(286),
    [aux_sym_type_repeat2] = STATE(286),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(912),
  },
  [287] = {
    [anon_sym_LT_EQ] = ACTIONS(915),
    [anon_sym_LT] = ACTIONS(917),
    [anon_sym_AMP_AMP] = ACTIONS(915),
    [anon_sym_GT_GT_EQ] = ACTIONS(915),
    [anon_sym_AMP_EQ] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_PLUS_PLUS] = ACTIONS(915),
    [anon_sym_DASH] = ACTIONS(917),
    [anon_sym_SLASH] = ACTIONS(917),
    [sym__access_op] = ACTIONS(915),
    [anon_sym_GT_GT] = ACTIONS(917),
    [anon_sym_SLASH_EQ] = ACTIONS(915),
    [anon_sym_GT_EQ] = ACTIONS(915),
    [anon_sym_CARET] = ACTIONS(917),
    [anon_sym_BANG_EQ] = ACTIONS(915),
    [anon_sym_PIPE_EQ] = ACTIONS(915),
    [anon_sym_RBRACE] = ACTIONS(915),
    [anon_sym_DASH_DASH] = ACTIONS(915),
    [anon_sym_AMP] = ACTIONS(917),
    [anon_sym_PERCENT] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(915),
    [anon_sym_LT_LT] = ACTIONS(917),
    [anon_sym_PERCENT_EQ] = ACTIONS(915),
    [anon_sym_DASH_EQ] = ACTIONS(915),
    [anon_sym_GT] = ACTIONS(917),
    [anon_sym_LPAREN] = ACTIONS(915),
    [anon_sym_EQ_EQ] = ACTIONS(915),
    [anon_sym_CARET_EQ] = ACTIONS(915),
    [anon_sym_LT_LT_EQ] = ACTIONS(915),
    [anon_sym_STAR] = ACTIONS(917),
    [anon_sym_DOT] = ACTIONS(915),
    [anon_sym_COMMA] = ACTIONS(915),
    [anon_sym_COLON_EQ] = ACTIONS(915),
    [anon_sym_PIPE] = ACTIONS(917),
    [anon_sym_PLUS_EQ] = ACTIONS(915),
    [anon_sym_PLUS] = ACTIONS(917),
    [anon_sym_STAR_EQ] = ACTIONS(915),
    [anon_sym_PIPE_PIPE] = ACTIONS(915),
    [anon_sym_RPAREN] = ACTIONS(915),
  },
  [288] = {
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(919),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(658),
  },
  [289] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(922),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(710),
  },
  [290] = {
    [anon_sym_DQUOTE] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(527),
    [sym__space] = ACTIONS(527),
    [sym_identifier] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
  },
  [291] = {
    [sym_type] = STATE(166),
    [sym__base_type] = STATE(321),
    [sym_primitive_type] = STATE(321),
    [sym_container_types] = STATE(322),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(347),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(925),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_arguments] = ACTIONS(347),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_symbol] = ACTIONS(347),
    [anon_sym_s8] = ACTIONS(7),
  },
  [292] = {
    [sym_static_assignment] = STATE(188),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_COLON_EQ] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(393),
  },
  [293] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(927),
    [anon_sym_DOT] = ACTIONS(927),
  },
  [294] = {
    [sym_type] = STATE(240),
    [sym_access_control] = STATE(243),
    [sym_variable_definition] = STATE(323),
    [sym_container_definition] = STATE(323),
    [sym__base_type] = STATE(44),
    [sym_readability] = STATE(244),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(648),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(17),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [295] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(324),
    [anon_sym_COMMA] = ACTIONS(828),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(929),
  },
  [296] = {
    [sym_identifier] = ACTIONS(931),
    [sym__space] = ACTIONS(3),
  },
  [297] = {
    [sym_type] = STATE(326),
    [sym__base_type] = STATE(44),
    [sym_primitive_type] = STATE(44),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [298] = {
    [sym_pointer] = STATE(298),
    [aux_sym_type_repeat1] = STATE(298),
    [anon_sym_COLON_EQ] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(739),
  },
  [299] = {
    [sym_array] = STATE(300),
    [aux_sym_type_repeat2] = STATE(300),
    [anon_sym_COLON_EQ] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(744),
  },
  [300] = {
    [sym_array] = STATE(300),
    [aux_sym_type_repeat2] = STATE(300),
    [anon_sym_COLON_EQ] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(746),
  },
  [301] = {
    [sym_type] = STATE(327),
    [sym__base_type] = STATE(256),
    [sym_primitive_type] = STATE(256),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [sym_identifier] = ACTIONS(694),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
  },
  [302] = {
    [aux_sym__comma_list_types_repeat1] = STATE(328),
    [anon_sym_COMMA] = ACTIONS(850),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(933),
  },
  [303] = {
    [sym_pointer] = STATE(329),
    [sym_array] = STATE(330),
    [aux_sym_type_repeat1] = STATE(329),
    [aux_sym_type_repeat2] = STATE(330),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(525),
  },
  [304] = {
    [sym_array] = STATE(331),
    [aux_sym_type_repeat2] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(525),
  },
  [305] = {
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(935),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(658),
  },
  [306] = {
    [sym_array] = STATE(112),
    [sym__access_op] = ACTIONS(938),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_LPAREN] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(710),
  },
  [307] = {
    [sym_identifier] = ACTIONS(941),
    [sym__space] = ACTIONS(3),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(943),
    [anon_sym_RPAREN] = ACTIONS(943),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(943),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(945),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(658),
  },
  [310] = {
    [sym_array] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(948),
    [sym__access_op] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_LPAREN] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(948),
  },
  [311] = {
    [sym_array] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(710),
    [sym__access_op] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(715),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(710),
  },
  [312] = {
    [aux_sym__comma_list_values_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(953),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(948),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(658),
    [sym__access_op] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [sym__scope_op] = ACTIONS(956),
    [anon_sym_RBRACE] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
  },
  [314] = {
    [sym_array] = STATE(112),
    [anon_sym_COMMA] = ACTIONS(710),
    [sym__access_op] = ACTIONS(959),
    [anon_sym_LPAREN] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(710),
    [sym__space] = ACTIONS(3),
  },
  [315] = {
    [anon_sym_end] = ACTIONS(917),
    [anon_sym_DQUOTE] = ACTIONS(915),
    [anon_sym_section] = ACTIONS(917),
    [anon_sym_LBRACE] = ACTIONS(915),
    [anon_sym_if] = ACTIONS(917),
    [anon_sym_goto] = ACTIONS(917),
    [anon_sym_switch] = ACTIONS(917),
    [sym_long] = ACTIONS(915),
    [anon_sym_LPAREN] = ACTIONS(917),
    [anon_sym_SQUOTE] = ACTIONS(915),
    [sym_identifier] = ACTIONS(917),
    [sym_double] = ACTIONS(915),
    [anon_sym_return] = ACTIONS(917),
    [sym_null] = ACTIONS(917),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(917),
    [anon_sym_default] = ACTIONS(917),
    [sym_binary] = ACTIONS(915),
    [anon_sym_DOT] = ACTIONS(915),
    [anon_sym_while] = ACTIONS(917),
    [sym_oct] = ACTIONS(917),
    [anon_sym_case] = ACTIONS(917),
    [sym_float] = ACTIONS(915),
    [sym_hex] = ACTIONS(915),
  },
  [316] = {
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(962),
    [anon_sym_RBRACK] = ACTIONS(964),
  },
  [317] = {
    [anon_sym_s32] = ACTIONS(966),
    [anon_sym_i16] = ACTIONS(966),
    [anon_sym_u32] = ACTIONS(966),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(966),
    [anon_sym_i64] = ACTIONS(966),
    [anon_sym_i8] = ACTIONS(966),
    [anon_sym_u16] = ACTIONS(966),
    [sym_identifier] = ACTIONS(966),
    [anon_sym_s16] = ACTIONS(966),
    [anon_sym_f32] = ACTIONS(966),
    [anon_sym_i32] = ACTIONS(966),
    [anon_sym_u64] = ACTIONS(966),
    [anon_sym_u8] = ACTIONS(966),
    [anon_sym_s8] = ACTIONS(966),
  },
  [318] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(968),
  },
  [319] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(970),
  },
  [320] = {
    [sym_return_list] = STATE(335),
    [anon_sym_returns] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(970),
  },
  [321] = {
    [sym_pointer] = STATE(336),
    [sym_array] = STATE(337),
    [aux_sym_type_repeat1] = STATE(336),
    [aux_sym_type_repeat2] = STATE(337),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COLON_EQ] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(221),
  },
  [322] = {
    [sym_static_assignment] = STATE(250),
    [anon_sym_COMMA] = ACTIONS(667),
    [anon_sym_COLON_EQ] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(667),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(972),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(972),
  },
  [324] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(324),
    [anon_sym_COMMA] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(972),
  },
  [325] = {
    [sym_static_assignment] = STATE(260),
    [anon_sym_COMMA] = ACTIONS(706),
    [anon_sym_COLON_EQ] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(706),
  },
  [326] = {
    [sym_identifier] = ACTIONS(977),
    [sym__space] = ACTIONS(3),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(979),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(979),
  },
  [328] = {
    [aux_sym__comma_list_types_repeat1] = STATE(328),
    [anon_sym_COMMA] = ACTIONS(981),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(979),
  },
  [329] = {
    [sym_pointer] = STATE(329),
    [aux_sym_type_repeat1] = STATE(329),
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(739),
  },
  [330] = {
    [sym_array] = STATE(331),
    [aux_sym_type_repeat2] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(744),
  },
  [331] = {
    [sym_array] = STATE(331),
    [aux_sym_type_repeat2] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(746),
  },
  [332] = {
    [sym_parameter_list] = STATE(339),
    [sym_return_list] = STATE(335),
    [anon_sym_returns] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(970),
  },
  [333] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(984),
  },
  [334] = {
    [anon_sym_s32] = ACTIONS(725),
    [anon_sym_i16] = ACTIONS(725),
    [anon_sym_u32] = ACTIONS(725),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(725),
    [anon_sym_i64] = ACTIONS(725),
    [anon_sym_i8] = ACTIONS(725),
    [anon_sym_u16] = ACTIONS(725),
    [sym_identifier] = ACTIONS(725),
    [anon_sym_s16] = ACTIONS(725),
    [anon_sym_f32] = ACTIONS(725),
    [anon_sym_i32] = ACTIONS(725),
    [anon_sym_u64] = ACTIONS(725),
    [anon_sym_u8] = ACTIONS(725),
    [anon_sym_s8] = ACTIONS(725),
  },
  [335] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(986),
  },
  [336] = {
    [sym_pointer] = STATE(341),
    [sym_array] = STATE(342),
    [aux_sym_type_repeat1] = STATE(341),
    [aux_sym_type_repeat2] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(525),
  },
  [337] = {
    [sym_array] = STATE(343),
    [aux_sym_type_repeat2] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(525),
  },
  [338] = {
    [sym_static_assignment] = STATE(308),
    [anon_sym_COMMA] = ACTIONS(862),
    [anon_sym_COLON_EQ] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(862),
  },
  [339] = {
    [sym_return_list] = STATE(344),
    [anon_sym_returns] = ACTIONS(373),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(986),
  },
  [340] = {
    [anon_sym_s32] = ACTIONS(868),
    [anon_sym_i16] = ACTIONS(868),
    [anon_sym_u32] = ACTIONS(868),
    [sym__space] = ACTIONS(3),
    [anon_sym_f64] = ACTIONS(868),
    [anon_sym_i64] = ACTIONS(868),
    [anon_sym_i8] = ACTIONS(868),
    [anon_sym_u16] = ACTIONS(868),
    [sym_identifier] = ACTIONS(868),
    [anon_sym_s16] = ACTIONS(868),
    [anon_sym_f32] = ACTIONS(868),
    [anon_sym_i32] = ACTIONS(868),
    [anon_sym_u64] = ACTIONS(868),
    [anon_sym_u8] = ACTIONS(868),
    [anon_sym_s8] = ACTIONS(868),
  },
  [341] = {
    [sym_pointer] = STATE(341),
    [aux_sym_type_repeat1] = STATE(341),
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_COLON_EQ] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(739),
  },
  [342] = {
    [sym_array] = STATE(343),
    [aux_sym_type_repeat2] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(744),
    [anon_sym_COLON_EQ] = ACTIONS(744),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(744),
  },
  [343] = {
    [sym_array] = STATE(343),
    [aux_sym_type_repeat2] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(746),
    [anon_sym_COLON_EQ] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(746),
  },
  [344] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(988),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(12),
  [17] = {.count = 1, .reusable = false}, SHIFT(14),
  [19] = {.count = 1, .reusable = false}, SHIFT(15),
  [21] = {.count = 1, .reusable = false}, SHIFT(17),
  [23] = {.count = 1, .reusable = false}, SHIFT(42),
  [25] = {.count = 1, .reusable = false}, SHIFT(19),
  [27] = {.count = 1, .reusable = true}, SHIFT(9),
  [29] = {.count = 1, .reusable = false}, SHIFT(20),
  [31] = {.count = 1, .reusable = true}, SHIFT(24),
  [33] = {.count = 1, .reusable = false}, SHIFT(25),
  [35] = {.count = 1, .reusable = false}, SHIFT(27),
  [37] = {.count = 1, .reusable = false}, SHIFT(29),
  [39] = {.count = 1, .reusable = false}, SHIFT(2),
  [41] = {.count = 1, .reusable = true}, SHIFT(42),
  [43] = {.count = 1, .reusable = false}, SHIFT(7),
  [45] = {.count = 1, .reusable = false}, SHIFT(10),
  [47] = {.count = 1, .reusable = false}, SHIFT(11),
  [49] = {.count = 1, .reusable = false}, SHIFT(9),
  [51] = {.count = 1, .reusable = false}, SHIFT(13),
  [53] = {.count = 1, .reusable = false}, SHIFT(16),
  [55] = {.count = 1, .reusable = false}, SHIFT(18),
  [57] = {.count = 1, .reusable = false}, SHIFT(21),
  [59] = {.count = 1, .reusable = false}, SHIFT(32),
  [61] = {.count = 1, .reusable = false}, SHIFT(22),
  [63] = {.count = 1, .reusable = false}, SHIFT(23),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [67] = {.count = 1, .reusable = true}, SHIFT(26),
  [69] = {.count = 1, .reusable = false}, SHIFT(28),
  [71] = {.count = 1, .reusable = false}, SHIFT(47),
  [73] = {.count = 1, .reusable = false}, SHIFT(48),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(50),
  [79] = {.count = 1, .reusable = true}, SHIFT(49),
  [81] = {.count = 1, .reusable = false}, SHIFT(50),
  [83] = {.count = 1, .reusable = false}, SHIFT(53),
  [85] = {.count = 1, .reusable = true}, SHIFT(53),
  [87] = {.count = 1, .reusable = false}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(57),
  [91] = {.count = 1, .reusable = true}, SHIFT(59),
  [93] = {.count = 1, .reusable = true}, SHIFT(22),
  [95] = {.count = 1, .reusable = false}, SHIFT(61),
  [97] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [101] = {.count = 1, .reusable = false}, SHIFT(64),
  [103] = {.count = 1, .reusable = true}, SHIFT(64),
  [105] = {.count = 1, .reusable = false}, SHIFT(62),
  [107] = {.count = 1, .reusable = true}, SHIFT(67),
  [109] = {.count = 1, .reusable = true}, SHIFT(68),
  [111] = {.count = 1, .reusable = true}, SHIFT(69),
  [113] = {.count = 1, .reusable = false}, SHIFT(70),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(71),
  [119] = {.count = 1, .reusable = true}, SHIFT(72),
  [121] = {.count = 1, .reusable = true}, SHIFT(73),
  [123] = {.count = 1, .reusable = false}, SHIFT(44),
  [125] = {.count = 1, .reusable = true}, SHIFT(77),
  [127] = {.count = 1, .reusable = true}, SHIFT(79),
  [129] = {.count = 1, .reusable = true}, SHIFT(13),
  [131] = {.count = 1, .reusable = true}, SHIFT(27),
  [133] = {.count = 1, .reusable = true}, SHIFT(78),
  [135] = {.count = 1, .reusable = false}, SHIFT(81),
  [137] = {.count = 1, .reusable = false}, SHIFT(82),
  [139] = {.count = 1, .reusable = true}, SHIFT(86),
  [141] = {.count = 1, .reusable = true}, SHIFT(81),
  [143] = {.count = 1, .reusable = false}, SHIFT(83),
  [145] = {.count = 1, .reusable = true}, SHIFT(82),
  [147] = {.count = 1, .reusable = false}, SHIFT(86),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [151] = {.count = 1, .reusable = true}, SHIFT(91),
  [153] = {.count = 1, .reusable = false}, SHIFT(92),
  [155] = {.count = 2, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), REDUCE(sym__value, 1),
  [158] = {.count = 2, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), SHIFT(90),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(93),
  [165] = {.count = 1, .reusable = false}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [169] = {.count = 1, .reusable = true}, SHIFT(94),
  [171] = {.count = 1, .reusable = true}, SHIFT(95),
  [173] = {.count = 1, .reusable = true}, SHIFT(96),
  [175] = {.count = 1, .reusable = false}, SHIFT(97),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [179] = {.count = 1, .reusable = true}, SHIFT(98),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(99),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_binding_expression, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_binding_expression, 1),
  [191] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [193] = {.count = 1, .reusable = true}, SHIFT(100),
  [195] = {.count = 1, .reusable = false}, SHIFT(102),
  [197] = {.count = 1, .reusable = false}, SHIFT(79),
  [199] = {.count = 1, .reusable = false}, SHIFT(78),
  [201] = {.count = 1, .reusable = true}, SHIFT(105),
  [203] = {.count = 1, .reusable = true}, SHIFT(106),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(108),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(109),
  [213] = {.count = 1, .reusable = true}, SHIFT(110),
  [215] = {.count = 1, .reusable = true}, SHIFT(107),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(115),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [223] = {.count = 1, .reusable = true}, SHIFT(114),
  [225] = {.count = 1, .reusable = false}, SHIFT(90),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_end_extension, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(119),
  [237] = {.count = 1, .reusable = true}, SHIFT(118),
  [239] = {.count = 1, .reusable = false}, SHIFT(119),
  [241] = {.count = 1, .reusable = true}, SHIFT(120),
  [243] = {.count = 1, .reusable = true}, SHIFT(121),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [247] = {.count = 1, .reusable = true}, SHIFT(123),
  [249] = {.count = 1, .reusable = true}, SHIFT(124),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [253] = {.count = 1, .reusable = true}, SHIFT(127),
  [255] = {.count = 1, .reusable = false}, SHIFT(127),
  [257] = {.count = 1, .reusable = false}, SHIFT(129),
  [259] = {.count = 1, .reusable = false}, SHIFT(130),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__comment, 2),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym__comment, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(133),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [275] = {.count = 1, .reusable = true}, SHIFT(134),
  [277] = {.count = 1, .reusable = true}, SHIFT(135),
  [279] = {.count = 1, .reusable = false}, SHIFT(136),
  [281] = {.count = 1, .reusable = true}, SHIFT(137),
  [283] = {.count = 1, .reusable = false}, SHIFT(138),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(139),
  [291] = {.count = 1, .reusable = false}, SHIFT(140),
  [293] = {.count = 1, .reusable = true}, SHIFT(141),
  [295] = {.count = 1, .reusable = true}, SHIFT(142),
  [297] = {.count = 1, .reusable = true}, SHIFT(143),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [307] = {.count = 1, .reusable = true}, SHIFT(146),
  [309] = {.count = 1, .reusable = true}, SHIFT(147),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [315] = {.count = 1, .reusable = false}, SHIFT(149),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [319] = {.count = 1, .reusable = true}, SHIFT(150),
  [321] = {.count = 1, .reusable = true}, SHIFT(152),
  [323] = {.count = 1, .reusable = true}, SHIFT(153),
  [325] = {.count = 1, .reusable = false}, SHIFT(153),
  [327] = {.count = 1, .reusable = true}, SHIFT(154),
  [329] = {.count = 1, .reusable = false}, SHIFT(157),
  [331] = {.count = 1, .reusable = true}, SHIFT(157),
  [333] = {.count = 1, .reusable = false}, SHIFT(156),
  [335] = {.count = 1, .reusable = true}, SHIFT(160),
  [337] = {.count = 1, .reusable = true}, SHIFT(161),
  [339] = {.count = 1, .reusable = true}, SHIFT(163),
  [341] = {.count = 1, .reusable = true}, SHIFT(162),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 2, .dynamic_precedence = 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(165),
  [347] = {.count = 1, .reusable = false}, SHIFT(166),
  [349] = {.count = 1, .reusable = false}, SHIFT(167),
  [351] = {.count = 1, .reusable = true}, SHIFT(169),
  [353] = {.count = 1, .reusable = true}, SHIFT(170),
  [355] = {.count = 1, .reusable = false}, SHIFT(171),
  [357] = {.count = 1, .reusable = true}, SHIFT(172),
  [359] = {.count = 1, .reusable = false}, SHIFT(173),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 2),
  [365] = {.count = 1, .reusable = true}, SHIFT(174),
  [367] = {.count = 1, .reusable = false}, SHIFT(175),
  [369] = {.count = 1, .reusable = true}, SHIFT(176),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [373] = {.count = 1, .reusable = true}, SHIFT(177),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [381] = {.count = 1, .reusable = false}, SHIFT(182),
  [383] = {.count = 1, .reusable = true}, SHIFT(182),
  [385] = {.count = 1, .reusable = false}, SHIFT(180),
  [387] = {.count = 1, .reusable = true}, SHIFT(184),
  [389] = {.count = 1, .reusable = true}, SHIFT(185),
  [391] = {.count = 1, .reusable = true}, SHIFT(187),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [399] = {.count = 1, .reusable = false}, SHIFT(189),
  [401] = {.count = 1, .reusable = true}, SHIFT(189),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [405] = {.count = 1, .reusable = true}, SHIFT(190),
  [407] = {.count = 1, .reusable = true}, SHIFT(191),
  [409] = {.count = 1, .reusable = false}, SHIFT(194),
  [411] = {.count = 1, .reusable = true}, SHIFT(194),
  [413] = {.count = 1, .reusable = false}, SHIFT(192),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [442] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [445] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [451] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [454] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [457] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [460] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [463] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [466] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [469] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [472] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [475] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [478] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [481] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [490] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [493] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [499] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [502] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [505] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [508] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [511] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [513] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(196),
  [523] = {.count = 1, .reusable = true}, SHIFT(197),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [531] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [534] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [536] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(119),
  [539] = {.count = 1, .reusable = true}, SHIFT(201),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [543] = {.count = 1, .reusable = false}, SHIFT(204),
  [545] = {.count = 1, .reusable = true}, SHIFT(204),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [549] = {.count = 1, .reusable = false}, SHIFT(206),
  [551] = {.count = 1, .reusable = true}, SHIFT(206),
  [553] = {.count = 1, .reusable = false}, SHIFT(205),
  [555] = {.count = 1, .reusable = true}, SHIFT(208),
  [557] = {.count = 1, .reusable = false}, SHIFT(210),
  [559] = {.count = 1, .reusable = true}, SHIFT(210),
  [561] = {.count = 1, .reusable = true}, SHIFT(47),
  [563] = {.count = 1, .reusable = true}, SHIFT(211),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [567] = {.count = 1, .reusable = true}, SHIFT(212),
  [569] = {.count = 1, .reusable = false}, SHIFT(213),
  [571] = {.count = 1, .reusable = true}, SHIFT(213),
  [573] = {.count = 1, .reusable = true}, SHIFT(214),
  [575] = {.count = 1, .reusable = true}, SHIFT(215),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_plus, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_plus, 3),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(67),
  [584] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(68),
  [587] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_plus_repeat1, 2),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_plus_repeat1, 2), SHIFT_REPEAT(140),
  [592] = {.count = 1, .reusable = true}, SHIFT(216),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_use_definition, 3),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [598] = {.count = 1, .reusable = true}, SHIFT(217),
  [600] = {.count = 1, .reusable = true}, SHIFT(219),
  [602] = {.count = 1, .reusable = true}, SHIFT(220),
  [604] = {.count = 1, .reusable = true}, SHIFT(222),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym_cast_ops, 2),
  [610] = {.count = 1, .reusable = true}, SHIFT(228),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_cast_expression, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [616] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [620] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [622] = {.count = 1, .reusable = false}, SHIFT(229),
  [624] = {.count = 1, .reusable = true}, SHIFT(229),
  [626] = {.count = 1, .reusable = false}, SHIFT(230),
  [628] = {.count = 1, .reusable = true}, SHIFT(230),
  [630] = {.count = 1, .reusable = true}, SHIFT(231),
  [632] = {.count = 1, .reusable = true}, SHIFT(232),
  [634] = {.count = 1, .reusable = true}, SHIFT(233),
  [636] = {.count = 1, .reusable = false}, SHIFT(234),
  [638] = {.count = 1, .reusable = true}, SHIFT(234),
  [640] = {.count = 1, .reusable = true}, SHIFT(236),
  [642] = {.count = 1, .reusable = true}, SHIFT(235),
  [644] = {.count = 1, .reusable = false}, SHIFT(236),
  [646] = {.count = 1, .reusable = false}, SHIFT(237),
  [648] = {.count = 1, .reusable = false}, SHIFT(238),
  [650] = {.count = 1, .reusable = true}, SHIFT(239),
  [652] = {.count = 1, .reusable = true}, SHIFT(245),
  [654] = {.count = 1, .reusable = true}, SHIFT(246),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 3, .dynamic_precedence = 1),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_scope_expression, 3),
  [660] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(91),
  [663] = {.count = 1, .reusable = false}, REDUCE(sym_scope_expression, 3),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_container_types, 1),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [673] = {.count = 1, .reusable = true}, SHIFT(251),
  [675] = {.count = 1, .reusable = true}, SHIFT(252),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym__block_comment_star, 3),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym__block_comment_star, 3),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(94),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(95),
  [687] = {.count = 1, .reusable = true}, REDUCE(aux_sym__block_comment_star_repeat1, 2),
  [689] = {.count = 2, .reusable = false}, REDUCE(aux_sym__block_comment_star_repeat1, 2), SHIFT_REPEAT(175),
  [692] = {.count = 1, .reusable = true}, SHIFT(253),
  [694] = {.count = 1, .reusable = false}, SHIFT(256),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [698] = {.count = 1, .reusable = true}, SHIFT(257),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [702] = {.count = 1, .reusable = true}, SHIFT(258),
  [704] = {.count = 1, .reusable = true}, SHIFT(259),
  [706] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [708] = {.count = 1, .reusable = true}, SHIFT(261),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_access_expression, 3),
  [712] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(110),
  [715] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(109),
  [718] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(107),
  [721] = {.count = 1, .reusable = true}, SHIFT(263),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [727] = {.count = 1, .reusable = true}, SHIFT(264),
  [729] = {.count = 1, .reusable = true}, SHIFT(265),
  [731] = {.count = 1, .reusable = true}, SHIFT(266),
  [733] = {.count = 1, .reusable = true}, SHIFT(267),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 1),
  [737] = {.count = 1, .reusable = true}, SHIFT(269),
  [739] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(114),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [746] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(115),
  [751] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(120),
  [754] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(121),
  [759] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(123),
  [762] = {.count = 1, .reusable = true}, SHIFT(270),
  [764] = {.count = 1, .reusable = true}, SHIFT(271),
  [766] = {.count = 1, .reusable = false}, SHIFT(272),
  [768] = {.count = 1, .reusable = true}, SHIFT(272),
  [770] = {.count = 1, .reusable = true}, SHIFT(273),
  [772] = {.count = 1, .reusable = true}, SHIFT(274),
  [774] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(133),
  [777] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(134),
  [780] = {.count = 1, .reusable = true}, SHIFT(275),
  [782] = {.count = 1, .reusable = false}, SHIFT(276),
  [784] = {.count = 1, .reusable = true}, SHIFT(276),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [788] = {.count = 1, .reusable = true}, SHIFT(278),
  [790] = {.count = 1, .reusable = true}, SHIFT(279),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [794] = {.count = 1, .reusable = true}, SHIFT(283),
  [796] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(150),
  [799] = {.count = 1, .reusable = false}, REDUCE(sym_access_expression, 3),
  [801] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(154),
  [804] = {.count = 1, .reusable = true}, SHIFT(287),
  [806] = {.count = 1, .reusable = true}, SHIFT(288),
  [808] = {.count = 1, .reusable = false}, SHIFT(289),
  [810] = {.count = 1, .reusable = true}, SHIFT(289),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [814] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [816] = {.count = 1, .reusable = true}, SHIFT(290),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [820] = {.count = 1, .reusable = true}, SHIFT(291),
  [822] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [824] = {.count = 1, .reusable = true}, SHIFT(292),
  [826] = {.count = 1, .reusable = true}, SHIFT(293),
  [828] = {.count = 1, .reusable = true}, SHIFT(294),
  [830] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [832] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2),
  [834] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(160),
  [837] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(162),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(246),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 4, .dynamic_precedence = 1),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 4),
  [847] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(176),
  [850] = {.count = 1, .reusable = true}, SHIFT(301),
  [852] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [854] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [856] = {.count = 1, .reusable = true}, SHIFT(305),
  [858] = {.count = 1, .reusable = false}, SHIFT(306),
  [860] = {.count = 1, .reusable = true}, SHIFT(306),
  [862] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [864] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [866] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [868] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [870] = {.count = 1, .reusable = true}, SHIFT(309),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4),
  [874] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 4),
  [876] = {.count = 1, .reusable = false}, SHIFT(310),
  [878] = {.count = 1, .reusable = true}, SHIFT(310),
  [880] = {.count = 1, .reusable = false}, SHIFT(311),
  [882] = {.count = 1, .reusable = true}, SHIFT(311),
  [884] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 2),
  [886] = {.count = 1, .reusable = true}, SHIFT(313),
  [888] = {.count = 1, .reusable = false}, SHIFT(314),
  [890] = {.count = 1, .reusable = true}, SHIFT(314),
  [892] = {.count = 1, .reusable = true}, SHIFT(315),
  [894] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(211),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 5),
  [899] = {.count = 1, .reusable = true}, SHIFT(316),
  [901] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [905] = {.count = 1, .reusable = true}, SHIFT(318),
  [907] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(219),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(109),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [917] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [919] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(231),
  [922] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(232),
  [925] = {.count = 1, .reusable = false}, SHIFT(321),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [931] = {.count = 1, .reusable = true}, SHIFT(325),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [935] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(257),
  [938] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(258),
  [941] = {.count = 1, .reusable = true}, SHIFT(332),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [945] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(264),
  [948] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2),
  [950] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(267),
  [953] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2), SHIFT_REPEAT(266),
  [956] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(270),
  [959] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(271),
  [962] = {.count = 1, .reusable = true}, SHIFT(333),
  [964] = {.count = 1, .reusable = true}, SHIFT(334),
  [966] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 6),
  [968] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [972] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [974] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(294),
  [977] = {.count = 1, .reusable = true}, SHIFT(338),
  [979] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [981] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(301),
  [984] = {.count = 1, .reusable = true}, SHIFT(340),
  [986] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [988] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 8),
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
