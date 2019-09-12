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
#define STATE_COUNT 324
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__space = 1,
  sym__comment = 2,
  anon_sym_COMMA = 3,
  anon_sym_private = 4,
  anon_sym_protected = 5,
  anon_sym_DOT = 6,
  anon_sym_use = 7,
  anon_sym_require = 8,
  anon_sym_module = 9,
  anon_sym_package = 10,
  anon_sym_end = 11,
  anon_sym_enum = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_class = 15,
  anon_sym_function = 16,
  anon_sym_method = 17,
  sym_is_interface = 18,
  sym_is_overridable = 19,
  sym_is_override = 20,
  sym_is_primitive = 21,
  anon_sym_readonly = 22,
  anon_sym_writelimited = 23,
  anon_sym_private_write = 24,
  anon_sym_protected_write = 25,
  anon_sym_system_readwrite = 26,
  anon_sym_COLON = 27,
  anon_sym_returns = 28,
  anon_sym_string = 29,
  anon_sym_symbol = 30,
  anon_sym_arguments = 31,
  anon_sym_i8 = 32,
  anon_sym_i16 = 33,
  anon_sym_i32 = 34,
  anon_sym_i64 = 35,
  anon_sym_u8 = 36,
  anon_sym_u16 = 37,
  anon_sym_u32 = 38,
  anon_sym_u64 = 39,
  anon_sym_f32 = 40,
  anon_sym_f64 = 41,
  anon_sym_s8 = 42,
  anon_sym_s16 = 43,
  anon_sym_s32 = 44,
  anon_sym_STAR = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  sym_is_declare = 48,
  sym_is_external = 49,
  anon_sym_if = 50,
  anon_sym_while = 51,
  anon_sym_switch = 52,
  anon_sym_case = 53,
  anon_sym_default = 54,
  anon_sym_goto = 55,
  anon_sym_section = 56,
  anon_sym_COLON_EQ = 57,
  anon_sym_return = 58,
  sym__scope_op = 59,
  sym__access_op = 60,
  anon_sym_DOLLAR = 61,
  anon_sym_DOLLAR_DOLLAR = 62,
  anon_sym_DOLLAR_DOLLAR_DOLLAR = 63,
  anon_sym_DASH = 64,
  anon_sym_AMP = 65,
  anon_sym_BANG = 66,
  anon_sym_TILDE = 67,
  anon_sym_PLUS = 68,
  anon_sym_SLASH = 69,
  anon_sym_PERCENT = 70,
  anon_sym_PIPE = 71,
  anon_sym_CARET = 72,
  anon_sym_GT = 73,
  anon_sym_LT = 74,
  anon_sym_GT_EQ = 75,
  anon_sym_LT_EQ = 76,
  anon_sym_BANG_EQ = 77,
  anon_sym_EQ_EQ = 78,
  anon_sym_AMP_AMP = 79,
  anon_sym_PIPE_PIPE = 80,
  anon_sym_GT_GT = 81,
  anon_sym_LT_LT = 82,
  anon_sym_PLUS_EQ = 83,
  anon_sym_DASH_EQ = 84,
  anon_sym_STAR_EQ = 85,
  anon_sym_SLASH_EQ = 86,
  anon_sym_PERCENT_EQ = 87,
  anon_sym_AMP_EQ = 88,
  anon_sym_PIPE_EQ = 89,
  anon_sym_CARET_EQ = 90,
  anon_sym_GT_GT_EQ = 91,
  anon_sym_LT_LT_EQ = 92,
  anon_sym_PLUS_PLUS = 93,
  anon_sym_DASH_DASH = 94,
  anon_sym_LBRACE = 95,
  anon_sym_RBRACE = 96,
  sym_null = 97,
  sym_identifier = 98,
  anon_sym_DQUOTE = 99,
  aux_sym_string_token1 = 100,
  anon_sym_SQUOTE = 101,
  aux_sym_character_token1 = 102,
  anon_sym_BSLASH_BSLASH = 103,
  anon_sym_BSLASH0 = 104,
  anon_sym_BSLASHa = 105,
  anon_sym_BSLASHb = 106,
  anon_sym_BSLASHf = 107,
  anon_sym_BSLASHn = 108,
  anon_sym_BSLASHr = 109,
  anon_sym_BSLASHt = 110,
  anon_sym_BSLASHv = 111,
  anon_sym_BSLASH_DQUOTE = 112,
  anon_sym_BSLASH_SQUOTE = 113,
  sym_oct = 114,
  sym_integer = 115,
  sym_long = 116,
  sym_float = 117,
  sym_double = 118,
  sym_hex = 119,
  sym_binary = 120,
  sym_source_file = 121,
  sym__comma_list_variables = 122,
  sym__comma_list_values = 123,
  sym__comma_list_assignment_or_values = 124,
  sym__comma_list_types = 125,
  sym_access_control = 126,
  sym__sentence = 127,
  sym_definition = 128,
  sym_use_definition = 129,
  sym_module_definition = 130,
  sym_extension = 131,
  sym_end_extension = 132,
  sym__enum_element = 133,
  sym_enum_definition = 134,
  sym_class_definition = 135,
  sym_is_function = 136,
  sym_is_method = 137,
  sym__override = 138,
  sym_function_definition = 139,
  sym_readability = 140,
  sym_variable_definition = 141,
  sym_container_definition = 142,
  sym_parameter_list = 143,
  sym_return_list = 144,
  sym_container_types = 145,
  sym_type = 146,
  sym__base_type = 147,
  sym_primitive_type = 148,
  sym_pointer = 149,
  sym_array = 150,
  sym_declaration_definition = 151,
  sym_statement = 152,
  sym_end_statement = 153,
  sym__control_flow_statement = 154,
  sym_goto_statement = 155,
  sym_section_statement = 156,
  sym_single_line_if_statement = 157,
  sym_if_statement = 158,
  sym_while_statement = 159,
  sym_switch_statement = 160,
  sym_case_statement = 161,
  sym_default_statement = 162,
  sym_static_assignment = 163,
  sym_expression_statement = 164,
  sym_return_statement = 165,
  sym_group_expression = 166,
  sym_assignment_expression = 167,
  sym_access_expression = 168,
  sym_cast_expression = 169,
  sym_array_expression = 170,
  sym_call_expression = 171,
  sym_scope_expression = 172,
  sym_binding_expression = 173,
  sym_cast_ops = 174,
  sym_unary_op = 175,
  sym_binary_op = 176,
  sym_assignment_op = 177,
  sym_assignment_post_op = 178,
  sym__assignment_or_value = 179,
  sym_collection = 180,
  sym__value = 181,
  sym__literal = 182,
  sym_string = 183,
  sym_character = 184,
  sym__escape_sequence = 185,
  sym__number = 186,
  aux_sym_source_file_repeat1 = 187,
  aux_sym__comma_list_variables_repeat1 = 188,
  aux_sym__comma_list_values_repeat1 = 189,
  aux_sym__comma_list_assignment_or_values_repeat1 = 190,
  aux_sym__comma_list_types_repeat1 = 191,
  aux_sym_extension_repeat1 = 192,
  aux_sym_enum_definition_repeat1 = 193,
  aux_sym_type_repeat1 = 194,
  aux_sym_type_repeat2 = 195,
  aux_sym_string_repeat1 = 196,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__comment] = "_comment",
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
  [anon_sym_class] = "class",
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
  [sym__comma_list_variables] = "_comma_list_variables",
  [sym__comma_list_values] = "_comma_list_values",
  [sym__comma_list_assignment_or_values] = "_comma_list_assignment_or_values",
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
  [sym_class_definition] = "class_definition",
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
  [sym__assignment_or_value] = "_assignment_or_value",
  [sym_collection] = "collection",
  [sym__value] = "_value",
  [sym__literal] = "_literal",
  [sym_string] = "string",
  [sym_character] = "character",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__comma_list_variables_repeat1] = "_comma_list_variables_repeat1",
  [aux_sym__comma_list_values_repeat1] = "_comma_list_values_repeat1",
  [aux_sym__comma_list_assignment_or_values_repeat1] = "_comma_list_assignment_or_values_repeat1",
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
  [sym__comment] = {
    .visible = false,
    .named = true,
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
  [anon_sym_class] = {
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
  [sym__comma_list_variables] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_values] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_list_assignment_or_values] = {
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
  [sym_class_definition] = {
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
  [sym__assignment_or_value] = {
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
  [aux_sym__comma_list_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_assignment_or_values_repeat1] = {
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
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
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
      ACCEPT_TOKEN(anon_sym_COLON);
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
      ACCEPT_TOKEN(aux_sym_string_token1);
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
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a')
        ADVANCE(87);
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'n')
        ADVANCE(90);
      if (lookahead == 'x')
        ADVANCE(91);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '3')
        ADVANCE(92);
      if (lookahead == '6')
        ADVANCE(93);
      if (lookahead == 'u')
        ADVANCE(94);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '1')
        ADVANCE(96);
      if (lookahead == '3')
        ADVANCE(97);
      if (lookahead == '6')
        ADVANCE(98);
      if (lookahead == '8')
        ADVANCE(99);
      if (lookahead == 'f')
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(101);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'u')
        ADVANCE(104);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'v')
        ADVANCE(105);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == 'r')
        ADVANCE(107);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'e')
        ADVANCE(108);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '1')
        ADVANCE(109);
      if (lookahead == '3')
        ADVANCE(110);
      if (lookahead == '8')
        ADVANCE(111);
      if (lookahead == 'e')
        ADVANCE(112);
      if (lookahead == 't')
        ADVANCE(113);
      if (lookahead == 'w')
        ADVANCE(114);
      if (lookahead == 'y')
        ADVANCE(115);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '1')
        ADVANCE(116);
      if (lookahead == '3')
        ADVANCE(117);
      if (lookahead == '6')
        ADVANCE(118);
      if (lookahead == '8')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(120);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'h')
        ADVANCE(121);
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(123);
      if (lookahead == '|')
        ADVANCE(124);
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
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR);
      if (lookahead == '$')
        ADVANCE(125);
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
        ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == ')')
        ADVANCE(127);
      if (lookahead == '.')
        ADVANCE(126);
      if (lookahead == 'f')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__access_op);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(129);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(130);
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
      ACCEPT_TOKEN(sym__scope_op);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(131);
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
        ADVANCE(132);
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
      if (lookahead == 'g')
        ADVANCE(133);
      END_STATE();
    case 87:
      if (lookahead == 's')
        ADVANCE(134);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'c')
        ADVANCE(136);
      if (lookahead == 'f')
        ADVANCE(137);
      END_STATE();
    case 90:
      if (lookahead == 'd')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(139);
      END_STATE();
    case 91:
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 92:
      if (lookahead == '2')
        ADVANCE(141);
      END_STATE();
    case 93:
      if (lookahead == '4')
        ADVANCE(142);
      END_STATE();
    case 94:
      if (lookahead == 'n')
        ADVANCE(143);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(144);
      END_STATE();
    case 96:
      if (lookahead == '6')
        ADVANCE(145);
      END_STATE();
    case 97:
      if (lookahead == '2')
        ADVANCE(146);
      END_STATE();
    case 98:
      if (lookahead == '4')
        ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 101:
      if (lookahead == 't')
        ADVANCE(148);
      END_STATE();
    case 102:
      if (lookahead == 't')
        ADVANCE(149);
      END_STATE();
    case 103:
      if (lookahead == 'd')
        ADVANCE(150);
      END_STATE();
    case 104:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 'c')
        ADVANCE(153);
      END_STATE();
    case 107:
      if (lookahead == 'i')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(155);
      END_STATE();
    case 108:
      if (lookahead == 'a')
        ADVANCE(156);
      if (lookahead == 'q')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(158);
      END_STATE();
    case 109:
      if (lookahead == '6')
        ADVANCE(159);
      END_STATE();
    case 110:
      if (lookahead == '2')
        ADVANCE(160);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 112:
      if (lookahead == 'c')
        ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'r')
        ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'i')
        ADVANCE(163);
      END_STATE();
    case 115:
      if (lookahead == 'm')
        ADVANCE(164);
      if (lookahead == 's')
        ADVANCE(165);
      END_STATE();
    case 116:
      if (lookahead == '6')
        ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == '2')
        ADVANCE(167);
      END_STATE();
    case 118:
      if (lookahead == '4')
        ADVANCE(168);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 121:
      if (lookahead == 'i')
        ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'i')
        ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOLLAR_DOLLAR_DOLLAR);
      END_STATE();
    case 126:
      if (lookahead == ')')
        ADVANCE(127);
      if (lookahead == 'f')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 128:
      if (lookahead == ')')
        ADVANCE(172);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 133:
      if (lookahead == 'u')
        ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 's')
        ADVANCE(175);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(176);
      END_STATE();
    case 137:
      if (lookahead == 'a')
        ADVANCE(177);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(178);
      END_STATE();
    case 140:
      if (lookahead == 'e')
        ADVANCE(179);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 143:
      if (lookahead == 'c')
        ADVANCE(180);
      END_STATE();
    case 144:
      if (lookahead == 'o')
        ADVANCE(181);
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
        ADVANCE(182);
      END_STATE();
    case 149:
      if (lookahead == 'h')
        ADVANCE(183);
      END_STATE();
    case 150:
      if (lookahead == 'u')
        ADVANCE(184);
      END_STATE();
    case 151:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'r')
        ADVANCE(186);
      END_STATE();
    case 153:
      if (lookahead == 'k')
        ADVANCE(187);
      END_STATE();
    case 154:
      if (lookahead == 'm')
        ADVANCE(188);
      if (lookahead == 'v')
        ADVANCE(189);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 156:
      if (lookahead == 'd')
        ADVANCE(191);
      END_STATE();
    case 157:
      if (lookahead == 'u')
        ADVANCE(192);
      END_STATE();
    case 158:
      if (lookahead == 'u')
        ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 161:
      if (lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 164:
      if (lookahead == 'b')
        ADVANCE(197);
      END_STATE();
    case 165:
      if (lookahead == 't')
        ADVANCE(198);
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
        ADVANCE(199);
      END_STATE();
    case 171:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 173:
      if (lookahead == 'm')
        ADVANCE(201);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 175:
      if (lookahead == 's')
        ADVANCE(202);
      END_STATE();
    case 176:
      if (lookahead == 'a')
        ADVANCE(203);
      END_STATE();
    case 177:
      if (lookahead == 'u')
        ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(205);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(207);
      END_STATE();
    case 183:
      if (lookahead == 'o')
        ADVANCE(208);
      END_STATE();
    case 184:
      if (lookahead == 'l')
        ADVANCE(209);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 186:
      if (lookahead == 'r')
        ADVANCE(210);
      END_STATE();
    case 187:
      if (lookahead == 'a')
        ADVANCE(211);
      END_STATE();
    case 188:
      if (lookahead == 'i')
        ADVANCE(212);
      END_STATE();
    case 189:
      if (lookahead == 'a')
        ADVANCE(213);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(214);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(215);
      END_STATE();
    case 192:
      if (lookahead == 'i')
        ADVANCE(216);
      END_STATE();
    case 193:
      if (lookahead == 'r')
        ADVANCE(217);
      END_STATE();
    case 194:
      if (lookahead == 'i')
        ADVANCE(218);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(219);
      END_STATE();
    case 196:
      if (lookahead == 'c')
        ADVANCE(220);
      END_STATE();
    case 197:
      if (lookahead == 'o')
        ADVANCE(221);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(222);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(226);
      END_STATE();
    case 204:
      if (lookahead == 'l')
        ADVANCE(227);
      END_STATE();
    case 205:
      if (lookahead == 'n')
        ADVANCE(228);
      END_STATE();
    case 206:
      if (lookahead == 'i')
        ADVANCE(229);
      END_STATE();
    case 207:
      if (lookahead == 'f')
        ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead == 'd')
        ADVANCE(231);
      END_STATE();
    case 209:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 210:
      if (lookahead == 'i')
        ADVANCE(233);
      END_STATE();
    case 211:
      if (lookahead == 'g')
        ADVANCE(234);
      END_STATE();
    case 212:
      if (lookahead == 't')
        ADVANCE(235);
      END_STATE();
    case 213:
      if (lookahead == 't')
        ADVANCE(236);
      END_STATE();
    case 214:
      if (lookahead == 'c')
        ADVANCE(237);
      END_STATE();
    case 215:
      if (lookahead == 'n')
        ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 'r')
        ADVANCE(239);
      END_STATE();
    case 217:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 218:
      if (lookahead == 'o')
        ADVANCE(241);
      END_STATE();
    case 219:
      if (lookahead == 'g')
        ADVANCE(242);
      END_STATE();
    case 220:
      if (lookahead == 'h')
        ADVANCE(243);
      END_STATE();
    case 221:
      if (lookahead == 'l')
        ADVANCE(244);
      END_STATE();
    case 222:
      if (lookahead == 'm')
        ADVANCE(245);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 224:
      if (lookahead == 'l')
        ADVANCE(246);
      END_STATE();
    case 225:
      if (lookahead == 'n')
        ADVANCE(247);
      END_STATE();
    case 226:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 227:
      if (lookahead == 't')
        ADVANCE(249);
      END_STATE();
    case 228:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 229:
      if (lookahead == 'o')
        ADVANCE(251);
      END_STATE();
    case 230:
      if (lookahead == 'a')
        ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 233:
      if (lookahead == 'd')
        ADVANCE(253);
      END_STATE();
    case 234:
      if (lookahead == 'e')
        ADVANCE(254);
      END_STATE();
    case 235:
      if (lookahead == 'i')
        ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(256);
      END_STATE();
    case 237:
      if (lookahead == 't')
        ADVANCE(257);
      END_STATE();
    case 238:
      if (lookahead == 'l')
        ADVANCE(258);
      END_STATE();
    case 239:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 241:
      if (lookahead == 'n')
        ADVANCE(260);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 245:
      if (lookahead == '_')
        ADVANCE(261);
      END_STATE();
    case 246:
      if (lookahead == 'i')
        ADVANCE(262);
      END_STATE();
    case 247:
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 250:
      if (lookahead == 'l')
        ADVANCE(264);
      END_STATE();
    case 251:
      if (lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 252:
      if (lookahead == 'c')
        ADVANCE(266);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 255:
      if (lookahead == 'v')
        ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
        ADVANCE(270);
      END_STATE();
    case 257:
      if (lookahead == 'e')
        ADVANCE(271);
      END_STATE();
    case 258:
      if (lookahead == 'y')
        ADVANCE(272);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(273);
      END_STATE();
    case 262:
      if (lookahead == 'm')
        ADVANCE(274);
      END_STATE();
    case 263:
      if (lookahead == 's')
        ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 266:
      if (lookahead == 'e')
        ADVANCE(276);
      END_STATE();
    case 267:
      if (lookahead == 'b')
        ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_is_override);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(278);
      END_STATE();
    case 270:
      if (lookahead == 'w')
        ADVANCE(279);
      END_STATE();
    case 271:
      if (lookahead == 'd')
        ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 273:
      if (lookahead == 'e')
        ADVANCE(281);
      END_STATE();
    case 274:
      if (lookahead == 'i')
        ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_arguments);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_is_interface);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(283);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_is_primitive);
      END_STATE();
    case 279:
      if (lookahead == 'r')
        ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
        ADVANCE(285);
      END_STATE();
    case 281:
      if (lookahead == 'a')
        ADVANCE(286);
      END_STATE();
    case 282:
      if (lookahead == 't')
        ADVANCE(287);
      END_STATE();
    case 283:
      if (lookahead == 'e')
        ADVANCE(288);
      END_STATE();
    case 284:
      if (lookahead == 'i')
        ADVANCE(289);
      END_STATE();
    case 285:
      if (lookahead == 'w')
        ADVANCE(290);
      END_STATE();
    case 286:
      if (lookahead == 'd')
        ADVANCE(291);
      END_STATE();
    case 287:
      if (lookahead == 'e')
        ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_is_overridable);
      END_STATE();
    case 289:
      if (lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 290:
      if (lookahead == 'r')
        ADVANCE(294);
      END_STATE();
    case 291:
      if (lookahead == 'w')
        ADVANCE(295);
      END_STATE();
    case 292:
      if (lookahead == 'd')
        ADVANCE(296);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(297);
      END_STATE();
    case 294:
      if (lookahead == 'i')
        ADVANCE(298);
      END_STATE();
    case 295:
      if (lookahead == 'r')
        ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_writelimited);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_private_write);
      END_STATE();
    case 298:
      if (lookahead == 't')
        ADVANCE(300);
      END_STATE();
    case 299:
      if (lookahead == 'i')
        ADVANCE(301);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(302);
      END_STATE();
    case 301:
      if (lookahead == 't')
        ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_protected_write);
      END_STATE();
    case 303:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_system_readwrite);
      END_STATE();
    case 305:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '0')
        ADVANCE(310);
      if (lookahead == 'c')
        ADVANCE(311);
      if (lookahead == 'd')
        ADVANCE(312);
      if (lookahead == 'e')
        ADVANCE(313);
      if (lookahead == 'f')
        ADVANCE(314);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'o')
        ADVANCE(319);
      if (lookahead == 'p')
        ADVANCE(320);
      if (lookahead == 'r')
        ADVANCE(321);
      if (lookahead == 's')
        ADVANCE(322);
      if (lookahead == 'u')
        ADVANCE(323);
      if (lookahead == 'w')
        ADVANCE(324);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(325);
      END_STATE();
    case 306:
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 307:
      if (lookahead == '+')
        ADVANCE(326);
      END_STATE();
    case 308:
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
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
        ADVANCE(325);
      END_STATE();
    case 310:
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
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(329);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(332);
      if (lookahead == 'x')
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
        ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(334);
      if (lookahead == '6')
        ADVANCE(335);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(338);
      if (lookahead == '3')
        ADVANCE(339);
      if (lookahead == '6')
        ADVANCE(340);
      if (lookahead == '8')
        ADVANCE(341);
      if (lookahead == 'f')
        ADVANCE(342);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(344);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(350);
      if (lookahead == '3')
        ADVANCE(351);
      if (lookahead == '8')
        ADVANCE(352);
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(354);
      if (lookahead == 'y')
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
        ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(356);
      if (lookahead == '3')
        ADVANCE(357);
      if (lookahead == '6')
        ADVANCE(358);
      if (lookahead == '8')
        ADVANCE(359);
      if (lookahead == 's')
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
        ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(361);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 325:
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
        ADVANCE(325);
      END_STATE();
    case 326:
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(54);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '$' ||
          lookahead == '%' ||
          ('\'' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(325);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(365);
      if (lookahead == 'f')
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
        ADVANCE(325);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(367);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(325);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(325);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(325);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(325);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(325);
      END_STATE();
    case 341:
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
        ADVANCE(325);
      END_STATE();
    case 342:
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
        ADVANCE(325);
      END_STATE();
    case 343:
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
        ADVANCE(325);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(325);
      END_STATE();
    case 346:
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
        ADVANCE(325);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(384);
      if (lookahead == 'q')
        ADVANCE(385);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(325);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(325);
      END_STATE();
    case 352:
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
        ADVANCE(325);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(325);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(325);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(325);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(325);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(325);
      END_STATE();
    case 359:
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
        ADVANCE(325);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 362:
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
        ADVANCE(325);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(325);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 367:
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
        ADVANCE(325);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(325);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 370:
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
        ADVANCE(325);
      END_STATE();
    case 371:
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
        ADVANCE(325);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(325);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 374:
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
        ADVANCE(325);
      END_STATE();
    case 375:
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
        ADVANCE(325);
      END_STATE();
    case 376:
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
        ADVANCE(325);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(325);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 380:
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
        ADVANCE(325);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(411);
      if (lookahead == 'v')
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
        ADVANCE(325);
      END_STATE();
    case 383:
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
        ADVANCE(325);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(325);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 387:
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
        ADVANCE(325);
      END_STATE();
    case 388:
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
        ADVANCE(325);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 392:
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
        ADVANCE(325);
      END_STATE();
    case 393:
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
        ADVANCE(325);
      END_STATE();
    case 394:
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
        ADVANCE(325);
      END_STATE();
    case 395:
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
        ADVANCE(325);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 398:
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
        ADVANCE(325);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(325);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 402:
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
        ADVANCE(325);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 405:
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
        ADVANCE(325);
      END_STATE();
    case 406:
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
        ADVANCE(325);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 409:
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
        ADVANCE(325);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 413:
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
        ADVANCE(325);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(325);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(325);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(325);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 430:
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
        ADVANCE(325);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 432:
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
        ADVANCE(325);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(325);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(325);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 440:
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
        ADVANCE(325);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(325);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 447:
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
        ADVANCE(325);
      END_STATE();
    case 448:
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
        ADVANCE(325);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(325);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(325);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 455:
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
        ADVANCE(325);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 457:
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
        ADVANCE(325);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 460:
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
        ADVANCE(325);
      END_STATE();
    case 461:
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
        ADVANCE(325);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(477);
      if (lookahead == 'e')
        ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 470:
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
        ADVANCE(325);
      END_STATE();
    case 471:
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
        ADVANCE(325);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 474:
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
        ADVANCE(325);
      END_STATE();
    case 475:
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
        ADVANCE(325);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 478:
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
        ADVANCE(325);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 482:
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
        ADVANCE(325);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 485:
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
        ADVANCE(325);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 487:
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
        ADVANCE(325);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 492:
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
        ADVANCE(325);
      END_STATE();
    case 493:
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
        ADVANCE(325);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 497:
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
        ADVANCE(325);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_writelimited);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_private_write);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_protected_write);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_system_readwrite);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 514:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == 'c')
        ADVANCE(517);
      if (lookahead == 'd')
        ADVANCE(518);
      if (lookahead == 'f')
        ADVANCE(519);
      if (lookahead == 'i')
        ADVANCE(520);
      if (lookahead == 'm')
        ADVANCE(521);
      if (lookahead == 'o')
        ADVANCE(522);
      if (lookahead == 'p')
        ADVANCE(523);
      if (lookahead == 's')
        ADVANCE(524);
      if (lookahead == 'w')
        ADVANCE(525);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 516:
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 517:
      if (lookahead == 'a')
        ADVANCE(87);
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 518:
      if (lookahead == 'e')
        ADVANCE(526);
      END_STATE();
    case 519:
      if (lookahead == 'u')
        ADVANCE(94);
      END_STATE();
    case 520:
      if (lookahead == 'f')
        ADVANCE(100);
      END_STATE();
    case 521:
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 522:
      if (lookahead == 'v')
        ADVANCE(105);
      END_STATE();
    case 523:
      if (lookahead == 'r')
        ADVANCE(527);
      END_STATE();
    case 524:
      if (lookahead == 'w')
        ADVANCE(114);
      END_STATE();
    case 525:
      if (lookahead == 'h')
        ADVANCE(121);
      END_STATE();
    case 526:
      if (lookahead == 'f')
        ADVANCE(137);
      END_STATE();
    case 527:
      if (lookahead == 'i')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 'm')
        ADVANCE(188);
      END_STATE();
    case 529:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == ':')
        ADVANCE(531);
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
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 531:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 532:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(533);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == ':')
        ADVANCE(534);
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
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 533:
      if (lookahead == '-')
        ADVANCE(327);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 534:
      if (lookahead == ':')
        ADVANCE(67);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 535:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == 'm')
        ADVANCE(536);
      if (lookahead == 'p')
        ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 536:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 537:
      if (lookahead == 'a')
        ADVANCE(106);
      END_STATE();
    case 538:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(314);
      if (lookahead == 'i')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(540);
      if (lookahead == 'o')
        ADVANCE(319);
      if (lookahead == 'p')
        ADVANCE(541);
      if (lookahead == 'r')
        ADVANCE(542);
      if (lookahead == 's')
        ADVANCE(543);
      if (lookahead == 'u')
        ADVANCE(544);
      if (lookahead == 'w')
        ADVANCE(545);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(338);
      if (lookahead == '3')
        ADVANCE(339);
      if (lookahead == '6')
        ADVANCE(340);
      if (lookahead == '8')
        ADVANCE(341);
      if (lookahead == 'n')
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
        ADVANCE(325);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(350);
      if (lookahead == '3')
        ADVANCE(351);
      if (lookahead == '8')
        ADVANCE(352);
      if (lookahead == 'y')
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
        ADVANCE(325);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(356);
      if (lookahead == '3')
        ADVANCE(357);
      if (lookahead == '6')
        ADVANCE(358);
      if (lookahead == '8')
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
        ADVANCE(325);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(325);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead == 'o')
        ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(411);
      if (lookahead == 'v')
        ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 560:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 's')
        ADVANCE(563);
      if (lookahead == 'u')
        ADVANCE(544);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(334);
      if (lookahead == '6')
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
        ADVANCE(325);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(338);
      if (lookahead == '3')
        ADVANCE(339);
      if (lookahead == '6')
        ADVANCE(340);
      if (lookahead == '8')
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
        ADVANCE(325);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(350);
      if (lookahead == '3')
        ADVANCE(351);
      if (lookahead == '8')
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
        ADVANCE(325);
      END_STATE();
    case 564:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '0')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(325);
      END_STATE();
    case 565:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(314);
      if (lookahead == 'i')
        ADVANCE(539);
      if (lookahead == 'm')
        ADVANCE(540);
      if (lookahead == 'o')
        ADVANCE(319);
      if (lookahead == 'p')
        ADVANCE(320);
      if (lookahead == 'r')
        ADVANCE(542);
      if (lookahead == 's')
        ADVANCE(543);
      if (lookahead == 'u')
        ADVANCE(544);
      if (lookahead == 'w')
        ADVANCE(545);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 566:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(568);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(569);
      if (lookahead == '-')
        ADVANCE(570);
      if (lookahead == '/')
        ADVANCE(571);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(572);
      if (lookahead == '>')
        ADVANCE(573);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(574);
      if (lookahead == '|')
        ADVANCE(575);
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
        ADVANCE(325);
      END_STATE();
    case 567:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 568:
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
        ADVANCE(325);
      END_STATE();
    case 569:
      if (lookahead == '+')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(328);
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
        ADVANCE(325);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 574:
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
        ADVANCE(325);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(123);
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
        ADVANCE(325);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(131);
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
        ADVANCE(325);
      END_STATE();
    case 577:
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
        ADVANCE(325);
      END_STATE();
    case 578:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(579);
      if (lookahead == '+')
        ADVANCE(580);
      if (lookahead == '-')
        ADVANCE(581);
      if (lookahead == '/')
        ADVANCE(582);
      if (lookahead == '\\')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(326);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 583:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'c')
        ADVANCE(311);
      if (lookahead == 'd')
        ADVANCE(584);
      if (lookahead == 'f')
        ADVANCE(585);
      if (lookahead == 'i')
        ADVANCE(586);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 's')
        ADVANCE(587);
      if (lookahead == 'w')
        ADVANCE(588);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(325);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(325);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(325);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(325);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(325);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(325);
      END_STATE();
    case 590:
      if (lookahead == '!')
        ADVANCE(591);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(592);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(593);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '0')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 592:
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
        ADVANCE(325);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 594:
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
        ADVANCE(325);
      END_STATE();
    case 595:
      if (lookahead == '*')
        ADVANCE(596);
      if (lookahead == '+')
        ADVANCE(597);
      if (lookahead == '-')
        ADVANCE(598);
      if (lookahead == '/')
        ADVANCE(599);
      if (lookahead == '\\')
        ADVANCE(600);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(601);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(326);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 600:
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
    case 601:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 602:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(603);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(569);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(570);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(604);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(605);
      if (lookahead == '>')
        ADVANCE(606);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(607);
      if (lookahead == '|')
        ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 603:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 604:
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 605:
      if (lookahead == '<')
        ADVANCE(609);
      END_STATE();
    case 606:
      if (lookahead == '>')
        ADVANCE(610);
      END_STATE();
    case 607:
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 608:
      if (lookahead == '=')
        ADVANCE(123);
      END_STATE();
    case 609:
      if (lookahead == '=')
        ADVANCE(131);
      END_STATE();
    case 610:
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 611:
      if (lookahead == '!')
        ADVANCE(612);
      if (lookahead == '$')
        ADVANCE(613);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(515);
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
      if (lookahead == ':')
        ADVANCE(531);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(614);
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
    case 612:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 614:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 615:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '0')
        ADVANCE(310);
      if (lookahead == 'c')
        ADVANCE(616);
      if (lookahead == 'd')
        ADVANCE(584);
      if (lookahead == 'e')
        ADVANCE(617);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(586);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'r')
        ADVANCE(618);
      if (lookahead == 's')
        ADVANCE(619);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
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
        ADVANCE(325);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(325);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'w')
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
        ADVANCE(325);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(325);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(325);
      END_STATE();
    case 622:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(623);
      END_STATE();
    case 624:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(603);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(625);
      if (lookahead == '+')
        ADVANCE(569);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(570);
      if (lookahead == '/')
        ADVANCE(604);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(605);
      if (lookahead == '>')
        ADVANCE(606);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(607);
      if (lookahead == '|')
        ADVANCE(608);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 625:
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 626:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 627:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'a')
        ADVANCE(628);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 's')
        ADVANCE(629);
      if (lookahead == 'u')
        ADVANCE(544);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(350);
      if (lookahead == '3')
        ADVANCE(351);
      if (lookahead == '8')
        ADVANCE(352);
      if (lookahead == 't')
        ADVANCE(631);
      if (lookahead == 'y')
        ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
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
        ADVANCE(325);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 643:
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
        ADVANCE(325);
      END_STATE();
    case 644:
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
        ADVANCE(325);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 647:
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
        ADVANCE(325);
      END_STATE();
    case 648:
      if (lookahead == '!')
        ADVANCE(612);
      if (lookahead == '$')
        ADVANCE(613);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(614);
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
    case 649:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 650:
      if (lookahead == 'e')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 't')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'u')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'r')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'n')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 's')
        ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 657:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 658:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(533);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 659:
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(533);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 's')
        ADVANCE(563);
      if (lookahead == 'u')
        ADVANCE(544);
      if (lookahead == '}')
        ADVANCE(42);
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
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{')
        ADVANCE(325);
      END_STATE();
    case 660:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 'p')
        ADVANCE(661);
      if (lookahead == 'r')
        ADVANCE(542);
      if (lookahead == 's')
        ADVANCE(543);
      if (lookahead == 'u')
        ADVANCE(544);
      if (lookahead == 'w')
        ADVANCE(545);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(663);
      if (lookahead == 'o')
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
        ADVANCE(325);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(325);
      END_STATE();
    case 664:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(516);
      if (lookahead == ':')
        ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 665:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(568);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(625);
      if (lookahead == '+')
        ADVANCE(569);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(570);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(571);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(572);
      if (lookahead == '>')
        ADVANCE(573);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(574);
      if (lookahead == '|')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(42);
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
          lookahead != '{')
        ADVANCE(325);
      END_STATE();
    case 666:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 's')
        ADVANCE(563);
      if (lookahead == 'u')
        ADVANCE(544);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 667:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(568);
      if (lookahead == '(')
        ADVANCE(515);
      if (lookahead == '*')
        ADVANCE(625);
      if (lookahead == '+')
        ADVANCE(569);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(570);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(571);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(572);
      if (lookahead == '>')
        ADVANCE(573);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(574);
      if (lookahead == '|')
        ADVANCE(575);
      if (lookahead == '}')
        ADVANCE(42);
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
          lookahead != '{')
        ADVANCE(325);
      END_STATE();
    case 668:
      if (lookahead == '*')
        ADVANCE(306);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 'p')
        ADVANCE(669);
      if (lookahead == 'r')
        ADVANCE(542);
      if (lookahead == 's')
        ADVANCE(543);
      if (lookahead == 'u')
        ADVANCE(544);
      if (lookahead == 'w')
        ADVANCE(545);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(671);
      if (lookahead == 'o')
        ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 672:
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(308);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == ':')
        ADVANCE(673);
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
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 305},
  [2] = {.lex_state = 514},
  [3] = {.lex_state = 529},
  [4] = {.lex_state = 514},
  [5] = {.lex_state = 532},
  [6] = {.lex_state = 514},
  [7] = {.lex_state = 532},
  [8] = {.lex_state = 535},
  [9] = {.lex_state = 538},
  [10] = {.lex_state = 560},
  [11] = {.lex_state = 564},
  [12] = {.lex_state = 532},
  [13] = {.lex_state = 565},
  [14] = {.lex_state = 566},
  [15] = {.lex_state = 514},
  [16] = {.lex_state = 532},
  [17] = {.lex_state = 514},
  [18] = {.lex_state = 532},
  [19] = {.lex_state = 514},
  [20] = {.lex_state = 564},
  [21] = {.lex_state = 578},
  [22] = {.lex_state = 514},
  [23] = {.lex_state = 532},
  [24] = {.lex_state = 583},
  [25] = {.lex_state = 532},
  [26] = {.lex_state = 590},
  [27] = {.lex_state = 595},
  [28] = {.lex_state = 532},
  [29] = {.lex_state = 532},
  [30] = {.lex_state = 532},
  [31] = {.lex_state = 532},
  [32] = {.lex_state = 602},
  [33] = {.lex_state = 611},
  [34] = {.lex_state = 566},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 538},
  [37] = {.lex_state = 514},
  [38] = {.lex_state = 532},
  [39] = {.lex_state = 566},
  [40] = {.lex_state = 305},
  [41] = {.lex_state = 532},
  [42] = {.lex_state = 560},
  [43] = {.lex_state = 532},
  [44] = {.lex_state = 532},
  [45] = {.lex_state = 590},
  [46] = {.lex_state = 615},
  [47] = {.lex_state = 532},
  [48] = {.lex_state = 532},
  [49] = {.lex_state = 532},
  [50] = {.lex_state = 532},
  [51] = {.lex_state = 622},
  [52] = {.lex_state = 560},
  [53] = {.lex_state = 624},
  [54] = {.lex_state = 624},
  [55] = {.lex_state = 624},
  [56] = {.lex_state = 624},
  [57] = {.lex_state = 624},
  [58] = {.lex_state = 532},
  [59] = {.lex_state = 626},
  [60] = {.lex_state = 627},
  [61] = {.lex_state = 532},
  [62] = {.lex_state = 532},
  [63] = {.lex_state = 532},
  [64] = {.lex_state = 532},
  [65] = {.lex_state = 529},
  [66] = {.lex_state = 622},
  [67] = {.lex_state = 532},
  [68] = {.lex_state = 532},
  [69] = {.lex_state = 532},
  [70] = {.lex_state = 514},
  [71] = {.lex_state = 514},
  [72] = {.lex_state = 602},
  [73] = {.lex_state = 602},
  [74] = {.lex_state = 532},
  [75] = {.lex_state = 602},
  [76] = {.lex_state = 611},
  [77] = {.lex_state = 578},
  [78] = {.lex_state = 532},
  [79] = {.lex_state = 532},
  [80] = {.lex_state = 532},
  [81] = {.lex_state = 564},
  [82] = {.lex_state = 560},
  [83] = {.lex_state = 648},
  [84] = {.lex_state = 560},
  [85] = {.lex_state = 564},
  [86] = {.lex_state = 648},
  [87] = {.lex_state = 648},
  [88] = {.lex_state = 514},
  [89] = {.lex_state = 305},
  [90] = {.lex_state = 649},
  [91] = {.lex_state = 532},
  [92] = {.lex_state = 532},
  [93] = {.lex_state = 514},
  [94] = {.lex_state = 532},
  [95] = {.lex_state = 560},
  [96] = {.lex_state = 564},
  [97] = {.lex_state = 564},
  [98] = {.lex_state = 657},
  [99] = {.lex_state = 622},
  [100] = {.lex_state = 564},
  [101] = {.lex_state = 657},
  [102] = {.lex_state = 611},
  [103] = {.lex_state = 564},
  [104] = {.lex_state = 305},
  [105] = {.lex_state = 305},
  [106] = {.lex_state = 532},
  [107] = {.lex_state = 649},
  [108] = {.lex_state = 560},
  [109] = {.lex_state = 564},
  [110] = {.lex_state = 648},
  [111] = {.lex_state = 514},
  [112] = {.lex_state = 566},
  [113] = {.lex_state = 566},
  [114] = {.lex_state = 532},
  [115] = {.lex_state = 658},
  [116] = {.lex_state = 658},
  [117] = {.lex_state = 532},
  [118] = {.lex_state = 532},
  [119] = {.lex_state = 659},
  [120] = {.lex_state = 622},
  [121] = {.lex_state = 532},
  [122] = {.lex_state = 611},
  [123] = {.lex_state = 564},
  [124] = {.lex_state = 564},
  [125] = {.lex_state = 564},
  [126] = {.lex_state = 624},
  [127] = {.lex_state = 660},
  [128] = {.lex_state = 626},
  [129] = {.lex_state = 578},
  [130] = {.lex_state = 532},
  [131] = {.lex_state = 626},
  [132] = {.lex_state = 664},
  [133] = {.lex_state = 532},
  [134] = {.lex_state = 532},
  [135] = {.lex_state = 566},
  [136] = {.lex_state = 665},
  [137] = {.lex_state = 532},
  [138] = {.lex_state = 622},
  [139] = {.lex_state = 532},
  [140] = {.lex_state = 532},
  [141] = {.lex_state = 532},
  [142] = {.lex_state = 532},
  [143] = {.lex_state = 514},
  [144] = {.lex_state = 532},
  [145] = {.lex_state = 564},
  [146] = {.lex_state = 611},
  [147] = {.lex_state = 578},
  [148] = {.lex_state = 514},
  [149] = {.lex_state = 529},
  [150] = {.lex_state = 532},
  [151] = {.lex_state = 611},
  [152] = {.lex_state = 648},
  [153] = {.lex_state = 648},
  [154] = {.lex_state = 648},
  [155] = {.lex_state = 564},
  [156] = {.lex_state = 564},
  [157] = {.lex_state = 622},
  [158] = {.lex_state = 564},
  [159] = {.lex_state = 564},
  [160] = {.lex_state = 560},
  [161] = {.lex_state = 611},
  [162] = {.lex_state = 666},
  [163] = {.lex_state = 649},
  [164] = {.lex_state = 532},
  [165] = {.lex_state = 532},
  [166] = {.lex_state = 532},
  [167] = {.lex_state = 532},
  [168] = {.lex_state = 514},
  [169] = {.lex_state = 532},
  [170] = {.lex_state = 532},
  [171] = {.lex_state = 566},
  [172] = {.lex_state = 667},
  [173] = {.lex_state = 622},
  [174] = {.lex_state = 658},
  [175] = {.lex_state = 658},
  [176] = {.lex_state = 658},
  [177] = {.lex_state = 560},
  [178] = {.lex_state = 532},
  [179] = {.lex_state = 532},
  [180] = {.lex_state = 532},
  [181] = {.lex_state = 564},
  [182] = {.lex_state = 664},
  [183] = {.lex_state = 649},
  [184] = {.lex_state = 532},
  [185] = {.lex_state = 615},
  [186] = {.lex_state = 648},
  [187] = {.lex_state = 564},
  [188] = {.lex_state = 532},
  [189] = {.lex_state = 564},
  [190] = {.lex_state = 658},
  [191] = {.lex_state = 532},
  [192] = {.lex_state = 532},
  [193] = {.lex_state = 658},
  [194] = {.lex_state = 532},
  [195] = {.lex_state = 659},
  [196] = {.lex_state = 624},
  [197] = {.lex_state = 624},
  [198] = {.lex_state = 624},
  [199] = {.lex_state = 624},
  [200] = {.lex_state = 624},
  [201] = {.lex_state = 624},
  [202] = {.lex_state = 624},
  [203] = {.lex_state = 668},
  [204] = {.lex_state = 649},
  [205] = {.lex_state = 672},
  [206] = {.lex_state = 560},
  [207] = {.lex_state = 532},
  [208] = {.lex_state = 658},
  [209] = {.lex_state = 668},
  [210] = {.lex_state = 560},
  [211] = {.lex_state = 626},
  [212] = {.lex_state = 626},
  [213] = {.lex_state = 578},
  [214] = {.lex_state = 532},
  [215] = {.lex_state = 626},
  [216] = {.lex_state = 532},
  [217] = {.lex_state = 532},
  [218] = {.lex_state = 664},
  [219] = {.lex_state = 532},
  [220] = {.lex_state = 532},
  [221] = {.lex_state = 532},
  [222] = {.lex_state = 649},
  [223] = {.lex_state = 532},
  [224] = {.lex_state = 602},
  [225] = {.lex_state = 602},
  [226] = {.lex_state = 529},
  [227] = {.lex_state = 529},
  [228] = {.lex_state = 648},
  [229] = {.lex_state = 648},
  [230] = {.lex_state = 532},
  [231] = {.lex_state = 564},
  [232] = {.lex_state = 611},
  [233] = {.lex_state = 648},
  [234] = {.lex_state = 648},
  [235] = {.lex_state = 622},
  [236] = {.lex_state = 648},
  [237] = {.lex_state = 648},
  [238] = {.lex_state = 602},
  [239] = {.lex_state = 602},
  [240] = {.lex_state = 532},
  [241] = {.lex_state = 514},
  [242] = {.lex_state = 664},
  [243] = {.lex_state = 532},
  [244] = {.lex_state = 667},
  [245] = {.lex_state = 532},
  [246] = {.lex_state = 564},
  [247] = {.lex_state = 564},
  [248] = {.lex_state = 658},
  [249] = {.lex_state = 611},
  [250] = {.lex_state = 532},
  [251] = {.lex_state = 564},
  [252] = {.lex_state = 532},
  [253] = {.lex_state = 532},
  [254] = {.lex_state = 615},
  [255] = {.lex_state = 648},
  [256] = {.lex_state = 566},
  [257] = {.lex_state = 658},
  [258] = {.lex_state = 532},
  [259] = {.lex_state = 658},
  [260] = {.lex_state = 532},
  [261] = {.lex_state = 658},
  [262] = {.lex_state = 532},
  [263] = {.lex_state = 564},
  [264] = {.lex_state = 627},
  [265] = {.lex_state = 532},
  [266] = {.lex_state = 658},
  [267] = {.lex_state = 660},
  [268] = {.lex_state = 658},
  [269] = {.lex_state = 560},
  [270] = {.lex_state = 649},
  [271] = {.lex_state = 626},
  [272] = {.lex_state = 532},
  [273] = {.lex_state = 532},
  [274] = {.lex_state = 532},
  [275] = {.lex_state = 532},
  [276] = {.lex_state = 649},
  [277] = {.lex_state = 649},
  [278] = {.lex_state = 529},
  [279] = {.lex_state = 529},
  [280] = {.lex_state = 529},
  [281] = {.lex_state = 648},
  [282] = {.lex_state = 648},
  [283] = {.lex_state = 648},
  [284] = {.lex_state = 611},
  [285] = {.lex_state = 602},
  [286] = {.lex_state = 602},
  [287] = {.lex_state = 560},
  [288] = {.lex_state = 602},
  [289] = {.lex_state = 532},
  [290] = {.lex_state = 664},
  [291] = {.lex_state = 658},
  [292] = {.lex_state = 658},
  [293] = {.lex_state = 658},
  [294] = {.lex_state = 658},
  [295] = {.lex_state = 532},
  [296] = {.lex_state = 532},
  [297] = {.lex_state = 615},
  [298] = {.lex_state = 532},
  [299] = {.lex_state = 624},
  [300] = {.lex_state = 624},
  [301] = {.lex_state = 658},
  [302] = {.lex_state = 658},
  [303] = {.lex_state = 658},
  [304] = {.lex_state = 658},
  [305] = {.lex_state = 658},
  [306] = {.lex_state = 532},
  [307] = {.lex_state = 532},
  [308] = {.lex_state = 649},
  [309] = {.lex_state = 602},
  [310] = {.lex_state = 602},
  [311] = {.lex_state = 602},
  [312] = {.lex_state = 602},
  [313] = {.lex_state = 602},
  [314] = {.lex_state = 649},
  [315] = {.lex_state = 658},
  [316] = {.lex_state = 658},
  [317] = {.lex_state = 658},
  [318] = {.lex_state = 532},
  [319] = {.lex_state = 649},
  [320] = {.lex_state = 658},
  [321] = {.lex_state = 658},
  [322] = {.lex_state = 658},
  [323] = {.lex_state = 532},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [sym__scope_op] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_arguments] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_is_interface] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_protected_write] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_is_primitive] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_is_override] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_writelimited] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [sym__access_op] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [sym_is_overridable] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_system_readwrite] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_private_write] = ACTIONS(1),
  },
  [1] = {
    [sym_string] = STATE(39),
    [sym_character] = STATE(39),
    [sym_use_definition] = STATE(28),
    [sym_module_definition] = STATE(28),
    [sym_class_definition] = STATE(28),
    [sym_is_function] = STATE(29),
    [sym_variable_definition] = STATE(28),
    [sym_container_definition] = STATE(28),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_end_statement] = STATE(31),
    [sym__control_flow_statement] = STATE(31),
    [sym_while_statement] = STATE(31),
    [sym_switch_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_group_expression] = STATE(32),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(34),
    [sym_collection] = STATE(39),
    [sym_source_file] = STATE(35),
    [sym_access_control] = STATE(36),
    [sym_extension] = STATE(28),
    [sym_end_extension] = STATE(28),
    [sym_is_method] = STATE(29),
    [sym__override] = STATE(37),
    [sym__number] = STATE(39),
    [sym_goto_statement] = STATE(31),
    [sym_section_statement] = STATE(31),
    [sym_case_statement] = STATE(31),
    [sym_default_statement] = STATE(31),
    [sym_assignment_expression] = STATE(38),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(39),
    [sym__value] = STATE(39),
    [sym__literal] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym_definition] = STATE(41),
    [sym__sentence] = STATE(40),
    [sym_enum_definition] = STATE(28),
    [sym_function_definition] = STATE(28),
    [sym_readability] = STATE(42),
    [sym_type] = STATE(43),
    [sym_declaration_definition] = STATE(28),
    [sym_statement] = STATE(41),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym_expression_statement] = STATE(31),
    [sym_array_expression] = STATE(33),
    [anon_sym_i16] = ACTIONS(5),
    [sym_oct] = ACTIONS(7),
    [anon_sym_goto] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_method] = ACTIONS(15),
    [sym_is_declare] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(5),
    [sym_is_interface] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym_long] = ACTIONS(21),
    [sym_is_external] = ACTIONS(17),
    [sym_double] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym_is_overridable] = ACTIONS(33),
    [sym_is_primitive] = ACTIONS(35),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [sym_null] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(37),
    [sym_hex] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(39),
    [anon_sym_require] = ACTIONS(29),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_is_override] = ACTIONS(33),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(45),
    [sym_binary] = ACTIONS(21),
    [anon_sym_case] = ACTIONS(47),
    [anon_sym_class] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_switch] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_function] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [2] = {
    [sym_is_function] = STATE(44),
    [sym_is_method] = STATE(44),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [3] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [sym_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(69),
  },
  [4] = {
    [sym_group_expression] = STATE(46),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [anon_sym_LPAREN] = ACTIONS(77),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [sym_scope_expression] = STATE(49),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [anon_sym_package] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(81),
    [sym__space] = ACTIONS(3),
  },
  [9] = {
    [sym_is_primitive] = ACTIONS(83),
    [anon_sym_s8] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(83),
    [anon_sym_i16] = ACTIONS(83),
    [anon_sym_u32] = ACTIONS(83),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(83),
    [sym_is_interface] = ACTIONS(83),
    [anon_sym_writelimited] = ACTIONS(83),
    [anon_sym_s32] = ACTIONS(83),
    [anon_sym_f64] = ACTIONS(83),
    [anon_sym_i64] = ACTIONS(83),
    [anon_sym_f32] = ACTIONS(83),
    [anon_sym_u16] = ACTIONS(83),
    [anon_sym_system_readwrite] = ACTIONS(83),
    [sym_is_override] = ACTIONS(83),
    [anon_sym_method] = ACTIONS(83),
    [anon_sym_readonly] = ACTIONS(83),
    [anon_sym_s16] = ACTIONS(83),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_i32] = ACTIONS(83),
    [anon_sym_u64] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_protected_write] = ACTIONS(83),
    [sym__comment] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(83),
    [anon_sym_private_write] = ACTIONS(83),
  },
  [10] = {
    [sym_array] = STATE(52),
    [anon_sym_s8] = ACTIONS(85),
    [anon_sym_u8] = ACTIONS(85),
    [anon_sym_i16] = ACTIONS(85),
    [anon_sym_u32] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(85),
    [anon_sym_s32] = ACTIONS(85),
    [anon_sym_f64] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_i64] = ACTIONS(85),
    [anon_sym_f32] = ACTIONS(85),
    [anon_sym_u16] = ACTIONS(85),
    [anon_sym_s16] = ACTIONS(85),
    [anon_sym_i32] = ACTIONS(85),
    [anon_sym_u64] = ACTIONS(85),
    [sym_identifier] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_string] = STATE(55),
    [sym_character] = STATE(55),
    [sym__comma_list_assignment_or_values] = STATE(54),
    [sym_assignment_expression] = STATE(57),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(55),
    [sym__value] = STATE(55),
    [sym__literal] = STATE(55),
    [sym_group_expression] = STATE(55),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(56),
    [sym__assignment_or_value] = STATE(57),
    [sym_collection] = STATE(55),
    [sym__number] = STATE(55),
    [sym_array_expression] = STATE(33),
    [sym_float] = ACTIONS(89),
    [sym_null] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(91),
    [sym_hex] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(89),
    [sym_double] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(91),
    [sym_binary] = ACTIONS(89),
  },
  [12] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(95),
    [sym__comment] = ACTIONS(3),
  },
  [13] = {
    [sym_function_definition] = STATE(58),
    [sym_readability] = STATE(42),
    [sym_type] = STATE(43),
    [sym_is_function] = STATE(29),
    [sym_variable_definition] = STATE(58),
    [sym_access_control] = STATE(36),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_is_method] = STATE(29),
    [sym__override] = STATE(37),
    [sym_is_primitive] = ACTIONS(35),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [sym_is_override] = ACTIONS(33),
    [anon_sym_method] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [sym_is_interface] = ACTIONS(23),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym_is_overridable] = ACTIONS(33),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [14] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [sym__scope_op] = ACTIONS(105),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(110),
    [sym_identifier] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
  },
  [15] = {
    [sym_group_expression] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [sym_group_expression] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [sym_array] = STATE(68),
    [sym_pointer] = STATE(69),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [19] = {
    [sym__override] = STATE(71),
    [sym_is_function] = STATE(44),
    [sym_is_method] = STATE(44),
    [sym_is_primitive] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(127),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(127),
    [anon_sym_function] = ACTIONS(67),
  },
  [20] = {
    [sym_group_expression] = STATE(75),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(73),
    [sym_string] = STATE(75),
    [sym_character] = STATE(75),
    [sym_assignment_expression] = STATE(74),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(75),
    [sym_collection] = STATE(75),
    [sym__number] = STATE(75),
    [sym__assignment_or_value] = STATE(74),
    [sym__value] = STATE(75),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(75),
    [sym_float] = ACTIONS(129),
    [sym_null] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(131),
    [sym_hex] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(129),
    [sym_double] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(131),
    [sym_binary] = ACTIONS(129),
  },
  [21] = {
    [sym__escape_sequence] = STATE(77),
    [aux_sym_string_repeat1] = STATE(77),
    [anon_sym_BSLASHb] = ACTIONS(135),
    [anon_sym_BSLASHv] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(137),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(135),
    [anon_sym_BSLASHa] = ACTIONS(135),
    [anon_sym_BSLASHt] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_BSLASH0] = ACTIONS(135),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(135),
    [anon_sym_BSLASHf] = ACTIONS(135),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(135),
    [anon_sym_BSLASHr] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(135),
  },
  [22] = {
    [sym_group_expression] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(141),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_case] = ACTIONS(143),
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_switch] = ACTIONS(143),
    [anon_sym_method] = ACTIONS(143),
    [anon_sym_default] = ACTIONS(143),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(143),
    [anon_sym_while] = ACTIONS(143),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym_string] = STATE(86),
    [sym_character] = STATE(86),
    [sym_assignment_expression] = STATE(84),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(86),
    [sym_unary_op] = STATE(85),
    [sym__value] = STATE(86),
    [sym__literal] = STATE(86),
    [sym_group_expression] = STATE(86),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(87),
    [sym_cast_ops] = STATE(88),
    [sym_collection] = STATE(86),
    [sym__number] = STATE(86),
    [sym_cast_expression] = STATE(84),
    [sym_array_expression] = STATE(33),
    [sym_float] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(151),
    [sym_null] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [sym_oct] = ACTIONS(153),
    [sym_hex] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(149),
    [sym_double] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(155),
    [sym_integer] = ACTIONS(153),
    [sym_binary] = ACTIONS(149),
  },
  [27] = {
    [sym__escape_sequence] = STATE(89),
    [anon_sym_BSLASHb] = ACTIONS(163),
    [anon_sym_BSLASHv] = ACTIONS(163),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(163),
    [aux_sym_character_token1] = ACTIONS(165),
    [anon_sym_BSLASHf] = ACTIONS(163),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(163),
    [anon_sym_BSLASHr] = ACTIONS(163),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(163),
    [anon_sym_BSLASHn] = ACTIONS(163),
    [anon_sym_BSLASHa] = ACTIONS(163),
    [anon_sym_BSLASHt] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH0] = ACTIONS(163),
  },
  [28] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
  },
  [29] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [sym_array] = STATE(92),
    [aux_sym_type_repeat1] = STATE(91),
    [aux_sym_type_repeat2] = STATE(92),
    [sym_pointer] = STATE(91),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_identifier] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [31] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(175),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
  },
  [33] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(179),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
  },
  [34] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(105),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym_identifier] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(183),
  },
  [36] = {
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_is_method] = STATE(44),
    [sym__override] = STATE(71),
    [sym_type] = STATE(94),
    [sym_is_function] = STATE(44),
    [sym_readability] = STATE(95),
    [sym_is_primitive] = ACTIONS(185),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [sym_is_interface] = ACTIONS(187),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [sym_is_override] = ACTIONS(189),
    [anon_sym_method] = ACTIONS(15),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(63),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(189),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [37] = {
    [sym_is_function] = STATE(44),
    [sym_is_method] = STATE(44),
    [sym_is_primitive] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [38] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym_assignment_post_op] = STATE(101),
    [sym_array] = STATE(102),
    [sym_assignment_op] = STATE(103),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [40] = {
    [sym_string] = STATE(39),
    [sym_character] = STATE(39),
    [sym_use_definition] = STATE(28),
    [sym_module_definition] = STATE(28),
    [sym_class_definition] = STATE(28),
    [sym_is_function] = STATE(29),
    [sym_variable_definition] = STATE(28),
    [sym_container_definition] = STATE(28),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_end_statement] = STATE(31),
    [sym__control_flow_statement] = STATE(31),
    [sym_while_statement] = STATE(31),
    [sym_switch_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_group_expression] = STATE(32),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(34),
    [sym_collection] = STATE(39),
    [sym_access_control] = STATE(36),
    [sym_extension] = STATE(28),
    [sym_end_extension] = STATE(28),
    [sym_is_method] = STATE(29),
    [sym__override] = STATE(37),
    [sym__number] = STATE(39),
    [sym_goto_statement] = STATE(31),
    [sym_section_statement] = STATE(31),
    [sym_case_statement] = STATE(31),
    [sym_default_statement] = STATE(31),
    [sym_assignment_expression] = STATE(38),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(39),
    [sym__value] = STATE(39),
    [sym__literal] = STATE(39),
    [sym__sentence] = STATE(104),
    [sym_definition] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(104),
    [sym_enum_definition] = STATE(28),
    [sym_function_definition] = STATE(28),
    [sym_readability] = STATE(42),
    [sym_type] = STATE(43),
    [sym_declaration_definition] = STATE(28),
    [sym_statement] = STATE(41),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym_expression_statement] = STATE(31),
    [sym_array_expression] = STATE(33),
    [anon_sym_i16] = ACTIONS(5),
    [sym_oct] = ACTIONS(7),
    [anon_sym_goto] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_method] = ACTIONS(15),
    [sym_is_declare] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(19),
    [sym_float] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_i8] = ACTIONS(5),
    [sym_is_interface] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym_long] = ACTIONS(21),
    [sym_is_external] = ACTIONS(17),
    [sym_double] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_use] = ACTIONS(29),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym_is_overridable] = ACTIONS(33),
    [sym_is_primitive] = ACTIONS(35),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [sym_null] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(37),
    [sym_hex] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(39),
    [anon_sym_require] = ACTIONS(29),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_is_override] = ACTIONS(33),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(45),
    [sym_binary] = ACTIONS(21),
    [anon_sym_case] = ACTIONS(47),
    [anon_sym_class] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_switch] = ACTIONS(59),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_function] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [41] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym_type] = STATE(94),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [43] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(207),
    [sym__comment] = ACTIONS(3),
  },
  [45] = {
    [sym_string] = STATE(110),
    [sym_character] = STATE(110),
    [sym_assignment_expression] = STATE(108),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(110),
    [sym_unary_op] = STATE(109),
    [sym__value] = STATE(110),
    [sym__literal] = STATE(110),
    [sym_group_expression] = STATE(110),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(87),
    [sym_cast_ops] = STATE(88),
    [sym_collection] = STATE(110),
    [sym__number] = STATE(110),
    [sym_cast_expression] = STATE(108),
    [sym_array_expression] = STATE(33),
    [sym_float] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(151),
    [sym_null] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_DOLLAR] = ACTIONS(155),
    [sym_oct] = ACTIONS(211),
    [sym_hex] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(209),
    [sym_double] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(159),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_BANG] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(155),
    [sym_integer] = ACTIONS(211),
    [sym_binary] = ACTIONS(209),
  },
  [46] = {
    [sym_goto_statement] = STATE(31),
    [sym_section_statement] = STATE(31),
    [sym_case_statement] = STATE(31),
    [sym_default_statement] = STATE(31),
    [sym_assignment_expression] = STATE(38),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(39),
    [sym_string] = STATE(39),
    [sym_character] = STATE(39),
    [sym_end_statement] = STATE(31),
    [sym__control_flow_statement] = STATE(31),
    [sym_while_statement] = STATE(31),
    [sym_switch_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_group_expression] = STATE(32),
    [sym__value] = STATE(39),
    [sym_scope_expression] = STATE(113),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(39),
    [sym_collection] = STATE(39),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__number] = STATE(39),
    [sym_expression_statement] = STATE(31),
    [sym_statement] = STATE(114),
    [sym_array_expression] = STATE(33),
    [anon_sym_case] = ACTIONS(47),
    [sym_float] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_section] = ACTIONS(19),
    [sym_null] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(37),
    [anon_sym_goto] = ACTIONS(9),
    [sym_oct] = ACTIONS(7),
    [sym_hex] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_switch] = ACTIONS(59),
    [sym_long] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(215),
    [sym_double] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(7),
    [sym_binary] = ACTIONS(21),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
  },
  [48] = {
    [sym__enum_element] = STATE(116),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
  },
  [49] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(223),
    [sym__scope_op] = ACTIONS(225),
  },
  [50] = {
    [sym_scope_expression] = STATE(118),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
  },
  [51] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(231),
  },
  [52] = {
    [anon_sym_s8] = ACTIONS(233),
    [anon_sym_u8] = ACTIONS(233),
    [anon_sym_i16] = ACTIONS(233),
    [anon_sym_u32] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(233),
    [anon_sym_s32] = ACTIONS(233),
    [anon_sym_f64] = ACTIONS(233),
    [anon_sym_i64] = ACTIONS(233),
    [anon_sym_f32] = ACTIONS(233),
    [anon_sym_u16] = ACTIONS(233),
    [anon_sym_s16] = ACTIONS(233),
    [anon_sym_i32] = ACTIONS(233),
    [anon_sym_u64] = ACTIONS(233),
    [sym_identifier] = ACTIONS(233),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [sym__scope_op] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
  },
  [54] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(237),
  },
  [55] = {
    [sym_assignment_post_op] = STATE(101),
    [sym_array] = STATE(102),
    [sym_assignment_op] = STATE(124),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(239),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(239),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(241),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [56] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [sym__scope_op] = ACTIONS(235),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
  },
  [57] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(126),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [58] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(247),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [sym_string] = STATE(131),
    [sym_parameter_list] = STATE(130),
    [aux_sym_extension_repeat1] = STATE(131),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [60] = {
    [sym__base_type] = STATE(133),
    [sym_primitive_type] = STATE(133),
    [sym_container_types] = STATE(134),
    [sym_type] = STATE(132),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(259),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_arguments] = ACTIONS(259),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_symbol] = ACTIONS(259),
  },
  [61] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(135),
    [sym_identifier] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [62] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(265),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(267),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
  },
  [65] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [sym_identifier] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(271),
  },
  [66] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(277),
  },
  [67] = {
    [sym_array] = STATE(139),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [68] = {
    [sym_pointer] = STATE(141),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_identifier] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym_is_function] = STATE(142),
    [sym_is_method] = STATE(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [71] = {
    [sym_is_function] = STATE(142),
    [sym_is_method] = STATE(142),
    [sym_is_primitive] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [72] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
  },
  [73] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
  },
  [74] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
  },
  [75] = {
    [sym_assignment_post_op] = STATE(101),
    [sym_array] = STATE(102),
    [sym_assignment_op] = STATE(103),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(289),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [76] = {
    [anon_sym_STAR_EQ] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [anon_sym_LT_EQ] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
    [anon_sym_EQ_EQ] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_CARET_EQ] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_DASH_EQ] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_SLASH_EQ] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(293),
    [sym__access_op] = ACTIONS(291),
    [anon_sym_COLON_EQ] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_AMP_AMP] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_GT_GT_EQ] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_PLUS_PLUS] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_PERCENT_EQ] = ACTIONS(291),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_LT_LT] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_GT_EQ] = ACTIONS(291),
    [anon_sym_PIPE_PIPE] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(291),
    [anon_sym_LT_LT_EQ] = ACTIONS(291),
    [anon_sym_PIPE_EQ] = ACTIONS(291),
    [anon_sym_DASH_DASH] = ACTIONS(293),
    [anon_sym_PLUS_EQ] = ACTIONS(291),
    [anon_sym_AMP_EQ] = ACTIONS(291),
  },
  [77] = {
    [sym__escape_sequence] = STATE(147),
    [aux_sym_string_repeat1] = STATE(147),
    [anon_sym_BSLASHb] = ACTIONS(295),
    [anon_sym_BSLASHv] = ACTIONS(295),
    [aux_sym_string_token1] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(295),
    [anon_sym_BSLASHa] = ACTIONS(295),
    [anon_sym_BSLASHt] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_BSLASH0] = ACTIONS(295),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(295),
    [anon_sym_BSLASHf] = ACTIONS(295),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [anon_sym_BSLASHr] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(295),
  },
  [78] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(301),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(303),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(305),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [sym_float] = ACTIONS(307),
    [sym_null] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(309),
    [sym_hex] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [sym_long] = ACTIONS(307),
    [sym_double] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [sym_identifier] = ACTIONS(309),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(309),
    [sym_binary] = ACTIONS(307),
  },
  [82] = {
    [sym_type] = STATE(148),
    [sym__base_type] = STATE(149),
    [sym_primitive_type] = STATE(149),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(311),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_DOLLAR] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(99),
    [anon_sym_CARET] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(101),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(101),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_AMP_AMP] = ACTIONS(99),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [anon_sym_LT_LT] = ACTIONS(101),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
  },
  [84] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [sym_group_expression] = STATE(154),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(154),
    [sym_character] = STATE(154),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(154),
    [sym_collection] = STATE(154),
    [sym__number] = STATE(154),
    [sym__value] = STATE(154),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(154),
    [sym_float] = ACTIONS(317),
    [sym_null] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(319),
    [sym_hex] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(317),
    [sym_double] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(319),
    [sym_binary] = ACTIONS(317),
  },
  [86] = {
    [sym_assignment_post_op] = STATE(101),
    [sym_array] = STATE(102),
    [sym_binary_op] = STATE(158),
    [sym_assignment_op] = STATE(159),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(323),
    [sym__access_op] = ACTIONS(327),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [87] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(177),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_CARET] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(179),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_AMP_AMP] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(179),
    [anon_sym_PERCENT] = ACTIONS(179),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
  },
  [88] = {
    [sym_group_expression] = STATE(160),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_SQUOTE] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym_parameter_list] = STATE(163),
    [sym_return_list] = STATE(164),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(335),
  },
  [91] = {
    [sym_array] = STATE(166),
    [aux_sym_type_repeat1] = STATE(165),
    [aux_sym_type_repeat2] = STATE(166),
    [sym_pointer] = STATE(165),
    [anon_sym_STAR] = ACTIONS(119),
    [sym_identifier] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [92] = {
    [sym_array] = STATE(167),
    [aux_sym_type_repeat2] = STATE(167),
    [sym_identifier] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [93] = {
    [sym__override] = STATE(168),
    [sym_is_function] = STATE(142),
    [sym_is_method] = STATE(142),
    [sym_is_primitive] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(339),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(339),
    [anon_sym_function] = ACTIONS(67),
  },
  [94] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [sym_type] = STATE(170),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [sym_float] = ACTIONS(343),
    [sym_null] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(345),
    [sym_hex] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [sym_long] = ACTIONS(343),
    [sym_double] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(345),
    [sym_binary] = ACTIONS(343),
  },
  [97] = {
    [sym_group_expression] = STATE(171),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(113),
    [sym_string] = STATE(171),
    [sym_character] = STATE(171),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(171),
    [sym_collection] = STATE(171),
    [sym__number] = STATE(171),
    [sym__value] = STATE(171),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(171),
    [sym_float] = ACTIONS(347),
    [sym_null] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(349),
    [sym_hex] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(347),
    [sym_double] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(349),
    [sym_binary] = ACTIONS(347),
  },
  [98] = {
    [anon_sym_RPAREN] = ACTIONS(351),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(351),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(351),
  },
  [99] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(355),
  },
  [100] = {
    [sym_group_expression] = STATE(176),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(176),
    [sym_character] = STATE(176),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(176),
    [sym_collection] = STATE(176),
    [sym__number] = STATE(176),
    [sym__value] = STATE(176),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(176),
    [sym__comma_list_values] = STATE(177),
    [sym_float] = ACTIONS(357),
    [sym_null] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(359),
    [sym_hex] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(357),
    [sym_double] = ACTIONS(357),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(359),
    [sym_binary] = ACTIONS(357),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(363),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
  },
  [102] = {
    [anon_sym_STAR_EQ] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym_DOLLAR] = ACTIONS(365),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [anon_sym_CARET] = ACTIONS(367),
    [anon_sym_CARET_EQ] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_DASH_EQ] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(367),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(367),
    [sym__access_op] = ACTIONS(365),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_AMP_AMP] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_GT_GT_EQ] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_PLUS_PLUS] = ACTIONS(367),
    [anon_sym_AMP] = ACTIONS(367),
    [anon_sym_PERCENT_EQ] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_LT_LT] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [anon_sym_PIPE_PIPE] = ACTIONS(365),
    [anon_sym_LPAREN] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(365),
    [anon_sym_LT_LT_EQ] = ACTIONS(365),
    [anon_sym_PIPE_EQ] = ACTIONS(365),
    [anon_sym_DASH_DASH] = ACTIONS(367),
    [anon_sym_PLUS_EQ] = ACTIONS(365),
    [anon_sym_AMP_EQ] = ACTIONS(365),
  },
  [103] = {
    [sym_group_expression] = STATE(180),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(179),
    [sym_string] = STATE(180),
    [sym_character] = STATE(180),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(180),
    [sym_collection] = STATE(180),
    [sym__number] = STATE(180),
    [sym__value] = STATE(180),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(180),
    [sym_float] = ACTIONS(369),
    [sym_null] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(371),
    [sym_hex] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(369),
    [sym_double] = ACTIONS(369),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(371),
    [sym_binary] = ACTIONS(369),
  },
  [104] = {
    [sym_string] = STATE(39),
    [sym_character] = STATE(39),
    [sym_use_definition] = STATE(28),
    [sym_module_definition] = STATE(28),
    [sym_class_definition] = STATE(28),
    [sym_is_function] = STATE(29),
    [sym_variable_definition] = STATE(28),
    [sym_container_definition] = STATE(28),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_end_statement] = STATE(31),
    [sym__control_flow_statement] = STATE(31),
    [sym_while_statement] = STATE(31),
    [sym_switch_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_group_expression] = STATE(32),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(34),
    [sym_collection] = STATE(39),
    [sym_access_control] = STATE(36),
    [sym_extension] = STATE(28),
    [sym_end_extension] = STATE(28),
    [sym_is_method] = STATE(29),
    [sym__override] = STATE(37),
    [sym__number] = STATE(39),
    [sym_goto_statement] = STATE(31),
    [sym_section_statement] = STATE(31),
    [sym_case_statement] = STATE(31),
    [sym_default_statement] = STATE(31),
    [sym_assignment_expression] = STATE(38),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(39),
    [sym__value] = STATE(39),
    [sym__literal] = STATE(39),
    [sym__sentence] = STATE(104),
    [sym_definition] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(104),
    [sym_enum_definition] = STATE(28),
    [sym_function_definition] = STATE(28),
    [sym_readability] = STATE(42),
    [sym_type] = STATE(43),
    [sym_declaration_definition] = STATE(28),
    [sym_statement] = STATE(41),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym_expression_statement] = STATE(31),
    [sym_array_expression] = STATE(33),
    [anon_sym_i16] = ACTIONS(375),
    [sym_oct] = ACTIONS(378),
    [anon_sym_goto] = ACTIONS(381),
    [anon_sym_module] = ACTIONS(384),
    [anon_sym_protected] = ACTIONS(387),
    [anon_sym_method] = ACTIONS(390),
    [sym_is_declare] = ACTIONS(393),
    [anon_sym_i32] = ACTIONS(375),
    [sym_integer] = ACTIONS(378),
    [anon_sym_section] = ACTIONS(396),
    [sym_float] = ACTIONS(399),
    [anon_sym_private] = ACTIONS(387),
    [anon_sym_i8] = ACTIONS(375),
    [sym_is_interface] = ACTIONS(402),
    [anon_sym_f64] = ACTIONS(375),
    [anon_sym_i64] = ACTIONS(375),
    [anon_sym_u16] = ACTIONS(375),
    [sym_long] = ACTIONS(399),
    [sym_is_external] = ACTIONS(393),
    [sym_double] = ACTIONS(399),
    [anon_sym_end] = ACTIONS(405),
    [anon_sym_LPAREN] = ACTIONS(408),
    [anon_sym_use] = ACTIONS(411),
    [anon_sym_protected_write] = ACTIONS(414),
    [sym_is_overridable] = ACTIONS(417),
    [sym_is_primitive] = ACTIONS(420),
    [anon_sym_s8] = ACTIONS(375),
    [anon_sym_u8] = ACTIONS(375),
    [sym_null] = ACTIONS(378),
    [anon_sym_u32] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(423),
    [sym_hex] = ACTIONS(399),
    [anon_sym_enum] = ACTIONS(426),
    [anon_sym_require] = ACTIONS(411),
    [anon_sym_system_readwrite] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(429),
    [sym_is_override] = ACTIONS(417),
    [anon_sym_readonly] = ACTIONS(414),
    [anon_sym_s16] = ACTIONS(375),
    [sym_identifier] = ACTIONS(432),
    [anon_sym_u64] = ACTIONS(375),
    [anon_sym_while] = ACTIONS(435),
    [sym_binary] = ACTIONS(399),
    [anon_sym_case] = ACTIONS(438),
    [anon_sym_class] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(414),
    [anon_sym_s32] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(444),
    [anon_sym_f32] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(447),
    [anon_sym_return] = ACTIONS(450),
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_switch] = ACTIONS(455),
    [anon_sym_default] = ACTIONS(458),
    [anon_sym_function] = ACTIONS(461),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(414),
  },
  [105] = {
    [anon_sym_i16] = ACTIONS(464),
    [sym_oct] = ACTIONS(464),
    [anon_sym_goto] = ACTIONS(464),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_protected] = ACTIONS(464),
    [anon_sym_method] = ACTIONS(464),
    [sym_is_declare] = ACTIONS(464),
    [anon_sym_i32] = ACTIONS(464),
    [sym_integer] = ACTIONS(464),
    [anon_sym_section] = ACTIONS(464),
    [sym_float] = ACTIONS(466),
    [anon_sym_private] = ACTIONS(464),
    [anon_sym_i8] = ACTIONS(464),
    [sym_is_interface] = ACTIONS(464),
    [anon_sym_f64] = ACTIONS(464),
    [anon_sym_i64] = ACTIONS(464),
    [anon_sym_u16] = ACTIONS(464),
    [sym_long] = ACTIONS(466),
    [sym_is_external] = ACTIONS(464),
    [sym_double] = ACTIONS(466),
    [anon_sym_end] = ACTIONS(464),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_use] = ACTIONS(464),
    [anon_sym_protected_write] = ACTIONS(464),
    [sym_is_overridable] = ACTIONS(464),
    [sym_is_primitive] = ACTIONS(464),
    [anon_sym_s8] = ACTIONS(464),
    [anon_sym_u8] = ACTIONS(464),
    [sym_null] = ACTIONS(464),
    [anon_sym_u32] = ACTIONS(464),
    [anon_sym_if] = ACTIONS(464),
    [sym_hex] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(464),
    [anon_sym_require] = ACTIONS(464),
    [anon_sym_system_readwrite] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_is_override] = ACTIONS(464),
    [anon_sym_readonly] = ACTIONS(464),
    [anon_sym_s16] = ACTIONS(464),
    [sym_identifier] = ACTIONS(464),
    [anon_sym_u64] = ACTIONS(464),
    [anon_sym_while] = ACTIONS(464),
    [sym_binary] = ACTIONS(466),
    [anon_sym_case] = ACTIONS(464),
    [anon_sym_class] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(464),
    [anon_sym_s32] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(466),
    [anon_sym_f32] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(466),
    [anon_sym_return] = ACTIONS(464),
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_switch] = ACTIONS(464),
    [anon_sym_default] = ACTIONS(464),
    [anon_sym_function] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(464),
  },
  [106] = {
    [sym_static_assignment] = STATE(182),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
  },
  [107] = {
    [sym_parameter_list] = STATE(183),
    [sym_return_list] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(472),
  },
  [108] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym__comment] = ACTIONS(3),
  },
  [109] = {
    [sym_group_expression] = STATE(186),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(186),
    [sym_character] = STATE(186),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(186),
    [sym_collection] = STATE(186),
    [sym__number] = STATE(186),
    [sym__value] = STATE(186),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(186),
    [sym_float] = ACTIONS(476),
    [sym_null] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(478),
    [sym_hex] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(476),
    [sym_double] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(478),
    [sym_binary] = ACTIONS(476),
  },
  [110] = {
    [sym_assignment_post_op] = STATE(101),
    [sym_array] = STATE(102),
    [sym_binary_op] = STATE(187),
    [sym_assignment_op] = STATE(159),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(325),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(323),
    [sym__access_op] = ACTIONS(327),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [anon_sym_PIPE_PIPE] = ACTIONS(325),
    [anon_sym_BANG_EQ] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [111] = {
    [anon_sym_case] = ACTIONS(480),
    [anon_sym_class] = ACTIONS(480),
    [anon_sym_switch] = ACTIONS(480),
    [anon_sym_method] = ACTIONS(480),
    [anon_sym_default] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(480),
    [anon_sym_if] = ACTIONS(480),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(480),
    [anon_sym_while] = ACTIONS(480),
  },
  [112] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(482),
    [anon_sym_PLUS_PLUS] = ACTIONS(101),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_CARET_EQ] = ACTIONS(99),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_PIPE_EQ] = ACTIONS(99),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
  },
  [113] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(482),
    [anon_sym_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_PERCENT_EQ] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_CARET_EQ] = ACTIONS(177),
    [anon_sym_DASH_EQ] = ACTIONS(177),
    [anon_sym_SLASH_EQ] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_PIPE_EQ] = ACTIONS(177),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_COLON_EQ] = ACTIONS(177),
    [anon_sym_PLUS_EQ] = ACTIONS(177),
  },
  [114] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(484),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym_static_assignment] = STATE(190),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
  },
  [116] = {
    [aux_sym_enum_definition_repeat1] = STATE(193),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(492),
  },
  [117] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(194),
    [sym_identifier] = ACTIONS(494),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [118] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(496),
    [sym__scope_op] = ACTIONS(225),
  },
  [119] = {
    [anon_sym_s8] = ACTIONS(498),
    [anon_sym_u8] = ACTIONS(498),
    [anon_sym_i16] = ACTIONS(498),
    [anon_sym_u32] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(498),
    [anon_sym_DOT] = ACTIONS(500),
    [sym__scope_op] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_s32] = ACTIONS(498),
    [anon_sym_f64] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_i64] = ACTIONS(498),
    [anon_sym_f32] = ACTIONS(498),
    [anon_sym_u16] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_s16] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_i32] = ACTIONS(498),
    [anon_sym_u64] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(500),
    [sym__access_op] = ACTIONS(500),
  },
  [120] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(502),
  },
  [121] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(196),
    [sym_identifier] = ACTIONS(504),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [122] = {
    [anon_sym_STAR_EQ] = ACTIONS(506),
    [anon_sym_PIPE] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_DOLLAR] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(506),
    [anon_sym_CARET] = ACTIONS(508),
    [anon_sym_CARET_EQ] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_DASH_EQ] = ACTIONS(506),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_SLASH_EQ] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [sym__access_op] = ACTIONS(506),
    [anon_sym_COLON_EQ] = ACTIONS(506),
    [anon_sym_LT] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(506),
    [anon_sym_GT_GT_EQ] = ACTIONS(506),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_PLUS_PLUS] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(508),
    [anon_sym_PERCENT_EQ] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(506),
    [anon_sym_PIPE_PIPE] = ACTIONS(506),
    [anon_sym_LPAREN] = ACTIONS(506),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(506),
    [anon_sym_LT_LT_EQ] = ACTIONS(506),
    [anon_sym_PIPE_EQ] = ACTIONS(506),
    [anon_sym_DASH_DASH] = ACTIONS(508),
    [anon_sym_PLUS_EQ] = ACTIONS(506),
    [anon_sym_AMP_EQ] = ACTIONS(506),
  },
  [123] = {
    [sym_group_expression] = STATE(197),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(56),
    [sym_string] = STATE(197),
    [sym_character] = STATE(197),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(197),
    [sym_collection] = STATE(197),
    [sym__number] = STATE(197),
    [sym__value] = STATE(197),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(197),
    [sym_float] = ACTIONS(510),
    [sym_null] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(512),
    [sym_hex] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(510),
    [sym_double] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(512),
    [sym_binary] = ACTIONS(510),
  },
  [124] = {
    [sym_group_expression] = STATE(200),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(199),
    [sym_string] = STATE(200),
    [sym_character] = STATE(200),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(200),
    [sym_collection] = STATE(200),
    [sym__number] = STATE(200),
    [sym__value] = STATE(200),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(200),
    [sym_float] = ACTIONS(514),
    [sym_null] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(516),
    [sym_hex] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(514),
    [sym_double] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(518),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(516),
    [sym_binary] = ACTIONS(514),
  },
  [125] = {
    [sym_group_expression] = STATE(55),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(56),
    [sym_string] = STATE(55),
    [sym_character] = STATE(55),
    [sym_assignment_expression] = STATE(201),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(55),
    [sym_collection] = STATE(55),
    [sym__number] = STATE(55),
    [sym__assignment_or_value] = STATE(201),
    [sym__value] = STATE(55),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(55),
    [sym_float] = ACTIONS(89),
    [sym_null] = ACTIONS(91),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(91),
    [sym_hex] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(89),
    [sym_double] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(91),
    [sym_binary] = ACTIONS(89),
  },
  [126] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(520),
  },
  [127] = {
    [sym_readability] = STATE(206),
    [sym_type] = STATE(207),
    [sym_variable_definition] = STATE(208),
    [sym_container_definition] = STATE(208),
    [sym_access_control] = STATE(209),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym__comma_list_variables] = STATE(210),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(522),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(522),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [128] = {
    [sym_string] = STATE(211),
    [sym_identifier] = ACTIONS(528),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [129] = {
    [sym__escape_sequence] = STATE(213),
    [aux_sym_string_repeat1] = STATE(213),
    [anon_sym_BSLASHb] = ACTIONS(530),
    [anon_sym_BSLASHv] = ACTIONS(530),
    [aux_sym_string_token1] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(530),
    [anon_sym_BSLASHa] = ACTIONS(530),
    [anon_sym_BSLASHt] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [anon_sym_BSLASH0] = ACTIONS(530),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(530),
    [anon_sym_BSLASHf] = ACTIONS(530),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(530),
    [anon_sym_BSLASHr] = ACTIONS(530),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(530),
  },
  [130] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(536),
    [sym__comment] = ACTIONS(3),
  },
  [131] = {
    [sym_string] = STATE(215),
    [sym_parameter_list] = STATE(214),
    [aux_sym_extension_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym_identifier] = ACTIONS(538),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [132] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(540),
    [anon_sym_DOT] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(540),
  },
  [133] = {
    [sym_array] = STATE(217),
    [aux_sym_type_repeat1] = STATE(216),
    [aux_sym_type_repeat2] = STATE(217),
    [sym_pointer] = STATE(216),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [134] = {
    [sym_static_assignment] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(550),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [136] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(546),
    [sym__scope_op] = ACTIONS(546),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [137] = {
    [anon_sym_STAR] = ACTIONS(498),
    [sym_identifier] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(500),
  },
  [138] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(553),
  },
  [139] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
  },
  [140] = {
    [sym_array] = STATE(220),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [141] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
  },
  [142] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(559),
    [sym__comment] = ACTIONS(3),
  },
  [143] = {
    [sym_is_function] = STATE(223),
    [sym_is_method] = STATE(223),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [144] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(224),
    [sym_identifier] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [145] = {
    [sym_group_expression] = STATE(225),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(73),
    [sym_string] = STATE(225),
    [sym_character] = STATE(225),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(225),
    [sym_collection] = STATE(225),
    [sym__number] = STATE(225),
    [sym__value] = STATE(225),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(225),
    [sym_float] = ACTIONS(563),
    [sym_null] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(565),
    [sym_hex] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(563),
    [sym_double] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(565),
    [sym_binary] = ACTIONS(563),
  },
  [146] = {
    [anon_sym_STAR_EQ] = ACTIONS(567),
    [anon_sym_PIPE] = ACTIONS(569),
    [anon_sym_DASH] = ACTIONS(569),
    [anon_sym_DOLLAR] = ACTIONS(567),
    [anon_sym_LT_EQ] = ACTIONS(567),
    [anon_sym_GT] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(567),
    [anon_sym_COMMA] = ACTIONS(567),
    [anon_sym_EQ_EQ] = ACTIONS(567),
    [anon_sym_CARET] = ACTIONS(569),
    [anon_sym_CARET_EQ] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(569),
    [anon_sym_DASH_EQ] = ACTIONS(567),
    [anon_sym_GT_GT] = ACTIONS(569),
    [anon_sym_SLASH_EQ] = ACTIONS(567),
    [anon_sym_STAR] = ACTIONS(569),
    [sym__access_op] = ACTIONS(567),
    [anon_sym_COLON_EQ] = ACTIONS(567),
    [anon_sym_LT] = ACTIONS(569),
    [anon_sym_AMP_AMP] = ACTIONS(567),
    [anon_sym_PLUS] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_GT_GT_EQ] = ACTIONS(567),
    [anon_sym_RBRACE] = ACTIONS(567),
    [anon_sym_PLUS_PLUS] = ACTIONS(569),
    [anon_sym_AMP] = ACTIONS(569),
    [anon_sym_PERCENT_EQ] = ACTIONS(567),
    [anon_sym_PERCENT] = ACTIONS(569),
    [anon_sym_LT_LT] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_GT_EQ] = ACTIONS(567),
    [anon_sym_PIPE_PIPE] = ACTIONS(567),
    [anon_sym_LPAREN] = ACTIONS(567),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(567),
    [anon_sym_LT_LT_EQ] = ACTIONS(567),
    [anon_sym_PIPE_EQ] = ACTIONS(567),
    [anon_sym_DASH_DASH] = ACTIONS(569),
    [anon_sym_PLUS_EQ] = ACTIONS(567),
    [anon_sym_AMP_EQ] = ACTIONS(567),
  },
  [147] = {
    [sym__escape_sequence] = STATE(147),
    [aux_sym_string_repeat1] = STATE(147),
    [anon_sym_BSLASHb] = ACTIONS(571),
    [anon_sym_BSLASHv] = ACTIONS(571),
    [aux_sym_string_token1] = ACTIONS(574),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(571),
    [anon_sym_BSLASHa] = ACTIONS(571),
    [anon_sym_BSLASHt] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_BSLASH0] = ACTIONS(571),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(571),
    [anon_sym_BSLASHf] = ACTIONS(571),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(571),
    [anon_sym_BSLASHr] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(571),
  },
  [148] = {
    [anon_sym_LPAREN] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [149] = {
    [sym_array] = STATE(227),
    [aux_sym_type_repeat1] = STATE(226),
    [aux_sym_type_repeat2] = STATE(227),
    [sym_pointer] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [150] = {
    [sym_array] = STATE(229),
    [sym_scope_expression] = STATE(228),
    [sym_identifier] = ACTIONS(581),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(329),
  },
  [151] = {
    [anon_sym_STAR_EQ] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_LT_EQ] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_EQ_EQ] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_CARET_EQ] = ACTIONS(583),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_DASH_EQ] = ACTIONS(583),
    [anon_sym_GT_GT] = ACTIONS(585),
    [anon_sym_SLASH_EQ] = ACTIONS(583),
    [anon_sym_STAR] = ACTIONS(585),
    [sym__access_op] = ACTIONS(583),
    [anon_sym_COLON_EQ] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_PLUS] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_GT_GT_EQ] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_PLUS_PLUS] = ACTIONS(585),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_PERCENT_EQ] = ACTIONS(583),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_LT_LT] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_GT_EQ] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(583),
    [anon_sym_LT_LT_EQ] = ACTIONS(583),
    [anon_sym_PIPE_EQ] = ACTIONS(583),
    [anon_sym_DASH_DASH] = ACTIONS(585),
    [anon_sym_PLUS_EQ] = ACTIONS(583),
    [anon_sym_AMP_EQ] = ACTIONS(583),
  },
  [152] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(587),
  },
  [153] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(587),
  },
  [154] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(591),
  },
  [155] = {
    [sym_float] = ACTIONS(593),
    [sym_null] = ACTIONS(595),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(595),
    [sym_hex] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_LBRACE] = ACTIONS(593),
    [sym_long] = ACTIONS(593),
    [sym_double] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(595),
    [sym_identifier] = ACTIONS(595),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(595),
    [sym_binary] = ACTIONS(593),
  },
  [156] = {
    [sym_group_expression] = STATE(233),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(87),
    [sym_string] = STATE(233),
    [sym_character] = STATE(233),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(233),
    [sym_collection] = STATE(233),
    [sym__number] = STATE(233),
    [sym__value] = STATE(233),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(233),
    [sym_float] = ACTIONS(597),
    [sym_null] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(599),
    [sym_hex] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(597),
    [sym_double] = ACTIONS(597),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(599),
    [sym_binary] = ACTIONS(597),
  },
  [157] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(603),
  },
  [158] = {
    [sym_group_expression] = STATE(236),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(236),
    [sym_character] = STATE(236),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(236),
    [sym_collection] = STATE(236),
    [sym__number] = STATE(236),
    [sym__value] = STATE(236),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(236),
    [sym_float] = ACTIONS(605),
    [sym_null] = ACTIONS(607),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(607),
    [sym_hex] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(605),
    [sym_double] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(607),
    [sym_binary] = ACTIONS(605),
  },
  [159] = {
    [sym_group_expression] = STATE(237),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(237),
    [sym_character] = STATE(237),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(237),
    [sym_collection] = STATE(237),
    [sym__number] = STATE(237),
    [sym__value] = STATE(237),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(237),
    [sym_float] = ACTIONS(609),
    [sym_null] = ACTIONS(611),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(611),
    [sym_hex] = ACTIONS(609),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(609),
    [sym_double] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(611),
    [sym_binary] = ACTIONS(609),
  },
  [160] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(613),
    [sym__comment] = ACTIONS(3),
  },
  [161] = {
    [anon_sym_STAR_EQ] = ACTIONS(615),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(615),
    [anon_sym_LT_EQ] = ACTIONS(615),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(615),
    [anon_sym_EQ_EQ] = ACTIONS(615),
    [anon_sym_CARET] = ACTIONS(617),
    [anon_sym_CARET_EQ] = ACTIONS(615),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_DASH_EQ] = ACTIONS(615),
    [anon_sym_GT_GT] = ACTIONS(617),
    [anon_sym_SLASH_EQ] = ACTIONS(615),
    [anon_sym_STAR] = ACTIONS(617),
    [sym__access_op] = ACTIONS(615),
    [anon_sym_COLON_EQ] = ACTIONS(615),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_AMP_AMP] = ACTIONS(615),
    [anon_sym_PLUS] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_GT_GT_EQ] = ACTIONS(615),
    [anon_sym_RBRACE] = ACTIONS(615),
    [anon_sym_PLUS_PLUS] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
    [anon_sym_PERCENT_EQ] = ACTIONS(615),
    [anon_sym_PERCENT] = ACTIONS(617),
    [anon_sym_LT_LT] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(615),
    [anon_sym_GT_EQ] = ACTIONS(615),
    [anon_sym_PIPE_PIPE] = ACTIONS(615),
    [anon_sym_LPAREN] = ACTIONS(615),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(615),
    [anon_sym_LT_LT_EQ] = ACTIONS(615),
    [anon_sym_PIPE_EQ] = ACTIONS(615),
    [anon_sym_DASH_DASH] = ACTIONS(617),
    [anon_sym_PLUS_EQ] = ACTIONS(615),
    [anon_sym_AMP_EQ] = ACTIONS(615),
  },
  [162] = {
    [sym__base_type] = STATE(238),
    [sym_primitive_type] = STATE(238),
    [sym_type] = STATE(239),
    [sym__comma_list_types] = STATE(240),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(621),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [sym_return_list] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(472),
  },
  [164] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(472),
    [sym__comment] = ACTIONS(3),
  },
  [165] = {
    [aux_sym_type_repeat1] = STATE(165),
    [sym_pointer] = STATE(165),
    [anon_sym_STAR] = ACTIONS(623),
    [sym_identifier] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(628),
  },
  [166] = {
    [sym_array] = STATE(167),
    [aux_sym_type_repeat2] = STATE(167),
    [sym_identifier] = ACTIONS(630),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(123),
  },
  [167] = {
    [sym_array] = STATE(167),
    [aux_sym_type_repeat2] = STATE(167),
    [sym_identifier] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(634),
  },
  [168] = {
    [sym_is_function] = STATE(223),
    [sym_is_method] = STATE(223),
    [sym_is_primitive] = ACTIONS(637),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [169] = {
    [sym_static_assignment] = STATE(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(639),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(641),
    [sym__comment] = ACTIONS(3),
  },
  [171] = {
    [sym_array] = STATE(102),
    [anon_sym_STAR_EQ] = ACTIONS(643),
    [anon_sym_AMP_EQ] = ACTIONS(643),
    [anon_sym_DASH_DASH] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(643),
    [anon_sym_PLUS_PLUS] = ACTIONS(645),
    [anon_sym_PERCENT_EQ] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(643),
    [anon_sym_DASH_EQ] = ACTIONS(643),
    [anon_sym_SLASH_EQ] = ACTIONS(643),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(643),
    [anon_sym_PIPE_EQ] = ACTIONS(643),
    [sym__access_op] = ACTIONS(653),
    [anon_sym_COLON_EQ] = ACTIONS(643),
    [anon_sym_PLUS_EQ] = ACTIONS(643),
  },
  [172] = {
    [anon_sym_STAR_EQ] = ACTIONS(500),
    [anon_sym_AMP_EQ] = ACTIONS(500),
    [anon_sym_DASH_DASH] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_GT_GT_EQ] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(498),
    [sym__scope_op] = ACTIONS(500),
    [anon_sym_PERCENT_EQ] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_CARET_EQ] = ACTIONS(500),
    [anon_sym_DASH_EQ] = ACTIONS(500),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(500),
    [anon_sym_PIPE_EQ] = ACTIONS(500),
    [sym__access_op] = ACTIONS(500),
    [anon_sym_COLON_EQ] = ACTIONS(500),
    [anon_sym_PLUS_EQ] = ACTIONS(500),
  },
  [173] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(656),
  },
  [174] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(658),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
  },
  [176] = {
    [sym_array] = STATE(102),
    [aux_sym__comma_list_values_repeat1] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(664),
  },
  [177] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(666),
    [sym__comment] = ACTIONS(3),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(668),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(668),
  },
  [180] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [181] = {
    [sym_group_expression] = STATE(252),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(179),
    [sym_string] = STATE(252),
    [sym_character] = STATE(252),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(252),
    [sym_collection] = STATE(252),
    [sym__number] = STATE(252),
    [sym__value] = STATE(252),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(252),
    [sym_float] = ACTIONS(674),
    [sym_null] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(676),
    [sym_hex] = ACTIONS(674),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(674),
    [sym_double] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(676),
    [sym_binary] = ACTIONS(674),
  },
  [182] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
  },
  [183] = {
    [sym_return_list] = STATE(253),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(678),
  },
  [184] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(678),
    [sym__comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_case] = ACTIONS(585),
    [sym_integer] = ACTIONS(585),
    [sym_float] = ACTIONS(583),
    [sym_binary] = ACTIONS(583),
    [sym_null] = ACTIONS(585),
    [anon_sym_DOT] = ACTIONS(583),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(585),
    [anon_sym_goto] = ACTIONS(585),
    [sym_oct] = ACTIONS(585),
    [sym_hex] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_return] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_switch] = ACTIONS(585),
    [sym_long] = ACTIONS(583),
    [anon_sym_default] = ACTIONS(585),
    [anon_sym_end] = ACTIONS(585),
    [sym_double] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(585),
    [sym_identifier] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(585),
    [anon_sym_section] = ACTIONS(585),
  },
  [186] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(680),
  },
  [187] = {
    [sym_group_expression] = STATE(255),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(255),
    [sym_character] = STATE(255),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(255),
    [sym_collection] = STATE(255),
    [sym__number] = STATE(255),
    [sym__value] = STATE(255),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(255),
    [sym_float] = ACTIONS(682),
    [sym_null] = ACTIONS(684),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(684),
    [sym_hex] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(682),
    [sym_double] = ACTIONS(682),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(684),
    [sym_binary] = ACTIONS(682),
  },
  [188] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(256),
    [sym_identifier] = ACTIONS(686),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [189] = {
    [sym_group_expression] = STATE(257),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(257),
    [sym_character] = STATE(257),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(257),
    [sym_collection] = STATE(257),
    [sym__number] = STATE(257),
    [sym__value] = STATE(257),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(257),
    [sym_float] = ACTIONS(688),
    [sym_null] = ACTIONS(690),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(690),
    [sym_hex] = ACTIONS(688),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(688),
    [sym_double] = ACTIONS(688),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(690),
    [sym_binary] = ACTIONS(688),
  },
  [190] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_COMMA] = ACTIONS(692),
  },
  [191] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(694),
    [sym__comment] = ACTIONS(3),
  },
  [192] = {
    [sym__enum_element] = STATE(259),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
  },
  [193] = {
    [aux_sym_enum_definition_repeat1] = STATE(261),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_COMMA] = ACTIONS(492),
  },
  [194] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(546),
    [sym__scope_op] = ACTIONS(698),
  },
  [195] = {
    [anon_sym_s8] = ACTIONS(701),
    [anon_sym_u8] = ACTIONS(701),
    [anon_sym_i16] = ACTIONS(701),
    [anon_sym_u32] = ACTIONS(701),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(701),
    [anon_sym_DOT] = ACTIONS(703),
    [sym__scope_op] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_s32] = ACTIONS(701),
    [anon_sym_f64] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_i64] = ACTIONS(701),
    [anon_sym_f32] = ACTIONS(701),
    [anon_sym_u16] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_s16] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(703),
    [anon_sym_i32] = ACTIONS(701),
    [anon_sym_u64] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(703),
    [sym__access_op] = ACTIONS(703),
  },
  [196] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(705),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [197] = {
    [sym_array] = STATE(102),
    [anon_sym_STAR_EQ] = ACTIONS(643),
    [anon_sym_LT_LT_EQ] = ACTIONS(643),
    [anon_sym_DASH_DASH] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
    [anon_sym_PLUS_PLUS] = ACTIONS(645),
    [anon_sym_PERCENT_EQ] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_COMMA] = ACTIONS(643),
    [anon_sym_CARET_EQ] = ACTIONS(643),
    [anon_sym_DASH_EQ] = ACTIONS(643),
    [anon_sym_SLASH_EQ] = ACTIONS(643),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(708),
    [anon_sym_PIPE_EQ] = ACTIONS(643),
    [anon_sym_COLON_EQ] = ACTIONS(643),
    [anon_sym_PLUS_EQ] = ACTIONS(643),
    [anon_sym_AMP_EQ] = ACTIONS(643),
  },
  [198] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
  },
  [199] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(711),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
  },
  [200] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(713),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(672),
    [anon_sym_RBRACE] = ACTIONS(672),
  },
  [201] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(715),
  },
  [202] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_RBRACE] = ACTIONS(715),
  },
  [203] = {
    [anon_sym_s8] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(83),
    [anon_sym_i16] = ACTIONS(83),
    [anon_sym_u32] = ACTIONS(83),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(83),
    [anon_sym_writelimited] = ACTIONS(83),
    [anon_sym_s32] = ACTIONS(83),
    [anon_sym_f64] = ACTIONS(83),
    [anon_sym_i64] = ACTIONS(83),
    [anon_sym_f32] = ACTIONS(83),
    [anon_sym_u16] = ACTIONS(83),
    [anon_sym_system_readwrite] = ACTIONS(83),
    [anon_sym_readonly] = ACTIONS(83),
    [anon_sym_s16] = ACTIONS(83),
    [anon_sym_i32] = ACTIONS(83),
    [anon_sym_u64] = ACTIONS(83),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_protected_write] = ACTIONS(83),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(83),
  },
  [204] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(720),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(720),
  },
  [205] = {
    [anon_sym_STAR] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(722),
    [anon_sym_COLON] = ACTIONS(724),
  },
  [206] = {
    [sym_type] = STATE(265),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(726),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(268),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(728),
    [anon_sym_COMMA] = ACTIONS(730),
  },
  [209] = {
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_readability] = STATE(269),
    [sym_type] = STATE(265),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [210] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(732),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_LPAREN] = ACTIONS(734),
    [sym_identifier] = ACTIONS(736),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(734),
    [anon_sym_DOT] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(734),
  },
  [212] = {
    [anon_sym_LPAREN] = ACTIONS(291),
    [sym_identifier] = ACTIONS(293),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [213] = {
    [sym__escape_sequence] = STATE(147),
    [aux_sym_string_repeat1] = STATE(147),
    [anon_sym_BSLASHb] = ACTIONS(295),
    [anon_sym_BSLASHv] = ACTIONS(295),
    [aux_sym_string_token1] = ACTIONS(297),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(295),
    [anon_sym_BSLASHa] = ACTIONS(295),
    [anon_sym_BSLASHt] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(738),
    [anon_sym_BSLASH0] = ACTIONS(295),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(295),
    [anon_sym_BSLASHf] = ACTIONS(295),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(295),
    [anon_sym_BSLASHr] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(295),
  },
  [214] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(740),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [sym_string] = STATE(215),
    [aux_sym_extension_repeat1] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(734),
    [sym_identifier] = ACTIONS(742),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(745),
    [anon_sym_DOT] = ACTIONS(734),
    [anon_sym_DQUOTE] = ACTIONS(748),
  },
  [216] = {
    [sym_array] = STATE(273),
    [aux_sym_type_repeat1] = STATE(272),
    [aux_sym_type_repeat2] = STATE(273),
    [sym_pointer] = STATE(272),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(751),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [217] = {
    [sym_array] = STATE(274),
    [aux_sym_type_repeat2] = STATE(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(751),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [218] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
  },
  [219] = {
    [anon_sym_STAR] = ACTIONS(701),
    [sym_identifier] = ACTIONS(701),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(703),
  },
  [220] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(755),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [sym_array] = STATE(275),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [222] = {
    [sym_parameter_list] = STATE(276),
    [sym_return_list] = STATE(253),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(678),
  },
  [223] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(757),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(546),
    [sym__scope_op] = ACTIONS(759),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [225] = {
    [sym_array] = STATE(102),
    [anon_sym_STAR_EQ] = ACTIONS(643),
    [anon_sym_LT_LT_EQ] = ACTIONS(643),
    [anon_sym_DASH_DASH] = ACTIONS(645),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(643),
    [anon_sym_GT_GT_EQ] = ACTIONS(643),
    [anon_sym_PLUS_PLUS] = ACTIONS(645),
    [anon_sym_PERCENT_EQ] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(647),
    [anon_sym_CARET_EQ] = ACTIONS(643),
    [anon_sym_DASH_EQ] = ACTIONS(643),
    [anon_sym_SLASH_EQ] = ACTIONS(643),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(762),
    [anon_sym_PIPE_EQ] = ACTIONS(643),
    [anon_sym_COLON_EQ] = ACTIONS(643),
    [anon_sym_PLUS_EQ] = ACTIONS(643),
    [anon_sym_AMP_EQ] = ACTIONS(643),
  },
  [226] = {
    [sym_array] = STATE(279),
    [aux_sym_type_repeat1] = STATE(278),
    [aux_sym_type_repeat2] = STATE(279),
    [sym_pointer] = STATE(278),
    [anon_sym_LPAREN] = ACTIONS(751),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [227] = {
    [sym_array] = STATE(280),
    [aux_sym_type_repeat2] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(751),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [228] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(765),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_DOLLAR] = ACTIONS(546),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_GT_GT] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(548),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_LT] = ACTIONS(548),
    [anon_sym_AMP_AMP] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_AMP] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(548),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_LT_LT] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [anon_sym_PIPE_PIPE] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [anon_sym_BANG_EQ] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(548),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [229] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(546),
    [anon_sym_DASH] = ACTIONS(548),
    [anon_sym_DOLLAR] = ACTIONS(546),
    [anon_sym_LT_EQ] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_EQ_EQ] = ACTIONS(546),
    [anon_sym_CARET] = ACTIONS(548),
    [anon_sym_SLASH] = ACTIONS(548),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_GT_GT] = ACTIONS(548),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(548),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_LT] = ACTIONS(548),
    [anon_sym_AMP_AMP] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(548),
    [anon_sym_AMP] = ACTIONS(548),
    [anon_sym_PERCENT] = ACTIONS(548),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_LT_LT] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_GT_EQ] = ACTIONS(546),
    [anon_sym_PIPE_PIPE] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [anon_sym_BANG_EQ] = ACTIONS(546),
    [anon_sym_PIPE] = ACTIONS(548),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [230] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(281),
    [sym_identifier] = ACTIONS(768),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [231] = {
    [sym_group_expression] = STATE(282),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(153),
    [sym_string] = STATE(282),
    [sym_character] = STATE(282),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(282),
    [sym_collection] = STATE(282),
    [sym__number] = STATE(282),
    [sym__value] = STATE(282),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(282),
    [sym_float] = ACTIONS(770),
    [sym_null] = ACTIONS(772),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(772),
    [sym_hex] = ACTIONS(770),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(770),
    [sym_double] = ACTIONS(770),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(772),
    [sym_binary] = ACTIONS(770),
  },
  [232] = {
    [anon_sym_STAR_EQ] = ACTIONS(774),
    [anon_sym_PIPE] = ACTIONS(776),
    [anon_sym_DASH] = ACTIONS(776),
    [anon_sym_DOLLAR] = ACTIONS(774),
    [anon_sym_LT_EQ] = ACTIONS(774),
    [anon_sym_GT] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(774),
    [anon_sym_EQ_EQ] = ACTIONS(774),
    [anon_sym_CARET] = ACTIONS(776),
    [anon_sym_CARET_EQ] = ACTIONS(774),
    [anon_sym_SLASH] = ACTIONS(776),
    [anon_sym_DASH_EQ] = ACTIONS(774),
    [anon_sym_GT_GT] = ACTIONS(776),
    [anon_sym_SLASH_EQ] = ACTIONS(774),
    [anon_sym_STAR] = ACTIONS(776),
    [sym__access_op] = ACTIONS(774),
    [anon_sym_COLON_EQ] = ACTIONS(774),
    [anon_sym_LT] = ACTIONS(776),
    [anon_sym_AMP_AMP] = ACTIONS(774),
    [anon_sym_PLUS] = ACTIONS(776),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(774),
    [anon_sym_GT_GT_EQ] = ACTIONS(774),
    [anon_sym_RBRACE] = ACTIONS(774),
    [anon_sym_PLUS_PLUS] = ACTIONS(776),
    [anon_sym_AMP] = ACTIONS(776),
    [anon_sym_PERCENT_EQ] = ACTIONS(774),
    [anon_sym_PERCENT] = ACTIONS(776),
    [anon_sym_LT_LT] = ACTIONS(776),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_GT_EQ] = ACTIONS(774),
    [anon_sym_PIPE_PIPE] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(774),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(774),
    [anon_sym_LT_LT_EQ] = ACTIONS(774),
    [anon_sym_PIPE_EQ] = ACTIONS(774),
    [anon_sym_DASH_DASH] = ACTIONS(776),
    [anon_sym_PLUS_EQ] = ACTIONS(774),
    [anon_sym_AMP_EQ] = ACTIONS(774),
  },
  [233] = {
    [sym_array] = STATE(102),
    [anon_sym_STAR_EQ] = ACTIONS(643),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(645),
    [anon_sym_DOLLAR] = ACTIONS(643),
    [anon_sym_LT_EQ] = ACTIONS(643),
    [anon_sym_GT] = ACTIONS(645),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_EQ_EQ] = ACTIONS(643),
    [anon_sym_CARET] = ACTIONS(645),
    [anon_sym_SLASH] = ACTIONS(645),
    [anon_sym_CARET_EQ] = ACTIONS(643),
    [anon_sym_DASH_EQ] = ACTIONS(643),
    [anon_sym_GT_GT] = ACTIONS(645),
    [anon_sym_SLASH_EQ] = ACTIONS(643),
    [anon_sym_STAR] = ACTIONS(645),
    [sym__access_op] = ACTIONS(778),
    [anon_sym_COLON_EQ] = ACTIONS(643),
    [anon_sym_LT] = ACTIONS(645),
    [anon_sym_AMP_AMP] = ACTIONS(643),
    [anon_sym_PLUS] = ACTIONS(645),
    [anon_sym_AMP] = ACTIONS(645),
    [anon_sym_PERCENT] = ACTIONS(645),
    [anon_sym_GT_GT_EQ] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(645),
    [anon_sym_LT_LT] = ACTIONS(645),
    [anon_sym_PERCENT_EQ] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_GT_EQ] = ACTIONS(643),
    [anon_sym_PIPE_PIPE] = ACTIONS(643),
    [anon_sym_LPAREN] = ACTIONS(650),
    [anon_sym_BANG_EQ] = ACTIONS(643),
    [anon_sym_PIPE] = ACTIONS(645),
    [anon_sym_LT_LT_EQ] = ACTIONS(643),
    [anon_sym_PIPE_EQ] = ACTIONS(643),
    [anon_sym_DASH_DASH] = ACTIONS(645),
    [anon_sym_PLUS_EQ] = ACTIONS(643),
    [anon_sym_AMP_EQ] = ACTIONS(643),
  },
  [234] = {
    [anon_sym_STAR_EQ] = ACTIONS(500),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(498),
    [anon_sym_DOLLAR] = ACTIONS(500),
    [anon_sym_LT_EQ] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_EQ_EQ] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(498),
    [anon_sym_SLASH] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(500),
    [anon_sym_DASH_EQ] = ACTIONS(500),
    [anon_sym_GT_GT] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(498),
    [sym__access_op] = ACTIONS(500),
    [anon_sym_COLON_EQ] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(498),
    [anon_sym_AMP_AMP] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(498),
    [anon_sym_AMP] = ACTIONS(498),
    [anon_sym_PERCENT] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(500),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(498),
    [anon_sym_LT_LT] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [anon_sym_GT_EQ] = ACTIONS(500),
    [anon_sym_PIPE_PIPE] = ACTIONS(500),
    [anon_sym_LPAREN] = ACTIONS(500),
    [anon_sym_BANG_EQ] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_LT_LT_EQ] = ACTIONS(500),
    [anon_sym_PIPE_EQ] = ACTIONS(500),
    [anon_sym_DASH_DASH] = ACTIONS(498),
    [anon_sym_PLUS_EQ] = ACTIONS(500),
    [anon_sym_AMP_EQ] = ACTIONS(500),
  },
  [235] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(784),
  },
  [236] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(786),
  },
  [237] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [238] = {
    [sym_array] = STATE(286),
    [aux_sym_type_repeat1] = STATE(285),
    [aux_sym_type_repeat2] = STATE(286),
    [sym_pointer] = STATE(285),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [239] = {
    [aux_sym__comma_list_types_repeat1] = STATE(288),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(790),
  },
  [240] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(792),
    [sym__comment] = ACTIONS(3),
  },
  [241] = {
    [sym_is_function] = STATE(289),
    [sym_is_method] = STATE(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [242] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(794),
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_COMMA] = ACTIONS(794),
  },
  [243] = {
    [sym_static_assignment] = STATE(290),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(468),
    [anon_sym_DOT] = ACTIONS(794),
    [sym__space] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_STAR_EQ] = ACTIONS(703),
    [anon_sym_AMP_EQ] = ACTIONS(703),
    [anon_sym_DASH_DASH] = ACTIONS(701),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(703),
    [anon_sym_GT_GT_EQ] = ACTIONS(703),
    [anon_sym_RBRACE] = ACTIONS(703),
    [anon_sym_PLUS_PLUS] = ACTIONS(701),
    [sym__scope_op] = ACTIONS(703),
    [anon_sym_PERCENT_EQ] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_CARET_EQ] = ACTIONS(703),
    [anon_sym_DASH_EQ] = ACTIONS(703),
    [anon_sym_SLASH_EQ] = ACTIONS(703),
    [anon_sym_LPAREN] = ACTIONS(703),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(701),
    [anon_sym_LT_LT_EQ] = ACTIONS(703),
    [anon_sym_PIPE_EQ] = ACTIONS(703),
    [sym__access_op] = ACTIONS(703),
    [anon_sym_COLON_EQ] = ACTIONS(703),
    [anon_sym_PLUS_EQ] = ACTIONS(703),
  },
  [245] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(291),
    [sym_identifier] = ACTIONS(796),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [246] = {
    [sym_group_expression] = STATE(292),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(292),
    [sym_character] = STATE(292),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(292),
    [sym_collection] = STATE(292),
    [sym__number] = STATE(292),
    [sym__value] = STATE(292),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(292),
    [sym_float] = ACTIONS(798),
    [sym_null] = ACTIONS(800),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(800),
    [sym_hex] = ACTIONS(798),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(798),
    [sym_double] = ACTIONS(798),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(800),
    [sym_binary] = ACTIONS(798),
  },
  [247] = {
    [sym_group_expression] = STATE(293),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(293),
    [sym_character] = STATE(293),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(293),
    [sym_collection] = STATE(293),
    [sym__number] = STATE(293),
    [sym__value] = STATE(293),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(293),
    [sym_float] = ACTIONS(802),
    [sym_null] = ACTIONS(804),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(804),
    [sym_hex] = ACTIONS(802),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(802),
    [sym_double] = ACTIONS(802),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(804),
    [sym_binary] = ACTIONS(802),
  },
  [248] = {
    [aux_sym__comma_list_values_repeat1] = STATE(294),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(806),
    [anon_sym_COMMA] = ACTIONS(664),
  },
  [249] = {
    [anon_sym_STAR_EQ] = ACTIONS(808),
    [anon_sym_PIPE] = ACTIONS(810),
    [anon_sym_DASH] = ACTIONS(810),
    [anon_sym_DOLLAR] = ACTIONS(808),
    [anon_sym_LT_EQ] = ACTIONS(808),
    [anon_sym_GT] = ACTIONS(810),
    [anon_sym_RPAREN] = ACTIONS(808),
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_EQ_EQ] = ACTIONS(808),
    [anon_sym_CARET] = ACTIONS(810),
    [anon_sym_CARET_EQ] = ACTIONS(808),
    [anon_sym_SLASH] = ACTIONS(810),
    [anon_sym_DASH_EQ] = ACTIONS(808),
    [anon_sym_GT_GT] = ACTIONS(810),
    [anon_sym_SLASH_EQ] = ACTIONS(808),
    [anon_sym_STAR] = ACTIONS(810),
    [sym__access_op] = ACTIONS(808),
    [anon_sym_COLON_EQ] = ACTIONS(808),
    [anon_sym_LT] = ACTIONS(810),
    [anon_sym_AMP_AMP] = ACTIONS(808),
    [anon_sym_PLUS] = ACTIONS(810),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(808),
    [anon_sym_GT_GT_EQ] = ACTIONS(808),
    [anon_sym_RBRACE] = ACTIONS(808),
    [anon_sym_PLUS_PLUS] = ACTIONS(810),
    [anon_sym_AMP] = ACTIONS(810),
    [anon_sym_PERCENT_EQ] = ACTIONS(808),
    [anon_sym_PERCENT] = ACTIONS(810),
    [anon_sym_LT_LT] = ACTIONS(810),
    [anon_sym_LBRACK] = ACTIONS(808),
    [anon_sym_GT_EQ] = ACTIONS(808),
    [anon_sym_PIPE_PIPE] = ACTIONS(808),
    [anon_sym_LPAREN] = ACTIONS(808),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(808),
    [anon_sym_LT_LT_EQ] = ACTIONS(808),
    [anon_sym_PIPE_EQ] = ACTIONS(808),
    [anon_sym_DASH_DASH] = ACTIONS(810),
    [anon_sym_PLUS_EQ] = ACTIONS(808),
    [anon_sym_AMP_EQ] = ACTIONS(808),
  },
  [250] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(295),
    [sym_identifier] = ACTIONS(812),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [251] = {
    [sym_group_expression] = STATE(296),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(179),
    [sym_string] = STATE(296),
    [sym_character] = STATE(296),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(296),
    [sym_collection] = STATE(296),
    [sym__number] = STATE(296),
    [sym__value] = STATE(296),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(296),
    [sym_float] = ACTIONS(814),
    [sym_null] = ACTIONS(816),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(816),
    [sym_hex] = ACTIONS(814),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(814),
    [sym_double] = ACTIONS(814),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(816),
    [sym_binary] = ACTIONS(814),
  },
  [252] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [253] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(820),
    [sym__comment] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_case] = ACTIONS(776),
    [sym_integer] = ACTIONS(776),
    [sym_float] = ACTIONS(774),
    [sym_binary] = ACTIONS(774),
    [sym_null] = ACTIONS(776),
    [anon_sym_DOT] = ACTIONS(774),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(776),
    [anon_sym_goto] = ACTIONS(776),
    [sym_oct] = ACTIONS(776),
    [sym_hex] = ACTIONS(774),
    [anon_sym_DQUOTE] = ACTIONS(774),
    [anon_sym_SQUOTE] = ACTIONS(774),
    [anon_sym_return] = ACTIONS(776),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_switch] = ACTIONS(776),
    [sym_long] = ACTIONS(774),
    [anon_sym_default] = ACTIONS(776),
    [anon_sym_end] = ACTIONS(776),
    [sym_double] = ACTIONS(774),
    [anon_sym_LPAREN] = ACTIONS(776),
    [sym_identifier] = ACTIONS(776),
    [sym__comment] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(776),
    [anon_sym_section] = ACTIONS(776),
  },
  [255] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(822),
  },
  [256] = {
    [anon_sym_STAR_EQ] = ACTIONS(546),
    [anon_sym_LT_LT_EQ] = ACTIONS(546),
    [anon_sym_DASH_DASH] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(824),
    [anon_sym_GT_GT_EQ] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(548),
    [anon_sym_PERCENT_EQ] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_CARET_EQ] = ACTIONS(546),
    [anon_sym_DASH_EQ] = ACTIONS(546),
    [anon_sym_SLASH_EQ] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_PIPE_EQ] = ACTIONS(546),
    [anon_sym_COLON_EQ] = ACTIONS(546),
    [anon_sym_PLUS_EQ] = ACTIONS(546),
    [anon_sym_AMP_EQ] = ACTIONS(546),
  },
  [257] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(818),
    [anon_sym_COMMA] = ACTIONS(818),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [258] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(827),
    [sym__comment] = ACTIONS(3),
  },
  [259] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_COMMA] = ACTIONS(829),
  },
  [260] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(831),
    [sym__comment] = ACTIONS(3),
  },
  [261] = {
    [aux_sym_enum_definition_repeat1] = STATE(261),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_COMMA] = ACTIONS(833),
  },
  [262] = {
    [sym_array] = STATE(136),
    [sym_scope_expression] = STATE(299),
    [sym_identifier] = ACTIONS(836),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [263] = {
    [sym_group_expression] = STATE(300),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(199),
    [sym_string] = STATE(300),
    [sym_character] = STATE(300),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(300),
    [sym_collection] = STATE(300),
    [sym__number] = STATE(300),
    [sym__value] = STATE(300),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(300),
    [sym_float] = ACTIONS(838),
    [sym_null] = ACTIONS(840),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(840),
    [sym_hex] = ACTIONS(838),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(838),
    [sym_double] = ACTIONS(838),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(518),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(840),
    [sym_binary] = ACTIONS(838),
  },
  [264] = {
    [sym__base_type] = STATE(301),
    [sym_primitive_type] = STATE(301),
    [sym_container_types] = STATE(302),
    [sym_type] = STATE(132),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_string] = ACTIONS(259),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_arguments] = ACTIONS(259),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(842),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_symbol] = ACTIONS(259),
  },
  [265] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(844),
    [sym__comment] = ACTIONS(3),
  },
  [266] = {
    [sym_static_assignment] = STATE(182),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
  },
  [267] = {
    [sym_access_control] = STATE(209),
    [sym__base_type] = STATE(30),
    [sym_readability] = STATE(206),
    [sym_primitive_type] = STATE(30),
    [sym_type] = STATE(207),
    [sym_container_definition] = STATE(304),
    [sym_variable_definition] = STATE(304),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(522),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(522),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [268] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(305),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(846),
    [anon_sym_COMMA] = ACTIONS(730),
  },
  [269] = {
    [sym_type] = STATE(306),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [270] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(848),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(848),
  },
  [271] = {
    [anon_sym_LPAREN] = ACTIONS(567),
    [sym_identifier] = ACTIONS(569),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(567),
    [anon_sym_DOT] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
  },
  [272] = {
    [aux_sym_type_repeat1] = STATE(272),
    [sym_pointer] = STATE(272),
    [anon_sym_STAR] = ACTIONS(623),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(628),
    [anon_sym_DOT] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
  },
  [273] = {
    [sym_array] = STATE(274),
    [aux_sym_type_repeat2] = STATE(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(850),
    [anon_sym_DOT] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [274] = {
    [sym_array] = STATE(274),
    [aux_sym_type_repeat2] = STATE(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(852),
    [anon_sym_DOT] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(854),
    [sym__space] = ACTIONS(3),
  },
  [275] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(857),
    [sym__comment] = ACTIONS(3),
  },
  [276] = {
    [sym_return_list] = STATE(307),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(820),
  },
  [277] = {
    [sym_parameter_list] = STATE(308),
    [sym_return_list] = STATE(307),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(820),
  },
  [278] = {
    [aux_sym_type_repeat1] = STATE(278),
    [sym_pointer] = STATE(278),
    [anon_sym_LPAREN] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(623),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(628),
  },
  [279] = {
    [sym_array] = STATE(280),
    [aux_sym_type_repeat2] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(850),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [280] = {
    [sym_array] = STATE(280),
    [aux_sym_type_repeat2] = STATE(280),
    [anon_sym_LPAREN] = ACTIONS(852),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(854),
  },
  [281] = {
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym__scope_op] = ACTIONS(859),
  },
  [282] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(862),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(865),
  },
  [283] = {
    [anon_sym_STAR_EQ] = ACTIONS(703),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(703),
    [anon_sym_DASH] = ACTIONS(701),
    [anon_sym_DOLLAR] = ACTIONS(703),
    [anon_sym_LT_EQ] = ACTIONS(703),
    [anon_sym_GT] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_EQ_EQ] = ACTIONS(703),
    [anon_sym_CARET] = ACTIONS(701),
    [anon_sym_SLASH] = ACTIONS(701),
    [anon_sym_CARET_EQ] = ACTIONS(703),
    [anon_sym_DASH_EQ] = ACTIONS(703),
    [anon_sym_GT_GT] = ACTIONS(701),
    [anon_sym_SLASH_EQ] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(701),
    [sym__access_op] = ACTIONS(703),
    [anon_sym_COLON_EQ] = ACTIONS(703),
    [anon_sym_LT] = ACTIONS(701),
    [anon_sym_AMP_AMP] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(701),
    [anon_sym_AMP] = ACTIONS(701),
    [anon_sym_PERCENT] = ACTIONS(701),
    [anon_sym_GT_GT_EQ] = ACTIONS(703),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(701),
    [anon_sym_LT_LT] = ACTIONS(701),
    [anon_sym_PERCENT_EQ] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_GT_EQ] = ACTIONS(703),
    [anon_sym_PIPE_PIPE] = ACTIONS(703),
    [anon_sym_LPAREN] = ACTIONS(703),
    [anon_sym_BANG_EQ] = ACTIONS(703),
    [anon_sym_PIPE] = ACTIONS(701),
    [anon_sym_LT_LT_EQ] = ACTIONS(703),
    [anon_sym_PIPE_EQ] = ACTIONS(703),
    [anon_sym_DASH_DASH] = ACTIONS(701),
    [anon_sym_PLUS_EQ] = ACTIONS(703),
    [anon_sym_AMP_EQ] = ACTIONS(703),
  },
  [284] = {
    [anon_sym_STAR_EQ] = ACTIONS(868),
    [anon_sym_PIPE] = ACTIONS(870),
    [anon_sym_DASH] = ACTIONS(870),
    [anon_sym_DOLLAR] = ACTIONS(868),
    [anon_sym_LT_EQ] = ACTIONS(868),
    [anon_sym_GT] = ACTIONS(870),
    [anon_sym_RPAREN] = ACTIONS(868),
    [anon_sym_COMMA] = ACTIONS(868),
    [anon_sym_EQ_EQ] = ACTIONS(868),
    [anon_sym_CARET] = ACTIONS(870),
    [anon_sym_CARET_EQ] = ACTIONS(868),
    [anon_sym_SLASH] = ACTIONS(870),
    [anon_sym_DASH_EQ] = ACTIONS(868),
    [anon_sym_GT_GT] = ACTIONS(870),
    [anon_sym_SLASH_EQ] = ACTIONS(868),
    [anon_sym_STAR] = ACTIONS(870),
    [sym__access_op] = ACTIONS(868),
    [anon_sym_COLON_EQ] = ACTIONS(868),
    [anon_sym_LT] = ACTIONS(870),
    [anon_sym_AMP_AMP] = ACTIONS(868),
    [anon_sym_PLUS] = ACTIONS(870),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(868),
    [anon_sym_GT_GT_EQ] = ACTIONS(868),
    [anon_sym_RBRACE] = ACTIONS(868),
    [anon_sym_PLUS_PLUS] = ACTIONS(870),
    [anon_sym_AMP] = ACTIONS(870),
    [anon_sym_PERCENT_EQ] = ACTIONS(868),
    [anon_sym_PERCENT] = ACTIONS(870),
    [anon_sym_LT_LT] = ACTIONS(870),
    [anon_sym_LBRACK] = ACTIONS(868),
    [anon_sym_GT_EQ] = ACTIONS(868),
    [anon_sym_PIPE_PIPE] = ACTIONS(868),
    [anon_sym_LPAREN] = ACTIONS(868),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(868),
    [anon_sym_LT_LT_EQ] = ACTIONS(868),
    [anon_sym_PIPE_EQ] = ACTIONS(868),
    [anon_sym_DASH_DASH] = ACTIONS(870),
    [anon_sym_PLUS_EQ] = ACTIONS(868),
    [anon_sym_AMP_EQ] = ACTIONS(868),
  },
  [285] = {
    [sym_array] = STATE(310),
    [aux_sym_type_repeat1] = STATE(309),
    [aux_sym_type_repeat2] = STATE(310),
    [sym_pointer] = STATE(309),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [286] = {
    [sym_array] = STATE(311),
    [aux_sym_type_repeat2] = STATE(311),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [287] = {
    [sym_type] = STATE(312),
    [sym__base_type] = STATE(238),
    [sym_primitive_type] = STATE(238),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(621),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [288] = {
    [aux_sym__comma_list_types_repeat1] = STATE(313),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(790),
  },
  [289] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(874),
    [sym__comment] = ACTIONS(3),
  },
  [290] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(876),
    [anon_sym_RPAREN] = ACTIONS(876),
    [anon_sym_COMMA] = ACTIONS(876),
  },
  [291] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(878),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
  },
  [292] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(643),
    [anon_sym_COMMA] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(865),
  },
  [293] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(884),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [294] = {
    [aux_sym__comma_list_values_repeat1] = STATE(294),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(884),
    [anon_sym_COMMA] = ACTIONS(886),
  },
  [295] = {
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym__scope_op] = ACTIONS(889),
  },
  [296] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(892),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(643),
    [anon_sym_LBRACK] = ACTIONS(865),
  },
  [297] = {
    [anon_sym_case] = ACTIONS(870),
    [sym_integer] = ACTIONS(870),
    [sym_float] = ACTIONS(868),
    [sym_binary] = ACTIONS(868),
    [sym_null] = ACTIONS(870),
    [anon_sym_DOT] = ACTIONS(868),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(870),
    [anon_sym_goto] = ACTIONS(870),
    [sym_oct] = ACTIONS(870),
    [sym_hex] = ACTIONS(868),
    [anon_sym_DQUOTE] = ACTIONS(868),
    [anon_sym_SQUOTE] = ACTIONS(868),
    [anon_sym_return] = ACTIONS(870),
    [anon_sym_LBRACE] = ACTIONS(868),
    [anon_sym_switch] = ACTIONS(870),
    [sym_long] = ACTIONS(868),
    [anon_sym_default] = ACTIONS(870),
    [anon_sym_end] = ACTIONS(870),
    [sym_double] = ACTIONS(868),
    [anon_sym_LPAREN] = ACTIONS(870),
    [sym_identifier] = ACTIONS(870),
    [sym__comment] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(870),
    [anon_sym_section] = ACTIONS(870),
  },
  [298] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(895),
    [sym__comment] = ACTIONS(3),
  },
  [299] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(897),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_LPAREN] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
  },
  [300] = {
    [sym_array] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(865),
    [anon_sym_COMMA] = ACTIONS(643),
    [anon_sym_RBRACE] = ACTIONS(643),
  },
  [301] = {
    [sym_array] = STATE(316),
    [aux_sym_type_repeat1] = STATE(315),
    [aux_sym_type_repeat2] = STATE(316),
    [sym_pointer] = STATE(315),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [302] = {
    [sym_static_assignment] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_COMMA] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
  },
  [303] = {
    [sym_static_assignment] = STATE(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
    [sym__space] = ACTIONS(3),
  },
  [304] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(903),
  },
  [305] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(305),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(903),
    [anon_sym_COMMA] = ACTIONS(905),
  },
  [306] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(908),
    [sym__comment] = ACTIONS(3),
  },
  [307] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
    [sym__comment] = ACTIONS(3),
  },
  [308] = {
    [sym_return_list] = STATE(318),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
  },
  [309] = {
    [aux_sym_type_repeat1] = STATE(309),
    [sym_pointer] = STATE(309),
    [anon_sym_STAR] = ACTIONS(623),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(628),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
  },
  [310] = {
    [sym_array] = STATE(311),
    [aux_sym_type_repeat2] = STATE(311),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(850),
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [311] = {
    [sym_array] = STATE(311),
    [aux_sym_type_repeat2] = STATE(311),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(852),
    [anon_sym_COMMA] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(854),
  },
  [312] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(912),
  },
  [313] = {
    [aux_sym__comma_list_types_repeat1] = STATE(313),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(914),
  },
  [314] = {
    [sym_parameter_list] = STATE(319),
    [sym_return_list] = STATE(318),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(910),
  },
  [315] = {
    [sym_array] = STATE(321),
    [aux_sym_type_repeat1] = STATE(320),
    [aux_sym_type_repeat2] = STATE(321),
    [sym_pointer] = STATE(320),
    [anon_sym_STAR] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [316] = {
    [sym_array] = STATE(322),
    [aux_sym_type_repeat2] = STATE(322),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(751),
    [anon_sym_COMMA] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [317] = {
    [sym_static_assignment] = STATE(290),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_COMMA] = ACTIONS(794),
    [sym__space] = ACTIONS(3),
  },
  [318] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(917),
    [sym__comment] = ACTIONS(3),
  },
  [319] = {
    [sym_return_list] = STATE(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(333),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(917),
  },
  [320] = {
    [aux_sym_type_repeat1] = STATE(320),
    [sym_pointer] = STATE(320),
    [anon_sym_STAR] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_COMMA] = ACTIONS(628),
    [anon_sym_LBRACK] = ACTIONS(628),
  },
  [321] = {
    [sym_array] = STATE(322),
    [aux_sym_type_repeat2] = STATE(322),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(850),
    [anon_sym_RPAREN] = ACTIONS(850),
    [anon_sym_COMMA] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [322] = {
    [sym_array] = STATE(322),
    [aux_sym_type_repeat2] = STATE(322),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(852),
    [anon_sym_RPAREN] = ACTIONS(852),
    [anon_sym_COMMA] = ACTIONS(852),
    [anon_sym_LBRACK] = ACTIONS(854),
  },
  [323] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(919),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = false}, SHIFT(39),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(7),
  [13] = {.count = 1, .reusable = false}, SHIFT(9),
  [15] = {.count = 1, .reusable = false}, SHIFT(12),
  [17] = {.count = 1, .reusable = false}, SHIFT(13),
  [19] = {.count = 1, .reusable = false}, SHIFT(16),
  [21] = {.count = 1, .reusable = true}, SHIFT(39),
  [23] = {.count = 1, .reusable = false}, SHIFT(19),
  [25] = {.count = 1, .reusable = false}, SHIFT(24),
  [27] = {.count = 1, .reusable = false}, SHIFT(26),
  [29] = {.count = 1, .reusable = false}, SHIFT(8),
  [31] = {.count = 1, .reusable = false}, SHIFT(10),
  [33] = {.count = 1, .reusable = false}, SHIFT(37),
  [35] = {.count = 1, .reusable = false}, SHIFT(2),
  [37] = {.count = 1, .reusable = false}, SHIFT(4),
  [39] = {.count = 1, .reusable = false}, SHIFT(6),
  [41] = {.count = 1, .reusable = true}, SHIFT(11),
  [43] = {.count = 1, .reusable = false}, SHIFT(14),
  [45] = {.count = 1, .reusable = false}, SHIFT(15),
  [47] = {.count = 1, .reusable = false}, SHIFT(17),
  [49] = {.count = 1, .reusable = false}, SHIFT(18),
  [51] = {.count = 1, .reusable = true}, SHIFT(21),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = false}, SHIFT(20),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [59] = {.count = 1, .reusable = false}, SHIFT(22),
  [61] = {.count = 1, .reusable = false}, SHIFT(23),
  [63] = {.count = 1, .reusable = false}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(12),
  [67] = {.count = 1, .reusable = true}, SHIFT(25),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(45),
  [75] = {.count = 1, .reusable = false}, SHIFT(47),
  [77] = {.count = 1, .reusable = true}, SHIFT(48),
  [79] = {.count = 1, .reusable = false}, SHIFT(49),
  [81] = {.count = 1, .reusable = true}, SHIFT(50),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(51),
  [89] = {.count = 1, .reusable = true}, SHIFT(55),
  [91] = {.count = 1, .reusable = false}, SHIFT(55),
  [93] = {.count = 1, .reusable = false}, SHIFT(53),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(30),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, SHIFT(61),
  [107] = {.count = 2, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), REDUCE(sym__value, 1),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [112] = {.count = 2, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), SHIFT(59),
  [115] = {.count = 1, .reusable = true}, SHIFT(26),
  [117] = {.count = 1, .reusable = false}, SHIFT(63),
  [119] = {.count = 1, .reusable = false}, SHIFT(65),
  [121] = {.count = 1, .reusable = false}, SHIFT(67),
  [123] = {.count = 1, .reusable = true}, SHIFT(66),
  [125] = {.count = 1, .reusable = true}, SHIFT(70),
  [127] = {.count = 1, .reusable = true}, SHIFT(71),
  [129] = {.count = 1, .reusable = true}, SHIFT(75),
  [131] = {.count = 1, .reusable = false}, SHIFT(75),
  [133] = {.count = 1, .reusable = false}, SHIFT(72),
  [135] = {.count = 1, .reusable = true}, SHIFT(77),
  [137] = {.count = 1, .reusable = false}, SHIFT(77),
  [139] = {.count = 1, .reusable = true}, SHIFT(76),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [143] = {.count = 1, .reusable = false}, SHIFT(79),
  [145] = {.count = 1, .reusable = false}, SHIFT(80),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [149] = {.count = 1, .reusable = true}, SHIFT(86),
  [151] = {.count = 1, .reusable = false}, SHIFT(81),
  [153] = {.count = 1, .reusable = false}, SHIFT(86),
  [155] = {.count = 1, .reusable = false}, SHIFT(82),
  [157] = {.count = 1, .reusable = true}, SHIFT(82),
  [159] = {.count = 1, .reusable = false}, SHIFT(83),
  [161] = {.count = 1, .reusable = true}, SHIFT(81),
  [163] = {.count = 1, .reusable = true}, SHIFT(89),
  [165] = {.count = 1, .reusable = false}, SHIFT(89),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [169] = {.count = 1, .reusable = false}, SHIFT(90),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_binding_expression, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_binding_expression, 1),
  [181] = {.count = 1, .reusable = false}, SHIFT(59),
  [183] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [185] = {.count = 1, .reusable = false}, SHIFT(70),
  [187] = {.count = 1, .reusable = false}, SHIFT(93),
  [189] = {.count = 1, .reusable = false}, SHIFT(71),
  [191] = {.count = 1, .reusable = true}, SHIFT(96),
  [193] = {.count = 1, .reusable = false}, SHIFT(98),
  [195] = {.count = 1, .reusable = true}, SHIFT(99),
  [197] = {.count = 1, .reusable = true}, SHIFT(100),
  [199] = {.count = 1, .reusable = true}, SHIFT(97),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(105),
  [205] = {.count = 1, .reusable = false}, SHIFT(106),
  [207] = {.count = 1, .reusable = false}, SHIFT(107),
  [209] = {.count = 1, .reusable = true}, SHIFT(110),
  [211] = {.count = 1, .reusable = false}, SHIFT(110),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(111),
  [217] = {.count = 1, .reusable = false}, SHIFT(112),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [221] = {.count = 1, .reusable = false}, SHIFT(115),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(117),
  [227] = {.count = 1, .reusable = false}, SHIFT(118),
  [229] = {.count = 1, .reusable = true}, SHIFT(119),
  [231] = {.count = 1, .reusable = true}, SHIFT(120),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(121),
  [237] = {.count = 1, .reusable = true}, SHIFT(122),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_value, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(123),
  [243] = {.count = 1, .reusable = true}, SHIFT(125),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(127),
  [251] = {.count = 1, .reusable = false}, SHIFT(131),
  [253] = {.count = 1, .reusable = true}, SHIFT(128),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 2, .dynamic_precedence = 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(129),
  [259] = {.count = 1, .reusable = false}, SHIFT(132),
  [261] = {.count = 1, .reusable = false}, SHIFT(133),
  [263] = {.count = 1, .reusable = false}, SHIFT(135),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [275] = {.count = 1, .reusable = true}, SHIFT(137),
  [277] = {.count = 1, .reusable = true}, SHIFT(138),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 2),
  [281] = {.count = 1, .reusable = false}, SHIFT(140),
  [283] = {.count = 1, .reusable = true}, SHIFT(143),
  [285] = {.count = 1, .reusable = true}, SHIFT(144),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(145),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(147),
  [297] = {.count = 1, .reusable = false}, SHIFT(147),
  [299] = {.count = 1, .reusable = true}, SHIFT(146),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_end_extension, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [311] = {.count = 1, .reusable = false}, SHIFT(149),
  [313] = {.count = 1, .reusable = true}, SHIFT(150),
  [315] = {.count = 1, .reusable = true}, SHIFT(151),
  [317] = {.count = 1, .reusable = true}, SHIFT(154),
  [319] = {.count = 1, .reusable = false}, SHIFT(154),
  [321] = {.count = 1, .reusable = false}, SHIFT(152),
  [323] = {.count = 1, .reusable = false}, SHIFT(155),
  [325] = {.count = 1, .reusable = true}, SHIFT(155),
  [327] = {.count = 1, .reusable = true}, SHIFT(156),
  [329] = {.count = 1, .reusable = true}, SHIFT(157),
  [331] = {.count = 1, .reusable = true}, SHIFT(161),
  [333] = {.count = 1, .reusable = true}, SHIFT(162),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(168),
  [341] = {.count = 1, .reusable = false}, SHIFT(169),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [347] = {.count = 1, .reusable = true}, SHIFT(171),
  [349] = {.count = 1, .reusable = false}, SHIFT(171),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(172),
  [355] = {.count = 1, .reusable = true}, SHIFT(173),
  [357] = {.count = 1, .reusable = true}, SHIFT(176),
  [359] = {.count = 1, .reusable = false}, SHIFT(176),
  [361] = {.count = 1, .reusable = false}, SHIFT(174),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [369] = {.count = 1, .reusable = true}, SHIFT(180),
  [371] = {.count = 1, .reusable = false}, SHIFT(180),
  [373] = {.count = 1, .reusable = false}, SHIFT(178),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [390] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [393] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [396] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [399] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [402] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [408] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [411] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [414] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [417] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [420] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [423] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [426] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [432] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [435] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [438] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [441] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [444] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [450] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [453] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [464] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [468] = {.count = 1, .reusable = true}, SHIFT(181),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [474] = {.count = 1, .reusable = true}, SHIFT(185),
  [476] = {.count = 1, .reusable = true}, SHIFT(186),
  [478] = {.count = 1, .reusable = false}, SHIFT(186),
  [480] = {.count = 1, .reusable = true}, SHIFT(79),
  [482] = {.count = 1, .reusable = true}, SHIFT(188),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [486] = {.count = 1, .reusable = true}, SHIFT(189),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [490] = {.count = 1, .reusable = true}, SHIFT(191),
  [492] = {.count = 1, .reusable = true}, SHIFT(192),
  [494] = {.count = 1, .reusable = false}, SHIFT(194),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_use_definition, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [502] = {.count = 1, .reusable = true}, SHIFT(195),
  [504] = {.count = 1, .reusable = false}, SHIFT(196),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [510] = {.count = 1, .reusable = true}, SHIFT(197),
  [512] = {.count = 1, .reusable = false}, SHIFT(197),
  [514] = {.count = 1, .reusable = true}, SHIFT(200),
  [516] = {.count = 1, .reusable = false}, SHIFT(200),
  [518] = {.count = 1, .reusable = false}, SHIFT(198),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 2),
  [522] = {.count = 1, .reusable = false}, SHIFT(203),
  [524] = {.count = 1, .reusable = true}, SHIFT(204),
  [526] = {.count = 1, .reusable = false}, SHIFT(205),
  [528] = {.count = 1, .reusable = false}, SHIFT(211),
  [530] = {.count = 1, .reusable = true}, SHIFT(213),
  [532] = {.count = 1, .reusable = false}, SHIFT(213),
  [534] = {.count = 1, .reusable = true}, SHIFT(212),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 3, .dynamic_precedence = 1),
  [538] = {.count = 1, .reusable = false}, SHIFT(215),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_container_types, 1),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_scope_expression, 3),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_scope_expression, 3),
  [550] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(61),
  [553] = {.count = 1, .reusable = true}, SHIFT(219),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 3),
  [557] = {.count = 1, .reusable = false}, SHIFT(221),
  [559] = {.count = 1, .reusable = false}, SHIFT(222),
  [561] = {.count = 1, .reusable = false}, SHIFT(224),
  [563] = {.count = 1, .reusable = true}, SHIFT(225),
  [565] = {.count = 1, .reusable = false}, SHIFT(225),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [569] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [571] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(147),
  [574] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(147),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_cast_ops, 2),
  [581] = {.count = 1, .reusable = false}, SHIFT(228),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [587] = {.count = 1, .reusable = true}, SHIFT(230),
  [589] = {.count = 1, .reusable = true}, SHIFT(231),
  [591] = {.count = 1, .reusable = true}, SHIFT(232),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(233),
  [599] = {.count = 1, .reusable = false}, SHIFT(233),
  [601] = {.count = 1, .reusable = true}, SHIFT(234),
  [603] = {.count = 1, .reusable = true}, SHIFT(235),
  [605] = {.count = 1, .reusable = true}, SHIFT(236),
  [607] = {.count = 1, .reusable = false}, SHIFT(236),
  [609] = {.count = 1, .reusable = true}, SHIFT(237),
  [611] = {.count = 1, .reusable = false}, SHIFT(237),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_cast_expression, 2),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [621] = {.count = 1, .reusable = false}, SHIFT(238),
  [623] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(65),
  [626] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [628] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [632] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [634] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(66),
  [637] = {.count = 1, .reusable = true}, SHIFT(241),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [641] = {.count = 1, .reusable = false}, SHIFT(243),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_access_expression, 3),
  [645] = {.count = 1, .reusable = false}, REDUCE(sym_access_expression, 3),
  [647] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(99),
  [650] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(100),
  [653] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(97),
  [656] = {.count = 1, .reusable = true}, SHIFT(244),
  [658] = {.count = 1, .reusable = true}, SHIFT(245),
  [660] = {.count = 1, .reusable = true}, SHIFT(246),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 1),
  [664] = {.count = 1, .reusable = true}, SHIFT(247),
  [666] = {.count = 1, .reusable = true}, SHIFT(249),
  [668] = {.count = 1, .reusable = true}, SHIFT(250),
  [670] = {.count = 1, .reusable = true}, SHIFT(251),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [674] = {.count = 1, .reusable = true}, SHIFT(252),
  [676] = {.count = 1, .reusable = false}, SHIFT(252),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [680] = {.count = 1, .reusable = true}, SHIFT(254),
  [682] = {.count = 1, .reusable = true}, SHIFT(255),
  [684] = {.count = 1, .reusable = false}, SHIFT(255),
  [686] = {.count = 1, .reusable = false}, SHIFT(256),
  [688] = {.count = 1, .reusable = true}, SHIFT(257),
  [690] = {.count = 1, .reusable = false}, SHIFT(257),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [694] = {.count = 1, .reusable = false}, SHIFT(258),
  [696] = {.count = 1, .reusable = true}, SHIFT(260),
  [698] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(117),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [705] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(121),
  [708] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(123),
  [711] = {.count = 1, .reusable = true}, SHIFT(262),
  [713] = {.count = 1, .reusable = true}, SHIFT(263),
  [715] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2),
  [717] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2), SHIFT_REPEAT(125),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [724] = {.count = 1, .reusable = true}, SHIFT(264),
  [726] = {.count = 1, .reusable = false}, SHIFT(266),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [730] = {.count = 1, .reusable = true}, SHIFT(267),
  [732] = {.count = 1, .reusable = true}, SHIFT(270),
  [734] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2),
  [736] = {.count = 1, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2),
  [738] = {.count = 1, .reusable = true}, SHIFT(271),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 4, .dynamic_precedence = 1),
  [742] = {.count = 2, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(215),
  [745] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(128),
  [748] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(129),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 4),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 4),
  [757] = {.count = 1, .reusable = false}, SHIFT(277),
  [759] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(144),
  [762] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(145),
  [765] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(150),
  [768] = {.count = 1, .reusable = false}, SHIFT(281),
  [770] = {.count = 1, .reusable = true}, SHIFT(282),
  [772] = {.count = 1, .reusable = false}, SHIFT(282),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [778] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(156),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(157),
  [784] = {.count = 1, .reusable = true}, SHIFT(283),
  [786] = {.count = 1, .reusable = true}, SHIFT(284),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [790] = {.count = 1, .reusable = true}, SHIFT(287),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [796] = {.count = 1, .reusable = false}, SHIFT(291),
  [798] = {.count = 1, .reusable = true}, SHIFT(292),
  [800] = {.count = 1, .reusable = false}, SHIFT(292),
  [802] = {.count = 1, .reusable = true}, SHIFT(293),
  [804] = {.count = 1, .reusable = false}, SHIFT(293),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 2),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 4),
  [812] = {.count = 1, .reusable = false}, SHIFT(295),
  [814] = {.count = 1, .reusable = true}, SHIFT(296),
  [816] = {.count = 1, .reusable = false}, SHIFT(296),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [822] = {.count = 1, .reusable = true}, SHIFT(297),
  [824] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(188),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [829] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [831] = {.count = 1, .reusable = false}, SHIFT(298),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(192),
  [836] = {.count = 1, .reusable = false}, SHIFT(299),
  [838] = {.count = 1, .reusable = true}, SHIFT(300),
  [840] = {.count = 1, .reusable = false}, SHIFT(300),
  [842] = {.count = 1, .reusable = false}, SHIFT(301),
  [844] = {.count = 1, .reusable = false}, SHIFT(303),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [848] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [852] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [854] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(51),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 5),
  [859] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(230),
  [862] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(231),
  [865] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(51),
  [868] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [870] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [872] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [874] = {.count = 1, .reusable = false}, SHIFT(314),
  [876] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [878] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(245),
  [881] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(246),
  [884] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2),
  [886] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2), SHIFT_REPEAT(247),
  [889] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(250),
  [892] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(251),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [897] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(262),
  [900] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(263),
  [903] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [905] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(267),
  [908] = {.count = 1, .reusable = false}, SHIFT(317),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [912] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [914] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(287),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 8),
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
