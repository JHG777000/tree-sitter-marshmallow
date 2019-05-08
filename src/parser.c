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
#define STATE_COUNT 178
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__space = 1,
  sym__comment = 2,
  anon_sym_COMMA = 3,
  sym_readonly = 4,
  anon_sym_private = 5,
  anon_sym_protected = 6,
  anon_sym_publish = 7,
  anon_sym_DOT = 8,
  anon_sym_module = 9,
  anon_sym_end = 10,
  anon_sym_enum = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_function = 14,
  anon_sym_method = 15,
  anon_sym_returns = 16,
  anon_sym_i8 = 17,
  anon_sym_i16 = 18,
  anon_sym_i32 = 19,
  anon_sym_i64 = 20,
  anon_sym_u8 = 21,
  anon_sym_u16 = 22,
  anon_sym_u32 = 23,
  anon_sym_u64 = 24,
  anon_sym_f32 = 25,
  anon_sym_f64 = 26,
  anon_sym_s8 = 27,
  anon_sym_s16 = 28,
  anon_sym_s32 = 29,
  anon_sym_STAR = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  sym_is_declare = 33,
  sym_is_external = 34,
  anon_sym_if = 35,
  anon_sym_while = 36,
  anon_sym_switch = 37,
  anon_sym_case = 38,
  anon_sym_default = 39,
  anon_sym_goto = 40,
  anon_sym_section = 41,
  anon_sym_COLON_EQ = 42,
  anon_sym_return = 43,
  anon_sym_DASH = 44,
  anon_sym_AMP = 45,
  anon_sym_BANG = 46,
  anon_sym_TILDE = 47,
  anon_sym_PLUS = 48,
  anon_sym_SLASH = 49,
  anon_sym_PERCENT = 50,
  anon_sym_PIPE = 51,
  anon_sym_CARET = 52,
  anon_sym_GT = 53,
  anon_sym_LT = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_LT_EQ = 56,
  anon_sym_BANG_EQ = 57,
  anon_sym_EQ_EQ = 58,
  anon_sym_AMP_AMP = 59,
  anon_sym_PIPE_PIPE = 60,
  anon_sym_GT_GT = 61,
  anon_sym_LT_LT = 62,
  anon_sym_PLUS_EQ = 63,
  anon_sym_DASH_EQ = 64,
  anon_sym_STAR_EQ = 65,
  anon_sym_SLASH_EQ = 66,
  anon_sym_PERCENT_EQ = 67,
  anon_sym_AMP_EQ = 68,
  anon_sym_PIPE_EQ = 69,
  anon_sym_CARET_EQ = 70,
  anon_sym_GT_GT_EQ = 71,
  anon_sym_LT_LT_EQ = 72,
  anon_sym_PLUS_PLUS = 73,
  anon_sym_DASH_DASH = 74,
  anon_sym_LBRACE = 75,
  anon_sym_RBRACE = 76,
  sym_null = 77,
  sym_identifier = 78,
  anon_sym_DQUOTE = 79,
  aux_sym_string_token1 = 80,
  anon_sym_SQUOTE = 81,
  aux_sym_character_token1 = 82,
  anon_sym_BSLASH_BSLASH = 83,
  anon_sym_BSLASH0 = 84,
  anon_sym_BSLASHa = 85,
  anon_sym_BSLASHb = 86,
  anon_sym_BSLASHf = 87,
  anon_sym_BSLASHn = 88,
  anon_sym_BSLASHr = 89,
  anon_sym_BSLASHt = 90,
  anon_sym_BSLASHv = 91,
  sym_oct = 92,
  sym_integer = 93,
  sym_long = 94,
  sym_float = 95,
  sym_double = 96,
  sym_hex = 97,
  sym_binary = 98,
  sym_source_file = 99,
  sym__comma_list_variables = 100,
  sym__comma_list_assignment_or_collection_or_value = 101,
  sym__comma_list_types = 102,
  sym_access_control = 103,
  sym__sentence = 104,
  sym_definition = 105,
  sym_module_definition = 106,
  sym_compound_macro = 107,
  sym_end_compound_macro = 108,
  sym__enum_element = 109,
  sym_enum_definition = 110,
  sym_is_function = 111,
  sym_is_method = 112,
  sym_function_definition = 113,
  sym_variable_definition = 114,
  sym_parameter_list = 115,
  sym_return_list = 116,
  sym_type = 117,
  sym__base_type = 118,
  sym_primitive_type = 119,
  sym_pointer = 120,
  sym_array = 121,
  sym_declaration_definition = 122,
  sym_statement = 123,
  sym_end_statement = 124,
  sym__control_flow_statement = 125,
  sym_goto_statement = 126,
  sym_section_statement = 127,
  sym_single_line_if_statement = 128,
  sym_if_statement = 129,
  sym_while_statement = 130,
  sym_switch_statement = 131,
  sym_case_statement = 132,
  sym_default_statement = 133,
  sym_static_assignment = 134,
  sym_expression_statement = 135,
  sym_return_statement = 136,
  sym_group_expression = 137,
  sym_assignment_expression = 138,
  sym_unary_op = 139,
  sym_binary_op = 140,
  sym_assignment_op = 141,
  sym_assignment_post_op = 142,
  sym__assignment_or_collection_or_value = 143,
  sym__collection_or_value = 144,
  sym_collection = 145,
  sym__value = 146,
  sym__literal = 147,
  sym_string = 148,
  sym_character = 149,
  sym__escape_sequence = 150,
  sym__number = 151,
  aux_sym_source_file_repeat1 = 152,
  aux_sym__comma_list_variables_repeat1 = 153,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 154,
  aux_sym__comma_list_types_repeat1 = 155,
  aux_sym_compound_macro_repeat1 = 156,
  aux_sym_enum_definition_repeat1 = 157,
  aux_sym_type_repeat1 = 158,
  aux_sym_type_repeat2 = 159,
  aux_sym_assignment_expression_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__comment] = "_comment",
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
  [sym_oct] = "oct",
  [sym_integer] = "integer",
  [sym_long] = "long",
  [sym_float] = "float",
  [sym_double] = "double",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [sym_source_file] = "source_file",
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
      if (lookahead == '*')
        ADVANCE(56);
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
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
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
        ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == ')')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(113);
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
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 56:
      if (lookahead == '*')
        ADVANCE(115);
      if (lookahead != 0)
        ADVANCE(56);
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
        ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'c')
        ADVANCE(121);
      if (lookahead == 'f')
        ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'u')
        ADVANCE(124);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == '2')
        ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == '4')
        ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == '6')
        ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == '2')
        ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == '4')
        ADVANCE(132);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 93:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'd')
        ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'l')
        ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 97:
      if (lookahead == 'b')
        ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == '6')
        ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == '2')
        ADVANCE(142);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 102:
      if (lookahead == 'c')
        ADVANCE(143);
      END_STATE();
    case 103:
      if (lookahead == 'i')
        ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == '6')
        ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == '2')
        ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == '4')
        ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(148);
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
        ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == '+')
        ADVANCE(150);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(52);
      END_STATE();
    case 115:
      if (lookahead == '*')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(150);
      if (lookahead != 0)
        ADVANCE(56);
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
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'l')
        ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'a')
        ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 124:
      if (lookahead == 'm')
        ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'e')
        ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 128:
      if (lookahead == 'c')
        ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'o')
        ADVANCE(157);
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
        ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'v')
        ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 't')
        ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'l')
        ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 'd')
        ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(167);
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
        ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__comment);
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
    case 211:
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(56);
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
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 230:
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
        ADVANCE(230);
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
      if (lookahead == '*')
        ADVANCE(349);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(213);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 350:
      if (lookahead == '(')
        ADVANCE(351);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'm')
        ADVANCE(353);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 352:
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
    case 353:
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
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 355:
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
    case 356:
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
    case 357:
      if (lookahead == '!')
        ADVANCE(358);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(359);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(349);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(360);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(361);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 359:
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
    case 360:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(229);
      END_STATE();
    case 361:
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
    case 362:
      if (lookahead == '(')
        ADVANCE(351);
      if (lookahead == '*')
        ADVANCE(349);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(213);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          lookahead != '\\' &&
          lookahead != ']' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 363:
      if (lookahead == '%')
        ADVANCE(364);
      if (lookahead == '&')
        ADVANCE(365);
      if (lookahead == '(')
        ADVANCE(351);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(366);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(368);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(370);
      if (lookahead == '>')
        ADVANCE(371);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(372);
      if (lookahead == '|')
        ADVANCE(373);
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
    case 364:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 365:
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
    case 366:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(230);
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
    case 369:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
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
      if (lookahead == '>')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
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
        ADVANCE(228);
      END_STATE();
    case 373:
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
        ADVANCE(228);
      END_STATE();
    case 374:
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
    case 375:
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
    case 376:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(218);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'm')
        ADVANCE(353);
      if (lookahead == 'r')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 377:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
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
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 378:
      if (lookahead == '+')
        ADVANCE(379);
      if (lookahead == '-')
        ADVANCE(380);
      if (lookahead == '/')
        ADVANCE(381);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(43);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(52);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(229);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '*')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 382:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == 'f')
        ADVANCE(384);
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 's')
        ADVANCE(386);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 384:
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
    case 385:
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
    case 386:
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
    case 387:
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
    case 388:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
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
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(395);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '/')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(52);
      if (lookahead == '-')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(56);
      if (lookahead == '*')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(395);
      if (lookahead == '"')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(52);
      if (lookahead == '+')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(400);
      if (lookahead != 0)
        ADVANCE(396);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(56);
      if (lookahead == '*')
        ADVANCE(401);
      if (lookahead == '/')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(398);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(395);
      END_STATE();
    case 403:
      if (lookahead == '%')
        ADVANCE(364);
      if (lookahead == '&')
        ADVANCE(404);
      if (lookahead == '*')
        ADVANCE(405);
      if (lookahead == '+')
        ADVANCE(366);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(367);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(406);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(407);
      if (lookahead == '>')
        ADVANCE(408);
      if (lookahead == '^')
        ADVANCE(409);
      if (lookahead == '|')
        ADVANCE(410);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 404:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 405:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 406:
      if (lookahead == '*')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 407:
      if (lookahead == '<')
        ADVANCE(411);
      END_STATE();
    case 408:
      if (lookahead == '>')
        ADVANCE(412);
      END_STATE();
    case 409:
      if (lookahead == '=')
        ADVANCE(79);
      END_STATE();
    case 410:
      if (lookahead == '=')
        ADVANCE(109);
      END_STATE();
    case 411:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 412:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 413:
      if (lookahead == '!')
        ADVANCE(414);
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
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(415);
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
    case 414:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 415:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 416:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'p')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 417:
      if (lookahead == '!')
        ADVANCE(414);
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
        ADVANCE(369);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(415);
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
    case 418:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == 'e')
        ADVANCE(419);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(420);
      if (lookahead == 's')
        ADVANCE(421);
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
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
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
    case 422:
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
    case 423:
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
    case 424:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 425:
      if (lookahead == '*')
        ADVANCE(56);
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 426:
      if (lookahead == '(')
        ADVANCE(351);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(425);
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
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 435:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 436:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(437);
      END_STATE();
    case 438:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 'r')
        ADVANCE(354);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
      END_STATE();
    case 439:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == ':')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 440:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '/')
        ADVANCE(425);
      if (lookahead == 'c')
        ADVANCE(441);
      if (lookahead == 'd')
        ADVANCE(442);
      if (lookahead == 'f')
        ADVANCE(443);
      if (lookahead == 'i')
        ADVANCE(444);
      if (lookahead == 'm')
        ADVANCE(445);
      if (lookahead == 's')
        ADVANCE(446);
      if (lookahead == 'w')
        ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 441:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 442:
      if (lookahead == 'e')
        ADVANCE(448);
      END_STATE();
    case 443:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 444:
      if (lookahead == 'f')
        ADVANCE(92);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 446:
      if (lookahead == 'w')
        ADVANCE(103);
      END_STATE();
    case 447:
      if (lookahead == 'h')
        ADVANCE(108);
      END_STATE();
    case 448:
      if (lookahead == 'f')
        ADVANCE(122);
      END_STATE();
    case 449:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(389);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead == 's')
        ADVANCE(355);
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
          (lookahead < '\'' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(228);
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
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(213);
      if (lookahead == '0')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(215);
      if (lookahead == 'd')
        ADVANCE(383);
      if (lookahead == 'e')
        ADVANCE(419);
      if (lookahead == 'g')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(385);
      if (lookahead == 'n')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(420);
      if (lookahead == 's')
        ADVANCE(421);
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
          (lookahead < '*' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_')
        ADVANCE(228);
      END_STATE();
    case 451:
      if (lookahead == '*')
        ADVANCE(349);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(425);
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
  [2] = {.lex_state = 348},
  [3] = {.lex_state = 350},
  [4] = {.lex_state = 350},
  [5] = {.lex_state = 350},
  [6] = {.lex_state = 357},
  [7] = {.lex_state = 362},
  [8] = {.lex_state = 363},
  [9] = {.lex_state = 362},
  [10] = {.lex_state = 376},
  [11] = {.lex_state = 377},
  [12] = {.lex_state = 378},
  [13] = {.lex_state = 348},
  [14] = {.lex_state = 382},
  [15] = {.lex_state = 362},
  [16] = {.lex_state = 388},
  [17] = {.lex_state = 390},
  [18] = {.lex_state = 362},
  [19] = {.lex_state = 350},
  [20] = {.lex_state = 362},
  [21] = {.lex_state = 350},
  [22] = {.lex_state = 350},
  [23] = {.lex_state = 377},
  [24] = {.lex_state = 348},
  [25] = {.lex_state = 348},
  [26] = {.lex_state = 362},
  [27] = {.lex_state = 362},
  [28] = {.lex_state = 348},
  [29] = {.lex_state = 403},
  [30] = {.lex_state = 210},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 362},
  [33] = {.lex_state = 363},
  [34] = {.lex_state = 376},
  [35] = {.lex_state = 348},
  [36] = {.lex_state = 363},
  [37] = {.lex_state = 357},
  [38] = {.lex_state = 348},
  [39] = {.lex_state = 348},
  [40] = {.lex_state = 348},
  [41] = {.lex_state = 377},
  [42] = {.lex_state = 413},
  [43] = {.lex_state = 388},
  [44] = {.lex_state = 377},
  [45] = {.lex_state = 348},
  [46] = {.lex_state = 362},
  [47] = {.lex_state = 416},
  [48] = {.lex_state = 362},
  [49] = {.lex_state = 348},
  [50] = {.lex_state = 348},
  [51] = {.lex_state = 403},
  [52] = {.lex_state = 210},
  [53] = {.lex_state = 348},
  [54] = {.lex_state = 362},
  [55] = {.lex_state = 348},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 417},
  [58] = {.lex_state = 390},
  [59] = {.lex_state = 348},
  [60] = {.lex_state = 418},
  [61] = {.lex_state = 348},
  [62] = {.lex_state = 348},
  [63] = {.lex_state = 362},
  [64] = {.lex_state = 424},
  [65] = {.lex_state = 424},
  [66] = {.lex_state = 210},
  [67] = {.lex_state = 426},
  [68] = {.lex_state = 434},
  [69] = {.lex_state = 435},
  [70] = {.lex_state = 435},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 348},
  [73] = {.lex_state = 436},
  [74] = {.lex_state = 362},
  [75] = {.lex_state = 362},
  [76] = {.lex_state = 388},
  [77] = {.lex_state = 362},
  [78] = {.lex_state = 377},
  [79] = {.lex_state = 363},
  [80] = {.lex_state = 377},
  [81] = {.lex_state = 413},
  [82] = {.lex_state = 388},
  [83] = {.lex_state = 377},
  [84] = {.lex_state = 377},
  [85] = {.lex_state = 417},
  [86] = {.lex_state = 377},
  [87] = {.lex_state = 390},
  [88] = {.lex_state = 378},
  [89] = {.lex_state = 388},
  [90] = {.lex_state = 362},
  [91] = {.lex_state = 438},
  [92] = {.lex_state = 426},
  [93] = {.lex_state = 439},
  [94] = {.lex_state = 388},
  [95] = {.lex_state = 438},
  [96] = {.lex_state = 362},
  [97] = {.lex_state = 348},
  [98] = {.lex_state = 417},
  [99] = {.lex_state = 434},
  [100] = {.lex_state = 417},
  [101] = {.lex_state = 390},
  [102] = {.lex_state = 440},
  [103] = {.lex_state = 348},
  [104] = {.lex_state = 439},
  [105] = {.lex_state = 439},
  [106] = {.lex_state = 403},
  [107] = {.lex_state = 377},
  [108] = {.lex_state = 424},
  [109] = {.lex_state = 449},
  [110] = {.lex_state = 426},
  [111] = {.lex_state = 348},
  [112] = {.lex_state = 377},
  [113] = {.lex_state = 434},
  [114] = {.lex_state = 436},
  [115] = {.lex_state = 348},
  [116] = {.lex_state = 362},
  [117] = {.lex_state = 362},
  [118] = {.lex_state = 362},
  [119] = {.lex_state = 362},
  [120] = {.lex_state = 426},
  [121] = {.lex_state = 363},
  [122] = {.lex_state = 377},
  [123] = {.lex_state = 377},
  [124] = {.lex_state = 435},
  [125] = {.lex_state = 450},
  [126] = {.lex_state = 377},
  [127] = {.lex_state = 388},
  [128] = {.lex_state = 388},
  [129] = {.lex_state = 435},
  [130] = {.lex_state = 390},
  [131] = {.lex_state = 210},
  [132] = {.lex_state = 417},
  [133] = {.lex_state = 416},
  [134] = {.lex_state = 439},
  [135] = {.lex_state = 426},
  [136] = {.lex_state = 434},
  [137] = {.lex_state = 439},
  [138] = {.lex_state = 362},
  [139] = {.lex_state = 362},
  [140] = {.lex_state = 439},
  [141] = {.lex_state = 424},
  [142] = {.lex_state = 424},
  [143] = {.lex_state = 451},
  [144] = {.lex_state = 451},
  [145] = {.lex_state = 348},
  [146] = {.lex_state = 348},
  [147] = {.lex_state = 434},
  [148] = {.lex_state = 348},
  [149] = {.lex_state = 434},
  [150] = {.lex_state = 426},
  [151] = {.lex_state = 435},
  [152] = {.lex_state = 424},
  [153] = {.lex_state = 388},
  [154] = {.lex_state = 450},
  [155] = {.lex_state = 417},
  [156] = {.lex_state = 435},
  [157] = {.lex_state = 435},
  [158] = {.lex_state = 439},
  [159] = {.lex_state = 439},
  [160] = {.lex_state = 348},
  [161] = {.lex_state = 439},
  [162] = {.lex_state = 362},
  [163] = {.lex_state = 439},
  [164] = {.lex_state = 388},
  [165] = {.lex_state = 451},
  [166] = {.lex_state = 451},
  [167] = {.lex_state = 451},
  [168] = {.lex_state = 434},
  [169] = {.lex_state = 348},
  [170] = {.lex_state = 435},
  [171] = {.lex_state = 450},
  [172] = {.lex_state = 348},
  [173] = {.lex_state = 451},
  [174] = {.lex_state = 451},
  [175] = {.lex_state = 451},
  [176] = {.lex_state = 451},
  [177] = {.lex_state = 451},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
  },
  [1] = {
    [sym__sentence] = STATE(30),
    [sym_definition] = STATE(24),
    [sym_enum_definition] = STATE(25),
    [sym_is_function] = STATE(26),
    [sym_type] = STATE(27),
    [sym_declaration_definition] = STATE(25),
    [sym_statement] = STATE(24),
    [sym_single_line_if_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_collection] = STATE(36),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(30),
    [sym_source_file] = STATE(31),
    [sym_module_definition] = STATE(25),
    [sym_compound_macro] = STATE(25),
    [sym_is_method] = STATE(26),
    [sym_function_definition] = STATE(25),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [sym_end_statement] = STATE(28),
    [sym__control_flow_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_group_expression] = STATE(33),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_access_control] = STATE(34),
    [sym_end_compound_macro] = STATE(25),
    [sym_variable_definition] = STATE(25),
    [sym_goto_statement] = STATE(28),
    [sym_section_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym_assignment_expression] = STATE(35),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(29),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [sym_is_declare] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(11),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(5),
    [sym_float] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_is_external] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(29),
    [sym_binary] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_method] = ACTIONS(33),
    [sym_readonly] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(23),
    [anon_sym_s8] = ACTIONS(5),
    [sym_double] = ACTIONS(13),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_integer] = ACTIONS(39),
    [anon_sym_section] = ACTIONS(41),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_goto] = ACTIONS(45),
    [anon_sym_switch] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_enum] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(23),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [sym_long] = ACTIONS(13),
    [sym_oct] = ACTIONS(39),
    [anon_sym_i32] = ACTIONS(5),
  },
  [2] = {
    [anon_sym_DOT] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(55),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(55),
  },
  [3] = {
    [sym_group_expression] = STATE(38),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(59),
  },
  [4] = {
    [sym_variable_definition] = STATE(39),
    [sym_is_function] = STATE(26),
    [sym_type] = STATE(27),
    [sym_is_method] = STATE(26),
    [sym_function_definition] = STATE(39),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [sym_access_control] = STATE(34),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_method] = ACTIONS(33),
    [sym_readonly] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(23),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(21),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(23),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [5] = {
    [sym_group_expression] = STATE(40),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(59),
  },
  [6] = {
    [sym_collection] = STATE(36),
    [sym__value] = STATE(42),
    [sym__number] = STATE(42),
    [sym_group_expression] = STATE(42),
    [sym__literal] = STATE(42),
    [sym_string] = STATE(42),
    [sym_assignment_expression] = STATE(43),
    [sym_unary_op] = STATE(44),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(42),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(65),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(69),
    [sym_identifier] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(63),
    [sym_null] = ACTIONS(67),
    [sym_binary] = ACTIONS(65),
    [sym_oct] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(65),
    [anon_sym_STAR] = ACTIONS(69),
  },
  [7] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym_compound_macro_repeat1] = STATE(48),
    [sym_parameter_list] = STATE(49),
    [anon_sym_COLON_EQ] = ACTIONS(73),
    [anon_sym_DASH_DASH] = ACTIONS(75),
    [anon_sym_AMP_EQ] = ACTIONS(73),
    [sym__space] = ACTIONS(77),
    [anon_sym_STAR_EQ] = ACTIONS(73),
    [anon_sym_CARET_EQ] = ACTIONS(73),
    [anon_sym_DASH_EQ] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_PLUS_PLUS] = ACTIONS(73),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_PERCENT_EQ] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_PIPE_EQ] = ACTIONS(73),
    [anon_sym_LT_LT_EQ] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_PLUS_EQ] = ACTIONS(73),
    [anon_sym_SLASH_EQ] = ACTIONS(73),
    [anon_sym_GT_GT_EQ] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(82),
  },
  [9] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(88),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_u8] = ACTIONS(90),
    [anon_sym_method] = ACTIONS(90),
    [sym_readonly] = ACTIONS(90),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(90),
    [anon_sym_s32] = ACTIONS(90),
    [anon_sym_i16] = ACTIONS(90),
    [anon_sym_u32] = ACTIONS(90),
    [anon_sym_function] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_f64] = ACTIONS(90),
    [anon_sym_i64] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(90),
    [anon_sym_u16] = ACTIONS(90),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(90),
    [anon_sym_f32] = ACTIONS(90),
    [anon_sym_i32] = ACTIONS(90),
    [anon_sym_u64] = ACTIONS(90),
  },
  [11] = {
    [sym_collection] = STATE(51),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [sym_group_expression] = STATE(29),
    [sym__assignment_or_collection_or_value] = STATE(50),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_assignment_expression] = STATE(50),
    [sym__collection_or_value] = STATE(51),
    [sym_character] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(13),
    [sym_integer] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(39),
    [sym_float] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym_binary] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(39),
    [sym_long] = ACTIONS(13),
  },
  [12] = {
    [sym__escape_sequence] = STATE(52),
    [anon_sym_BSLASHa] = ACTIONS(92),
    [anon_sym_BSLASHt] = ACTIONS(92),
    [anon_sym_BSLASH0] = ACTIONS(92),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(92),
    [anon_sym_BSLASHv] = ACTIONS(92),
    [aux_sym_character_token1] = ACTIONS(94),
    [anon_sym_BSLASHf] = ACTIONS(92),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(92),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(92),
    [anon_sym_BSLASHn] = ACTIONS(92),
  },
  [13] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(96),
  },
  [14] = {
    [sym_compound_macro] = STATE(55),
    [anon_sym_switch] = ACTIONS(98),
    [anon_sym_method] = ACTIONS(98),
    [anon_sym_while] = ACTIONS(98),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(98),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(98),
    [anon_sym_module] = ACTIONS(98),
    [sym_identifier] = ACTIONS(100),
    [anon_sym_function] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(98),
  },
  [15] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(102),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym_type] = STATE(56),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [17] = {
    [aux_sym_string_repeat1] = STATE(58),
    [sym__comment] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym__space] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(108),
  },
  [18] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(110),
    [sym__comment] = ACTIONS(3),
  },
  [19] = {
    [sym_group_expression] = STATE(60),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(59),
  },
  [20] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(112),
    [sym__comment] = ACTIONS(3),
  },
  [21] = {
    [sym_group_expression] = STATE(62),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(59),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(114),
  },
  [23] = {
    [sym_collection] = STATE(51),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [sym_group_expression] = STATE(29),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(64),
    [sym__assignment_or_collection_or_value] = STATE(65),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_assignment_expression] = STATE(65),
    [sym__collection_or_value] = STATE(51),
    [sym_character] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(13),
    [sym_integer] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(39),
    [sym_float] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym_binary] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(39),
    [sym_long] = ACTIONS(13),
  },
  [24] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(116),
  },
  [25] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(118),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(120),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(122),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(124),
  },
  [29] = {
    [sym_assignment_post_op] = STATE(70),
    [anon_sym_COLON_EQ] = ACTIONS(126),
    [anon_sym_DASH_DASH] = ACTIONS(128),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [sym__space] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_PLUS_PLUS] = ACTIONS(130),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [sym__sentence] = STATE(71),
    [sym_definition] = STATE(24),
    [sym_enum_definition] = STATE(25),
    [sym_is_function] = STATE(26),
    [sym_type] = STATE(27),
    [sym_declaration_definition] = STATE(25),
    [sym_statement] = STATE(24),
    [sym_single_line_if_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_collection] = STATE(36),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(71),
    [sym_module_definition] = STATE(25),
    [sym_compound_macro] = STATE(25),
    [sym_is_method] = STATE(26),
    [sym_function_definition] = STATE(25),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [sym_end_statement] = STATE(28),
    [sym__control_flow_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_group_expression] = STATE(33),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_access_control] = STATE(34),
    [sym_end_compound_macro] = STATE(25),
    [sym_variable_definition] = STATE(25),
    [sym_goto_statement] = STATE(28),
    [sym_section_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym_assignment_expression] = STATE(35),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(29),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [sym_is_declare] = ACTIONS(9),
    [anon_sym_case] = ACTIONS(11),
    [sym_hex] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(17),
    [sym_identifier] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(21),
    [anon_sym_private] = ACTIONS(23),
    [anon_sym_f64] = ACTIONS(5),
    [sym_float] = ACTIONS(13),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_is_external] = ACTIONS(9),
    [anon_sym_default] = ACTIONS(29),
    [sym_binary] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(31),
    [anon_sym_method] = ACTIONS(33),
    [sym_readonly] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_protected] = ACTIONS(23),
    [anon_sym_s8] = ACTIONS(5),
    [sym_double] = ACTIONS(13),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_integer] = ACTIONS(39),
    [anon_sym_section] = ACTIONS(41),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_goto] = ACTIONS(45),
    [anon_sym_switch] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_enum] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(23),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [sym_long] = ACTIONS(13),
    [sym_oct] = ACTIONS(39),
    [anon_sym_i32] = ACTIONS(5),
  },
  [31] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(134),
  },
  [32] = {
    [aux_sym_type_repeat1] = STATE(74),
    [sym_pointer] = STATE(74),
    [sym_array] = STATE(75),
    [aux_sym_type_repeat2] = STATE(75),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(140),
  },
  [33] = {
    [anon_sym_COLON_EQ] = ACTIONS(73),
    [anon_sym_DASH_DASH] = ACTIONS(75),
    [anon_sym_AMP_EQ] = ACTIONS(73),
    [sym__space] = ACTIONS(73),
    [anon_sym_STAR_EQ] = ACTIONS(73),
    [anon_sym_CARET_EQ] = ACTIONS(73),
    [anon_sym_DASH_EQ] = ACTIONS(73),
    [anon_sym_PLUS_PLUS] = ACTIONS(73),
    [anon_sym_PERCENT_EQ] = ACTIONS(73),
    [anon_sym_LT_LT_EQ] = ACTIONS(73),
    [anon_sym_PIPE_EQ] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_PLUS_EQ] = ACTIONS(73),
    [anon_sym_SLASH_EQ] = ACTIONS(73),
    [anon_sym_GT_GT_EQ] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
  },
  [34] = {
    [sym_type] = STATE(56),
    [sym_is_method] = STATE(77),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [sym_is_function] = STATE(77),
    [anon_sym_u8] = ACTIONS(5),
    [anon_sym_method] = ACTIONS(33),
    [sym_readonly] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(21),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(142),
  },
  [36] = {
    [aux_sym_assignment_expression_repeat1] = STATE(79),
    [sym_assignment_op] = STATE(80),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_COLON_EQ] = ACTIONS(146),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [sym__space] = ACTIONS(148),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
  },
  [37] = {
    [sym_collection] = STATE(36),
    [sym__value] = STATE(81),
    [sym__number] = STATE(81),
    [sym_group_expression] = STATE(81),
    [sym__literal] = STATE(81),
    [sym_string] = STATE(81),
    [sym_assignment_expression] = STATE(82),
    [sym_unary_op] = STATE(83),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(81),
    [anon_sym_TILDE] = ACTIONS(63),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(150),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(150),
    [sym_integer] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(69),
    [sym_identifier] = ACTIONS(152),
    [sym_float] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_AMP] = ACTIONS(63),
    [sym_null] = ACTIONS(152),
    [sym_binary] = ACTIONS(150),
    [sym_oct] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(69),
  },
  [38] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(154),
  },
  [39] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(156),
  },
  [40] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(158),
  },
  [41] = {
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_float] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [sym_hex] = ACTIONS(160),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(160),
    [sym_null] = ACTIONS(162),
    [sym_integer] = ACTIONS(162),
    [sym_binary] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(162),
    [sym_oct] = ACTIONS(162),
    [sym_identifier] = ACTIONS(162),
    [sym_long] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym_assignment_post_op] = STATE(70),
    [sym_binary_op] = STATE(86),
    [anon_sym_COLON_EQ] = ACTIONS(126),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(130),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(128),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [sym__space] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(166),
  },
  [43] = {
    [anon_sym_RPAREN] = ACTIONS(168),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym_string] = STATE(89),
    [sym__value] = STATE(89),
    [sym__number] = STATE(89),
    [sym_group_expression] = STATE(89),
    [sym_character] = STATE(89),
    [sym__literal] = STATE(89),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_float] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_hex] = ACTIONS(172),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(172),
    [sym_null] = ACTIONS(176),
    [sym_integer] = ACTIONS(176),
    [sym_binary] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_oct] = ACTIONS(176),
    [sym_identifier] = ACTIONS(176),
    [sym_long] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
  },
  [45] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(180),
  },
  [46] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(182),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym_type] = STATE(27),
    [sym_variable_definition] = STATE(93),
    [sym__comma_list_variables] = STATE(94),
    [sym__base_type] = STATE(32),
    [sym_access_control] = STATE(95),
    [sym_primitive_type] = STATE(32),
    [anon_sym_u8] = ACTIONS(5),
    [sym_readonly] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(184),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(184),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(186),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(184),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [48] = {
    [aux_sym_compound_macro_repeat1] = STATE(96),
    [sym_parameter_list] = STATE(97),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__space] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(190),
  },
  [49] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(190),
  },
  [50] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(192),
  },
  [51] = {
    [aux_sym_assignment_expression_repeat1] = STATE(79),
    [sym_assignment_op] = STATE(80),
    [anon_sym_COLON_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [sym__space] = ACTIONS(148),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_SQUOTE] = ACTIONS(196),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(198),
  },
  [54] = {
    [aux_sym_compound_macro_repeat1] = STATE(48),
    [sym_parameter_list] = STATE(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__space] = ACTIONS(188),
    [anon_sym_DOT] = ACTIONS(84),
  },
  [55] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(200),
  },
  [56] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(202),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_COLON_EQ] = ACTIONS(204),
    [anon_sym_AMP_AMP] = ACTIONS(204),
    [anon_sym_DASH_EQ] = ACTIONS(204),
    [anon_sym_GT_GT] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_PLUS_PLUS] = ACTIONS(204),
    [anon_sym_PERCENT_EQ] = ACTIONS(204),
    [anon_sym_LT_LT_EQ] = ACTIONS(204),
    [anon_sym_PIPE_EQ] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_BANG_EQ] = ACTIONS(204),
    [anon_sym_LT_LT] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_LT_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_DASH_DASH] = ACTIONS(206),
    [anon_sym_AMP_EQ] = ACTIONS(204),
    [sym__space] = ACTIONS(204),
    [anon_sym_STAR_EQ] = ACTIONS(204),
    [anon_sym_CARET_EQ] = ACTIONS(204),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_EQ_EQ] = ACTIONS(204),
    [anon_sym_PLUS_EQ] = ACTIONS(204),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_SLASH_EQ] = ACTIONS(204),
    [anon_sym_GT_GT_EQ] = ACTIONS(204),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(206),
  },
  [58] = {
    [aux_sym_string_repeat1] = STATE(101),
    [sym__comment] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [sym__space] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(210),
  },
  [59] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(212),
  },
  [60] = {
    [sym__control_flow_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_group_expression] = STATE(33),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_statement] = STATE(103),
    [sym_single_line_if_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_collection] = STATE(36),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [sym_goto_statement] = STATE(28),
    [sym_section_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym_assignment_expression] = STATE(35),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(29),
    [sym_end_statement] = STATE(28),
    [anon_sym_end] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_while] = ACTIONS(7),
    [sym_hex] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(13),
    [sym_integer] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_section] = ACTIONS(41),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_goto] = ACTIONS(45),
    [anon_sym_switch] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(216),
    [sym_float] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym_binary] = ACTIONS(13),
    [anon_sym_default] = ACTIONS(29),
    [sym_oct] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(13),
  },
  [61] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(218),
  },
  [62] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(220),
  },
  [63] = {
    [sym__enum_element] = STATE(105),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(222),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(224),
  },
  [65] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(108),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(226),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(228),
  },
  [66] = {
    [anon_sym_u8] = ACTIONS(230),
    [sym_long] = ACTIONS(232),
    [anon_sym_while] = ACTIONS(230),
    [sym_is_declare] = ACTIONS(230),
    [anon_sym_case] = ACTIONS(230),
    [sym_hex] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(230),
    [anon_sym_module] = ACTIONS(230),
    [anon_sym_function] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [anon_sym_private] = ACTIONS(230),
    [anon_sym_f64] = ACTIONS(230),
    [sym_float] = ACTIONS(232),
    [anon_sym_i64] = ACTIONS(230),
    [anon_sym_i8] = ACTIONS(230),
    [anon_sym_u16] = ACTIONS(230),
    [anon_sym_return] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [sym_is_external] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [sym_binary] = ACTIONS(232),
    [anon_sym_end] = ACTIONS(230),
    [anon_sym_method] = ACTIONS(230),
    [sym_readonly] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_protected] = ACTIONS(230),
    [anon_sym_s8] = ACTIONS(230),
    [sym_double] = ACTIONS(232),
    [anon_sym_s32] = ACTIONS(230),
    [anon_sym_i16] = ACTIONS(230),
    [anon_sym_u32] = ACTIONS(230),
    [sym_integer] = ACTIONS(230),
    [anon_sym_section] = ACTIONS(230),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_goto] = ACTIONS(230),
    [anon_sym_switch] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_enum] = ACTIONS(230),
    [anon_sym_LBRACE] = ACTIONS(232),
    [sym_null] = ACTIONS(230),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(230),
    [anon_sym_s16] = ACTIONS(230),
    [anon_sym_f32] = ACTIONS(230),
    [sym_oct] = ACTIONS(230),
    [anon_sym_i32] = ACTIONS(230),
    [anon_sym_u64] = ACTIONS(230),
  },
  [67] = {
    [sym_parameter_list] = STATE(110),
    [sym_return_list] = STATE(111),
    [anon_sym_DOT] = ACTIONS(234),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(236),
  },
  [68] = {
    [sym_static_assignment] = STATE(113),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_COLON_EQ] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_DOT] = ACTIONS(238),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(242),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(244),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(244),
  },
  [71] = {
    [sym__sentence] = STATE(71),
    [sym_definition] = STATE(24),
    [sym_enum_definition] = STATE(25),
    [sym_is_function] = STATE(26),
    [sym_type] = STATE(27),
    [sym_declaration_definition] = STATE(25),
    [sym_statement] = STATE(24),
    [sym_single_line_if_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_expression_statement] = STATE(28),
    [sym_collection] = STATE(36),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(71),
    [sym_module_definition] = STATE(25),
    [sym_compound_macro] = STATE(25),
    [sym_is_method] = STATE(26),
    [sym_function_definition] = STATE(25),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [sym_end_statement] = STATE(28),
    [sym__control_flow_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym_return_statement] = STATE(28),
    [sym_group_expression] = STATE(33),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_access_control] = STATE(34),
    [sym_end_compound_macro] = STATE(25),
    [sym_variable_definition] = STATE(25),
    [sym_goto_statement] = STATE(28),
    [sym_section_statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_default_statement] = STATE(28),
    [sym_assignment_expression] = STATE(35),
    [sym__collection_or_value] = STATE(36),
    [sym_character] = STATE(29),
    [anon_sym_u8] = ACTIONS(246),
    [sym_long] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(252),
    [sym_is_declare] = ACTIONS(255),
    [anon_sym_case] = ACTIONS(258),
    [sym_hex] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_module] = ACTIONS(264),
    [anon_sym_function] = ACTIONS(267),
    [sym_identifier] = ACTIONS(270),
    [anon_sym_private] = ACTIONS(273),
    [anon_sym_f64] = ACTIONS(246),
    [sym_float] = ACTIONS(249),
    [anon_sym_i64] = ACTIONS(246),
    [anon_sym_i8] = ACTIONS(246),
    [anon_sym_u16] = ACTIONS(246),
    [anon_sym_return] = ACTIONS(276),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [sym_is_external] = ACTIONS(255),
    [anon_sym_default] = ACTIONS(282),
    [sym_binary] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_method] = ACTIONS(288),
    [sym_readonly] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_protected] = ACTIONS(273),
    [anon_sym_s8] = ACTIONS(246),
    [sym_double] = ACTIONS(249),
    [anon_sym_s32] = ACTIONS(246),
    [anon_sym_i16] = ACTIONS(246),
    [anon_sym_u32] = ACTIONS(246),
    [sym_integer] = ACTIONS(297),
    [anon_sym_section] = ACTIONS(300),
    [sym__space] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(303),
    [anon_sym_goto] = ACTIONS(306),
    [anon_sym_switch] = ACTIONS(309),
    [ts_builtin_sym_end] = ACTIONS(312),
    [anon_sym_enum] = ACTIONS(314),
    [anon_sym_LBRACE] = ACTIONS(317),
    [sym_null] = ACTIONS(297),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(273),
    [anon_sym_s16] = ACTIONS(246),
    [anon_sym_f32] = ACTIONS(246),
    [sym_oct] = ACTIONS(297),
    [anon_sym_i32] = ACTIONS(246),
    [anon_sym_u64] = ACTIONS(246),
  },
  [72] = {
    [anon_sym_DOT] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(320),
    [sym_identifier] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(320),
  },
  [73] = {
    [sym_integer] = ACTIONS(324),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(326),
  },
  [74] = {
    [aux_sym_type_repeat1] = STATE(116),
    [sym_pointer] = STATE(116),
    [sym_array] = STATE(117),
    [aux_sym_type_repeat2] = STATE(117),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(140),
  },
  [75] = {
    [sym_array] = STATE(118),
    [aux_sym_type_repeat2] = STATE(118),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(328),
  },
  [76] = {
    [sym_type] = STATE(119),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(330),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym_hex] = ACTIONS(332),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(332),
    [sym_integer] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [sym_identifier] = ACTIONS(334),
    [sym_float] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_LBRACE] = ACTIONS(332),
    [sym_null] = ACTIONS(334),
    [sym_binary] = ACTIONS(332),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(334),
    [sym_long] = ACTIONS(332),
  },
  [79] = {
    [aux_sym_assignment_expression_repeat1] = STATE(121),
    [sym_assignment_op] = STATE(122),
    [anon_sym_PIPE_EQ] = ACTIONS(146),
    [anon_sym_COLON_EQ] = ACTIONS(146),
    [anon_sym_PLUS_EQ] = ACTIONS(146),
    [anon_sym_AMP_EQ] = ACTIONS(146),
    [anon_sym_STAR_EQ] = ACTIONS(146),
    [anon_sym_CARET_EQ] = ACTIONS(146),
    [sym__space] = ACTIONS(336),
    [anon_sym_DASH_EQ] = ACTIONS(146),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [anon_sym_GT_GT_EQ] = ACTIONS(146),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(146),
    [anon_sym_LT_LT_EQ] = ACTIONS(146),
  },
  [80] = {
    [sym_collection] = STATE(124),
    [sym__value] = STATE(124),
    [sym__number] = STATE(124),
    [sym_group_expression] = STATE(124),
    [sym__literal] = STATE(124),
    [sym_string] = STATE(124),
    [sym__collection_or_value] = STATE(124),
    [sym_character] = STATE(124),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_hex] = ACTIONS(338),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(338),
    [sym_integer] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_identifier] = ACTIONS(340),
    [sym_float] = ACTIONS(338),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(342),
    [sym_null] = ACTIONS(340),
    [sym_binary] = ACTIONS(338),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(340),
    [sym_long] = ACTIONS(338),
  },
  [81] = {
    [sym_assignment_post_op] = STATE(70),
    [sym_binary_op] = STATE(126),
    [anon_sym_COLON_EQ] = ACTIONS(126),
    [anon_sym_AMP_AMP] = ACTIONS(164),
    [anon_sym_DASH_EQ] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(164),
    [anon_sym_PLUS_PLUS] = ACTIONS(130),
    [anon_sym_PERCENT_EQ] = ACTIONS(126),
    [anon_sym_LT_LT_EQ] = ACTIONS(126),
    [anon_sym_PIPE_EQ] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_AMP] = ACTIONS(166),
    [anon_sym_PIPE_PIPE] = ACTIONS(164),
    [anon_sym_BANG_EQ] = ACTIONS(164),
    [anon_sym_LT_LT] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_DASH_DASH] = ACTIONS(128),
    [anon_sym_AMP_EQ] = ACTIONS(126),
    [sym__space] = ACTIONS(126),
    [anon_sym_STAR_EQ] = ACTIONS(126),
    [anon_sym_CARET_EQ] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(164),
    [anon_sym_PLUS_EQ] = ACTIONS(126),
    [anon_sym_CARET] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [anon_sym_GT_GT_EQ] = ACTIONS(126),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(166),
  },
  [82] = {
    [anon_sym_RPAREN] = ACTIONS(344),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym_string] = STATE(127),
    [sym__value] = STATE(127),
    [sym__number] = STATE(127),
    [sym_group_expression] = STATE(127),
    [sym_character] = STATE(127),
    [sym__literal] = STATE(127),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_hex] = ACTIONS(346),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(346),
    [sym_null] = ACTIONS(348),
    [sym_integer] = ACTIONS(348),
    [sym_binary] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_oct] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_long] = ACTIONS(346),
    [sym__comment] = ACTIONS(3),
  },
  [84] = {
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [sym_hex] = ACTIONS(350),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(350),
    [sym_null] = ACTIONS(352),
    [sym_integer] = ACTIONS(352),
    [sym_binary] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(352),
    [sym_oct] = ACTIONS(352),
    [sym_identifier] = ACTIONS(352),
    [sym_long] = ACTIONS(350),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_COLON_EQ] = ACTIONS(354),
    [anon_sym_AMP_AMP] = ACTIONS(354),
    [anon_sym_DASH_EQ] = ACTIONS(354),
    [anon_sym_GT_GT] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_PLUS_PLUS] = ACTIONS(354),
    [anon_sym_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_LT_LT_EQ] = ACTIONS(354),
    [anon_sym_PIPE_EQ] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(356),
    [anon_sym_AMP] = ACTIONS(356),
    [anon_sym_PIPE_PIPE] = ACTIONS(354),
    [anon_sym_BANG_EQ] = ACTIONS(354),
    [anon_sym_LT_LT] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(356),
    [anon_sym_DASH_DASH] = ACTIONS(356),
    [anon_sym_AMP_EQ] = ACTIONS(354),
    [sym__space] = ACTIONS(354),
    [anon_sym_STAR_EQ] = ACTIONS(354),
    [anon_sym_CARET_EQ] = ACTIONS(354),
    [anon_sym_DASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [anon_sym_PLUS_EQ] = ACTIONS(354),
    [anon_sym_CARET] = ACTIONS(356),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_EQ] = ACTIONS(354),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(356),
  },
  [86] = {
    [sym_string] = STATE(128),
    [sym__value] = STATE(128),
    [sym__number] = STATE(128),
    [sym_group_expression] = STATE(128),
    [sym_character] = STATE(128),
    [sym__literal] = STATE(128),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_float] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_hex] = ACTIONS(358),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(358),
    [sym_null] = ACTIONS(360),
    [sym_integer] = ACTIONS(360),
    [sym_binary] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_oct] = ACTIONS(360),
    [sym_identifier] = ACTIONS(360),
    [sym_long] = ACTIONS(358),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [aux_sym_string_repeat1] = STATE(130),
    [sym__comment] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(362),
    [sym__space] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(364),
  },
  [88] = {
    [sym__escape_sequence] = STATE(131),
    [anon_sym_BSLASHa] = ACTIONS(366),
    [anon_sym_BSLASHt] = ACTIONS(366),
    [anon_sym_BSLASH0] = ACTIONS(366),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(366),
    [anon_sym_BSLASHv] = ACTIONS(366),
    [aux_sym_character_token1] = ACTIONS(368),
    [anon_sym_BSLASHf] = ACTIONS(366),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(366),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(366),
    [anon_sym_BSLASHn] = ACTIONS(366),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(370),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(372),
    [sym__space] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
  },
  [91] = {
    [anon_sym_u8] = ACTIONS(90),
    [sym_readonly] = ACTIONS(90),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(90),
    [anon_sym_s32] = ACTIONS(90),
    [anon_sym_i16] = ACTIONS(90),
    [anon_sym_u32] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_f64] = ACTIONS(90),
    [anon_sym_i64] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(90),
    [anon_sym_u16] = ACTIONS(90),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(90),
    [anon_sym_f32] = ACTIONS(90),
    [anon_sym_i32] = ACTIONS(90),
    [anon_sym_u64] = ACTIONS(90),
  },
  [92] = {
    [anon_sym_returns] = ACTIONS(374),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(374),
  },
  [93] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(134),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(378),
  },
  [94] = {
    [anon_sym_RPAREN] = ACTIONS(380),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [sym_type] = STATE(56),
    [sym__base_type] = STATE(32),
    [sym_primitive_type] = STATE(32),
    [anon_sym_u8] = ACTIONS(5),
    [sym_readonly] = ACTIONS(144),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [96] = {
    [aux_sym_compound_macro_repeat1] = STATE(96),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(372),
    [sym__space] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(372),
  },
  [97] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(385),
  },
  [98] = {
    [anon_sym_COLON_EQ] = ACTIONS(387),
    [anon_sym_AMP_AMP] = ACTIONS(387),
    [anon_sym_DASH_EQ] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(389),
    [anon_sym_PERCENT] = ACTIONS(389),
    [anon_sym_GT_EQ] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_PLUS_PLUS] = ACTIONS(387),
    [anon_sym_PERCENT_EQ] = ACTIONS(387),
    [anon_sym_LT_LT_EQ] = ACTIONS(387),
    [anon_sym_PIPE_EQ] = ACTIONS(387),
    [anon_sym_DOT] = ACTIONS(387),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_AMP] = ACTIONS(389),
    [anon_sym_PIPE_PIPE] = ACTIONS(387),
    [anon_sym_BANG_EQ] = ACTIONS(387),
    [anon_sym_LT_LT] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_LT_EQ] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_DASH_DASH] = ACTIONS(389),
    [anon_sym_AMP_EQ] = ACTIONS(387),
    [sym__space] = ACTIONS(387),
    [anon_sym_STAR_EQ] = ACTIONS(387),
    [anon_sym_CARET_EQ] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_EQ_EQ] = ACTIONS(387),
    [anon_sym_PLUS_EQ] = ACTIONS(387),
    [anon_sym_CARET] = ACTIONS(389),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_LT] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_SLASH_EQ] = ACTIONS(387),
    [anon_sym_GT_GT_EQ] = ACTIONS(387),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(389),
  },
  [99] = {
    [sym_static_assignment] = STATE(136),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_COLON_EQ] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(391),
  },
  [100] = {
    [anon_sym_COLON_EQ] = ACTIONS(393),
    [anon_sym_AMP_AMP] = ACTIONS(393),
    [anon_sym_DASH_EQ] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_PLUS_PLUS] = ACTIONS(393),
    [anon_sym_PERCENT_EQ] = ACTIONS(393),
    [anon_sym_LT_LT_EQ] = ACTIONS(393),
    [anon_sym_PIPE_EQ] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_PIPE_PIPE] = ACTIONS(393),
    [anon_sym_BANG_EQ] = ACTIONS(393),
    [anon_sym_LT_LT] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_DASH_DASH] = ACTIONS(395),
    [anon_sym_AMP_EQ] = ACTIONS(393),
    [sym__space] = ACTIONS(393),
    [anon_sym_STAR_EQ] = ACTIONS(393),
    [anon_sym_CARET_EQ] = ACTIONS(393),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [anon_sym_PLUS_EQ] = ACTIONS(393),
    [anon_sym_CARET] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_SLASH_EQ] = ACTIONS(393),
    [anon_sym_GT_GT_EQ] = ACTIONS(393),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(395),
  },
  [101] = {
    [aux_sym_string_repeat1] = STATE(101),
    [sym__comment] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(397),
    [sym__space] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(399),
  },
  [102] = {
    [anon_sym_switch] = ACTIONS(402),
    [anon_sym_method] = ACTIONS(402),
    [anon_sym_while] = ACTIONS(402),
    [sym__space] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(402),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(402),
    [anon_sym_module] = ACTIONS(402),
    [anon_sym_function] = ACTIONS(402),
    [anon_sym_if] = ACTIONS(402),
  },
  [103] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(404),
  },
  [104] = {
    [sym_static_assignment] = STATE(137),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_COLON_EQ] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(406),
  },
  [105] = {
    [aux_sym_enum_definition_repeat1] = STATE(140),
    [anon_sym_RPAREN] = ACTIONS(408),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(410),
  },
  [106] = {
    [anon_sym_COLON_EQ] = ACTIONS(412),
    [anon_sym_AMP_EQ] = ACTIONS(412),
    [sym__space] = ACTIONS(412),
    [anon_sym_STAR_EQ] = ACTIONS(412),
    [anon_sym_CARET_EQ] = ACTIONS(412),
    [anon_sym_DASH_EQ] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(412),
    [anon_sym_PERCENT_EQ] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_PIPE_EQ] = ACTIONS(412),
    [anon_sym_LT_LT_EQ] = ACTIONS(412),
    [anon_sym_PLUS_EQ] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_SLASH_EQ] = ACTIONS(412),
    [anon_sym_GT_GT_EQ] = ACTIONS(412),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym_collection] = STATE(51),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [sym_group_expression] = STATE(29),
    [sym__assignment_or_collection_or_value] = STATE(141),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_assignment_expression] = STATE(141),
    [sym__collection_or_value] = STATE(51),
    [sym_character] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(13),
    [sym_integer] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(39),
    [sym_float] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym_binary] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(39),
    [sym_long] = ACTIONS(13),
  },
  [108] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(228),
  },
  [109] = {
    [sym_type] = STATE(143),
    [sym__base_type] = STATE(144),
    [sym_primitive_type] = STATE(144),
    [sym__comma_list_types] = STATE(145),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [110] = {
    [sym_return_list] = STATE(146),
    [anon_sym_DOT] = ACTIONS(420),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(236),
  },
  [111] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(420),
  },
  [112] = {
    [sym_collection] = STATE(147),
    [sym__value] = STATE(147),
    [sym__number] = STATE(147),
    [sym_group_expression] = STATE(147),
    [sym__literal] = STATE(147),
    [sym_string] = STATE(147),
    [sym__collection_or_value] = STATE(147),
    [sym_character] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_hex] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(422),
    [sym_integer] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_identifier] = ACTIONS(424),
    [sym_float] = ACTIONS(422),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(342),
    [sym_null] = ACTIONS(424),
    [sym_binary] = ACTIONS(422),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(424),
    [sym_long] = ACTIONS(422),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_DOT] = ACTIONS(391),
  },
  [114] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(426),
  },
  [115] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
  },
  [116] = {
    [aux_sym_type_repeat1] = STATE(116),
    [sym_pointer] = STATE(116),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(434),
    [sym_identifier] = ACTIONS(437),
  },
  [117] = {
    [sym_array] = STATE(118),
    [aux_sym_type_repeat2] = STATE(118),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(439),
  },
  [118] = {
    [sym_array] = STATE(118),
    [aux_sym_type_repeat2] = STATE(118),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(444),
  },
  [119] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(446),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [sym_parameter_list] = STATE(150),
    [sym_return_list] = STATE(146),
    [anon_sym_DOT] = ACTIONS(420),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(236),
  },
  [121] = {
    [aux_sym_assignment_expression_repeat1] = STATE(121),
    [anon_sym_PIPE_EQ] = ACTIONS(448),
    [anon_sym_COLON_EQ] = ACTIONS(448),
    [anon_sym_PLUS_EQ] = ACTIONS(448),
    [anon_sym_AMP_EQ] = ACTIONS(448),
    [sym__space] = ACTIONS(450),
    [anon_sym_STAR_EQ] = ACTIONS(448),
    [anon_sym_CARET_EQ] = ACTIONS(448),
    [anon_sym_DASH_EQ] = ACTIONS(448),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [anon_sym_GT_GT_EQ] = ACTIONS(448),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(448),
    [anon_sym_LT_LT_EQ] = ACTIONS(448),
  },
  [122] = {
    [sym_collection] = STATE(151),
    [sym__value] = STATE(151),
    [sym__number] = STATE(151),
    [sym_group_expression] = STATE(151),
    [sym__literal] = STATE(151),
    [sym_string] = STATE(151),
    [sym__collection_or_value] = STATE(151),
    [sym_character] = STATE(151),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_hex] = ACTIONS(453),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(453),
    [sym_integer] = ACTIONS(455),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_identifier] = ACTIONS(455),
    [sym_float] = ACTIONS(453),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(342),
    [sym_null] = ACTIONS(455),
    [sym_binary] = ACTIONS(453),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(455),
    [sym_long] = ACTIONS(453),
  },
  [123] = {
    [sym_collection] = STATE(51),
    [sym__value] = STATE(29),
    [sym__number] = STATE(29),
    [sym_group_expression] = STATE(29),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(152),
    [sym__assignment_or_collection_or_value] = STATE(65),
    [sym__literal] = STATE(29),
    [sym_string] = STATE(29),
    [sym_assignment_expression] = STATE(65),
    [sym__collection_or_value] = STATE(51),
    [sym_character] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_hex] = ACTIONS(13),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(13),
    [sym_integer] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(39),
    [sym_float] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(53),
    [sym_null] = ACTIONS(39),
    [sym_binary] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(39),
    [sym_long] = ACTIONS(13),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(457),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(457),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
  },
  [125] = {
    [anon_sym_end] = ACTIONS(356),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [anon_sym_while] = ACTIONS(356),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(354),
    [anon_sym_case] = ACTIONS(356),
    [sym_double] = ACTIONS(354),
    [sym_integer] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(356),
    [anon_sym_section] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [anon_sym_if] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(354),
    [anon_sym_goto] = ACTIONS(356),
    [anon_sym_switch] = ACTIONS(356),
    [sym_float] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_return] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(354),
    [sym_null] = ACTIONS(356),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(354),
    [anon_sym_default] = ACTIONS(356),
    [sym_oct] = ACTIONS(356),
    [sym_long] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
  },
  [126] = {
    [sym_string] = STATE(153),
    [sym__value] = STATE(153),
    [sym__number] = STATE(153),
    [sym_group_expression] = STATE(153),
    [sym_character] = STATE(153),
    [sym__literal] = STATE(153),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_float] = ACTIONS(459),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [sym_hex] = ACTIONS(459),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(459),
    [sym_null] = ACTIONS(461),
    [sym_integer] = ACTIONS(461),
    [sym_binary] = ACTIONS(459),
    [anon_sym_LPAREN] = ACTIONS(178),
    [sym_oct] = ACTIONS(461),
    [sym_identifier] = ACTIONS(461),
    [sym_long] = ACTIONS(459),
    [sym__comment] = ACTIONS(3),
  },
  [127] = {
    [anon_sym_RPAREN] = ACTIONS(463),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(204),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(204),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_DOT] = ACTIONS(204),
  },
  [130] = {
    [aux_sym_string_repeat1] = STATE(101),
    [sym__comment] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(467),
    [sym__space] = ACTIONS(104),
    [aux_sym_string_token1] = ACTIONS(210),
  },
  [131] = {
    [anon_sym_SQUOTE] = ACTIONS(469),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [132] = {
    [anon_sym_COLON_EQ] = ACTIONS(471),
    [anon_sym_AMP_AMP] = ACTIONS(471),
    [anon_sym_DASH_EQ] = ACTIONS(471),
    [anon_sym_GT_GT] = ACTIONS(473),
    [anon_sym_PERCENT] = ACTIONS(473),
    [anon_sym_GT_EQ] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_PLUS_PLUS] = ACTIONS(471),
    [anon_sym_PERCENT_EQ] = ACTIONS(471),
    [anon_sym_LT_LT_EQ] = ACTIONS(471),
    [anon_sym_PIPE_EQ] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_AMP] = ACTIONS(473),
    [anon_sym_PIPE_PIPE] = ACTIONS(471),
    [anon_sym_BANG_EQ] = ACTIONS(471),
    [anon_sym_LT_LT] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_LT_EQ] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_DASH_DASH] = ACTIONS(473),
    [anon_sym_AMP_EQ] = ACTIONS(471),
    [sym__space] = ACTIONS(471),
    [anon_sym_STAR_EQ] = ACTIONS(471),
    [anon_sym_CARET_EQ] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_EQ_EQ] = ACTIONS(471),
    [anon_sym_PLUS_EQ] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [anon_sym_LT] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_SLASH_EQ] = ACTIONS(471),
    [anon_sym_GT_GT_EQ] = ACTIONS(471),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(473),
  },
  [133] = {
    [sym_type] = STATE(27),
    [sym_variable_definition] = STATE(158),
    [sym__base_type] = STATE(32),
    [sym_access_control] = STATE(95),
    [sym_primitive_type] = STATE(32),
    [anon_sym_u8] = ACTIONS(5),
    [sym_readonly] = ACTIONS(35),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(184),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_private] = ACTIONS(184),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(184),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [134] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(159),
    [anon_sym_RPAREN] = ACTIONS(475),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(378),
  },
  [135] = {
    [anon_sym_returns] = ACTIONS(477),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(477),
  },
  [136] = {
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(479),
  },
  [137] = {
    [anon_sym_RPAREN] = ACTIONS(481),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(481),
  },
  [138] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(483),
    [sym__comment] = ACTIONS(3),
  },
  [139] = {
    [sym__enum_element] = STATE(161),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(222),
    [sym__comment] = ACTIONS(3),
  },
  [140] = {
    [aux_sym_enum_definition_repeat1] = STATE(163),
    [anon_sym_RPAREN] = ACTIONS(485),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(410),
  },
  [141] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(487),
  },
  [142] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(487),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(489),
  },
  [143] = {
    [aux_sym__comma_list_types_repeat1] = STATE(165),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(494),
  },
  [144] = {
    [aux_sym_type_repeat1] = STATE(166),
    [sym_pointer] = STATE(166),
    [sym_array] = STATE(167),
    [aux_sym_type_repeat2] = STATE(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_DOT] = ACTIONS(496),
  },
  [145] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(498),
  },
  [146] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(500),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(502),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_DOT] = ACTIONS(502),
  },
  [148] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(504),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(506),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_DOT] = ACTIONS(504),
  },
  [149] = {
    [sym_static_assignment] = STATE(168),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_COLON_EQ] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(479),
  },
  [150] = {
    [sym_return_list] = STATE(169),
    [anon_sym_DOT] = ACTIONS(500),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(236),
  },
  [151] = {
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
  },
  [152] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(510),
  },
  [153] = {
    [anon_sym_RPAREN] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [154] = {
    [anon_sym_end] = ACTIONS(473),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_while] = ACTIONS(473),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(471),
    [anon_sym_case] = ACTIONS(473),
    [sym_double] = ACTIONS(471),
    [sym_integer] = ACTIONS(473),
    [anon_sym_LPAREN] = ACTIONS(473),
    [anon_sym_section] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
    [anon_sym_if] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_goto] = ACTIONS(473),
    [anon_sym_switch] = ACTIONS(473),
    [sym_float] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_return] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(471),
    [sym_null] = ACTIONS(473),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(471),
    [anon_sym_default] = ACTIONS(473),
    [sym_oct] = ACTIONS(473),
    [sym_long] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
  },
  [155] = {
    [anon_sym_COLON_EQ] = ACTIONS(514),
    [anon_sym_AMP_AMP] = ACTIONS(514),
    [anon_sym_DASH_EQ] = ACTIONS(514),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_GT_EQ] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(514),
    [anon_sym_PERCENT_EQ] = ACTIONS(514),
    [anon_sym_LT_LT_EQ] = ACTIONS(514),
    [anon_sym_PIPE_EQ] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_AMP] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(514),
    [anon_sym_LT_LT] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_LT_EQ] = ACTIONS(514),
    [anon_sym_GT] = ACTIONS(516),
    [anon_sym_DASH_DASH] = ACTIONS(516),
    [anon_sym_AMP_EQ] = ACTIONS(514),
    [sym__space] = ACTIONS(514),
    [anon_sym_STAR_EQ] = ACTIONS(514),
    [anon_sym_CARET_EQ] = ACTIONS(514),
    [anon_sym_DASH] = ACTIONS(516),
    [anon_sym_EQ_EQ] = ACTIONS(514),
    [anon_sym_PLUS_EQ] = ACTIONS(514),
    [anon_sym_CARET] = ACTIONS(516),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_SLASH_EQ] = ACTIONS(514),
    [anon_sym_GT_GT_EQ] = ACTIONS(514),
    [sym__comment] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(516),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(393),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(393),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(387),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(387),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_DOT] = ACTIONS(387),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(518),
  },
  [159] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(159),
    [anon_sym_RPAREN] = ACTIONS(518),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(520),
  },
  [160] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(523),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(525),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(525),
  },
  [162] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(527),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [aux_sym_enum_definition_repeat1] = STATE(163),
    [anon_sym_RPAREN] = ACTIONS(525),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(529),
  },
  [164] = {
    [sym_type] = STATE(173),
    [sym__base_type] = STATE(144),
    [sym_primitive_type] = STATE(144),
    [anon_sym_u8] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(5),
    [anon_sym_s32] = ACTIONS(5),
    [anon_sym_i16] = ACTIONS(5),
    [anon_sym_u32] = ACTIONS(5),
    [sym_identifier] = ACTIONS(416),
    [anon_sym_f64] = ACTIONS(5),
    [anon_sym_i64] = ACTIONS(5),
    [anon_sym_i8] = ACTIONS(5),
    [anon_sym_u16] = ACTIONS(5),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(5),
    [anon_sym_f32] = ACTIONS(5),
    [anon_sym_i32] = ACTIONS(5),
    [anon_sym_u64] = ACTIONS(5),
  },
  [165] = {
    [aux_sym__comma_list_types_repeat1] = STATE(174),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_DOT] = ACTIONS(532),
  },
  [166] = {
    [aux_sym_type_repeat1] = STATE(175),
    [sym_pointer] = STATE(175),
    [sym_array] = STATE(176),
    [aux_sym_type_repeat2] = STATE(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_DOT] = ACTIONS(534),
  },
  [167] = {
    [sym_array] = STATE(177),
    [aux_sym_type_repeat2] = STATE(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_DOT] = ACTIONS(534),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(536),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_DOT] = ACTIONS(536),
  },
  [169] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(538),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(412),
  },
  [171] = {
    [anon_sym_end] = ACTIONS(516),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [anon_sym_while] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(514),
    [anon_sym_case] = ACTIONS(516),
    [sym_double] = ACTIONS(514),
    [sym_integer] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(516),
    [anon_sym_section] = ACTIONS(516),
    [sym_identifier] = ACTIONS(516),
    [anon_sym_if] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(514),
    [anon_sym_goto] = ACTIONS(516),
    [anon_sym_switch] = ACTIONS(516),
    [sym_float] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(514),
    [anon_sym_return] = ACTIONS(516),
    [anon_sym_LBRACE] = ACTIONS(514),
    [sym_null] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
    [sym_binary] = ACTIONS(514),
    [anon_sym_default] = ACTIONS(516),
    [sym_oct] = ACTIONS(516),
    [sym_long] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(514),
  },
  [172] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(540),
  },
  [173] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
  },
  [174] = {
    [aux_sym__comma_list_types_repeat1] = STATE(174),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_DOT] = ACTIONS(542),
  },
  [175] = {
    [aux_sym_type_repeat1] = STATE(175),
    [sym_pointer] = STATE(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
  },
  [176] = {
    [sym_array] = STATE(177),
    [aux_sym_type_repeat2] = STATE(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(136),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(547),
    [anon_sym_DOT] = ACTIONS(547),
  },
  [177] = {
    [sym_array] = STATE(177),
    [aux_sym_type_repeat2] = STATE(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(441),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(549),
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
  [13] = {.count = 1, .reusable = true}, SHIFT(29),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = false}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = false}, SHIFT(13),
  [31] = {.count = 1, .reusable = false}, SHIFT(14),
  [33] = {.count = 1, .reusable = false}, SHIFT(15),
  [35] = {.count = 1, .reusable = false}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = false}, SHIFT(29),
  [41] = {.count = 1, .reusable = false}, SHIFT(18),
  [43] = {.count = 1, .reusable = false}, SHIFT(19),
  [45] = {.count = 1, .reusable = false}, SHIFT(20),
  [47] = {.count = 1, .reusable = false}, SHIFT(21),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [51] = {.count = 1, .reusable = false}, SHIFT(22),
  [53] = {.count = 1, .reusable = true}, SHIFT(23),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = false}, SHIFT(32),
  [63] = {.count = 1, .reusable = false}, SHIFT(41),
  [65] = {.count = 1, .reusable = true}, SHIFT(42),
  [67] = {.count = 1, .reusable = false}, SHIFT(42),
  [69] = {.count = 1, .reusable = true}, SHIFT(41),
  [71] = {.count = 1, .reusable = false}, SHIFT(45),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [77] = {.count = 2, .reusable = true}, REDUCE(sym__value, 1), SHIFT(46),
  [80] = {.count = 1, .reusable = true}, SHIFT(47),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 1),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [92] = {.count = 1, .reusable = true}, SHIFT(52),
  [94] = {.count = 1, .reusable = false}, SHIFT(52),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 1),
  [98] = {.count = 1, .reusable = false}, SHIFT(53),
  [100] = {.count = 1, .reusable = false}, SHIFT(54),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [104] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [106] = {.count = 1, .reusable = true}, SHIFT(57),
  [108] = {.count = 1, .reusable = false}, SHIFT(58),
  [110] = {.count = 1, .reusable = false}, SHIFT(59),
  [112] = {.count = 1, .reusable = false}, SHIFT(61),
  [114] = {.count = 1, .reusable = true}, SHIFT(63),
  [116] = {.count = 1, .reusable = true}, SHIFT(66),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_definition, 1),
  [120] = {.count = 1, .reusable = false}, SHIFT(67),
  [122] = {.count = 1, .reusable = false}, SHIFT(68),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_statement, 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [128] = {.count = 1, .reusable = false}, SHIFT(69),
  [130] = {.count = 1, .reusable = true}, SHIFT(69),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [134] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [136] = {.count = 1, .reusable = true}, SHIFT(73),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [140] = {.count = 1, .reusable = true}, SHIFT(72),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [144] = {.count = 1, .reusable = false}, SHIFT(76),
  [146] = {.count = 1, .reusable = true}, SHIFT(78),
  [148] = {.count = 1, .reusable = true}, SHIFT(79),
  [150] = {.count = 1, .reusable = true}, SHIFT(81),
  [152] = {.count = 1, .reusable = false}, SHIFT(81),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_declaration_definition, 2),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 2),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [164] = {.count = 1, .reusable = true}, SHIFT(84),
  [166] = {.count = 1, .reusable = false}, SHIFT(84),
  [168] = {.count = 1, .reusable = true}, SHIFT(85),
  [170] = {.count = 1, .reusable = true}, SHIFT(87),
  [172] = {.count = 1, .reusable = true}, SHIFT(89),
  [174] = {.count = 1, .reusable = true}, SHIFT(88),
  [176] = {.count = 1, .reusable = false}, SHIFT(89),
  [178] = {.count = 1, .reusable = false}, SHIFT(37),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 2),
  [182] = {.count = 1, .reusable = false}, SHIFT(90),
  [184] = {.count = 1, .reusable = false}, SHIFT(91),
  [186] = {.count = 1, .reusable = true}, SHIFT(92),
  [188] = {.count = 1, .reusable = true}, SHIFT(46),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(98),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_end_statement, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [202] = {.count = 1, .reusable = false}, SHIFT(99),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [208] = {.count = 1, .reusable = true}, SHIFT(100),
  [210] = {.count = 1, .reusable = false}, SHIFT(101),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [214] = {.count = 1, .reusable = false}, SHIFT(102),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 2),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 2),
  [222] = {.count = 1, .reusable = false}, SHIFT(104),
  [224] = {.count = 1, .reusable = true}, SHIFT(106),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(107),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym__sentence, 2),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym__sentence, 2),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 2),
  [236] = {.count = 1, .reusable = true}, SHIFT(109),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [240] = {.count = 1, .reusable = true}, SHIFT(112),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [273] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [285] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [288] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [300] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [303] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [306] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [309] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [312] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [317] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [324] = {.count = 1, .reusable = true}, SHIFT(114),
  [326] = {.count = 1, .reusable = true}, SHIFT(115),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [330] = {.count = 1, .reusable = false}, SHIFT(120),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(121),
  [338] = {.count = 1, .reusable = true}, SHIFT(124),
  [340] = {.count = 1, .reusable = false}, SHIFT(124),
  [342] = {.count = 1, .reusable = true}, SHIFT(123),
  [344] = {.count = 1, .reusable = true}, SHIFT(125),
  [346] = {.count = 1, .reusable = true}, SHIFT(127),
  [348] = {.count = 1, .reusable = false}, SHIFT(127),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [358] = {.count = 1, .reusable = true}, SHIFT(128),
  [360] = {.count = 1, .reusable = false}, SHIFT(128),
  [362] = {.count = 1, .reusable = true}, SHIFT(129),
  [364] = {.count = 1, .reusable = false}, SHIFT(130),
  [366] = {.count = 1, .reusable = true}, SHIFT(131),
  [368] = {.count = 1, .reusable = false}, SHIFT(131),
  [370] = {.count = 1, .reusable = true}, SHIFT(132),
  [372] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [378] = {.count = 1, .reusable = true}, SHIFT(133),
  [380] = {.count = 1, .reusable = true}, SHIFT(135),
  [382] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(46),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [399] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(101),
  [402] = {.count = 1, .reusable = true}, SHIFT(53),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [408] = {.count = 1, .reusable = true}, SHIFT(138),
  [410] = {.count = 1, .reusable = true}, SHIFT(139),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [416] = {.count = 1, .reusable = false}, SHIFT(144),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 3),
  [422] = {.count = 1, .reusable = true}, SHIFT(147),
  [424] = {.count = 1, .reusable = false}, SHIFT(147),
  [426] = {.count = 1, .reusable = true}, SHIFT(148),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [432] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(72),
  [437] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(73),
  [444] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [446] = {.count = 1, .reusable = false}, SHIFT(149),
  [448] = {.count = 1, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2),
  [450] = {.count = 2, .reusable = true}, REDUCE(aux_sym_assignment_expression_repeat1, 2), SHIFT_REPEAT(121),
  [453] = {.count = 1, .reusable = true}, SHIFT(151),
  [455] = {.count = 1, .reusable = false}, SHIFT(151),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [459] = {.count = 1, .reusable = true}, SHIFT(153),
  [461] = {.count = 1, .reusable = false}, SHIFT(153),
  [463] = {.count = 1, .reusable = true}, SHIFT(154),
  [465] = {.count = 1, .reusable = true}, SHIFT(155),
  [467] = {.count = 1, .reusable = true}, SHIFT(156),
  [469] = {.count = 1, .reusable = true}, SHIFT(157),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [483] = {.count = 1, .reusable = false}, SHIFT(160),
  [485] = {.count = 1, .reusable = true}, SHIFT(162),
  [487] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(107),
  [492] = {.count = 1, .reusable = true}, SHIFT(164),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 4),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 4),
  [510] = {.count = 1, .reusable = true}, SHIFT(170),
  [512] = {.count = 1, .reusable = true}, SHIFT(171),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [518] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [520] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(133),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 5),
  [525] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [527] = {.count = 1, .reusable = false}, SHIFT(172),
  [529] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(139),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 5),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [542] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [544] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(164),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [549] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
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
