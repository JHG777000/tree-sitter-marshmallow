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
#define STATE_COUNT 281
#define SYMBOL_COUNT 174
#define ALIAS_COUNT 0
#define TOKEN_COUNT 99
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym__space = 1,
  sym__comment = 2,
  anon_sym_COMMA = 3,
  sym_readonly = 4,
  anon_sym_private = 5,
  anon_sym_protected = 6,
  anon_sym_publish = 7,
  anon_sym_end = 8,
  anon_sym_module = 9,
  anon_sym_function = 10,
  anon_sym_method = 11,
  anon_sym_if = 12,
  anon_sym_while = 13,
  anon_sym_switch = 14,
  anon_sym_case = 15,
  anon_sym_default = 16,
  anon_sym_DOT = 17,
  anon_sym_enum = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_returns = 21,
  anon_sym_i8 = 22,
  anon_sym_i16 = 23,
  anon_sym_i32 = 24,
  anon_sym_i64 = 25,
  anon_sym_u8 = 26,
  anon_sym_u16 = 27,
  anon_sym_u32 = 28,
  anon_sym_u64 = 29,
  anon_sym_f32 = 30,
  anon_sym_f64 = 31,
  anon_sym_s8 = 32,
  anon_sym_s16 = 33,
  anon_sym_s32 = 34,
  anon_sym_STAR = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  sym_is_declare = 38,
  sym_is_external = 39,
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
  sym__comma_list_collection_or_value = 101,
  sym__comma_list_types = 102,
  sym_access_control = 103,
  sym_end_module = 104,
  sym_end_function = 105,
  sym_end_method = 106,
  sym_end_if = 107,
  sym_end_while = 108,
  sym_end_switch = 109,
  sym_end_case = 110,
  sym_end_default = 111,
  sym__end_function = 112,
  sym_module_definition = 113,
  sym__definitions = 114,
  sym_compound_macro_block = 115,
  sym_end_compound_macro = 116,
  sym_compound_macro = 117,
  sym__enum_element = 118,
  sym_enum_definition = 119,
  sym_is_function = 120,
  sym_is_method = 121,
  sym_function_signature = 122,
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
  sym__statement = 133,
  sym__control_flow_statement = 134,
  sym_goto_statement = 135,
  sym_section_statement = 136,
  sym_single_line_if_statement = 137,
  sym_if_statement = 138,
  sym_while_statement = 139,
  sym_switch_statement = 140,
  sym_case_statement = 141,
  sym_default_statement = 142,
  sym__variable_statement = 143,
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
  aux_sym__comma_list_variables_repeat1 = 163,
  aux_sym__comma_list_collection_or_value_repeat1 = 164,
  aux_sym__comma_list_types_repeat1 = 165,
  aux_sym_module_definition_repeat1 = 166,
  aux_sym_compound_macro_block_repeat1 = 167,
  aux_sym_compound_macro_repeat1 = 168,
  aux_sym_enum_definition_repeat1 = 169,
  aux_sym_type_repeat1 = 170,
  aux_sym_type_repeat2 = 171,
  aux_sym_switch_statement_repeat1 = 172,
  aux_sym_string_repeat1 = 173,
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
  [anon_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym__comma_list_collection_or_value] = "_comma_list_collection_or_value",
  [sym__comma_list_types] = "_comma_list_types",
  [sym_access_control] = "access_control",
  [sym_end_module] = "end_module",
  [sym_end_function] = "end_function",
  [sym_end_method] = "end_method",
  [sym_end_if] = "end_if",
  [sym_end_while] = "end_while",
  [sym_end_switch] = "end_switch",
  [sym_end_case] = "end_case",
  [sym_end_default] = "end_default",
  [sym__end_function] = "_end_function",
  [sym_module_definition] = "module_definition",
  [sym__definitions] = "_definitions",
  [sym_compound_macro_block] = "compound_macro_block",
  [sym_end_compound_macro] = "end_compound_macro",
  [sym_compound_macro] = "compound_macro",
  [sym__enum_element] = "_enum_element",
  [sym_enum_definition] = "enum_definition",
  [sym_is_function] = "is_function",
  [sym_is_method] = "is_method",
  [sym_function_signature] = "function_signature",
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
  [sym__statement] = "_statement",
  [sym__control_flow_statement] = "_control_flow_statement",
  [sym_goto_statement] = "goto_statement",
  [sym_section_statement] = "section_statement",
  [sym_single_line_if_statement] = "single_line_if_statement",
  [sym_if_statement] = "if_statement",
  [sym_while_statement] = "while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_case_statement] = "case_statement",
  [sym_default_statement] = "default_statement",
  [sym__variable_statement] = "_variable_statement",
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
  [aux_sym__comma_list_collection_or_value_repeat1] = "_comma_list_collection_or_value_repeat1",
  [aux_sym__comma_list_types_repeat1] = "_comma_list_types_repeat1",
  [aux_sym_module_definition_repeat1] = "module_definition_repeat1",
  [aux_sym_compound_macro_block_repeat1] = "compound_macro_block_repeat1",
  [aux_sym_compound_macro_repeat1] = "compound_macro_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
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
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
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
  [anon_sym_DOT] = {
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
  [sym__comma_list_collection_or_value] = {
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
  [sym_end_module] = {
    .visible = true,
    .named = true,
  },
  [sym_end_function] = {
    .visible = true,
    .named = true,
  },
  [sym_end_method] = {
    .visible = true,
    .named = true,
  },
  [sym_end_if] = {
    .visible = true,
    .named = true,
  },
  [sym_end_while] = {
    .visible = true,
    .named = true,
  },
  [sym_end_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_end_case] = {
    .visible = true,
    .named = true,
  },
  [sym_end_default] = {
    .visible = true,
    .named = true,
  },
  [sym__end_function] = {
    .visible = false,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__definitions] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_macro_block] = {
    .visible = true,
    .named = true,
  },
  [sym_end_compound_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_macro] = {
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
  [sym_function_signature] = {
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
  [sym__statement] = {
    .visible = false,
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
  [sym__variable_statement] = {
    .visible = false,
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
  [aux_sym__comma_list_collection_or_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comma_list_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_macro_block_repeat1] = {
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
  [aux_sym_switch_statement_repeat1] = {
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
      if (lookahead == '=')
        ADVANCE(52);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(53);
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
      ACCEPT_TOKEN(aux_sym_character_token1);
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
      ACCEPT_TOKEN(aux_sym_character_token1);
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
      ACCEPT_TOKEN(aux_sym_character_token1);
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
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '0')
        ADVANCE(69);
      if (lookahead == '\\')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'b')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(73);
      if (lookahead == 'n')
        ADVANCE(74);
      if (lookahead == 'r')
        ADVANCE(75);
      if (lookahead == 't')
        ADVANCE(76);
      if (lookahead == 'v')
        ADVANCE(77);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(78);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(80);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'n')
        ADVANCE(81);
      if (lookahead == 'x')
        ADVANCE(82);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '3')
        ADVANCE(83);
      if (lookahead == '6')
        ADVANCE(84);
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'o')
        ADVANCE(86);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(87);
      if (lookahead == '3')
        ADVANCE(88);
      if (lookahead == '6')
        ADVANCE(89);
      if (lookahead == '8')
        ADVANCE(90);
      if (lookahead == 'f')
        ADVANCE(91);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'u')
        ADVANCE(94);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'r')
        ADVANCE(95);
      if (lookahead == 'u')
        ADVANCE(96);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(98);
      if (lookahead == '3')
        ADVANCE(99);
      if (lookahead == '8')
        ADVANCE(100);
      if (lookahead == 'e')
        ADVANCE(101);
      if (lookahead == 'w')
        ADVANCE(102);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(103);
      if (lookahead == '3')
        ADVANCE(104);
      if (lookahead == '6')
        ADVANCE(105);
      if (lookahead == '8')
        ADVANCE(106);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'h')
        ADVANCE(107);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(108);
      if (lookahead == '|')
        ADVANCE(109);
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
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
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
        ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '.')
        ADVANCE(110);
      if (lookahead == 'f')
        ADVANCE(112);
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
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 53:
      if (lookahead == '+')
        ADVANCE(113);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(114);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
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
        ADVANCE(116);
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
        ADVANCE(117);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 79:
      if (lookahead == 's')
        ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'f')
        ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(121);
      if (lookahead == 'u')
        ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == '2')
        ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == '4')
        ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == '6')
        ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == '2')
        ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == '4')
        ADVANCE(130);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 92:
      if (lookahead == 't')
        ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'd')
        ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'i')
        ADVANCE(134);
      if (lookahead == 'o')
        ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'b')
        ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(137);
      if (lookahead == 't')
        ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == '6')
        ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == '2')
        ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(141);
      END_STATE();
    case 102:
      if (lookahead == 'i')
        ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == '6')
        ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == '2')
        ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == '4')
        ADVANCE(145);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 107:
      if (lookahead == 'i')
        ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 110:
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 112:
      if (lookahead == ')')
        ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == '+')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(148);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(149);
      END_STATE();
    case 119:
      if (lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'a')
        ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 122:
      if (lookahead == 'm')
        ADVANCE(152);
      END_STATE();
    case 123:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 126:
      if (lookahead == 'c')
        ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 'o')
        ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 131:
      if (lookahead == 'h')
        ADVANCE(156);
      END_STATE();
    case 132:
      if (lookahead == 'u')
        ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'l')
        ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'v')
        ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'd')
        ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'u')
        ADVANCE(163);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 141:
      if (lookahead == 't')
        ADVANCE(164);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 146:
      if (lookahead == 'l')
        ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 150:
      if (lookahead == 'a')
        ADVANCE(167);
      END_STATE();
    case 151:
      if (lookahead == 'u')
        ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 153:
      if (lookahead == 'r')
        ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 't')
        ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 156:
      if (lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 157:
      if (lookahead == 'l')
        ADVANCE(172);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 159:
      if (lookahead == 'a')
        ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'i')
        ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'o')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'c')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'e')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'r')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'l')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'n')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'd')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'c')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 's')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'n')
        ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'n')
        ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'o')
        ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'h')
        ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 181:
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 'a')
        ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'o')
        ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(198);
      END_STATE();
    case 188:
      if (lookahead == 't')
        ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 'h')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 'l')
        ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 192:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 196:
      if (lookahead == 'l')
        ADVANCE(203);
      END_STATE();
    case 197:
      if (lookahead == 'n')
        ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 201:
      if (lookahead == 'y')
        ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 205:
      if (lookahead == 'd')
        ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 208:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'm')
        ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 209:
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 210:
      if (lookahead == '/')
        ADVANCE(56);
      END_STATE();
    case 211:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(56);
      END_STATE();
    case 213:
      if (lookahead == '(')
        ADVANCE(214);
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
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
        ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 217:
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
        ADVANCE(217);
      END_STATE();
    case 218:
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
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(218);
      END_STATE();
    case 219:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == ':')
        ADVANCE(220);
      if (lookahead == 'd')
        ADVANCE(221);
      if (lookahead == 'e')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 220:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 'x')
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
        ADVANCE(217);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(233);
      if (lookahead == '6')
        ADVANCE(234);
      if (lookahead == 'u')
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
        ADVANCE(217);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(236);
      if (lookahead == '3')
        ADVANCE(237);
      if (lookahead == '6')
        ADVANCE(238);
      if (lookahead == '8')
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
        ADVANCE(217);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(241);
      if (lookahead == 'u')
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
        ADVANCE(217);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(244);
      if (lookahead == '3')
        ADVANCE(245);
      if (lookahead == '8')
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
        ADVANCE(217);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(247);
      if (lookahead == '3')
        ADVANCE(248);
      if (lookahead == '6')
        ADVANCE(249);
      if (lookahead == '8')
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
        ADVANCE(217);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(217);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(252);
      if (lookahead == 'u')
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
        ADVANCE(217);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(217);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(217);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(217);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(217);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(217);
      END_STATE();
    case 239:
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
        ADVANCE(217);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(262);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(217);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(217);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(217);
      END_STATE();
    case 245:
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
        ADVANCE(217);
      END_STATE();
    case 246:
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
        ADVANCE(217);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(217);
      END_STATE();
    case 248:
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
        ADVANCE(217);
      END_STATE();
    case 249:
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
        ADVANCE(217);
      END_STATE();
    case 250:
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
        ADVANCE(217);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(217);
      END_STATE();
    case 252:
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
        ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(217);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 255:
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
        ADVANCE(217);
      END_STATE();
    case 256:
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
        ADVANCE(217);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(217);
      END_STATE();
    case 258:
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
        ADVANCE(217);
      END_STATE();
    case 259:
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
        ADVANCE(217);
      END_STATE();
    case 260:
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
        ADVANCE(217);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(217);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(217);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 264:
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
        ADVANCE(217);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(217);
      END_STATE();
    case 266:
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
        ADVANCE(217);
      END_STATE();
    case 267:
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
        ADVANCE(217);
      END_STATE();
    case 268:
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
        ADVANCE(217);
      END_STATE();
    case 269:
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
        ADVANCE(217);
      END_STATE();
    case 270:
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
        ADVANCE(217);
      END_STATE();
    case 271:
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
        ADVANCE(217);
      END_STATE();
    case 272:
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
        ADVANCE(217);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(217);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(217);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(217);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(217);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(217);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(217);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(217);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(217);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(217);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(217);
      END_STATE();
    case 288:
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
        ADVANCE(217);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(217);
      END_STATE();
    case 290:
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
        ADVANCE(217);
      END_STATE();
    case 291:
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
        ADVANCE(217);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 293:
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
        ADVANCE(217);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(217);
      END_STATE();
    case 295:
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
        ADVANCE(217);
      END_STATE();
    case 296:
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
        ADVANCE(217);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(217);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(217);
      END_STATE();
    case 299:
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
        ADVANCE(217);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 301:
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
        ADVANCE(217);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(217);
      END_STATE();
    case 303:
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
        ADVANCE(217);
      END_STATE();
    case 304:
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
        ADVANCE(217);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(217);
      END_STATE();
    case 306:
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
        ADVANCE(217);
      END_STATE();
    case 307:
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
        ADVANCE(217);
      END_STATE();
    case 308:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(233);
      if (lookahead == '6')
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
        ADVANCE(217);
      END_STATE();
    case 310:
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
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
        ADVANCE(217);
      END_STATE();
    case 311:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          lookahead != '%' &&
          (lookahead < '(' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 312:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 313:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(314);
      if (lookahead == 'd')
        ADVANCE(221);
      if (lookahead == 'e')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(318);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(320);
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
        ADVANCE(217);
      END_STATE();
    case 314:
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
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(236);
      if (lookahead == '3')
        ADVANCE(237);
      if (lookahead == '6')
        ADVANCE(238);
      if (lookahead == '8')
        ADVANCE(239);
      if (lookahead == 'f')
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
        ADVANCE(217);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(217);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(244);
      if (lookahead == '3')
        ADVANCE(245);
      if (lookahead == '8')
        ADVANCE(246);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead == 'w')
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
        ADVANCE(217);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(217);
      END_STATE();
    case 321:
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
        ADVANCE(217);
      END_STATE();
    case 322:
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
        ADVANCE(217);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(217);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(265);
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
        ADVANCE(217);
      END_STATE();
    case 325:
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
        ADVANCE(217);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(217);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(217);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(217);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(217);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(217);
      END_STATE();
    case 332:
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
        ADVANCE(217);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(217);
      END_STATE();
    case 334:
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
        ADVANCE(217);
      END_STATE();
    case 335:
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
        ADVANCE(217);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(217);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(217);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(217);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(217);
      END_STATE();
    case 340:
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
        ADVANCE(217);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(217);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(217);
      END_STATE();
    case 343:
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
        ADVANCE(217);
      END_STATE();
    case 344:
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
        ADVANCE(217);
      END_STATE();
    case 345:
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
        ADVANCE(217);
      END_STATE();
    case 346:
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
        ADVANCE(217);
      END_STATE();
    case 347:
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
        ADVANCE(217);
      END_STATE();
    case 348:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(314);
      if (lookahead == 'e')
        ADVANCE(349);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(318);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(320);
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
        ADVANCE(217);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(217);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(217);
      END_STATE();
    case 351:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 352:
      if (lookahead == '%')
        ADVANCE(353);
      if (lookahead == '&')
        ADVANCE(354);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(355);
      if (lookahead == '-')
        ADVANCE(356);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(357);
      if (lookahead == ':')
        ADVANCE(220);
      if (lookahead == '<')
        ADVANCE(358);
      if (lookahead == '>')
        ADVANCE(359);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(360);
      if (lookahead == '|')
        ADVANCE(361);
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
        ADVANCE(217);
      END_STATE();
    case 353:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 354:
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
        ADVANCE(217);
      END_STATE();
    case 355:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(52);
      END_STATE();
    case 356:
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(218);
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
        ADVANCE(217);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
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
        ADVANCE(217);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(78);
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
        ADVANCE(217);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(108);
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
        ADVANCE(217);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(116);
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
        ADVANCE(217);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(117);
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
        ADVANCE(217);
      END_STATE();
    case 364:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(366);
      if (lookahead == '/')
        ADVANCE(367);
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
    case 366:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(56);
      END_STATE();
    case 368:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(314);
      if (lookahead == 'n')
        ADVANCE(317);
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
        ADVANCE(217);
      END_STATE();
    case 369:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(370);
      if (lookahead == '/')
        ADVANCE(371);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(374);
      if (lookahead == '-')
        ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '"')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(377);
      if (lookahead == '-')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(374);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(373);
      END_STATE();
    case 379:
      if (lookahead == '!')
        ADVANCE(380);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(381);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(314);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(217);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 381:
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
        ADVANCE(217);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 383:
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
        ADVANCE(217);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(385);
      if (lookahead == 'f')
        ADVANCE(386);
      if (lookahead == 'm')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 385:
      if (lookahead == 'n')
        ADVANCE(388);
      END_STATE();
    case 386:
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 387:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 388:
      if (lookahead == 'd')
        ADVANCE(121);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(390);
      END_STATE();
    case 391:
      if (lookahead == '(')
        ADVANCE(214);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 392:
      if (lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 't')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'u')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'r')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'n')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 's')
        ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 399:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == ':')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 400:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == ':')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 401:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(314);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'g')
        ADVANCE(315);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(318);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(320);
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
        ADVANCE(217);
      END_STATE();
    case 402:
      if (lookahead == '!')
        ADVANCE(403);
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
        ADVANCE(220);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(404);
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
    case 403:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 404:
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 405:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 406:
      if (lookahead == '!')
        ADVANCE(403);
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
        ADVANCE(220);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(404);
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
    case 407:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 408:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(221);
      if (lookahead == 'e')
        ADVANCE(222);
      if (lookahead == 'f')
        ADVANCE(223);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead == 'm')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
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
        ADVANCE(217);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'c')
        ADVANCE(410);
      if (lookahead == 'd')
        ADVANCE(411);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 410:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 411:
      if (lookahead == 'e')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'f')
        ADVANCE(120);
      END_STATE();
    case 413:
      if (lookahead == '%')
        ADVANCE(353);
      if (lookahead == '&')
        ADVANCE(414);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(415);
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
        ADVANCE(220);
      if (lookahead == '<')
        ADVANCE(419);
      if (lookahead == '>')
        ADVANCE(420);
      if (lookahead == '^')
        ADVANCE(421);
      if (lookahead == '|')
        ADVANCE(422);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 414:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 415:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 416:
      if (lookahead == '=')
        ADVANCE(52);
      END_STATE();
    case 417:
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 418:
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 419:
      if (lookahead == '<')
        ADVANCE(423);
      END_STATE();
    case 420:
      if (lookahead == '>')
        ADVANCE(424);
      END_STATE();
    case 421:
      if (lookahead == '=')
        ADVANCE(78);
      END_STATE();
    case 422:
      if (lookahead == '=')
        ADVANCE(108);
      END_STATE();
    case 423:
      if (lookahead == '=')
        ADVANCE(116);
      END_STATE();
    case 424:
      if (lookahead == '=')
        ADVANCE(117);
      END_STATE();
    case 425:
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
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
  [1] = {.lex_state = 208},
  [2] = {.lex_state = 213},
  [3] = {.lex_state = 208},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 213},
  [6] = {.lex_state = 208},
  [7] = {.lex_state = 219},
  [8] = {.lex_state = 213},
  [9] = {.lex_state = 308},
  [10] = {.lex_state = 310},
  [11] = {.lex_state = 311},
  [12] = {.lex_state = 213},
  [13] = {.lex_state = 312},
  [14] = {.lex_state = 213},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 213},
  [17] = {.lex_state = 213},
  [18] = {.lex_state = 313},
  [19] = {.lex_state = 348},
  [20] = {.lex_state = 213},
  [21] = {.lex_state = 311},
  [22] = {.lex_state = 213},
  [23] = {.lex_state = 213},
  [24] = {.lex_state = 219},
  [25] = {.lex_state = 213},
  [26] = {.lex_state = 213},
  [27] = {.lex_state = 213},
  [28] = {.lex_state = 308},
  [29] = {.lex_state = 213},
  [30] = {.lex_state = 213},
  [31] = {.lex_state = 219},
  [32] = {.lex_state = 311},
  [33] = {.lex_state = 213},
  [34] = {.lex_state = 313},
  [35] = {.lex_state = 351},
  [36] = {.lex_state = 213},
  [37] = {.lex_state = 213},
  [38] = {.lex_state = 213},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 213},
  [41] = {.lex_state = 352},
  [42] = {.lex_state = 213},
  [43] = {.lex_state = 213},
  [44] = {.lex_state = 364},
  [45] = {.lex_state = 365},
  [46] = {.lex_state = 368},
  [47] = {.lex_state = 369},
  [48] = {.lex_state = 213},
  [49] = {.lex_state = 213},
  [50] = {.lex_state = 368},
  [51] = {.lex_state = 213},
  [52] = {.lex_state = 379},
  [53] = {.lex_state = 352},
  [54] = {.lex_state = 213},
  [55] = {.lex_state = 213},
  [56] = {.lex_state = 219},
  [57] = {.lex_state = 352},
  [58] = {.lex_state = 364},
  [59] = {.lex_state = 352},
  [60] = {.lex_state = 348},
  [61] = {.lex_state = 384},
  [62] = {.lex_state = 213},
  [63] = {.lex_state = 348},
  [64] = {.lex_state = 310},
  [65] = {.lex_state = 389},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 213},
  [68] = {.lex_state = 308},
  [69] = {.lex_state = 213},
  [70] = {.lex_state = 391},
  [71] = {.lex_state = 399},
  [72] = {.lex_state = 213},
  [73] = {.lex_state = 219},
  [74] = {.lex_state = 219},
  [75] = {.lex_state = 399},
  [76] = {.lex_state = 400},
  [77] = {.lex_state = 400},
  [78] = {.lex_state = 213},
  [79] = {.lex_state = 391},
  [80] = {.lex_state = 219},
  [81] = {.lex_state = 308},
  [82] = {.lex_state = 213},
  [83] = {.lex_state = 213},
  [84] = {.lex_state = 391},
  [85] = {.lex_state = 400},
  [86] = {.lex_state = 308},
  [87] = {.lex_state = 313},
  [88] = {.lex_state = 213},
  [89] = {.lex_state = 213},
  [90] = {.lex_state = 379},
  [91] = {.lex_state = 401},
  [92] = {.lex_state = 213},
  [93] = {.lex_state = 213},
  [94] = {.lex_state = 219},
  [95] = {.lex_state = 311},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 352},
  [98] = {.lex_state = 402},
  [99] = {.lex_state = 369},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 405},
  [103] = {.lex_state = 405},
  [104] = {.lex_state = 213},
  [105] = {.lex_state = 368},
  [106] = {.lex_state = 406},
  [107] = {.lex_state = 308},
  [108] = {.lex_state = 368},
  [109] = {.lex_state = 364},
  [110] = {.lex_state = 364},
  [111] = {.lex_state = 348},
  [112] = {.lex_state = 368},
  [113] = {.lex_state = 368},
  [114] = {.lex_state = 219},
  [115] = {.lex_state = 348},
  [116] = {.lex_state = 213},
  [117] = {.lex_state = 213},
  [118] = {.lex_state = 219},
  [119] = {.lex_state = 213},
  [120] = {.lex_state = 310},
  [121] = {.lex_state = 389},
  [122] = {.lex_state = 213},
  [123] = {.lex_state = 213},
  [124] = {.lex_state = 213},
  [125] = {.lex_state = 213},
  [126] = {.lex_state = 391},
  [127] = {.lex_state = 407},
  [128] = {.lex_state = 348},
  [129] = {.lex_state = 391},
  [130] = {.lex_state = 213},
  [131] = {.lex_state = 368},
  [132] = {.lex_state = 408},
  [133] = {.lex_state = 208},
  [134] = {.lex_state = 408},
  [135] = {.lex_state = 400},
  [136] = {.lex_state = 213},
  [137] = {.lex_state = 213},
  [138] = {.lex_state = 400},
  [139] = {.lex_state = 219},
  [140] = {.lex_state = 219},
  [141] = {.lex_state = 391},
  [142] = {.lex_state = 213},
  [143] = {.lex_state = 368},
  [144] = {.lex_state = 213},
  [145] = {.lex_state = 391},
  [146] = {.lex_state = 351},
  [147] = {.lex_state = 400},
  [148] = {.lex_state = 391},
  [149] = {.lex_state = 313},
  [150] = {.lex_state = 406},
  [151] = {.lex_state = 308},
  [152] = {.lex_state = 368},
  [153] = {.lex_state = 348},
  [154] = {.lex_state = 348},
  [155] = {.lex_state = 409},
  [156] = {.lex_state = 219},
  [157] = {.lex_state = 213},
  [158] = {.lex_state = 213},
  [159] = {.lex_state = 402},
  [160] = {.lex_state = 402},
  [161] = {.lex_state = 369},
  [162] = {.lex_state = 413},
  [163] = {.lex_state = 368},
  [164] = {.lex_state = 405},
  [165] = {.lex_state = 348},
  [166] = {.lex_state = 368},
  [167] = {.lex_state = 402},
  [168] = {.lex_state = 368},
  [169] = {.lex_state = 308},
  [170] = {.lex_state = 364},
  [171] = {.lex_state = 219},
  [172] = {.lex_state = 310},
  [173] = {.lex_state = 399},
  [174] = {.lex_state = 348},
  [175] = {.lex_state = 391},
  [176] = {.lex_state = 213},
  [177] = {.lex_state = 425},
  [178] = {.lex_state = 213},
  [179] = {.lex_state = 425},
  [180] = {.lex_state = 408},
  [181] = {.lex_state = 400},
  [182] = {.lex_state = 213},
  [183] = {.lex_state = 213},
  [184] = {.lex_state = 400},
  [185] = {.lex_state = 219},
  [186] = {.lex_state = 213},
  [187] = {.lex_state = 369},
  [188] = {.lex_state = 365},
  [189] = {.lex_state = 368},
  [190] = {.lex_state = 379},
  [191] = {.lex_state = 219},
  [192] = {.lex_state = 391},
  [193] = {.lex_state = 400},
  [194] = {.lex_state = 400},
  [195] = {.lex_state = 401},
  [196] = {.lex_state = 368},
  [197] = {.lex_state = 308},
  [198] = {.lex_state = 313},
  [199] = {.lex_state = 348},
  [200] = {.lex_state = 213},
  [201] = {.lex_state = 213},
  [202] = {.lex_state = 213},
  [203] = {.lex_state = 409},
  [204] = {.lex_state = 384},
  [205] = {.lex_state = 219},
  [206] = {.lex_state = 213},
  [207] = {.lex_state = 405},
  [208] = {.lex_state = 405},
  [209] = {.lex_state = 313},
  [210] = {.lex_state = 348},
  [211] = {.lex_state = 213},
  [212] = {.lex_state = 308},
  [213] = {.lex_state = 402},
  [214] = {.lex_state = 408},
  [215] = {.lex_state = 348},
  [216] = {.lex_state = 213},
  [217] = {.lex_state = 425},
  [218] = {.lex_state = 425},
  [219] = {.lex_state = 308},
  [220] = {.lex_state = 425},
  [221] = {.lex_state = 219},
  [222] = {.lex_state = 213},
  [223] = {.lex_state = 219},
  [224] = {.lex_state = 219},
  [225] = {.lex_state = 369},
  [226] = {.lex_state = 311},
  [227] = {.lex_state = 405},
  [228] = {.lex_state = 406},
  [229] = {.lex_state = 308},
  [230] = {.lex_state = 368},
  [231] = {.lex_state = 213},
  [232] = {.lex_state = 308},
  [233] = {.lex_state = 401},
  [234] = {.lex_state = 213},
  [235] = {.lex_state = 213},
  [236] = {.lex_state = 213},
  [237] = {.lex_state = 348},
  [238] = {.lex_state = 409},
  [239] = {.lex_state = 384},
  [240] = {.lex_state = 313},
  [241] = {.lex_state = 213},
  [242] = {.lex_state = 219},
  [243] = {.lex_state = 213},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 402},
  [246] = {.lex_state = 348},
  [247] = {.lex_state = 425},
  [248] = {.lex_state = 425},
  [249] = {.lex_state = 425},
  [250] = {.lex_state = 425},
  [251] = {.lex_state = 425},
  [252] = {.lex_state = 219},
  [253] = {.lex_state = 219},
  [254] = {.lex_state = 219},
  [255] = {.lex_state = 219},
  [256] = {.lex_state = 219},
  [257] = {.lex_state = 368},
  [258] = {.lex_state = 308},
  [259] = {.lex_state = 219},
  [260] = {.lex_state = 401},
  [261] = {.lex_state = 348},
  [262] = {.lex_state = 409},
  [263] = {.lex_state = 213},
  [264] = {.lex_state = 348},
  [265] = {.lex_state = 213},
  [266] = {.lex_state = 213},
  [267] = {.lex_state = 308},
  [268] = {.lex_state = 219},
  [269] = {.lex_state = 409},
  [270] = {.lex_state = 213},
  [271] = {.lex_state = 348},
  [272] = {.lex_state = 213},
  [273] = {.lex_state = 384},
  [274] = {.lex_state = 213},
  [275] = {.lex_state = 219},
  [276] = {.lex_state = 213},
  [277] = {.lex_state = 409},
  [278] = {.lex_state = 213},
  [279] = {.lex_state = 384},
  [280] = {.lex_state = 409},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
  },
  [1] = {
    [sym_module_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_source_file] = STATE(4),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
  },
  [2] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [3] = {
    [sym_module_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_module] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
  },
  [4] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(13),
  },
  [5] = {
    [anon_sym_DOT] = ACTIONS(15),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym_module_definition] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_module] = ACTIONS(19),
    [sym__space] = ACTIONS(3),
  },
  [7] = {
    [sym_end_module] = STATE(17),
    [sym_compound_macro] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(24),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(24),
    [sym_compound_macro_block] = STATE(24),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(24),
    [aux_sym_module_definition_repeat1] = STATE(24),
    [sym_enum_definition] = STATE(24),
    [sym_variable_definition] = STATE(25),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(24),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(28),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_i16] = ACTIONS(26),
    [sym_is_declare] = ACTIONS(32),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(34),
    [anon_sym_end] = ACTIONS(36),
    [anon_sym_private] = ACTIONS(28),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_method] = ACTIONS(38),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(28),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym_is_external] = ACTIONS(32),
    [anon_sym_i32] = ACTIONS(26),
  },
  [8] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(40),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(26),
    [sym__base_type] = STATE(20),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [10] = {
    [anon_sym_COMMA] = ACTIONS(44),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(44),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_STAR] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(44),
  },
  [11] = {
    [anon_sym_function] = ACTIONS(48),
    [sym_readonly] = ACTIONS(48),
    [anon_sym_s16] = ACTIONS(48),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(48),
    [anon_sym_s8] = ACTIONS(48),
    [anon_sym_u64] = ACTIONS(48),
    [anon_sym_i16] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_u8] = ACTIONS(48),
    [anon_sym_f64] = ACTIONS(48),
    [anon_sym_i8] = ACTIONS(48),
    [anon_sym_method] = ACTIONS(48),
    [anon_sym_s32] = ACTIONS(48),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(48),
    [anon_sym_i64] = ACTIONS(48),
    [anon_sym_f32] = ACTIONS(48),
    [anon_sym_i32] = ACTIONS(48),
  },
  [12] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [13] = {
    [sym_is_function] = STATE(29),
    [sym_is_method] = STATE(29),
    [sym_type] = STATE(30),
    [sym_function_signature] = STATE(31),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(32),
    [sym_variable_definition] = STATE(31),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(52),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(28),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(28),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_method] = ACTIONS(38),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(28),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [14] = {
    [aux_sym_compound_macro_repeat1] = STATE(36),
    [sym_parameter_list] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(54),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(56),
    [sym__space] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [anon_sym_STAR] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(62),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(64),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(66),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_DOT] = ACTIONS(68),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(60),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym_end_compound_macro] = STATE(56),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(60),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(60),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_i32] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(70),
    [sym_is_declare] = ACTIONS(75),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(86),
    [anon_sym_private] = ACTIONS(89),
    [anon_sym_u8] = ACTIONS(70),
    [anon_sym_f64] = ACTIONS(70),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(70),
    [sym_is_external] = ACTIONS(75),
    [sym_binary] = ACTIONS(77),
    [anon_sym_function] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(98),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(89),
    [anon_sym_u16] = ACTIONS(70),
    [anon_sym_s8] = ACTIONS(70),
    [anon_sym_u64] = ACTIONS(70),
    [anon_sym_enum] = ACTIONS(75),
    [anon_sym_i16] = ACTIONS(70),
    [sym_integer] = ACTIONS(101),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_method] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(89),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(70),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(70),
    [anon_sym_f32] = ACTIONS(70),
  },
  [19] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_end_function] = STATE(62),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym__literal] = STATE(53),
    [sym_string] = STATE(53),
    [sym_end_method] = STATE(62),
    [sym__end_function] = STATE(62),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(63),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym_character] = STATE(53),
    [sym_access_control] = STATE(58),
    [aux_sym_compound_macro_block_repeat1] = STATE(63),
    [sym_type] = STATE(23),
    [sym__statement] = STATE(63),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [20] = {
    [sym_pointer] = STATE(67),
    [sym_array] = STATE(66),
    [aux_sym_type_repeat2] = STATE(66),
    [aux_sym_type_repeat1] = STATE(67),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [21] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(69),
    [sym_is_method] = STATE(69),
    [sym_type] = STATE(26),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(123),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_method] = ACTIONS(38),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(127),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_module] = STATE(72),
    [sym_compound_macro] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(73),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(73),
    [sym_compound_macro_block] = STATE(73),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(73),
    [aux_sym_module_definition_repeat1] = STATE(73),
    [sym_enum_definition] = STATE(73),
    [sym_variable_definition] = STATE(25),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(24),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(28),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(30),
    [anon_sym_i16] = ACTIONS(26),
    [sym_is_declare] = ACTIONS(32),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(34),
    [anon_sym_end] = ACTIONS(36),
    [anon_sym_private] = ACTIONS(28),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_method] = ACTIONS(38),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(28),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym_is_external] = ACTIONS(32),
    [anon_sym_i32] = ACTIONS(26),
  },
  [25] = {
    [anon_sym_DOT] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [sym__enum_element] = STATE(77),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(78),
    [sym__base_type] = STATE(20),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [29] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
  },
  [30] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(137),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(139),
    [sym_readonly] = ACTIONS(139),
    [anon_sym_s16] = ACTIONS(139),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_u16] = ACTIONS(139),
    [anon_sym_s8] = ACTIONS(139),
    [anon_sym_u64] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_i16] = ACTIONS(139),
    [sym_is_declare] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_u8] = ACTIONS(139),
    [anon_sym_f64] = ACTIONS(139),
    [anon_sym_i8] = ACTIONS(139),
    [anon_sym_method] = ACTIONS(139),
    [anon_sym_s32] = ACTIONS(139),
    [anon_sym_publish] = ACTIONS(139),
    [anon_sym_u32] = ACTIONS(139),
    [anon_sym_i64] = ACTIONS(139),
    [anon_sym_f32] = ACTIONS(139),
    [sym_is_external] = ACTIONS(139),
    [anon_sym_i32] = ACTIONS(139),
  },
  [32] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(82),
    [sym_is_method] = STATE(82),
    [sym_type] = STATE(78),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(141),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_method] = ACTIONS(38),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [33] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(143),
    [sym__comment] = ACTIONS(3),
  },
  [34] = {
    [sym_oct] = ACTIONS(145),
    [sym_long] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(145),
    [sym_is_declare] = ACTIONS(145),
    [sym_hex] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_switch] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_end] = ACTIONS(145),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_u8] = ACTIONS(145),
    [anon_sym_f64] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_i8] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_s32] = ACTIONS(145),
    [sym_is_external] = ACTIONS(145),
    [sym_binary] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [sym_readonly] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_u16] = ACTIONS(145),
    [anon_sym_s8] = ACTIONS(145),
    [anon_sym_u64] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_i16] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [anon_sym_section] = ACTIONS(145),
    [sym_double] = ACTIONS(147),
    [anon_sym_goto] = ACTIONS(145),
    [anon_sym_method] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(145),
    [sym_null] = ACTIONS(145),
    [anon_sym_publish] = ACTIONS(145),
    [anon_sym_u32] = ACTIONS(145),
    [anon_sym_i64] = ACTIONS(145),
    [anon_sym_f32] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_i32] = ACTIONS(145),
  },
  [35] = {
    [sym_type] = STATE(23),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__comma_list_variables] = STATE(86),
    [sym_access_control] = STATE(58),
    [sym_variable_definition] = STATE(85),
    [sym_readonly] = ACTIONS(24),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(115),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [36] = {
    [aux_sym_compound_macro_repeat1] = STATE(88),
    [sym_parameter_list] = STATE(89),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [37] = {
    [anon_sym_DOT] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_DOT] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_module] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
  },
  [40] = {
    [sym_group_expression] = STATE(91),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [41] = {
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_DASH_DASH] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(56),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [sym_identifier] = ACTIONS(60),
    [anon_sym_STAR] = ACTIONS(60),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym_group_expression] = STATE(92),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(163),
  },
  [43] = {
    [sym_compound_macro] = STATE(94),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(165),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym_readonly] = ACTIONS(48),
    [anon_sym_s16] = ACTIONS(48),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(48),
    [anon_sym_s8] = ACTIONS(48),
    [anon_sym_u64] = ACTIONS(48),
    [anon_sym_i16] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_u8] = ACTIONS(48),
    [anon_sym_f64] = ACTIONS(48),
    [anon_sym_i8] = ACTIONS(48),
    [anon_sym_s32] = ACTIONS(48),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(48),
    [anon_sym_i64] = ACTIONS(48),
    [anon_sym_f32] = ACTIONS(48),
    [anon_sym_i32] = ACTIONS(48),
  },
  [45] = {
    [sym__escape_sequence] = STATE(95),
    [anon_sym_BSLASHa] = ACTIONS(167),
    [anon_sym_BSLASHt] = ACTIONS(167),
    [anon_sym_BSLASH0] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(167),
    [anon_sym_BSLASHv] = ACTIONS(167),
    [aux_sym_character_token1] = ACTIONS(169),
    [anon_sym_BSLASHf] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(167),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(167),
    [anon_sym_BSLASHn] = ACTIONS(167),
  },
  [46] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_group_expression] = STATE(53),
    [sym__assignment_or_collection_or_value] = STATE(96),
    [sym__literal] = STATE(53),
    [sym_string] = STATE(53),
    [sym_assignment_expression] = STATE(96),
    [sym__collection_or_value] = STATE(97),
    [sym_character] = STATE(53),
    [sym_collection] = STATE(97),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(77),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(77),
    [sym_integer] = ACTIONS(101),
    [sym_identifier] = ACTIONS(101),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [sym_binary] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(101),
    [sym_long] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [47] = {
    [aux_sym_string_repeat1] = STATE(99),
    [sym__comment] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym__space] = ACTIONS(171),
    [aux_sym_string_token1] = ACTIONS(175),
  },
  [48] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
  },
  [49] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
  },
  [50] = {
    [sym__value] = STATE(103),
    [sym__number] = STATE(103),
    [sym_group_expression] = STATE(103),
    [sym__comma_list_collection_or_value] = STATE(102),
    [sym__literal] = STATE(103),
    [sym_string] = STATE(103),
    [sym__collection_or_value] = STATE(103),
    [sym_character] = STATE(103),
    [sym_collection] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(181),
    [sym_integer] = ACTIONS(183),
    [sym_identifier] = ACTIONS(183),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(183),
    [sym_binary] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(183),
    [sym_long] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [51] = {
    [sym_group_expression] = STATE(104),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(163),
  },
  [52] = {
    [sym__value] = STATE(106),
    [sym__number] = STATE(106),
    [sym_group_expression] = STATE(106),
    [sym__literal] = STATE(106),
    [sym_string] = STATE(106),
    [sym_assignment_expression] = STATE(107),
    [sym_unary_op] = STATE(108),
    [sym__collection_or_value] = STATE(57),
    [sym_character] = STATE(106),
    [sym_collection] = STATE(57),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(187),
    [sym_integer] = ACTIONS(189),
    [anon_sym_DASH] = ACTIONS(185),
    [sym_identifier] = ACTIONS(189),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [sym_float] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(185),
    [sym_null] = ACTIONS(189),
    [sym_binary] = ACTIONS(187),
    [sym_oct] = ACTIONS(189),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [53] = {
    [sym_assignment_post_op] = STATE(110),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_DOT] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(203),
    [sym_readonly] = ACTIONS(203),
    [anon_sym_s16] = ACTIONS(203),
    [anon_sym_protected] = ACTIONS(203),
    [anon_sym_u16] = ACTIONS(203),
    [anon_sym_s8] = ACTIONS(203),
    [anon_sym_u64] = ACTIONS(203),
    [anon_sym_enum] = ACTIONS(203),
    [anon_sym_i16] = ACTIONS(203),
    [sym_is_declare] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_end] = ACTIONS(203),
    [anon_sym_private] = ACTIONS(203),
    [anon_sym_u8] = ACTIONS(203),
    [anon_sym_f64] = ACTIONS(203),
    [anon_sym_i8] = ACTIONS(203),
    [anon_sym_method] = ACTIONS(203),
    [anon_sym_s32] = ACTIONS(203),
    [anon_sym_publish] = ACTIONS(203),
    [anon_sym_u32] = ACTIONS(203),
    [anon_sym_i64] = ACTIONS(203),
    [anon_sym_f32] = ACTIONS(203),
    [sym_is_external] = ACTIONS(203),
    [anon_sym_i32] = ACTIONS(203),
  },
  [57] = {
    [sym_assignment_op] = STATE(113),
    [anon_sym_PIPE_EQ] = ACTIONS(205),
    [anon_sym_COLON_EQ] = ACTIONS(205),
    [anon_sym_PLUS_EQ] = ACTIONS(205),
    [anon_sym_AMP_EQ] = ACTIONS(205),
    [anon_sym_STAR_EQ] = ACTIONS(205),
    [anon_sym_CARET_EQ] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(205),
    [anon_sym_SLASH_EQ] = ACTIONS(205),
    [anon_sym_GT_GT_EQ] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(205),
    [anon_sym_LT_LT_EQ] = ACTIONS(205),
  },
  [58] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(26),
    [sym__base_type] = STATE(20),
    [sym_readonly] = ACTIONS(123),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [59] = {
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_DASH_DASH] = ACTIONS(161),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [anon_sym_PLUS_PLUS] = ACTIONS(159),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym_end_compound_macro] = STATE(114),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(207),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [61] = {
    [anon_sym_function] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(211),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_end_function] = STATE(119),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym__literal] = STATE(53),
    [sym_string] = STATE(53),
    [sym_end_method] = STATE(119),
    [sym__end_function] = STATE(119),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym_character] = STATE(53),
    [sym_access_control] = STATE(58),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym_type] = STATE(23),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [64] = {
    [anon_sym_COMMA] = ACTIONS(215),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
  },
  [65] = {
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_integer] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [66] = {
    [sym_array] = STATE(122),
    [aux_sym_type_repeat2] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(223),
  },
  [67] = {
    [sym_pointer] = STATE(124),
    [sym_array] = STATE(123),
    [aux_sym_type_repeat2] = STATE(123),
    [aux_sym_type_repeat1] = STATE(124),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [68] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(125),
    [sym__base_type] = STATE(20),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym_parameter_list] = STATE(129),
    [sym_return_list] = STATE(130),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [71] = {
    [sym_static_assignment] = STATE(132),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_DOT] = ACTIONS(233),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(233),
  },
  [72] = {
    [anon_sym_DOT] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [73] = {
    [sym_compound_macro] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(73),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(73),
    [sym_compound_macro_block] = STATE(73),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(73),
    [aux_sym_module_definition_repeat1] = STATE(73),
    [sym_enum_definition] = STATE(73),
    [sym_variable_definition] = STATE(25),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(237),
    [sym_readonly] = ACTIONS(240),
    [anon_sym_s16] = ACTIONS(243),
    [anon_sym_protected] = ACTIONS(246),
    [anon_sym_u16] = ACTIONS(243),
    [anon_sym_s8] = ACTIONS(243),
    [anon_sym_u64] = ACTIONS(243),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_i16] = ACTIONS(243),
    [sym_is_declare] = ACTIONS(252),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_end] = ACTIONS(258),
    [anon_sym_private] = ACTIONS(246),
    [anon_sym_u8] = ACTIONS(243),
    [anon_sym_f64] = ACTIONS(243),
    [anon_sym_i8] = ACTIONS(243),
    [anon_sym_method] = ACTIONS(260),
    [anon_sym_s32] = ACTIONS(243),
    [anon_sym_publish] = ACTIONS(246),
    [anon_sym_u32] = ACTIONS(243),
    [anon_sym_i64] = ACTIONS(243),
    [anon_sym_f32] = ACTIONS(243),
    [sym_is_external] = ACTIONS(252),
    [anon_sym_i32] = ACTIONS(243),
  },
  [74] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(263),
    [sym_readonly] = ACTIONS(263),
    [anon_sym_s16] = ACTIONS(263),
    [anon_sym_protected] = ACTIONS(263),
    [anon_sym_u16] = ACTIONS(263),
    [anon_sym_s8] = ACTIONS(263),
    [anon_sym_u64] = ACTIONS(263),
    [anon_sym_enum] = ACTIONS(263),
    [anon_sym_i16] = ACTIONS(263),
    [sym_is_declare] = ACTIONS(263),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_private] = ACTIONS(263),
    [anon_sym_u8] = ACTIONS(263),
    [anon_sym_f64] = ACTIONS(263),
    [anon_sym_i8] = ACTIONS(263),
    [anon_sym_method] = ACTIONS(263),
    [anon_sym_s32] = ACTIONS(263),
    [anon_sym_publish] = ACTIONS(263),
    [anon_sym_u32] = ACTIONS(263),
    [anon_sym_i64] = ACTIONS(263),
    [anon_sym_f32] = ACTIONS(263),
    [sym_is_external] = ACTIONS(263),
    [anon_sym_i32] = ACTIONS(263),
  },
  [75] = {
    [sym_static_assignment] = STATE(134),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(265),
  },
  [76] = {
    [sym_static_assignment] = STATE(135),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(267),
  },
  [77] = {
    [aux_sym_enum_definition_repeat1] = STATE(138),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(271),
  },
  [78] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [sym_parameter_list] = STATE(141),
    [sym_return_list] = STATE(142),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [80] = {
    [sym_static_assignment] = STATE(132),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(277),
    [anon_sym_COLON_EQ] = ACTIONS(279),
    [sym_readonly] = ACTIONS(277),
    [anon_sym_s16] = ACTIONS(277),
    [anon_sym_protected] = ACTIONS(277),
    [anon_sym_u16] = ACTIONS(277),
    [anon_sym_s8] = ACTIONS(277),
    [anon_sym_u64] = ACTIONS(277),
    [anon_sym_enum] = ACTIONS(277),
    [anon_sym_i16] = ACTIONS(277),
    [sym_is_declare] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(277),
    [anon_sym_end] = ACTIONS(277),
    [anon_sym_private] = ACTIONS(277),
    [anon_sym_u8] = ACTIONS(277),
    [anon_sym_f64] = ACTIONS(277),
    [anon_sym_i8] = ACTIONS(277),
    [anon_sym_method] = ACTIONS(277),
    [anon_sym_s32] = ACTIONS(277),
    [anon_sym_publish] = ACTIONS(277),
    [anon_sym_u32] = ACTIONS(277),
    [anon_sym_i64] = ACTIONS(277),
    [anon_sym_f32] = ACTIONS(277),
    [sym_is_external] = ACTIONS(277),
    [anon_sym_i32] = ACTIONS(277),
  },
  [81] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(144),
    [sym__base_type] = STATE(20),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [82] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(283),
  },
  [84] = {
    [anon_sym_returns] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
  },
  [85] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(147),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(287),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [86] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(291),
  },
  [87] = {
    [sym_oct] = ACTIONS(293),
    [sym_long] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(293),
    [sym_is_declare] = ACTIONS(293),
    [sym_hex] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(293),
    [anon_sym_switch] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [anon_sym_private] = ACTIONS(293),
    [anon_sym_u8] = ACTIONS(293),
    [anon_sym_f64] = ACTIONS(293),
    [sym_float] = ACTIONS(295),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_i8] = ACTIONS(293),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_s32] = ACTIONS(293),
    [sym_is_external] = ACTIONS(293),
    [sym_binary] = ACTIONS(295),
    [anon_sym_function] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [sym_readonly] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(293),
    [anon_sym_u16] = ACTIONS(293),
    [anon_sym_s8] = ACTIONS(293),
    [anon_sym_u64] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_i16] = ACTIONS(293),
    [sym_integer] = ACTIONS(293),
    [anon_sym_section] = ACTIONS(293),
    [sym_double] = ACTIONS(295),
    [anon_sym_goto] = ACTIONS(293),
    [anon_sym_method] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_while] = ACTIONS(293),
    [sym_null] = ACTIONS(293),
    [anon_sym_publish] = ACTIONS(293),
    [anon_sym_u32] = ACTIONS(293),
    [anon_sym_i64] = ACTIONS(293),
    [anon_sym_f32] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_i32] = ACTIONS(293),
  },
  [88] = {
    [aux_sym_compound_macro_repeat1] = STATE(88),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(283),
  },
  [89] = {
    [anon_sym_DOT] = ACTIONS(300),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym__value] = STATE(150),
    [sym__number] = STATE(150),
    [sym_group_expression] = STATE(150),
    [sym__literal] = STATE(150),
    [sym_string] = STATE(150),
    [sym_assignment_expression] = STATE(151),
    [sym_unary_op] = STATE(152),
    [sym__collection_or_value] = STATE(57),
    [sym_character] = STATE(150),
    [sym_collection] = STATE(57),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(302),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(302),
    [sym_integer] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(185),
    [sym_identifier] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [sym_float] = ACTIONS(302),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(185),
    [sym_null] = ACTIONS(304),
    [sym_binary] = ACTIONS(302),
    [sym_oct] = ACTIONS(304),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [91] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(154),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(154),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [92] = {
    [anon_sym_DOT] = ACTIONS(308),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [93] = {
    [aux_sym_compound_macro_repeat1] = STATE(157),
    [sym_parameter_list] = STATE(158),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [94] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(312),
    [sym_readonly] = ACTIONS(312),
    [anon_sym_s16] = ACTIONS(312),
    [anon_sym_protected] = ACTIONS(312),
    [anon_sym_u16] = ACTIONS(312),
    [anon_sym_s8] = ACTIONS(312),
    [anon_sym_u64] = ACTIONS(312),
    [anon_sym_enum] = ACTIONS(312),
    [anon_sym_i16] = ACTIONS(312),
    [sym_is_declare] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(312),
    [anon_sym_end] = ACTIONS(312),
    [anon_sym_private] = ACTIONS(312),
    [anon_sym_u8] = ACTIONS(312),
    [anon_sym_f64] = ACTIONS(312),
    [anon_sym_i8] = ACTIONS(312),
    [anon_sym_method] = ACTIONS(312),
    [anon_sym_s32] = ACTIONS(312),
    [anon_sym_publish] = ACTIONS(312),
    [anon_sym_u32] = ACTIONS(312),
    [anon_sym_i64] = ACTIONS(312),
    [anon_sym_f32] = ACTIONS(312),
    [sym_is_external] = ACTIONS(312),
    [anon_sym_i32] = ACTIONS(312),
  },
  [95] = {
    [anon_sym_SQUOTE] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_DOT] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [sym_assignment_op] = STATE(113),
    [anon_sym_PIPE_EQ] = ACTIONS(205),
    [anon_sym_COLON_EQ] = ACTIONS(205),
    [anon_sym_PLUS_EQ] = ACTIONS(205),
    [anon_sym_AMP_EQ] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(318),
    [anon_sym_STAR_EQ] = ACTIONS(205),
    [anon_sym_CARET_EQ] = ACTIONS(205),
    [anon_sym_DASH_EQ] = ACTIONS(205),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(205),
    [anon_sym_GT_GT_EQ] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(205),
    [anon_sym_LT_LT_EQ] = ACTIONS(205),
  },
  [98] = {
    [anon_sym_COLON_EQ] = ACTIONS(320),
    [anon_sym_AMP_AMP] = ACTIONS(320),
    [anon_sym_DASH_EQ] = ACTIONS(320),
    [anon_sym_GT_GT] = ACTIONS(322),
    [anon_sym_PERCENT] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_PLUS_PLUS] = ACTIONS(320),
    [anon_sym_PERCENT_EQ] = ACTIONS(320),
    [anon_sym_LT_LT_EQ] = ACTIONS(320),
    [anon_sym_PIPE_EQ] = ACTIONS(320),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_DOT] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_AMP] = ACTIONS(322),
    [anon_sym_PIPE_PIPE] = ACTIONS(320),
    [anon_sym_BANG_EQ] = ACTIONS(320),
    [anon_sym_LT_LT] = ACTIONS(322),
    [anon_sym_PIPE] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(320),
    [anon_sym_GT] = ACTIONS(322),
    [anon_sym_DASH_DASH] = ACTIONS(322),
    [anon_sym_AMP_EQ] = ACTIONS(320),
    [anon_sym_STAR_EQ] = ACTIONS(320),
    [anon_sym_CARET_EQ] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_STAR] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(320),
    [anon_sym_PLUS_EQ] = ACTIONS(320),
    [anon_sym_CARET] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(320),
    [anon_sym_GT_GT_EQ] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [aux_sym_string_repeat1] = STATE(161),
    [sym__comment] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(324),
    [sym__space] = ACTIONS(171),
    [aux_sym_string_token1] = ACTIONS(326),
  },
  [100] = {
    [anon_sym_DOT] = ACTIONS(328),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_DOT] = ACTIONS(330),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(332),
  },
  [103] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(334),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(336),
  },
  [104] = {
    [anon_sym_DOT] = ACTIONS(338),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_DQUOTE] = ACTIONS(340),
    [sym_float] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(340),
    [sym_hex] = ACTIONS(340),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(340),
    [sym_null] = ACTIONS(342),
    [sym_integer] = ACTIONS(342),
    [sym_binary] = ACTIONS(340),
    [sym_oct] = ACTIONS(342),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [sym_long] = ACTIONS(340),
  },
  [106] = {
    [sym_binary_op] = STATE(168),
    [sym_assignment_post_op] = STATE(110),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(348),
  },
  [108] = {
    [sym__value] = STATE(169),
    [sym__number] = STATE(169),
    [sym_group_expression] = STATE(169),
    [sym_character] = STATE(169),
    [sym__literal] = STATE(169),
    [sym_string] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(350),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(350),
    [sym_null] = ACTIONS(352),
    [sym_integer] = ACTIONS(352),
    [sym_binary] = ACTIONS(350),
    [sym_oct] = ACTIONS(352),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(350),
  },
  [109] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(354),
    [sym__space] = ACTIONS(3),
  },
  [110] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [sym__space] = ACTIONS(3),
  },
  [111] = {
    [sym_oct] = ACTIONS(358),
    [sym_long] = ACTIONS(360),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(358),
    [sym_hex] = ACTIONS(360),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_switch] = ACTIONS(358),
    [sym_identifier] = ACTIONS(358),
    [anon_sym_end] = ACTIONS(358),
    [anon_sym_private] = ACTIONS(358),
    [anon_sym_u8] = ACTIONS(358),
    [anon_sym_f64] = ACTIONS(358),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(360),
    [anon_sym_i8] = ACTIONS(358),
    [anon_sym_return] = ACTIONS(358),
    [anon_sym_s32] = ACTIONS(358),
    [sym_binary] = ACTIONS(360),
    [anon_sym_DQUOTE] = ACTIONS(360),
    [sym_readonly] = ACTIONS(358),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(358),
    [anon_sym_u16] = ACTIONS(358),
    [anon_sym_s8] = ACTIONS(358),
    [anon_sym_u64] = ACTIONS(358),
    [sym_integer] = ACTIONS(358),
    [anon_sym_i16] = ACTIONS(358),
    [sym_double] = ACTIONS(360),
    [anon_sym_section] = ACTIONS(358),
    [anon_sym_goto] = ACTIONS(358),
    [anon_sym_LBRACE] = ACTIONS(360),
    [sym_null] = ACTIONS(358),
    [anon_sym_while] = ACTIONS(358),
    [anon_sym_publish] = ACTIONS(358),
    [anon_sym_u32] = ACTIONS(358),
    [anon_sym_i64] = ACTIONS(358),
    [anon_sym_f32] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [anon_sym_i32] = ACTIONS(358),
  },
  [112] = {
    [anon_sym_DQUOTE] = ACTIONS(362),
    [sym_hex] = ACTIONS(362),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(362),
    [sym_integer] = ACTIONS(364),
    [sym_identifier] = ACTIONS(364),
    [sym_float] = ACTIONS(362),
    [anon_sym_SQUOTE] = ACTIONS(362),
    [anon_sym_LBRACE] = ACTIONS(362),
    [sym_null] = ACTIONS(364),
    [sym_binary] = ACTIONS(362),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(364),
    [sym_long] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(364),
  },
  [113] = {
    [sym__value] = STATE(170),
    [sym__number] = STATE(170),
    [sym_group_expression] = STATE(170),
    [sym__literal] = STATE(170),
    [sym_string] = STATE(170),
    [sym__collection_or_value] = STATE(170),
    [sym_character] = STATE(170),
    [sym_collection] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(366),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(366),
    [sym_integer] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_float] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(368),
    [sym_binary] = ACTIONS(366),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(368),
    [sym_long] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [114] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(370),
    [sym_readonly] = ACTIONS(370),
    [anon_sym_s16] = ACTIONS(370),
    [anon_sym_protected] = ACTIONS(370),
    [anon_sym_u16] = ACTIONS(370),
    [anon_sym_s8] = ACTIONS(370),
    [anon_sym_u64] = ACTIONS(370),
    [anon_sym_enum] = ACTIONS(370),
    [anon_sym_i16] = ACTIONS(370),
    [sym_is_declare] = ACTIONS(370),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(370),
    [anon_sym_end] = ACTIONS(370),
    [anon_sym_private] = ACTIONS(370),
    [anon_sym_u8] = ACTIONS(370),
    [anon_sym_f64] = ACTIONS(370),
    [anon_sym_i8] = ACTIONS(370),
    [anon_sym_method] = ACTIONS(370),
    [anon_sym_s32] = ACTIONS(370),
    [anon_sym_publish] = ACTIONS(370),
    [anon_sym_u32] = ACTIONS(370),
    [anon_sym_i64] = ACTIONS(370),
    [anon_sym_f32] = ACTIONS(370),
    [sym_is_external] = ACTIONS(370),
    [anon_sym_i32] = ACTIONS(370),
  },
  [115] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [sym_oct] = ACTIONS(372),
    [sym_long] = ACTIONS(375),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(378),
    [sym_hex] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(381),
    [anon_sym_switch] = ACTIONS(384),
    [sym_identifier] = ACTIONS(387),
    [anon_sym_end] = ACTIONS(390),
    [anon_sym_private] = ACTIONS(392),
    [anon_sym_u8] = ACTIONS(378),
    [anon_sym_f64] = ACTIONS(378),
    [sym_float] = ACTIONS(375),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_i8] = ACTIONS(378),
    [anon_sym_return] = ACTIONS(398),
    [anon_sym_s32] = ACTIONS(378),
    [sym_binary] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(401),
    [sym_readonly] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(392),
    [anon_sym_u16] = ACTIONS(378),
    [anon_sym_s8] = ACTIONS(378),
    [anon_sym_u64] = ACTIONS(378),
    [sym_integer] = ACTIONS(372),
    [anon_sym_i16] = ACTIONS(378),
    [sym_double] = ACTIONS(375),
    [anon_sym_section] = ACTIONS(407),
    [anon_sym_goto] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(413),
    [sym_null] = ACTIONS(372),
    [anon_sym_while] = ACTIONS(416),
    [anon_sym_publish] = ACTIONS(392),
    [anon_sym_u32] = ACTIONS(378),
    [anon_sym_i64] = ACTIONS(378),
    [anon_sym_f32] = ACTIONS(378),
    [anon_sym_LPAREN] = ACTIONS(419),
    [anon_sym_i32] = ACTIONS(378),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(426),
    [sym_readonly] = ACTIONS(426),
    [anon_sym_s16] = ACTIONS(426),
    [anon_sym_protected] = ACTIONS(426),
    [anon_sym_u16] = ACTIONS(426),
    [anon_sym_s8] = ACTIONS(426),
    [anon_sym_u64] = ACTIONS(426),
    [anon_sym_enum] = ACTIONS(426),
    [anon_sym_i16] = ACTIONS(426),
    [sym_is_declare] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(426),
    [anon_sym_end] = ACTIONS(426),
    [anon_sym_private] = ACTIONS(426),
    [anon_sym_u8] = ACTIONS(426),
    [anon_sym_f64] = ACTIONS(426),
    [anon_sym_i8] = ACTIONS(426),
    [anon_sym_method] = ACTIONS(426),
    [anon_sym_s32] = ACTIONS(426),
    [anon_sym_publish] = ACTIONS(426),
    [anon_sym_u32] = ACTIONS(426),
    [anon_sym_i64] = ACTIONS(426),
    [anon_sym_f32] = ACTIONS(426),
    [sym_is_external] = ACTIONS(426),
    [anon_sym_i32] = ACTIONS(426),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(428),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
  },
  [121] = {
    [anon_sym_RBRACK] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [122] = {
    [sym_array] = STATE(122),
    [aux_sym_type_repeat2] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(439),
  },
  [123] = {
    [sym_array] = STATE(122),
    [aux_sym_type_repeat2] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(441),
  },
  [124] = {
    [sym_pointer] = STATE(124),
    [aux_sym_type_repeat1] = STATE(124),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(447),
  },
  [125] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(450),
    [sym__comment] = ACTIONS(3),
  },
  [126] = {
    [sym_parameter_list] = STATE(175),
    [sym_return_list] = STATE(176),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [127] = {
    [sym__base_type] = STATE(177),
    [sym_primitive_type] = STATE(177),
    [sym__comma_list_types] = STATE(178),
    [sym_type] = STATE(179),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [128] = {
    [sym_oct] = ACTIONS(458),
    [sym_long] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(458),
    [sym_hex] = ACTIONS(460),
    [anon_sym_if] = ACTIONS(458),
    [anon_sym_switch] = ACTIONS(458),
    [sym_identifier] = ACTIONS(458),
    [anon_sym_end] = ACTIONS(458),
    [anon_sym_private] = ACTIONS(458),
    [anon_sym_u8] = ACTIONS(458),
    [anon_sym_f64] = ACTIONS(458),
    [sym_float] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(460),
    [anon_sym_i8] = ACTIONS(458),
    [anon_sym_return] = ACTIONS(458),
    [anon_sym_s32] = ACTIONS(458),
    [sym_binary] = ACTIONS(460),
    [anon_sym_DQUOTE] = ACTIONS(460),
    [sym_readonly] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(458),
    [anon_sym_u16] = ACTIONS(458),
    [anon_sym_s8] = ACTIONS(458),
    [anon_sym_u64] = ACTIONS(458),
    [sym_integer] = ACTIONS(458),
    [anon_sym_i16] = ACTIONS(458),
    [sym_double] = ACTIONS(460),
    [anon_sym_section] = ACTIONS(458),
    [anon_sym_goto] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(460),
    [sym_null] = ACTIONS(458),
    [anon_sym_while] = ACTIONS(458),
    [anon_sym_publish] = ACTIONS(458),
    [anon_sym_u32] = ACTIONS(458),
    [anon_sym_i64] = ACTIONS(458),
    [anon_sym_f32] = ACTIONS(458),
    [anon_sym_LPAREN] = ACTIONS(458),
    [anon_sym_i32] = ACTIONS(458),
  },
  [129] = {
    [sym_return_list] = STATE(176),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
  },
  [130] = {
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [131] = {
    [sym__value] = STATE(180),
    [sym__number] = STATE(180),
    [sym_group_expression] = STATE(180),
    [sym__literal] = STATE(180),
    [sym_string] = STATE(180),
    [sym__collection_or_value] = STATE(180),
    [sym_character] = STATE(180),
    [sym_collection] = STATE(180),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(462),
    [sym_integer] = ACTIONS(464),
    [sym_identifier] = ACTIONS(464),
    [sym_float] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(464),
    [sym_binary] = ACTIONS(462),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(464),
    [sym_long] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [132] = {
    [anon_sym_s16] = ACTIONS(466),
    [sym_is_declare] = ACTIONS(466),
    [sym_identifier] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(265),
    [anon_sym_end] = ACTIONS(466),
    [anon_sym_private] = ACTIONS(466),
    [anon_sym_u8] = ACTIONS(466),
    [anon_sym_f64] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_i8] = ACTIONS(466),
    [anon_sym_s32] = ACTIONS(466),
    [sym_is_external] = ACTIONS(466),
    [anon_sym_function] = ACTIONS(466),
    [sym_readonly] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(466),
    [anon_sym_u16] = ACTIONS(466),
    [anon_sym_s8] = ACTIONS(466),
    [anon_sym_u64] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(466),
    [anon_sym_i16] = ACTIONS(466),
    [anon_sym_method] = ACTIONS(466),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(466),
    [anon_sym_u32] = ACTIONS(466),
    [anon_sym_i64] = ACTIONS(466),
    [anon_sym_f32] = ACTIONS(466),
    [anon_sym_i32] = ACTIONS(466),
  },
  [133] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_module] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_s16] = ACTIONS(470),
    [sym_is_declare] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_end] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_u8] = ACTIONS(470),
    [anon_sym_f64] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [anon_sym_i8] = ACTIONS(470),
    [anon_sym_s32] = ACTIONS(470),
    [sym_is_external] = ACTIONS(470),
    [anon_sym_function] = ACTIONS(470),
    [sym_readonly] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_u16] = ACTIONS(470),
    [anon_sym_s8] = ACTIONS(470),
    [anon_sym_u64] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(470),
    [anon_sym_i16] = ACTIONS(470),
    [anon_sym_method] = ACTIONS(470),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(470),
    [anon_sym_u32] = ACTIONS(470),
    [anon_sym_i64] = ACTIONS(470),
    [anon_sym_f32] = ACTIONS(470),
    [anon_sym_i32] = ACTIONS(470),
  },
  [135] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(474),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(474),
  },
  [136] = {
    [sym__enum_element] = STATE(181),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [137] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(476),
    [sym__comment] = ACTIONS(3),
  },
  [138] = {
    [aux_sym_enum_definition_repeat1] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(271),
  },
  [139] = {
    [sym_static_assignment] = STATE(134),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(466),
    [anon_sym_COLON_EQ] = ACTIONS(279),
    [sym_readonly] = ACTIONS(466),
    [anon_sym_s16] = ACTIONS(466),
    [anon_sym_protected] = ACTIONS(466),
    [anon_sym_u16] = ACTIONS(466),
    [anon_sym_s8] = ACTIONS(466),
    [anon_sym_u64] = ACTIONS(466),
    [anon_sym_enum] = ACTIONS(466),
    [anon_sym_i16] = ACTIONS(466),
    [sym_is_declare] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(466),
    [anon_sym_end] = ACTIONS(466),
    [anon_sym_private] = ACTIONS(466),
    [anon_sym_u8] = ACTIONS(466),
    [anon_sym_f64] = ACTIONS(466),
    [anon_sym_i8] = ACTIONS(466),
    [anon_sym_method] = ACTIONS(466),
    [anon_sym_s32] = ACTIONS(466),
    [anon_sym_publish] = ACTIONS(466),
    [anon_sym_u32] = ACTIONS(466),
    [anon_sym_i64] = ACTIONS(466),
    [anon_sym_f32] = ACTIONS(466),
    [sym_is_external] = ACTIONS(466),
    [anon_sym_i32] = ACTIONS(466),
  },
  [140] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(458),
    [sym_readonly] = ACTIONS(458),
    [anon_sym_s16] = ACTIONS(458),
    [anon_sym_protected] = ACTIONS(458),
    [anon_sym_u16] = ACTIONS(458),
    [anon_sym_s8] = ACTIONS(458),
    [anon_sym_u64] = ACTIONS(458),
    [anon_sym_enum] = ACTIONS(458),
    [anon_sym_i16] = ACTIONS(458),
    [sym_is_declare] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(458),
    [anon_sym_end] = ACTIONS(458),
    [anon_sym_private] = ACTIONS(458),
    [anon_sym_u8] = ACTIONS(458),
    [anon_sym_f64] = ACTIONS(458),
    [anon_sym_i8] = ACTIONS(458),
    [anon_sym_method] = ACTIONS(458),
    [anon_sym_s32] = ACTIONS(458),
    [anon_sym_publish] = ACTIONS(458),
    [anon_sym_u32] = ACTIONS(458),
    [anon_sym_i64] = ACTIONS(458),
    [anon_sym_f32] = ACTIONS(458),
    [sym_is_external] = ACTIONS(458),
    [anon_sym_i32] = ACTIONS(458),
  },
  [141] = {
    [sym_return_list] = STATE(186),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
  },
  [142] = {
    [anon_sym_DOT] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [143] = {
    [sym__value] = STATE(180),
    [sym__number] = STATE(180),
    [sym_group_expression] = STATE(180),
    [sym__literal] = STATE(180),
    [sym_string] = STATE(180),
    [sym__collection_or_value] = STATE(180),
    [sym_character] = STATE(180),
    [sym_collection] = STATE(180),
    [anon_sym_DQUOTE] = ACTIONS(482),
    [sym_hex] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(462),
    [sym_integer] = ACTIONS(464),
    [sym_identifier] = ACTIONS(464),
    [sym_float] = ACTIONS(462),
    [anon_sym_SQUOTE] = ACTIONS(484),
    [anon_sym_LBRACE] = ACTIONS(486),
    [sym_null] = ACTIONS(464),
    [sym_binary] = ACTIONS(462),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(464),
    [sym_long] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(488),
  },
  [144] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(490),
    [sym__comment] = ACTIONS(3),
  },
  [145] = {
    [sym_parameter_list] = STATE(192),
    [sym_return_list] = STATE(186),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [146] = {
    [sym_access_control] = STATE(58),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(23),
    [sym_variable_definition] = STATE(193),
    [sym_readonly] = ACTIONS(24),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(115),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [147] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(194),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [148] = {
    [anon_sym_returns] = ACTIONS(494),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
  },
  [149] = {
    [sym_oct] = ACTIONS(496),
    [sym_long] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(496),
    [sym_is_declare] = ACTIONS(496),
    [sym_hex] = ACTIONS(498),
    [anon_sym_if] = ACTIONS(496),
    [anon_sym_switch] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [anon_sym_end] = ACTIONS(496),
    [anon_sym_private] = ACTIONS(496),
    [anon_sym_u8] = ACTIONS(496),
    [anon_sym_f64] = ACTIONS(496),
    [sym_float] = ACTIONS(498),
    [anon_sym_SQUOTE] = ACTIONS(498),
    [anon_sym_i8] = ACTIONS(496),
    [anon_sym_return] = ACTIONS(496),
    [anon_sym_s32] = ACTIONS(496),
    [sym_is_external] = ACTIONS(496),
    [sym_binary] = ACTIONS(498),
    [anon_sym_function] = ACTIONS(496),
    [anon_sym_DQUOTE] = ACTIONS(498),
    [sym_readonly] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(496),
    [anon_sym_u16] = ACTIONS(496),
    [anon_sym_s8] = ACTIONS(496),
    [anon_sym_u64] = ACTIONS(496),
    [anon_sym_enum] = ACTIONS(496),
    [anon_sym_i16] = ACTIONS(496),
    [sym_integer] = ACTIONS(496),
    [anon_sym_section] = ACTIONS(496),
    [sym_double] = ACTIONS(498),
    [anon_sym_goto] = ACTIONS(496),
    [anon_sym_method] = ACTIONS(496),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_while] = ACTIONS(496),
    [sym_null] = ACTIONS(496),
    [anon_sym_publish] = ACTIONS(496),
    [anon_sym_u32] = ACTIONS(496),
    [anon_sym_i64] = ACTIONS(496),
    [anon_sym_f32] = ACTIONS(496),
    [anon_sym_LPAREN] = ACTIONS(496),
    [anon_sym_i32] = ACTIONS(496),
  },
  [150] = {
    [sym_binary_op] = STATE(196),
    [sym_assignment_post_op] = STATE(110),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
  },
  [151] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(500),
  },
  [152] = {
    [sym__value] = STATE(197),
    [sym__number] = STATE(197),
    [sym_group_expression] = STATE(197),
    [sym_character] = STATE(197),
    [sym__literal] = STATE(197),
    [sym_string] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(502),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(502),
    [sym_null] = ACTIONS(504),
    [sym_integer] = ACTIONS(504),
    [sym_binary] = ACTIONS(502),
    [sym_oct] = ACTIONS(504),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(504),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(502),
  },
  [153] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(199),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(199),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(199),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_end_if] = STATE(200),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(506),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [154] = {
    [sym_oct] = ACTIONS(508),
    [sym_long] = ACTIONS(510),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(508),
    [sym_hex] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(508),
    [anon_sym_switch] = ACTIONS(508),
    [sym_identifier] = ACTIONS(508),
    [anon_sym_end] = ACTIONS(508),
    [anon_sym_private] = ACTIONS(508),
    [anon_sym_u8] = ACTIONS(508),
    [anon_sym_f64] = ACTIONS(508),
    [sym_float] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [anon_sym_i8] = ACTIONS(508),
    [anon_sym_return] = ACTIONS(508),
    [anon_sym_s32] = ACTIONS(508),
    [sym_binary] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [sym_readonly] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(508),
    [anon_sym_u16] = ACTIONS(508),
    [anon_sym_s8] = ACTIONS(508),
    [anon_sym_u64] = ACTIONS(508),
    [sym_integer] = ACTIONS(508),
    [anon_sym_i16] = ACTIONS(508),
    [sym_double] = ACTIONS(510),
    [anon_sym_section] = ACTIONS(508),
    [anon_sym_goto] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(510),
    [sym_null] = ACTIONS(508),
    [anon_sym_while] = ACTIONS(508),
    [anon_sym_publish] = ACTIONS(508),
    [anon_sym_u32] = ACTIONS(508),
    [anon_sym_i64] = ACTIONS(508),
    [anon_sym_f32] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [anon_sym_i32] = ACTIONS(508),
  },
  [155] = {
    [sym_case_statement] = STATE(203),
    [aux_sym_switch_statement_repeat1] = STATE(203),
    [sym_default_statement] = STATE(204),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(514),
  },
  [156] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(145),
    [sym_readonly] = ACTIONS(145),
    [anon_sym_s16] = ACTIONS(145),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_u16] = ACTIONS(145),
    [anon_sym_s8] = ACTIONS(145),
    [anon_sym_u64] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_i16] = ACTIONS(145),
    [sym_is_declare] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_end] = ACTIONS(145),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_u8] = ACTIONS(145),
    [anon_sym_f64] = ACTIONS(145),
    [anon_sym_i8] = ACTIONS(145),
    [anon_sym_method] = ACTIONS(145),
    [anon_sym_s32] = ACTIONS(145),
    [anon_sym_publish] = ACTIONS(145),
    [anon_sym_u32] = ACTIONS(145),
    [anon_sym_i64] = ACTIONS(145),
    [anon_sym_f32] = ACTIONS(145),
    [sym_is_external] = ACTIONS(145),
    [anon_sym_i32] = ACTIONS(145),
  },
  [157] = {
    [aux_sym_compound_macro_repeat1] = STATE(88),
    [sym_parameter_list] = STATE(206),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(54),
  },
  [158] = {
    [anon_sym_DOT] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_COLON_EQ] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(518),
    [anon_sym_DASH_EQ] = ACTIONS(518),
    [anon_sym_GT_GT] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(520),
    [anon_sym_GT_EQ] = ACTIONS(518),
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_PLUS_PLUS] = ACTIONS(518),
    [anon_sym_PERCENT_EQ] = ACTIONS(518),
    [anon_sym_LT_LT_EQ] = ACTIONS(518),
    [anon_sym_PIPE_EQ] = ACTIONS(518),
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_DOT] = ACTIONS(518),
    [anon_sym_PLUS] = ACTIONS(520),
    [anon_sym_AMP] = ACTIONS(520),
    [anon_sym_PIPE_PIPE] = ACTIONS(518),
    [anon_sym_BANG_EQ] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_LT_EQ] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(520),
    [anon_sym_DASH_DASH] = ACTIONS(520),
    [anon_sym_AMP_EQ] = ACTIONS(518),
    [anon_sym_STAR_EQ] = ACTIONS(518),
    [anon_sym_CARET_EQ] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(520),
    [anon_sym_STAR] = ACTIONS(520),
    [anon_sym_EQ_EQ] = ACTIONS(518),
    [anon_sym_PLUS_EQ] = ACTIONS(518),
    [anon_sym_CARET] = ACTIONS(520),
    [anon_sym_SLASH] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_SLASH_EQ] = ACTIONS(518),
    [anon_sym_GT_GT_EQ] = ACTIONS(518),
    [sym__comment] = ACTIONS(3),
  },
  [160] = {
    [anon_sym_COLON_EQ] = ACTIONS(522),
    [anon_sym_AMP_AMP] = ACTIONS(522),
    [anon_sym_DASH_EQ] = ACTIONS(522),
    [anon_sym_GT_GT] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(522),
    [anon_sym_PLUS_PLUS] = ACTIONS(522),
    [anon_sym_PERCENT_EQ] = ACTIONS(522),
    [anon_sym_LT_LT_EQ] = ACTIONS(522),
    [anon_sym_PIPE_EQ] = ACTIONS(522),
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_DOT] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_AMP] = ACTIONS(524),
    [anon_sym_PIPE_PIPE] = ACTIONS(522),
    [anon_sym_BANG_EQ] = ACTIONS(522),
    [anon_sym_LT_LT] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(522),
    [anon_sym_GT] = ACTIONS(524),
    [anon_sym_DASH_DASH] = ACTIONS(524),
    [anon_sym_AMP_EQ] = ACTIONS(522),
    [anon_sym_STAR_EQ] = ACTIONS(522),
    [anon_sym_CARET_EQ] = ACTIONS(522),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [anon_sym_PLUS_EQ] = ACTIONS(522),
    [anon_sym_CARET] = ACTIONS(524),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_LT] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(522),
    [anon_sym_GT_GT_EQ] = ACTIONS(522),
    [sym__comment] = ACTIONS(3),
  },
  [161] = {
    [aux_sym_string_repeat1] = STATE(161),
    [sym__comment] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(526),
    [sym__space] = ACTIONS(171),
    [aux_sym_string_token1] = ACTIONS(528),
  },
  [162] = {
    [anon_sym_COLON_EQ] = ACTIONS(531),
    [anon_sym_AMP_EQ] = ACTIONS(531),
    [anon_sym_STAR_EQ] = ACTIONS(531),
    [anon_sym_CARET_EQ] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_PERCENT_EQ] = ACTIONS(531),
    [anon_sym_LT_LT_EQ] = ACTIONS(531),
    [anon_sym_PIPE_EQ] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_PLUS_EQ] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_SLASH_EQ] = ACTIONS(531),
    [anon_sym_GT_GT_EQ] = ACTIONS(531),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [sym__value] = STATE(207),
    [sym__number] = STATE(207),
    [sym_group_expression] = STATE(207),
    [sym__literal] = STATE(207),
    [sym_string] = STATE(207),
    [sym__collection_or_value] = STATE(207),
    [sym_character] = STATE(207),
    [sym_collection] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(533),
    [sym_integer] = ACTIONS(535),
    [sym_identifier] = ACTIONS(535),
    [sym_float] = ACTIONS(533),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(535),
    [sym_binary] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(535),
    [sym_long] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [164] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(208),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(336),
  },
  [165] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(210),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(210),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(210),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_end_while] = STATE(211),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(539),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [166] = {
    [anon_sym_DQUOTE] = ACTIONS(541),
    [sym_float] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(541),
    [sym_hex] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(541),
    [sym_null] = ACTIONS(543),
    [sym_integer] = ACTIONS(543),
    [sym_binary] = ACTIONS(541),
    [sym_oct] = ACTIONS(543),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [sym_long] = ACTIONS(541),
  },
  [167] = {
    [anon_sym_COLON_EQ] = ACTIONS(545),
    [anon_sym_AMP_AMP] = ACTIONS(545),
    [anon_sym_DASH_EQ] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(547),
    [anon_sym_PERCENT] = ACTIONS(547),
    [anon_sym_GT_EQ] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_PLUS_PLUS] = ACTIONS(545),
    [anon_sym_PERCENT_EQ] = ACTIONS(545),
    [anon_sym_LT_LT_EQ] = ACTIONS(545),
    [anon_sym_PIPE_EQ] = ACTIONS(545),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_AMP] = ACTIONS(547),
    [anon_sym_PIPE_PIPE] = ACTIONS(545),
    [anon_sym_BANG_EQ] = ACTIONS(545),
    [anon_sym_LT_LT] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_LT_EQ] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_DASH_DASH] = ACTIONS(547),
    [anon_sym_AMP_EQ] = ACTIONS(545),
    [anon_sym_STAR_EQ] = ACTIONS(545),
    [anon_sym_CARET_EQ] = ACTIONS(545),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(547),
    [anon_sym_STAR] = ACTIONS(547),
    [anon_sym_EQ_EQ] = ACTIONS(545),
    [anon_sym_PLUS_EQ] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(547),
    [anon_sym_SLASH] = ACTIONS(547),
    [anon_sym_LT] = ACTIONS(547),
    [anon_sym_SLASH_EQ] = ACTIONS(545),
    [anon_sym_GT_GT_EQ] = ACTIONS(545),
    [sym__comment] = ACTIONS(3),
  },
  [168] = {
    [sym__value] = STATE(212),
    [sym__number] = STATE(212),
    [sym_group_expression] = STATE(212),
    [sym_character] = STATE(212),
    [sym__literal] = STATE(212),
    [sym_string] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(549),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(549),
    [sym_null] = ACTIONS(551),
    [sym_integer] = ACTIONS(551),
    [sym_binary] = ACTIONS(549),
    [sym_oct] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(551),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(549),
  },
  [169] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(553),
  },
  [170] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_DOT] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
  },
  [171] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(557),
    [sym_readonly] = ACTIONS(557),
    [anon_sym_s16] = ACTIONS(557),
    [anon_sym_protected] = ACTIONS(557),
    [anon_sym_u16] = ACTIONS(557),
    [anon_sym_s8] = ACTIONS(557),
    [anon_sym_u64] = ACTIONS(557),
    [anon_sym_enum] = ACTIONS(557),
    [anon_sym_i16] = ACTIONS(557),
    [sym_is_declare] = ACTIONS(557),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(557),
    [anon_sym_end] = ACTIONS(557),
    [anon_sym_private] = ACTIONS(557),
    [anon_sym_u8] = ACTIONS(557),
    [anon_sym_f64] = ACTIONS(557),
    [anon_sym_i8] = ACTIONS(557),
    [anon_sym_method] = ACTIONS(557),
    [anon_sym_s32] = ACTIONS(557),
    [anon_sym_publish] = ACTIONS(557),
    [anon_sym_u32] = ACTIONS(557),
    [anon_sym_i64] = ACTIONS(557),
    [anon_sym_f32] = ACTIONS(557),
    [sym_is_external] = ACTIONS(557),
    [anon_sym_i32] = ACTIONS(557),
  },
  [172] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(559),
  },
  [173] = {
    [sym_static_assignment] = STATE(214),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(472),
  },
  [174] = {
    [sym_oct] = ACTIONS(563),
    [sym_long] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(563),
    [sym_hex] = ACTIONS(565),
    [anon_sym_if] = ACTIONS(563),
    [anon_sym_switch] = ACTIONS(563),
    [sym_identifier] = ACTIONS(563),
    [anon_sym_end] = ACTIONS(563),
    [anon_sym_private] = ACTIONS(563),
    [anon_sym_u8] = ACTIONS(563),
    [anon_sym_f64] = ACTIONS(563),
    [sym_float] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_i8] = ACTIONS(563),
    [anon_sym_return] = ACTIONS(563),
    [anon_sym_s32] = ACTIONS(563),
    [sym_binary] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(565),
    [sym_readonly] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(563),
    [anon_sym_u16] = ACTIONS(563),
    [anon_sym_s8] = ACTIONS(563),
    [anon_sym_u64] = ACTIONS(563),
    [sym_integer] = ACTIONS(563),
    [anon_sym_i16] = ACTIONS(563),
    [sym_double] = ACTIONS(565),
    [anon_sym_section] = ACTIONS(563),
    [anon_sym_goto] = ACTIONS(563),
    [anon_sym_LBRACE] = ACTIONS(565),
    [sym_null] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(563),
    [anon_sym_publish] = ACTIONS(563),
    [anon_sym_u32] = ACTIONS(563),
    [anon_sym_i64] = ACTIONS(563),
    [anon_sym_f32] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(563),
    [anon_sym_i32] = ACTIONS(563),
  },
  [175] = {
    [sym_return_list] = STATE(216),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
  },
  [176] = {
    [anon_sym_DOT] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [177] = {
    [sym_pointer] = STATE(218),
    [sym_array] = STATE(217),
    [aux_sym_type_repeat2] = STATE(217),
    [aux_sym_type_repeat1] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [178] = {
    [anon_sym_DOT] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [179] = {
    [aux_sym__comma_list_types_repeat1] = STATE(220),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(575),
  },
  [180] = {
    [anon_sym_s16] = ACTIONS(577),
    [sym_is_declare] = ACTIONS(577),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_COMMA] = ACTIONS(579),
    [anon_sym_end] = ACTIONS(577),
    [anon_sym_private] = ACTIONS(577),
    [anon_sym_u8] = ACTIONS(577),
    [anon_sym_f64] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_DOT] = ACTIONS(579),
    [anon_sym_i8] = ACTIONS(577),
    [anon_sym_s32] = ACTIONS(577),
    [sym_is_external] = ACTIONS(577),
    [anon_sym_function] = ACTIONS(577),
    [sym_readonly] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(577),
    [anon_sym_u16] = ACTIONS(577),
    [anon_sym_s8] = ACTIONS(577),
    [anon_sym_u64] = ACTIONS(577),
    [anon_sym_enum] = ACTIONS(577),
    [anon_sym_i16] = ACTIONS(577),
    [anon_sym_method] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(577),
    [anon_sym_u32] = ACTIONS(577),
    [anon_sym_i64] = ACTIONS(577),
    [anon_sym_f32] = ACTIONS(577),
    [anon_sym_i32] = ACTIONS(577),
  },
  [181] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(581),
  },
  [182] = {
    [anon_sym_DOT] = ACTIONS(583),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [183] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
  },
  [184] = {
    [aux_sym_enum_definition_repeat1] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(587),
  },
  [185] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(563),
    [sym_readonly] = ACTIONS(563),
    [anon_sym_s16] = ACTIONS(563),
    [anon_sym_protected] = ACTIONS(563),
    [anon_sym_u16] = ACTIONS(563),
    [anon_sym_s8] = ACTIONS(563),
    [anon_sym_u64] = ACTIONS(563),
    [anon_sym_enum] = ACTIONS(563),
    [anon_sym_i16] = ACTIONS(563),
    [sym_is_declare] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(563),
    [anon_sym_end] = ACTIONS(563),
    [anon_sym_private] = ACTIONS(563),
    [anon_sym_u8] = ACTIONS(563),
    [anon_sym_f64] = ACTIONS(563),
    [anon_sym_i8] = ACTIONS(563),
    [anon_sym_method] = ACTIONS(563),
    [anon_sym_s32] = ACTIONS(563),
    [anon_sym_publish] = ACTIONS(563),
    [anon_sym_u32] = ACTIONS(563),
    [anon_sym_i64] = ACTIONS(563),
    [anon_sym_f32] = ACTIONS(563),
    [sym_is_external] = ACTIONS(563),
    [anon_sym_i32] = ACTIONS(563),
  },
  [186] = {
    [anon_sym_DOT] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [187] = {
    [aux_sym_string_repeat1] = STATE(225),
    [sym__comment] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym__space] = ACTIONS(171),
    [aux_sym_string_token1] = ACTIONS(594),
  },
  [188] = {
    [sym__escape_sequence] = STATE(226),
    [anon_sym_BSLASHa] = ACTIONS(596),
    [anon_sym_BSLASHt] = ACTIONS(596),
    [anon_sym_BSLASH0] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(596),
    [anon_sym_BSLASHv] = ACTIONS(596),
    [aux_sym_character_token1] = ACTIONS(598),
    [anon_sym_BSLASHf] = ACTIONS(596),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(596),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(596),
    [anon_sym_BSLASHn] = ACTIONS(596),
  },
  [189] = {
    [sym__value] = STATE(103),
    [sym__number] = STATE(103),
    [sym_group_expression] = STATE(103),
    [sym__comma_list_collection_or_value] = STATE(227),
    [sym__literal] = STATE(103),
    [sym_string] = STATE(103),
    [sym__collection_or_value] = STATE(103),
    [sym_character] = STATE(103),
    [sym_collection] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(181),
    [sym_integer] = ACTIONS(183),
    [sym_identifier] = ACTIONS(183),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(183),
    [sym_binary] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(183),
    [sym_long] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [190] = {
    [sym__value] = STATE(228),
    [sym__number] = STATE(228),
    [sym_group_expression] = STATE(228),
    [sym__literal] = STATE(228),
    [sym_string] = STATE(228),
    [sym_assignment_expression] = STATE(229),
    [sym_unary_op] = STATE(230),
    [sym__collection_or_value] = STATE(57),
    [sym_character] = STATE(228),
    [sym_collection] = STATE(57),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_hex] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(600),
    [sym_integer] = ACTIONS(602),
    [anon_sym_DASH] = ACTIONS(185),
    [sym_identifier] = ACTIONS(602),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_STAR] = ACTIONS(191),
    [sym_float] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(185),
    [sym_null] = ACTIONS(602),
    [sym_binary] = ACTIONS(600),
    [sym_oct] = ACTIONS(602),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(600),
    [anon_sym_LPAREN] = ACTIONS(73),
  },
  [191] = {
    [sym_static_assignment] = STATE(214),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(470),
    [anon_sym_COLON_EQ] = ACTIONS(279),
    [sym_readonly] = ACTIONS(470),
    [anon_sym_s16] = ACTIONS(470),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_u16] = ACTIONS(470),
    [anon_sym_s8] = ACTIONS(470),
    [anon_sym_u64] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(470),
    [anon_sym_i16] = ACTIONS(470),
    [sym_is_declare] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_end] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_u8] = ACTIONS(470),
    [anon_sym_f64] = ACTIONS(470),
    [anon_sym_i8] = ACTIONS(470),
    [anon_sym_method] = ACTIONS(470),
    [anon_sym_s32] = ACTIONS(470),
    [anon_sym_publish] = ACTIONS(470),
    [anon_sym_u32] = ACTIONS(470),
    [anon_sym_i64] = ACTIONS(470),
    [anon_sym_f32] = ACTIONS(470),
    [sym_is_external] = ACTIONS(470),
    [anon_sym_i32] = ACTIONS(470),
  },
  [192] = {
    [sym_return_list] = STATE(231),
    [anon_sym_returns] = ACTIONS(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
  },
  [193] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(604),
  },
  [194] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(194),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(606),
  },
  [195] = {
    [sym_oct] = ACTIONS(547),
    [sym_long] = ACTIONS(545),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(547),
    [sym_hex] = ACTIONS(545),
    [anon_sym_if] = ACTIONS(547),
    [anon_sym_switch] = ACTIONS(547),
    [sym_identifier] = ACTIONS(547),
    [anon_sym_private] = ACTIONS(547),
    [anon_sym_u8] = ACTIONS(547),
    [anon_sym_f64] = ACTIONS(547),
    [sym_float] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_i8] = ACTIONS(547),
    [anon_sym_return] = ACTIONS(547),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_s32] = ACTIONS(547),
    [sym_binary] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [sym_readonly] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(547),
    [anon_sym_u16] = ACTIONS(547),
    [anon_sym_s8] = ACTIONS(547),
    [anon_sym_u64] = ACTIONS(547),
    [sym_integer] = ACTIONS(547),
    [anon_sym_i16] = ACTIONS(547),
    [sym_double] = ACTIONS(545),
    [anon_sym_section] = ACTIONS(547),
    [anon_sym_goto] = ACTIONS(547),
    [anon_sym_LBRACE] = ACTIONS(545),
    [sym_null] = ACTIONS(547),
    [anon_sym_while] = ACTIONS(547),
    [anon_sym_publish] = ACTIONS(547),
    [anon_sym_u32] = ACTIONS(547),
    [anon_sym_i64] = ACTIONS(547),
    [anon_sym_f32] = ACTIONS(547),
    [anon_sym_LPAREN] = ACTIONS(547),
    [anon_sym_i32] = ACTIONS(547),
  },
  [196] = {
    [sym__value] = STATE(232),
    [sym__number] = STATE(232),
    [sym_group_expression] = STATE(232),
    [sym_character] = STATE(232),
    [sym__literal] = STATE(232),
    [sym_string] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(609),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(609),
    [sym_null] = ACTIONS(611),
    [sym_integer] = ACTIONS(611),
    [sym_binary] = ACTIONS(609),
    [sym_oct] = ACTIONS(611),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(611),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(609),
  },
  [197] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(613),
  },
  [198] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(615),
  },
  [199] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_end_if] = STATE(235),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(506),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [200] = {
    [anon_sym_DOT] = ACTIONS(617),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [201] = {
    [sym_group_expression] = STATE(236),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(163),
  },
  [202] = {
    [anon_sym_DOT] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [sym_case_statement] = STATE(238),
    [aux_sym_switch_statement_repeat1] = STATE(238),
    [sym_default_statement] = STATE(239),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(514),
  },
  [204] = {
    [sym_end_switch] = STATE(241),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(621),
  },
  [205] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(293),
    [sym_readonly] = ACTIONS(293),
    [anon_sym_s16] = ACTIONS(293),
    [anon_sym_protected] = ACTIONS(293),
    [anon_sym_u16] = ACTIONS(293),
    [anon_sym_s8] = ACTIONS(293),
    [anon_sym_u64] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_i16] = ACTIONS(293),
    [sym_is_declare] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [anon_sym_private] = ACTIONS(293),
    [anon_sym_u8] = ACTIONS(293),
    [anon_sym_f64] = ACTIONS(293),
    [anon_sym_i8] = ACTIONS(293),
    [anon_sym_method] = ACTIONS(293),
    [anon_sym_s32] = ACTIONS(293),
    [anon_sym_publish] = ACTIONS(293),
    [anon_sym_u32] = ACTIONS(293),
    [anon_sym_i64] = ACTIONS(293),
    [anon_sym_f32] = ACTIONS(293),
    [sym_is_external] = ACTIONS(293),
    [anon_sym_i32] = ACTIONS(293),
  },
  [206] = {
    [anon_sym_DOT] = ACTIONS(623),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(625),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(625),
  },
  [208] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(208),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(625),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(627),
  },
  [209] = {
    [anon_sym_while] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_switch_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_end_while] = STATE(244),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(539),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [211] = {
    [anon_sym_DOT] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(634),
  },
  [213] = {
    [anon_sym_COLON_EQ] = ACTIONS(636),
    [anon_sym_AMP_AMP] = ACTIONS(636),
    [anon_sym_DASH_EQ] = ACTIONS(636),
    [anon_sym_GT_GT] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(638),
    [anon_sym_GT_EQ] = ACTIONS(636),
    [anon_sym_RBRACE] = ACTIONS(636),
    [anon_sym_PLUS_PLUS] = ACTIONS(636),
    [anon_sym_PERCENT_EQ] = ACTIONS(636),
    [anon_sym_LT_LT_EQ] = ACTIONS(636),
    [anon_sym_PIPE_EQ] = ACTIONS(636),
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_PLUS] = ACTIONS(638),
    [anon_sym_AMP] = ACTIONS(638),
    [anon_sym_PIPE_PIPE] = ACTIONS(636),
    [anon_sym_BANG_EQ] = ACTIONS(636),
    [anon_sym_LT_LT] = ACTIONS(638),
    [anon_sym_PIPE] = ACTIONS(638),
    [anon_sym_LT_EQ] = ACTIONS(636),
    [anon_sym_GT] = ACTIONS(638),
    [anon_sym_DASH_DASH] = ACTIONS(638),
    [anon_sym_AMP_EQ] = ACTIONS(636),
    [anon_sym_STAR_EQ] = ACTIONS(636),
    [anon_sym_CARET_EQ] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(638),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_EQ_EQ] = ACTIONS(636),
    [anon_sym_PLUS_EQ] = ACTIONS(636),
    [anon_sym_CARET] = ACTIONS(638),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_LT] = ACTIONS(638),
    [anon_sym_SLASH_EQ] = ACTIONS(636),
    [anon_sym_GT_GT_EQ] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_s16] = ACTIONS(640),
    [sym_is_declare] = ACTIONS(640),
    [sym_identifier] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_end] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_u8] = ACTIONS(640),
    [anon_sym_f64] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_DOT] = ACTIONS(642),
    [anon_sym_i8] = ACTIONS(640),
    [anon_sym_s32] = ACTIONS(640),
    [sym_is_external] = ACTIONS(640),
    [anon_sym_function] = ACTIONS(640),
    [sym_readonly] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_u16] = ACTIONS(640),
    [anon_sym_s8] = ACTIONS(640),
    [anon_sym_u64] = ACTIONS(640),
    [anon_sym_enum] = ACTIONS(640),
    [anon_sym_i16] = ACTIONS(640),
    [anon_sym_method] = ACTIONS(640),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(640),
    [anon_sym_u32] = ACTIONS(640),
    [anon_sym_i64] = ACTIONS(640),
    [anon_sym_f32] = ACTIONS(640),
    [anon_sym_i32] = ACTIONS(640),
  },
  [215] = {
    [sym_oct] = ACTIONS(644),
    [sym_long] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(644),
    [sym_hex] = ACTIONS(646),
    [anon_sym_if] = ACTIONS(644),
    [anon_sym_switch] = ACTIONS(644),
    [sym_identifier] = ACTIONS(644),
    [anon_sym_end] = ACTIONS(644),
    [anon_sym_private] = ACTIONS(644),
    [anon_sym_u8] = ACTIONS(644),
    [anon_sym_f64] = ACTIONS(644),
    [sym_float] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [anon_sym_i8] = ACTIONS(644),
    [anon_sym_return] = ACTIONS(644),
    [anon_sym_s32] = ACTIONS(644),
    [sym_binary] = ACTIONS(646),
    [anon_sym_DQUOTE] = ACTIONS(646),
    [sym_readonly] = ACTIONS(644),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(644),
    [anon_sym_u16] = ACTIONS(644),
    [anon_sym_s8] = ACTIONS(644),
    [anon_sym_u64] = ACTIONS(644),
    [sym_integer] = ACTIONS(644),
    [anon_sym_i16] = ACTIONS(644),
    [sym_double] = ACTIONS(646),
    [anon_sym_section] = ACTIONS(644),
    [anon_sym_goto] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(646),
    [sym_null] = ACTIONS(644),
    [anon_sym_while] = ACTIONS(644),
    [anon_sym_publish] = ACTIONS(644),
    [anon_sym_u32] = ACTIONS(644),
    [anon_sym_i64] = ACTIONS(644),
    [anon_sym_f32] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(644),
    [anon_sym_i32] = ACTIONS(644),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [sym_array] = STATE(247),
    [aux_sym_type_repeat2] = STATE(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(650),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(650),
  },
  [218] = {
    [sym_pointer] = STATE(249),
    [sym_array] = STATE(248),
    [aux_sym_type_repeat2] = STATE(248),
    [aux_sym_type_repeat1] = STATE(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(650),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(650),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [219] = {
    [sym_primitive_type] = STATE(177),
    [sym_type] = STATE(250),
    [sym__base_type] = STATE(177),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [220] = {
    [aux_sym__comma_list_types_repeat1] = STATE(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(575),
  },
  [221] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(654),
    [sym_readonly] = ACTIONS(654),
    [anon_sym_s16] = ACTIONS(654),
    [anon_sym_protected] = ACTIONS(654),
    [anon_sym_u16] = ACTIONS(654),
    [anon_sym_s8] = ACTIONS(654),
    [anon_sym_u64] = ACTIONS(654),
    [anon_sym_enum] = ACTIONS(654),
    [anon_sym_i16] = ACTIONS(654),
    [sym_is_declare] = ACTIONS(654),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(654),
    [anon_sym_end] = ACTIONS(654),
    [anon_sym_private] = ACTIONS(654),
    [anon_sym_u8] = ACTIONS(654),
    [anon_sym_f64] = ACTIONS(654),
    [anon_sym_i8] = ACTIONS(654),
    [anon_sym_method] = ACTIONS(654),
    [anon_sym_s32] = ACTIONS(654),
    [anon_sym_publish] = ACTIONS(654),
    [anon_sym_u32] = ACTIONS(654),
    [anon_sym_i64] = ACTIONS(654),
    [anon_sym_f32] = ACTIONS(654),
    [sym_is_external] = ACTIONS(654),
    [anon_sym_i32] = ACTIONS(654),
  },
  [222] = {
    [anon_sym_DOT] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(644),
    [sym_readonly] = ACTIONS(644),
    [anon_sym_s16] = ACTIONS(644),
    [anon_sym_protected] = ACTIONS(644),
    [anon_sym_u16] = ACTIONS(644),
    [anon_sym_s8] = ACTIONS(644),
    [anon_sym_u64] = ACTIONS(644),
    [anon_sym_enum] = ACTIONS(644),
    [anon_sym_i16] = ACTIONS(644),
    [sym_is_declare] = ACTIONS(644),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(644),
    [anon_sym_end] = ACTIONS(644),
    [anon_sym_private] = ACTIONS(644),
    [anon_sym_u8] = ACTIONS(644),
    [anon_sym_f64] = ACTIONS(644),
    [anon_sym_i8] = ACTIONS(644),
    [anon_sym_method] = ACTIONS(644),
    [anon_sym_s32] = ACTIONS(644),
    [anon_sym_publish] = ACTIONS(644),
    [anon_sym_u32] = ACTIONS(644),
    [anon_sym_i64] = ACTIONS(644),
    [anon_sym_f32] = ACTIONS(644),
    [sym_is_external] = ACTIONS(644),
    [anon_sym_i32] = ACTIONS(644),
  },
  [224] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(322),
    [sym_readonly] = ACTIONS(322),
    [anon_sym_s16] = ACTIONS(322),
    [anon_sym_protected] = ACTIONS(322),
    [anon_sym_u16] = ACTIONS(322),
    [anon_sym_s8] = ACTIONS(322),
    [anon_sym_u64] = ACTIONS(322),
    [anon_sym_enum] = ACTIONS(322),
    [anon_sym_i16] = ACTIONS(322),
    [sym_is_declare] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(322),
    [anon_sym_end] = ACTIONS(322),
    [anon_sym_private] = ACTIONS(322),
    [anon_sym_u8] = ACTIONS(322),
    [anon_sym_f64] = ACTIONS(322),
    [anon_sym_i8] = ACTIONS(322),
    [anon_sym_method] = ACTIONS(322),
    [anon_sym_s32] = ACTIONS(322),
    [anon_sym_publish] = ACTIONS(322),
    [anon_sym_u32] = ACTIONS(322),
    [anon_sym_i64] = ACTIONS(322),
    [anon_sym_f32] = ACTIONS(322),
    [sym_is_external] = ACTIONS(322),
    [anon_sym_i32] = ACTIONS(322),
  },
  [225] = {
    [aux_sym_string_repeat1] = STATE(161),
    [sym__comment] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(658),
    [sym__space] = ACTIONS(171),
    [aux_sym_string_token1] = ACTIONS(326),
  },
  [226] = {
    [anon_sym_SQUOTE] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(662),
  },
  [228] = {
    [sym_binary_op] = STATE(257),
    [sym_assignment_post_op] = STATE(110),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_AMP_AMP] = ACTIONS(344),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(346),
    [anon_sym_GT_EQ] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_PLUS] = ACTIONS(346),
    [anon_sym_AMP] = ACTIONS(346),
    [anon_sym_PIPE_PIPE] = ACTIONS(344),
    [anon_sym_BANG_EQ] = ACTIONS(344),
    [anon_sym_LT_LT] = ACTIONS(346),
    [anon_sym_PIPE] = ACTIONS(346),
    [anon_sym_LT_EQ] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_DASH_DASH] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_EQ_EQ] = ACTIONS(344),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_CARET] = ACTIONS(346),
    [anon_sym_SLASH] = ACTIONS(346),
    [anon_sym_LT] = ACTIONS(346),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(664),
  },
  [230] = {
    [sym__value] = STATE(258),
    [sym__number] = STATE(258),
    [sym_group_expression] = STATE(258),
    [sym_character] = STATE(258),
    [sym__literal] = STATE(258),
    [sym_string] = STATE(258),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(666),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(666),
    [sym_null] = ACTIONS(668),
    [sym_integer] = ACTIONS(668),
    [sym_binary] = ACTIONS(666),
    [sym_oct] = ACTIONS(668),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(668),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(666),
  },
  [231] = {
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [232] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(672),
  },
  [233] = {
    [sym_oct] = ACTIONS(638),
    [sym_long] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(638),
    [sym_hex] = ACTIONS(636),
    [anon_sym_if] = ACTIONS(638),
    [anon_sym_switch] = ACTIONS(638),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_u8] = ACTIONS(638),
    [anon_sym_f64] = ACTIONS(638),
    [sym_float] = ACTIONS(636),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_i8] = ACTIONS(638),
    [anon_sym_return] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_s32] = ACTIONS(638),
    [sym_binary] = ACTIONS(636),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [sym_readonly] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_u16] = ACTIONS(638),
    [anon_sym_s8] = ACTIONS(638),
    [anon_sym_u64] = ACTIONS(638),
    [sym_integer] = ACTIONS(638),
    [anon_sym_i16] = ACTIONS(638),
    [sym_double] = ACTIONS(636),
    [anon_sym_section] = ACTIONS(638),
    [anon_sym_goto] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(636),
    [sym_null] = ACTIONS(638),
    [anon_sym_while] = ACTIONS(638),
    [anon_sym_publish] = ACTIONS(638),
    [anon_sym_u32] = ACTIONS(638),
    [anon_sym_i64] = ACTIONS(638),
    [anon_sym_f32] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [anon_sym_i32] = ACTIONS(638),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(674),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_DOT] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_DOT] = ACTIONS(678),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(264),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym_end_default] = STATE(263),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(264),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(264),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [238] = {
    [sym_case_statement] = STATE(238),
    [aux_sym_switch_statement_repeat1] = STATE(238),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(685),
  },
  [239] = {
    [sym_end_switch] = STATE(265),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(621),
  },
  [240] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(687),
    [sym__comment] = ACTIONS(3),
  },
  [241] = {
    [anon_sym_DOT] = ACTIONS(689),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(496),
    [sym_readonly] = ACTIONS(496),
    [anon_sym_s16] = ACTIONS(496),
    [anon_sym_protected] = ACTIONS(496),
    [anon_sym_u16] = ACTIONS(496),
    [anon_sym_s8] = ACTIONS(496),
    [anon_sym_u64] = ACTIONS(496),
    [anon_sym_enum] = ACTIONS(496),
    [anon_sym_i16] = ACTIONS(496),
    [sym_is_declare] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(496),
    [anon_sym_end] = ACTIONS(496),
    [anon_sym_private] = ACTIONS(496),
    [anon_sym_u8] = ACTIONS(496),
    [anon_sym_f64] = ACTIONS(496),
    [anon_sym_i8] = ACTIONS(496),
    [anon_sym_method] = ACTIONS(496),
    [anon_sym_s32] = ACTIONS(496),
    [anon_sym_publish] = ACTIONS(496),
    [anon_sym_u32] = ACTIONS(496),
    [anon_sym_i64] = ACTIONS(496),
    [anon_sym_f32] = ACTIONS(496),
    [sym_is_external] = ACTIONS(496),
    [anon_sym_i32] = ACTIONS(496),
  },
  [243] = {
    [anon_sym_DOT] = ACTIONS(691),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_COLON_EQ] = ACTIONS(695),
    [anon_sym_AMP_AMP] = ACTIONS(695),
    [anon_sym_DASH_EQ] = ACTIONS(695),
    [anon_sym_GT_GT] = ACTIONS(697),
    [anon_sym_PERCENT] = ACTIONS(697),
    [anon_sym_GT_EQ] = ACTIONS(695),
    [anon_sym_RBRACE] = ACTIONS(695),
    [anon_sym_PLUS_PLUS] = ACTIONS(695),
    [anon_sym_PERCENT_EQ] = ACTIONS(695),
    [anon_sym_LT_LT_EQ] = ACTIONS(695),
    [anon_sym_PIPE_EQ] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_PLUS] = ACTIONS(697),
    [anon_sym_AMP] = ACTIONS(697),
    [anon_sym_PIPE_PIPE] = ACTIONS(695),
    [anon_sym_BANG_EQ] = ACTIONS(695),
    [anon_sym_LT_LT] = ACTIONS(697),
    [anon_sym_PIPE] = ACTIONS(697),
    [anon_sym_LT_EQ] = ACTIONS(695),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_DASH_DASH] = ACTIONS(697),
    [anon_sym_AMP_EQ] = ACTIONS(695),
    [anon_sym_STAR_EQ] = ACTIONS(695),
    [anon_sym_CARET_EQ] = ACTIONS(695),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(697),
    [anon_sym_STAR] = ACTIONS(697),
    [anon_sym_EQ_EQ] = ACTIONS(695),
    [anon_sym_PLUS_EQ] = ACTIONS(695),
    [anon_sym_CARET] = ACTIONS(697),
    [anon_sym_SLASH] = ACTIONS(697),
    [anon_sym_LT] = ACTIONS(697),
    [anon_sym_SLASH_EQ] = ACTIONS(695),
    [anon_sym_GT_GT_EQ] = ACTIONS(695),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [sym_oct] = ACTIONS(699),
    [sym_long] = ACTIONS(701),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(699),
    [sym_hex] = ACTIONS(701),
    [anon_sym_if] = ACTIONS(699),
    [anon_sym_switch] = ACTIONS(699),
    [sym_identifier] = ACTIONS(699),
    [anon_sym_end] = ACTIONS(699),
    [anon_sym_private] = ACTIONS(699),
    [anon_sym_u8] = ACTIONS(699),
    [anon_sym_f64] = ACTIONS(699),
    [sym_float] = ACTIONS(701),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [anon_sym_i8] = ACTIONS(699),
    [anon_sym_return] = ACTIONS(699),
    [anon_sym_s32] = ACTIONS(699),
    [sym_binary] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [sym_readonly] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(699),
    [anon_sym_u16] = ACTIONS(699),
    [anon_sym_s8] = ACTIONS(699),
    [anon_sym_u64] = ACTIONS(699),
    [sym_integer] = ACTIONS(699),
    [anon_sym_i16] = ACTIONS(699),
    [sym_double] = ACTIONS(701),
    [anon_sym_section] = ACTIONS(699),
    [anon_sym_goto] = ACTIONS(699),
    [anon_sym_LBRACE] = ACTIONS(701),
    [sym_null] = ACTIONS(699),
    [anon_sym_while] = ACTIONS(699),
    [anon_sym_publish] = ACTIONS(699),
    [anon_sym_u32] = ACTIONS(699),
    [anon_sym_i64] = ACTIONS(699),
    [anon_sym_f32] = ACTIONS(699),
    [anon_sym_LPAREN] = ACTIONS(699),
    [anon_sym_i32] = ACTIONS(699),
  },
  [247] = {
    [sym_array] = STATE(247),
    [aux_sym_type_repeat2] = STATE(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_DOT] = ACTIONS(703),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(703),
  },
  [248] = {
    [sym_array] = STATE(247),
    [aux_sym_type_repeat2] = STATE(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(705),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(705),
  },
  [249] = {
    [sym_pointer] = STATE(249),
    [aux_sym_type_repeat1] = STATE(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(447),
  },
  [250] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(707),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(707),
  },
  [251] = {
    [aux_sym__comma_list_types_repeat1] = STATE(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(707),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(709),
  },
  [252] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(712),
    [sym_readonly] = ACTIONS(712),
    [anon_sym_s16] = ACTIONS(712),
    [anon_sym_protected] = ACTIONS(712),
    [anon_sym_u16] = ACTIONS(712),
    [anon_sym_s8] = ACTIONS(712),
    [anon_sym_u64] = ACTIONS(712),
    [anon_sym_enum] = ACTIONS(712),
    [anon_sym_i16] = ACTIONS(712),
    [sym_is_declare] = ACTIONS(712),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(712),
    [anon_sym_end] = ACTIONS(712),
    [anon_sym_private] = ACTIONS(712),
    [anon_sym_u8] = ACTIONS(712),
    [anon_sym_f64] = ACTIONS(712),
    [anon_sym_i8] = ACTIONS(712),
    [anon_sym_method] = ACTIONS(712),
    [anon_sym_s32] = ACTIONS(712),
    [anon_sym_publish] = ACTIONS(712),
    [anon_sym_u32] = ACTIONS(712),
    [anon_sym_i64] = ACTIONS(712),
    [anon_sym_f32] = ACTIONS(712),
    [sym_is_external] = ACTIONS(712),
    [anon_sym_i32] = ACTIONS(712),
  },
  [253] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(524),
    [sym_readonly] = ACTIONS(524),
    [anon_sym_s16] = ACTIONS(524),
    [anon_sym_protected] = ACTIONS(524),
    [anon_sym_u16] = ACTIONS(524),
    [anon_sym_s8] = ACTIONS(524),
    [anon_sym_u64] = ACTIONS(524),
    [anon_sym_enum] = ACTIONS(524),
    [anon_sym_i16] = ACTIONS(524),
    [sym_is_declare] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(524),
    [anon_sym_end] = ACTIONS(524),
    [anon_sym_private] = ACTIONS(524),
    [anon_sym_u8] = ACTIONS(524),
    [anon_sym_f64] = ACTIONS(524),
    [anon_sym_i8] = ACTIONS(524),
    [anon_sym_method] = ACTIONS(524),
    [anon_sym_s32] = ACTIONS(524),
    [anon_sym_publish] = ACTIONS(524),
    [anon_sym_u32] = ACTIONS(524),
    [anon_sym_i64] = ACTIONS(524),
    [anon_sym_f32] = ACTIONS(524),
    [sym_is_external] = ACTIONS(524),
    [anon_sym_i32] = ACTIONS(524),
  },
  [254] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(520),
    [sym_readonly] = ACTIONS(520),
    [anon_sym_s16] = ACTIONS(520),
    [anon_sym_protected] = ACTIONS(520),
    [anon_sym_u16] = ACTIONS(520),
    [anon_sym_s8] = ACTIONS(520),
    [anon_sym_u64] = ACTIONS(520),
    [anon_sym_enum] = ACTIONS(520),
    [anon_sym_i16] = ACTIONS(520),
    [sym_is_declare] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(520),
    [anon_sym_end] = ACTIONS(520),
    [anon_sym_private] = ACTIONS(520),
    [anon_sym_u8] = ACTIONS(520),
    [anon_sym_f64] = ACTIONS(520),
    [anon_sym_i8] = ACTIONS(520),
    [anon_sym_method] = ACTIONS(520),
    [anon_sym_s32] = ACTIONS(520),
    [anon_sym_publish] = ACTIONS(520),
    [anon_sym_u32] = ACTIONS(520),
    [anon_sym_i64] = ACTIONS(520),
    [anon_sym_f32] = ACTIONS(520),
    [sym_is_external] = ACTIONS(520),
    [anon_sym_i32] = ACTIONS(520),
  },
  [255] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(714),
    [sym_readonly] = ACTIONS(714),
    [anon_sym_s16] = ACTIONS(714),
    [anon_sym_protected] = ACTIONS(714),
    [anon_sym_u16] = ACTIONS(714),
    [anon_sym_s8] = ACTIONS(714),
    [anon_sym_u64] = ACTIONS(714),
    [anon_sym_enum] = ACTIONS(714),
    [anon_sym_i16] = ACTIONS(714),
    [sym_is_declare] = ACTIONS(714),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(714),
    [anon_sym_end] = ACTIONS(714),
    [anon_sym_private] = ACTIONS(714),
    [anon_sym_u8] = ACTIONS(714),
    [anon_sym_f64] = ACTIONS(714),
    [anon_sym_i8] = ACTIONS(714),
    [anon_sym_method] = ACTIONS(714),
    [anon_sym_s32] = ACTIONS(714),
    [anon_sym_publish] = ACTIONS(714),
    [anon_sym_u32] = ACTIONS(714),
    [anon_sym_i64] = ACTIONS(714),
    [anon_sym_f32] = ACTIONS(714),
    [sym_is_external] = ACTIONS(714),
    [anon_sym_i32] = ACTIONS(714),
  },
  [256] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(547),
    [sym_readonly] = ACTIONS(547),
    [anon_sym_s16] = ACTIONS(547),
    [anon_sym_protected] = ACTIONS(547),
    [anon_sym_u16] = ACTIONS(547),
    [anon_sym_s8] = ACTIONS(547),
    [anon_sym_u64] = ACTIONS(547),
    [anon_sym_enum] = ACTIONS(547),
    [anon_sym_i16] = ACTIONS(547),
    [sym_is_declare] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(547),
    [anon_sym_end] = ACTIONS(547),
    [anon_sym_private] = ACTIONS(547),
    [anon_sym_u8] = ACTIONS(547),
    [anon_sym_f64] = ACTIONS(547),
    [anon_sym_i8] = ACTIONS(547),
    [anon_sym_method] = ACTIONS(547),
    [anon_sym_s32] = ACTIONS(547),
    [anon_sym_publish] = ACTIONS(547),
    [anon_sym_u32] = ACTIONS(547),
    [anon_sym_i64] = ACTIONS(547),
    [anon_sym_f32] = ACTIONS(547),
    [sym_is_external] = ACTIONS(547),
    [anon_sym_i32] = ACTIONS(547),
  },
  [257] = {
    [sym__value] = STATE(267),
    [sym__number] = STATE(267),
    [sym_group_expression] = STATE(267),
    [sym_character] = STATE(267),
    [sym__literal] = STATE(267),
    [sym_string] = STATE(267),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_float] = ACTIONS(716),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_hex] = ACTIONS(716),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(716),
    [sym_null] = ACTIONS(718),
    [sym_integer] = ACTIONS(718),
    [sym_binary] = ACTIONS(716),
    [sym_oct] = ACTIONS(718),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(718),
    [anon_sym_LPAREN] = ACTIONS(73),
    [sym_long] = ACTIONS(716),
  },
  [258] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(720),
  },
  [259] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(699),
    [sym_readonly] = ACTIONS(699),
    [anon_sym_s16] = ACTIONS(699),
    [anon_sym_protected] = ACTIONS(699),
    [anon_sym_u16] = ACTIONS(699),
    [anon_sym_s8] = ACTIONS(699),
    [anon_sym_u64] = ACTIONS(699),
    [anon_sym_enum] = ACTIONS(699),
    [anon_sym_i16] = ACTIONS(699),
    [sym_is_declare] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(699),
    [anon_sym_end] = ACTIONS(699),
    [anon_sym_private] = ACTIONS(699),
    [anon_sym_u8] = ACTIONS(699),
    [anon_sym_f64] = ACTIONS(699),
    [anon_sym_i8] = ACTIONS(699),
    [anon_sym_method] = ACTIONS(699),
    [anon_sym_s32] = ACTIONS(699),
    [anon_sym_publish] = ACTIONS(699),
    [anon_sym_u32] = ACTIONS(699),
    [anon_sym_i64] = ACTIONS(699),
    [anon_sym_f32] = ACTIONS(699),
    [sym_is_external] = ACTIONS(699),
    [anon_sym_i32] = ACTIONS(699),
  },
  [260] = {
    [sym_oct] = ACTIONS(697),
    [sym_long] = ACTIONS(695),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(697),
    [sym_hex] = ACTIONS(695),
    [anon_sym_if] = ACTIONS(697),
    [anon_sym_switch] = ACTIONS(697),
    [sym_identifier] = ACTIONS(697),
    [anon_sym_private] = ACTIONS(697),
    [anon_sym_u8] = ACTIONS(697),
    [anon_sym_f64] = ACTIONS(697),
    [sym_float] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_i8] = ACTIONS(697),
    [anon_sym_return] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(695),
    [anon_sym_s32] = ACTIONS(697),
    [sym_binary] = ACTIONS(695),
    [anon_sym_DQUOTE] = ACTIONS(695),
    [sym_readonly] = ACTIONS(697),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(697),
    [anon_sym_u16] = ACTIONS(697),
    [anon_sym_s8] = ACTIONS(697),
    [anon_sym_u64] = ACTIONS(697),
    [sym_integer] = ACTIONS(697),
    [anon_sym_i16] = ACTIONS(697),
    [sym_double] = ACTIONS(695),
    [anon_sym_section] = ACTIONS(697),
    [anon_sym_goto] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(695),
    [sym_null] = ACTIONS(697),
    [anon_sym_while] = ACTIONS(697),
    [anon_sym_publish] = ACTIONS(697),
    [anon_sym_u32] = ACTIONS(697),
    [anon_sym_i64] = ACTIONS(697),
    [anon_sym_f32] = ACTIONS(697),
    [anon_sym_LPAREN] = ACTIONS(697),
    [anon_sym_i32] = ACTIONS(697),
  },
  [261] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(271),
    [sym_end_case] = STATE(270),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(271),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(271),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(722),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [262] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(724),
  },
  [263] = {
    [anon_sym_DOT] = ACTIONS(726),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [264] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym_end_default] = STATE(274),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [265] = {
    [anon_sym_DOT] = ACTIONS(728),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [266] = {
    [anon_sym_DOT] = ACTIONS(730),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [267] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(732),
  },
  [268] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(638),
    [sym_readonly] = ACTIONS(638),
    [anon_sym_s16] = ACTIONS(638),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_u16] = ACTIONS(638),
    [anon_sym_s8] = ACTIONS(638),
    [anon_sym_u64] = ACTIONS(638),
    [anon_sym_enum] = ACTIONS(638),
    [anon_sym_i16] = ACTIONS(638),
    [sym_is_declare] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_end] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_u8] = ACTIONS(638),
    [anon_sym_f64] = ACTIONS(638),
    [anon_sym_i8] = ACTIONS(638),
    [anon_sym_method] = ACTIONS(638),
    [anon_sym_s32] = ACTIONS(638),
    [anon_sym_publish] = ACTIONS(638),
    [anon_sym_u32] = ACTIONS(638),
    [anon_sym_i64] = ACTIONS(638),
    [anon_sym_f32] = ACTIONS(638),
    [sym_is_external] = ACTIONS(638),
    [anon_sym_i32] = ACTIONS(638),
  },
  [269] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(734),
  },
  [270] = {
    [anon_sym_DOT] = ACTIONS(736),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [271] = {
    [sym__value] = STATE(53),
    [sym__number] = STATE(53),
    [sym_variable_definition] = STATE(54),
    [sym_section_statement] = STATE(54),
    [sym_single_line_if_statement] = STATE(115),
    [sym_end_case] = STATE(278),
    [sym__variable_statement] = STATE(54),
    [sym_assignment_expression] = STATE(55),
    [sym__collection_or_value] = STATE(57),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym_access_control] = STATE(58),
    [sym_return_statement] = STATE(54),
    [sym_group_expression] = STATE(59),
    [sym_character] = STATE(53),
    [aux_sym_compound_macro_block_repeat1] = STATE(115),
    [sym__literal] = STATE(53),
    [sym_type] = STATE(23),
    [sym_string] = STATE(53),
    [sym__statement] = STATE(115),
    [sym_if_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym_expression_statement] = STATE(54),
    [sym_collection] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(79),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(84),
    [anon_sym_end] = ACTIONS(722),
    [anon_sym_private] = ACTIONS(115),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(115),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(101),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(77),
    [anon_sym_section] = ACTIONS(103),
    [anon_sym_goto] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [sym_null] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(115),
    [sym_oct] = ACTIONS(101),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(77),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [272] = {
    [anon_sym_DOT] = ACTIONS(738),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(740),
  },
  [274] = {
    [anon_sym_DOT] = ACTIONS(742),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [275] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(697),
    [sym_readonly] = ACTIONS(697),
    [anon_sym_s16] = ACTIONS(697),
    [anon_sym_protected] = ACTIONS(697),
    [anon_sym_u16] = ACTIONS(697),
    [anon_sym_s8] = ACTIONS(697),
    [anon_sym_u64] = ACTIONS(697),
    [anon_sym_enum] = ACTIONS(697),
    [anon_sym_i16] = ACTIONS(697),
    [sym_is_declare] = ACTIONS(697),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(697),
    [anon_sym_end] = ACTIONS(697),
    [anon_sym_private] = ACTIONS(697),
    [anon_sym_u8] = ACTIONS(697),
    [anon_sym_f64] = ACTIONS(697),
    [anon_sym_i8] = ACTIONS(697),
    [anon_sym_method] = ACTIONS(697),
    [anon_sym_s32] = ACTIONS(697),
    [anon_sym_publish] = ACTIONS(697),
    [anon_sym_u32] = ACTIONS(697),
    [anon_sym_i64] = ACTIONS(697),
    [anon_sym_f32] = ACTIONS(697),
    [sym_is_external] = ACTIONS(697),
    [anon_sym_i32] = ACTIONS(697),
  },
  [276] = {
    [anon_sym_DOT] = ACTIONS(744),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [277] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(746),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(746),
  },
  [278] = {
    [anon_sym_DOT] = ACTIONS(748),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [279] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(750),
  },
  [280] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(752),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(752),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.count = 1, .reusable = false}, SHIFT(8),
  [24] = {.count = 1, .reusable = false}, SHIFT(9),
  [26] = {.count = 1, .reusable = false}, SHIFT(10),
  [28] = {.count = 1, .reusable = false}, SHIFT(11),
  [30] = {.count = 1, .reusable = false}, SHIFT(12),
  [32] = {.count = 1, .reusable = false}, SHIFT(13),
  [34] = {.count = 1, .reusable = false}, SHIFT(14),
  [36] = {.count = 1, .reusable = false}, SHIFT(15),
  [38] = {.count = 1, .reusable = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [42] = {.count = 1, .reusable = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [48] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = false}, SHIFT(28),
  [54] = {.count = 1, .reusable = true}, SHIFT(35),
  [56] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [58] = {.count = 1, .reusable = true}, SHIFT(33),
  [60] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(34),
  [64] = {.count = 1, .reusable = true}, SHIFT(38),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [68] = {.count = 1, .reusable = true}, SHIFT(39),
  [70] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(10),
  [73] = {.count = 1, .reusable = false}, SHIFT(52),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(53),
  [79] = {.count = 1, .reusable = false}, SHIFT(40),
  [81] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(41),
  [84] = {.count = 1, .reusable = false}, SHIFT(42),
  [86] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(43),
  [89] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(44),
  [92] = {.count = 1, .reusable = true}, SHIFT(45),
  [94] = {.count = 1, .reusable = false}, SHIFT(46),
  [96] = {.count = 1, .reusable = true}, SHIFT(47),
  [98] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(9),
  [101] = {.count = 1, .reusable = false}, SHIFT(53),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = false}, SHIFT(49),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = false}, SHIFT(51),
  [111] = {.count = 1, .reusable = false}, SHIFT(41),
  [113] = {.count = 1, .reusable = false}, SHIFT(61),
  [115] = {.count = 1, .reusable = false}, SHIFT(44),
  [117] = {.count = 1, .reusable = true}, SHIFT(65),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(64),
  [123] = {.count = 1, .reusable = false}, SHIFT(68),
  [125] = {.count = 1, .reusable = false}, SHIFT(70),
  [127] = {.count = 1, .reusable = false}, SHIFT(71),
  [129] = {.count = 1, .reusable = true}, SHIFT(74),
  [131] = {.count = 1, .reusable = false}, SHIFT(75),
  [133] = {.count = 1, .reusable = false}, SHIFT(76),
  [135] = {.count = 1, .reusable = false}, SHIFT(79),
  [137] = {.count = 1, .reusable = false}, SHIFT(80),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [141] = {.count = 1, .reusable = false}, SHIFT(81),
  [143] = {.count = 1, .reusable = false}, SHIFT(83),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(84),
  [151] = {.count = 1, .reusable = true}, SHIFT(87),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [157] = {.count = 1, .reusable = true}, SHIFT(90),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [163] = {.count = 1, .reusable = true}, SHIFT(52),
  [165] = {.count = 1, .reusable = false}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(95),
  [169] = {.count = 1, .reusable = false}, SHIFT(95),
  [171] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [173] = {.count = 1, .reusable = true}, SHIFT(98),
  [175] = {.count = 1, .reusable = false}, SHIFT(99),
  [177] = {.count = 1, .reusable = false}, SHIFT(100),
  [179] = {.count = 1, .reusable = false}, SHIFT(101),
  [181] = {.count = 1, .reusable = true}, SHIFT(103),
  [183] = {.count = 1, .reusable = false}, SHIFT(103),
  [185] = {.count = 1, .reusable = false}, SHIFT(105),
  [187] = {.count = 1, .reusable = true}, SHIFT(106),
  [189] = {.count = 1, .reusable = false}, SHIFT(106),
  [191] = {.count = 1, .reusable = true}, SHIFT(105),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [195] = {.count = 1, .reusable = false}, SHIFT(109),
  [197] = {.count = 1, .reusable = true}, SHIFT(109),
  [199] = {.count = 1, .reusable = true}, SHIFT(111),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(112),
  [207] = {.count = 1, .reusable = false}, SHIFT(43),
  [209] = {.count = 1, .reusable = true}, SHIFT(116),
  [211] = {.count = 1, .reusable = true}, SHIFT(117),
  [213] = {.count = 1, .reusable = true}, SHIFT(118),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [219] = {.count = 1, .reusable = true}, SHIFT(120),
  [221] = {.count = 1, .reusable = true}, SHIFT(121),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [225] = {.count = 1, .reusable = false}, SHIFT(126),
  [227] = {.count = 1, .reusable = true}, SHIFT(127),
  [229] = {.count = 1, .reusable = true}, SHIFT(128),
  [231] = {.count = 1, .reusable = true}, SHIFT(131),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(133),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(8),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [246] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(11),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(12),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(13),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [258] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(16),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 2),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(137),
  [271] = {.count = 1, .reusable = true}, SHIFT(136),
  [273] = {.count = 1, .reusable = false}, SHIFT(139),
  [275] = {.count = 1, .reusable = true}, SHIFT(140),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [279] = {.count = 1, .reusable = true}, SHIFT(143),
  [281] = {.count = 1, .reusable = false}, SHIFT(145),
  [283] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [289] = {.count = 1, .reusable = true}, SHIFT(146),
  [291] = {.count = 1, .reusable = true}, SHIFT(148),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [297] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(33),
  [300] = {.count = 1, .reusable = true}, SHIFT(149),
  [302] = {.count = 1, .reusable = true}, SHIFT(150),
  [304] = {.count = 1, .reusable = false}, SHIFT(150),
  [306] = {.count = 1, .reusable = true}, SHIFT(153),
  [308] = {.count = 1, .reusable = true}, SHIFT(155),
  [310] = {.count = 1, .reusable = true}, SHIFT(156),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_macro, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(159),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [324] = {.count = 1, .reusable = true}, SHIFT(160),
  [326] = {.count = 1, .reusable = false}, SHIFT(161),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [332] = {.count = 1, .reusable = true}, SHIFT(162),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(163),
  [338] = {.count = 1, .reusable = true}, SHIFT(165),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [344] = {.count = 1, .reusable = true}, SHIFT(166),
  [346] = {.count = 1, .reusable = false}, SHIFT(166),
  [348] = {.count = 1, .reusable = true}, SHIFT(167),
  [350] = {.count = 1, .reusable = true}, SHIFT(169),
  [352] = {.count = 1, .reusable = false}, SHIFT(169),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [366] = {.count = 1, .reusable = true}, SHIFT(170),
  [368] = {.count = 1, .reusable = false}, SHIFT(170),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 3),
  [372] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(53),
  [375] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(53),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(10),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(40),
  [384] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(42),
  [387] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(41),
  [390] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(44),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(45),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(46),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(47),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(9),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(48),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(49),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(50),
  [416] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(51),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(52),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [428] = {.count = 1, .reusable = true}, SHIFT(171),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [434] = {.count = 1, .reusable = true}, SHIFT(172),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(65),
  [439] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(64),
  [450] = {.count = 1, .reusable = false}, SHIFT(173),
  [452] = {.count = 1, .reusable = true}, SHIFT(174),
  [454] = {.count = 1, .reusable = false}, SHIFT(177),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [462] = {.count = 1, .reusable = true}, SHIFT(180),
  [464] = {.count = 1, .reusable = false}, SHIFT(180),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [476] = {.count = 1, .reusable = false}, SHIFT(182),
  [478] = {.count = 1, .reusable = true}, SHIFT(183),
  [480] = {.count = 1, .reusable = true}, SHIFT(185),
  [482] = {.count = 1, .reusable = true}, SHIFT(187),
  [484] = {.count = 1, .reusable = true}, SHIFT(188),
  [486] = {.count = 1, .reusable = true}, SHIFT(189),
  [488] = {.count = 1, .reusable = false}, SHIFT(190),
  [490] = {.count = 1, .reusable = false}, SHIFT(191),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [496] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 4),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 4),
  [500] = {.count = 1, .reusable = true}, SHIFT(195),
  [502] = {.count = 1, .reusable = true}, SHIFT(197),
  [504] = {.count = 1, .reusable = false}, SHIFT(197),
  [506] = {.count = 1, .reusable = false}, SHIFT(198),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [512] = {.count = 1, .reusable = true}, SHIFT(201),
  [514] = {.count = 1, .reusable = true}, SHIFT(202),
  [516] = {.count = 1, .reusable = true}, SHIFT(205),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [526] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [528] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(161),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [533] = {.count = 1, .reusable = true}, SHIFT(207),
  [535] = {.count = 1, .reusable = false}, SHIFT(207),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 2),
  [539] = {.count = 1, .reusable = false}, SHIFT(209),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [549] = {.count = 1, .reusable = true}, SHIFT(212),
  [551] = {.count = 1, .reusable = false}, SHIFT(212),
  [553] = {.count = 1, .reusable = true}, SHIFT(213),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [567] = {.count = 1, .reusable = true}, SHIFT(215),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [575] = {.count = 1, .reusable = true}, SHIFT(219),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [581] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [583] = {.count = 1, .reusable = true}, SHIFT(221),
  [585] = {.count = 1, .reusable = false}, SHIFT(222),
  [587] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(136),
  [590] = {.count = 1, .reusable = true}, SHIFT(223),
  [592] = {.count = 1, .reusable = true}, SHIFT(224),
  [594] = {.count = 1, .reusable = false}, SHIFT(225),
  [596] = {.count = 1, .reusable = true}, SHIFT(226),
  [598] = {.count = 1, .reusable = false}, SHIFT(226),
  [600] = {.count = 1, .reusable = true}, SHIFT(228),
  [602] = {.count = 1, .reusable = false}, SHIFT(228),
  [604] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(146),
  [609] = {.count = 1, .reusable = true}, SHIFT(232),
  [611] = {.count = 1, .reusable = false}, SHIFT(232),
  [613] = {.count = 1, .reusable = true}, SHIFT(233),
  [615] = {.count = 1, .reusable = true}, SHIFT(234),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [619] = {.count = 1, .reusable = true}, SHIFT(237),
  [621] = {.count = 1, .reusable = true}, SHIFT(240),
  [623] = {.count = 1, .reusable = true}, SHIFT(242),
  [625] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2), SHIFT_REPEAT(163),
  [630] = {.count = 1, .reusable = true}, SHIFT(243),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 4),
  [634] = {.count = 1, .reusable = true}, SHIFT(245),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [644] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [648] = {.count = 1, .reusable = true}, SHIFT(246),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [656] = {.count = 1, .reusable = true}, SHIFT(252),
  [658] = {.count = 1, .reusable = true}, SHIFT(253),
  [660] = {.count = 1, .reusable = true}, SHIFT(254),
  [662] = {.count = 1, .reusable = true}, SHIFT(255),
  [664] = {.count = 1, .reusable = true}, SHIFT(256),
  [666] = {.count = 1, .reusable = true}, SHIFT(258),
  [668] = {.count = 1, .reusable = false}, SHIFT(258),
  [670] = {.count = 1, .reusable = true}, SHIFT(259),
  [672] = {.count = 1, .reusable = true}, SHIFT(260),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [678] = {.count = 1, .reusable = true}, SHIFT(261),
  [680] = {.count = 1, .reusable = false}, SHIFT(262),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(201),
  [685] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [687] = {.count = 1, .reusable = true}, SHIFT(266),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [703] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [707] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(219),
  [712] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [714] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [716] = {.count = 1, .reusable = true}, SHIFT(267),
  [718] = {.count = 1, .reusable = false}, SHIFT(267),
  [720] = {.count = 1, .reusable = true}, SHIFT(268),
  [722] = {.count = 1, .reusable = false}, SHIFT(269),
  [724] = {.count = 1, .reusable = true}, SHIFT(272),
  [726] = {.count = 1, .reusable = true}, SHIFT(273),
  [728] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [732] = {.count = 1, .reusable = true}, SHIFT(275),
  [734] = {.count = 1, .reusable = true}, SHIFT(276),
  [736] = {.count = 1, .reusable = true}, SHIFT(277),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 4),
  [742] = {.count = 1, .reusable = true}, SHIFT(279),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [748] = {.count = 1, .reusable = true}, SHIFT(280),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 5),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 6),
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
