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
#define STATE_COUNT 318
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 0
#define TOKEN_COUNT 122
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
  anon_sym_enum = 9,
  anon_sym_module = 10,
  anon_sym_package = 11,
  anon_sym_end = 12,
  anon_sym_enumeration = 13,
  anon_sym_class = 14,
  anon_sym_function = 15,
  anon_sym_method = 16,
  sym_is_interface = 17,
  sym_is_overridable = 18,
  sym_is_override = 19,
  sym_is_primitive = 20,
  anon_sym_readonly = 21,
  anon_sym_writelimited = 22,
  anon_sym_private_write = 23,
  anon_sym_protected_write = 24,
  anon_sym_system_readwrite = 25,
  anon_sym_COLON = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_returns = 29,
  anon_sym_string = 30,
  anon_sym_symbol = 31,
  anon_sym_arguments = 32,
  anon_sym_i8 = 33,
  anon_sym_i16 = 34,
  anon_sym_i32 = 35,
  anon_sym_i64 = 36,
  anon_sym_u8 = 37,
  anon_sym_u16 = 38,
  anon_sym_u32 = 39,
  anon_sym_u64 = 40,
  anon_sym_f32 = 41,
  anon_sym_f64 = 42,
  anon_sym_s8 = 43,
  anon_sym_s16 = 44,
  anon_sym_s32 = 45,
  anon_sym_STAR = 46,
  anon_sym_LBRACK = 47,
  anon_sym_RBRACK = 48,
  sym_is_declare = 49,
  sym_is_external = 50,
  anon_sym_if = 51,
  anon_sym_while = 52,
  anon_sym_switch = 53,
  anon_sym_case = 54,
  anon_sym_default = 55,
  anon_sym_goto = 56,
  anon_sym_section = 57,
  anon_sym_COLON_EQ = 58,
  anon_sym_return = 59,
  sym__scope_op = 60,
  sym__access_op = 61,
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
  anon_sym_PLUS_PLUS = 94,
  anon_sym_DASH_DASH = 95,
  anon_sym_LBRACE = 96,
  anon_sym_RBRACE = 97,
  sym_null = 98,
  sym_identifier = 99,
  anon_sym_DQUOTE = 100,
  aux_sym_string_token1 = 101,
  anon_sym_SQUOTE = 102,
  aux_sym_character_token1 = 103,
  anon_sym_BSLASH_BSLASH = 104,
  anon_sym_BSLASH0 = 105,
  anon_sym_BSLASHa = 106,
  anon_sym_BSLASHb = 107,
  anon_sym_BSLASHf = 108,
  anon_sym_BSLASHn = 109,
  anon_sym_BSLASHr = 110,
  anon_sym_BSLASHt = 111,
  anon_sym_BSLASHv = 112,
  anon_sym_BSLASH_DQUOTE = 113,
  anon_sym_BSLASH_SQUOTE = 114,
  sym_oct = 115,
  sym_integer = 116,
  sym_long = 117,
  sym_float = 118,
  sym_double = 119,
  sym_hex = 120,
  sym_binary = 121,
  sym_source_file = 122,
  sym__comma_list_variables = 123,
  sym__comma_list_values = 124,
  sym__comma_list_assignment_or_values = 125,
  sym__comma_list_types = 126,
  sym_access_control = 127,
  sym__sentence = 128,
  sym_definition = 129,
  sym_use_definition = 130,
  sym_module_definition = 131,
  sym_extension = 132,
  sym_end_extension = 133,
  sym__enum_element = 134,
  sym_enum_definition = 135,
  sym_class_definition = 136,
  sym_is_function = 137,
  sym_is_method = 138,
  sym__override = 139,
  sym_function_definition = 140,
  sym_readability = 141,
  sym_variable_definition = 142,
  sym_container_definition = 143,
  sym_parameter_list = 144,
  sym_return_list = 145,
  sym_container_types = 146,
  sym_type = 147,
  sym__base_type = 148,
  sym_primitive_type = 149,
  sym_pointer = 150,
  sym_array = 151,
  sym_declaration_definition = 152,
  sym_statement = 153,
  sym_enum_statement = 154,
  sym_end_statement = 155,
  sym__control_flow_statement = 156,
  sym_goto_statement = 157,
  sym_section_statement = 158,
  sym_single_line_if_statement = 159,
  sym_if_statement = 160,
  sym_while_statement = 161,
  sym_switch_statement = 162,
  sym_case_statement = 163,
  sym_default_statement = 164,
  sym_static_assignment = 165,
  sym_expression_statement = 166,
  sym_return_statement = 167,
  sym_group_expression = 168,
  sym_assignment_expression = 169,
  sym_access_expression = 170,
  sym_cast_expression = 171,
  sym_array_expression = 172,
  sym_call_expression = 173,
  sym_scope_expression = 174,
  sym_binding_expression = 175,
  sym_cast_ops = 176,
  sym_unary_op = 177,
  sym_binary_op = 178,
  sym_assignment_op = 179,
  sym_assignment_post_op = 180,
  sym__assignment_or_value = 181,
  sym_collection = 182,
  sym__value = 183,
  sym__literal = 184,
  sym_string = 185,
  sym_character = 186,
  sym__escape_sequence = 187,
  sym__number = 188,
  aux_sym_source_file_repeat1 = 189,
  aux_sym__comma_list_variables_repeat1 = 190,
  aux_sym__comma_list_values_repeat1 = 191,
  aux_sym__comma_list_assignment_or_values_repeat1 = 192,
  aux_sym__comma_list_types_repeat1 = 193,
  aux_sym_extension_repeat1 = 194,
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
  [anon_sym_enum] = "enum",
  [anon_sym_module] = "module",
  [anon_sym_package] = "package",
  [anon_sym_end] = "end",
  [anon_sym_enumeration] = "enumeration",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_enum_statement] = "enum_statement",
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
  [anon_sym_enum] = {
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
  [anon_sym_enumeration] = {
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
  [sym_enum_statement] = {
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
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(206);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 182:
      if (lookahead == 'r')
        ADVANCE(208);
      END_STATE();
    case 183:
      if (lookahead == 'o')
        ADVANCE(209);
      END_STATE();
    case 184:
      if (lookahead == 'l')
        ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 186:
      if (lookahead == 'r')
        ADVANCE(211);
      END_STATE();
    case 187:
      if (lookahead == 'a')
        ADVANCE(212);
      END_STATE();
    case 188:
      if (lookahead == 'i')
        ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'a')
        ADVANCE(214);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(215);
      END_STATE();
    case 191:
      if (lookahead == 'o')
        ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == 'i')
        ADVANCE(217);
      END_STATE();
    case 193:
      if (lookahead == 'r')
        ADVANCE(218);
      END_STATE();
    case 194:
      if (lookahead == 'i')
        ADVANCE(219);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(220);
      END_STATE();
    case 196:
      if (lookahead == 'c')
        ADVANCE(221);
      END_STATE();
    case 197:
      if (lookahead == 'o')
        ADVANCE(222);
      END_STATE();
    case 198:
      if (lookahead == 'e')
        ADVANCE(223);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(224);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(225);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(226);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 203:
      if (lookahead == 'r')
        ADVANCE(227);
      END_STATE();
    case 204:
      if (lookahead == 'l')
        ADVANCE(228);
      END_STATE();
    case 205:
      if (lookahead == 'r')
        ADVANCE(229);
      END_STATE();
    case 206:
      if (lookahead == 'n')
        ADVANCE(230);
      END_STATE();
    case 207:
      if (lookahead == 'i')
        ADVANCE(231);
      END_STATE();
    case 208:
      if (lookahead == 'f')
        ADVANCE(232);
      END_STATE();
    case 209:
      if (lookahead == 'd')
        ADVANCE(233);
      END_STATE();
    case 210:
      if (lookahead == 'e')
        ADVANCE(234);
      END_STATE();
    case 211:
      if (lookahead == 'i')
        ADVANCE(235);
      END_STATE();
    case 212:
      if (lookahead == 'g')
        ADVANCE(236);
      END_STATE();
    case 213:
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 214:
      if (lookahead == 't')
        ADVANCE(238);
      END_STATE();
    case 215:
      if (lookahead == 'c')
        ADVANCE(239);
      END_STATE();
    case 216:
      if (lookahead == 'n')
        ADVANCE(240);
      END_STATE();
    case 217:
      if (lookahead == 'r')
        ADVANCE(241);
      END_STATE();
    case 218:
      if (lookahead == 'n')
        ADVANCE(242);
      END_STATE();
    case 219:
      if (lookahead == 'o')
        ADVANCE(243);
      END_STATE();
    case 220:
      if (lookahead == 'g')
        ADVANCE(244);
      END_STATE();
    case 221:
      if (lookahead == 'h')
        ADVANCE(245);
      END_STATE();
    case 222:
      if (lookahead == 'l')
        ADVANCE(246);
      END_STATE();
    case 223:
      if (lookahead == 'm')
        ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 225:
      if (lookahead == 'l')
        ADVANCE(248);
      END_STATE();
    case 226:
      if (lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 227:
      if (lookahead == 'e')
        ADVANCE(250);
      END_STATE();
    case 228:
      if (lookahead == 't')
        ADVANCE(251);
      END_STATE();
    case 229:
      if (lookahead == 'a')
        ADVANCE(252);
      END_STATE();
    case 230:
      if (lookahead == 'a')
        ADVANCE(253);
      END_STATE();
    case 231:
      if (lookahead == 'o')
        ADVANCE(254);
      END_STATE();
    case 232:
      if (lookahead == 'a')
        ADVANCE(255);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 235:
      if (lookahead == 'd')
        ADVANCE(256);
      END_STATE();
    case 236:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == 'i')
        ADVANCE(258);
      END_STATE();
    case 238:
      if (lookahead == 'e')
        ADVANCE(259);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == 'l')
        ADVANCE(261);
      END_STATE();
    case 241:
      if (lookahead == 'e')
        ADVANCE(262);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 243:
      if (lookahead == 'n')
        ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 247:
      if (lookahead == '_')
        ADVANCE(264);
      END_STATE();
    case 248:
      if (lookahead == 'i')
        ADVANCE(265);
      END_STATE();
    case 249:
      if (lookahead == 't')
        ADVANCE(266);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 252:
      if (lookahead == 't')
        ADVANCE(267);
      END_STATE();
    case 253:
      if (lookahead == 'l')
        ADVANCE(268);
      END_STATE();
    case 254:
      if (lookahead == 'n')
        ADVANCE(269);
      END_STATE();
    case 255:
      if (lookahead == 'c')
        ADVANCE(270);
      END_STATE();
    case 256:
      if (lookahead == 'a')
        ADVANCE(271);
      if (lookahead == 'e')
        ADVANCE(272);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 258:
      if (lookahead == 'v')
        ADVANCE(273);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
        ADVANCE(274);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(275);
      END_STATE();
    case 261:
      if (lookahead == 'y')
        ADVANCE(276);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 264:
      if (lookahead == 'r')
        ADVANCE(277);
      END_STATE();
    case 265:
      if (lookahead == 'm')
        ADVANCE(278);
      END_STATE();
    case 266:
      if (lookahead == 's')
        ADVANCE(279);
      END_STATE();
    case 267:
      if (lookahead == 'i')
        ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(281);
      END_STATE();
    case 271:
      if (lookahead == 'b')
        ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_is_override);
      END_STATE();
    case 273:
      if (lookahead == 'e')
        ADVANCE(283);
      END_STATE();
    case 274:
      if (lookahead == 'w')
        ADVANCE(284);
      END_STATE();
    case 275:
      if (lookahead == 'd')
        ADVANCE(285);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 277:
      if (lookahead == 'e')
        ADVANCE(286);
      END_STATE();
    case 278:
      if (lookahead == 'i')
        ADVANCE(287);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_arguments);
      END_STATE();
    case 280:
      if (lookahead == 'o')
        ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_is_interface);
      END_STATE();
    case 282:
      if (lookahead == 'l')
        ADVANCE(289);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_is_primitive);
      END_STATE();
    case 284:
      if (lookahead == 'r')
        ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
        ADVANCE(291);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(292);
      END_STATE();
    case 287:
      if (lookahead == 't')
        ADVANCE(293);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(294);
      END_STATE();
    case 289:
      if (lookahead == 'e')
        ADVANCE(295);
      END_STATE();
    case 290:
      if (lookahead == 'i')
        ADVANCE(296);
      END_STATE();
    case 291:
      if (lookahead == 'w')
        ADVANCE(297);
      END_STATE();
    case 292:
      if (lookahead == 'd')
        ADVANCE(298);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(299);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_enumeration);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_is_overridable);
      END_STATE();
    case 296:
      if (lookahead == 't')
        ADVANCE(300);
      END_STATE();
    case 297:
      if (lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 298:
      if (lookahead == 'w')
        ADVANCE(302);
      END_STATE();
    case 299:
      if (lookahead == 'd')
        ADVANCE(303);
      END_STATE();
    case 300:
      if (lookahead == 'e')
        ADVANCE(304);
      END_STATE();
    case 301:
      if (lookahead == 'i')
        ADVANCE(305);
      END_STATE();
    case 302:
      if (lookahead == 'r')
        ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_writelimited);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_private_write);
      END_STATE();
    case 305:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 306:
      if (lookahead == 'i')
        ADVANCE(308);
      END_STATE();
    case 307:
      if (lookahead == 'e')
        ADVANCE(309);
      END_STATE();
    case 308:
      if (lookahead == 't')
        ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_protected_write);
      END_STATE();
    case 310:
      if (lookahead == 'e')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_system_readwrite);
      END_STATE();
    case 312:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == '0')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(318);
      if (lookahead == 'd')
        ADVANCE(319);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead == 'f')
        ADVANCE(321);
      if (lookahead == 'g')
        ADVANCE(322);
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead == 'm')
        ADVANCE(324);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead == 'o')
        ADVANCE(326);
      if (lookahead == 'p')
        ADVANCE(327);
      if (lookahead == 'r')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(329);
      if (lookahead == 'u')
        ADVANCE(330);
      if (lookahead == 'w')
        ADVANCE(331);
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
        ADVANCE(332);
      END_STATE();
    case 313:
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 314:
      if (lookahead == '+')
        ADVANCE(333);
      END_STATE();
    case 315:
      if (lookahead == '-')
        ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
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
        ADVANCE(332);
      END_STATE();
    case 317:
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
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(336);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(339);
      if (lookahead == 'x')
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
        ADVANCE(332);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(341);
      if (lookahead == '6')
        ADVANCE(342);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(345);
      if (lookahead == '3')
        ADVANCE(346);
      if (lookahead == '6')
        ADVANCE(347);
      if (lookahead == '8')
        ADVANCE(348);
      if (lookahead == 'f')
        ADVANCE(349);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(351);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(357);
      if (lookahead == '3')
        ADVANCE(358);
      if (lookahead == '8')
        ADVANCE(359);
      if (lookahead == 'e')
        ADVANCE(360);
      if (lookahead == 'w')
        ADVANCE(361);
      if (lookahead == 'y')
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
        ADVANCE(332);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(363);
      if (lookahead == '3')
        ADVANCE(364);
      if (lookahead == '6')
        ADVANCE(365);
      if (lookahead == '8')
        ADVANCE(366);
      if (lookahead == 's')
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
        ADVANCE(332);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(368);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 332:
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
        ADVANCE(332);
      END_STATE();
    case 333:
      if (lookahead == '+')
        ADVANCE(54);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(54);
      END_STATE();
    case 335:
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
        ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(332);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(372);
      if (lookahead == 'f')
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
        ADVANCE(332);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(374);
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
        ADVANCE(332);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(332);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(332);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(332);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(332);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(332);
      END_STATE();
    case 348:
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
        ADVANCE(332);
      END_STATE();
    case 349:
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
        ADVANCE(332);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(389);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(391);
      if (lookahead == 'q')
        ADVANCE(392);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(332);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(332);
      END_STATE();
    case 359:
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
        ADVANCE(332);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 361:
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
        ADVANCE(332);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(332);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(332);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(332);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(332);
      END_STATE();
    case 366:
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
        ADVANCE(332);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 370:
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
        ADVANCE(332);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(332);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 374:
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
        ADVANCE(332);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(332);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 377:
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
        ADVANCE(332);
      END_STATE();
    case 378:
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
        ADVANCE(332);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 381:
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
        ADVANCE(332);
      END_STATE();
    case 382:
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
        ADVANCE(332);
      END_STATE();
    case 383:
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
        ADVANCE(332);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(332);
      END_STATE();
    case 386:
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
        ADVANCE(332);
      END_STATE();
    case 387:
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
        ADVANCE(332);
      END_STATE();
    case 388:
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
        ADVANCE(332);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead == 'v')
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
        ADVANCE(332);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 394:
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
        ADVANCE(332);
      END_STATE();
    case 395:
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
        ADVANCE(332);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 398:
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
        ADVANCE(332);
      END_STATE();
    case 399:
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
        ADVANCE(332);
      END_STATE();
    case 400:
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
        ADVANCE(332);
      END_STATE();
    case 401:
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
        ADVANCE(332);
      END_STATE();
    case 402:
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
        ADVANCE(332);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 405:
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
        ADVANCE(332);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(332);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 412:
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
        ADVANCE(332);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 416:
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
        ADVANCE(332);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 420:
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
        ADVANCE(332);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 424:
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
        ADVANCE(332);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 427:
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
        ADVANCE(332);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 429:
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
        ADVANCE(332);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 433:
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
        ADVANCE(332);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(332);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(332);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(332);
      END_STATE();
    case 448:
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
        ADVANCE(332);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 456:
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
        ADVANCE(332);
      END_STATE();
    case 457:
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
        ADVANCE(332);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 464:
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
        ADVANCE(332);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 466:
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
        ADVANCE(332);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
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
        ADVANCE(332);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 469:
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
        ADVANCE(332);
      END_STATE();
    case 470:
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
        ADVANCE(332);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(488);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(332);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_private);
      if (lookahead == '_')
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
        ADVANCE(332);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(332);
      END_STATE();
    case 480:
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
        ADVANCE(332);
      END_STATE();
    case 481:
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
        ADVANCE(332);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(332);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 485:
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
        ADVANCE(332);
      END_STATE();
    case 486:
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
        ADVANCE(332);
      END_STATE();
    case 487:
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
        ADVANCE(332);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(332);
      END_STATE();
    case 489:
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
        ADVANCE(332);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(332);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 493:
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
        ADVANCE(332);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 497:
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
        ADVANCE(332);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(332);
      END_STATE();
    case 499:
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
        ADVANCE(332);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_protected);
      if (lookahead == '_')
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
        ADVANCE(332);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 503:
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
        ADVANCE(332);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 505:
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
        ADVANCE(332);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(332);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(332);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_enumeration);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 511:
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
        ADVANCE(332);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
        ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 519:
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
        ADVANCE(332);
      END_STATE();
    case 520:
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
        ADVANCE(332);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 525:
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
        ADVANCE(332);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 527:
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
        ADVANCE(332);
      END_STATE();
    case 528:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 's')
        ADVANCE(532);
      if (lookahead == 'u')
        ADVANCE(533);
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
        ADVANCE(332);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(341);
      if (lookahead == '6')
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
        ADVANCE(332);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(345);
      if (lookahead == '3')
        ADVANCE(346);
      if (lookahead == '6')
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
        ADVANCE(332);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(357);
      if (lookahead == '3')
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
        ADVANCE(332);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(363);
      if (lookahead == '3')
        ADVANCE(364);
      if (lookahead == '6')
        ADVANCE(365);
      if (lookahead == '8')
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
        ADVANCE(332);
      END_STATE();
    case 534:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(535);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == ':')
        ADVANCE(536);
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
        ADVANCE(332);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 536:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 537:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == '0')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(325);
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
        ADVANCE(332);
      END_STATE();
    case 538:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '*')
        ADVANCE(539);
      if (lookahead == '+')
        ADVANCE(540);
      if (lookahead == '-')
        ADVANCE(541);
      if (lookahead == '/')
        ADVANCE(542);
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
    case 539:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(333);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(334);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 543:
      if (lookahead == '*')
        ADVANCE(544);
      if (lookahead == '+')
        ADVANCE(545);
      if (lookahead == '-')
        ADVANCE(546);
      if (lookahead == '/')
        ADVANCE(547);
      if (lookahead == '\\')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '*')
        ADVANCE(54);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(333);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(334);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 548:
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
    case 549:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 550:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(321);
      if (lookahead == 'i')
        ADVANCE(551);
      if (lookahead == 'm')
        ADVANCE(552);
      if (lookahead == 'o')
        ADVANCE(326);
      if (lookahead == 'p')
        ADVANCE(327);
      if (lookahead == 'r')
        ADVANCE(553);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(533);
      if (lookahead == 'w')
        ADVANCE(555);
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
        ADVANCE(332);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(345);
      if (lookahead == '3')
        ADVANCE(346);
      if (lookahead == '6')
        ADVANCE(347);
      if (lookahead == '8')
        ADVANCE(348);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 553:
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
        ADVANCE(332);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(357);
      if (lookahead == '3')
        ADVANCE(358);
      if (lookahead == '8')
        ADVANCE(359);
      if (lookahead == 'y')
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
        ADVANCE(332);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(332);
      END_STATE();
    case 556:
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
        ADVANCE(332);
      END_STATE();
    case 557:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'c')
        ADVANCE(318);
      if (lookahead == 'd')
        ADVANCE(558);
      if (lookahead == 'e')
        ADVANCE(559);
      if (lookahead == 'f')
        ADVANCE(560);
      if (lookahead == 'i')
        ADVANCE(561);
      if (lookahead == 'm')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(562);
      if (lookahead == 'w')
        ADVANCE(563);
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
        ADVANCE(332);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(332);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w')
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
        ADVANCE(332);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(332);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(332);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 568:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(535);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(569);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == ':')
        ADVANCE(570);
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
        ADVANCE(332);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(334);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 570:
      if (lookahead == ':')
        ADVANCE(67);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 571:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == 'e')
        ADVANCE(573);
      if (lookahead == 'm')
        ADVANCE(574);
      if (lookahead == 'p')
        ADVANCE(575);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 572:
      if (lookahead == '/')
        ADVANCE(54);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        ADVANCE(576);
      END_STATE();
    case 574:
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 575:
      if (lookahead == 'a')
        ADVANCE(106);
      END_STATE();
    case 576:
      if (lookahead == 'u')
        ADVANCE(577);
      END_STATE();
    case 577:
      if (lookahead == 'm')
        ADVANCE(578);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 579:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(321);
      if (lookahead == 'i')
        ADVANCE(551);
      if (lookahead == 'm')
        ADVANCE(552);
      if (lookahead == 'o')
        ADVANCE(326);
      if (lookahead == 'p')
        ADVANCE(580);
      if (lookahead == 'r')
        ADVANCE(553);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(533);
      if (lookahead == 'w')
        ADVANCE(555);
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
        ADVANCE(332);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(582);
      if (lookahead == 'o')
        ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(418);
      if (lookahead == 'v')
        ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(332);
      END_STATE();
    case 588:
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
        ADVANCE(332);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
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
        ADVANCE(332);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(332);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_')
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
        ADVANCE(332);
      END_STATE();
    case 594:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == 'c')
        ADVANCE(595);
      if (lookahead == 'd')
        ADVANCE(596);
      if (lookahead == 'e')
        ADVANCE(597);
      if (lookahead == 'f')
        ADVANCE(598);
      if (lookahead == 'i')
        ADVANCE(599);
      if (lookahead == 'm')
        ADVANCE(600);
      if (lookahead == 'o')
        ADVANCE(601);
      if (lookahead == 'p')
        ADVANCE(602);
      if (lookahead == 's')
        ADVANCE(603);
      if (lookahead == 'w')
        ADVANCE(604);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 595:
      if (lookahead == 'a')
        ADVANCE(87);
      if (lookahead == 'l')
        ADVANCE(88);
      END_STATE();
    case 596:
      if (lookahead == 'e')
        ADVANCE(605);
      END_STATE();
    case 597:
      if (lookahead == 'n')
        ADVANCE(606);
      END_STATE();
    case 598:
      if (lookahead == 'u')
        ADVANCE(94);
      END_STATE();
    case 599:
      if (lookahead == 'f')
        ADVANCE(100);
      END_STATE();
    case 600:
      if (lookahead == 'e')
        ADVANCE(102);
      if (lookahead == 'o')
        ADVANCE(103);
      END_STATE();
    case 601:
      if (lookahead == 'v')
        ADVANCE(105);
      END_STATE();
    case 602:
      if (lookahead == 'r')
        ADVANCE(607);
      END_STATE();
    case 603:
      if (lookahead == 'w')
        ADVANCE(114);
      END_STATE();
    case 604:
      if (lookahead == 'h')
        ADVANCE(121);
      END_STATE();
    case 605:
      if (lookahead == 'f')
        ADVANCE(137);
      END_STATE();
    case 606:
      if (lookahead == 'u')
        ADVANCE(608);
      END_STATE();
    case 607:
      if (lookahead == 'i')
        ADVANCE(609);
      END_STATE();
    case 608:
      if (lookahead == 'm')
        ADVANCE(610);
      END_STATE();
    case 609:
      if (lookahead == 'm')
        ADVANCE(188);
      END_STATE();
    case 610:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 611:
      if (lookahead == '!')
        ADVANCE(612);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(613);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(535);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(614);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == '0')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead == '{')
        ADVANCE(40);
      if (lookahead == '~')
        ADVANCE(615);
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
        ADVANCE(332);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 613:
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
        ADVANCE(332);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(334);
      END_STATE();
    case 615:
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
        ADVANCE(332);
      END_STATE();
    case 616:
      if (lookahead == '%')
        ADVANCE(617);
      if (lookahead == '&')
        ADVANCE(618);
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(619);
      if (lookahead == '-')
        ADVANCE(620);
      if (lookahead == '/')
        ADVANCE(621);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '<')
        ADVANCE(622);
      if (lookahead == '>')
        ADVANCE(623);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(624);
      if (lookahead == '|')
        ADVANCE(625);
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
        ADVANCE(332);
      END_STATE();
    case 617:
      if (lookahead == '=')
        ADVANCE(49);
      END_STATE();
    case 618:
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
        ADVANCE(332);
      END_STATE();
    case 619:
      if (lookahead == '+')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 620:
      if (lookahead == '-')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == '>')
        ADVANCE(60);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(335);
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
        ADVANCE(332);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 624:
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
        ADVANCE(332);
      END_STATE();
    case 625:
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
        ADVANCE(332);
      END_STATE();
    case 626:
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
        ADVANCE(332);
      END_STATE();
    case 627:
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
        ADVANCE(332);
      END_STATE();
    case 628:
      if (lookahead == '!')
        ADVANCE(629);
      if (lookahead == '$')
        ADVANCE(630);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(529);
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
        ADVANCE(570);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(631);
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
    case 629:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 631:
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 632:
      if (lookahead == '%')
        ADVANCE(617);
      if (lookahead == '&')
        ADVANCE(633);
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(619);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(620);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(634);
      if (lookahead == ':')
        ADVANCE(570);
      if (lookahead == '<')
        ADVANCE(635);
      if (lookahead == '>')
        ADVANCE(636);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 633:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 634:
      if (lookahead == '/')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 635:
      if (lookahead == '<')
        ADVANCE(639);
      END_STATE();
    case 636:
      if (lookahead == '>')
        ADVANCE(640);
      END_STATE();
    case 637:
      if (lookahead == '=')
        ADVANCE(85);
      END_STATE();
    case 638:
      if (lookahead == '=')
        ADVANCE(123);
      END_STATE();
    case 639:
      if (lookahead == '=')
        ADVANCE(131);
      END_STATE();
    case 640:
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 641:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == ']')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(642);
      END_STATE();
    case 643:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == '0')
        ADVANCE(317);
      if (lookahead == 'c')
        ADVANCE(644);
      if (lookahead == 'd')
        ADVANCE(558);
      if (lookahead == 'e')
        ADVANCE(645);
      if (lookahead == 'g')
        ADVANCE(322);
      if (lookahead == 'i')
        ADVANCE(561);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead == 'r')
        ADVANCE(646);
      if (lookahead == 's')
        ADVANCE(647);
      if (lookahead == 'w')
        ADVANCE(563);
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
        ADVANCE(332);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(332);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(360);
      if (lookahead == 'w')
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
        ADVANCE(332);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(374);
      if (lookahead == 'u')
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
        ADVANCE(332);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(332);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 651:
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
        ADVANCE(332);
      END_STATE();
    case 652:
      if (lookahead == '!')
        ADVANCE(629);
      if (lookahead == '$')
        ADVANCE(630);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(529);
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
        ADVANCE(570);
      if (lookahead == '<')
        ADVANCE(18);
      if (lookahead == '=')
        ADVANCE(631);
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
      if (lookahead == '%')
        ADVANCE(617);
      if (lookahead == '&')
        ADVANCE(633);
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(654);
      if (lookahead == '+')
        ADVANCE(619);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(620);
      if (lookahead == '/')
        ADVANCE(634);
      if (lookahead == ':')
        ADVANCE(570);
      if (lookahead == '<')
        ADVANCE(635);
      if (lookahead == '>')
        ADVANCE(636);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(638);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 654:
      if (lookahead == '*')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 655:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'a')
        ADVANCE(656);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 's')
        ADVANCE(657);
      if (lookahead == 'u')
        ADVANCE(533);
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
        ADVANCE(332);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(357);
      if (lookahead == '3')
        ADVANCE(358);
      if (lookahead == '8')
        ADVANCE(359);
      if (lookahead == 't')
        ADVANCE(659);
      if (lookahead == 'y')
        ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 659:
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
        ADVANCE(332);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(332);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(332);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 671:
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
        ADVANCE(332);
      END_STATE();
    case 672:
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
        ADVANCE(332);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 675:
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
        ADVANCE(332);
      END_STATE();
    case 676:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
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
        ADVANCE(332);
      END_STATE();
    case 677:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == 'r')
        ADVANCE(678);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 678:
      if (lookahead == 'e')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 't')
        ADVANCE(680);
      END_STATE();
    case 680:
      if (lookahead == 'u')
        ADVANCE(681);
      END_STATE();
    case 681:
      if (lookahead == 'r')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'n')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 's')
        ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 685:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == '}')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 686:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(569);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == ':')
        ADVANCE(570);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 's')
        ADVANCE(532);
      if (lookahead == 'u')
        ADVANCE(533);
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
        ADVANCE(332);
      END_STATE();
    case 687:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == ':')
        ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 688:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 'p')
        ADVANCE(689);
      if (lookahead == 'r')
        ADVANCE(553);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(533);
      if (lookahead == 'w')
        ADVANCE(555);
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
        ADVANCE(332);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(691);
      if (lookahead == 'o')
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
        ADVANCE(332);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(332);
      END_STATE();
    case 692:
      if (lookahead == '%')
        ADVANCE(617);
      if (lookahead == '&')
        ADVANCE(618);
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(654);
      if (lookahead == '+')
        ADVANCE(619);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(620);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(621);
      if (lookahead == ':')
        ADVANCE(570);
      if (lookahead == '<')
        ADVANCE(622);
      if (lookahead == '>')
        ADVANCE(623);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '^')
        ADVANCE(624);
      if (lookahead == '|')
        ADVANCE(625);
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
        ADVANCE(332);
      END_STATE();
    case 693:
      if (lookahead == '(')
        ADVANCE(529);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(535);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(569);
      if (lookahead == '/')
        ADVANCE(572);
      if (lookahead == ':')
        ADVANCE(570);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(44);
      END_STATE();
    case 694:
      if (lookahead == '*')
        ADVANCE(313);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == 'f')
        ADVANCE(530);
      if (lookahead == 'i')
        ADVANCE(531);
      if (lookahead == 'p')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(553);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(533);
      if (lookahead == 'w')
        ADVANCE(555);
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
        ADVANCE(332);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(697);
      if (lookahead == 'o')
        ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '$' &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(332);
      END_STATE();
    case 698:
      if (lookahead == '*')
        ADVANCE(535);
      if (lookahead == '+')
        ADVANCE(314);
      if (lookahead == '-')
        ADVANCE(315);
      if (lookahead == '/')
        ADVANCE(316);
      if (lookahead == ':')
        ADVANCE(699);
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
        ADVANCE(332);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 312},
  [2] = {.lex_state = 528},
  [3] = {.lex_state = 534},
  [4] = {.lex_state = 537},
  [5] = {.lex_state = 538},
  [6] = {.lex_state = 543},
  [7] = {.lex_state = 550},
  [8] = {.lex_state = 528},
  [9] = {.lex_state = 557},
  [10] = {.lex_state = 568},
  [11] = {.lex_state = 568},
  [12] = {.lex_state = 571},
  [13] = {.lex_state = 579},
  [14] = {.lex_state = 594},
  [15] = {.lex_state = 594},
  [16] = {.lex_state = 568},
  [17] = {.lex_state = 528},
  [18] = {.lex_state = 568},
  [19] = {.lex_state = 528},
  [20] = {.lex_state = 568},
  [21] = {.lex_state = 568},
  [22] = {.lex_state = 611},
  [23] = {.lex_state = 537},
  [24] = {.lex_state = 616},
  [25] = {.lex_state = 528},
  [26] = {.lex_state = 528},
  [27] = {.lex_state = 568},
  [28] = {.lex_state = 528},
  [29] = {.lex_state = 528},
  [30] = {.lex_state = 568},
  [31] = {.lex_state = 568},
  [32] = {.lex_state = 528},
  [33] = {.lex_state = 628},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 579},
  [36] = {.lex_state = 594},
  [37] = {.lex_state = 632},
  [38] = {.lex_state = 528},
  [39] = {.lex_state = 616},
  [40] = {.lex_state = 616},
  [41] = {.lex_state = 528},
  [42] = {.lex_state = 312},
  [43] = {.lex_state = 528},
  [44] = {.lex_state = 568},
  [45] = {.lex_state = 641},
  [46] = {.lex_state = 528},
  [47] = {.lex_state = 632},
  [48] = {.lex_state = 632},
  [49] = {.lex_state = 528},
  [50] = {.lex_state = 632},
  [51] = {.lex_state = 628},
  [52] = {.lex_state = 538},
  [53] = {.lex_state = 312},
  [54] = {.lex_state = 528},
  [55] = {.lex_state = 528},
  [56] = {.lex_state = 528},
  [57] = {.lex_state = 568},
  [58] = {.lex_state = 528},
  [59] = {.lex_state = 641},
  [60] = {.lex_state = 568},
  [61] = {.lex_state = 568},
  [62] = {.lex_state = 568},
  [63] = {.lex_state = 568},
  [64] = {.lex_state = 594},
  [65] = {.lex_state = 594},
  [66] = {.lex_state = 528},
  [67] = {.lex_state = 611},
  [68] = {.lex_state = 643},
  [69] = {.lex_state = 528},
  [70] = {.lex_state = 528},
  [71] = {.lex_state = 568},
  [72] = {.lex_state = 537},
  [73] = {.lex_state = 528},
  [74] = {.lex_state = 652},
  [75] = {.lex_state = 652},
  [76] = {.lex_state = 652},
  [77] = {.lex_state = 528},
  [78] = {.lex_state = 537},
  [79] = {.lex_state = 652},
  [80] = {.lex_state = 653},
  [81] = {.lex_state = 653},
  [82] = {.lex_state = 653},
  [83] = {.lex_state = 653},
  [84] = {.lex_state = 653},
  [85] = {.lex_state = 655},
  [86] = {.lex_state = 676},
  [87] = {.lex_state = 568},
  [88] = {.lex_state = 528},
  [89] = {.lex_state = 528},
  [90] = {.lex_state = 528},
  [91] = {.lex_state = 568},
  [92] = {.lex_state = 677},
  [93] = {.lex_state = 534},
  [94] = {.lex_state = 568},
  [95] = {.lex_state = 568},
  [96] = {.lex_state = 594},
  [97] = {.lex_state = 568},
  [98] = {.lex_state = 528},
  [99] = {.lex_state = 537},
  [100] = {.lex_state = 641},
  [101] = {.lex_state = 537},
  [102] = {.lex_state = 537},
  [103] = {.lex_state = 685},
  [104] = {.lex_state = 537},
  [105] = {.lex_state = 685},
  [106] = {.lex_state = 628},
  [107] = {.lex_state = 312},
  [108] = {.lex_state = 312},
  [109] = {.lex_state = 568},
  [110] = {.lex_state = 641},
  [111] = {.lex_state = 686},
  [112] = {.lex_state = 568},
  [113] = {.lex_state = 537},
  [114] = {.lex_state = 628},
  [115] = {.lex_state = 538},
  [116] = {.lex_state = 628},
  [117] = {.lex_state = 537},
  [118] = {.lex_state = 528},
  [119] = {.lex_state = 641},
  [120] = {.lex_state = 568},
  [121] = {.lex_state = 528},
  [122] = {.lex_state = 528},
  [123] = {.lex_state = 568},
  [124] = {.lex_state = 568},
  [125] = {.lex_state = 677},
  [126] = {.lex_state = 568},
  [127] = {.lex_state = 594},
  [128] = {.lex_state = 652},
  [129] = {.lex_state = 537},
  [130] = {.lex_state = 652},
  [131] = {.lex_state = 594},
  [132] = {.lex_state = 616},
  [133] = {.lex_state = 616},
  [134] = {.lex_state = 528},
  [135] = {.lex_state = 568},
  [136] = {.lex_state = 528},
  [137] = {.lex_state = 534},
  [138] = {.lex_state = 568},
  [139] = {.lex_state = 628},
  [140] = {.lex_state = 652},
  [141] = {.lex_state = 652},
  [142] = {.lex_state = 652},
  [143] = {.lex_state = 652},
  [144] = {.lex_state = 537},
  [145] = {.lex_state = 537},
  [146] = {.lex_state = 537},
  [147] = {.lex_state = 537},
  [148] = {.lex_state = 568},
  [149] = {.lex_state = 628},
  [150] = {.lex_state = 537},
  [151] = {.lex_state = 537},
  [152] = {.lex_state = 537},
  [153] = {.lex_state = 653},
  [154] = {.lex_state = 687},
  [155] = {.lex_state = 568},
  [156] = {.lex_state = 568},
  [157] = {.lex_state = 538},
  [158] = {.lex_state = 676},
  [159] = {.lex_state = 688},
  [160] = {.lex_state = 676},
  [161] = {.lex_state = 528},
  [162] = {.lex_state = 641},
  [163] = {.lex_state = 616},
  [164] = {.lex_state = 692},
  [165] = {.lex_state = 528},
  [166] = {.lex_state = 528},
  [167] = {.lex_state = 677},
  [168] = {.lex_state = 528},
  [169] = {.lex_state = 568},
  [170] = {.lex_state = 568},
  [171] = {.lex_state = 568},
  [172] = {.lex_state = 594},
  [173] = {.lex_state = 568},
  [174] = {.lex_state = 568},
  [175] = {.lex_state = 641},
  [176] = {.lex_state = 628},
  [177] = {.lex_state = 693},
  [178] = {.lex_state = 693},
  [179] = {.lex_state = 693},
  [180] = {.lex_state = 652},
  [181] = {.lex_state = 616},
  [182] = {.lex_state = 568},
  [183] = {.lex_state = 568},
  [184] = {.lex_state = 568},
  [185] = {.lex_state = 687},
  [186] = {.lex_state = 686},
  [187] = {.lex_state = 632},
  [188] = {.lex_state = 632},
  [189] = {.lex_state = 568},
  [190] = {.lex_state = 568},
  [191] = {.lex_state = 528},
  [192] = {.lex_state = 528},
  [193] = {.lex_state = 677},
  [194] = {.lex_state = 528},
  [195] = {.lex_state = 677},
  [196] = {.lex_state = 568},
  [197] = {.lex_state = 643},
  [198] = {.lex_state = 652},
  [199] = {.lex_state = 537},
  [200] = {.lex_state = 568},
  [201] = {.lex_state = 568},
  [202] = {.lex_state = 534},
  [203] = {.lex_state = 528},
  [204] = {.lex_state = 652},
  [205] = {.lex_state = 652},
  [206] = {.lex_state = 568},
  [207] = {.lex_state = 537},
  [208] = {.lex_state = 628},
  [209] = {.lex_state = 652},
  [210] = {.lex_state = 652},
  [211] = {.lex_state = 652},
  [212] = {.lex_state = 653},
  [213] = {.lex_state = 653},
  [214] = {.lex_state = 653},
  [215] = {.lex_state = 653},
  [216] = {.lex_state = 653},
  [217] = {.lex_state = 653},
  [218] = {.lex_state = 653},
  [219] = {.lex_state = 568},
  [220] = {.lex_state = 568},
  [221] = {.lex_state = 687},
  [222] = {.lex_state = 676},
  [223] = {.lex_state = 538},
  [224] = {.lex_state = 676},
  [225] = {.lex_state = 694},
  [226] = {.lex_state = 698},
  [227] = {.lex_state = 677},
  [228] = {.lex_state = 528},
  [229] = {.lex_state = 568},
  [230] = {.lex_state = 693},
  [231] = {.lex_state = 694},
  [232] = {.lex_state = 652},
  [233] = {.lex_state = 676},
  [234] = {.lex_state = 528},
  [235] = {.lex_state = 641},
  [236] = {.lex_state = 616},
  [237] = {.lex_state = 632},
  [238] = {.lex_state = 632},
  [239] = {.lex_state = 528},
  [240] = {.lex_state = 594},
  [241] = {.lex_state = 687},
  [242] = {.lex_state = 568},
  [243] = {.lex_state = 628},
  [244] = {.lex_state = 568},
  [245] = {.lex_state = 537},
  [246] = {.lex_state = 537},
  [247] = {.lex_state = 693},
  [248] = {.lex_state = 628},
  [249] = {.lex_state = 568},
  [250] = {.lex_state = 537},
  [251] = {.lex_state = 528},
  [252] = {.lex_state = 528},
  [253] = {.lex_state = 677},
  [254] = {.lex_state = 677},
  [255] = {.lex_state = 643},
  [256] = {.lex_state = 652},
  [257] = {.lex_state = 616},
  [258] = {.lex_state = 534},
  [259] = {.lex_state = 528},
  [260] = {.lex_state = 528},
  [261] = {.lex_state = 652},
  [262] = {.lex_state = 652},
  [263] = {.lex_state = 628},
  [264] = {.lex_state = 568},
  [265] = {.lex_state = 537},
  [266] = {.lex_state = 568},
  [267] = {.lex_state = 568},
  [268] = {.lex_state = 568},
  [269] = {.lex_state = 676},
  [270] = {.lex_state = 655},
  [271] = {.lex_state = 568},
  [272] = {.lex_state = 693},
  [273] = {.lex_state = 688},
  [274] = {.lex_state = 693},
  [275] = {.lex_state = 528},
  [276] = {.lex_state = 677},
  [277] = {.lex_state = 616},
  [278] = {.lex_state = 632},
  [279] = {.lex_state = 632},
  [280] = {.lex_state = 528},
  [281] = {.lex_state = 632},
  [282] = {.lex_state = 568},
  [283] = {.lex_state = 687},
  [284] = {.lex_state = 693},
  [285] = {.lex_state = 693},
  [286] = {.lex_state = 693},
  [287] = {.lex_state = 693},
  [288] = {.lex_state = 568},
  [289] = {.lex_state = 568},
  [290] = {.lex_state = 528},
  [291] = {.lex_state = 677},
  [292] = {.lex_state = 643},
  [293] = {.lex_state = 653},
  [294] = {.lex_state = 653},
  [295] = {.lex_state = 693},
  [296] = {.lex_state = 693},
  [297] = {.lex_state = 693},
  [298] = {.lex_state = 537},
  [299] = {.lex_state = 693},
  [300] = {.lex_state = 693},
  [301] = {.lex_state = 568},
  [302] = {.lex_state = 632},
  [303] = {.lex_state = 632},
  [304] = {.lex_state = 632},
  [305] = {.lex_state = 632},
  [306] = {.lex_state = 632},
  [307] = {.lex_state = 677},
  [308] = {.lex_state = 528},
  [309] = {.lex_state = 693},
  [310] = {.lex_state = 693},
  [311] = {.lex_state = 693},
  [312] = {.lex_state = 693},
  [313] = {.lex_state = 677},
  [314] = {.lex_state = 693},
  [315] = {.lex_state = 693},
  [316] = {.lex_state = 693},
  [317] = {.lex_state = 528},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [sym_is_overridable] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_enumeration] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_system_readwrite] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_is_primitive] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_private_write] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__access_op] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [sym_is_interface] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [sym__scope_op] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_arguments] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_is_override] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_writelimited] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_protected_write] = ACTIONS(1),
  },
  [1] = {
    [sym__literal] = STATE(40),
    [sym_string] = STATE(40),
    [sym_use_definition] = STATE(29),
    [sym_module_definition] = STATE(29),
    [sym_class_definition] = STATE(29),
    [sym_is_function] = STATE(30),
    [sym_variable_definition] = STATE(29),
    [sym_container_definition] = STATE(29),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_enum_statement] = STATE(32),
    [sym_end_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym_while_statement] = STATE(32),
    [sym_expression_statement] = STATE(32),
    [sym_return_statement] = STATE(32),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_source_file] = STATE(34),
    [sym_character] = STATE(40),
    [sym_access_control] = STATE(35),
    [sym_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym_is_method] = STATE(30),
    [sym__override] = STATE(36),
    [sym__control_flow_statement] = STATE(32),
    [sym_goto_statement] = STATE(32),
    [sym_switch_statement] = STATE(32),
    [sym_case_statement] = STATE(32),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(38),
    [sym_scope_expression] = STATE(39),
    [sym_binding_expression] = STATE(40),
    [sym_collection] = STATE(40),
    [sym__value] = STATE(40),
    [sym__number] = STATE(40),
    [sym_definition] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym_enum_definition] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_readability] = STATE(43),
    [sym__sentence] = STATE(42),
    [sym_type] = STATE(44),
    [sym_declaration_definition] = STATE(29),
    [sym_statement] = STATE(41),
    [sym_section_statement] = STATE(32),
    [sym_single_line_if_statement] = STATE(32),
    [sym_default_statement] = STATE(32),
    [sym_access_expression] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(17),
    [sym_is_interface] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(7),
    [sym_binary] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(25),
    [sym_long] = ACTIONS(21),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_private] = ACTIONS(17),
    [sym_is_overridable] = ACTIONS(29),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_integer] = ACTIONS(23),
    [sym_is_declare] = ACTIONS(31),
    [sym_float] = ACTIONS(21),
    [anon_sym_enumeration] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [sym_is_override] = ACTIONS(29),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym_is_external] = ACTIONS(31),
    [sym_double] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(41),
    [anon_sym_require] = ACTIONS(35),
    [sym_is_primitive] = ACTIONS(43),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [sym_null] = ACTIONS(23),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [sym_hex] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(49),
    [anon_sym_function] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_u64] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(63),
    [anon_sym_method] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [2] = {
    [sym_array] = STATE(46),
    [anon_sym_f64] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_i64] = ACTIONS(67),
    [anon_sym_i8] = ACTIONS(67),
    [anon_sym_u16] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(67),
    [anon_sym_f32] = ACTIONS(67),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(67),
    [anon_sym_u8] = ACTIONS(67),
    [anon_sym_u64] = ACTIONS(67),
    [anon_sym_s8] = ACTIONS(67),
    [anon_sym_s32] = ACTIONS(67),
    [anon_sym_i16] = ACTIONS(67),
    [anon_sym_u32] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [anon_sym_COLON_EQ] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(71),
  },
  [4] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(50),
    [sym_string] = STATE(50),
    [sym_group_expression] = STATE(50),
    [sym_assignment_expression] = STATE(49),
    [sym_scope_expression] = STATE(48),
    [sym_binding_expression] = STATE(50),
    [sym_character] = STATE(50),
    [sym__assignment_or_value] = STATE(49),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(50),
    [sym_collection] = STATE(50),
    [sym__number] = STATE(50),
    [sym_long] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(75),
    [sym_identifier] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(75),
    [sym_null] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(75),
    [sym_oct] = ACTIONS(79),
    [sym_hex] = ACTIONS(75),
  },
  [5] = {
    [sym__escape_sequence] = STATE(52),
    [aux_sym_string_repeat1] = STATE(52),
    [anon_sym_BSLASHa] = ACTIONS(81),
    [anon_sym_BSLASHt] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(81),
    [anon_sym_BSLASHf] = ACTIONS(81),
    [anon_sym_BSLASH0] = ACTIONS(81),
    [anon_sym_BSLASHr] = ACTIONS(81),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(81),
    [aux_sym_string_token1] = ACTIONS(85),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(81),
    [anon_sym_BSLASHb] = ACTIONS(81),
    [anon_sym_BSLASHv] = ACTIONS(81),
    [anon_sym_BSLASHn] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym__escape_sequence] = STATE(53),
    [anon_sym_BSLASHa] = ACTIONS(87),
    [anon_sym_BSLASHt] = ACTIONS(87),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(87),
    [anon_sym_BSLASHv] = ACTIONS(87),
    [anon_sym_BSLASHn] = ACTIONS(87),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(87),
    [aux_sym_character_token1] = ACTIONS(89),
    [anon_sym_BSLASHf] = ACTIONS(87),
    [anon_sym_BSLASH0] = ACTIONS(87),
    [anon_sym_BSLASHr] = ACTIONS(87),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(87),
  },
  [7] = {
    [sym_function_definition] = STATE(54),
    [sym_readability] = STATE(43),
    [sym_type] = STATE(44),
    [sym_is_function] = STATE(30),
    [sym_variable_definition] = STATE(54),
    [sym_access_control] = STATE(35),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_is_method] = STATE(30),
    [sym__override] = STATE(36),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(17),
    [sym_is_primitive] = ACTIONS(43),
    [sym_is_interface] = ACTIONS(19),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_private] = ACTIONS(17),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(29),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_method] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [sym_is_override] = ACTIONS(29),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [8] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_switch] = ACTIONS(95),
    [anon_sym_module] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(95),
    [anon_sym_method] = ACTIONS(95),
    [anon_sym_enumeration] = ACTIONS(95),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(95),
    [anon_sym_class] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
  },
  [10] = {
    [sym__enum_element] = STATE(58),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(99),
  },
  [11] = {
    [sym_array] = STATE(61),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(103),
  },
  [12] = {
    [anon_sym_module] = ACTIONS(105),
    [sym__comment] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(105),
    [sym__space] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(105),
  },
  [13] = {
    [anon_sym_readonly] = ACTIONS(107),
    [anon_sym_f64] = ACTIONS(107),
    [anon_sym_function] = ACTIONS(107),
    [anon_sym_i64] = ACTIONS(107),
    [anon_sym_i8] = ACTIONS(107),
    [anon_sym_u16] = ACTIONS(107),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(107),
    [anon_sym_private_write] = ACTIONS(107),
    [anon_sym_s16] = ACTIONS(107),
    [anon_sym_f32] = ACTIONS(107),
    [anon_sym_i32] = ACTIONS(107),
    [anon_sym_u64] = ACTIONS(107),
    [anon_sym_u8] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [sym_is_primitive] = ACTIONS(107),
    [sym_is_interface] = ACTIONS(107),
    [anon_sym_writelimited] = ACTIONS(107),
    [anon_sym_s8] = ACTIONS(107),
    [anon_sym_method] = ACTIONS(107),
    [anon_sym_s32] = ACTIONS(107),
    [anon_sym_i16] = ACTIONS(107),
    [anon_sym_u32] = ACTIONS(107),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(107),
    [sym_is_override] = ACTIONS(107),
    [anon_sym_protected_write] = ACTIONS(107),
  },
  [14] = {
    [sym_is_function] = STATE(63),
    [sym_is_method] = STATE(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [15] = {
    [sym__override] = STATE(65),
    [sym_is_function] = STATE(63),
    [sym_is_method] = STATE(63),
    [sym_is_overridable] = ACTIONS(113),
    [anon_sym_function] = ACTIONS(109),
    [sym_is_primitive] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(113),
    [anon_sym_method] = ACTIONS(111),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(117),
  },
  [17] = {
    [sym_group_expression] = STATE(68),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
  },
  [18] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(121),
  },
  [19] = {
    [sym_group_expression] = STATE(70),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(123),
  },
  [20] = {
    [sym_scope_expression] = STATE(71),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
  },
  [21] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(127),
  },
  [22] = {
    [sym__literal] = STATE(79),
    [sym_string] = STATE(79),
    [sym_group_expression] = STATE(79),
    [sym_assignment_expression] = STATE(75),
    [sym_scope_expression] = STATE(76),
    [sym_binding_expression] = STATE(79),
    [sym_cast_ops] = STATE(77),
    [sym_unary_op] = STATE(78),
    [sym_collection] = STATE(79),
    [sym__value] = STATE(79),
    [sym__number] = STATE(79),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_character] = STATE(79),
    [sym_access_expression] = STATE(33),
    [sym_cast_expression] = STATE(75),
    [sym_long] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_double] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(139),
    [sym_integer] = ACTIONS(141),
    [sym_float] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(131),
    [sym_null] = ACTIONS(141),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(129),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [sym_oct] = ACTIONS(141),
    [sym_hex] = ACTIONS(129),
  },
  [23] = {
    [sym__literal] = STATE(83),
    [sym_string] = STATE(83),
    [sym__comma_list_assignment_or_values] = STATE(81),
    [sym_group_expression] = STATE(83),
    [sym_assignment_expression] = STATE(84),
    [sym_scope_expression] = STATE(82),
    [sym_binding_expression] = STATE(83),
    [sym_collection] = STATE(83),
    [sym__value] = STATE(83),
    [sym__number] = STATE(83),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__assignment_or_value] = STATE(84),
    [sym_character] = STATE(83),
    [sym_access_expression] = STATE(33),
    [sym_long] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(143),
    [sym_null] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(143),
    [sym_oct] = ACTIONS(147),
    [sym_hex] = ACTIONS(143),
  },
  [24] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(154),
    [sym_identifier] = ACTIONS(156),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_COLON] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [sym__scope_op] = ACTIONS(163),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [25] = {
    [sym_group_expression] = STATE(88),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(123),
  },
  [26] = {
    [sym_group_expression] = STATE(89),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(123),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(165),
  },
  [28] = {
    [sym_primitive_type] = STATE(91),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [29] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(171),
  },
  [31] = {
    [sym_array] = STATE(95),
    [aux_sym_type_repeat1] = STATE(94),
    [aux_sym_type_repeat2] = STATE(95),
    [sym_pointer] = STATE(94),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
  },
  [32] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(183),
  },
  [35] = {
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_is_method] = STATE(63),
    [sym__override] = STATE(65),
    [sym_type] = STATE(97),
    [sym_is_function] = STATE(63),
    [sym_readability] = STATE(98),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(51),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym_is_overridable] = ACTIONS(185),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_is_primitive] = ACTIONS(187),
    [sym_is_interface] = ACTIONS(189),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_method] = ACTIONS(65),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [sym_is_override] = ACTIONS(185),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [36] = {
    [sym_is_function] = STATE(63),
    [sym_is_method] = STATE(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym_is_primitive] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [37] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [38] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [sym__scope_op] = ACTIONS(163),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [40] = {
    [sym_assignment_op] = STATE(104),
    [sym_assignment_post_op] = STATE(105),
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
    [sym__access_op] = ACTIONS(201),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(203),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
  },
  [41] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym__literal] = STATE(40),
    [sym_string] = STATE(40),
    [sym_use_definition] = STATE(29),
    [sym_module_definition] = STATE(29),
    [sym_class_definition] = STATE(29),
    [sym_is_function] = STATE(30),
    [sym_variable_definition] = STATE(29),
    [sym_container_definition] = STATE(29),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_enum_statement] = STATE(32),
    [sym_end_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym_while_statement] = STATE(32),
    [sym_expression_statement] = STATE(32),
    [sym_return_statement] = STATE(32),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_character] = STATE(40),
    [sym_access_control] = STATE(35),
    [sym_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym_is_method] = STATE(30),
    [sym__override] = STATE(36),
    [sym__control_flow_statement] = STATE(32),
    [sym_goto_statement] = STATE(32),
    [sym_switch_statement] = STATE(32),
    [sym_case_statement] = STATE(32),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(38),
    [sym_scope_expression] = STATE(39),
    [sym_binding_expression] = STATE(40),
    [sym_collection] = STATE(40),
    [sym__value] = STATE(40),
    [sym__number] = STATE(40),
    [sym_definition] = STATE(41),
    [sym__sentence] = STATE(108),
    [sym_enum_definition] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_readability] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(108),
    [sym_type] = STATE(44),
    [sym_declaration_definition] = STATE(29),
    [sym_statement] = STATE(41),
    [sym_section_statement] = STATE(32),
    [sym_single_line_if_statement] = STATE(32),
    [sym_default_statement] = STATE(32),
    [sym_access_expression] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_protected] = ACTIONS(17),
    [sym_is_interface] = ACTIONS(19),
    [anon_sym_i16] = ACTIONS(7),
    [sym_binary] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(25),
    [sym_long] = ACTIONS(21),
    [anon_sym_module] = ACTIONS(27),
    [anon_sym_private] = ACTIONS(17),
    [sym_is_overridable] = ACTIONS(29),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [sym_integer] = ACTIONS(23),
    [sym_is_declare] = ACTIONS(31),
    [sym_float] = ACTIONS(21),
    [anon_sym_enumeration] = ACTIONS(33),
    [anon_sym_use] = ACTIONS(35),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [sym_is_override] = ACTIONS(29),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym_is_external] = ACTIONS(31),
    [sym_double] = ACTIONS(21),
    [anon_sym_end] = ACTIONS(39),
    [anon_sym_class] = ACTIONS(41),
    [anon_sym_require] = ACTIONS(35),
    [sym_is_primitive] = ACTIONS(43),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [sym_null] = ACTIONS(23),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_section] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(47),
    [sym_hex] = ACTIONS(21),
    [anon_sym_switch] = ACTIONS(49),
    [anon_sym_function] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_u64] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(63),
    [anon_sym_method] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [43] = {
    [sym_type] = STATE(97),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(209),
  },
  [45] = {
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(213),
  },
  [46] = {
    [anon_sym_f64] = ACTIONS(215),
    [anon_sym_i64] = ACTIONS(215),
    [anon_sym_i8] = ACTIONS(215),
    [anon_sym_u16] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(215),
    [anon_sym_f32] = ACTIONS(215),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_i32] = ACTIONS(215),
    [anon_sym_u8] = ACTIONS(215),
    [anon_sym_u64] = ACTIONS(215),
    [anon_sym_s8] = ACTIONS(215),
    [anon_sym_s32] = ACTIONS(215),
    [anon_sym_i16] = ACTIONS(215),
    [anon_sym_u32] = ACTIONS(215),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [sym__scope_op] = ACTIONS(217),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [48] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [sym__scope_op] = ACTIONS(217),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [49] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
  },
  [50] = {
    [sym_assignment_op] = STATE(104),
    [sym_assignment_post_op] = STATE(105),
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
    [sym__access_op] = ACTIONS(223),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(203),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
  },
  [51] = {
    [anon_sym_DASH_EQ] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(225),
    [sym__access_op] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_CARET] = ACTIONS(227),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_PIPE_EQ] = ACTIONS(225),
    [anon_sym_DASH_DASH] = ACTIONS(227),
    [anon_sym_PLUS_EQ] = ACTIONS(225),
    [anon_sym_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_STAR_EQ] = ACTIONS(225),
    [anon_sym_DOLLAR] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_CARET_EQ] = ACTIONS(225),
    [anon_sym_LT_LT_EQ] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_SLASH_EQ] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_AMP_AMP] = ACTIONS(225),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_GT_GT_EQ] = ACTIONS(225),
    [anon_sym_AMP_EQ] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_PERCENT_EQ] = ACTIONS(225),
  },
  [52] = {
    [sym__escape_sequence] = STATE(115),
    [aux_sym_string_repeat1] = STATE(115),
    [anon_sym_BSLASHa] = ACTIONS(229),
    [anon_sym_BSLASHt] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_BSLASHf] = ACTIONS(229),
    [anon_sym_BSLASH0] = ACTIONS(229),
    [anon_sym_BSLASHr] = ACTIONS(229),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(229),
    [aux_sym_string_token1] = ACTIONS(233),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(229),
    [anon_sym_BSLASHb] = ACTIONS(229),
    [anon_sym_BSLASHv] = ACTIONS(229),
    [anon_sym_BSLASHn] = ACTIONS(229),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(237),
    [sym__comment] = ACTIONS(3),
  },
  [55] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(239),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(241),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [sym_static_assignment] = STATE(118),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(245),
  },
  [58] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(247),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(249),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(251),
  },
  [60] = {
    [sym_array] = STATE(121),
    [sym_pointer] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [61] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(255),
  },
  [62] = {
    [sym_scope_expression] = STATE(124),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(257),
  },
  [63] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(259),
  },
  [64] = {
    [sym_is_function] = STATE(126),
    [sym_is_method] = STATE(126),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [65] = {
    [sym_is_function] = STATE(126),
    [sym_is_method] = STATE(126),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym_is_primitive] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [66] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [sym__literal] = STATE(130),
    [sym_string] = STATE(130),
    [sym_group_expression] = STATE(130),
    [sym_assignment_expression] = STATE(128),
    [sym_scope_expression] = STATE(76),
    [sym_binding_expression] = STATE(130),
    [sym_cast_ops] = STATE(77),
    [sym_unary_op] = STATE(129),
    [sym_collection] = STATE(130),
    [sym__value] = STATE(130),
    [sym__number] = STATE(130),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_character] = STATE(130),
    [sym_access_expression] = STATE(33),
    [sym_cast_expression] = STATE(128),
    [sym_long] = ACTIONS(265),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_DOLLAR_DOLLAR_DOLLAR] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [sym_double] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_DOLLAR_DOLLAR] = ACTIONS(139),
    [sym_integer] = ACTIONS(267),
    [sym_float] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(131),
    [sym_null] = ACTIONS(267),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(265),
    [anon_sym_DOLLAR] = ACTIONS(139),
    [sym_oct] = ACTIONS(267),
    [sym_hex] = ACTIONS(265),
  },
  [68] = {
    [sym__control_flow_statement] = STATE(32),
    [sym_goto_statement] = STATE(32),
    [sym_switch_statement] = STATE(32),
    [sym_case_statement] = STATE(32),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(38),
    [sym_scope_expression] = STATE(133),
    [sym_binding_expression] = STATE(40),
    [sym__literal] = STATE(40),
    [sym_string] = STATE(40),
    [sym_enum_statement] = STATE(32),
    [sym_end_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym_while_statement] = STATE(32),
    [sym_expression_statement] = STATE(32),
    [sym_return_statement] = STATE(32),
    [sym__value] = STATE(40),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_collection] = STATE(40),
    [sym__number] = STATE(40),
    [sym_statement] = STATE(134),
    [sym_section_statement] = STATE(32),
    [sym_single_line_if_statement] = STATE(32),
    [sym_default_statement] = STATE(32),
    [sym_character] = STATE(40),
    [sym_access_expression] = STATE(33),
    [anon_sym_switch] = ACTIONS(49),
    [sym_long] = ACTIONS(21),
    [anon_sym_if] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_default] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(271),
    [anon_sym_enum] = ACTIONS(15),
    [sym_double] = ACTIONS(21),
    [sym_identifier] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(61),
    [sym_integer] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(63),
    [sym_float] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(45),
    [sym_binary] = ACTIONS(21),
    [sym_oct] = ACTIONS(23),
    [sym_hex] = ACTIONS(21),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(275),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
  },
  [71] = {
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(281),
  },
  [72] = {
    [sym_long] = ACTIONS(283),
    [anon_sym_DQUOTE] = ACTIONS(283),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(283),
    [sym_double] = ACTIONS(283),
    [sym_identifier] = ACTIONS(285),
    [sym_integer] = ACTIONS(285),
    [sym_float] = ACTIONS(283),
    [sym_null] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(283),
    [sym_oct] = ACTIONS(285),
    [sym_hex] = ACTIONS(283),
  },
  [73] = {
    [sym_type] = STATE(136),
    [sym__base_type] = STATE(137),
    [sym_primitive_type] = STATE(137),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(287),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_CARET] = ACTIONS(159),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_PIPE] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_PIPE_PIPE] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(159),
    [anon_sym_AMP_AMP] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [75] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [76] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_GT_EQ] = ACTIONS(179),
    [anon_sym_CARET] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [sym__scope_op] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_LT] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(179),
    [anon_sym_AMP] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_LT_LT] = ACTIONS(181),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [77] = {
    [sym_group_expression] = STATE(140),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(123),
  },
  [78] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(143),
    [sym_string] = STATE(143),
    [sym_group_expression] = STATE(143),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(143),
    [sym_character] = STATE(143),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(143),
    [sym_collection] = STATE(143),
    [sym__number] = STATE(143),
    [sym_long] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(293),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(297),
    [sym_float] = ACTIONS(293),
    [sym_null] = ACTIONS(297),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(293),
    [sym_oct] = ACTIONS(297),
    [sym_hex] = ACTIONS(293),
  },
  [79] = {
    [sym_assignment_op] = STATE(146),
    [sym_array] = STATE(106),
    [sym_assignment_post_op] = STATE(105),
    [sym_binary_op] = STATE(147),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(203),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(303),
  },
  [80] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [sym__scope_op] = ACTIONS(305),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [81] = {
    [anon_sym_RBRACE] = ACTIONS(307),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [sym__scope_op] = ACTIONS(305),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [83] = {
    [sym_assignment_op] = STATE(151),
    [sym_assignment_post_op] = STATE(105),
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACE] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
    [sym__access_op] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(203),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
  },
  [84] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(153),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(313),
  },
  [85] = {
    [sym__base_type] = STATE(155),
    [sym_primitive_type] = STATE(155),
    [sym_container_types] = STATE(156),
    [sym_type] = STATE(154),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_arguments] = ACTIONS(315),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(317),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_symbol] = ACTIONS(315),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(315),
  },
  [86] = {
    [aux_sym_extension_repeat1] = STATE(160),
    [sym_parameter_list] = STATE(161),
    [sym_string] = STATE(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym__space] = ACTIONS(321),
    [sym_identifier] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [87] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(329),
  },
  [88] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(331),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(333),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(337),
  },
  [92] = {
    [sym_parameter_list] = STATE(167),
    [sym_return_list] = STATE(168),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [93] = {
    [anon_sym_COLON_EQ] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(343),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(345),
    [sym_identifier] = ACTIONS(345),
    [anon_sym_COMMA] = ACTIONS(343),
  },
  [94] = {
    [sym_array] = STATE(170),
    [aux_sym_type_repeat1] = STATE(169),
    [aux_sym_type_repeat2] = STATE(170),
    [sym_pointer] = STATE(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [sym_identifier] = ACTIONS(347),
  },
  [95] = {
    [sym_array] = STATE(171),
    [aux_sym_type_repeat2] = STATE(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(347),
  },
  [96] = {
    [sym__override] = STATE(172),
    [sym_is_function] = STATE(126),
    [sym_is_method] = STATE(126),
    [sym_is_overridable] = ACTIONS(349),
    [anon_sym_function] = ACTIONS(109),
    [sym_is_primitive] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_is_override] = ACTIONS(349),
    [anon_sym_method] = ACTIONS(111),
  },
  [97] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(351),
  },
  [98] = {
    [sym_type] = STATE(174),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [sym_long] = ACTIONS(353),
    [anon_sym_DQUOTE] = ACTIONS(353),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(353),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_double] = ACTIONS(353),
    [sym_identifier] = ACTIONS(355),
    [sym_integer] = ACTIONS(355),
    [sym_float] = ACTIONS(353),
    [sym_null] = ACTIONS(355),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(353),
    [sym_oct] = ACTIONS(355),
    [sym_hex] = ACTIONS(353),
  },
  [100] = {
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(359),
  },
  [101] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(179),
    [sym_string] = STATE(179),
    [sym_group_expression] = STATE(179),
    [sym_scope_expression] = STATE(178),
    [sym_binding_expression] = STATE(179),
    [sym_character] = STATE(179),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(179),
    [sym_collection] = STATE(179),
    [sym__number] = STATE(179),
    [sym__comma_list_values] = STATE(180),
    [sym_long] = ACTIONS(361),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(361),
    [sym_identifier] = ACTIONS(363),
    [sym_integer] = ACTIONS(365),
    [sym_float] = ACTIONS(361),
    [sym_null] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(361),
    [sym_oct] = ACTIONS(365),
    [sym_hex] = ACTIONS(361),
  },
  [102] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(181),
    [sym_string] = STATE(181),
    [sym_group_expression] = STATE(181),
    [sym_scope_expression] = STATE(133),
    [sym_binding_expression] = STATE(181),
    [sym_character] = STATE(181),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(181),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(181),
    [sym_long] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(367),
    [sym_identifier] = ACTIONS(273),
    [sym_integer] = ACTIONS(369),
    [sym_float] = ACTIONS(367),
    [sym_null] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(367),
    [sym_oct] = ACTIONS(369),
    [sym_hex] = ACTIONS(367),
  },
  [103] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(371),
  },
  [104] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(184),
    [sym_string] = STATE(184),
    [sym_group_expression] = STATE(184),
    [sym_scope_expression] = STATE(183),
    [sym_binding_expression] = STATE(184),
    [sym_character] = STATE(184),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(184),
    [sym_collection] = STATE(184),
    [sym__number] = STATE(184),
    [sym_long] = ACTIONS(373),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(373),
    [sym_identifier] = ACTIONS(375),
    [sym_integer] = ACTIONS(377),
    [sym_float] = ACTIONS(373),
    [sym_null] = ACTIONS(377),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(373),
    [sym_oct] = ACTIONS(377),
    [sym_hex] = ACTIONS(373),
  },
  [105] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_RBRACE] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(379),
  },
  [106] = {
    [anon_sym_DASH_EQ] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_LT_LT] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(381),
    [sym__access_op] = ACTIONS(381),
    [anon_sym_GT_EQ] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(383),
    [anon_sym_BANG_EQ] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_PIPE_EQ] = ACTIONS(381),
    [anon_sym_DASH_DASH] = ACTIONS(383),
    [anon_sym_PLUS_EQ] = ACTIONS(381),
    [anon_sym_PIPE_PIPE] = ACTIONS(381),
    [anon_sym_STAR_EQ] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_EQ_EQ] = ACTIONS(381),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(381),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_CARET_EQ] = ACTIONS(381),
    [anon_sym_LT_LT_EQ] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_SLASH_EQ] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(383),
    [anon_sym_COLON_EQ] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(383),
    [anon_sym_AMP_AMP] = ACTIONS(381),
    [anon_sym_LT_EQ] = ACTIONS(381),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(383),
    [anon_sym_GT_GT_EQ] = ACTIONS(381),
    [anon_sym_AMP_EQ] = ACTIONS(381),
    [anon_sym_PLUS_PLUS] = ACTIONS(383),
    [anon_sym_PERCENT] = ACTIONS(383),
    [anon_sym_PERCENT_EQ] = ACTIONS(381),
  },
  [107] = {
    [anon_sym_DQUOTE] = ACTIONS(385),
    [anon_sym_i8] = ACTIONS(387),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_return] = ACTIONS(387),
    [anon_sym_default] = ACTIONS(387),
    [anon_sym_enum] = ACTIONS(387),
    [anon_sym_protected] = ACTIONS(387),
    [sym_is_interface] = ACTIONS(387),
    [anon_sym_i16] = ACTIONS(387),
    [sym_binary] = ACTIONS(385),
    [sym_oct] = ACTIONS(387),
    [anon_sym_goto] = ACTIONS(387),
    [sym_long] = ACTIONS(385),
    [anon_sym_module] = ACTIONS(387),
    [anon_sym_private] = ACTIONS(387),
    [sym_is_overridable] = ACTIONS(387),
    [anon_sym_f32] = ACTIONS(387),
    [anon_sym_i32] = ACTIONS(387),
    [anon_sym_u8] = ACTIONS(387),
    [sym_integer] = ACTIONS(387),
    [sym_is_declare] = ACTIONS(387),
    [sym_float] = ACTIONS(385),
    [anon_sym_enumeration] = ACTIONS(387),
    [anon_sym_use] = ACTIONS(387),
    [anon_sym_system_readwrite] = ACTIONS(387),
    [sym_is_override] = ACTIONS(387),
    [anon_sym_readonly] = ACTIONS(387),
    [anon_sym_f64] = ACTIONS(387),
    [anon_sym_i64] = ACTIONS(387),
    [anon_sym_u16] = ACTIONS(387),
    [sym_is_external] = ACTIONS(387),
    [sym_double] = ACTIONS(385),
    [anon_sym_end] = ACTIONS(387),
    [anon_sym_class] = ACTIONS(387),
    [anon_sym_require] = ACTIONS(387),
    [sym_is_primitive] = ACTIONS(387),
    [anon_sym_writelimited] = ACTIONS(387),
    [anon_sym_s8] = ACTIONS(387),
    [anon_sym_s32] = ACTIONS(387),
    [sym_null] = ACTIONS(387),
    [anon_sym_u32] = ACTIONS(387),
    [anon_sym_section] = ACTIONS(387),
    [anon_sym_if] = ACTIONS(387),
    [sym_hex] = ACTIONS(385),
    [anon_sym_switch] = ACTIONS(387),
    [anon_sym_function] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(387),
    [anon_sym_LBRACE] = ACTIONS(385),
    [anon_sym_private_write] = ACTIONS(387),
    [anon_sym_s16] = ACTIONS(387),
    [sym_identifier] = ACTIONS(387),
    [anon_sym_u64] = ACTIONS(387),
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_while] = ACTIONS(387),
    [anon_sym_case] = ACTIONS(387),
    [anon_sym_method] = ACTIONS(387),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(387),
  },
  [108] = {
    [sym__literal] = STATE(40),
    [sym_string] = STATE(40),
    [sym_use_definition] = STATE(29),
    [sym_module_definition] = STATE(29),
    [sym_class_definition] = STATE(29),
    [sym_is_function] = STATE(30),
    [sym_variable_definition] = STATE(29),
    [sym_container_definition] = STATE(29),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_enum_statement] = STATE(32),
    [sym_end_statement] = STATE(32),
    [sym_if_statement] = STATE(32),
    [sym_while_statement] = STATE(32),
    [sym_expression_statement] = STATE(32),
    [sym_return_statement] = STATE(32),
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_character] = STATE(40),
    [sym_access_control] = STATE(35),
    [sym_extension] = STATE(29),
    [sym_end_extension] = STATE(29),
    [sym_is_method] = STATE(30),
    [sym__override] = STATE(36),
    [sym__control_flow_statement] = STATE(32),
    [sym_goto_statement] = STATE(32),
    [sym_switch_statement] = STATE(32),
    [sym_case_statement] = STATE(32),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(38),
    [sym_scope_expression] = STATE(39),
    [sym_binding_expression] = STATE(40),
    [sym_collection] = STATE(40),
    [sym__value] = STATE(40),
    [sym__number] = STATE(40),
    [sym_definition] = STATE(41),
    [sym__sentence] = STATE(108),
    [sym_enum_definition] = STATE(29),
    [sym_function_definition] = STATE(29),
    [sym_readability] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(108),
    [sym_type] = STATE(44),
    [sym_declaration_definition] = STATE(29),
    [sym_statement] = STATE(41),
    [sym_section_statement] = STATE(32),
    [sym_single_line_if_statement] = STATE(32),
    [sym_default_statement] = STATE(32),
    [sym_access_expression] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [anon_sym_i8] = ACTIONS(392),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_return] = ACTIONS(398),
    [anon_sym_default] = ACTIONS(401),
    [anon_sym_enum] = ACTIONS(404),
    [anon_sym_protected] = ACTIONS(407),
    [sym_is_interface] = ACTIONS(410),
    [anon_sym_i16] = ACTIONS(392),
    [sym_binary] = ACTIONS(413),
    [sym_oct] = ACTIONS(416),
    [anon_sym_goto] = ACTIONS(419),
    [sym_long] = ACTIONS(413),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_private] = ACTIONS(407),
    [sym_is_overridable] = ACTIONS(425),
    [anon_sym_f32] = ACTIONS(392),
    [anon_sym_i32] = ACTIONS(392),
    [anon_sym_u8] = ACTIONS(392),
    [sym_integer] = ACTIONS(416),
    [sym_is_declare] = ACTIONS(428),
    [sym_float] = ACTIONS(413),
    [anon_sym_enumeration] = ACTIONS(431),
    [anon_sym_use] = ACTIONS(434),
    [anon_sym_system_readwrite] = ACTIONS(437),
    [sym_is_override] = ACTIONS(425),
    [anon_sym_readonly] = ACTIONS(437),
    [anon_sym_f64] = ACTIONS(392),
    [anon_sym_i64] = ACTIONS(392),
    [anon_sym_u16] = ACTIONS(392),
    [sym_is_external] = ACTIONS(428),
    [sym_double] = ACTIONS(413),
    [anon_sym_end] = ACTIONS(440),
    [anon_sym_class] = ACTIONS(443),
    [anon_sym_require] = ACTIONS(434),
    [sym_is_primitive] = ACTIONS(446),
    [anon_sym_writelimited] = ACTIONS(437),
    [anon_sym_s8] = ACTIONS(392),
    [anon_sym_s32] = ACTIONS(392),
    [sym_null] = ACTIONS(416),
    [anon_sym_u32] = ACTIONS(392),
    [anon_sym_section] = ACTIONS(449),
    [anon_sym_if] = ACTIONS(452),
    [sym_hex] = ACTIONS(413),
    [anon_sym_switch] = ACTIONS(455),
    [anon_sym_function] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_private_write] = ACTIONS(437),
    [anon_sym_s16] = ACTIONS(392),
    [sym_identifier] = ACTIONS(467),
    [anon_sym_u64] = ACTIONS(392),
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_while] = ACTIONS(472),
    [anon_sym_case] = ACTIONS(475),
    [anon_sym_method] = ACTIONS(478),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(437),
  },
  [109] = {
    [sym_static_assignment] = STATE(185),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(481),
  },
  [110] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(483),
  },
  [111] = {
    [anon_sym_f64] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_i64] = ACTIONS(485),
    [anon_sym_i8] = ACTIONS(485),
    [anon_sym_u16] = ACTIONS(485),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [sym__access_op] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_s16] = ACTIONS(485),
    [anon_sym_f32] = ACTIONS(485),
    [sym_identifier] = ACTIONS(485),
    [anon_sym_i32] = ACTIONS(485),
    [anon_sym_u8] = ACTIONS(485),
    [anon_sym_u64] = ACTIONS(485),
    [anon_sym_COLON_EQ] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_s8] = ACTIONS(485),
    [anon_sym_s32] = ACTIONS(485),
    [anon_sym_i16] = ACTIONS(485),
    [anon_sym_u32] = ACTIONS(485),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [112] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(187),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(489),
  },
  [113] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(188),
    [sym_string] = STATE(188),
    [sym_group_expression] = STATE(188),
    [sym_scope_expression] = STATE(48),
    [sym_binding_expression] = STATE(188),
    [sym_character] = STATE(188),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(188),
    [sym_collection] = STATE(188),
    [sym__number] = STATE(188),
    [sym_long] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(491),
    [sym_identifier] = ACTIONS(77),
    [sym_integer] = ACTIONS(493),
    [sym_float] = ACTIONS(491),
    [sym_null] = ACTIONS(493),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(491),
    [sym_oct] = ACTIONS(493),
    [sym_hex] = ACTIONS(491),
  },
  [114] = {
    [anon_sym_DASH_EQ] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_LT_LT] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(495),
    [sym__access_op] = ACTIONS(495),
    [anon_sym_GT_EQ] = ACTIONS(495),
    [anon_sym_CARET] = ACTIONS(497),
    [anon_sym_BANG_EQ] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_PIPE_EQ] = ACTIONS(495),
    [anon_sym_DASH_DASH] = ACTIONS(497),
    [anon_sym_PLUS_EQ] = ACTIONS(495),
    [anon_sym_PIPE_PIPE] = ACTIONS(495),
    [anon_sym_STAR_EQ] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_EQ_EQ] = ACTIONS(495),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_CARET_EQ] = ACTIONS(495),
    [anon_sym_LT_LT_EQ] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(497),
    [anon_sym_SLASH_EQ] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(497),
    [anon_sym_GT_GT] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_COLON_EQ] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(497),
    [anon_sym_AMP_AMP] = ACTIONS(495),
    [anon_sym_LT_EQ] = ACTIONS(495),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(497),
    [anon_sym_GT_GT_EQ] = ACTIONS(495),
    [anon_sym_AMP_EQ] = ACTIONS(495),
    [anon_sym_PLUS_PLUS] = ACTIONS(497),
    [anon_sym_PERCENT] = ACTIONS(497),
    [anon_sym_PERCENT_EQ] = ACTIONS(495),
  },
  [115] = {
    [sym__escape_sequence] = STATE(115),
    [aux_sym_string_repeat1] = STATE(115),
    [anon_sym_BSLASHa] = ACTIONS(499),
    [anon_sym_BSLASHt] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(499),
    [anon_sym_BSLASHf] = ACTIONS(499),
    [anon_sym_BSLASH0] = ACTIONS(499),
    [anon_sym_BSLASHr] = ACTIONS(499),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(499),
    [aux_sym_string_token1] = ACTIONS(504),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(499),
    [anon_sym_BSLASHb] = ACTIONS(499),
    [anon_sym_BSLASHv] = ACTIONS(499),
    [anon_sym_BSLASHn] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_DASH_EQ] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_LT_LT] = ACTIONS(509),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym__access_op] = ACTIONS(507),
    [anon_sym_GT_EQ] = ACTIONS(507),
    [anon_sym_CARET] = ACTIONS(509),
    [anon_sym_BANG_EQ] = ACTIONS(507),
    [anon_sym_COMMA] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_PIPE_EQ] = ACTIONS(507),
    [anon_sym_DASH_DASH] = ACTIONS(509),
    [anon_sym_PLUS_EQ] = ACTIONS(507),
    [anon_sym_PIPE_PIPE] = ACTIONS(507),
    [anon_sym_STAR_EQ] = ACTIONS(507),
    [anon_sym_DOLLAR] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_EQ_EQ] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(507),
    [anon_sym_LPAREN] = ACTIONS(507),
    [anon_sym_CARET_EQ] = ACTIONS(507),
    [anon_sym_LT_LT_EQ] = ACTIONS(507),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym_SLASH_EQ] = ACTIONS(507),
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_GT_GT] = ACTIONS(509),
    [anon_sym_STAR] = ACTIONS(509),
    [anon_sym_COLON_EQ] = ACTIONS(507),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_AMP_AMP] = ACTIONS(507),
    [anon_sym_LT_EQ] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(509),
    [anon_sym_GT_GT_EQ] = ACTIONS(507),
    [anon_sym_AMP_EQ] = ACTIONS(507),
    [anon_sym_PLUS_PLUS] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(509),
    [anon_sym_PERCENT_EQ] = ACTIONS(507),
  },
  [117] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(189),
    [sym_string] = STATE(189),
    [sym_group_expression] = STATE(189),
    [sym_scope_expression] = STATE(183),
    [sym_binding_expression] = STATE(189),
    [sym_character] = STATE(189),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(189),
    [sym_collection] = STATE(189),
    [sym__number] = STATE(189),
    [sym_long] = ACTIONS(511),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(511),
    [sym_identifier] = ACTIONS(375),
    [sym_integer] = ACTIONS(513),
    [sym_float] = ACTIONS(511),
    [sym_null] = ACTIONS(513),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(511),
    [sym_oct] = ACTIONS(513),
    [sym_hex] = ACTIONS(511),
  },
  [118] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(515),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(517),
  },
  [120] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(485),
  },
  [121] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(519),
    [sym__comment] = ACTIONS(3),
  },
  [122] = {
    [sym_array] = STATE(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(519),
  },
  [123] = {
    [sym_array] = STATE(191),
    [sym_pointer] = STATE(192),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [124] = {
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(521),
  },
  [125] = {
    [sym_parameter_list] = STATE(193),
    [sym_return_list] = STATE(194),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(523),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [126] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(525),
  },
  [127] = {
    [sym_is_function] = STATE(196),
    [sym_is_method] = STATE(196),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [128] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(527),
  },
  [129] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(198),
    [sym_string] = STATE(198),
    [sym_group_expression] = STATE(198),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(198),
    [sym_character] = STATE(198),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(198),
    [sym_collection] = STATE(198),
    [sym__number] = STATE(198),
    [sym_long] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(529),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(531),
    [sym_float] = ACTIONS(529),
    [sym_null] = ACTIONS(531),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(529),
    [sym_oct] = ACTIONS(531),
    [sym_hex] = ACTIONS(529),
  },
  [130] = {
    [sym_assignment_op] = STATE(146),
    [sym_array] = STATE(106),
    [sym_assignment_post_op] = STATE(105),
    [sym_binary_op] = STATE(199),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(299),
    [anon_sym_GT_EQ] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_BANG_EQ] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(203),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_PIPE_PIPE] = ACTIONS(301),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_EQ_EQ] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(303),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_AMP_AMP] = ACTIONS(301),
    [anon_sym_LT_EQ] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_PLUS_PLUS] = ACTIONS(203),
    [anon_sym_LT_LT] = ACTIONS(303),
  },
  [131] = {
    [anon_sym_switch] = ACTIONS(533),
    [anon_sym_module] = ACTIONS(533),
    [anon_sym_function] = ACTIONS(533),
    [anon_sym_while] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(533),
    [anon_sym_method] = ACTIONS(533),
    [anon_sym_enumeration] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(533),
    [anon_sym_class] = ACTIONS(533),
    [anon_sym_if] = ACTIONS(533),
  },
  [132] = {
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [sym__scope_op] = ACTIONS(535),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
  },
  [133] = {
    [anon_sym_DASH_EQ] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_CARET_EQ] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [anon_sym_LT_LT_EQ] = ACTIONS(179),
    [anon_sym_SLASH_EQ] = ACTIONS(179),
    [anon_sym_COLON_EQ] = ACTIONS(179),
    [anon_sym_PIPE_EQ] = ACTIONS(179),
    [anon_sym_PLUS_EQ] = ACTIONS(179),
    [anon_sym_DASH_DASH] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(179),
    [anon_sym_AMP_EQ] = ACTIONS(179),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [sym__scope_op] = ACTIONS(535),
    [anon_sym_PERCENT_EQ] = ACTIONS(179),
  },
  [134] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(201),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(539),
  },
  [136] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(541),
  },
  [137] = {
    [sym_array] = STATE(203),
    [aux_sym_type_repeat1] = STATE(202),
    [aux_sym_type_repeat2] = STATE(203),
    [sym_pointer] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(543),
  },
  [138] = {
    [sym_array] = STATE(205),
    [sym_scope_expression] = STATE(204),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(545),
  },
  [139] = {
    [anon_sym_DASH_EQ] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_LT_LT] = ACTIONS(549),
    [anon_sym_RBRACE] = ACTIONS(547),
    [sym__access_op] = ACTIONS(547),
    [anon_sym_GT_EQ] = ACTIONS(547),
    [anon_sym_CARET] = ACTIONS(549),
    [anon_sym_BANG_EQ] = ACTIONS(547),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PLUS] = ACTIONS(549),
    [anon_sym_PIPE_EQ] = ACTIONS(547),
    [anon_sym_DASH_DASH] = ACTIONS(549),
    [anon_sym_PLUS_EQ] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(547),
    [anon_sym_STAR_EQ] = ACTIONS(547),
    [anon_sym_DOLLAR] = ACTIONS(547),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_EQ_EQ] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_CARET_EQ] = ACTIONS(547),
    [anon_sym_LT_LT_EQ] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(549),
    [anon_sym_SLASH_EQ] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(549),
    [anon_sym_STAR] = ACTIONS(549),
    [anon_sym_COLON_EQ] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_AMP_AMP] = ACTIONS(547),
    [anon_sym_LT_EQ] = ACTIONS(547),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(549),
    [anon_sym_GT_GT_EQ] = ACTIONS(547),
    [anon_sym_AMP_EQ] = ACTIONS(547),
    [anon_sym_PLUS_PLUS] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(549),
    [anon_sym_PERCENT_EQ] = ACTIONS(547),
  },
  [140] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(551),
  },
  [141] = {
    [sym__access_op] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
  },
  [142] = {
    [sym__access_op] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [sym__scope_op] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
  },
  [143] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [144] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(209),
    [sym_string] = STATE(209),
    [sym_group_expression] = STATE(209),
    [sym_scope_expression] = STATE(76),
    [sym_binding_expression] = STATE(209),
    [sym_character] = STATE(209),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(209),
    [sym_collection] = STATE(209),
    [sym__number] = STATE(209),
    [sym_long] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(559),
    [sym_identifier] = ACTIONS(137),
    [sym_integer] = ACTIONS(561),
    [sym_float] = ACTIONS(559),
    [sym_null] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(559),
    [sym_oct] = ACTIONS(561),
    [sym_hex] = ACTIONS(559),
  },
  [145] = {
    [sym_long] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(563),
    [sym_double] = ACTIONS(563),
    [sym_identifier] = ACTIONS(565),
    [sym_integer] = ACTIONS(565),
    [sym_float] = ACTIONS(563),
    [sym_null] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(563),
    [sym_oct] = ACTIONS(565),
    [sym_hex] = ACTIONS(563),
  },
  [146] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(210),
    [sym_string] = STATE(210),
    [sym_group_expression] = STATE(210),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(210),
    [sym_character] = STATE(210),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(210),
    [sym_collection] = STATE(210),
    [sym__number] = STATE(210),
    [sym_long] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(567),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(569),
    [sym_float] = ACTIONS(567),
    [sym_null] = ACTIONS(569),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(567),
    [sym_oct] = ACTIONS(569),
    [sym_hex] = ACTIONS(567),
  },
  [147] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(211),
    [sym_string] = STATE(211),
    [sym_group_expression] = STATE(211),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(211),
    [sym_character] = STATE(211),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(211),
    [sym_collection] = STATE(211),
    [sym__number] = STATE(211),
    [sym_long] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(571),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(573),
    [sym_float] = ACTIONS(571),
    [sym_null] = ACTIONS(573),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(571),
    [sym_oct] = ACTIONS(573),
    [sym_hex] = ACTIONS(571),
  },
  [148] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(212),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(575),
  },
  [149] = {
    [anon_sym_DASH_EQ] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_LBRACK] = ACTIONS(577),
    [anon_sym_LT_LT] = ACTIONS(579),
    [anon_sym_RBRACE] = ACTIONS(577),
    [sym__access_op] = ACTIONS(577),
    [anon_sym_GT_EQ] = ACTIONS(577),
    [anon_sym_CARET] = ACTIONS(579),
    [anon_sym_BANG_EQ] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_PLUS] = ACTIONS(579),
    [anon_sym_PIPE_EQ] = ACTIONS(577),
    [anon_sym_DASH_DASH] = ACTIONS(579),
    [anon_sym_PLUS_EQ] = ACTIONS(577),
    [anon_sym_PIPE_PIPE] = ACTIONS(577),
    [anon_sym_STAR_EQ] = ACTIONS(577),
    [anon_sym_DOLLAR] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_EQ_EQ] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_CARET_EQ] = ACTIONS(577),
    [anon_sym_LT_LT_EQ] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(579),
    [anon_sym_SLASH_EQ] = ACTIONS(577),
    [anon_sym_SLASH] = ACTIONS(579),
    [anon_sym_GT_GT] = ACTIONS(579),
    [anon_sym_STAR] = ACTIONS(579),
    [anon_sym_COLON_EQ] = ACTIONS(577),
    [anon_sym_LT] = ACTIONS(579),
    [anon_sym_AMP_AMP] = ACTIONS(577),
    [anon_sym_LT_EQ] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(579),
    [anon_sym_GT_GT_EQ] = ACTIONS(577),
    [anon_sym_AMP_EQ] = ACTIONS(577),
    [anon_sym_PLUS_PLUS] = ACTIONS(579),
    [anon_sym_PERCENT] = ACTIONS(579),
    [anon_sym_PERCENT_EQ] = ACTIONS(577),
  },
  [150] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(213),
    [sym_string] = STATE(213),
    [sym_group_expression] = STATE(213),
    [sym_scope_expression] = STATE(82),
    [sym_binding_expression] = STATE(213),
    [sym_character] = STATE(213),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(213),
    [sym_collection] = STATE(213),
    [sym__number] = STATE(213),
    [sym_long] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(581),
    [sym_identifier] = ACTIONS(145),
    [sym_integer] = ACTIONS(583),
    [sym_float] = ACTIONS(581),
    [sym_null] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(581),
    [sym_oct] = ACTIONS(583),
    [sym_hex] = ACTIONS(581),
  },
  [151] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(216),
    [sym_string] = STATE(216),
    [sym_group_expression] = STATE(216),
    [sym_scope_expression] = STATE(215),
    [sym_binding_expression] = STATE(216),
    [sym_character] = STATE(216),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(216),
    [sym_collection] = STATE(216),
    [sym__number] = STATE(216),
    [sym_long] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(585),
    [sym_identifier] = ACTIONS(587),
    [sym_integer] = ACTIONS(589),
    [sym_float] = ACTIONS(585),
    [sym_null] = ACTIONS(589),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(585),
    [sym_oct] = ACTIONS(589),
    [sym_hex] = ACTIONS(585),
  },
  [152] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(83),
    [sym_string] = STATE(83),
    [sym_group_expression] = STATE(83),
    [sym_assignment_expression] = STATE(217),
    [sym_scope_expression] = STATE(82),
    [sym_binding_expression] = STATE(83),
    [sym_character] = STATE(83),
    [sym__assignment_or_value] = STATE(217),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(83),
    [sym_collection] = STATE(83),
    [sym__number] = STATE(83),
    [sym_long] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [sym_integer] = ACTIONS(147),
    [sym_float] = ACTIONS(143),
    [sym_null] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(143),
    [sym_oct] = ACTIONS(147),
    [sym_hex] = ACTIONS(143),
  },
  [153] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(313),
  },
  [154] = {
    [anon_sym_COLON_EQ] = ACTIONS(593),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(593),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(593),
    [anon_sym_COMMA] = ACTIONS(593),
  },
  [155] = {
    [sym_array] = STATE(220),
    [aux_sym_type_repeat1] = STATE(219),
    [aux_sym_type_repeat2] = STATE(220),
    [sym_pointer] = STATE(219),
    [anon_sym_COLON_EQ] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [156] = {
    [sym_static_assignment] = STATE(221),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(595),
  },
  [157] = {
    [sym__escape_sequence] = STATE(223),
    [aux_sym_string_repeat1] = STATE(223),
    [anon_sym_BSLASHa] = ACTIONS(597),
    [anon_sym_BSLASHt] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(597),
    [anon_sym_BSLASHf] = ACTIONS(597),
    [anon_sym_BSLASH0] = ACTIONS(597),
    [anon_sym_BSLASHr] = ACTIONS(597),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(597),
    [aux_sym_string_token1] = ACTIONS(601),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(597),
    [anon_sym_BSLASHb] = ACTIONS(597),
    [anon_sym_BSLASHv] = ACTIONS(597),
    [anon_sym_BSLASHn] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
  },
  [158] = {
    [sym_string] = STATE(224),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(603),
  },
  [159] = {
    [sym_readability] = STATE(228),
    [sym_type] = STATE(229),
    [sym_variable_definition] = STATE(230),
    [sym_container_definition] = STATE(230),
    [sym_access_control] = STATE(231),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym__comma_list_variables] = STATE(232),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_u8] = ACTIONS(7),
    [sym_identifier] = ACTIONS(607),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(609),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [160] = {
    [aux_sym_extension_repeat1] = STATE(233),
    [sym_parameter_list] = STATE(234),
    [sym_string] = STATE(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [sym__space] = ACTIONS(321),
    [sym_identifier] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [161] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(613),
    [sym__comment] = ACTIONS(3),
  },
  [162] = {
    [sym__comment] = ACTIONS(3),
    [sym_integer] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(617),
  },
  [163] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(623),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [164] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym_identifier] = ACTIONS(621),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(619),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [165] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
  },
  [166] = {
    [sym__base_type] = STATE(237),
    [sym_primitive_type] = STATE(237),
    [sym_type] = STATE(238),
    [sym__comma_list_types] = STATE(239),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(628),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(630),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [167] = {
    [sym_return_list] = STATE(194),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(523),
  },
  [168] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(523),
    [sym__comment] = ACTIONS(3),
  },
  [169] = {
    [aux_sym_type_repeat1] = STATE(169),
    [sym_pointer] = STATE(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(634),
    [sym_identifier] = ACTIONS(637),
  },
  [170] = {
    [sym_array] = STATE(171),
    [aux_sym_type_repeat2] = STATE(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(639),
  },
  [171] = {
    [sym_array] = STATE(171),
    [aux_sym_type_repeat2] = STATE(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(644),
  },
  [172] = {
    [sym_is_function] = STATE(196),
    [sym_is_method] = STATE(196),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym_is_primitive] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [173] = {
    [sym_static_assignment] = STATE(241),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(648),
  },
  [174] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(650),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(652),
  },
  [176] = {
    [anon_sym_DASH_EQ] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_LT_LT] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym__access_op] = ACTIONS(487),
    [anon_sym_GT_EQ] = ACTIONS(487),
    [anon_sym_CARET] = ACTIONS(485),
    [anon_sym_BANG_EQ] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_PIPE_EQ] = ACTIONS(487),
    [anon_sym_DASH_DASH] = ACTIONS(485),
    [anon_sym_PLUS_EQ] = ACTIONS(487),
    [anon_sym_PIPE_PIPE] = ACTIONS(487),
    [anon_sym_STAR_EQ] = ACTIONS(487),
    [sym__scope_op] = ACTIONS(487),
    [anon_sym_DOLLAR] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_EQ_EQ] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_CARET_EQ] = ACTIONS(487),
    [anon_sym_LT_LT_EQ] = ACTIONS(487),
    [anon_sym_DASH] = ACTIONS(485),
    [anon_sym_SLASH_EQ] = ACTIONS(487),
    [anon_sym_SLASH] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(485),
    [anon_sym_COLON_EQ] = ACTIONS(487),
    [anon_sym_LT] = ACTIONS(485),
    [anon_sym_AMP_AMP] = ACTIONS(487),
    [anon_sym_LT_EQ] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(485),
    [anon_sym_GT_GT_EQ] = ACTIONS(487),
    [anon_sym_AMP_EQ] = ACTIONS(487),
    [anon_sym_PLUS_PLUS] = ACTIONS(485),
    [anon_sym_PERCENT] = ACTIONS(485),
    [anon_sym_PERCENT_EQ] = ACTIONS(487),
  },
  [177] = {
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(149),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(179),
    [sym__scope_op] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(179),
  },
  [179] = {
    [aux_sym__comma_list_values_repeat1] = STATE(247),
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [180] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(662),
  },
  [181] = {
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_CARET_EQ] = ACTIONS(664),
    [sym__access_op] = ACTIONS(672),
    [anon_sym_LT_LT_EQ] = ACTIONS(664),
    [anon_sym_SLASH_EQ] = ACTIONS(664),
    [anon_sym_COLON_EQ] = ACTIONS(664),
    [anon_sym_PIPE_EQ] = ACTIONS(664),
    [anon_sym_PLUS_EQ] = ACTIONS(664),
    [anon_sym_DASH_DASH] = ACTIONS(675),
    [anon_sym_STAR_EQ] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(664),
    [anon_sym_AMP_EQ] = ACTIONS(664),
    [anon_sym_PLUS_PLUS] = ACTIONS(675),
    [anon_sym_PERCENT_EQ] = ACTIONS(664),
  },
  [182] = {
    [sym__access_op] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym__scope_op] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(149),
  },
  [183] = {
    [sym__access_op] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__scope_op] = ACTIONS(677),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(179),
  },
  [184] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(679),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(681),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [185] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(648),
  },
  [186] = {
    [anon_sym_f64] = ACTIONS(683),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_i64] = ACTIONS(683),
    [anon_sym_i8] = ACTIONS(683),
    [anon_sym_u16] = ACTIONS(683),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(685),
    [anon_sym_LPAREN] = ACTIONS(685),
    [sym__access_op] = ACTIONS(685),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_s16] = ACTIONS(683),
    [anon_sym_f32] = ACTIONS(683),
    [sym_identifier] = ACTIONS(683),
    [anon_sym_i32] = ACTIONS(683),
    [anon_sym_u8] = ACTIONS(683),
    [anon_sym_u64] = ACTIONS(683),
    [anon_sym_COLON_EQ] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_s8] = ACTIONS(683),
    [anon_sym_s32] = ACTIONS(683),
    [anon_sym_i16] = ACTIONS(683),
    [anon_sym_u32] = ACTIONS(683),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
  },
  [187] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(687),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [188] = {
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_CARET_EQ] = ACTIONS(664),
    [sym__access_op] = ACTIONS(690),
    [anon_sym_LT_LT_EQ] = ACTIONS(664),
    [anon_sym_SLASH_EQ] = ACTIONS(664),
    [anon_sym_COLON_EQ] = ACTIONS(664),
    [anon_sym_PIPE_EQ] = ACTIONS(664),
    [anon_sym_PLUS_EQ] = ACTIONS(664),
    [anon_sym_DASH_DASH] = ACTIONS(675),
    [anon_sym_STAR_EQ] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(664),
    [anon_sym_AMP_EQ] = ACTIONS(664),
    [anon_sym_PLUS_PLUS] = ACTIONS(675),
    [anon_sym_PERCENT_EQ] = ACTIONS(664),
  },
  [189] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(679),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [190] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(683),
  },
  [191] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
    [sym__comment] = ACTIONS(3),
  },
  [192] = {
    [sym_array] = STATE(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
  },
  [193] = {
    [sym_return_list] = STATE(252),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(697),
  },
  [194] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(697),
    [sym__comment] = ACTIONS(3),
  },
  [195] = {
    [sym_parameter_list] = STATE(253),
    [sym_return_list] = STATE(252),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(697),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [196] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(699),
  },
  [197] = {
    [anon_sym_switch] = ACTIONS(549),
    [sym_oct] = ACTIONS(549),
    [sym_long] = ACTIONS(547),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [sym_hex] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_return] = ACTIONS(549),
    [anon_sym_LBRACE] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(547),
    [anon_sym_default] = ACTIONS(549),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_enum] = ACTIONS(549),
    [sym_double] = ACTIONS(547),
    [sym_identifier] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(549),
    [sym_integer] = ACTIONS(549),
    [anon_sym_case] = ACTIONS(549),
    [sym_float] = ACTIONS(547),
    [sym_null] = ACTIONS(549),
    [sym__comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(549),
    [sym_binary] = ACTIONS(547),
    [anon_sym_if] = ACTIONS(549),
    [anon_sym_goto] = ACTIONS(549),
  },
  [198] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [199] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(256),
    [sym_string] = STATE(256),
    [sym_group_expression] = STATE(256),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(256),
    [sym_character] = STATE(256),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(256),
    [sym_collection] = STATE(256),
    [sym__number] = STATE(256),
    [sym_long] = ACTIONS(703),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(703),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(705),
    [sym_float] = ACTIONS(703),
    [sym_null] = ACTIONS(705),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(703),
    [sym_oct] = ACTIONS(705),
    [sym_hex] = ACTIONS(703),
  },
  [200] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(707),
  },
  [201] = {
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(709),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
  },
  [202] = {
    [sym_array] = STATE(259),
    [aux_sym_type_repeat1] = STATE(258),
    [aux_sym_type_repeat2] = STATE(259),
    [sym_pointer] = STATE(258),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(712),
  },
  [203] = {
    [sym_array] = STATE(260),
    [aux_sym_type_repeat2] = STATE(260),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(712),
  },
  [204] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_GT_EQ] = ACTIONS(619),
    [anon_sym_CARET] = ACTIONS(621),
    [anon_sym_BANG_EQ] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(621),
    [anon_sym_PLUS] = ACTIONS(621),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__scope_op] = ACTIONS(714),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(619),
    [anon_sym_DASH] = ACTIONS(621),
    [anon_sym_SLASH] = ACTIONS(621),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(621),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_LT_EQ] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [205] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_GT_EQ] = ACTIONS(619),
    [anon_sym_CARET] = ACTIONS(621),
    [anon_sym_BANG_EQ] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(621),
    [anon_sym_PLUS] = ACTIONS(621),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_PIPE_PIPE] = ACTIONS(619),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__scope_op] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(621),
    [anon_sym_EQ_EQ] = ACTIONS(619),
    [anon_sym_DASH] = ACTIONS(621),
    [anon_sym_SLASH] = ACTIONS(621),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_GT_GT] = ACTIONS(621),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(621),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(621),
    [anon_sym_AMP_AMP] = ACTIONS(619),
    [anon_sym_LT_EQ] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(621),
    [anon_sym_PERCENT] = ACTIONS(621),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_LT_LT] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [206] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(261),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(717),
  },
  [207] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(262),
    [sym_string] = STATE(262),
    [sym_group_expression] = STATE(262),
    [sym_scope_expression] = STATE(142),
    [sym_binding_expression] = STATE(262),
    [sym_character] = STATE(262),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(262),
    [sym_collection] = STATE(262),
    [sym__number] = STATE(262),
    [sym_long] = ACTIONS(719),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(719),
    [sym_identifier] = ACTIONS(295),
    [sym_integer] = ACTIONS(721),
    [sym_float] = ACTIONS(719),
    [sym_null] = ACTIONS(721),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(719),
    [sym_oct] = ACTIONS(721),
    [sym_hex] = ACTIONS(719),
  },
  [208] = {
    [anon_sym_DASH_EQ] = ACTIONS(723),
    [anon_sym_RPAREN] = ACTIONS(723),
    [anon_sym_LBRACK] = ACTIONS(723),
    [anon_sym_LT_LT] = ACTIONS(725),
    [anon_sym_RBRACE] = ACTIONS(723),
    [sym__access_op] = ACTIONS(723),
    [anon_sym_GT_EQ] = ACTIONS(723),
    [anon_sym_CARET] = ACTIONS(725),
    [anon_sym_BANG_EQ] = ACTIONS(723),
    [anon_sym_COMMA] = ACTIONS(723),
    [anon_sym_PIPE] = ACTIONS(725),
    [anon_sym_PLUS] = ACTIONS(725),
    [anon_sym_PIPE_EQ] = ACTIONS(723),
    [anon_sym_DASH_DASH] = ACTIONS(725),
    [anon_sym_PLUS_EQ] = ACTIONS(723),
    [anon_sym_PIPE_PIPE] = ACTIONS(723),
    [anon_sym_STAR_EQ] = ACTIONS(723),
    [anon_sym_DOLLAR] = ACTIONS(723),
    [anon_sym_GT] = ACTIONS(725),
    [anon_sym_EQ_EQ] = ACTIONS(723),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(723),
    [anon_sym_LPAREN] = ACTIONS(723),
    [anon_sym_CARET_EQ] = ACTIONS(723),
    [anon_sym_LT_LT_EQ] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(725),
    [anon_sym_SLASH_EQ] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(725),
    [anon_sym_GT_GT] = ACTIONS(725),
    [anon_sym_STAR] = ACTIONS(725),
    [anon_sym_COLON_EQ] = ACTIONS(723),
    [anon_sym_LT] = ACTIONS(725),
    [anon_sym_AMP_AMP] = ACTIONS(723),
    [anon_sym_LT_EQ] = ACTIONS(723),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(725),
    [anon_sym_GT_GT_EQ] = ACTIONS(723),
    [anon_sym_AMP_EQ] = ACTIONS(723),
    [anon_sym_PLUS_PLUS] = ACTIONS(725),
    [anon_sym_PERCENT] = ACTIONS(725),
    [anon_sym_PERCENT_EQ] = ACTIONS(723),
  },
  [209] = {
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(664),
    [anon_sym_PLUS_PLUS] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(666),
    [sym__comment] = ACTIONS(3),
    [sym__access_op] = ACTIONS(727),
    [anon_sym_GT_EQ] = ACTIONS(664),
    [anon_sym_CARET] = ACTIONS(675),
    [anon_sym_BANG_EQ] = ACTIONS(664),
    [anon_sym_PIPE] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_PIPE_EQ] = ACTIONS(664),
    [anon_sym_DASH_DASH] = ACTIONS(675),
    [anon_sym_PLUS_EQ] = ACTIONS(664),
    [anon_sym_PIPE_PIPE] = ACTIONS(664),
    [anon_sym_STAR_EQ] = ACTIONS(664),
    [anon_sym_DOLLAR] = ACTIONS(664),
    [anon_sym_GT] = ACTIONS(675),
    [anon_sym_EQ_EQ] = ACTIONS(664),
    [anon_sym_DASH] = ACTIONS(675),
    [anon_sym_SLASH] = ACTIONS(675),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_CARET_EQ] = ACTIONS(664),
    [anon_sym_LT_LT_EQ] = ACTIONS(664),
    [anon_sym_GT_GT] = ACTIONS(675),
    [anon_sym_SLASH_EQ] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(675),
    [anon_sym_COLON_EQ] = ACTIONS(664),
    [anon_sym_LT] = ACTIONS(675),
    [anon_sym_AMP_AMP] = ACTIONS(664),
    [anon_sym_LT_EQ] = ACTIONS(664),
    [anon_sym_AMP] = ACTIONS(675),
    [anon_sym_PERCENT] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_AMP_EQ] = ACTIONS(664),
    [anon_sym_GT_GT_EQ] = ACTIONS(664),
    [anon_sym_LT_LT] = ACTIONS(675),
    [anon_sym_PERCENT_EQ] = ACTIONS(664),
  },
  [210] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [211] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(730),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [212] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(732),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [213] = {
    [sym_array] = STATE(106),
    [anon_sym_DASH_EQ] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(666),
    [anon_sym_RBRACE] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(669),
    [anon_sym_CARET_EQ] = ACTIONS(664),
    [sym__access_op] = ACTIONS(735),
    [anon_sym_LT_LT_EQ] = ACTIONS(664),
    [anon_sym_SLASH_EQ] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_COLON_EQ] = ACTIONS(664),
    [anon_sym_PIPE_EQ] = ACTIONS(664),
    [anon_sym_PLUS_EQ] = ACTIONS(664),
    [anon_sym_DASH_DASH] = ACTIONS(675),
    [anon_sym_STAR_EQ] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(664),
    [anon_sym_AMP_EQ] = ACTIONS(664),
    [anon_sym_PLUS_PLUS] = ACTIONS(675),
    [anon_sym_PERCENT_EQ] = ACTIONS(664),
  },
  [214] = {
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(149),
    [sym__access_op] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(738),
    [anon_sym_COMMA] = ACTIONS(149),
  },
  [215] = {
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(179),
    [sym__access_op] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(738),
    [anon_sym_COMMA] = ACTIONS(179),
  },
  [216] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(740),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(681),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [217] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(742),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(742),
  },
  [218] = {
    [aux_sym__comma_list_assignment_or_values_repeat1] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(742),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(744),
  },
  [219] = {
    [sym_array] = STATE(267),
    [aux_sym_type_repeat1] = STATE(266),
    [aux_sym_type_repeat2] = STATE(267),
    [sym_pointer] = STATE(266),
    [anon_sym_COLON_EQ] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [220] = {
    [sym_array] = STATE(268),
    [aux_sym_type_repeat2] = STATE(268),
    [anon_sym_COLON_EQ] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(712),
  },
  [221] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(747),
    [anon_sym_COMMA] = ACTIONS(747),
  },
  [222] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [sym__space] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
  },
  [223] = {
    [sym__escape_sequence] = STATE(115),
    [aux_sym_string_repeat1] = STATE(115),
    [anon_sym_BSLASHa] = ACTIONS(229),
    [anon_sym_BSLASHt] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(749),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(229),
    [anon_sym_BSLASHf] = ACTIONS(229),
    [anon_sym_BSLASH0] = ACTIONS(229),
    [anon_sym_BSLASHr] = ACTIONS(229),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(229),
    [aux_sym_string_token1] = ACTIONS(233),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(229),
    [anon_sym_BSLASHb] = ACTIONS(229),
    [anon_sym_BSLASHv] = ACTIONS(229),
    [anon_sym_BSLASHn] = ACTIONS(229),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(751),
    [sym__space] = ACTIONS(751),
    [anon_sym_LPAREN] = ACTIONS(751),
    [sym_identifier] = ACTIONS(753),
  },
  [225] = {
    [anon_sym_readonly] = ACTIONS(107),
    [anon_sym_f64] = ACTIONS(107),
    [anon_sym_i64] = ACTIONS(107),
    [anon_sym_i8] = ACTIONS(107),
    [anon_sym_u16] = ACTIONS(107),
    [sym__space] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(107),
    [anon_sym_s16] = ACTIONS(107),
    [anon_sym_f32] = ACTIONS(107),
    [anon_sym_i32] = ACTIONS(107),
    [anon_sym_u64] = ACTIONS(107),
    [anon_sym_u8] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_writelimited] = ACTIONS(107),
    [anon_sym_s8] = ACTIONS(107),
    [anon_sym_s32] = ACTIONS(107),
    [anon_sym_i16] = ACTIONS(107),
    [anon_sym_u32] = ACTIONS(107),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(107),
    [anon_sym_protected_write] = ACTIONS(107),
  },
  [226] = {
    [anon_sym_COLON] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(757),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(154),
    [sym_identifier] = ACTIONS(154),
  },
  [227] = {
    [anon_sym_returns] = ACTIONS(759),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(759),
  },
  [228] = {
    [sym_type] = STATE(271),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(761),
  },
  [230] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(765),
  },
  [231] = {
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [sym_readability] = STATE(275),
    [sym_type] = STATE(271),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [232] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(767),
  },
  [233] = {
    [aux_sym_extension_repeat1] = STATE(233),
    [sym_string] = STATE(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [sym__space] = ACTIONS(772),
    [anon_sym_LPAREN] = ACTIONS(751),
    [sym_identifier] = ACTIONS(775),
  },
  [234] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(778),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(780),
  },
  [236] = {
    [anon_sym_DASH_EQ] = ACTIONS(487),
    [anon_sym_LBRACK] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(487),
    [anon_sym_CARET_EQ] = ACTIONS(487),
    [sym__access_op] = ACTIONS(487),
    [anon_sym_LT_LT_EQ] = ACTIONS(487),
    [anon_sym_SLASH_EQ] = ACTIONS(487),
    [sym_identifier] = ACTIONS(485),
    [anon_sym_COLON_EQ] = ACTIONS(487),
    [anon_sym_PIPE_EQ] = ACTIONS(487),
    [anon_sym_PLUS_EQ] = ACTIONS(487),
    [anon_sym_DASH_DASH] = ACTIONS(485),
    [anon_sym_STAR_EQ] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(487),
    [anon_sym_AMP_EQ] = ACTIONS(487),
    [anon_sym_GT_GT_EQ] = ACTIONS(487),
    [anon_sym_PLUS_PLUS] = ACTIONS(485),
    [anon_sym_PERCENT_EQ] = ACTIONS(487),
  },
  [237] = {
    [sym_array] = STATE(279),
    [aux_sym_type_repeat1] = STATE(278),
    [aux_sym_type_repeat2] = STATE(279),
    [sym_pointer] = STATE(278),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [238] = {
    [aux_sym__comma_list_types_repeat1] = STATE(281),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(782),
    [anon_sym_COMMA] = ACTIONS(784),
  },
  [239] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(786),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [sym_is_function] = STATE(282),
    [sym_is_method] = STATE(282),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(109),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(111),
  },
  [241] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(788),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(788),
    [anon_sym_COMMA] = ACTIONS(788),
  },
  [242] = {
    [sym_static_assignment] = STATE(283),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(788),
  },
  [243] = {
    [anon_sym_DASH_EQ] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_LT_LT] = ACTIONS(683),
    [anon_sym_RBRACE] = ACTIONS(685),
    [sym__access_op] = ACTIONS(685),
    [anon_sym_GT_EQ] = ACTIONS(685),
    [anon_sym_CARET] = ACTIONS(683),
    [anon_sym_BANG_EQ] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_PIPE] = ACTIONS(683),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_PIPE_EQ] = ACTIONS(685),
    [anon_sym_DASH_DASH] = ACTIONS(683),
    [anon_sym_PLUS_EQ] = ACTIONS(685),
    [anon_sym_PIPE_PIPE] = ACTIONS(685),
    [anon_sym_STAR_EQ] = ACTIONS(685),
    [sym__scope_op] = ACTIONS(685),
    [anon_sym_DOLLAR] = ACTIONS(685),
    [anon_sym_GT] = ACTIONS(683),
    [anon_sym_EQ_EQ] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(685),
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_CARET_EQ] = ACTIONS(685),
    [anon_sym_LT_LT_EQ] = ACTIONS(685),
    [anon_sym_DASH] = ACTIONS(683),
    [anon_sym_SLASH_EQ] = ACTIONS(685),
    [anon_sym_SLASH] = ACTIONS(683),
    [anon_sym_GT_GT] = ACTIONS(683),
    [anon_sym_STAR] = ACTIONS(683),
    [anon_sym_COLON_EQ] = ACTIONS(685),
    [anon_sym_LT] = ACTIONS(683),
    [anon_sym_AMP_AMP] = ACTIONS(685),
    [anon_sym_LT_EQ] = ACTIONS(685),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(683),
    [anon_sym_GT_GT_EQ] = ACTIONS(685),
    [anon_sym_AMP_EQ] = ACTIONS(685),
    [anon_sym_PLUS_PLUS] = ACTIONS(683),
    [anon_sym_PERCENT] = ACTIONS(683),
    [anon_sym_PERCENT_EQ] = ACTIONS(685),
  },
  [244] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(284),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(790),
  },
  [245] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(285),
    [sym_string] = STATE(285),
    [sym_group_expression] = STATE(285),
    [sym_scope_expression] = STATE(178),
    [sym_binding_expression] = STATE(285),
    [sym_character] = STATE(285),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(285),
    [sym_collection] = STATE(285),
    [sym__number] = STATE(285),
    [sym_long] = ACTIONS(792),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(792),
    [sym_identifier] = ACTIONS(363),
    [sym_integer] = ACTIONS(794),
    [sym_float] = ACTIONS(792),
    [sym_null] = ACTIONS(794),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(792),
    [sym_oct] = ACTIONS(794),
    [sym_hex] = ACTIONS(792),
  },
  [246] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(286),
    [sym_string] = STATE(286),
    [sym_group_expression] = STATE(286),
    [sym_scope_expression] = STATE(178),
    [sym_binding_expression] = STATE(286),
    [sym_character] = STATE(286),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(286),
    [sym_collection] = STATE(286),
    [sym__number] = STATE(286),
    [sym_long] = ACTIONS(796),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(796),
    [sym_identifier] = ACTIONS(363),
    [sym_integer] = ACTIONS(798),
    [sym_float] = ACTIONS(796),
    [sym_null] = ACTIONS(798),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(796),
    [sym_oct] = ACTIONS(798),
    [sym_hex] = ACTIONS(796),
  },
  [247] = {
    [aux_sym__comma_list_values_repeat1] = STATE(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(660),
  },
  [248] = {
    [anon_sym_DASH_EQ] = ACTIONS(802),
    [anon_sym_RPAREN] = ACTIONS(802),
    [anon_sym_LBRACK] = ACTIONS(802),
    [anon_sym_LT_LT] = ACTIONS(804),
    [anon_sym_RBRACE] = ACTIONS(802),
    [sym__access_op] = ACTIONS(802),
    [anon_sym_GT_EQ] = ACTIONS(802),
    [anon_sym_CARET] = ACTIONS(804),
    [anon_sym_BANG_EQ] = ACTIONS(802),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_PIPE] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_PIPE_EQ] = ACTIONS(802),
    [anon_sym_DASH_DASH] = ACTIONS(804),
    [anon_sym_PLUS_EQ] = ACTIONS(802),
    [anon_sym_PIPE_PIPE] = ACTIONS(802),
    [anon_sym_STAR_EQ] = ACTIONS(802),
    [anon_sym_DOLLAR] = ACTIONS(802),
    [anon_sym_GT] = ACTIONS(804),
    [anon_sym_EQ_EQ] = ACTIONS(802),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(802),
    [anon_sym_LPAREN] = ACTIONS(802),
    [anon_sym_CARET_EQ] = ACTIONS(802),
    [anon_sym_LT_LT_EQ] = ACTIONS(802),
    [anon_sym_DASH] = ACTIONS(804),
    [anon_sym_SLASH_EQ] = ACTIONS(802),
    [anon_sym_SLASH] = ACTIONS(804),
    [anon_sym_GT_GT] = ACTIONS(804),
    [anon_sym_STAR] = ACTIONS(804),
    [anon_sym_COLON_EQ] = ACTIONS(802),
    [anon_sym_LT] = ACTIONS(804),
    [anon_sym_AMP_AMP] = ACTIONS(802),
    [anon_sym_LT_EQ] = ACTIONS(802),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(804),
    [anon_sym_GT_GT_EQ] = ACTIONS(802),
    [anon_sym_AMP_EQ] = ACTIONS(802),
    [anon_sym_PLUS_PLUS] = ACTIONS(804),
    [anon_sym_PERCENT] = ACTIONS(804),
    [anon_sym_PERCENT_EQ] = ACTIONS(802),
  },
  [249] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(288),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(806),
  },
  [250] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(289),
    [sym_string] = STATE(289),
    [sym_group_expression] = STATE(289),
    [sym_scope_expression] = STATE(183),
    [sym_binding_expression] = STATE(289),
    [sym_character] = STATE(289),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(289),
    [sym_collection] = STATE(289),
    [sym__number] = STATE(289),
    [sym_long] = ACTIONS(808),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(808),
    [sym_identifier] = ACTIONS(375),
    [sym_integer] = ACTIONS(810),
    [sym_float] = ACTIONS(808),
    [sym_null] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(808),
    [sym_oct] = ACTIONS(810),
    [sym_hex] = ACTIONS(808),
  },
  [251] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(812),
    [sym__comment] = ACTIONS(3),
  },
  [252] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(814),
    [sym__comment] = ACTIONS(3),
  },
  [253] = {
    [sym_return_list] = STATE(290),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(814),
  },
  [254] = {
    [sym_parameter_list] = STATE(291),
    [sym_return_list] = STATE(290),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(814),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [255] = {
    [anon_sym_switch] = ACTIONS(725),
    [sym_oct] = ACTIONS(725),
    [sym_long] = ACTIONS(723),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [sym_hex] = ACTIONS(723),
    [anon_sym_DOT] = ACTIONS(723),
    [anon_sym_LPAREN] = ACTIONS(725),
    [anon_sym_return] = ACTIONS(725),
    [anon_sym_LBRACE] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(723),
    [anon_sym_default] = ACTIONS(725),
    [anon_sym_end] = ACTIONS(725),
    [anon_sym_enum] = ACTIONS(725),
    [sym_double] = ACTIONS(723),
    [sym_identifier] = ACTIONS(725),
    [sym__space] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(725),
    [sym_integer] = ACTIONS(725),
    [anon_sym_case] = ACTIONS(725),
    [sym_float] = ACTIONS(723),
    [sym_null] = ACTIONS(725),
    [sym__comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(725),
    [sym_binary] = ACTIONS(723),
    [anon_sym_if] = ACTIONS(725),
    [anon_sym_goto] = ACTIONS(725),
  },
  [256] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(555),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(816),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [257] = {
    [anon_sym_DASH_EQ] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_CARET_EQ] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [anon_sym_LT_LT_EQ] = ACTIONS(619),
    [anon_sym_SLASH_EQ] = ACTIONS(619),
    [anon_sym_COLON_EQ] = ACTIONS(619),
    [anon_sym_PIPE_EQ] = ACTIONS(619),
    [anon_sym_PLUS_EQ] = ACTIONS(619),
    [anon_sym_DASH_DASH] = ACTIONS(621),
    [anon_sym_STAR_EQ] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(818),
    [anon_sym_AMP_EQ] = ACTIONS(619),
    [anon_sym_GT_GT_EQ] = ACTIONS(619),
    [anon_sym_PLUS_PLUS] = ACTIONS(621),
    [anon_sym_PERCENT_EQ] = ACTIONS(619),
  },
  [258] = {
    [aux_sym_type_repeat1] = STATE(258),
    [sym_pointer] = STATE(258),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(634),
    [anon_sym_LPAREN] = ACTIONS(632),
  },
  [259] = {
    [sym_array] = STATE(260),
    [aux_sym_type_repeat2] = STATE(260),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(821),
  },
  [260] = {
    [sym_array] = STATE(260),
    [aux_sym_type_repeat2] = STATE(260),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(823),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(826),
  },
  [261] = {
    [sym__access_op] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [sym__scope_op] = ACTIONS(828),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
  },
  [262] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(831),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(669),
  },
  [263] = {
    [anon_sym_DASH_EQ] = ACTIONS(837),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_LT_LT] = ACTIONS(839),
    [anon_sym_RBRACE] = ACTIONS(837),
    [sym__access_op] = ACTIONS(837),
    [anon_sym_GT_EQ] = ACTIONS(837),
    [anon_sym_CARET] = ACTIONS(839),
    [anon_sym_BANG_EQ] = ACTIONS(837),
    [anon_sym_COMMA] = ACTIONS(837),
    [anon_sym_PIPE] = ACTIONS(839),
    [anon_sym_PLUS] = ACTIONS(839),
    [anon_sym_PIPE_EQ] = ACTIONS(837),
    [anon_sym_DASH_DASH] = ACTIONS(839),
    [anon_sym_PLUS_EQ] = ACTIONS(837),
    [anon_sym_PIPE_PIPE] = ACTIONS(837),
    [anon_sym_STAR_EQ] = ACTIONS(837),
    [anon_sym_DOLLAR] = ACTIONS(837),
    [anon_sym_GT] = ACTIONS(839),
    [anon_sym_EQ_EQ] = ACTIONS(837),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(837),
    [anon_sym_CARET_EQ] = ACTIONS(837),
    [anon_sym_LT_LT_EQ] = ACTIONS(837),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym_SLASH_EQ] = ACTIONS(837),
    [anon_sym_SLASH] = ACTIONS(839),
    [anon_sym_GT_GT] = ACTIONS(839),
    [anon_sym_STAR] = ACTIONS(839),
    [anon_sym_COLON_EQ] = ACTIONS(837),
    [anon_sym_LT] = ACTIONS(839),
    [anon_sym_AMP_AMP] = ACTIONS(837),
    [anon_sym_LT_EQ] = ACTIONS(837),
    [sym__comment] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(839),
    [anon_sym_GT_GT_EQ] = ACTIONS(837),
    [anon_sym_AMP_EQ] = ACTIONS(837),
    [anon_sym_PLUS_PLUS] = ACTIONS(839),
    [anon_sym_PERCENT] = ACTIONS(839),
    [anon_sym_PERCENT_EQ] = ACTIONS(837),
  },
  [264] = {
    [sym_array] = STATE(164),
    [sym_scope_expression] = STATE(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(841),
  },
  [265] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(294),
    [sym_string] = STATE(294),
    [sym_group_expression] = STATE(294),
    [sym_scope_expression] = STATE(215),
    [sym_binding_expression] = STATE(294),
    [sym_character] = STATE(294),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(294),
    [sym_collection] = STATE(294),
    [sym__number] = STATE(294),
    [sym_long] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(843),
    [sym_identifier] = ACTIONS(587),
    [sym_integer] = ACTIONS(845),
    [sym_float] = ACTIONS(843),
    [sym_null] = ACTIONS(845),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(843),
    [sym_oct] = ACTIONS(845),
    [sym_hex] = ACTIONS(843),
  },
  [266] = {
    [aux_sym_type_repeat1] = STATE(266),
    [sym_pointer] = STATE(266),
    [anon_sym_COLON_EQ] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_STAR] = ACTIONS(634),
  },
  [267] = {
    [sym_array] = STATE(268),
    [aux_sym_type_repeat2] = STATE(268),
    [anon_sym_COLON_EQ] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(821),
  },
  [268] = {
    [sym_array] = STATE(268),
    [aux_sym_type_repeat2] = STATE(268),
    [anon_sym_COLON_EQ] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(823),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(826),
  },
  [269] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [sym__space] = ACTIONS(495),
    [anon_sym_LPAREN] = ACTIONS(495),
    [sym_identifier] = ACTIONS(497),
  },
  [270] = {
    [sym__base_type] = STATE(295),
    [sym_primitive_type] = STATE(295),
    [sym_container_types] = STATE(296),
    [sym_type] = STATE(154),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_arguments] = ACTIONS(315),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(847),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_symbol] = ACTIONS(315),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_string] = ACTIONS(315),
  },
  [271] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(849),
  },
  [272] = {
    [sym_static_assignment] = STATE(185),
    [anon_sym_COLON_EQ] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(481),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(481),
  },
  [273] = {
    [sym_access_control] = STATE(231),
    [sym__base_type] = STATE(31),
    [sym_readability] = STATE(228),
    [sym_primitive_type] = STATE(31),
    [sym_type] = STATE(229),
    [sym_container_definition] = STATE(299),
    [sym_variable_definition] = STATE(299),
    [anon_sym_readonly] = ACTIONS(37),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(605),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_private_write] = ACTIONS(37),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(605),
    [anon_sym_u8] = ACTIONS(7),
    [sym_identifier] = ACTIONS(607),
    [anon_sym_writelimited] = ACTIONS(37),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
    [anon_sym_system_readwrite] = ACTIONS(37),
    [anon_sym_protected_write] = ACTIONS(37),
  },
  [274] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(300),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(765),
  },
  [275] = {
    [sym_type] = STATE(301),
    [sym__base_type] = STATE(31),
    [sym_primitive_type] = STATE(31),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [276] = {
    [anon_sym_returns] = ACTIONS(855),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(855),
  },
  [277] = {
    [anon_sym_DASH_EQ] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_CARET_EQ] = ACTIONS(685),
    [sym__access_op] = ACTIONS(685),
    [anon_sym_LT_LT_EQ] = ACTIONS(685),
    [anon_sym_SLASH_EQ] = ACTIONS(685),
    [sym_identifier] = ACTIONS(683),
    [anon_sym_COLON_EQ] = ACTIONS(685),
    [anon_sym_PIPE_EQ] = ACTIONS(685),
    [anon_sym_PLUS_EQ] = ACTIONS(685),
    [anon_sym_DASH_DASH] = ACTIONS(683),
    [anon_sym_STAR_EQ] = ACTIONS(685),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(685),
    [anon_sym_AMP_EQ] = ACTIONS(685),
    [anon_sym_GT_GT_EQ] = ACTIONS(685),
    [anon_sym_PLUS_PLUS] = ACTIONS(683),
    [anon_sym_PERCENT_EQ] = ACTIONS(685),
  },
  [278] = {
    [sym_array] = STATE(303),
    [aux_sym_type_repeat1] = STATE(302),
    [aux_sym_type_repeat2] = STATE(303),
    [sym_pointer] = STATE(302),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_STAR] = ACTIONS(173),
  },
  [279] = {
    [sym_array] = STATE(304),
    [aux_sym_type_repeat2] = STATE(304),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(712),
    [anon_sym_COMMA] = ACTIONS(712),
  },
  [280] = {
    [sym_type] = STATE(305),
    [sym__base_type] = STATE(237),
    [sym_primitive_type] = STATE(237),
    [anon_sym_f64] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(7),
    [anon_sym_f32] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [sym_identifier] = ACTIONS(630),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_s8] = ACTIONS(7),
    [anon_sym_s32] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [sym__comment] = ACTIONS(3),
  },
  [281] = {
    [aux_sym__comma_list_types_repeat1] = STATE(306),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(784),
  },
  [282] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(859),
  },
  [283] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(861),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(861),
    [anon_sym_COMMA] = ACTIONS(861),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(619),
    [sym__scope_op] = ACTIONS(863),
    [anon_sym_COMMA] = ACTIONS(619),
  },
  [285] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(866),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(669),
  },
  [286] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(869),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(869),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [287] = {
    [aux_sym__comma_list_values_repeat1] = STATE(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(869),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(871),
  },
  [288] = {
    [sym__access_op] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym__scope_op] = ACTIONS(874),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(619),
  },
  [289] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(877),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(834),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(669),
  },
  [290] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(880),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [sym_return_list] = STATE(308),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(880),
  },
  [292] = {
    [anon_sym_switch] = ACTIONS(839),
    [sym_oct] = ACTIONS(839),
    [sym_long] = ACTIONS(837),
    [anon_sym_DQUOTE] = ACTIONS(837),
    [sym_hex] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(837),
    [anon_sym_LPAREN] = ACTIONS(839),
    [anon_sym_return] = ACTIONS(839),
    [anon_sym_LBRACE] = ACTIONS(837),
    [anon_sym_SQUOTE] = ACTIONS(837),
    [anon_sym_default] = ACTIONS(839),
    [anon_sym_end] = ACTIONS(839),
    [anon_sym_enum] = ACTIONS(839),
    [sym_double] = ACTIONS(837),
    [sym_identifier] = ACTIONS(839),
    [sym__space] = ACTIONS(3),
    [anon_sym_while] = ACTIONS(839),
    [sym_integer] = ACTIONS(839),
    [anon_sym_case] = ACTIONS(839),
    [sym_float] = ACTIONS(837),
    [sym_null] = ACTIONS(839),
    [sym__comment] = ACTIONS(3),
    [anon_sym_section] = ACTIONS(839),
    [sym_binary] = ACTIONS(837),
    [anon_sym_if] = ACTIONS(839),
    [anon_sym_goto] = ACTIONS(839),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(619),
    [sym__access_op] = ACTIONS(619),
    [sym__comment] = ACTIONS(3),
    [sym__scope_op] = ACTIONS(882),
    [anon_sym_COMMA] = ACTIONS(619),
  },
  [294] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(885),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(834),
    [anon_sym_RBRACE] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_LPAREN] = ACTIONS(669),
  },
  [295] = {
    [sym_array] = STATE(310),
    [aux_sym_type_repeat1] = STATE(309),
    [aux_sym_type_repeat2] = STATE(310),
    [sym_pointer] = STATE(309),
    [anon_sym_COLON_EQ] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(543),
    [sym__comment] = ACTIONS(3),
  },
  [296] = {
    [sym_static_assignment] = STATE(221),
    [anon_sym_COLON_EQ] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(595),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(595),
  },
  [297] = {
    [sym_static_assignment] = STATE(241),
    [anon_sym_COLON_EQ] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(648),
  },
  [298] = {
    [sym_array_expression] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym__literal] = STATE(311),
    [sym_string] = STATE(311),
    [sym_group_expression] = STATE(311),
    [sym_scope_expression] = STATE(178),
    [sym_binding_expression] = STATE(311),
    [sym_character] = STATE(311),
    [sym_access_expression] = STATE(33),
    [sym__value] = STATE(311),
    [sym_collection] = STATE(311),
    [sym__number] = STATE(311),
    [sym_long] = ACTIONS(888),
    [anon_sym_DQUOTE] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(55),
    [sym_double] = ACTIONS(888),
    [sym_identifier] = ACTIONS(363),
    [sym_integer] = ACTIONS(890),
    [sym_float] = ACTIONS(888),
    [sym_null] = ACTIONS(890),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(888),
    [sym_oct] = ACTIONS(890),
    [sym_hex] = ACTIONS(888),
  },
  [299] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(892),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(892),
  },
  [300] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(300),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(892),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(894),
  },
  [301] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(897),
  },
  [302] = {
    [aux_sym_type_repeat1] = STATE(302),
    [sym_pointer] = STATE(302),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_STAR] = ACTIONS(634),
  },
  [303] = {
    [sym_array] = STATE(304),
    [aux_sym_type_repeat2] = STATE(304),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
  },
  [304] = {
    [sym_array] = STATE(304),
    [aux_sym_type_repeat2] = STATE(304),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(823),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(826),
    [anon_sym_COMMA] = ACTIONS(826),
  },
  [305] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(899),
    [anon_sym_COMMA] = ACTIONS(899),
  },
  [306] = {
    [aux_sym__comma_list_types_repeat1] = STATE(306),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(899),
    [anon_sym_COMMA] = ACTIONS(901),
  },
  [307] = {
    [sym_parameter_list] = STATE(313),
    [sym_return_list] = STATE(308),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(880),
    [anon_sym_LPAREN] = ACTIONS(325),
  },
  [308] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(904),
    [sym__comment] = ACTIONS(3),
  },
  [309] = {
    [sym_array] = STATE(315),
    [aux_sym_type_repeat1] = STATE(314),
    [aux_sym_type_repeat2] = STATE(315),
    [sym_pointer] = STATE(314),
    [anon_sym_COLON_EQ] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(712),
    [sym__comment] = ACTIONS(3),
  },
  [310] = {
    [sym_array] = STATE(316),
    [aux_sym_type_repeat2] = STATE(316),
    [anon_sym_COLON_EQ] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(712),
  },
  [311] = {
    [sym_array] = STATE(106),
    [sym__access_op] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(199),
  },
  [312] = {
    [sym_static_assignment] = STATE(283),
    [anon_sym_COLON_EQ] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(788),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(788),
  },
  [313] = {
    [sym_return_list] = STATE(317),
    [anon_sym_returns] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(904),
  },
  [314] = {
    [aux_sym_type_repeat1] = STATE(314),
    [sym_pointer] = STATE(314),
    [anon_sym_COLON_EQ] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
  },
  [315] = {
    [sym_array] = STATE(316),
    [aux_sym_type_repeat2] = STATE(316),
    [anon_sym_COLON_EQ] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(821),
  },
  [316] = {
    [sym_array] = STATE(316),
    [aux_sym_type_repeat2] = STATE(316),
    [anon_sym_COLON_EQ] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(826),
  },
  [317] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(906),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(5),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = false}, SHIFT(10),
  [17] = {.count = 1, .reusable = false}, SHIFT(13),
  [19] = {.count = 1, .reusable = false}, SHIFT(15),
  [21] = {.count = 1, .reusable = true}, SHIFT(40),
  [23] = {.count = 1, .reusable = false}, SHIFT(40),
  [25] = {.count = 1, .reusable = false}, SHIFT(18),
  [27] = {.count = 1, .reusable = false}, SHIFT(20),
  [29] = {.count = 1, .reusable = false}, SHIFT(36),
  [31] = {.count = 1, .reusable = false}, SHIFT(7),
  [33] = {.count = 1, .reusable = false}, SHIFT(28),
  [35] = {.count = 1, .reusable = false}, SHIFT(12),
  [37] = {.count = 1, .reusable = false}, SHIFT(2),
  [39] = {.count = 1, .reusable = false}, SHIFT(9),
  [41] = {.count = 1, .reusable = false}, SHIFT(11),
  [43] = {.count = 1, .reusable = false}, SHIFT(14),
  [45] = {.count = 1, .reusable = false}, SHIFT(16),
  [47] = {.count = 1, .reusable = false}, SHIFT(17),
  [49] = {.count = 1, .reusable = false}, SHIFT(19),
  [51] = {.count = 1, .reusable = false}, SHIFT(21),
  [53] = {.count = 1, .reusable = false}, SHIFT(22),
  [55] = {.count = 1, .reusable = true}, SHIFT(23),
  [57] = {.count = 1, .reusable = false}, SHIFT(24),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [61] = {.count = 1, .reusable = false}, SHIFT(25),
  [63] = {.count = 1, .reusable = false}, SHIFT(26),
  [65] = {.count = 1, .reusable = false}, SHIFT(27),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(45),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(50),
  [77] = {.count = 1, .reusable = false}, SHIFT(47),
  [79] = {.count = 1, .reusable = false}, SHIFT(50),
  [81] = {.count = 1, .reusable = true}, SHIFT(52),
  [83] = {.count = 1, .reusable = true}, SHIFT(51),
  [85] = {.count = 1, .reusable = false}, SHIFT(52),
  [87] = {.count = 1, .reusable = true}, SHIFT(53),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = false}, SHIFT(31),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [95] = {.count = 1, .reusable = false}, SHIFT(55),
  [97] = {.count = 1, .reusable = false}, SHIFT(56),
  [99] = {.count = 1, .reusable = false}, SHIFT(57),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = false}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, SHIFT(62),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(21),
  [111] = {.count = 1, .reusable = true}, SHIFT(27),
  [113] = {.count = 1, .reusable = true}, SHIFT(65),
  [115] = {.count = 1, .reusable = true}, SHIFT(64),
  [117] = {.count = 1, .reusable = false}, SHIFT(66),
  [119] = {.count = 1, .reusable = true}, SHIFT(67),
  [121] = {.count = 1, .reusable = false}, SHIFT(69),
  [123] = {.count = 1, .reusable = true}, SHIFT(22),
  [125] = {.count = 1, .reusable = false}, SHIFT(71),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [129] = {.count = 1, .reusable = true}, SHIFT(79),
  [131] = {.count = 1, .reusable = false}, SHIFT(72),
  [133] = {.count = 1, .reusable = true}, SHIFT(73),
  [135] = {.count = 1, .reusable = true}, SHIFT(72),
  [137] = {.count = 1, .reusable = false}, SHIFT(74),
  [139] = {.count = 1, .reusable = false}, SHIFT(73),
  [141] = {.count = 1, .reusable = false}, SHIFT(79),
  [143] = {.count = 1, .reusable = true}, SHIFT(83),
  [145] = {.count = 1, .reusable = false}, SHIFT(80),
  [147] = {.count = 1, .reusable = false}, SHIFT(83),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [151] = {.count = 2, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), REDUCE(sym__value, 1),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [156] = {.count = 2, .reusable = false}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1), SHIFT(86),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [161] = {.count = 1, .reusable = false}, SHIFT(85),
  [163] = {.count = 1, .reusable = true}, SHIFT(87),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [167] = {.count = 1, .reusable = false}, SHIFT(90),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [171] = {.count = 1, .reusable = false}, SHIFT(92),
  [173] = {.count = 1, .reusable = false}, SHIFT(93),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_binding_expression, 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_binding_expression, 1),
  [183] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [185] = {.count = 1, .reusable = false}, SHIFT(65),
  [187] = {.count = 1, .reusable = false}, SHIFT(64),
  [189] = {.count = 1, .reusable = false}, SHIFT(96),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [193] = {.count = 1, .reusable = false}, SHIFT(86),
  [195] = {.count = 1, .reusable = true}, SHIFT(99),
  [197] = {.count = 1, .reusable = true}, SHIFT(100),
  [199] = {.count = 1, .reusable = true}, SHIFT(101),
  [201] = {.count = 1, .reusable = true}, SHIFT(102),
  [203] = {.count = 1, .reusable = false}, SHIFT(103),
  [205] = {.count = 1, .reusable = true}, SHIFT(107),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [209] = {.count = 1, .reusable = false}, SHIFT(109),
  [211] = {.count = 1, .reusable = true}, SHIFT(110),
  [213] = {.count = 1, .reusable = true}, SHIFT(111),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_readability, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(112),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_value, 1),
  [223] = {.count = 1, .reusable = true}, SHIFT(113),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(115),
  [231] = {.count = 1, .reusable = true}, SHIFT(114),
  [233] = {.count = 1, .reusable = false}, SHIFT(115),
  [235] = {.count = 1, .reusable = true}, SHIFT(116),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_end_extension, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(117),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_enum_statement, 2),
  [249] = {.count = 1, .reusable = true}, SHIFT(119),
  [251] = {.count = 1, .reusable = true}, SHIFT(120),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 2),
  [255] = {.count = 1, .reusable = false}, SHIFT(123),
  [257] = {.count = 1, .reusable = false}, SHIFT(124),
  [259] = {.count = 1, .reusable = false}, SHIFT(125),
  [261] = {.count = 1, .reusable = true}, SHIFT(127),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [265] = {.count = 1, .reusable = true}, SHIFT(130),
  [267] = {.count = 1, .reusable = false}, SHIFT(130),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [271] = {.count = 1, .reusable = false}, SHIFT(131),
  [273] = {.count = 1, .reusable = false}, SHIFT(132),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(135),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [287] = {.count = 1, .reusable = false}, SHIFT(137),
  [289] = {.count = 1, .reusable = true}, SHIFT(138),
  [291] = {.count = 1, .reusable = true}, SHIFT(139),
  [293] = {.count = 1, .reusable = true}, SHIFT(143),
  [295] = {.count = 1, .reusable = false}, SHIFT(141),
  [297] = {.count = 1, .reusable = false}, SHIFT(143),
  [299] = {.count = 1, .reusable = true}, SHIFT(144),
  [301] = {.count = 1, .reusable = true}, SHIFT(145),
  [303] = {.count = 1, .reusable = false}, SHIFT(145),
  [305] = {.count = 1, .reusable = true}, SHIFT(148),
  [307] = {.count = 1, .reusable = true}, SHIFT(149),
  [309] = {.count = 1, .reusable = true}, SHIFT(150),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 1),
  [313] = {.count = 1, .reusable = true}, SHIFT(152),
  [315] = {.count = 1, .reusable = false}, SHIFT(154),
  [317] = {.count = 1, .reusable = false}, SHIFT(155),
  [319] = {.count = 1, .reusable = true}, SHIFT(157),
  [321] = {.count = 1, .reusable = true}, SHIFT(158),
  [323] = {.count = 1, .reusable = false}, SHIFT(160),
  [325] = {.count = 1, .reusable = true}, SHIFT(159),
  [327] = {.count = 1, .reusable = true}, SHIFT(162),
  [329] = {.count = 1, .reusable = false}, SHIFT(163),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 2),
  [337] = {.count = 1, .reusable = false}, SHIFT(165),
  [339] = {.count = 1, .reusable = true}, SHIFT(166),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [349] = {.count = 1, .reusable = true}, SHIFT(172),
  [351] = {.count = 1, .reusable = false}, SHIFT(173),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [357] = {.count = 1, .reusable = true}, SHIFT(175),
  [359] = {.count = 1, .reusable = true}, SHIFT(176),
  [361] = {.count = 1, .reusable = true}, SHIFT(179),
  [363] = {.count = 1, .reusable = false}, SHIFT(177),
  [365] = {.count = 1, .reusable = false}, SHIFT(179),
  [367] = {.count = 1, .reusable = true}, SHIFT(181),
  [369] = {.count = 1, .reusable = false}, SHIFT(181),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [373] = {.count = 1, .reusable = true}, SHIFT(184),
  [375] = {.count = 1, .reusable = false}, SHIFT(182),
  [377] = {.count = 1, .reusable = false}, SHIFT(184),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_array_expression, 2),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_array_expression, 2),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [416] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [422] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [428] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [431] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [434] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [443] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [446] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [449] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [452] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [464] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [467] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [470] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [472] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [478] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [483] = {.count = 1, .reusable = true}, SHIFT(186),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(187),
  [491] = {.count = 1, .reusable = true}, SHIFT(188),
  [493] = {.count = 1, .reusable = false}, SHIFT(188),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(115),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(115),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [511] = {.count = 1, .reusable = true}, SHIFT(189),
  [513] = {.count = 1, .reusable = false}, SHIFT(189),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [517] = {.count = 1, .reusable = true}, SHIFT(190),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 3),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_use_definition, 3),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [525] = {.count = 1, .reusable = false}, SHIFT(195),
  [527] = {.count = 1, .reusable = true}, SHIFT(197),
  [529] = {.count = 1, .reusable = true}, SHIFT(198),
  [531] = {.count = 1, .reusable = false}, SHIFT(198),
  [533] = {.count = 1, .reusable = true}, SHIFT(55),
  [535] = {.count = 1, .reusable = true}, SHIFT(200),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [539] = {.count = 1, .reusable = false}, SHIFT(201),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_cast_ops, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [545] = {.count = 1, .reusable = false}, SHIFT(204),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_cast_expression, 2),
  [553] = {.count = 1, .reusable = true}, SHIFT(206),
  [555] = {.count = 1, .reusable = true}, SHIFT(207),
  [557] = {.count = 1, .reusable = true}, SHIFT(208),
  [559] = {.count = 1, .reusable = true}, SHIFT(209),
  [561] = {.count = 1, .reusable = false}, SHIFT(209),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(210),
  [569] = {.count = 1, .reusable = false}, SHIFT(210),
  [571] = {.count = 1, .reusable = true}, SHIFT(211),
  [573] = {.count = 1, .reusable = false}, SHIFT(211),
  [575] = {.count = 1, .reusable = false}, SHIFT(212),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [581] = {.count = 1, .reusable = true}, SHIFT(213),
  [583] = {.count = 1, .reusable = false}, SHIFT(213),
  [585] = {.count = 1, .reusable = true}, SHIFT(216),
  [587] = {.count = 1, .reusable = false}, SHIFT(214),
  [589] = {.count = 1, .reusable = false}, SHIFT(216),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_values, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_container_types, 1),
  [595] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 3),
  [597] = {.count = 1, .reusable = true}, SHIFT(223),
  [599] = {.count = 1, .reusable = true}, SHIFT(222),
  [601] = {.count = 1, .reusable = false}, SHIFT(223),
  [603] = {.count = 1, .reusable = false}, SHIFT(224),
  [605] = {.count = 1, .reusable = false}, SHIFT(225),
  [607] = {.count = 1, .reusable = false}, SHIFT(226),
  [609] = {.count = 1, .reusable = true}, SHIFT(227),
  [611] = {.count = 1, .reusable = false}, SHIFT(233),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 3),
  [615] = {.count = 1, .reusable = true}, SHIFT(235),
  [617] = {.count = 1, .reusable = true}, SHIFT(236),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_scope_expression, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_scope_expression, 3),
  [623] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(87),
  [626] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 3),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [630] = {.count = 1, .reusable = false}, SHIFT(237),
  [632] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [634] = {.count = 2, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(93),
  [637] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [639] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(59),
  [644] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [646] = {.count = 1, .reusable = true}, SHIFT(240),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [650] = {.count = 1, .reusable = false}, SHIFT(242),
  [652] = {.count = 1, .reusable = true}, SHIFT(243),
  [654] = {.count = 1, .reusable = true}, SHIFT(244),
  [656] = {.count = 1, .reusable = true}, SHIFT(245),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 1),
  [660] = {.count = 1, .reusable = true}, SHIFT(246),
  [662] = {.count = 1, .reusable = true}, SHIFT(248),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_access_expression, 3),
  [666] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(100),
  [669] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(101),
  [672] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(102),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_access_expression, 3),
  [677] = {.count = 1, .reusable = true}, SHIFT(249),
  [679] = {.count = 1, .reusable = true}, SHIFT(250),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [687] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(112),
  [690] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(113),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 4),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [699] = {.count = 1, .reusable = false}, SHIFT(254),
  [701] = {.count = 1, .reusable = true}, SHIFT(255),
  [703] = {.count = 1, .reusable = true}, SHIFT(256),
  [705] = {.count = 1, .reusable = false}, SHIFT(256),
  [707] = {.count = 1, .reusable = false}, SHIFT(257),
  [709] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(135),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [714] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(138),
  [717] = {.count = 1, .reusable = false}, SHIFT(261),
  [719] = {.count = 1, .reusable = true}, SHIFT(262),
  [721] = {.count = 1, .reusable = false}, SHIFT(262),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [727] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(144),
  [730] = {.count = 1, .reusable = true}, SHIFT(263),
  [732] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(148),
  [735] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(150),
  [738] = {.count = 1, .reusable = true}, SHIFT(264),
  [740] = {.count = 1, .reusable = true}, SHIFT(265),
  [742] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_values_repeat1, 2), SHIFT_REPEAT(152),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_container_definition, 4),
  [749] = {.count = 1, .reusable = true}, SHIFT(269),
  [751] = {.count = 1, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2),
  [753] = {.count = 1, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2),
  [755] = {.count = 1, .reusable = true}, SHIFT(270),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1, .dynamic_precedence = 1),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [761] = {.count = 1, .reusable = false}, SHIFT(272),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [765] = {.count = 1, .reusable = true}, SHIFT(273),
  [767] = {.count = 1, .reusable = true}, SHIFT(276),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(157),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(158),
  [775] = {.count = 2, .reusable = false}, REDUCE(aux_sym_extension_repeat1, 2), SHIFT_REPEAT(233),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_extension, 4),
  [780] = {.count = 1, .reusable = true}, SHIFT(277),
  [782] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [784] = {.count = 1, .reusable = true}, SHIFT(280),
  [786] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [788] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [790] = {.count = 1, .reusable = false}, SHIFT(284),
  [792] = {.count = 1, .reusable = true}, SHIFT(285),
  [794] = {.count = 1, .reusable = false}, SHIFT(285),
  [796] = {.count = 1, .reusable = true}, SHIFT(286),
  [798] = {.count = 1, .reusable = false}, SHIFT(286),
  [800] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_values, 2),
  [802] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 4),
  [804] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 4),
  [806] = {.count = 1, .reusable = false}, SHIFT(288),
  [808] = {.count = 1, .reusable = true}, SHIFT(289),
  [810] = {.count = 1, .reusable = false}, SHIFT(289),
  [812] = {.count = 1, .reusable = true}, REDUCE(sym_class_definition, 5),
  [814] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [816] = {.count = 1, .reusable = true}, SHIFT(292),
  [818] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(200),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(45),
  [826] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [828] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(206),
  [831] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(207),
  [834] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(45),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [841] = {.count = 1, .reusable = false}, SHIFT(293),
  [843] = {.count = 1, .reusable = true}, SHIFT(294),
  [845] = {.count = 1, .reusable = false}, SHIFT(294),
  [847] = {.count = 1, .reusable = false}, SHIFT(295),
  [849] = {.count = 1, .reusable = false}, SHIFT(297),
  [851] = {.count = 1, .reusable = true}, SHIFT(298),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [859] = {.count = 1, .reusable = false}, SHIFT(307),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [863] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(244),
  [866] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(245),
  [869] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2),
  [871] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_values_repeat1, 2), SHIFT_REPEAT(246),
  [874] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(249),
  [877] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(250),
  [880] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 6),
  [882] = {.count = 2, .reusable = true}, REDUCE(sym_scope_expression, 3), SHIFT(264),
  [885] = {.count = 2, .reusable = true}, REDUCE(sym_access_expression, 3), SHIFT(265),
  [888] = {.count = 1, .reusable = true}, SHIFT(311),
  [890] = {.count = 1, .reusable = false}, SHIFT(311),
  [892] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [894] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(273),
  [897] = {.count = 1, .reusable = false}, SHIFT(312),
  [899] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [901] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(280),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 8),
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
