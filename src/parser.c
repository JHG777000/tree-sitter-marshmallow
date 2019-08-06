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
#define STATE_COUNT 328
#define SYMBOL_COUNT 198
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
  aux_sym_class_definition_repeat1 = 194,
  aux_sym_type_repeat1 = 195,
  aux_sym_type_repeat2 = 196,
  aux_sym_string_repeat1 = 197,
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
  [aux_sym_class_definition_repeat1] = "class_definition_repeat1",
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
  [aux_sym_class_definition_repeat1] = {
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
        ADVANCE(584);
      if (lookahead == 'd')
        ADVANCE(585);
      if (lookahead == 'f')
        ADVANCE(586);
      if (lookahead == 'i')
        ADVANCE(587);
      if (lookahead == 'm')
        ADVANCE(317);
      if (lookahead == 's')
        ADVANCE(588);
      if (lookahead == 'w')
        ADVANCE(589);
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
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
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
    case 587:
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
    case 588:
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
    case 589:
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
    case 590:
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
    case 591:
      if (lookahead == '!')
        ADVANCE(592);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(593);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(530);
      if (lookahead == '+')
        ADVANCE(307);
      if (lookahead == '-')
        ADVANCE(594);
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == '0')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(595);
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
    case 592:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 593:
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
    case 594:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 595:
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
    case 596:
      if (lookahead == '*')
        ADVANCE(597);
      if (lookahead == '+')
        ADVANCE(598);
      if (lookahead == '-')
        ADVANCE(599);
      if (lookahead == '/')
        ADVANCE(600);
      if (lookahead == '\\')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(602);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(326);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(327);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 601:
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
    case 602:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 603:
      if (lookahead == '%')
        ADVANCE(567);
      if (lookahead == '&')
        ADVANCE(604);
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
        ADVANCE(605);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(606);
      if (lookahead == '>')
        ADVANCE(607);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(608);
      if (lookahead == '|')
        ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 604:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 605:
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 606:
      if (lookahead == '<')
        ADVANCE(610);
      END_STATE();
    case 607:
      if (lookahead == '>')
        ADVANCE(611);
      END_STATE();
    case 608:
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 609:
      if (lookahead == '=')
        ADVANCE(123);
      END_STATE();
    case 610:
      if (lookahead == '=')
        ADVANCE(131);
      END_STATE();
    case 611:
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 612:
      if (lookahead == '!')
        ADVANCE(613);
      if (lookahead == '$')
        ADVANCE(614);
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
        ADVANCE(615);
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
    case 613:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 615:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 616:
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
        ADVANCE(584);
      if (lookahead == 'd')
        ADVANCE(585);
      if (lookahead == 'e')
        ADVANCE(617);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(587);
      if (lookahead == 'n')
        ADVANCE(318);
      if (lookahead == 'r')
        ADVANCE(618);
      if (lookahead == 's')
        ADVANCE(619);
      if (lookahead == 'w')
        ADVANCE(589);
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
        ADVANCE(604);
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
        ADVANCE(605);
      if (lookahead == ':')
        ADVANCE(534);
      if (lookahead == '<')
        ADVANCE(606);
      if (lookahead == '>')
        ADVANCE(607);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(608);
      if (lookahead == '|')
        ADVANCE(609);
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
        ADVANCE(649);
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
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(651);
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
    case 651:
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
    case 652:
      if (lookahead == '!')
        ADVANCE(613);
      if (lookahead == '$')
        ADVANCE(614);
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
        ADVANCE(615);
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
    case 653:
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
        ADVANCE(654);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 654:
      if (lookahead == 'e')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 't')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'u')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 'r')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 'n')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 's')
        ADVANCE(660);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 661:
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
    case 662:
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
    case 663:
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
      if (lookahead == '/')
        ADVANCE(309);
      if (lookahead == 'f')
        ADVANCE(561);
      if (lookahead == 'i')
        ADVANCE(562);
      if (lookahead == 'p')
        ADVANCE(667);
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
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(325);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(669);
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
    case 669:
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
    case 670:
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
    case 671:
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
  [18] = {.lex_state = 514},
  [19] = {.lex_state = 514},
  [20] = {.lex_state = 564},
  [21] = {.lex_state = 578},
  [22] = {.lex_state = 514},
  [23] = {.lex_state = 532},
  [24] = {.lex_state = 583},
  [25] = {.lex_state = 532},
  [26] = {.lex_state = 591},
  [27] = {.lex_state = 596},
  [28] = {.lex_state = 532},
  [29] = {.lex_state = 532},
  [30] = {.lex_state = 532},
  [31] = {.lex_state = 532},
  [32] = {.lex_state = 603},
  [33] = {.lex_state = 612},
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
  [45] = {.lex_state = 591},
  [46] = {.lex_state = 616},
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
  [65] = {.lex_state = 648},
  [66] = {.lex_state = 514},
  [67] = {.lex_state = 514},
  [68] = {.lex_state = 603},
  [69] = {.lex_state = 603},
  [70] = {.lex_state = 532},
  [71] = {.lex_state = 603},
  [72] = {.lex_state = 612},
  [73] = {.lex_state = 578},
  [74] = {.lex_state = 532},
  [75] = {.lex_state = 532},
  [76] = {.lex_state = 532},
  [77] = {.lex_state = 564},
  [78] = {.lex_state = 560},
  [79] = {.lex_state = 652},
  [80] = {.lex_state = 560},
  [81] = {.lex_state = 564},
  [82] = {.lex_state = 652},
  [83] = {.lex_state = 652},
  [84] = {.lex_state = 514},
  [85] = {.lex_state = 305},
  [86] = {.lex_state = 653},
  [87] = {.lex_state = 529},
  [88] = {.lex_state = 622},
  [89] = {.lex_state = 532},
  [90] = {.lex_state = 532},
  [91] = {.lex_state = 514},
  [92] = {.lex_state = 532},
  [93] = {.lex_state = 560},
  [94] = {.lex_state = 564},
  [95] = {.lex_state = 564},
  [96] = {.lex_state = 661},
  [97] = {.lex_state = 622},
  [98] = {.lex_state = 564},
  [99] = {.lex_state = 661},
  [100] = {.lex_state = 612},
  [101] = {.lex_state = 564},
  [102] = {.lex_state = 305},
  [103] = {.lex_state = 305},
  [104] = {.lex_state = 532},
  [105] = {.lex_state = 653},
  [106] = {.lex_state = 560},
  [107] = {.lex_state = 564},
  [108] = {.lex_state = 652},
  [109] = {.lex_state = 514},
  [110] = {.lex_state = 566},
  [111] = {.lex_state = 566},
  [112] = {.lex_state = 532},
  [113] = {.lex_state = 662},
  [114] = {.lex_state = 662},
  [115] = {.lex_state = 532},
  [116] = {.lex_state = 532},
  [117] = {.lex_state = 663},
  [118] = {.lex_state = 622},
  [119] = {.lex_state = 532},
  [120] = {.lex_state = 612},
  [121] = {.lex_state = 564},
  [122] = {.lex_state = 564},
  [123] = {.lex_state = 564},
  [124] = {.lex_state = 624},
  [125] = {.lex_state = 648},
  [126] = {.lex_state = 626},
  [127] = {.lex_state = 578},
  [128] = {.lex_state = 532},
  [129] = {.lex_state = 626},
  [130] = {.lex_state = 664},
  [131] = {.lex_state = 532},
  [132] = {.lex_state = 532},
  [133] = {.lex_state = 566},
  [134] = {.lex_state = 665},
  [135] = {.lex_state = 666},
  [136] = {.lex_state = 666},
  [137] = {.lex_state = 560},
  [138] = {.lex_state = 532},
  [139] = {.lex_state = 662},
  [140] = {.lex_state = 532},
  [141] = {.lex_state = 514},
  [142] = {.lex_state = 532},
  [143] = {.lex_state = 564},
  [144] = {.lex_state = 612},
  [145] = {.lex_state = 578},
  [146] = {.lex_state = 514},
  [147] = {.lex_state = 529},
  [148] = {.lex_state = 532},
  [149] = {.lex_state = 612},
  [150] = {.lex_state = 652},
  [151] = {.lex_state = 652},
  [152] = {.lex_state = 652},
  [153] = {.lex_state = 564},
  [154] = {.lex_state = 564},
  [155] = {.lex_state = 622},
  [156] = {.lex_state = 564},
  [157] = {.lex_state = 564},
  [158] = {.lex_state = 560},
  [159] = {.lex_state = 612},
  [160] = {.lex_state = 670},
  [161] = {.lex_state = 653},
  [162] = {.lex_state = 532},
  [163] = {.lex_state = 532},
  [164] = {.lex_state = 622},
  [165] = {.lex_state = 532},
  [166] = {.lex_state = 532},
  [167] = {.lex_state = 532},
  [168] = {.lex_state = 514},
  [169] = {.lex_state = 532},
  [170] = {.lex_state = 532},
  [171] = {.lex_state = 566},
  [172] = {.lex_state = 671},
  [173] = {.lex_state = 622},
  [174] = {.lex_state = 662},
  [175] = {.lex_state = 662},
  [176] = {.lex_state = 662},
  [177] = {.lex_state = 560},
  [178] = {.lex_state = 532},
  [179] = {.lex_state = 532},
  [180] = {.lex_state = 532},
  [181] = {.lex_state = 564},
  [182] = {.lex_state = 664},
  [183] = {.lex_state = 653},
  [184] = {.lex_state = 532},
  [185] = {.lex_state = 616},
  [186] = {.lex_state = 652},
  [187] = {.lex_state = 564},
  [188] = {.lex_state = 532},
  [189] = {.lex_state = 564},
  [190] = {.lex_state = 662},
  [191] = {.lex_state = 532},
  [192] = {.lex_state = 532},
  [193] = {.lex_state = 662},
  [194] = {.lex_state = 532},
  [195] = {.lex_state = 663},
  [196] = {.lex_state = 624},
  [197] = {.lex_state = 624},
  [198] = {.lex_state = 624},
  [199] = {.lex_state = 624},
  [200] = {.lex_state = 624},
  [201] = {.lex_state = 624},
  [202] = {.lex_state = 624},
  [203] = {.lex_state = 653},
  [204] = {.lex_state = 672},
  [205] = {.lex_state = 662},
  [206] = {.lex_state = 560},
  [207] = {.lex_state = 626},
  [208] = {.lex_state = 626},
  [209] = {.lex_state = 578},
  [210] = {.lex_state = 532},
  [211] = {.lex_state = 626},
  [212] = {.lex_state = 532},
  [213] = {.lex_state = 532},
  [214] = {.lex_state = 664},
  [215] = {.lex_state = 560},
  [216] = {.lex_state = 532},
  [217] = {.lex_state = 662},
  [218] = {.lex_state = 532},
  [219] = {.lex_state = 648},
  [220] = {.lex_state = 662},
  [221] = {.lex_state = 653},
  [222] = {.lex_state = 532},
  [223] = {.lex_state = 603},
  [224] = {.lex_state = 603},
  [225] = {.lex_state = 529},
  [226] = {.lex_state = 529},
  [227] = {.lex_state = 652},
  [228] = {.lex_state = 652},
  [229] = {.lex_state = 532},
  [230] = {.lex_state = 564},
  [231] = {.lex_state = 612},
  [232] = {.lex_state = 652},
  [233] = {.lex_state = 652},
  [234] = {.lex_state = 622},
  [235] = {.lex_state = 652},
  [236] = {.lex_state = 652},
  [237] = {.lex_state = 603},
  [238] = {.lex_state = 603},
  [239] = {.lex_state = 532},
  [240] = {.lex_state = 532},
  [241] = {.lex_state = 514},
  [242] = {.lex_state = 664},
  [243] = {.lex_state = 532},
  [244] = {.lex_state = 671},
  [245] = {.lex_state = 532},
  [246] = {.lex_state = 564},
  [247] = {.lex_state = 564},
  [248] = {.lex_state = 662},
  [249] = {.lex_state = 612},
  [250] = {.lex_state = 532},
  [251] = {.lex_state = 564},
  [252] = {.lex_state = 532},
  [253] = {.lex_state = 532},
  [254] = {.lex_state = 616},
  [255] = {.lex_state = 652},
  [256] = {.lex_state = 566},
  [257] = {.lex_state = 662},
  [258] = {.lex_state = 532},
  [259] = {.lex_state = 662},
  [260] = {.lex_state = 532},
  [261] = {.lex_state = 662},
  [262] = {.lex_state = 532},
  [263] = {.lex_state = 564},
  [264] = {.lex_state = 627},
  [265] = {.lex_state = 648},
  [266] = {.lex_state = 662},
  [267] = {.lex_state = 653},
  [268] = {.lex_state = 626},
  [269] = {.lex_state = 532},
  [270] = {.lex_state = 532},
  [271] = {.lex_state = 532},
  [272] = {.lex_state = 532},
  [273] = {.lex_state = 662},
  [274] = {.lex_state = 532},
  [275] = {.lex_state = 532},
  [276] = {.lex_state = 662},
  [277] = {.lex_state = 532},
  [278] = {.lex_state = 662},
  [279] = {.lex_state = 653},
  [280] = {.lex_state = 653},
  [281] = {.lex_state = 529},
  [282] = {.lex_state = 529},
  [283] = {.lex_state = 529},
  [284] = {.lex_state = 652},
  [285] = {.lex_state = 652},
  [286] = {.lex_state = 652},
  [287] = {.lex_state = 612},
  [288] = {.lex_state = 603},
  [289] = {.lex_state = 603},
  [290] = {.lex_state = 560},
  [291] = {.lex_state = 603},
  [292] = {.lex_state = 532},
  [293] = {.lex_state = 664},
  [294] = {.lex_state = 662},
  [295] = {.lex_state = 662},
  [296] = {.lex_state = 662},
  [297] = {.lex_state = 662},
  [298] = {.lex_state = 532},
  [299] = {.lex_state = 532},
  [300] = {.lex_state = 616},
  [301] = {.lex_state = 532},
  [302] = {.lex_state = 624},
  [303] = {.lex_state = 624},
  [304] = {.lex_state = 662},
  [305] = {.lex_state = 662},
  [306] = {.lex_state = 662},
  [307] = {.lex_state = 662},
  [308] = {.lex_state = 662},
  [309] = {.lex_state = 532},
  [310] = {.lex_state = 532},
  [311] = {.lex_state = 532},
  [312] = {.lex_state = 653},
  [313] = {.lex_state = 603},
  [314] = {.lex_state = 603},
  [315] = {.lex_state = 603},
  [316] = {.lex_state = 603},
  [317] = {.lex_state = 603},
  [318] = {.lex_state = 653},
  [319] = {.lex_state = 662},
  [320] = {.lex_state = 662},
  [321] = {.lex_state = 532},
  [322] = {.lex_state = 532},
  [323] = {.lex_state = 653},
  [324] = {.lex_state = 662},
  [325] = {.lex_state = 662},
  [326] = {.lex_state = 662},
  [327] = {.lex_state = 532},
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
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [19] = {
    [sym__override] = STATE(67),
    [sym_is_function] = STATE(44),
    [sym_is_method] = STATE(44),
    [sym_is_primitive] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(123),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(123),
    [anon_sym_function] = ACTIONS(67),
  },
  [20] = {
    [sym_group_expression] = STATE(71),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(69),
    [sym_string] = STATE(71),
    [sym_character] = STATE(71),
    [sym_assignment_expression] = STATE(70),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(71),
    [sym_collection] = STATE(71),
    [sym__number] = STATE(71),
    [sym__assignment_or_value] = STATE(70),
    [sym__value] = STATE(71),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(71),
    [sym_float] = ACTIONS(125),
    [sym_null] = ACTIONS(127),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(127),
    [sym_hex] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(125),
    [sym_double] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(129),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(127),
    [sym_binary] = ACTIONS(125),
  },
  [21] = {
    [aux_sym_string_repeat1] = STATE(73),
    [sym__escape_sequence] = STATE(73),
    [anon_sym_BSLASHb] = ACTIONS(131),
    [anon_sym_BSLASHv] = ACTIONS(131),
    [aux_sym_string_token1] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(131),
    [anon_sym_BSLASHa] = ACTIONS(131),
    [anon_sym_BSLASHt] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_BSLASH0] = ACTIONS(131),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(131),
    [anon_sym_BSLASHf] = ACTIONS(131),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(131),
    [anon_sym_BSLASHr] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(131),
  },
  [22] = {
    [sym_group_expression] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(137),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [anon_sym_case] = ACTIONS(139),
    [anon_sym_switch] = ACTIONS(139),
    [anon_sym_method] = ACTIONS(139),
    [anon_sym_default] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(139),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(139),
    [anon_sym_while] = ACTIONS(139),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym_string] = STATE(82),
    [sym_character] = STATE(82),
    [sym_assignment_expression] = STATE(80),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(82),
    [sym_unary_op] = STATE(81),
    [sym__value] = STATE(82),
    [sym__literal] = STATE(82),
    [sym_group_expression] = STATE(82),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(83),
    [sym_cast_ops] = STATE(84),
    [sym_collection] = STATE(82),
    [sym__number] = STATE(82),
    [sym_cast_expression] = STATE(80),
    [sym_array_expression] = STATE(33),
    [sym_float] = ACTIONS(145),
    [anon_sym_AMP] = ACTIONS(147),
    [sym_null] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [sym_oct] = ACTIONS(149),
    [sym_hex] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(145),
    [sym_double] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(151),
    [sym_integer] = ACTIONS(149),
    [sym_binary] = ACTIONS(145),
  },
  [27] = {
    [sym__escape_sequence] = STATE(85),
    [anon_sym_BSLASHb] = ACTIONS(159),
    [anon_sym_BSLASHv] = ACTIONS(159),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(159),
    [aux_sym_character_token1] = ACTIONS(161),
    [anon_sym_BSLASHf] = ACTIONS(159),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(159),
    [anon_sym_BSLASHr] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(159),
    [anon_sym_BSLASHn] = ACTIONS(159),
    [anon_sym_BSLASHa] = ACTIONS(159),
    [anon_sym_BSLASHt] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH0] = ACTIONS(159),
  },
  [28] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
  },
  [29] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(165),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [sym_array] = STATE(89),
    [aux_sym_type_repeat2] = STATE(89),
    [aux_sym_type_repeat1] = STATE(90),
    [sym_pointer] = STATE(90),
    [anon_sym_STAR] = ACTIONS(167),
    [sym_identifier] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(171),
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
    [sym__override] = STATE(67),
    [sym_type] = STATE(92),
    [sym_is_function] = STATE(44),
    [sym_readability] = STATE(93),
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
    [sym_is_primitive] = ACTIONS(121),
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
    [sym_assignment_post_op] = STATE(99),
    [sym_array] = STATE(100),
    [sym_assignment_op] = STATE(101),
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
    [sym__sentence] = STATE(102),
    [sym_definition] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(102),
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
    [sym_type] = STATE(92),
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
    [sym_string] = STATE(108),
    [sym_character] = STATE(108),
    [sym_assignment_expression] = STATE(106),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(108),
    [sym_unary_op] = STATE(107),
    [sym__value] = STATE(108),
    [sym__literal] = STATE(108),
    [sym_group_expression] = STATE(108),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(83),
    [sym_cast_ops] = STATE(84),
    [sym_collection] = STATE(108),
    [sym__number] = STATE(108),
    [sym_cast_expression] = STATE(106),
    [sym_array_expression] = STATE(33),
    [sym_float] = ACTIONS(209),
    [anon_sym_AMP] = ACTIONS(147),
    [sym_null] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_DOLLAR] = ACTIONS(151),
    [sym_oct] = ACTIONS(211),
    [sym_hex] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(209),
    [sym_double] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_BANG] = ACTIONS(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(151),
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
    [sym_scope_expression] = STATE(111),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(39),
    [sym_collection] = STATE(39),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__number] = STATE(39),
    [sym_expression_statement] = STATE(31),
    [sym_statement] = STATE(112),
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
    [sym__enum_element] = STATE(114),
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
    [sym_scope_expression] = STATE(116),
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
    [sym_assignment_post_op] = STATE(99),
    [sym_array] = STATE(100),
    [sym_assignment_op] = STATE(122),
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
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(124),
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
    [sym_string] = STATE(129),
    [sym_parameter_list] = STATE(128),
    [aux_sym_extension_repeat1] = STATE(129),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [60] = {
    [sym__base_type] = STATE(131),
    [sym_primitive_type] = STATE(131),
    [sym_container_types] = STATE(132),
    [sym_type] = STATE(130),
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
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(133),
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
    [sym_access_control] = STATE(136),
    [sym__base_type] = STATE(30),
    [sym_readability] = STATE(137),
    [sym_primitive_type] = STATE(30),
    [sym_type] = STATE(138),
    [sym_variable_definition] = STATE(139),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(271),
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
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [66] = {
    [sym_is_function] = STATE(140),
    [sym_is_method] = STATE(140),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [67] = {
    [sym_is_function] = STATE(140),
    [sym_is_method] = STATE(140),
    [sym_is_primitive] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [68] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_LT_LT_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(275),
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
  [69] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_LT_LT_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(275),
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
  [70] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
  },
  [71] = {
    [sym_assignment_post_op] = STATE(99),
    [sym_array] = STATE(100),
    [sym_assignment_op] = STATE(101),
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
    [sym__access_op] = ACTIONS(279),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [72] = {
    [anon_sym_STAR_EQ] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_DOLLAR] = ACTIONS(281),
    [anon_sym_LT_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_COMMA] = ACTIONS(281),
    [anon_sym_EQ_EQ] = ACTIONS(281),
    [anon_sym_CARET] = ACTIONS(283),
    [anon_sym_CARET_EQ] = ACTIONS(281),
    [anon_sym_SLASH] = ACTIONS(283),
    [anon_sym_DASH_EQ] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(283),
    [anon_sym_SLASH_EQ] = ACTIONS(281),
    [anon_sym_STAR] = ACTIONS(283),
    [sym__access_op] = ACTIONS(281),
    [anon_sym_COLON_EQ] = ACTIONS(281),
    [anon_sym_LT] = ACTIONS(283),
    [anon_sym_AMP_AMP] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_GT_GT_EQ] = ACTIONS(281),
    [anon_sym_RBRACE] = ACTIONS(281),
    [anon_sym_PLUS_PLUS] = ACTIONS(283),
    [anon_sym_AMP] = ACTIONS(283),
    [anon_sym_PERCENT_EQ] = ACTIONS(281),
    [anon_sym_PERCENT] = ACTIONS(283),
    [anon_sym_LT_LT] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(281),
    [anon_sym_GT_EQ] = ACTIONS(281),
    [anon_sym_PIPE_PIPE] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(281),
    [anon_sym_LT_LT_EQ] = ACTIONS(281),
    [anon_sym_PIPE_EQ] = ACTIONS(281),
    [anon_sym_DASH_DASH] = ACTIONS(283),
    [anon_sym_PLUS_EQ] = ACTIONS(281),
    [anon_sym_AMP_EQ] = ACTIONS(281),
  },
  [73] = {
    [aux_sym_string_repeat1] = STATE(145),
    [sym__escape_sequence] = STATE(145),
    [anon_sym_BSLASHb] = ACTIONS(285),
    [anon_sym_BSLASHv] = ACTIONS(285),
    [aux_sym_string_token1] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(285),
    [anon_sym_BSLASHa] = ACTIONS(285),
    [anon_sym_BSLASHt] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [anon_sym_BSLASH0] = ACTIONS(285),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(285),
    [anon_sym_BSLASHf] = ACTIONS(285),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(285),
    [anon_sym_BSLASHr] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(285),
  },
  [74] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(291),
    [sym__comment] = ACTIONS(3),
  },
  [75] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(293),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
  },
  [77] = {
    [sym_float] = ACTIONS(297),
    [sym_null] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(299),
    [sym_hex] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [sym_long] = ACTIONS(297),
    [sym_double] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(299),
    [sym_identifier] = ACTIONS(299),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(299),
    [sym_binary] = ACTIONS(297),
  },
  [78] = {
    [sym_type] = STATE(146),
    [sym__base_type] = STATE(147),
    [sym_primitive_type] = STATE(147),
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
    [sym_identifier] = ACTIONS(301),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(303),
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
  [80] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(305),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [sym_group_expression] = STATE(152),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
    [sym_string] = STATE(152),
    [sym_character] = STATE(152),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(152),
    [sym_collection] = STATE(152),
    [sym__number] = STATE(152),
    [sym__value] = STATE(152),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(152),
    [sym_float] = ACTIONS(307),
    [sym_null] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(309),
    [sym_hex] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(307),
    [sym_double] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(309),
    [sym_binary] = ACTIONS(307),
  },
  [82] = {
    [sym_assignment_post_op] = STATE(99),
    [sym_array] = STATE(100),
    [sym_binary_op] = STATE(156),
    [sym_assignment_op] = STATE(157),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(313),
    [sym__access_op] = ACTIONS(317),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [83] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(303),
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
  [84] = {
    [sym_group_expression] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_SQUOTE] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [86] = {
    [sym_parameter_list] = STATE(161),
    [sym_return_list] = STATE(162),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(325),
  },
  [87] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(329),
    [sym_identifier] = ACTIONS(329),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_COLON_EQ] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
  },
  [88] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(333),
  },
  [89] = {
    [sym_array] = STATE(165),
    [aux_sym_type_repeat2] = STATE(165),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(171),
  },
  [90] = {
    [sym_array] = STATE(166),
    [aux_sym_type_repeat2] = STATE(166),
    [aux_sym_type_repeat1] = STATE(167),
    [sym_pointer] = STATE(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(171),
  },
  [91] = {
    [sym__override] = STATE(168),
    [sym_is_function] = STATE(140),
    [sym_is_method] = STATE(140),
    [sym_is_primitive] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(337),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(337),
    [anon_sym_function] = ACTIONS(67),
  },
  [92] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
  },
  [93] = {
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
  [94] = {
    [sym_float] = ACTIONS(341),
    [sym_null] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(343),
    [sym_hex] = ACTIONS(341),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [sym_long] = ACTIONS(341),
    [sym_double] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(343),
    [sym_identifier] = ACTIONS(343),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(343),
    [sym_binary] = ACTIONS(341),
  },
  [95] = {
    [sym_group_expression] = STATE(171),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(111),
    [sym_string] = STATE(171),
    [sym_character] = STATE(171),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(171),
    [sym_collection] = STATE(171),
    [sym__number] = STATE(171),
    [sym__value] = STATE(171),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(171),
    [sym_float] = ACTIONS(345),
    [sym_null] = ACTIONS(347),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(347),
    [sym_hex] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(345),
    [sym_double] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(347),
    [sym_binary] = ACTIONS(345),
  },
  [96] = {
    [anon_sym_RPAREN] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(349),
  },
  [97] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(353),
  },
  [98] = {
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
    [sym_float] = ACTIONS(355),
    [sym_null] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(357),
    [sym_hex] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(355),
    [sym_double] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(357),
    [sym_binary] = ACTIONS(355),
  },
  [99] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
  },
  [100] = {
    [anon_sym_STAR_EQ] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_CARET] = ACTIONS(365),
    [anon_sym_CARET_EQ] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(365),
    [anon_sym_DASH_EQ] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(365),
    [anon_sym_SLASH_EQ] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [sym__access_op] = ACTIONS(363),
    [anon_sym_COLON_EQ] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(365),
    [anon_sym_AMP_AMP] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_GT_GT_EQ] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(363),
    [anon_sym_PLUS_PLUS] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(365),
    [anon_sym_PERCENT_EQ] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(365),
    [anon_sym_LT_LT] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_PIPE_PIPE] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_LT_LT_EQ] = ACTIONS(363),
    [anon_sym_PIPE_EQ] = ACTIONS(363),
    [anon_sym_DASH_DASH] = ACTIONS(365),
    [anon_sym_PLUS_EQ] = ACTIONS(363),
    [anon_sym_AMP_EQ] = ACTIONS(363),
  },
  [101] = {
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
    [sym_float] = ACTIONS(367),
    [sym_null] = ACTIONS(369),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(369),
    [sym_hex] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(367),
    [sym_double] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(371),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(369),
    [sym_binary] = ACTIONS(367),
  },
  [102] = {
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
    [sym__sentence] = STATE(102),
    [sym_definition] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(102),
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
    [anon_sym_i16] = ACTIONS(373),
    [sym_oct] = ACTIONS(376),
    [anon_sym_goto] = ACTIONS(379),
    [anon_sym_module] = ACTIONS(382),
    [anon_sym_protected] = ACTIONS(385),
    [anon_sym_method] = ACTIONS(388),
    [sym_is_declare] = ACTIONS(391),
    [anon_sym_i32] = ACTIONS(373),
    [sym_integer] = ACTIONS(376),
    [anon_sym_section] = ACTIONS(394),
    [sym_float] = ACTIONS(397),
    [anon_sym_private] = ACTIONS(385),
    [anon_sym_i8] = ACTIONS(373),
    [sym_is_interface] = ACTIONS(400),
    [anon_sym_f64] = ACTIONS(373),
    [anon_sym_i64] = ACTIONS(373),
    [anon_sym_u16] = ACTIONS(373),
    [sym_long] = ACTIONS(397),
    [sym_is_external] = ACTIONS(391),
    [sym_double] = ACTIONS(397),
    [anon_sym_end] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(406),
    [anon_sym_use] = ACTIONS(409),
    [anon_sym_protected_write] = ACTIONS(412),
    [sym_is_overridable] = ACTIONS(415),
    [sym_is_primitive] = ACTIONS(418),
    [anon_sym_s8] = ACTIONS(373),
    [anon_sym_u8] = ACTIONS(373),
    [sym_null] = ACTIONS(376),
    [anon_sym_u32] = ACTIONS(373),
    [anon_sym_if] = ACTIONS(421),
    [sym_hex] = ACTIONS(397),
    [anon_sym_enum] = ACTIONS(424),
    [anon_sym_require] = ACTIONS(409),
    [anon_sym_system_readwrite] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(427),
    [sym_is_override] = ACTIONS(415),
    [anon_sym_readonly] = ACTIONS(412),
    [anon_sym_s16] = ACTIONS(373),
    [sym_identifier] = ACTIONS(430),
    [anon_sym_u64] = ACTIONS(373),
    [anon_sym_while] = ACTIONS(433),
    [sym_binary] = ACTIONS(397),
    [anon_sym_case] = ACTIONS(436),
    [anon_sym_class] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(412),
    [anon_sym_s32] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [anon_sym_f32] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(445),
    [anon_sym_return] = ACTIONS(448),
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_switch] = ACTIONS(453),
    [anon_sym_default] = ACTIONS(456),
    [anon_sym_function] = ACTIONS(459),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(412),
  },
  [103] = {
    [anon_sym_i16] = ACTIONS(462),
    [sym_oct] = ACTIONS(462),
    [anon_sym_goto] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(462),
    [anon_sym_protected] = ACTIONS(462),
    [anon_sym_method] = ACTIONS(462),
    [sym_is_declare] = ACTIONS(462),
    [anon_sym_i32] = ACTIONS(462),
    [sym_integer] = ACTIONS(462),
    [anon_sym_section] = ACTIONS(462),
    [sym_float] = ACTIONS(464),
    [anon_sym_private] = ACTIONS(462),
    [anon_sym_i8] = ACTIONS(462),
    [sym_is_interface] = ACTIONS(462),
    [anon_sym_f64] = ACTIONS(462),
    [anon_sym_i64] = ACTIONS(462),
    [anon_sym_u16] = ACTIONS(462),
    [sym_long] = ACTIONS(464),
    [sym_is_external] = ACTIONS(462),
    [sym_double] = ACTIONS(464),
    [anon_sym_end] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(462),
    [anon_sym_use] = ACTIONS(462),
    [anon_sym_protected_write] = ACTIONS(462),
    [sym_is_overridable] = ACTIONS(462),
    [sym_is_primitive] = ACTIONS(462),
    [anon_sym_s8] = ACTIONS(462),
    [anon_sym_u8] = ACTIONS(462),
    [sym_null] = ACTIONS(462),
    [anon_sym_u32] = ACTIONS(462),
    [anon_sym_if] = ACTIONS(462),
    [sym_hex] = ACTIONS(464),
    [anon_sym_enum] = ACTIONS(462),
    [anon_sym_require] = ACTIONS(462),
    [anon_sym_system_readwrite] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(464),
    [sym_is_override] = ACTIONS(462),
    [anon_sym_readonly] = ACTIONS(462),
    [anon_sym_s16] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [anon_sym_u64] = ACTIONS(462),
    [anon_sym_while] = ACTIONS(462),
    [sym_binary] = ACTIONS(464),
    [anon_sym_case] = ACTIONS(462),
    [anon_sym_class] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(462),
    [anon_sym_s32] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [anon_sym_f32] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_return] = ACTIONS(462),
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_switch] = ACTIONS(462),
    [anon_sym_default] = ACTIONS(462),
    [anon_sym_function] = ACTIONS(462),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(462),
  },
  [104] = {
    [sym_static_assignment] = STATE(182),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
  },
  [105] = {
    [sym_parameter_list] = STATE(183),
    [sym_return_list] = STATE(184),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(470),
  },
  [106] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym_group_expression] = STATE(186),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
    [sym_string] = STATE(186),
    [sym_character] = STATE(186),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(186),
    [sym_collection] = STATE(186),
    [sym__number] = STATE(186),
    [sym__value] = STATE(186),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(186),
    [sym_float] = ACTIONS(474),
    [sym_null] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(476),
    [sym_hex] = ACTIONS(474),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(474),
    [sym_double] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(476),
    [sym_binary] = ACTIONS(474),
  },
  [108] = {
    [sym_assignment_post_op] = STATE(99),
    [sym_array] = STATE(100),
    [sym_binary_op] = STATE(187),
    [sym_assignment_op] = STATE(157),
    [anon_sym_STAR_EQ] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_LT_EQ] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_EQ_EQ] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(191),
    [anon_sym_DASH_EQ] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(313),
    [sym__access_op] = ACTIONS(317),
    [anon_sym_COLON_EQ] = ACTIONS(191),
    [anon_sym_LT] = ACTIONS(313),
    [anon_sym_AMP_AMP] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(313),
    [anon_sym_PERCENT] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_LT_LT] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_GT_EQ] = ACTIONS(315),
    [anon_sym_PIPE_PIPE] = ACTIONS(315),
    [anon_sym_BANG_EQ] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_LT_LT_EQ] = ACTIONS(191),
    [anon_sym_PIPE_EQ] = ACTIONS(191),
    [anon_sym_DASH_DASH] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(191),
    [anon_sym_AMP_EQ] = ACTIONS(191),
  },
  [109] = {
    [anon_sym_case] = ACTIONS(478),
    [anon_sym_switch] = ACTIONS(478),
    [anon_sym_method] = ACTIONS(478),
    [anon_sym_default] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(478),
    [anon_sym_if] = ACTIONS(478),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(478),
    [anon_sym_while] = ACTIONS(478),
  },
  [110] = {
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_AMP_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(480),
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
  [111] = {
    [anon_sym_STAR_EQ] = ACTIONS(177),
    [anon_sym_AMP_EQ] = ACTIONS(177),
    [anon_sym_DASH_DASH] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(480),
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
  [112] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(482),
    [sym__comment] = ACTIONS(3),
  },
  [113] = {
    [sym_static_assignment] = STATE(190),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(486),
    [sym__space] = ACTIONS(3),
  },
  [114] = {
    [aux_sym_enum_definition_repeat1] = STATE(193),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(490),
  },
  [115] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(194),
    [sym_identifier] = ACTIONS(492),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [116] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(494),
    [sym__scope_op] = ACTIONS(225),
  },
  [117] = {
    [anon_sym_s8] = ACTIONS(496),
    [anon_sym_u8] = ACTIONS(496),
    [anon_sym_i16] = ACTIONS(496),
    [anon_sym_u32] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(496),
    [anon_sym_DOT] = ACTIONS(498),
    [sym__scope_op] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_s32] = ACTIONS(496),
    [anon_sym_f64] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_i64] = ACTIONS(496),
    [anon_sym_f32] = ACTIONS(496),
    [anon_sym_u16] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_s16] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_i32] = ACTIONS(496),
    [anon_sym_u64] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(498),
    [sym__access_op] = ACTIONS(498),
  },
  [118] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(500),
  },
  [119] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(196),
    [sym_identifier] = ACTIONS(502),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [120] = {
    [anon_sym_STAR_EQ] = ACTIONS(504),
    [anon_sym_PIPE] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_DOLLAR] = ACTIONS(504),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [anon_sym_CARET] = ACTIONS(506),
    [anon_sym_CARET_EQ] = ACTIONS(504),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_DASH_EQ] = ACTIONS(504),
    [anon_sym_GT_GT] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(506),
    [sym__access_op] = ACTIONS(504),
    [anon_sym_COLON_EQ] = ACTIONS(504),
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_AMP_AMP] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(504),
    [anon_sym_GT_GT_EQ] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_AMP] = ACTIONS(506),
    [anon_sym_PERCENT_EQ] = ACTIONS(504),
    [anon_sym_PERCENT] = ACTIONS(506),
    [anon_sym_LT_LT] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(504),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [anon_sym_PIPE_PIPE] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(504),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(504),
    [anon_sym_LT_LT_EQ] = ACTIONS(504),
    [anon_sym_PIPE_EQ] = ACTIONS(504),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS_EQ] = ACTIONS(504),
    [anon_sym_AMP_EQ] = ACTIONS(504),
  },
  [121] = {
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
    [sym_float] = ACTIONS(508),
    [sym_null] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(510),
    [sym_hex] = ACTIONS(508),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(508),
    [sym_double] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(510),
    [sym_binary] = ACTIONS(508),
  },
  [122] = {
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
    [sym_float] = ACTIONS(512),
    [sym_null] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(514),
    [sym_hex] = ACTIONS(512),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(512),
    [sym_double] = ACTIONS(512),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(514),
    [sym_binary] = ACTIONS(512),
  },
  [123] = {
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
  [124] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(518),
  },
  [125] = {
    [sym_readability] = STATE(137),
    [sym_type] = STATE(138),
    [sym_variable_definition] = STATE(205),
    [sym_container_definition] = STATE(205),
    [sym_access_control] = STATE(136),
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym__comma_list_variables] = STATE(206),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(271),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_writelimited] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(522),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [126] = {
    [sym_string] = STATE(207),
    [sym_identifier] = ACTIONS(524),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [127] = {
    [aux_sym_string_repeat1] = STATE(209),
    [sym__escape_sequence] = STATE(209),
    [anon_sym_BSLASHb] = ACTIONS(526),
    [anon_sym_BSLASHv] = ACTIONS(526),
    [aux_sym_string_token1] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(526),
    [anon_sym_BSLASHa] = ACTIONS(526),
    [anon_sym_BSLASHt] = ACTIONS(526),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [anon_sym_BSLASH0] = ACTIONS(526),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(526),
    [anon_sym_BSLASHf] = ACTIONS(526),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(526),
    [anon_sym_BSLASHr] = ACTIONS(526),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(526),
  },
  [128] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(532),
    [sym__comment] = ACTIONS(3),
  },
  [129] = {
    [sym_string] = STATE(211),
    [sym_parameter_list] = STATE(210),
    [aux_sym_extension_repeat1] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym_identifier] = ACTIONS(534),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_DQUOTE] = ACTIONS(257),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(536),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(536),
    [anon_sym_DOT] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(536),
  },
  [131] = {
    [sym_array] = STATE(212),
    [aux_sym_type_repeat2] = STATE(212),
    [aux_sym_type_repeat1] = STATE(213),
    [sym_pointer] = STATE(213),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [132] = {
    [sym_static_assignment] = STATE(214),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
  },
  [133] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(546),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym_identifier] = ACTIONS(544),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [134] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
    [sym__scope_op] = ACTIONS(542),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym_identifier] = ACTIONS(544),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [135] = {
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
  [136] = {
    [sym__base_type] = STATE(30),
    [sym_primitive_type] = STATE(30),
    [sym_readability] = STATE(215),
    [sym_type] = STATE(216),
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
  [137] = {
    [sym_type] = STATE(216),
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
  [138] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(549),
    [sym__comment] = ACTIONS(3),
  },
  [139] = {
    [aux_sym_class_definition_repeat1] = STATE(220),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_COMMA] = ACTIONS(553),
  },
  [140] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
  },
  [141] = {
    [sym_is_function] = STATE(222),
    [sym_is_method] = STATE(222),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [142] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(223),
    [sym_identifier] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(195),
  },
  [143] = {
    [sym_group_expression] = STATE(224),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(69),
    [sym_string] = STATE(224),
    [sym_character] = STATE(224),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(224),
    [sym_collection] = STATE(224),
    [sym__number] = STATE(224),
    [sym__value] = STATE(224),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(224),
    [sym_float] = ACTIONS(559),
    [sym_null] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(561),
    [sym_hex] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(559),
    [sym_double] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(129),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(561),
    [sym_binary] = ACTIONS(559),
  },
  [144] = {
    [anon_sym_STAR_EQ] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_DOLLAR] = ACTIONS(563),
    [anon_sym_LT_EQ] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_EQ_EQ] = ACTIONS(563),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_CARET_EQ] = ACTIONS(563),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_DASH_EQ] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(565),
    [anon_sym_SLASH_EQ] = ACTIONS(563),
    [anon_sym_STAR] = ACTIONS(565),
    [sym__access_op] = ACTIONS(563),
    [anon_sym_COLON_EQ] = ACTIONS(563),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_PLUS] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_GT_GT_EQ] = ACTIONS(563),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_PLUS_PLUS] = ACTIONS(565),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_PERCENT_EQ] = ACTIONS(563),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_LT_LT] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_GT_EQ] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(563),
    [anon_sym_LT_LT_EQ] = ACTIONS(563),
    [anon_sym_PIPE_EQ] = ACTIONS(563),
    [anon_sym_DASH_DASH] = ACTIONS(565),
    [anon_sym_PLUS_EQ] = ACTIONS(563),
    [anon_sym_AMP_EQ] = ACTIONS(563),
  },
  [145] = {
    [aux_sym_string_repeat1] = STATE(145),
    [sym__escape_sequence] = STATE(145),
    [anon_sym_BSLASHb] = ACTIONS(567),
    [anon_sym_BSLASHv] = ACTIONS(567),
    [aux_sym_string_token1] = ACTIONS(570),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(567),
    [anon_sym_BSLASHa] = ACTIONS(567),
    [anon_sym_BSLASHt] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [anon_sym_BSLASH0] = ACTIONS(567),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(567),
    [anon_sym_BSLASHf] = ACTIONS(567),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(567),
    [anon_sym_BSLASHr] = ACTIONS(567),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(567),
  },
  [146] = {
    [anon_sym_LPAREN] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [147] = {
    [sym_array] = STATE(225),
    [aux_sym_type_repeat2] = STATE(225),
    [aux_sym_type_repeat1] = STATE(226),
    [sym_pointer] = STATE(226),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [148] = {
    [sym_array] = STATE(228),
    [sym_scope_expression] = STATE(227),
    [sym_identifier] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(319),
  },
  [149] = {
    [anon_sym_STAR_EQ] = ACTIONS(579),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_DOLLAR] = ACTIONS(579),
    [anon_sym_LT_EQ] = ACTIONS(579),
    [anon_sym_GT] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_EQ_EQ] = ACTIONS(579),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_CARET_EQ] = ACTIONS(579),
    [anon_sym_SLASH] = ACTIONS(581),
    [anon_sym_DASH_EQ] = ACTIONS(579),
    [anon_sym_GT_GT] = ACTIONS(581),
    [anon_sym_SLASH_EQ] = ACTIONS(579),
    [anon_sym_STAR] = ACTIONS(581),
    [sym__access_op] = ACTIONS(579),
    [anon_sym_COLON_EQ] = ACTIONS(579),
    [anon_sym_LT] = ACTIONS(581),
    [anon_sym_AMP_AMP] = ACTIONS(579),
    [anon_sym_PLUS] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(579),
    [anon_sym_GT_GT_EQ] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_PLUS_PLUS] = ACTIONS(581),
    [anon_sym_AMP] = ACTIONS(581),
    [anon_sym_PERCENT_EQ] = ACTIONS(579),
    [anon_sym_PERCENT] = ACTIONS(581),
    [anon_sym_LT_LT] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_GT_EQ] = ACTIONS(579),
    [anon_sym_PIPE_PIPE] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(579),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(579),
    [anon_sym_LT_LT_EQ] = ACTIONS(579),
    [anon_sym_PIPE_EQ] = ACTIONS(579),
    [anon_sym_DASH_DASH] = ACTIONS(581),
    [anon_sym_PLUS_EQ] = ACTIONS(579),
    [anon_sym_AMP_EQ] = ACTIONS(579),
  },
  [150] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(583),
  },
  [151] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(583),
  },
  [152] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(587),
  },
  [153] = {
    [sym_float] = ACTIONS(589),
    [sym_null] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(591),
    [sym_hex] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [sym_long] = ACTIONS(589),
    [sym_double] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(591),
    [sym_identifier] = ACTIONS(591),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(591),
    [sym_binary] = ACTIONS(589),
  },
  [154] = {
    [sym_group_expression] = STATE(232),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(83),
    [sym_string] = STATE(232),
    [sym_character] = STATE(232),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(232),
    [sym_collection] = STATE(232),
    [sym__number] = STATE(232),
    [sym__value] = STATE(232),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(232),
    [sym_float] = ACTIONS(593),
    [sym_null] = ACTIONS(595),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(595),
    [sym_hex] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(593),
    [sym_double] = ACTIONS(593),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(155),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(595),
    [sym_binary] = ACTIONS(593),
  },
  [155] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(597),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(599),
  },
  [156] = {
    [sym_group_expression] = STATE(235),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
    [sym_string] = STATE(235),
    [sym_character] = STATE(235),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(235),
    [sym_collection] = STATE(235),
    [sym__number] = STATE(235),
    [sym__value] = STATE(235),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(235),
    [sym_float] = ACTIONS(601),
    [sym_null] = ACTIONS(603),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(603),
    [sym_hex] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(601),
    [sym_double] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(603),
    [sym_binary] = ACTIONS(601),
  },
  [157] = {
    [sym_group_expression] = STATE(236),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
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
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(607),
    [sym_binary] = ACTIONS(605),
  },
  [158] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(609),
    [sym__comment] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_STAR_EQ] = ACTIONS(611),
    [anon_sym_PIPE] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(613),
    [anon_sym_DOLLAR] = ACTIONS(611),
    [anon_sym_LT_EQ] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(611),
    [anon_sym_COMMA] = ACTIONS(611),
    [anon_sym_EQ_EQ] = ACTIONS(611),
    [anon_sym_CARET] = ACTIONS(613),
    [anon_sym_CARET_EQ] = ACTIONS(611),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_DASH_EQ] = ACTIONS(611),
    [anon_sym_GT_GT] = ACTIONS(613),
    [anon_sym_SLASH_EQ] = ACTIONS(611),
    [anon_sym_STAR] = ACTIONS(613),
    [sym__access_op] = ACTIONS(611),
    [anon_sym_COLON_EQ] = ACTIONS(611),
    [anon_sym_LT] = ACTIONS(613),
    [anon_sym_AMP_AMP] = ACTIONS(611),
    [anon_sym_PLUS] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(611),
    [anon_sym_GT_GT_EQ] = ACTIONS(611),
    [anon_sym_RBRACE] = ACTIONS(611),
    [anon_sym_PLUS_PLUS] = ACTIONS(613),
    [anon_sym_AMP] = ACTIONS(613),
    [anon_sym_PERCENT_EQ] = ACTIONS(611),
    [anon_sym_PERCENT] = ACTIONS(613),
    [anon_sym_LT_LT] = ACTIONS(613),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym_GT_EQ] = ACTIONS(611),
    [anon_sym_PIPE_PIPE] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(611),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(611),
    [anon_sym_LT_LT_EQ] = ACTIONS(611),
    [anon_sym_PIPE_EQ] = ACTIONS(611),
    [anon_sym_DASH_DASH] = ACTIONS(613),
    [anon_sym_PLUS_EQ] = ACTIONS(611),
    [anon_sym_AMP_EQ] = ACTIONS(611),
  },
  [160] = {
    [sym__base_type] = STATE(237),
    [sym_primitive_type] = STATE(237),
    [sym_type] = STATE(238),
    [sym__comma_list_types] = STATE(239),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(615),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(617),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [161] = {
    [sym_return_list] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(470),
  },
  [162] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(470),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [sym_identifier] = ACTIONS(496),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(498),
  },
  [164] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(619),
  },
  [165] = {
    [sym_array] = STATE(165),
    [aux_sym_type_repeat2] = STATE(165),
    [sym_identifier] = ACTIONS(621),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(623),
  },
  [166] = {
    [sym_array] = STATE(165),
    [aux_sym_type_repeat2] = STATE(165),
    [sym_identifier] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(171),
  },
  [167] = {
    [aux_sym_type_repeat1] = STATE(167),
    [sym_pointer] = STATE(167),
    [anon_sym_STAR] = ACTIONS(628),
    [sym_identifier] = ACTIONS(631),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(633),
  },
  [168] = {
    [sym_is_function] = STATE(222),
    [sym_is_method] = STATE(222),
    [sym_is_primitive] = ACTIONS(635),
    [sym__comment] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(67),
  },
  [169] = {
    [sym_static_assignment] = STATE(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(639),
    [sym__comment] = ACTIONS(3),
  },
  [171] = {
    [sym_array] = STATE(100),
    [anon_sym_STAR_EQ] = ACTIONS(641),
    [anon_sym_AMP_EQ] = ACTIONS(641),
    [anon_sym_DASH_DASH] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(641),
    [anon_sym_PLUS_PLUS] = ACTIONS(643),
    [anon_sym_PERCENT_EQ] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_CARET_EQ] = ACTIONS(641),
    [anon_sym_DASH_EQ] = ACTIONS(641),
    [anon_sym_SLASH_EQ] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(641),
    [anon_sym_PIPE_EQ] = ACTIONS(641),
    [sym__access_op] = ACTIONS(651),
    [anon_sym_COLON_EQ] = ACTIONS(641),
    [anon_sym_PLUS_EQ] = ACTIONS(641),
  },
  [172] = {
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(498),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
    [sym__scope_op] = ACTIONS(498),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(496),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [sym__access_op] = ACTIONS(498),
    [anon_sym_COLON_EQ] = ACTIONS(498),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
  },
  [173] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(654),
  },
  [174] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(656),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(656),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
  },
  [176] = {
    [sym_array] = STATE(100),
    [aux_sym__comma_list_values_repeat1] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(660),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(662),
  },
  [177] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
  },
  [178] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__scope_op] = ACTIONS(666),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__scope_op] = ACTIONS(666),
  },
  [180] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(670),
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
    [sym_float] = ACTIONS(672),
    [sym_null] = ACTIONS(674),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(674),
    [sym_hex] = ACTIONS(672),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(672),
    [sym_double] = ACTIONS(672),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(371),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(674),
    [sym_binary] = ACTIONS(672),
  },
  [182] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(637),
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(637),
  },
  [183] = {
    [sym_return_list] = STATE(253),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(676),
  },
  [184] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(676),
    [sym__comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_case] = ACTIONS(581),
    [sym_integer] = ACTIONS(581),
    [sym_float] = ACTIONS(579),
    [sym_binary] = ACTIONS(579),
    [sym_null] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(581),
    [anon_sym_goto] = ACTIONS(581),
    [sym_oct] = ACTIONS(581),
    [sym_hex] = ACTIONS(579),
    [anon_sym_DQUOTE] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(579),
    [anon_sym_return] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(579),
    [anon_sym_switch] = ACTIONS(581),
    [sym_long] = ACTIONS(579),
    [anon_sym_default] = ACTIONS(581),
    [anon_sym_end] = ACTIONS(581),
    [sym_double] = ACTIONS(579),
    [anon_sym_LPAREN] = ACTIONS(581),
    [sym_identifier] = ACTIONS(581),
    [sym__comment] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(581),
    [anon_sym_section] = ACTIONS(581),
  },
  [186] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(678),
  },
  [187] = {
    [sym_group_expression] = STATE(255),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
    [sym_string] = STATE(255),
    [sym_character] = STATE(255),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(255),
    [sym_collection] = STATE(255),
    [sym__number] = STATE(255),
    [sym__value] = STATE(255),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(255),
    [sym_float] = ACTIONS(680),
    [sym_null] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(682),
    [sym_hex] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(680),
    [sym_double] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(682),
    [sym_binary] = ACTIONS(680),
  },
  [188] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(256),
    [sym_identifier] = ACTIONS(684),
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
    [sym_float] = ACTIONS(686),
    [sym_null] = ACTIONS(688),
    [sym__space] = ACTIONS(3),
    [sym_oct] = ACTIONS(688),
    [sym_hex] = ACTIONS(686),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(41),
    [sym_long] = ACTIONS(686),
    [sym_double] = ACTIONS(686),
    [anon_sym_LPAREN] = ACTIONS(27),
    [sym_identifier] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(688),
    [sym_binary] = ACTIONS(686),
  },
  [190] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_COMMA] = ACTIONS(690),
  },
  [191] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(692),
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
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_COMMA] = ACTIONS(490),
  },
  [194] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
    [sym__scope_op] = ACTIONS(696),
  },
  [195] = {
    [anon_sym_s8] = ACTIONS(699),
    [anon_sym_u8] = ACTIONS(699),
    [anon_sym_i16] = ACTIONS(699),
    [anon_sym_u32] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [anon_sym_i8] = ACTIONS(699),
    [anon_sym_DOT] = ACTIONS(701),
    [sym__scope_op] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_s32] = ACTIONS(699),
    [anon_sym_f64] = ACTIONS(699),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_i64] = ACTIONS(699),
    [anon_sym_f32] = ACTIONS(699),
    [anon_sym_u16] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_s16] = ACTIONS(699),
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_i32] = ACTIONS(699),
    [anon_sym_u64] = ACTIONS(699),
    [sym_identifier] = ACTIONS(699),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(701),
    [sym__access_op] = ACTIONS(701),
  },
  [196] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(703),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [197] = {
    [sym_array] = STATE(100),
    [anon_sym_STAR_EQ] = ACTIONS(641),
    [anon_sym_LT_LT_EQ] = ACTIONS(641),
    [anon_sym_DASH_DASH] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
    [anon_sym_PLUS_PLUS] = ACTIONS(643),
    [anon_sym_PERCENT_EQ] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_CARET_EQ] = ACTIONS(641),
    [anon_sym_DASH_EQ] = ACTIONS(641),
    [anon_sym_SLASH_EQ] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(706),
    [anon_sym_PIPE_EQ] = ACTIONS(641),
    [anon_sym_COLON_EQ] = ACTIONS(641),
    [anon_sym_PLUS_EQ] = ACTIONS(641),
    [anon_sym_AMP_EQ] = ACTIONS(641),
  },
  [198] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(709),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
  },
  [199] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(709),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
  },
  [200] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(711),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(670),
    [anon_sym_RBRACE] = ACTIONS(670),
  },
  [201] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(713),
    [anon_sym_RBRACE] = ACTIONS(713),
  },
  [202] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(713),
  },
  [203] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(718),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(718),
  },
  [204] = {
    [anon_sym_STAR] = ACTIONS(110),
    [sym_identifier] = ACTIONS(110),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(722),
  },
  [205] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(266),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_COMMA] = ACTIONS(726),
  },
  [206] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(728),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(730),
    [sym_identifier] = ACTIONS(732),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(730),
    [anon_sym_DOT] = ACTIONS(730),
    [anon_sym_DQUOTE] = ACTIONS(730),
  },
  [208] = {
    [anon_sym_LPAREN] = ACTIONS(281),
    [sym_identifier] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(281),
    [anon_sym_DOT] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(281),
  },
  [209] = {
    [aux_sym_string_repeat1] = STATE(145),
    [sym__escape_sequence] = STATE(145),
    [anon_sym_BSLASHb] = ACTIONS(285),
    [anon_sym_BSLASHv] = ACTIONS(285),
    [aux_sym_string_token1] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHn] = ACTIONS(285),
    [anon_sym_BSLASHa] = ACTIONS(285),
    [anon_sym_BSLASHt] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(734),
    [anon_sym_BSLASH0] = ACTIONS(285),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(285),
    [anon_sym_BSLASHf] = ACTIONS(285),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(285),
    [anon_sym_BSLASHr] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(285),
  },
  [210] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(736),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [sym_string] = STATE(211),
    [aux_sym_extension_repeat1] = STATE(211),
    [anon_sym_LPAREN] = ACTIONS(730),
    [sym_identifier] = ACTIONS(738),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(741),
    [anon_sym_DOT] = ACTIONS(730),
    [anon_sym_DQUOTE] = ACTIONS(744),
  },
  [212] = {
    [sym_array] = STATE(269),
    [aux_sym_type_repeat2] = STATE(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [213] = {
    [sym_array] = STATE(270),
    [aux_sym_type_repeat2] = STATE(270),
    [aux_sym_type_repeat1] = STATE(271),
    [sym_pointer] = STATE(271),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [214] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_COMMA] = ACTIONS(749),
  },
  [215] = {
    [sym_type] = STATE(272),
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
  [216] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(751),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [sym_static_assignment] = STATE(182),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
  },
  [218] = {
    [sym_pointer] = STATE(275),
    [anon_sym_STAR] = ACTIONS(167),
    [sym_identifier] = ACTIONS(753),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [219] = {
    [sym_access_control] = STATE(136),
    [sym__base_type] = STATE(30),
    [sym_readability] = STATE(137),
    [sym_primitive_type] = STATE(30),
    [sym_type] = STATE(138),
    [sym_variable_definition] = STATE(276),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(271),
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
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [220] = {
    [aux_sym_class_definition_repeat1] = STATE(278),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(553),
  },
  [221] = {
    [sym_parameter_list] = STATE(279),
    [sym_return_list] = STATE(253),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(676),
  },
  [222] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(757),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
    [sym__scope_op] = ACTIONS(759),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [224] = {
    [sym_array] = STATE(100),
    [anon_sym_STAR_EQ] = ACTIONS(641),
    [anon_sym_LT_LT_EQ] = ACTIONS(641),
    [anon_sym_DASH_DASH] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(641),
    [anon_sym_GT_GT_EQ] = ACTIONS(641),
    [anon_sym_PLUS_PLUS] = ACTIONS(643),
    [anon_sym_PERCENT_EQ] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(645),
    [anon_sym_CARET_EQ] = ACTIONS(641),
    [anon_sym_DASH_EQ] = ACTIONS(641),
    [anon_sym_SLASH_EQ] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(762),
    [anon_sym_PIPE_EQ] = ACTIONS(641),
    [anon_sym_COLON_EQ] = ACTIONS(641),
    [anon_sym_PLUS_EQ] = ACTIONS(641),
    [anon_sym_AMP_EQ] = ACTIONS(641),
  },
  [225] = {
    [sym_array] = STATE(281),
    [aux_sym_type_repeat2] = STATE(281),
    [anon_sym_LPAREN] = ACTIONS(747),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [226] = {
    [sym_array] = STATE(282),
    [aux_sym_type_repeat2] = STATE(282),
    [aux_sym_type_repeat1] = STATE(283),
    [sym_pointer] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(747),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [227] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(765),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_DOLLAR] = ACTIONS(542),
    [anon_sym_LT_EQ] = ACTIONS(542),
    [anon_sym_GT] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_EQ_EQ] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(544),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_LT] = ACTIONS(544),
    [anon_sym_AMP_AMP] = ACTIONS(542),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_AMP] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(544),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_LT_LT] = ACTIONS(544),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_GT_EQ] = ACTIONS(542),
    [anon_sym_PIPE_PIPE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_BANG_EQ] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [228] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(542),
    [anon_sym_DASH] = ACTIONS(544),
    [anon_sym_DOLLAR] = ACTIONS(542),
    [anon_sym_LT_EQ] = ACTIONS(542),
    [anon_sym_GT] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_EQ_EQ] = ACTIONS(542),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_SLASH] = ACTIONS(544),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(544),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_STAR] = ACTIONS(544),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_LT] = ACTIONS(544),
    [anon_sym_AMP_AMP] = ACTIONS(542),
    [anon_sym_PLUS] = ACTIONS(544),
    [anon_sym_AMP] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(544),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_LT_LT] = ACTIONS(544),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_GT_EQ] = ACTIONS(542),
    [anon_sym_PIPE_PIPE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [anon_sym_BANG_EQ] = ACTIONS(542),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [229] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(284),
    [sym_identifier] = ACTIONS(768),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [230] = {
    [sym_group_expression] = STATE(285),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(151),
    [sym_string] = STATE(285),
    [sym_character] = STATE(285),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(285),
    [sym_collection] = STATE(285),
    [sym__number] = STATE(285),
    [sym__value] = STATE(285),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(285),
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
    [sym_identifier] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(772),
    [sym_binary] = ACTIONS(770),
  },
  [231] = {
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
  [232] = {
    [sym_array] = STATE(100),
    [anon_sym_STAR_EQ] = ACTIONS(641),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(643),
    [anon_sym_DOLLAR] = ACTIONS(641),
    [anon_sym_LT_EQ] = ACTIONS(641),
    [anon_sym_GT] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_EQ_EQ] = ACTIONS(641),
    [anon_sym_CARET] = ACTIONS(643),
    [anon_sym_SLASH] = ACTIONS(643),
    [anon_sym_CARET_EQ] = ACTIONS(641),
    [anon_sym_DASH_EQ] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(643),
    [anon_sym_SLASH_EQ] = ACTIONS(641),
    [anon_sym_STAR] = ACTIONS(643),
    [sym__access_op] = ACTIONS(778),
    [anon_sym_COLON_EQ] = ACTIONS(641),
    [anon_sym_LT] = ACTIONS(643),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(643),
    [anon_sym_AMP] = ACTIONS(643),
    [anon_sym_PERCENT] = ACTIONS(643),
    [anon_sym_GT_GT_EQ] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(643),
    [anon_sym_LT_LT] = ACTIONS(643),
    [anon_sym_PERCENT_EQ] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_GT_EQ] = ACTIONS(641),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(648),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(643),
    [anon_sym_LT_LT_EQ] = ACTIONS(641),
    [anon_sym_PIPE_EQ] = ACTIONS(641),
    [anon_sym_DASH_DASH] = ACTIONS(643),
    [anon_sym_PLUS_EQ] = ACTIONS(641),
    [anon_sym_AMP_EQ] = ACTIONS(641),
  },
  [233] = {
    [anon_sym_STAR_EQ] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(498),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_DOLLAR] = ACTIONS(498),
    [anon_sym_LT_EQ] = ACTIONS(498),
    [anon_sym_GT] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_EQ_EQ] = ACTIONS(498),
    [anon_sym_CARET] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_CARET_EQ] = ACTIONS(498),
    [anon_sym_DASH_EQ] = ACTIONS(498),
    [anon_sym_GT_GT] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(498),
    [anon_sym_STAR] = ACTIONS(496),
    [sym__access_op] = ACTIONS(498),
    [anon_sym_COLON_EQ] = ACTIONS(498),
    [anon_sym_LT] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_AMP] = ACTIONS(496),
    [anon_sym_PERCENT] = ACTIONS(496),
    [anon_sym_GT_GT_EQ] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
    [anon_sym_LT_LT] = ACTIONS(496),
    [anon_sym_PERCENT_EQ] = ACTIONS(498),
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_GT_EQ] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(498),
    [anon_sym_BANG_EQ] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(496),
    [anon_sym_LT_LT_EQ] = ACTIONS(498),
    [anon_sym_PIPE_EQ] = ACTIONS(498),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [anon_sym_PLUS_EQ] = ACTIONS(498),
    [anon_sym_AMP_EQ] = ACTIONS(498),
  },
  [234] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(784),
  },
  [235] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(786),
  },
  [236] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(670),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [237] = {
    [sym_array] = STATE(288),
    [aux_sym_type_repeat2] = STATE(288),
    [aux_sym_type_repeat1] = STATE(289),
    [sym_pointer] = STATE(289),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [238] = {
    [aux_sym__comma_list_types_repeat1] = STATE(291),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(790),
  },
  [239] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(792),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [sym_identifier] = ACTIONS(699),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(701),
  },
  [241] = {
    [sym_is_function] = STATE(292),
    [sym_is_method] = STATE(292),
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
    [sym_static_assignment] = STATE(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(466),
    [anon_sym_DOT] = ACTIONS(794),
    [sym__space] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_STAR_EQ] = ACTIONS(701),
    [anon_sym_AMP_EQ] = ACTIONS(701),
    [anon_sym_DASH_DASH] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(701),
    [anon_sym_GT_GT_EQ] = ACTIONS(701),
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_PLUS_PLUS] = ACTIONS(699),
    [sym__scope_op] = ACTIONS(701),
    [anon_sym_PERCENT_EQ] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_CARET_EQ] = ACTIONS(701),
    [anon_sym_DASH_EQ] = ACTIONS(701),
    [anon_sym_SLASH_EQ] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(701),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(699),
    [anon_sym_LT_LT_EQ] = ACTIONS(701),
    [anon_sym_PIPE_EQ] = ACTIONS(701),
    [sym__access_op] = ACTIONS(701),
    [anon_sym_COLON_EQ] = ACTIONS(701),
    [anon_sym_PLUS_EQ] = ACTIONS(701),
  },
  [245] = {
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(294),
    [sym_identifier] = ACTIONS(796),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [246] = {
    [sym_group_expression] = STATE(295),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(295),
    [sym_character] = STATE(295),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(295),
    [sym_collection] = STATE(295),
    [sym__number] = STATE(295),
    [sym__value] = STATE(295),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(295),
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
    [sym_identifier] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(800),
    [sym_binary] = ACTIONS(798),
  },
  [247] = {
    [sym_group_expression] = STATE(296),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(175),
    [sym_string] = STATE(296),
    [sym_character] = STATE(296),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(296),
    [sym_collection] = STATE(296),
    [sym__number] = STATE(296),
    [sym__value] = STATE(296),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(296),
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
    [sym_identifier] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(804),
    [sym_binary] = ACTIONS(802),
  },
  [248] = {
    [aux_sym__comma_list_values_repeat1] = STATE(297),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(806),
    [anon_sym_COMMA] = ACTIONS(662),
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
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(298),
    [sym_identifier] = ACTIONS(812),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [251] = {
    [sym_group_expression] = STATE(299),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(179),
    [sym_string] = STATE(299),
    [sym_character] = STATE(299),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(299),
    [sym_collection] = STATE(299),
    [sym__number] = STATE(299),
    [sym__value] = STATE(299),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(299),
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
    [sym_identifier] = ACTIONS(371),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(816),
    [sym_binary] = ACTIONS(814),
  },
  [252] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(668),
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
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(822),
  },
  [256] = {
    [anon_sym_STAR_EQ] = ACTIONS(542),
    [anon_sym_LT_LT_EQ] = ACTIONS(542),
    [anon_sym_DASH_DASH] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(824),
    [anon_sym_GT_GT_EQ] = ACTIONS(542),
    [anon_sym_PLUS_PLUS] = ACTIONS(544),
    [anon_sym_PERCENT_EQ] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_CARET_EQ] = ACTIONS(542),
    [anon_sym_DASH_EQ] = ACTIONS(542),
    [anon_sym_SLASH_EQ] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_PIPE_EQ] = ACTIONS(542),
    [anon_sym_COLON_EQ] = ACTIONS(542),
    [anon_sym_PLUS_EQ] = ACTIONS(542),
    [anon_sym_AMP_EQ] = ACTIONS(542),
  },
  [257] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(658),
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
    [sym_array] = STATE(134),
    [sym_scope_expression] = STATE(302),
    [sym_identifier] = ACTIONS(836),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [263] = {
    [sym_group_expression] = STATE(303),
    [sym_call_expression] = STATE(33),
    [sym_scope_expression] = STATE(199),
    [sym_string] = STATE(303),
    [sym_character] = STATE(303),
    [sym_access_expression] = STATE(33),
    [sym_binding_expression] = STATE(303),
    [sym_collection] = STATE(303),
    [sym__number] = STATE(303),
    [sym__value] = STATE(303),
    [sym_array_expression] = STATE(33),
    [sym__literal] = STATE(303),
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
    [sym_identifier] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(840),
    [sym_binary] = ACTIONS(838),
  },
  [264] = {
    [sym__base_type] = STATE(304),
    [sym_primitive_type] = STATE(304),
    [sym_container_types] = STATE(305),
    [sym_type] = STATE(130),
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
    [sym_access_control] = STATE(136),
    [sym__base_type] = STATE(30),
    [sym_readability] = STATE(137),
    [sym_primitive_type] = STATE(30),
    [sym_type] = STATE(138),
    [sym_container_definition] = STATE(306),
    [sym_variable_definition] = STATE(306),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_private] = ACTIONS(271),
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
    [anon_sym_protected] = ACTIONS(271),
    [anon_sym_system_readwrite] = ACTIONS(31),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_readonly] = ACTIONS(31),
    [anon_sym_s16] = ACTIONS(5),
    [sym_identifier] = ACTIONS(522),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_protected_write] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(31),
  },
  [266] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(307),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(844),
    [anon_sym_COMMA] = ACTIONS(726),
  },
  [267] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(846),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(846),
  },
  [268] = {
    [anon_sym_LPAREN] = ACTIONS(563),
    [sym_identifier] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
  },
  [269] = {
    [sym_array] = STATE(269),
    [aux_sym_type_repeat2] = STATE(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(848),
    [anon_sym_DOT] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(850),
    [sym__space] = ACTIONS(3),
  },
  [270] = {
    [sym_array] = STATE(269),
    [aux_sym_type_repeat2] = STATE(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(853),
    [anon_sym_DOT] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
  },
  [271] = {
    [aux_sym_type_repeat1] = STATE(271),
    [sym_pointer] = STATE(271),
    [anon_sym_STAR] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(633),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
  },
  [272] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(855),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [sym_static_assignment] = STATE(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
  },
  [274] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(857),
    [sym__comment] = ACTIONS(3),
  },
  [275] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(859),
    [sym__comment] = ACTIONS(3),
  },
  [276] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(861),
  },
  [277] = {
    [sym_pointer] = STATE(310),
    [anon_sym_STAR] = ACTIONS(167),
    [sym_identifier] = ACTIONS(859),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [278] = {
    [aux_sym_class_definition_repeat1] = STATE(278),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(863),
  },
  [279] = {
    [sym_return_list] = STATE(311),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(820),
  },
  [280] = {
    [sym_parameter_list] = STATE(312),
    [sym_return_list] = STATE(311),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(820),
  },
  [281] = {
    [sym_array] = STATE(281),
    [aux_sym_type_repeat2] = STATE(281),
    [anon_sym_LPAREN] = ACTIONS(848),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(850),
  },
  [282] = {
    [sym_array] = STATE(281),
    [aux_sym_type_repeat2] = STATE(281),
    [anon_sym_LPAREN] = ACTIONS(853),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [283] = {
    [aux_sym_type_repeat1] = STATE(283),
    [sym_pointer] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(633),
  },
  [284] = {
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym__scope_op] = ACTIONS(866),
  },
  [285] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(869),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(872),
  },
  [286] = {
    [anon_sym_STAR_EQ] = ACTIONS(701),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(701),
    [anon_sym_DASH] = ACTIONS(699),
    [anon_sym_DOLLAR] = ACTIONS(701),
    [anon_sym_LT_EQ] = ACTIONS(701),
    [anon_sym_GT] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(701),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [anon_sym_CARET] = ACTIONS(699),
    [anon_sym_SLASH] = ACTIONS(699),
    [anon_sym_CARET_EQ] = ACTIONS(701),
    [anon_sym_DASH_EQ] = ACTIONS(701),
    [anon_sym_GT_GT] = ACTIONS(699),
    [anon_sym_SLASH_EQ] = ACTIONS(701),
    [anon_sym_STAR] = ACTIONS(699),
    [sym__access_op] = ACTIONS(701),
    [anon_sym_COLON_EQ] = ACTIONS(701),
    [anon_sym_LT] = ACTIONS(699),
    [anon_sym_AMP_AMP] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(699),
    [anon_sym_AMP] = ACTIONS(699),
    [anon_sym_PERCENT] = ACTIONS(699),
    [anon_sym_GT_GT_EQ] = ACTIONS(701),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(699),
    [anon_sym_LT_LT] = ACTIONS(699),
    [anon_sym_PERCENT_EQ] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_GT_EQ] = ACTIONS(701),
    [anon_sym_PIPE_PIPE] = ACTIONS(701),
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_BANG_EQ] = ACTIONS(701),
    [anon_sym_PIPE] = ACTIONS(699),
    [anon_sym_LT_LT_EQ] = ACTIONS(701),
    [anon_sym_PIPE_EQ] = ACTIONS(701),
    [anon_sym_DASH_DASH] = ACTIONS(699),
    [anon_sym_PLUS_EQ] = ACTIONS(701),
    [anon_sym_AMP_EQ] = ACTIONS(701),
  },
  [287] = {
    [anon_sym_STAR_EQ] = ACTIONS(875),
    [anon_sym_PIPE] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [anon_sym_LT_EQ] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(877),
    [anon_sym_RPAREN] = ACTIONS(875),
    [anon_sym_COMMA] = ACTIONS(875),
    [anon_sym_EQ_EQ] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(877),
    [anon_sym_CARET_EQ] = ACTIONS(875),
    [anon_sym_SLASH] = ACTIONS(877),
    [anon_sym_DASH_EQ] = ACTIONS(875),
    [anon_sym_GT_GT] = ACTIONS(877),
    [anon_sym_SLASH_EQ] = ACTIONS(875),
    [anon_sym_STAR] = ACTIONS(877),
    [sym__access_op] = ACTIONS(875),
    [anon_sym_COLON_EQ] = ACTIONS(875),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_AMP_AMP] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(877),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(875),
    [anon_sym_GT_GT_EQ] = ACTIONS(875),
    [anon_sym_RBRACE] = ACTIONS(875),
    [anon_sym_PLUS_PLUS] = ACTIONS(877),
    [anon_sym_AMP] = ACTIONS(877),
    [anon_sym_PERCENT_EQ] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(877),
    [anon_sym_LT_LT] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(875),
    [anon_sym_GT_EQ] = ACTIONS(875),
    [anon_sym_PIPE_PIPE] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(875),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BANG_EQ] = ACTIONS(875),
    [anon_sym_LT_LT_EQ] = ACTIONS(875),
    [anon_sym_PIPE_EQ] = ACTIONS(875),
    [anon_sym_DASH_DASH] = ACTIONS(877),
    [anon_sym_PLUS_EQ] = ACTIONS(875),
    [anon_sym_AMP_EQ] = ACTIONS(875),
  },
  [288] = {
    [sym_array] = STATE(313),
    [aux_sym_type_repeat2] = STATE(313),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [289] = {
    [sym_array] = STATE(314),
    [aux_sym_type_repeat2] = STATE(314),
    [aux_sym_type_repeat1] = STATE(315),
    [sym_pointer] = STATE(315),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [290] = {
    [sym_type] = STATE(316),
    [sym__base_type] = STATE(237),
    [sym_primitive_type] = STATE(237),
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
    [sym_identifier] = ACTIONS(617),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [aux_sym__comma_list_types_repeat1] = STATE(317),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(879),
    [anon_sym_COMMA] = ACTIONS(790),
  },
  [292] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(881),
    [sym__comment] = ACTIONS(3),
  },
  [293] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(883),
    [anon_sym_COMMA] = ACTIONS(883),
  },
  [294] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(885),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
  },
  [295] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(888),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(872),
  },
  [296] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_COMMA] = ACTIONS(891),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [297] = {
    [aux_sym__comma_list_values_repeat1] = STATE(297),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(891),
    [anon_sym_COMMA] = ACTIONS(893),
  },
  [298] = {
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [sym__scope_op] = ACTIONS(896),
  },
  [299] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(641),
    [anon_sym_LBRACK] = ACTIONS(872),
  },
  [300] = {
    [anon_sym_case] = ACTIONS(877),
    [sym_integer] = ACTIONS(877),
    [sym_float] = ACTIONS(875),
    [sym_binary] = ACTIONS(875),
    [sym_null] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(875),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(877),
    [anon_sym_goto] = ACTIONS(877),
    [sym_oct] = ACTIONS(877),
    [sym_hex] = ACTIONS(875),
    [anon_sym_DQUOTE] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(875),
    [anon_sym_return] = ACTIONS(877),
    [anon_sym_LBRACE] = ACTIONS(875),
    [anon_sym_switch] = ACTIONS(877),
    [sym_long] = ACTIONS(875),
    [anon_sym_default] = ACTIONS(877),
    [anon_sym_end] = ACTIONS(877),
    [sym_double] = ACTIONS(875),
    [anon_sym_LPAREN] = ACTIONS(877),
    [sym_identifier] = ACTIONS(877),
    [sym__comment] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(877),
    [anon_sym_section] = ACTIONS(877),
  },
  [301] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(902),
    [sym__comment] = ACTIONS(3),
  },
  [302] = {
    [sym__space] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(904),
    [anon_sym_RBRACE] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
  },
  [303] = {
    [sym_array] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(907),
    [sym__space] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
  },
  [304] = {
    [sym_array] = STATE(319),
    [aux_sym_type_repeat2] = STATE(319),
    [aux_sym_type_repeat1] = STATE(320),
    [sym_pointer] = STATE(320),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [305] = {
    [sym_static_assignment] = STATE(214),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_COMMA] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
  },
  [306] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_COMMA] = ACTIONS(910),
  },
  [307] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(307),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_COMMA] = ACTIONS(912),
  },
  [308] = {
    [sym_static_assignment] = STATE(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(794),
    [anon_sym_COMMA] = ACTIONS(794),
    [sym__space] = ACTIONS(3),
  },
  [309] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(915),
    [sym__comment] = ACTIONS(3),
  },
  [310] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(917),
    [sym__comment] = ACTIONS(3),
  },
  [311] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(919),
    [sym__comment] = ACTIONS(3),
  },
  [312] = {
    [sym_return_list] = STATE(322),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(919),
  },
  [313] = {
    [sym_array] = STATE(313),
    [aux_sym_type_repeat2] = STATE(313),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(848),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(850),
  },
  [314] = {
    [sym_array] = STATE(313),
    [aux_sym_type_repeat2] = STATE(313),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [315] = {
    [aux_sym_type_repeat1] = STATE(315),
    [sym_pointer] = STATE(315),
    [anon_sym_STAR] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
  },
  [316] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(921),
    [anon_sym_COMMA] = ACTIONS(921),
  },
  [317] = {
    [aux_sym__comma_list_types_repeat1] = STATE(317),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(921),
    [anon_sym_COMMA] = ACTIONS(923),
  },
  [318] = {
    [sym_parameter_list] = STATE(323),
    [sym_return_list] = STATE(322),
    [anon_sym_LPAREN] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(919),
  },
  [319] = {
    [sym_array] = STATE(324),
    [aux_sym_type_repeat2] = STATE(324),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(747),
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [320] = {
    [sym_array] = STATE(325),
    [aux_sym_type_repeat2] = STATE(325),
    [aux_sym_type_repeat1] = STATE(326),
    [sym_pointer] = STATE(326),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(747),
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [321] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(926),
    [sym__comment] = ACTIONS(3),
  },
  [322] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(928),
    [sym__comment] = ACTIONS(3),
  },
  [323] = {
    [sym_return_list] = STATE(327),
    [sym__comment] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(928),
  },
  [324] = {
    [sym_array] = STATE(324),
    [aux_sym_type_repeat2] = STATE(324),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(848),
    [anon_sym_RPAREN] = ACTIONS(848),
    [anon_sym_COMMA] = ACTIONS(848),
    [anon_sym_LBRACK] = ACTIONS(850),
  },
  [325] = {
    [sym_array] = STATE(324),
    [aux_sym_type_repeat2] = STATE(324),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(87),
  },
  [326] = {
    [aux_sym_type_repeat1] = STATE(326),
    [sym_pointer] = STATE(326),
    [anon_sym_STAR] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
  },
  [327] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(930),
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
  [119] = {.count = 1, .reusable = true}, SHIFT(65),
  [121] = {.count = 1, .reusable = true}, SHIFT(66),
  [123] = {.count = 1, .reusable = true}, SHIFT(67),
  [125] = {.count = 1, .reusable = true}, SHIFT(71),
  [127] = {.count = 1, .reusable = false}, SHIFT(71),
  [129] = {.count = 1, .reusable = false}, SHIFT(68),
  [131] = {.count = 1, .reusable = true}, SHIFT(73),
  [133] = {.count = 1, .reusable = false}, SHIFT(73),
  [135] = {.count = 1, .reusable = true}, SHIFT(72),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [139] = {.count = 1, .reusable = false}, SHIFT(75),
  [141] = {.count = 1, .reusable = false}, SHIFT(76),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(82),
  [147] = {.count = 1, .reusable = false}, SHIFT(77),
  [149] = {.count = 1, .reusable = false}, SHIFT(82),
  [151] = {.count = 1, .reusable = false}, SHIFT(78),
  [153] = {.count = 1, .reusable = true}, SHIFT(78),
  [155] = {.count = 1, .reusable = false}, SHIFT(79),
  [157] = {.count = 1, .reusable = true}, SHIFT(77),
  [159] = {.count = 1, .reusable = true}, SHIFT(85),
  [161] = {.count = 1, .reusable = false}, SHIFT(85),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [165] = {.count = 1, .reusable = false}, SHIFT(86),
  [167] = {.count = 1, .reusable = false}, SHIFT(87),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [171] = {.count = 1, .reusable = true}, SHIFT(88),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_binding_expression, 1),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_binding_expression, 1),
  [181] = {.count = 1, .reusable = false}, SHIFT(59),
  [183] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [185] = {.count = 1, .reusable = false}, SHIFT(66),
  [187] = {.count = 1, .reusable = false}, SHIFT(91),
  [189] = {.count = 1, .reusable = false}, SHIFT(67),
  [191] = {.count = 1, .reusable = true}, SHIFT(94),
  [193] = {.count = 1, .reusable = false}, SHIFT(96),
  [195] = {.count = 1, .reusable = true}, SHIFT(97),
  [197] = {.count = 1, .reusable = true}, SHIFT(98),
  [199] = {.count = 1, .reusable = true}, SHIFT(95),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [203] = {.count = 1, .reusable = true}, SHIFT(103),
  [205] = {.count = 1, .reusable = false}, SHIFT(104),
  [207] = {.count = 1, .reusable = false}, SHIFT(105),
  [209] = {.count = 1, .reusable = true}, SHIFT(108),
  [211] = {.count = 1, .reusable = false}, SHIFT(108),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [215] = {.count = 1, .reusable = false}, SHIFT(109),
  [217] = {.count = 1, .reusable = false}, SHIFT(110),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [221] = {.count = 1, .reusable = false}, SHIFT(113),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(115),
  [227] = {.count = 1, .reusable = false}, SHIFT(116),
  [229] = {.count = 1, .reusable = true}, SHIFT(117),
  [231] = {.count = 1, .reusable = true}, SHIFT(118),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(119),
  [237] = {.count = 1, .reusable = true}, SHIFT(120),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_value, 1),
  [241] = {.count = 1, .reusable = true}, SHIFT(121),
  [243] = {.count = 1, .reusable = true}, SHIFT(123),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(125),
  [251] = {.count = 1, .reusable = false}, SHIFT(129),
  [253] = {.count = 1, .reusable = true}, SHIFT(126),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 2, .dynamic_precedence = 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(127),
  [259] = {.count = 1, .reusable = false}, SHIFT(130),
  [261] = {.count = 1, .reusable = false}, SHIFT(131),
  [263] = {.count = 1, .reusable = false}, SHIFT(133),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [271] = {.count = 1, .reusable = false}, SHIFT(135),
  [273] = {.count = 1, .reusable = true}, SHIFT(141),
  [275] = {.count = 1, .reusable = true}, SHIFT(142),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(143),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(145),
  [287] = {.count = 1, .reusable = false}, SHIFT(145),
  [289] = {.count = 1, .reusable = true}, SHIFT(144),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_end_extension, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [301] = {.count = 1, .reusable = false}, SHIFT(147),
  [303] = {.count = 1, .reusable = true}, SHIFT(148),
  [305] = {.count = 1, .reusable = true}, SHIFT(149),
  [307] = {.count = 1, .reusable = true}, SHIFT(152),
  [309] = {.count = 1, .reusable = false}, SHIFT(152),
  [311] = {.count = 1, .reusable = false}, SHIFT(150),
  [313] = {.count = 1, .reusable = false}, SHIFT(153),
  [315] = {.count = 1, .reusable = true}, SHIFT(153),
  [317] = {.count = 1, .reusable = true}, SHIFT(154),
  [319] = {.count = 1, .reusable = true}, SHIFT(155),
  [321] = {.count = 1, .reusable = true}, SHIFT(159),
  [323] = {.count = 1, .reusable = true}, SHIFT(160),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [331] = {.count = 1, .reusable = true}, SHIFT(163),
  [333] = {.count = 1, .reusable = true}, SHIFT(164),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(168),
  [339] = {.count = 1, .reusable = false}, SHIFT(169),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [345] = {.count = 1, .reusable = true}, SHIFT(171),
  [347] = {.count = 1, .reusable = false}, SHIFT(171),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(172),
  [353] = {.count = 1, .reusable = true}, SHIFT(173),
  [355] = {.count = 1, .reusable = true}, SHIFT(176),
  [357] = {.count = 1, .reusable = false}, SHIFT(176),
  [359] = {.count = 1, .reusable = false}, SHIFT(174),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(180),
  [369] = {.count = 1, .reusable = false}, SHIFT(180),
  [371] = {.count = 1, .reusable = false}, SHIFT(178),
  [373] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [379] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [406] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [409] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [412] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [421] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [445] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [448] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [466] = {.count = 1, .reusable = true}, SHIFT(181),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [472] = {.count = 1, .reusable = true}, SHIFT(185),
  [474] = {.count = 1, .reusable = true}, SHIFT(186),
  [476] = {.count = 1, .reusable = false}, SHIFT(186),
  [478] = {.count = 1, .reusable = true}, SHIFT(75),
  [480] = {.count = 1, .reusable = true}, SHIFT(188),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [484] = {.count = 1, .reusable = true}, SHIFT(189),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [488] = {.count = 1, .reusable = true}, SHIFT(191),
  [490] = {.count = 1, .reusable = true}, SHIFT(192),
  [492] = {.count = 1, .reusable = false}, SHIFT(194),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_use_definition, 3),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [500] = {.count = 1, .reusable = true}, SHIFT(195),
  [502] = {.count = 1, .reusable = false}, SHIFT(196),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [508] = {.count = 1, .reusable = true}, SHIFT(197),
  [510] = {.count = 1, .reusable = false}, SHIFT(197),
  [512] = {.count = 1, .reusable = true}, SHIFT(200),
  [514] = {.count = 1, .reusable = false}, SHIFT(200),
  [516] = {.count = 1, .reusable = false}, SHIFT(198),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 2),
  [520] = {.count = 1, .reusable = true}, SHIFT(203),
  [522] = {.count = 1, .reusable = false}, SHIFT(204),
  [524] = {.count = 1, .reusable = false}, SHIFT(207),
  [526] = {.count = 1, .reusable = true}, SHIFT(209),
  [528] = {.count = 1, .reusable = false}, SHIFT(209),
  [530] = {.count = 1, .reusable = true}, SHIFT(208),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 3, .dynamic_precedence = 1),
  [534] = {.count = 1, .reusable = false}, SHIFT(211),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_container_types, 1),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_scope_expression, 3),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_scope_expression, 3),
  [546] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(61),
  [549] = {.count = 1, .reusable = false}, SHIFT(217),
  [551] = {.count = 1, .reusable = true}, SHIFT(218),
  [553] = {.count = 1, .reusable = true}, SHIFT(219),
  [555] = {.count = 1, .reusable = false}, SHIFT(221),
  [557] = {.count = 1, .reusable = false}, SHIFT(223),
  [559] = {.count = 1, .reusable = true}, SHIFT(224),
  [561] = {.count = 1, .reusable = false}, SHIFT(224),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [567] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(145),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(145),
  [573] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_cast_ops, 2),
  [577] = {.count = 1, .reusable = false}, SHIFT(227),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [583] = {.count = 1, .reusable = true}, SHIFT(229),
  [585] = {.count = 1, .reusable = true}, SHIFT(230),
  [587] = {.count = 1, .reusable = true}, SHIFT(231),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [593] = {.count = 1, .reusable = true}, SHIFT(232),
  [595] = {.count = 1, .reusable = false}, SHIFT(232),
  [597] = {.count = 1, .reusable = true}, SHIFT(233),
  [599] = {.count = 1, .reusable = true}, SHIFT(234),
  [601] = {.count = 1, .reusable = true}, SHIFT(235),
  [603] = {.count = 1, .reusable = false}, SHIFT(235),
  [605] = {.count = 1, .reusable = true}, SHIFT(236),
  [607] = {.count = 1, .reusable = false}, SHIFT(236),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_cast_expression, 2),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [617] = {.count = 1, .reusable = false}, SHIFT(237),
  [619] = {.count = 1, .reusable = true}, SHIFT(240),
  [621] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [623] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(88),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [628] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(87),
  [631] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [633] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [635] = {.count = 1, .reusable = true}, SHIFT(241),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [639] = {.count = 1, .reusable = false}, SHIFT(243),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_access_expression, 3),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_access_expression, 3),
  [645] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(97),
  [648] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(98),
  [651] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(95),
  [654] = {.count = 1, .reusable = true}, SHIFT(244),
  [656] = {.count = 1, .reusable = true}, SHIFT(245),
  [658] = {.count = 1, .reusable = true}, SHIFT(246),
  [660] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 1),
  [662] = {.count = 1, .reusable = true}, SHIFT(247),
  [664] = {.count = 1, .reusable = true}, SHIFT(249),
  [666] = {.count = 1, .reusable = true}, SHIFT(250),
  [668] = {.count = 1, .reusable = true}, SHIFT(251),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [672] = {.count = 1, .reusable = true}, SHIFT(252),
  [674] = {.count = 1, .reusable = false}, SHIFT(252),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [678] = {.count = 1, .reusable = true}, SHIFT(254),
  [680] = {.count = 1, .reusable = true}, SHIFT(255),
  [682] = {.count = 1, .reusable = false}, SHIFT(255),
  [684] = {.count = 1, .reusable = false}, SHIFT(256),
  [686] = {.count = 1, .reusable = true}, SHIFT(257),
  [688] = {.count = 1, .reusable = false}, SHIFT(257),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [692] = {.count = 1, .reusable = false}, SHIFT(258),
  [694] = {.count = 1, .reusable = true}, SHIFT(260),
  [696] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(115),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [703] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(119),
  [706] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(121),
  [709] = {.count = 1, .reusable = true}, SHIFT(262),
  [711] = {.count = 1, .reusable = true}, SHIFT(263),
  [713] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2), SHIFT_REPEAT(123),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [722] = {.count = 1, .reusable = true}, SHIFT(264),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [726] = {.count = 1, .reusable = true}, SHIFT(265),
  [728] = {.count = 1, .reusable = true}, SHIFT(267),
  [730] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2),
  [732] = {.count = 1, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2),
  [734] = {.count = 1, .reusable = true}, SHIFT(268),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 4, .dynamic_precedence = 1),
  [738] = {.count = 2, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(211),
  [741] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(126),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(127),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 4),
  [751] = {.count = 1, .reusable = false}, SHIFT(273),
  [753] = {.count = 1, .reusable = false}, SHIFT(274),
  [755] = {.count = 1, .reusable = true}, SHIFT(277),
  [757] = {.count = 1, .reusable = false}, SHIFT(280),
  [759] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(142),
  [762] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(143),
  [765] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(148),
  [768] = {.count = 1, .reusable = false}, SHIFT(284),
  [770] = {.count = 1, .reusable = true}, SHIFT(285),
  [772] = {.count = 1, .reusable = false}, SHIFT(285),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [778] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(154),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(155),
  [784] = {.count = 1, .reusable = true}, SHIFT(286),
  [786] = {.count = 1, .reusable = true}, SHIFT(287),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [790] = {.count = 1, .reusable = true}, SHIFT(290),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [794] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [796] = {.count = 1, .reusable = false}, SHIFT(294),
  [798] = {.count = 1, .reusable = true}, SHIFT(295),
  [800] = {.count = 1, .reusable = false}, SHIFT(295),
  [802] = {.count = 1, .reusable = true}, SHIFT(296),
  [804] = {.count = 1, .reusable = false}, SHIFT(296),
  [806] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 2),
  [808] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4),
  [810] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 4),
  [812] = {.count = 1, .reusable = false}, SHIFT(298),
  [814] = {.count = 1, .reusable = true}, SHIFT(299),
  [816] = {.count = 1, .reusable = false}, SHIFT(299),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [820] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [822] = {.count = 1, .reusable = true}, SHIFT(300),
  [824] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(188),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [829] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [831] = {.count = 1, .reusable = false}, SHIFT(301),
  [833] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(192),
  [836] = {.count = 1, .reusable = false}, SHIFT(302),
  [838] = {.count = 1, .reusable = true}, SHIFT(303),
  [840] = {.count = 1, .reusable = false}, SHIFT(303),
  [842] = {.count = 1, .reusable = false}, SHIFT(304),
  [844] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [846] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [848] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [850] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(51),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [855] = {.count = 1, .reusable = false}, SHIFT(308),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 5),
  [859] = {.count = 1, .reusable = false}, SHIFT(309),
  [861] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_definition_repeat1, 2),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_definition_repeat1, 2), SHIFT_REPEAT(219),
  [866] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(229),
  [869] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(230),
  [872] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(51),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [881] = {.count = 1, .reusable = false}, SHIFT(318),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [885] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(245),
  [888] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(246),
  [891] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2),
  [893] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2), SHIFT_REPEAT(247),
  [896] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(250),
  [899] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(251),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [904] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(262),
  [907] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(263),
  [910] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [912] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(265),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 6),
  [917] = {.count = 1, .reusable = false}, SHIFT(321),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [921] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [923] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(290),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 7),
  [928] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [930] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 8),
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
