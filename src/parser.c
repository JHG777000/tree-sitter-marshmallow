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
#define STATE_COUNT 259
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
  sym_compound_template_block = 115,
  sym_end_compound_template = 116,
  sym_compound_template = 117,
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
  aux_sym_compound_template_block_repeat1 = 167,
  aux_sym_compound_template_repeat1 = 168,
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
  [sym_compound_template_block] = "compound_template_block",
  [sym_end_compound_template] = "end_compound_template",
  [sym_compound_template] = "compound_template",
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
  [aux_sym_compound_template_block_repeat1] = "compound_template_block_repeat1",
  [aux_sym_compound_template_repeat1] = "compound_template_repeat1",
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
  [sym_compound_template_block] = {
    .visible = true,
    .named = true,
  },
  [sym_end_compound_template] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_template] = {
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
  [aux_sym_compound_template_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_template_repeat1] = {
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
        ADVANCE(210);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(229);
      if (lookahead == 'x')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(231);
      if (lookahead == '6')
        ADVANCE(232);
      if (lookahead == 'u')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(234);
      if (lookahead == '3')
        ADVANCE(235);
      if (lookahead == '6')
        ADVANCE(236);
      if (lookahead == '8')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(239);
      if (lookahead == 'u')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(242);
      if (lookahead == '3')
        ADVANCE(243);
      if (lookahead == '8')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(245);
      if (lookahead == '3')
        ADVANCE(246);
      if (lookahead == '6')
        ADVANCE(247);
      if (lookahead == '8')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(250);
      if (lookahead == 'u')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_is_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_publish);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_is_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 306:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(231);
      if (lookahead == '6')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 308:
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 309:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 310:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 311:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(312);
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 312:
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
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(234);
      if (lookahead == '3')
        ADVANCE(235);
      if (lookahead == '6')
        ADVANCE(236);
      if (lookahead == '8')
        ADVANCE(237);
      if (lookahead == 'f')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(242);
      if (lookahead == '3')
        ADVANCE(243);
      if (lookahead == '8')
        ADVANCE(244);
      if (lookahead == 'e')
        ADVANCE(323);
      if (lookahead == 'w')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(263);
      if (lookahead == 't')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 346:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(312);
      if (lookahead == 'e')
        ADVANCE(347);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 349:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 350:
      if (lookahead == '%')
        ADVANCE(351);
      if (lookahead == '&')
        ADVANCE(352);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(353);
      if (lookahead == '-')
        ADVANCE(354);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(355);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '<')
        ADVANCE(356);
      if (lookahead == '>')
        ADVANCE(357);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(358);
      if (lookahead == '|')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 351:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 352:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 353:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '=')
        ADVANCE(52);
      END_STATE();
    case 354:
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(54);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 355:
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 356:
      if (lookahead == '<')
        ADVANCE(360);
      END_STATE();
    case 357:
      if (lookahead == '>')
        ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == '=')
        ADVANCE(78);
      END_STATE();
    case 359:
      if (lookahead == '=')
        ADVANCE(108);
      END_STATE();
    case 360:
      if (lookahead == '=')
        ADVANCE(116);
      END_STATE();
    case 361:
      if (lookahead == '=')
        ADVANCE(117);
      END_STATE();
    case 362:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(364);
      if (lookahead == '/')
        ADVANCE(365);
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
    case 364:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(56);
      END_STATE();
    case 366:
      if (lookahead == '!')
        ADVANCE(367);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(368);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(215);
      if (lookahead == '-')
        ADVANCE(369);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(312);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      END_STATE();
    case 370:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(371);
      if (lookahead == '/')
        ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(374);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(374);
      if (lookahead == '"')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(378);
      if (lookahead == '-')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(375);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(374);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'f')
        ADVANCE(382);
      if (lookahead == 'm')
        ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 381:
      if (lookahead == 'n')
        ADVANCE(384);
      END_STATE();
    case 382:
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 384:
      if (lookahead == 'd')
        ADVANCE(121);
      END_STATE();
    case 385:
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
        ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(386);
      END_STATE();
    case 387:
      if (lookahead == '(')
        ADVANCE(214);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'r')
        ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 388:
      if (lookahead == 'e')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 't')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'u')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'r')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'n')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 's')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 395:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 396:
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
        ADVANCE(210);
      if (lookahead == '0')
        ADVANCE(312);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 397:
      if (lookahead == '!')
        ADVANCE(398);
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
        ADVANCE(218);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(399);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 398:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 399:
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 400:
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
    case 401:
      if (lookahead == '!')
        ADVANCE(398);
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
        ADVANCE(218);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(399);
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
    case 402:
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
        ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 404:
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
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 405:
      if (lookahead == '-')
        ADVANCE(209);
      if (lookahead == '/')
        ADVANCE(210);
      if (lookahead == 'c')
        ADVANCE(406);
      if (lookahead == 'd')
        ADVANCE(407);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 406:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 407:
      if (lookahead == 'e')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'f')
        ADVANCE(120);
      END_STATE();
    case 409:
      if (lookahead == '%')
        ADVANCE(351);
      if (lookahead == '&')
        ADVANCE(352);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(410);
      if (lookahead == '+')
        ADVANCE(411);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(412);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(355);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '<')
        ADVANCE(356);
      if (lookahead == '>')
        ADVANCE(357);
      if (lookahead == '^')
        ADVANCE(358);
      if (lookahead == 'd')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'm')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == '|')
        ADVANCE(359);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 410:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 411:
      if (lookahead == '=')
        ADVANCE(52);
      END_STATE();
    case 412:
      if (lookahead == '+')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(212);
      if (lookahead == '=')
        ADVANCE(55);
      END_STATE();
    case 413:
      if (lookahead == '!')
        ADVANCE(398);
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
        ADVANCE(312);
      if (lookahead == ':')
        ADVANCE(218);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(399);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'g')
        ADVANCE(313);
      if (lookahead == 'i')
        ADVANCE(314);
      if (lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(318);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 414:
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
  [7] = {.lex_state = 217},
  [8] = {.lex_state = 213},
  [9] = {.lex_state = 306},
  [10] = {.lex_state = 308},
  [11] = {.lex_state = 309},
  [12] = {.lex_state = 213},
  [13] = {.lex_state = 310},
  [14] = {.lex_state = 213},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 213},
  [17] = {.lex_state = 213},
  [18] = {.lex_state = 311},
  [19] = {.lex_state = 346},
  [20] = {.lex_state = 213},
  [21] = {.lex_state = 309},
  [22] = {.lex_state = 213},
  [23] = {.lex_state = 213},
  [24] = {.lex_state = 217},
  [25] = {.lex_state = 213},
  [26] = {.lex_state = 213},
  [27] = {.lex_state = 213},
  [28] = {.lex_state = 217},
  [29] = {.lex_state = 309},
  [30] = {.lex_state = 213},
  [31] = {.lex_state = 311},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 213},
  [34] = {.lex_state = 213},
  [35] = {.lex_state = 213},
  [36] = {.lex_state = 208},
  [37] = {.lex_state = 213},
  [38] = {.lex_state = 350},
  [39] = {.lex_state = 213},
  [40] = {.lex_state = 213},
  [41] = {.lex_state = 362},
  [42] = {.lex_state = 363},
  [43] = {.lex_state = 366},
  [44] = {.lex_state = 370},
  [45] = {.lex_state = 306},
  [46] = {.lex_state = 213},
  [47] = {.lex_state = 213},
  [48] = {.lex_state = 366},
  [49] = {.lex_state = 213},
  [50] = {.lex_state = 366},
  [51] = {.lex_state = 350},
  [52] = {.lex_state = 213},
  [53] = {.lex_state = 213},
  [54] = {.lex_state = 217},
  [55] = {.lex_state = 350},
  [56] = {.lex_state = 362},
  [57] = {.lex_state = 350},
  [58] = {.lex_state = 346},
  [59] = {.lex_state = 213},
  [60] = {.lex_state = 380},
  [61] = {.lex_state = 213},
  [62] = {.lex_state = 346},
  [63] = {.lex_state = 308},
  [64] = {.lex_state = 385},
  [65] = {.lex_state = 213},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 306},
  [68] = {.lex_state = 213},
  [69] = {.lex_state = 387},
  [70] = {.lex_state = 217},
  [71] = {.lex_state = 213},
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 217},
  [74] = {.lex_state = 395},
  [75] = {.lex_state = 395},
  [76] = {.lex_state = 387},
  [77] = {.lex_state = 213},
  [78] = {.lex_state = 213},
  [79] = {.lex_state = 387},
  [80] = {.lex_state = 395},
  [81] = {.lex_state = 306},
  [82] = {.lex_state = 311},
  [83] = {.lex_state = 213},
  [84] = {.lex_state = 213},
  [85] = {.lex_state = 396},
  [86] = {.lex_state = 213},
  [87] = {.lex_state = 213},
  [88] = {.lex_state = 217},
  [89] = {.lex_state = 309},
  [90] = {.lex_state = 213},
  [91] = {.lex_state = 350},
  [92] = {.lex_state = 397},
  [93] = {.lex_state = 370},
  [94] = {.lex_state = 213},
  [95] = {.lex_state = 213},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 400},
  [98] = {.lex_state = 400},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 366},
  [101] = {.lex_state = 401},
  [102] = {.lex_state = 306},
  [103] = {.lex_state = 366},
  [104] = {.lex_state = 362},
  [105] = {.lex_state = 362},
  [106] = {.lex_state = 346},
  [107] = {.lex_state = 366},
  [108] = {.lex_state = 366},
  [109] = {.lex_state = 306},
  [110] = {.lex_state = 217},
  [111] = {.lex_state = 346},
  [112] = {.lex_state = 402},
  [113] = {.lex_state = 213},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 217},
  [116] = {.lex_state = 213},
  [117] = {.lex_state = 308},
  [118] = {.lex_state = 385},
  [119] = {.lex_state = 213},
  [120] = {.lex_state = 213},
  [121] = {.lex_state = 213},
  [122] = {.lex_state = 213},
  [123] = {.lex_state = 387},
  [124] = {.lex_state = 403},
  [125] = {.lex_state = 346},
  [126] = {.lex_state = 387},
  [127] = {.lex_state = 213},
  [128] = {.lex_state = 366},
  [129] = {.lex_state = 404},
  [130] = {.lex_state = 208},
  [131] = {.lex_state = 404},
  [132] = {.lex_state = 366},
  [133] = {.lex_state = 395},
  [134] = {.lex_state = 213},
  [135] = {.lex_state = 213},
  [136] = {.lex_state = 395},
  [137] = {.lex_state = 217},
  [138] = {.lex_state = 387},
  [139] = {.lex_state = 213},
  [140] = {.lex_state = 387},
  [141] = {.lex_state = 349},
  [142] = {.lex_state = 395},
  [143] = {.lex_state = 387},
  [144] = {.lex_state = 311},
  [145] = {.lex_state = 346},
  [146] = {.lex_state = 346},
  [147] = {.lex_state = 405},
  [148] = {.lex_state = 217},
  [149] = {.lex_state = 213},
  [150] = {.lex_state = 213},
  [151] = {.lex_state = 397},
  [152] = {.lex_state = 397},
  [153] = {.lex_state = 370},
  [154] = {.lex_state = 402},
  [155] = {.lex_state = 409},
  [156] = {.lex_state = 366},
  [157] = {.lex_state = 400},
  [158] = {.lex_state = 346},
  [159] = {.lex_state = 366},
  [160] = {.lex_state = 413},
  [161] = {.lex_state = 366},
  [162] = {.lex_state = 306},
  [163] = {.lex_state = 362},
  [164] = {.lex_state = 213},
  [165] = {.lex_state = 217},
  [166] = {.lex_state = 308},
  [167] = {.lex_state = 217},
  [168] = {.lex_state = 346},
  [169] = {.lex_state = 387},
  [170] = {.lex_state = 213},
  [171] = {.lex_state = 414},
  [172] = {.lex_state = 213},
  [173] = {.lex_state = 414},
  [174] = {.lex_state = 366},
  [175] = {.lex_state = 404},
  [176] = {.lex_state = 395},
  [177] = {.lex_state = 213},
  [178] = {.lex_state = 213},
  [179] = {.lex_state = 395},
  [180] = {.lex_state = 217},
  [181] = {.lex_state = 213},
  [182] = {.lex_state = 387},
  [183] = {.lex_state = 395},
  [184] = {.lex_state = 395},
  [185] = {.lex_state = 311},
  [186] = {.lex_state = 346},
  [187] = {.lex_state = 213},
  [188] = {.lex_state = 213},
  [189] = {.lex_state = 213},
  [190] = {.lex_state = 405},
  [191] = {.lex_state = 380},
  [192] = {.lex_state = 217},
  [193] = {.lex_state = 213},
  [194] = {.lex_state = 400},
  [195] = {.lex_state = 400},
  [196] = {.lex_state = 311},
  [197] = {.lex_state = 346},
  [198] = {.lex_state = 213},
  [199] = {.lex_state = 306},
  [200] = {.lex_state = 413},
  [201] = {.lex_state = 402},
  [202] = {.lex_state = 404},
  [203] = {.lex_state = 346},
  [204] = {.lex_state = 213},
  [205] = {.lex_state = 414},
  [206] = {.lex_state = 414},
  [207] = {.lex_state = 306},
  [208] = {.lex_state = 414},
  [209] = {.lex_state = 401},
  [210] = {.lex_state = 306},
  [211] = {.lex_state = 366},
  [212] = {.lex_state = 217},
  [213] = {.lex_state = 213},
  [214] = {.lex_state = 217},
  [215] = {.lex_state = 213},
  [216] = {.lex_state = 213},
  [217] = {.lex_state = 213},
  [218] = {.lex_state = 213},
  [219] = {.lex_state = 346},
  [220] = {.lex_state = 405},
  [221] = {.lex_state = 380},
  [222] = {.lex_state = 311},
  [223] = {.lex_state = 213},
  [224] = {.lex_state = 217},
  [225] = {.lex_state = 213},
  [226] = {.lex_state = 213},
  [227] = {.lex_state = 413},
  [228] = {.lex_state = 346},
  [229] = {.lex_state = 414},
  [230] = {.lex_state = 414},
  [231] = {.lex_state = 414},
  [232] = {.lex_state = 414},
  [233] = {.lex_state = 414},
  [234] = {.lex_state = 217},
  [235] = {.lex_state = 366},
  [236] = {.lex_state = 306},
  [237] = {.lex_state = 217},
  [238] = {.lex_state = 217},
  [239] = {.lex_state = 346},
  [240] = {.lex_state = 405},
  [241] = {.lex_state = 213},
  [242] = {.lex_state = 346},
  [243] = {.lex_state = 213},
  [244] = {.lex_state = 213},
  [245] = {.lex_state = 306},
  [246] = {.lex_state = 217},
  [247] = {.lex_state = 405},
  [248] = {.lex_state = 213},
  [249] = {.lex_state = 346},
  [250] = {.lex_state = 213},
  [251] = {.lex_state = 380},
  [252] = {.lex_state = 213},
  [253] = {.lex_state = 217},
  [254] = {.lex_state = 213},
  [255] = {.lex_state = 405},
  [256] = {.lex_state = 213},
  [257] = {.lex_state = 380},
  [258] = {.lex_state = 405},
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
    [sym_compound_template] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(24),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(24),
    [sym_compound_template_block] = STATE(24),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(24),
    [aux_sym_module_definition_repeat1] = STATE(24),
    [sym_enum_definition] = STATE(24),
    [sym_variable_definition] = STATE(24),
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
    [sym_type] = STATE(25),
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
    [sym_identifier] = ACTIONS(44),
    [anon_sym_STAR] = ACTIONS(44),
    [anon_sym_DOT] = ACTIONS(44),
  },
  [11] = {
    [anon_sym_function] = ACTIONS(46),
    [sym_readonly] = ACTIONS(46),
    [anon_sym_s16] = ACTIONS(46),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(46),
    [anon_sym_s8] = ACTIONS(46),
    [anon_sym_u64] = ACTIONS(46),
    [anon_sym_i16] = ACTIONS(46),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_u8] = ACTIONS(46),
    [anon_sym_f64] = ACTIONS(46),
    [anon_sym_i8] = ACTIONS(46),
    [anon_sym_method] = ACTIONS(46),
    [anon_sym_s32] = ACTIONS(46),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(46),
    [anon_sym_i64] = ACTIONS(46),
    [anon_sym_f32] = ACTIONS(46),
    [anon_sym_i32] = ACTIONS(46),
  },
  [12] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(48),
  },
  [13] = {
    [sym_is_function] = STATE(27),
    [sym_is_method] = STATE(27),
    [sym_type] = STATE(23),
    [sym_function_signature] = STATE(28),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(29),
    [sym_variable_definition] = STATE(28),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(24),
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
    [aux_sym_compound_template_repeat1] = STATE(33),
    [sym_parameter_list] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(50),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(52),
    [sym__space] = ACTIONS(54),
    [sym_identifier] = ACTIONS(52),
    [anon_sym_STAR] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(56),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(58),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(60),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_DOT] = ACTIONS(62),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(58),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_compound_template] = STATE(54),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(58),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(58),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_i32] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(64),
    [sym_is_declare] = ACTIONS(69),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(80),
    [anon_sym_private] = ACTIONS(83),
    [anon_sym_u8] = ACTIONS(64),
    [anon_sym_f64] = ACTIONS(64),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(64),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(64),
    [sym_is_external] = ACTIONS(69),
    [sym_binary] = ACTIONS(71),
    [anon_sym_function] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(92),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(83),
    [anon_sym_u16] = ACTIONS(64),
    [anon_sym_s8] = ACTIONS(64),
    [anon_sym_u64] = ACTIONS(64),
    [anon_sym_enum] = ACTIONS(69),
    [anon_sym_i16] = ACTIONS(64),
    [sym_integer] = ACTIONS(95),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_method] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(83),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(64),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(64),
    [anon_sym_f32] = ACTIONS(64),
  },
  [19] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_end_function] = STATE(61),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym__literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_end_method] = STATE(61),
    [sym__end_function] = STATE(61),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(62),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(51),
    [sym_access_control] = STATE(56),
    [aux_sym_compound_template_block_repeat1] = STATE(62),
    [sym_type] = STATE(59),
    [sym__statement] = STATE(62),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(107),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [20] = {
    [sym_pointer] = STATE(66),
    [sym_array] = STATE(65),
    [aux_sym_type_repeat2] = STATE(65),
    [aux_sym_type_repeat1] = STATE(66),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
  },
  [21] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(68),
    [sym_is_method] = STATE(68),
    [sym_type] = STATE(25),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(119),
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
    [sym_identifier] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(123),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_module] = STATE(71),
    [sym_compound_template] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(72),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(72),
    [sym_compound_template_block] = STATE(72),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(72),
    [aux_sym_module_definition_repeat1] = STATE(72),
    [sym_enum_definition] = STATE(72),
    [sym_variable_definition] = STATE(72),
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
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym__enum_element] = STATE(75),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(127),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(131),
    [sym_readonly] = ACTIONS(131),
    [anon_sym_s16] = ACTIONS(131),
    [anon_sym_protected] = ACTIONS(131),
    [anon_sym_u16] = ACTIONS(131),
    [anon_sym_s8] = ACTIONS(131),
    [anon_sym_u64] = ACTIONS(131),
    [anon_sym_enum] = ACTIONS(131),
    [anon_sym_i16] = ACTIONS(131),
    [sym_is_declare] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_private] = ACTIONS(131),
    [anon_sym_u8] = ACTIONS(131),
    [anon_sym_f64] = ACTIONS(131),
    [anon_sym_i8] = ACTIONS(131),
    [anon_sym_method] = ACTIONS(131),
    [anon_sym_s32] = ACTIONS(131),
    [anon_sym_publish] = ACTIONS(131),
    [anon_sym_u32] = ACTIONS(131),
    [anon_sym_i64] = ACTIONS(131),
    [anon_sym_f32] = ACTIONS(131),
    [sym_is_external] = ACTIONS(131),
    [anon_sym_i32] = ACTIONS(131),
  },
  [29] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(77),
    [sym_is_method] = STATE(77),
    [sym_type] = STATE(25),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(119),
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
  [30] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym_oct] = ACTIONS(135),
    [sym_long] = ACTIONS(137),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(135),
    [sym_is_declare] = ACTIONS(135),
    [sym_hex] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_switch] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_private] = ACTIONS(135),
    [anon_sym_u8] = ACTIONS(135),
    [anon_sym_f64] = ACTIONS(135),
    [sym_float] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_i8] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_s32] = ACTIONS(135),
    [sym_is_external] = ACTIONS(135),
    [sym_binary] = ACTIONS(137),
    [anon_sym_function] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [sym_readonly] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(135),
    [anon_sym_u16] = ACTIONS(135),
    [anon_sym_s8] = ACTIONS(135),
    [anon_sym_u64] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_i16] = ACTIONS(135),
    [sym_integer] = ACTIONS(135),
    [anon_sym_section] = ACTIONS(135),
    [sym_double] = ACTIONS(137),
    [anon_sym_goto] = ACTIONS(135),
    [anon_sym_method] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_while] = ACTIONS(135),
    [sym_null] = ACTIONS(135),
    [anon_sym_publish] = ACTIONS(135),
    [anon_sym_u32] = ACTIONS(135),
    [anon_sym_i64] = ACTIONS(135),
    [anon_sym_f32] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_i32] = ACTIONS(135),
  },
  [32] = {
    [sym_type] = STATE(59),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__comma_list_variables] = STATE(81),
    [sym_access_control] = STATE(56),
    [sym_variable_definition] = STATE(80),
    [sym_readonly] = ACTIONS(111),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(109),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [33] = {
    [aux_sym_compound_template_repeat1] = STATE(83),
    [sym_parameter_list] = STATE(84),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(143),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
  },
  [37] = {
    [sym_group_expression] = STATE(85),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [38] = {
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [sym_identifier] = ACTIONS(52),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym_group_expression] = STATE(86),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [40] = {
    [sym_compound_template] = STATE(88),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(155),
    [sym__comment] = ACTIONS(3),
  },
  [41] = {
    [sym_readonly] = ACTIONS(46),
    [anon_sym_s16] = ACTIONS(46),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(46),
    [anon_sym_s8] = ACTIONS(46),
    [anon_sym_u64] = ACTIONS(46),
    [anon_sym_i16] = ACTIONS(46),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_u8] = ACTIONS(46),
    [anon_sym_f64] = ACTIONS(46),
    [anon_sym_i8] = ACTIONS(46),
    [anon_sym_s32] = ACTIONS(46),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(46),
    [anon_sym_i64] = ACTIONS(46),
    [anon_sym_f32] = ACTIONS(46),
    [anon_sym_i32] = ACTIONS(46),
  },
  [42] = {
    [sym__escape_sequence] = STATE(89),
    [anon_sym_BSLASHa] = ACTIONS(157),
    [anon_sym_BSLASHt] = ACTIONS(157),
    [anon_sym_BSLASH0] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(157),
    [anon_sym_BSLASHv] = ACTIONS(157),
    [aux_sym_character_token1] = ACTIONS(159),
    [anon_sym_BSLASHf] = ACTIONS(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(157),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(157),
    [anon_sym_BSLASHn] = ACTIONS(157),
  },
  [43] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_group_expression] = STATE(51),
    [sym__assignment_or_collection_or_value] = STATE(90),
    [sym__literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_assignment_expression] = STATE(90),
    [sym__collection_or_value] = STATE(91),
    [sym_character] = STATE(51),
    [sym_collection] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(71),
    [sym_integer] = ACTIONS(95),
    [sym_identifier] = ACTIONS(95),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [sym_binary] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(95),
    [sym_long] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [44] = {
    [aux_sym_string_repeat1] = STATE(93),
    [sym__comment] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__space] = ACTIONS(161),
    [aux_sym_string_token1] = ACTIONS(165),
  },
  [45] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(94),
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
  [46] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
  },
  [48] = {
    [sym__value] = STATE(98),
    [sym__number] = STATE(98),
    [sym_group_expression] = STATE(98),
    [sym__comma_list_collection_or_value] = STATE(97),
    [sym__literal] = STATE(98),
    [sym_string] = STATE(98),
    [sym__collection_or_value] = STATE(98),
    [sym_character] = STATE(98),
    [sym_collection] = STATE(98),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(171),
    [sym_integer] = ACTIONS(173),
    [sym_identifier] = ACTIONS(173),
    [sym_float] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(173),
    [sym_binary] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(173),
    [sym_long] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [49] = {
    [sym_group_expression] = STATE(99),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [50] = {
    [sym__value] = STATE(101),
    [sym__number] = STATE(101),
    [sym_group_expression] = STATE(101),
    [sym__literal] = STATE(101),
    [sym_string] = STATE(101),
    [sym_assignment_expression] = STATE(102),
    [sym_unary_op] = STATE(103),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(101),
    [sym_collection] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(177),
    [sym_integer] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(181),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [sym_float] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(175),
    [sym_null] = ACTIONS(179),
    [sym_binary] = ACTIONS(177),
    [sym_oct] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [51] = {
    [sym_assignment_post_op] = STATE(105),
    [anon_sym_COLON_EQ] = ACTIONS(183),
    [anon_sym_DASH_DASH] = ACTIONS(185),
    [anon_sym_AMP_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_CARET_EQ] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT_EQ] = ACTIONS(183),
    [anon_sym_PIPE_EQ] = ACTIONS(183),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(183),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_GT_GT_EQ] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_DOT] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_DOT] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(193),
    [sym_readonly] = ACTIONS(193),
    [anon_sym_s16] = ACTIONS(193),
    [anon_sym_protected] = ACTIONS(193),
    [anon_sym_u16] = ACTIONS(193),
    [anon_sym_s8] = ACTIONS(193),
    [anon_sym_u64] = ACTIONS(193),
    [anon_sym_enum] = ACTIONS(193),
    [anon_sym_i16] = ACTIONS(193),
    [sym_is_declare] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_end] = ACTIONS(193),
    [anon_sym_private] = ACTIONS(193),
    [anon_sym_u8] = ACTIONS(193),
    [anon_sym_f64] = ACTIONS(193),
    [anon_sym_i8] = ACTIONS(193),
    [anon_sym_method] = ACTIONS(193),
    [anon_sym_s32] = ACTIONS(193),
    [anon_sym_publish] = ACTIONS(193),
    [anon_sym_u32] = ACTIONS(193),
    [anon_sym_i64] = ACTIONS(193),
    [anon_sym_f32] = ACTIONS(193),
    [sym_is_external] = ACTIONS(193),
    [anon_sym_i32] = ACTIONS(193),
  },
  [55] = {
    [sym_assignment_op] = STATE(108),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
  },
  [56] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(94),
    [sym__base_type] = STATE(20),
    [sym_readonly] = ACTIONS(197),
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
  [57] = {
    [anon_sym_COLON_EQ] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(151),
    [anon_sym_AMP_EQ] = ACTIONS(149),
    [anon_sym_STAR_EQ] = ACTIONS(149),
    [anon_sym_CARET_EQ] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_PERCENT_EQ] = ACTIONS(149),
    [anon_sym_LT_LT_EQ] = ACTIONS(149),
    [anon_sym_PIPE_EQ] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_SLASH_EQ] = ACTIONS(149),
    [anon_sym_GT_GT_EQ] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
  },
  [58] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_compound_template] = STATE(110),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [59] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(201),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_function] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(205),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(207),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_end_function] = STATE(116),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym__literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_end_method] = STATE(116),
    [sym__end_function] = STATE(116),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(51),
    [sym_access_control] = STATE(56),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym_type] = STATE(59),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(107),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
  },
  [64] = {
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym_integer] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [65] = {
    [sym_array] = STATE(119),
    [aux_sym_type_repeat2] = STATE(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(215),
  },
  [66] = {
    [sym_pointer] = STATE(121),
    [sym_array] = STATE(120),
    [aux_sym_type_repeat2] = STATE(120),
    [aux_sym_type_repeat1] = STATE(121),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(117),
  },
  [67] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(122),
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
  [68] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
  },
  [69] = {
    [sym_parameter_list] = STATE(126),
    [sym_return_list] = STATE(127),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(221),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [70] = {
    [sym_static_assignment] = STATE(129),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [sym_readonly] = ACTIONS(223),
    [anon_sym_s16] = ACTIONS(223),
    [anon_sym_protected] = ACTIONS(223),
    [anon_sym_u16] = ACTIONS(223),
    [anon_sym_s8] = ACTIONS(223),
    [anon_sym_u64] = ACTIONS(223),
    [anon_sym_enum] = ACTIONS(223),
    [anon_sym_i16] = ACTIONS(223),
    [sym_is_declare] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(223),
    [anon_sym_end] = ACTIONS(223),
    [anon_sym_private] = ACTIONS(223),
    [anon_sym_u8] = ACTIONS(223),
    [anon_sym_f64] = ACTIONS(223),
    [anon_sym_i8] = ACTIONS(223),
    [anon_sym_method] = ACTIONS(223),
    [anon_sym_s32] = ACTIONS(223),
    [anon_sym_publish] = ACTIONS(223),
    [anon_sym_u32] = ACTIONS(223),
    [anon_sym_i64] = ACTIONS(223),
    [anon_sym_f32] = ACTIONS(223),
    [sym_is_external] = ACTIONS(223),
    [anon_sym_i32] = ACTIONS(223),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [72] = {
    [sym_compound_template] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(72),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(72),
    [sym_compound_template_block] = STATE(72),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(72),
    [aux_sym_module_definition_repeat1] = STATE(72),
    [sym_enum_definition] = STATE(72),
    [sym_variable_definition] = STATE(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(229),
    [sym_readonly] = ACTIONS(232),
    [anon_sym_s16] = ACTIONS(235),
    [anon_sym_protected] = ACTIONS(238),
    [anon_sym_u16] = ACTIONS(235),
    [anon_sym_s8] = ACTIONS(235),
    [anon_sym_u64] = ACTIONS(235),
    [anon_sym_enum] = ACTIONS(241),
    [anon_sym_i16] = ACTIONS(235),
    [sym_is_declare] = ACTIONS(244),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(250),
    [anon_sym_private] = ACTIONS(238),
    [anon_sym_u8] = ACTIONS(235),
    [anon_sym_f64] = ACTIONS(235),
    [anon_sym_i8] = ACTIONS(235),
    [anon_sym_method] = ACTIONS(252),
    [anon_sym_s32] = ACTIONS(235),
    [anon_sym_publish] = ACTIONS(238),
    [anon_sym_u32] = ACTIONS(235),
    [anon_sym_i64] = ACTIONS(235),
    [anon_sym_f32] = ACTIONS(235),
    [sym_is_external] = ACTIONS(244),
    [anon_sym_i32] = ACTIONS(235),
  },
  [73] = {
    [sym_static_assignment] = STATE(131),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(255),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [sym_readonly] = ACTIONS(255),
    [anon_sym_s16] = ACTIONS(255),
    [anon_sym_protected] = ACTIONS(255),
    [anon_sym_u16] = ACTIONS(255),
    [anon_sym_s8] = ACTIONS(255),
    [anon_sym_u64] = ACTIONS(255),
    [anon_sym_enum] = ACTIONS(255),
    [anon_sym_i16] = ACTIONS(255),
    [sym_is_declare] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_end] = ACTIONS(255),
    [anon_sym_private] = ACTIONS(255),
    [anon_sym_u8] = ACTIONS(255),
    [anon_sym_f64] = ACTIONS(255),
    [anon_sym_i8] = ACTIONS(255),
    [anon_sym_method] = ACTIONS(255),
    [anon_sym_s32] = ACTIONS(255),
    [anon_sym_publish] = ACTIONS(255),
    [anon_sym_u32] = ACTIONS(255),
    [anon_sym_i64] = ACTIONS(255),
    [anon_sym_f32] = ACTIONS(255),
    [sym_is_external] = ACTIONS(255),
    [anon_sym_i32] = ACTIONS(255),
  },
  [74] = {
    [sym_static_assignment] = STATE(133),
    [anon_sym_COLON_EQ] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(259),
  },
  [75] = {
    [aux_sym_enum_definition_repeat1] = STATE(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
  },
  [76] = {
    [sym_parameter_list] = STATE(138),
    [sym_return_list] = STATE(139),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(267),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(269),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
  },
  [79] = {
    [anon_sym_returns] = ACTIONS(271),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
  },
  [80] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(142),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(275),
  },
  [81] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(277),
  },
  [82] = {
    [sym_oct] = ACTIONS(279),
    [sym_long] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(279),
    [sym_is_declare] = ACTIONS(279),
    [sym_hex] = ACTIONS(281),
    [anon_sym_if] = ACTIONS(279),
    [anon_sym_switch] = ACTIONS(279),
    [sym_identifier] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_private] = ACTIONS(279),
    [anon_sym_u8] = ACTIONS(279),
    [anon_sym_f64] = ACTIONS(279),
    [sym_float] = ACTIONS(281),
    [anon_sym_SQUOTE] = ACTIONS(281),
    [anon_sym_i8] = ACTIONS(279),
    [anon_sym_return] = ACTIONS(279),
    [anon_sym_s32] = ACTIONS(279),
    [sym_is_external] = ACTIONS(279),
    [sym_binary] = ACTIONS(281),
    [anon_sym_function] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym_readonly] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(279),
    [anon_sym_u16] = ACTIONS(279),
    [anon_sym_s8] = ACTIONS(279),
    [anon_sym_u64] = ACTIONS(279),
    [anon_sym_enum] = ACTIONS(279),
    [anon_sym_i16] = ACTIONS(279),
    [sym_integer] = ACTIONS(279),
    [anon_sym_section] = ACTIONS(279),
    [sym_double] = ACTIONS(281),
    [anon_sym_goto] = ACTIONS(279),
    [anon_sym_method] = ACTIONS(279),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_while] = ACTIONS(279),
    [sym_null] = ACTIONS(279),
    [anon_sym_publish] = ACTIONS(279),
    [anon_sym_u32] = ACTIONS(279),
    [anon_sym_i64] = ACTIONS(279),
    [anon_sym_f32] = ACTIONS(279),
    [anon_sym_LPAREN] = ACTIONS(279),
    [anon_sym_i32] = ACTIONS(279),
  },
  [83] = {
    [aux_sym_compound_template_repeat1] = STATE(83),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(283),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(269),
  },
  [84] = {
    [anon_sym_DOT] = ACTIONS(286),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(146),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(146),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(288),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [86] = {
    [anon_sym_DOT] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [aux_sym_compound_template_repeat1] = STATE(149),
    [sym_parameter_list] = STATE(150),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [88] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(294),
    [sym_readonly] = ACTIONS(294),
    [anon_sym_s16] = ACTIONS(294),
    [anon_sym_protected] = ACTIONS(294),
    [anon_sym_u16] = ACTIONS(294),
    [anon_sym_s8] = ACTIONS(294),
    [anon_sym_u64] = ACTIONS(294),
    [anon_sym_enum] = ACTIONS(294),
    [anon_sym_i16] = ACTIONS(294),
    [sym_is_declare] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(294),
    [anon_sym_end] = ACTIONS(294),
    [anon_sym_private] = ACTIONS(294),
    [anon_sym_u8] = ACTIONS(294),
    [anon_sym_f64] = ACTIONS(294),
    [anon_sym_i8] = ACTIONS(294),
    [anon_sym_method] = ACTIONS(294),
    [anon_sym_s32] = ACTIONS(294),
    [anon_sym_publish] = ACTIONS(294),
    [anon_sym_u32] = ACTIONS(294),
    [anon_sym_i64] = ACTIONS(294),
    [anon_sym_f32] = ACTIONS(294),
    [sym_is_external] = ACTIONS(294),
    [anon_sym_i32] = ACTIONS(294),
  },
  [89] = {
    [anon_sym_SQUOTE] = ACTIONS(296),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [anon_sym_DOT] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [sym_assignment_op] = STATE(108),
    [anon_sym_PIPE_EQ] = ACTIONS(195),
    [anon_sym_COLON_EQ] = ACTIONS(195),
    [anon_sym_PLUS_EQ] = ACTIONS(195),
    [anon_sym_AMP_EQ] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_STAR_EQ] = ACTIONS(195),
    [anon_sym_CARET_EQ] = ACTIONS(195),
    [anon_sym_DASH_EQ] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(195),
    [anon_sym_GT_GT_EQ] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(195),
    [anon_sym_LT_LT_EQ] = ACTIONS(195),
  },
  [92] = {
    [anon_sym_s16] = ACTIONS(302),
    [anon_sym_AMP_AMP] = ACTIONS(304),
    [anon_sym_GT_GT] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(304),
    [anon_sym_RBRACE] = ACTIONS(304),
    [sym_identifier] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_LT_LT_EQ] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(302),
    [anon_sym_f64] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(304),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_s32] = ACTIONS(302),
    [anon_sym_PIPE_PIPE] = ACTIONS(304),
    [anon_sym_LT_LT] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(304),
    [anon_sym_function] = ACTIONS(302),
    [sym_readonly] = ACTIONS(302),
    [anon_sym_STAR_EQ] = ACTIONS(304),
    [anon_sym_protected] = ACTIONS(302),
    [anon_sym_s8] = ACTIONS(302),
    [anon_sym_enum] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_PLUS_EQ] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(302),
    [anon_sym_method] = ACTIONS(302),
    [anon_sym_SLASH_EQ] = ACTIONS(304),
    [anon_sym_publish] = ACTIONS(302),
    [anon_sym_i64] = ACTIONS(302),
    [anon_sym_COLON_EQ] = ACTIONS(304),
    [sym_is_declare] = ACTIONS(302),
    [anon_sym_DASH_EQ] = ACTIONS(304),
    [anon_sym_PERCENT] = ACTIONS(302),
    [anon_sym_PLUS_PLUS] = ACTIONS(304),
    [anon_sym_PERCENT_EQ] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(302),
    [anon_sym_PIPE_EQ] = ACTIONS(304),
    [anon_sym_u8] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_i8] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(302),
    [sym_is_external] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(304),
    [anon_sym_PIPE] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_DASH_DASH] = ACTIONS(302),
    [anon_sym_AMP_EQ] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(304),
    [anon_sym_u16] = ACTIONS(302),
    [anon_sym_u64] = ACTIONS(302),
    [anon_sym_i16] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_EQ_EQ] = ACTIONS(304),
    [anon_sym_CARET] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(302),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(304),
    [anon_sym_u32] = ACTIONS(302),
    [anon_sym_f32] = ACTIONS(302),
    [anon_sym_i32] = ACTIONS(302),
  },
  [93] = {
    [aux_sym_string_repeat1] = STATE(153),
    [sym__comment] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym__space] = ACTIONS(161),
    [aux_sym_string_token1] = ACTIONS(308),
  },
  [94] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(310),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [anon_sym_DOT] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_DOT] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(316),
  },
  [98] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(318),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(320),
  },
  [99] = {
    [anon_sym_DOT] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [anon_sym_DQUOTE] = ACTIONS(324),
    [sym_float] = ACTIONS(324),
    [anon_sym_SQUOTE] = ACTIONS(324),
    [sym_hex] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(324),
    [sym_null] = ACTIONS(326),
    [sym_integer] = ACTIONS(326),
    [sym_binary] = ACTIONS(324),
    [sym_oct] = ACTIONS(326),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(326),
    [anon_sym_LPAREN] = ACTIONS(326),
    [sym_long] = ACTIONS(324),
  },
  [101] = {
    [sym_binary_op] = STATE(161),
    [sym_assignment_post_op] = STATE(105),
    [anon_sym_COLON_EQ] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT_EQ] = ACTIONS(183),
    [anon_sym_PIPE_EQ] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(332),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(185),
    [anon_sym_AMP_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_CARET_EQ] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_GT_GT_EQ] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(332),
  },
  [103] = {
    [sym__value] = STATE(162),
    [sym__number] = STATE(162),
    [sym_group_expression] = STATE(162),
    [sym_character] = STATE(162),
    [sym__literal] = STATE(162),
    [sym_string] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(334),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(334),
    [sym_null] = ACTIONS(336),
    [sym_integer] = ACTIONS(336),
    [sym_binary] = ACTIONS(334),
    [sym_oct] = ACTIONS(336),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(334),
  },
  [104] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [sym__space] = ACTIONS(3),
  },
  [105] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_DOT] = ACTIONS(340),
    [sym__space] = ACTIONS(3),
  },
  [106] = {
    [sym_oct] = ACTIONS(342),
    [sym_long] = ACTIONS(344),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(342),
    [sym_hex] = ACTIONS(344),
    [anon_sym_if] = ACTIONS(342),
    [anon_sym_switch] = ACTIONS(342),
    [sym_identifier] = ACTIONS(342),
    [anon_sym_end] = ACTIONS(342),
    [anon_sym_private] = ACTIONS(342),
    [anon_sym_u8] = ACTIONS(342),
    [anon_sym_f64] = ACTIONS(342),
    [sym_float] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_i8] = ACTIONS(342),
    [anon_sym_return] = ACTIONS(342),
    [anon_sym_s32] = ACTIONS(342),
    [sym_binary] = ACTIONS(344),
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym_readonly] = ACTIONS(342),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(342),
    [anon_sym_u16] = ACTIONS(342),
    [anon_sym_s8] = ACTIONS(342),
    [anon_sym_u64] = ACTIONS(342),
    [sym_integer] = ACTIONS(342),
    [anon_sym_i16] = ACTIONS(342),
    [sym_double] = ACTIONS(344),
    [anon_sym_section] = ACTIONS(342),
    [anon_sym_goto] = ACTIONS(342),
    [anon_sym_LBRACE] = ACTIONS(344),
    [sym_null] = ACTIONS(342),
    [anon_sym_while] = ACTIONS(342),
    [anon_sym_publish] = ACTIONS(342),
    [anon_sym_u32] = ACTIONS(342),
    [anon_sym_i64] = ACTIONS(342),
    [anon_sym_f32] = ACTIONS(342),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_i32] = ACTIONS(342),
  },
  [107] = {
    [anon_sym_DQUOTE] = ACTIONS(346),
    [sym_hex] = ACTIONS(346),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(346),
    [sym_integer] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_float] = ACTIONS(346),
    [anon_sym_SQUOTE] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(346),
    [sym_null] = ACTIONS(348),
    [sym_binary] = ACTIONS(346),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(348),
    [sym_long] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(348),
  },
  [108] = {
    [sym__value] = STATE(163),
    [sym__number] = STATE(163),
    [sym_group_expression] = STATE(163),
    [sym__literal] = STATE(163),
    [sym_string] = STATE(163),
    [sym__collection_or_value] = STATE(163),
    [sym_character] = STATE(163),
    [sym_collection] = STATE(163),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(350),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(350),
    [sym_integer] = ACTIONS(352),
    [sym_identifier] = ACTIONS(352),
    [sym_float] = ACTIONS(350),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(352),
    [sym_binary] = ACTIONS(350),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(352),
    [sym_long] = ACTIONS(350),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [109] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(164),
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
  [110] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(354),
    [sym_readonly] = ACTIONS(354),
    [anon_sym_s16] = ACTIONS(354),
    [anon_sym_protected] = ACTIONS(354),
    [anon_sym_u16] = ACTIONS(354),
    [anon_sym_s8] = ACTIONS(354),
    [anon_sym_u64] = ACTIONS(354),
    [anon_sym_enum] = ACTIONS(354),
    [anon_sym_i16] = ACTIONS(354),
    [sym_is_declare] = ACTIONS(354),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(354),
    [anon_sym_end] = ACTIONS(354),
    [anon_sym_private] = ACTIONS(354),
    [anon_sym_u8] = ACTIONS(354),
    [anon_sym_f64] = ACTIONS(354),
    [anon_sym_i8] = ACTIONS(354),
    [anon_sym_method] = ACTIONS(354),
    [anon_sym_s32] = ACTIONS(354),
    [anon_sym_publish] = ACTIONS(354),
    [anon_sym_u32] = ACTIONS(354),
    [anon_sym_i64] = ACTIONS(354),
    [anon_sym_f32] = ACTIONS(354),
    [sym_is_external] = ACTIONS(354),
    [anon_sym_i32] = ACTIONS(354),
  },
  [111] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [sym_oct] = ACTIONS(356),
    [sym_long] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(362),
    [sym_hex] = ACTIONS(359),
    [anon_sym_if] = ACTIONS(365),
    [anon_sym_switch] = ACTIONS(368),
    [sym_identifier] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(374),
    [anon_sym_private] = ACTIONS(376),
    [anon_sym_u8] = ACTIONS(362),
    [anon_sym_f64] = ACTIONS(362),
    [sym_float] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_i8] = ACTIONS(362),
    [anon_sym_return] = ACTIONS(382),
    [anon_sym_s32] = ACTIONS(362),
    [sym_binary] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [sym_readonly] = ACTIONS(388),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(376),
    [anon_sym_u16] = ACTIONS(362),
    [anon_sym_s8] = ACTIONS(362),
    [anon_sym_u64] = ACTIONS(362),
    [sym_integer] = ACTIONS(356),
    [anon_sym_i16] = ACTIONS(362),
    [sym_double] = ACTIONS(359),
    [anon_sym_section] = ACTIONS(391),
    [anon_sym_goto] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(397),
    [sym_null] = ACTIONS(356),
    [anon_sym_while] = ACTIONS(400),
    [anon_sym_publish] = ACTIONS(376),
    [anon_sym_u32] = ACTIONS(362),
    [anon_sym_i64] = ACTIONS(362),
    [anon_sym_f32] = ACTIONS(362),
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_i32] = ACTIONS(362),
  },
  [112] = {
    [sym_static_assignment] = STATE(129),
    [anon_sym_COLON_EQ] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(406),
  },
  [113] = {
    [anon_sym_DOT] = ACTIONS(408),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(412),
    [sym_readonly] = ACTIONS(412),
    [anon_sym_s16] = ACTIONS(412),
    [anon_sym_protected] = ACTIONS(412),
    [anon_sym_u16] = ACTIONS(412),
    [anon_sym_s8] = ACTIONS(412),
    [anon_sym_u64] = ACTIONS(412),
    [anon_sym_enum] = ACTIONS(412),
    [anon_sym_i16] = ACTIONS(412),
    [sym_is_declare] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(412),
    [anon_sym_end] = ACTIONS(412),
    [anon_sym_private] = ACTIONS(412),
    [anon_sym_u8] = ACTIONS(412),
    [anon_sym_f64] = ACTIONS(412),
    [anon_sym_i8] = ACTIONS(412),
    [anon_sym_method] = ACTIONS(412),
    [anon_sym_s32] = ACTIONS(412),
    [anon_sym_publish] = ACTIONS(412),
    [anon_sym_u32] = ACTIONS(412),
    [anon_sym_i64] = ACTIONS(412),
    [anon_sym_f32] = ACTIONS(412),
    [sym_is_external] = ACTIONS(412),
    [anon_sym_i32] = ACTIONS(412),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [117] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [anon_sym_COMMA] = ACTIONS(416),
  },
  [118] = {
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym_array] = STATE(119),
    [aux_sym_type_repeat2] = STATE(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(423),
  },
  [120] = {
    [sym_array] = STATE(119),
    [aux_sym_type_repeat2] = STATE(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(425),
  },
  [121] = {
    [sym_pointer] = STATE(121),
    [aux_sym_type_repeat1] = STATE(121),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(429),
  },
  [122] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(432),
    [sym__comment] = ACTIONS(3),
  },
  [123] = {
    [sym_parameter_list] = STATE(169),
    [sym_return_list] = STATE(170),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [124] = {
    [sym__base_type] = STATE(171),
    [sym_primitive_type] = STATE(171),
    [sym__comma_list_types] = STATE(172),
    [sym_type] = STATE(173),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(436),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [125] = {
    [sym_oct] = ACTIONS(440),
    [sym_long] = ACTIONS(442),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(440),
    [sym_hex] = ACTIONS(442),
    [anon_sym_if] = ACTIONS(440),
    [anon_sym_switch] = ACTIONS(440),
    [sym_identifier] = ACTIONS(440),
    [anon_sym_end] = ACTIONS(440),
    [anon_sym_private] = ACTIONS(440),
    [anon_sym_u8] = ACTIONS(440),
    [anon_sym_f64] = ACTIONS(440),
    [sym_float] = ACTIONS(442),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [anon_sym_i8] = ACTIONS(440),
    [anon_sym_return] = ACTIONS(440),
    [anon_sym_s32] = ACTIONS(440),
    [sym_binary] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [sym_readonly] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(440),
    [anon_sym_u16] = ACTIONS(440),
    [anon_sym_s8] = ACTIONS(440),
    [anon_sym_u64] = ACTIONS(440),
    [sym_integer] = ACTIONS(440),
    [anon_sym_i16] = ACTIONS(440),
    [sym_double] = ACTIONS(442),
    [anon_sym_section] = ACTIONS(440),
    [anon_sym_goto] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(442),
    [sym_null] = ACTIONS(440),
    [anon_sym_while] = ACTIONS(440),
    [anon_sym_publish] = ACTIONS(440),
    [anon_sym_u32] = ACTIONS(440),
    [anon_sym_i64] = ACTIONS(440),
    [anon_sym_f32] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(440),
    [anon_sym_i32] = ACTIONS(440),
  },
  [126] = {
    [sym_return_list] = STATE(170),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
  },
  [127] = {
    [anon_sym_DOT] = ACTIONS(434),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [128] = {
    [sym__value] = STATE(175),
    [sym__number] = STATE(175),
    [sym_group_expression] = STATE(175),
    [sym__literal] = STATE(175),
    [sym_string] = STATE(175),
    [sym__collection_or_value] = STATE(175),
    [sym_character] = STATE(175),
    [sym_collection] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(444),
    [sym_integer] = ACTIONS(446),
    [sym_identifier] = ACTIONS(446),
    [sym_float] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(446),
    [sym_binary] = ACTIONS(444),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(446),
    [sym_long] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(448),
  },
  [129] = {
    [anon_sym_s16] = ACTIONS(255),
    [sym_is_declare] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_end] = ACTIONS(255),
    [anon_sym_private] = ACTIONS(255),
    [anon_sym_u8] = ACTIONS(255),
    [anon_sym_f64] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_i8] = ACTIONS(255),
    [anon_sym_s32] = ACTIONS(255),
    [sym_is_external] = ACTIONS(255),
    [anon_sym_function] = ACTIONS(255),
    [sym_readonly] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(255),
    [anon_sym_u16] = ACTIONS(255),
    [anon_sym_s8] = ACTIONS(255),
    [anon_sym_u64] = ACTIONS(255),
    [anon_sym_enum] = ACTIONS(255),
    [anon_sym_i16] = ACTIONS(255),
    [anon_sym_method] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(255),
    [anon_sym_u32] = ACTIONS(255),
    [anon_sym_i64] = ACTIONS(255),
    [anon_sym_f32] = ACTIONS(255),
    [anon_sym_i32] = ACTIONS(255),
  },
  [130] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_module] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
  },
  [131] = {
    [anon_sym_s16] = ACTIONS(454),
    [sym_is_declare] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_end] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(454),
    [anon_sym_f64] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [anon_sym_i8] = ACTIONS(454),
    [anon_sym_s32] = ACTIONS(454),
    [sym_is_external] = ACTIONS(454),
    [anon_sym_function] = ACTIONS(454),
    [sym_readonly] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(454),
    [anon_sym_u16] = ACTIONS(454),
    [anon_sym_s8] = ACTIONS(454),
    [anon_sym_u64] = ACTIONS(454),
    [anon_sym_enum] = ACTIONS(454),
    [anon_sym_i16] = ACTIONS(454),
    [anon_sym_method] = ACTIONS(454),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(454),
    [anon_sym_u32] = ACTIONS(454),
    [anon_sym_i64] = ACTIONS(454),
    [anon_sym_f32] = ACTIONS(454),
    [anon_sym_i32] = ACTIONS(454),
  },
  [132] = {
    [sym__value] = STATE(175),
    [sym__number] = STATE(175),
    [sym_group_expression] = STATE(175),
    [sym__literal] = STATE(175),
    [sym_string] = STATE(175),
    [sym__collection_or_value] = STATE(175),
    [sym_character] = STATE(175),
    [sym_collection] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(444),
    [sym_integer] = ACTIONS(446),
    [sym_identifier] = ACTIONS(446),
    [sym_float] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(446),
    [sym_binary] = ACTIONS(444),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(446),
    [sym_long] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [133] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(458),
  },
  [134] = {
    [sym__enum_element] = STATE(176),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(127),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [aux_sym_enum_definition_repeat1] = STATE(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
  },
  [137] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(440),
    [sym_readonly] = ACTIONS(440),
    [anon_sym_s16] = ACTIONS(440),
    [anon_sym_protected] = ACTIONS(440),
    [anon_sym_u16] = ACTIONS(440),
    [anon_sym_s8] = ACTIONS(440),
    [anon_sym_u64] = ACTIONS(440),
    [anon_sym_enum] = ACTIONS(440),
    [anon_sym_i16] = ACTIONS(440),
    [sym_is_declare] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(440),
    [anon_sym_end] = ACTIONS(440),
    [anon_sym_private] = ACTIONS(440),
    [anon_sym_u8] = ACTIONS(440),
    [anon_sym_f64] = ACTIONS(440),
    [anon_sym_i8] = ACTIONS(440),
    [anon_sym_method] = ACTIONS(440),
    [anon_sym_s32] = ACTIONS(440),
    [anon_sym_publish] = ACTIONS(440),
    [anon_sym_u32] = ACTIONS(440),
    [anon_sym_i64] = ACTIONS(440),
    [anon_sym_f32] = ACTIONS(440),
    [sym_is_external] = ACTIONS(440),
    [anon_sym_i32] = ACTIONS(440),
  },
  [138] = {
    [sym_return_list] = STATE(181),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
  },
  [139] = {
    [anon_sym_DOT] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [140] = {
    [sym_parameter_list] = STATE(182),
    [sym_return_list] = STATE(181),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [141] = {
    [sym_access_control] = STATE(56),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(59),
    [sym_variable_definition] = STATE(183),
    [sym_readonly] = ACTIONS(111),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(109),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [142] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(275),
  },
  [143] = {
    [anon_sym_returns] = ACTIONS(468),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
  },
  [144] = {
    [sym_oct] = ACTIONS(470),
    [sym_long] = ACTIONS(472),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(470),
    [sym_is_declare] = ACTIONS(470),
    [sym_hex] = ACTIONS(472),
    [anon_sym_if] = ACTIONS(470),
    [anon_sym_switch] = ACTIONS(470),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_end] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(470),
    [anon_sym_u8] = ACTIONS(470),
    [anon_sym_f64] = ACTIONS(470),
    [sym_float] = ACTIONS(472),
    [anon_sym_SQUOTE] = ACTIONS(472),
    [anon_sym_i8] = ACTIONS(470),
    [anon_sym_return] = ACTIONS(470),
    [anon_sym_s32] = ACTIONS(470),
    [sym_is_external] = ACTIONS(470),
    [sym_binary] = ACTIONS(472),
    [anon_sym_function] = ACTIONS(470),
    [anon_sym_DQUOTE] = ACTIONS(472),
    [sym_readonly] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(470),
    [anon_sym_u16] = ACTIONS(470),
    [anon_sym_s8] = ACTIONS(470),
    [anon_sym_u64] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(470),
    [anon_sym_i16] = ACTIONS(470),
    [sym_integer] = ACTIONS(470),
    [anon_sym_section] = ACTIONS(470),
    [sym_double] = ACTIONS(472),
    [anon_sym_goto] = ACTIONS(470),
    [anon_sym_method] = ACTIONS(470),
    [anon_sym_LBRACE] = ACTIONS(472),
    [anon_sym_while] = ACTIONS(470),
    [sym_null] = ACTIONS(470),
    [anon_sym_publish] = ACTIONS(470),
    [anon_sym_u32] = ACTIONS(470),
    [anon_sym_i64] = ACTIONS(470),
    [anon_sym_f32] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_i32] = ACTIONS(470),
  },
  [145] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(186),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(186),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(186),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_if] = STATE(187),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [146] = {
    [sym_oct] = ACTIONS(476),
    [sym_long] = ACTIONS(478),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(476),
    [sym_hex] = ACTIONS(478),
    [anon_sym_if] = ACTIONS(476),
    [anon_sym_switch] = ACTIONS(476),
    [sym_identifier] = ACTIONS(476),
    [anon_sym_end] = ACTIONS(476),
    [anon_sym_private] = ACTIONS(476),
    [anon_sym_u8] = ACTIONS(476),
    [anon_sym_f64] = ACTIONS(476),
    [sym_float] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(478),
    [anon_sym_i8] = ACTIONS(476),
    [anon_sym_return] = ACTIONS(476),
    [anon_sym_s32] = ACTIONS(476),
    [sym_binary] = ACTIONS(478),
    [anon_sym_DQUOTE] = ACTIONS(478),
    [sym_readonly] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(476),
    [anon_sym_u16] = ACTIONS(476),
    [anon_sym_s8] = ACTIONS(476),
    [anon_sym_u64] = ACTIONS(476),
    [sym_integer] = ACTIONS(476),
    [anon_sym_i16] = ACTIONS(476),
    [sym_double] = ACTIONS(478),
    [anon_sym_section] = ACTIONS(476),
    [anon_sym_goto] = ACTIONS(476),
    [anon_sym_LBRACE] = ACTIONS(478),
    [sym_null] = ACTIONS(476),
    [anon_sym_while] = ACTIONS(476),
    [anon_sym_publish] = ACTIONS(476),
    [anon_sym_u32] = ACTIONS(476),
    [anon_sym_i64] = ACTIONS(476),
    [anon_sym_f32] = ACTIONS(476),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_i32] = ACTIONS(476),
  },
  [147] = {
    [sym_case_statement] = STATE(190),
    [aux_sym_switch_statement_repeat1] = STATE(190),
    [sym_default_statement] = STATE(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(482),
  },
  [148] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(135),
    [sym_readonly] = ACTIONS(135),
    [anon_sym_s16] = ACTIONS(135),
    [anon_sym_protected] = ACTIONS(135),
    [anon_sym_u16] = ACTIONS(135),
    [anon_sym_s8] = ACTIONS(135),
    [anon_sym_u64] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_i16] = ACTIONS(135),
    [sym_is_declare] = ACTIONS(135),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_private] = ACTIONS(135),
    [anon_sym_u8] = ACTIONS(135),
    [anon_sym_f64] = ACTIONS(135),
    [anon_sym_i8] = ACTIONS(135),
    [anon_sym_method] = ACTIONS(135),
    [anon_sym_s32] = ACTIONS(135),
    [anon_sym_publish] = ACTIONS(135),
    [anon_sym_u32] = ACTIONS(135),
    [anon_sym_i64] = ACTIONS(135),
    [anon_sym_f32] = ACTIONS(135),
    [sym_is_external] = ACTIONS(135),
    [anon_sym_i32] = ACTIONS(135),
  },
  [149] = {
    [aux_sym_compound_template_repeat1] = STATE(83),
    [sym_parameter_list] = STATE(193),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [150] = {
    [anon_sym_DOT] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [151] = {
    [anon_sym_s16] = ACTIONS(486),
    [anon_sym_AMP_AMP] = ACTIONS(488),
    [anon_sym_GT_GT] = ACTIONS(486),
    [anon_sym_GT_EQ] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(488),
    [sym_identifier] = ACTIONS(486),
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_LT_LT_EQ] = ACTIONS(488),
    [anon_sym_private] = ACTIONS(486),
    [anon_sym_f64] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(486),
    [anon_sym_s32] = ACTIONS(486),
    [anon_sym_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_LT_LT] = ACTIONS(486),
    [anon_sym_LT_EQ] = ACTIONS(488),
    [anon_sym_function] = ACTIONS(486),
    [sym_readonly] = ACTIONS(486),
    [anon_sym_STAR_EQ] = ACTIONS(488),
    [anon_sym_protected] = ACTIONS(486),
    [anon_sym_s8] = ACTIONS(486),
    [anon_sym_enum] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_PLUS_EQ] = ACTIONS(488),
    [anon_sym_SLASH] = ACTIONS(486),
    [anon_sym_method] = ACTIONS(486),
    [anon_sym_SLASH_EQ] = ACTIONS(488),
    [anon_sym_publish] = ACTIONS(486),
    [anon_sym_i64] = ACTIONS(486),
    [anon_sym_COLON_EQ] = ACTIONS(488),
    [sym_is_declare] = ACTIONS(486),
    [anon_sym_DASH_EQ] = ACTIONS(488),
    [anon_sym_PERCENT] = ACTIONS(486),
    [anon_sym_PLUS_PLUS] = ACTIONS(488),
    [anon_sym_PERCENT_EQ] = ACTIONS(488),
    [anon_sym_end] = ACTIONS(486),
    [anon_sym_PIPE_EQ] = ACTIONS(488),
    [anon_sym_u8] = ACTIONS(486),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_i8] = ACTIONS(486),
    [anon_sym_AMP] = ACTIONS(486),
    [sym_is_external] = ACTIONS(486),
    [anon_sym_BANG_EQ] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_DASH_DASH] = ACTIONS(486),
    [anon_sym_AMP_EQ] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(488),
    [anon_sym_u16] = ACTIONS(486),
    [anon_sym_u64] = ACTIONS(486),
    [anon_sym_i16] = ACTIONS(486),
    [anon_sym_DASH] = ACTIONS(486),
    [anon_sym_EQ_EQ] = ACTIONS(488),
    [anon_sym_CARET] = ACTIONS(486),
    [anon_sym_LT] = ACTIONS(486),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(488),
    [anon_sym_u32] = ACTIONS(486),
    [anon_sym_f32] = ACTIONS(486),
    [anon_sym_i32] = ACTIONS(486),
  },
  [152] = {
    [anon_sym_s16] = ACTIONS(490),
    [anon_sym_AMP_AMP] = ACTIONS(492),
    [anon_sym_GT_GT] = ACTIONS(490),
    [anon_sym_GT_EQ] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(492),
    [sym_identifier] = ACTIONS(490),
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_LT_LT_EQ] = ACTIONS(492),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_f64] = ACTIONS(490),
    [anon_sym_DOT] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(490),
    [anon_sym_s32] = ACTIONS(490),
    [anon_sym_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_LT_LT] = ACTIONS(490),
    [anon_sym_LT_EQ] = ACTIONS(492),
    [anon_sym_function] = ACTIONS(490),
    [sym_readonly] = ACTIONS(490),
    [anon_sym_STAR_EQ] = ACTIONS(492),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_s8] = ACTIONS(490),
    [anon_sym_enum] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_PLUS_EQ] = ACTIONS(492),
    [anon_sym_SLASH] = ACTIONS(490),
    [anon_sym_method] = ACTIONS(490),
    [anon_sym_SLASH_EQ] = ACTIONS(492),
    [anon_sym_publish] = ACTIONS(490),
    [anon_sym_i64] = ACTIONS(490),
    [anon_sym_COLON_EQ] = ACTIONS(492),
    [sym_is_declare] = ACTIONS(490),
    [anon_sym_DASH_EQ] = ACTIONS(492),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_PLUS_PLUS] = ACTIONS(492),
    [anon_sym_PERCENT_EQ] = ACTIONS(492),
    [anon_sym_end] = ACTIONS(490),
    [anon_sym_PIPE_EQ] = ACTIONS(492),
    [anon_sym_u8] = ACTIONS(490),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_i8] = ACTIONS(490),
    [anon_sym_AMP] = ACTIONS(490),
    [sym_is_external] = ACTIONS(490),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_DASH_DASH] = ACTIONS(490),
    [anon_sym_AMP_EQ] = ACTIONS(492),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(492),
    [anon_sym_u16] = ACTIONS(490),
    [anon_sym_u64] = ACTIONS(490),
    [anon_sym_i16] = ACTIONS(490),
    [anon_sym_DASH] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_CARET] = ACTIONS(490),
    [anon_sym_LT] = ACTIONS(490),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(492),
    [anon_sym_u32] = ACTIONS(490),
    [anon_sym_f32] = ACTIONS(490),
    [anon_sym_i32] = ACTIONS(490),
  },
  [153] = {
    [aux_sym_string_repeat1] = STATE(153),
    [sym__comment] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(494),
    [sym__space] = ACTIONS(161),
    [aux_sym_string_token1] = ACTIONS(496),
  },
  [154] = {
    [sym_static_assignment] = STATE(131),
    [anon_sym_COLON_EQ] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [155] = {
    [anon_sym_i32] = ACTIONS(499),
    [anon_sym_COLON_EQ] = ACTIONS(501),
    [anon_sym_s16] = ACTIONS(499),
    [sym_is_declare] = ACTIONS(499),
    [anon_sym_DASH_EQ] = ACTIONS(501),
    [anon_sym_RBRACE] = ACTIONS(501),
    [sym_identifier] = ACTIONS(499),
    [anon_sym_PERCENT_EQ] = ACTIONS(501),
    [anon_sym_LT_LT_EQ] = ACTIONS(501),
    [anon_sym_PIPE_EQ] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_end] = ACTIONS(499),
    [anon_sym_private] = ACTIONS(499),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_u8] = ACTIONS(499),
    [anon_sym_f64] = ACTIONS(499),
    [anon_sym_i8] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_s32] = ACTIONS(499),
    [sym_is_external] = ACTIONS(499),
    [anon_sym_function] = ACTIONS(499),
    [anon_sym_AMP_EQ] = ACTIONS(501),
    [anon_sym_STAR_EQ] = ACTIONS(501),
    [anon_sym_CARET_EQ] = ACTIONS(501),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(499),
    [anon_sym_protected] = ACTIONS(499),
    [anon_sym_u16] = ACTIONS(499),
    [anon_sym_s8] = ACTIONS(499),
    [anon_sym_u64] = ACTIONS(499),
    [anon_sym_enum] = ACTIONS(499),
    [anon_sym_i16] = ACTIONS(499),
    [anon_sym_PLUS_EQ] = ACTIONS(501),
    [anon_sym_method] = ACTIONS(499),
    [anon_sym_SLASH_EQ] = ACTIONS(501),
    [anon_sym_GT_GT_EQ] = ACTIONS(501),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(499),
    [anon_sym_u32] = ACTIONS(499),
    [anon_sym_i64] = ACTIONS(499),
    [anon_sym_f32] = ACTIONS(499),
  },
  [156] = {
    [sym__value] = STATE(194),
    [sym__number] = STATE(194),
    [sym_group_expression] = STATE(194),
    [sym__literal] = STATE(194),
    [sym_string] = STATE(194),
    [sym__collection_or_value] = STATE(194),
    [sym_character] = STATE(194),
    [sym_collection] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(503),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(503),
    [sym_integer] = ACTIONS(505),
    [sym_identifier] = ACTIONS(505),
    [sym_float] = ACTIONS(503),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(505),
    [sym_binary] = ACTIONS(503),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(505),
    [sym_long] = ACTIONS(503),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [157] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(507),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(320),
  },
  [158] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(197),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(197),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(197),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_while] = STATE(198),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [159] = {
    [anon_sym_DQUOTE] = ACTIONS(511),
    [sym_float] = ACTIONS(511),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [sym_hex] = ACTIONS(511),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(511),
    [sym_null] = ACTIONS(513),
    [sym_integer] = ACTIONS(513),
    [sym_binary] = ACTIONS(511),
    [sym_oct] = ACTIONS(513),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(513),
    [sym_long] = ACTIONS(511),
  },
  [160] = {
    [anon_sym_s16] = ACTIONS(515),
    [anon_sym_AMP_AMP] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(515),
    [anon_sym_GT_EQ] = ACTIONS(517),
    [anon_sym_RBRACE] = ACTIONS(517),
    [sym_identifier] = ACTIONS(515),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_LT_LT_EQ] = ACTIONS(517),
    [anon_sym_private] = ACTIONS(515),
    [anon_sym_f64] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(515),
    [anon_sym_s32] = ACTIONS(515),
    [anon_sym_PIPE_PIPE] = ACTIONS(517),
    [anon_sym_LT_LT] = ACTIONS(515),
    [anon_sym_LT_EQ] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym_readonly] = ACTIONS(515),
    [anon_sym_STAR_EQ] = ACTIONS(517),
    [anon_sym_protected] = ACTIONS(515),
    [anon_sym_s8] = ACTIONS(515),
    [sym_integer] = ACTIONS(515),
    [anon_sym_section] = ACTIONS(515),
    [anon_sym_STAR] = ACTIONS(515),
    [anon_sym_PLUS_EQ] = ACTIONS(517),
    [anon_sym_SLASH] = ACTIONS(515),
    [anon_sym_while] = ACTIONS(515),
    [anon_sym_SLASH_EQ] = ACTIONS(517),
    [anon_sym_publish] = ACTIONS(515),
    [sym_oct] = ACTIONS(515),
    [anon_sym_i64] = ACTIONS(515),
    [sym_long] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_COLON_EQ] = ACTIONS(517),
    [sym_hex] = ACTIONS(517),
    [anon_sym_DASH_EQ] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_if] = ACTIONS(515),
    [anon_sym_PLUS_PLUS] = ACTIONS(517),
    [anon_sym_switch] = ACTIONS(515),
    [anon_sym_PERCENT_EQ] = ACTIONS(517),
    [anon_sym_PIPE_EQ] = ACTIONS(517),
    [anon_sym_u8] = ACTIONS(515),
    [sym_float] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_i8] = ACTIONS(515),
    [anon_sym_return] = ACTIONS(515),
    [anon_sym_AMP] = ACTIONS(515),
    [sym_binary] = ACTIONS(517),
    [anon_sym_BANG_EQ] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_DASH_DASH] = ACTIONS(515),
    [anon_sym_AMP_EQ] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(517),
    [anon_sym_u16] = ACTIONS(515),
    [sym_double] = ACTIONS(517),
    [anon_sym_u64] = ACTIONS(515),
    [anon_sym_i16] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym_goto] = ACTIONS(515),
    [anon_sym_EQ_EQ] = ACTIONS(517),
    [anon_sym_CARET] = ACTIONS(515),
    [anon_sym_LT] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(517),
    [sym_null] = ACTIONS(515),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(517),
    [anon_sym_u32] = ACTIONS(515),
    [anon_sym_f32] = ACTIONS(515),
    [anon_sym_i32] = ACTIONS(515),
  },
  [161] = {
    [sym__value] = STATE(199),
    [sym__number] = STATE(199),
    [sym_group_expression] = STATE(199),
    [sym_character] = STATE(199),
    [sym__literal] = STATE(199),
    [sym_string] = STATE(199),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(519),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(519),
    [sym_null] = ACTIONS(521),
    [sym_integer] = ACTIONS(521),
    [sym_binary] = ACTIONS(519),
    [sym_oct] = ACTIONS(521),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(519),
  },
  [162] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(523),
  },
  [163] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
  },
  [164] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(527),
    [sym__comment] = ACTIONS(3),
  },
  [165] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(529),
    [sym_readonly] = ACTIONS(529),
    [anon_sym_s16] = ACTIONS(529),
    [anon_sym_protected] = ACTIONS(529),
    [anon_sym_u16] = ACTIONS(529),
    [anon_sym_s8] = ACTIONS(529),
    [anon_sym_u64] = ACTIONS(529),
    [anon_sym_enum] = ACTIONS(529),
    [anon_sym_i16] = ACTIONS(529),
    [sym_is_declare] = ACTIONS(529),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(529),
    [anon_sym_end] = ACTIONS(529),
    [anon_sym_private] = ACTIONS(529),
    [anon_sym_u8] = ACTIONS(529),
    [anon_sym_f64] = ACTIONS(529),
    [anon_sym_i8] = ACTIONS(529),
    [anon_sym_method] = ACTIONS(529),
    [anon_sym_s32] = ACTIONS(529),
    [anon_sym_publish] = ACTIONS(529),
    [anon_sym_u32] = ACTIONS(529),
    [anon_sym_i64] = ACTIONS(529),
    [anon_sym_f32] = ACTIONS(529),
    [sym_is_external] = ACTIONS(529),
    [anon_sym_i32] = ACTIONS(529),
  },
  [166] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(531),
    [anon_sym_DOT] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
  },
  [167] = {
    [sym_static_assignment] = STATE(202),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(454),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [sym_readonly] = ACTIONS(454),
    [anon_sym_s16] = ACTIONS(454),
    [anon_sym_protected] = ACTIONS(454),
    [anon_sym_u16] = ACTIONS(454),
    [anon_sym_s8] = ACTIONS(454),
    [anon_sym_u64] = ACTIONS(454),
    [anon_sym_enum] = ACTIONS(454),
    [anon_sym_i16] = ACTIONS(454),
    [sym_is_declare] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(454),
    [anon_sym_end] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(454),
    [anon_sym_f64] = ACTIONS(454),
    [anon_sym_i8] = ACTIONS(454),
    [anon_sym_method] = ACTIONS(454),
    [anon_sym_s32] = ACTIONS(454),
    [anon_sym_publish] = ACTIONS(454),
    [anon_sym_u32] = ACTIONS(454),
    [anon_sym_i64] = ACTIONS(454),
    [anon_sym_f32] = ACTIONS(454),
    [sym_is_external] = ACTIONS(454),
    [anon_sym_i32] = ACTIONS(454),
  },
  [168] = {
    [sym_oct] = ACTIONS(533),
    [sym_long] = ACTIONS(535),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(533),
    [sym_hex] = ACTIONS(535),
    [anon_sym_if] = ACTIONS(533),
    [anon_sym_switch] = ACTIONS(533),
    [sym_identifier] = ACTIONS(533),
    [anon_sym_end] = ACTIONS(533),
    [anon_sym_private] = ACTIONS(533),
    [anon_sym_u8] = ACTIONS(533),
    [anon_sym_f64] = ACTIONS(533),
    [sym_float] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_i8] = ACTIONS(533),
    [anon_sym_return] = ACTIONS(533),
    [anon_sym_s32] = ACTIONS(533),
    [sym_binary] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [sym_readonly] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(533),
    [anon_sym_u16] = ACTIONS(533),
    [anon_sym_s8] = ACTIONS(533),
    [anon_sym_u64] = ACTIONS(533),
    [sym_integer] = ACTIONS(533),
    [anon_sym_i16] = ACTIONS(533),
    [sym_double] = ACTIONS(535),
    [anon_sym_section] = ACTIONS(533),
    [anon_sym_goto] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym_null] = ACTIONS(533),
    [anon_sym_while] = ACTIONS(533),
    [anon_sym_publish] = ACTIONS(533),
    [anon_sym_u32] = ACTIONS(533),
    [anon_sym_i64] = ACTIONS(533),
    [anon_sym_f32] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_i32] = ACTIONS(533),
  },
  [169] = {
    [sym_return_list] = STATE(204),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [anon_sym_DOT] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [171] = {
    [sym_pointer] = STATE(206),
    [sym_array] = STATE(205),
    [aux_sym_type_repeat2] = STATE(205),
    [aux_sym_type_repeat1] = STATE(206),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
  },
  [172] = {
    [anon_sym_DOT] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [173] = {
    [aux_sym__comma_list_types_repeat1] = STATE(208),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(543),
  },
  [174] = {
    [sym__value] = STATE(209),
    [sym__number] = STATE(209),
    [sym_group_expression] = STATE(209),
    [sym__literal] = STATE(209),
    [sym_string] = STATE(209),
    [sym_assignment_expression] = STATE(210),
    [sym_unary_op] = STATE(211),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(209),
    [sym_collection] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(545),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(545),
    [sym_integer] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(181),
    [sym_identifier] = ACTIONS(547),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(175),
    [sym_float] = ACTIONS(545),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(175),
    [sym_null] = ACTIONS(547),
    [sym_binary] = ACTIONS(545),
    [sym_oct] = ACTIONS(547),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [175] = {
    [anon_sym_s16] = ACTIONS(549),
    [sym_is_declare] = ACTIONS(549),
    [sym_identifier] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(551),
    [anon_sym_end] = ACTIONS(549),
    [anon_sym_private] = ACTIONS(549),
    [anon_sym_u8] = ACTIONS(549),
    [anon_sym_f64] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(551),
    [anon_sym_i8] = ACTIONS(549),
    [anon_sym_s32] = ACTIONS(549),
    [sym_is_external] = ACTIONS(549),
    [anon_sym_function] = ACTIONS(549),
    [sym_readonly] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(549),
    [anon_sym_u16] = ACTIONS(549),
    [anon_sym_s8] = ACTIONS(549),
    [anon_sym_u64] = ACTIONS(549),
    [anon_sym_enum] = ACTIONS(549),
    [anon_sym_i16] = ACTIONS(549),
    [anon_sym_method] = ACTIONS(549),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(549),
    [anon_sym_u32] = ACTIONS(549),
    [anon_sym_i64] = ACTIONS(549),
    [anon_sym_f32] = ACTIONS(549),
    [anon_sym_i32] = ACTIONS(549),
  },
  [176] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(553),
  },
  [177] = {
    [anon_sym_DOT] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [178] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
  },
  [179] = {
    [aux_sym_enum_definition_repeat1] = STATE(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(559),
  },
  [180] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(533),
    [sym_readonly] = ACTIONS(533),
    [anon_sym_s16] = ACTIONS(533),
    [anon_sym_protected] = ACTIONS(533),
    [anon_sym_u16] = ACTIONS(533),
    [anon_sym_s8] = ACTIONS(533),
    [anon_sym_u64] = ACTIONS(533),
    [anon_sym_enum] = ACTIONS(533),
    [anon_sym_i16] = ACTIONS(533),
    [sym_is_declare] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(533),
    [anon_sym_end] = ACTIONS(533),
    [anon_sym_private] = ACTIONS(533),
    [anon_sym_u8] = ACTIONS(533),
    [anon_sym_f64] = ACTIONS(533),
    [anon_sym_i8] = ACTIONS(533),
    [anon_sym_method] = ACTIONS(533),
    [anon_sym_s32] = ACTIONS(533),
    [anon_sym_publish] = ACTIONS(533),
    [anon_sym_u32] = ACTIONS(533),
    [anon_sym_i64] = ACTIONS(533),
    [anon_sym_f32] = ACTIONS(533),
    [sym_is_external] = ACTIONS(533),
    [anon_sym_i32] = ACTIONS(533),
  },
  [181] = {
    [anon_sym_DOT] = ACTIONS(562),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [182] = {
    [sym_return_list] = STATE(215),
    [anon_sym_returns] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(562),
    [sym__space] = ACTIONS(3),
  },
  [183] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(564),
  },
  [184] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(566),
  },
  [185] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(569),
  },
  [186] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_if] = STATE(217),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [187] = {
    [anon_sym_DOT] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [188] = {
    [sym_group_expression] = STATE(218),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(147),
  },
  [189] = {
    [anon_sym_DOT] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [190] = {
    [sym_case_statement] = STATE(220),
    [aux_sym_switch_statement_repeat1] = STATE(220),
    [sym_default_statement] = STATE(221),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(480),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(482),
  },
  [191] = {
    [sym_end_switch] = STATE(223),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(575),
  },
  [192] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(279),
    [sym_readonly] = ACTIONS(279),
    [anon_sym_s16] = ACTIONS(279),
    [anon_sym_protected] = ACTIONS(279),
    [anon_sym_u16] = ACTIONS(279),
    [anon_sym_s8] = ACTIONS(279),
    [anon_sym_u64] = ACTIONS(279),
    [anon_sym_enum] = ACTIONS(279),
    [anon_sym_i16] = ACTIONS(279),
    [sym_is_declare] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(279),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_private] = ACTIONS(279),
    [anon_sym_u8] = ACTIONS(279),
    [anon_sym_f64] = ACTIONS(279),
    [anon_sym_i8] = ACTIONS(279),
    [anon_sym_method] = ACTIONS(279),
    [anon_sym_s32] = ACTIONS(279),
    [anon_sym_publish] = ACTIONS(279),
    [anon_sym_u32] = ACTIONS(279),
    [anon_sym_i64] = ACTIONS(279),
    [anon_sym_f32] = ACTIONS(279),
    [sym_is_external] = ACTIONS(279),
    [anon_sym_i32] = ACTIONS(279),
  },
  [193] = {
    [anon_sym_DOT] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [194] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(579),
  },
  [195] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(579),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(581),
  },
  [196] = {
    [anon_sym_while] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [197] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_switch_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_while] = STATE(226),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(509),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [198] = {
    [anon_sym_DOT] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(588),
  },
  [200] = {
    [anon_sym_s16] = ACTIONS(590),
    [anon_sym_AMP_AMP] = ACTIONS(592),
    [anon_sym_GT_GT] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [anon_sym_RBRACE] = ACTIONS(592),
    [sym_identifier] = ACTIONS(590),
    [anon_sym_COMMA] = ACTIONS(592),
    [anon_sym_LT_LT_EQ] = ACTIONS(592),
    [anon_sym_private] = ACTIONS(590),
    [anon_sym_f64] = ACTIONS(590),
    [anon_sym_DOT] = ACTIONS(592),
    [anon_sym_PLUS] = ACTIONS(590),
    [anon_sym_s32] = ACTIONS(590),
    [anon_sym_PIPE_PIPE] = ACTIONS(592),
    [anon_sym_LT_LT] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym_readonly] = ACTIONS(590),
    [anon_sym_STAR_EQ] = ACTIONS(592),
    [anon_sym_protected] = ACTIONS(590),
    [anon_sym_s8] = ACTIONS(590),
    [sym_integer] = ACTIONS(590),
    [anon_sym_section] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(590),
    [anon_sym_PLUS_EQ] = ACTIONS(592),
    [anon_sym_SLASH] = ACTIONS(590),
    [anon_sym_while] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [anon_sym_publish] = ACTIONS(590),
    [sym_oct] = ACTIONS(590),
    [anon_sym_i64] = ACTIONS(590),
    [sym_long] = ACTIONS(592),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_COLON_EQ] = ACTIONS(592),
    [sym_hex] = ACTIONS(592),
    [anon_sym_DASH_EQ] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(590),
    [anon_sym_if] = ACTIONS(590),
    [anon_sym_PLUS_PLUS] = ACTIONS(592),
    [anon_sym_switch] = ACTIONS(590),
    [anon_sym_PERCENT_EQ] = ACTIONS(592),
    [anon_sym_PIPE_EQ] = ACTIONS(592),
    [anon_sym_u8] = ACTIONS(590),
    [sym_float] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_i8] = ACTIONS(590),
    [anon_sym_return] = ACTIONS(590),
    [anon_sym_AMP] = ACTIONS(590),
    [sym_binary] = ACTIONS(592),
    [anon_sym_BANG_EQ] = ACTIONS(592),
    [anon_sym_PIPE] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [anon_sym_DASH_DASH] = ACTIONS(590),
    [anon_sym_AMP_EQ] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(592),
    [anon_sym_u16] = ACTIONS(590),
    [sym_double] = ACTIONS(592),
    [anon_sym_u64] = ACTIONS(590),
    [anon_sym_i16] = ACTIONS(590),
    [anon_sym_DASH] = ACTIONS(590),
    [anon_sym_goto] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [anon_sym_CARET] = ACTIONS(590),
    [anon_sym_LT] = ACTIONS(590),
    [anon_sym_LBRACE] = ACTIONS(592),
    [sym_null] = ACTIONS(590),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(592),
    [anon_sym_u32] = ACTIONS(590),
    [anon_sym_f32] = ACTIONS(590),
    [anon_sym_i32] = ACTIONS(590),
  },
  [201] = {
    [sym_static_assignment] = STATE(202),
    [anon_sym_COLON_EQ] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_DOT] = ACTIONS(456),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(456),
  },
  [202] = {
    [anon_sym_s16] = ACTIONS(594),
    [sym_is_declare] = ACTIONS(594),
    [sym_identifier] = ACTIONS(594),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_end] = ACTIONS(594),
    [anon_sym_private] = ACTIONS(594),
    [anon_sym_u8] = ACTIONS(594),
    [anon_sym_f64] = ACTIONS(594),
    [anon_sym_RPAREN] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_i8] = ACTIONS(594),
    [anon_sym_s32] = ACTIONS(594),
    [sym_is_external] = ACTIONS(594),
    [anon_sym_function] = ACTIONS(594),
    [sym_readonly] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(594),
    [anon_sym_u16] = ACTIONS(594),
    [anon_sym_s8] = ACTIONS(594),
    [anon_sym_u64] = ACTIONS(594),
    [anon_sym_enum] = ACTIONS(594),
    [anon_sym_i16] = ACTIONS(594),
    [anon_sym_method] = ACTIONS(594),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(594),
    [anon_sym_u32] = ACTIONS(594),
    [anon_sym_i64] = ACTIONS(594),
    [anon_sym_f32] = ACTIONS(594),
    [anon_sym_i32] = ACTIONS(594),
  },
  [203] = {
    [sym_oct] = ACTIONS(598),
    [sym_long] = ACTIONS(600),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(598),
    [sym_hex] = ACTIONS(600),
    [anon_sym_if] = ACTIONS(598),
    [anon_sym_switch] = ACTIONS(598),
    [sym_identifier] = ACTIONS(598),
    [anon_sym_end] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_u8] = ACTIONS(598),
    [anon_sym_f64] = ACTIONS(598),
    [sym_float] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_i8] = ACTIONS(598),
    [anon_sym_return] = ACTIONS(598),
    [anon_sym_s32] = ACTIONS(598),
    [sym_binary] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [sym_readonly] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_u16] = ACTIONS(598),
    [anon_sym_s8] = ACTIONS(598),
    [anon_sym_u64] = ACTIONS(598),
    [sym_integer] = ACTIONS(598),
    [anon_sym_i16] = ACTIONS(598),
    [sym_double] = ACTIONS(600),
    [anon_sym_section] = ACTIONS(598),
    [anon_sym_goto] = ACTIONS(598),
    [anon_sym_LBRACE] = ACTIONS(600),
    [sym_null] = ACTIONS(598),
    [anon_sym_while] = ACTIONS(598),
    [anon_sym_publish] = ACTIONS(598),
    [anon_sym_u32] = ACTIONS(598),
    [anon_sym_i64] = ACTIONS(598),
    [anon_sym_f32] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(598),
    [anon_sym_i32] = ACTIONS(598),
  },
  [204] = {
    [anon_sym_DOT] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(215),
  },
  [206] = {
    [sym_pointer] = STATE(231),
    [sym_array] = STATE(230),
    [aux_sym_type_repeat2] = STATE(230),
    [aux_sym_type_repeat1] = STATE(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(117),
  },
  [207] = {
    [sym_primitive_type] = STATE(171),
    [sym_type] = STATE(232),
    [sym__base_type] = STATE(171),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(436),
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
  [208] = {
    [aux_sym__comma_list_types_repeat1] = STATE(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(543),
  },
  [209] = {
    [sym_binary_op] = STATE(235),
    [sym_assignment_post_op] = STATE(105),
    [anon_sym_COLON_EQ] = ACTIONS(183),
    [anon_sym_AMP_AMP] = ACTIONS(328),
    [anon_sym_DASH_EQ] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(328),
    [anon_sym_PLUS_PLUS] = ACTIONS(187),
    [anon_sym_PERCENT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT_EQ] = ACTIONS(183),
    [anon_sym_PIPE_EQ] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(606),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_AMP] = ACTIONS(330),
    [anon_sym_PIPE_PIPE] = ACTIONS(328),
    [anon_sym_BANG_EQ] = ACTIONS(328),
    [anon_sym_LT_LT] = ACTIONS(330),
    [anon_sym_PIPE] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(328),
    [anon_sym_GT] = ACTIONS(330),
    [anon_sym_DASH_DASH] = ACTIONS(185),
    [anon_sym_AMP_EQ] = ACTIONS(183),
    [anon_sym_STAR_EQ] = ACTIONS(183),
    [anon_sym_CARET_EQ] = ACTIONS(183),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(328),
    [anon_sym_PLUS_EQ] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_LT] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(183),
    [anon_sym_GT_GT_EQ] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(606),
  },
  [211] = {
    [sym__value] = STATE(236),
    [sym__number] = STATE(236),
    [sym_group_expression] = STATE(236),
    [sym_character] = STATE(236),
    [sym__literal] = STATE(236),
    [sym_string] = STATE(236),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(608),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(608),
    [sym_null] = ACTIONS(610),
    [sym_integer] = ACTIONS(610),
    [sym_binary] = ACTIONS(608),
    [sym_oct] = ACTIONS(610),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(610),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(608),
  },
  [212] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(612),
    [sym_readonly] = ACTIONS(612),
    [anon_sym_s16] = ACTIONS(612),
    [anon_sym_protected] = ACTIONS(612),
    [anon_sym_u16] = ACTIONS(612),
    [anon_sym_s8] = ACTIONS(612),
    [anon_sym_u64] = ACTIONS(612),
    [anon_sym_enum] = ACTIONS(612),
    [anon_sym_i16] = ACTIONS(612),
    [sym_is_declare] = ACTIONS(612),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(612),
    [anon_sym_end] = ACTIONS(612),
    [anon_sym_private] = ACTIONS(612),
    [anon_sym_u8] = ACTIONS(612),
    [anon_sym_f64] = ACTIONS(612),
    [anon_sym_i8] = ACTIONS(612),
    [anon_sym_method] = ACTIONS(612),
    [anon_sym_s32] = ACTIONS(612),
    [anon_sym_publish] = ACTIONS(612),
    [anon_sym_u32] = ACTIONS(612),
    [anon_sym_i64] = ACTIONS(612),
    [anon_sym_f32] = ACTIONS(612),
    [sym_is_external] = ACTIONS(612),
    [anon_sym_i32] = ACTIONS(612),
  },
  [213] = {
    [anon_sym_DOT] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(598),
    [sym_readonly] = ACTIONS(598),
    [anon_sym_s16] = ACTIONS(598),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_u16] = ACTIONS(598),
    [anon_sym_s8] = ACTIONS(598),
    [anon_sym_u64] = ACTIONS(598),
    [anon_sym_enum] = ACTIONS(598),
    [anon_sym_i16] = ACTIONS(598),
    [sym_is_declare] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(598),
    [anon_sym_end] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_u8] = ACTIONS(598),
    [anon_sym_f64] = ACTIONS(598),
    [anon_sym_i8] = ACTIONS(598),
    [anon_sym_method] = ACTIONS(598),
    [anon_sym_s32] = ACTIONS(598),
    [anon_sym_publish] = ACTIONS(598),
    [anon_sym_u32] = ACTIONS(598),
    [anon_sym_i64] = ACTIONS(598),
    [anon_sym_f32] = ACTIONS(598),
    [sym_is_external] = ACTIONS(598),
    [anon_sym_i32] = ACTIONS(598),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(618),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(620),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_DOT] = ACTIONS(622),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(242),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_default] = STATE(241),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(242),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(242),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(624),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [220] = {
    [sym_case_statement] = STATE(220),
    [aux_sym_switch_statement_repeat1] = STATE(220),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(629),
  },
  [221] = {
    [sym_end_switch] = STATE(243),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(575),
  },
  [222] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(631),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_DOT] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(470),
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
  [225] = {
    [anon_sym_DOT] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_DOT] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_s16] = ACTIONS(639),
    [anon_sym_AMP_AMP] = ACTIONS(641),
    [anon_sym_GT_GT] = ACTIONS(639),
    [anon_sym_GT_EQ] = ACTIONS(641),
    [anon_sym_RBRACE] = ACTIONS(641),
    [sym_identifier] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(641),
    [anon_sym_LT_LT_EQ] = ACTIONS(641),
    [anon_sym_private] = ACTIONS(639),
    [anon_sym_f64] = ACTIONS(639),
    [anon_sym_DOT] = ACTIONS(641),
    [anon_sym_PLUS] = ACTIONS(639),
    [anon_sym_s32] = ACTIONS(639),
    [anon_sym_PIPE_PIPE] = ACTIONS(641),
    [anon_sym_LT_LT] = ACTIONS(639),
    [anon_sym_LT_EQ] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
    [sym_readonly] = ACTIONS(639),
    [anon_sym_STAR_EQ] = ACTIONS(641),
    [anon_sym_protected] = ACTIONS(639),
    [anon_sym_s8] = ACTIONS(639),
    [sym_integer] = ACTIONS(639),
    [anon_sym_section] = ACTIONS(639),
    [anon_sym_STAR] = ACTIONS(639),
    [anon_sym_PLUS_EQ] = ACTIONS(641),
    [anon_sym_SLASH] = ACTIONS(639),
    [anon_sym_while] = ACTIONS(639),
    [anon_sym_SLASH_EQ] = ACTIONS(641),
    [anon_sym_publish] = ACTIONS(639),
    [sym_oct] = ACTIONS(639),
    [anon_sym_i64] = ACTIONS(639),
    [sym_long] = ACTIONS(641),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_COLON_EQ] = ACTIONS(641),
    [sym_hex] = ACTIONS(641),
    [anon_sym_DASH_EQ] = ACTIONS(641),
    [anon_sym_PERCENT] = ACTIONS(639),
    [anon_sym_if] = ACTIONS(639),
    [anon_sym_PLUS_PLUS] = ACTIONS(641),
    [anon_sym_switch] = ACTIONS(639),
    [anon_sym_PERCENT_EQ] = ACTIONS(641),
    [anon_sym_PIPE_EQ] = ACTIONS(641),
    [anon_sym_u8] = ACTIONS(639),
    [sym_float] = ACTIONS(641),
    [anon_sym_RPAREN] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(641),
    [anon_sym_i8] = ACTIONS(639),
    [anon_sym_return] = ACTIONS(639),
    [anon_sym_AMP] = ACTIONS(639),
    [sym_binary] = ACTIONS(641),
    [anon_sym_BANG_EQ] = ACTIONS(641),
    [anon_sym_PIPE] = ACTIONS(639),
    [anon_sym_GT] = ACTIONS(639),
    [anon_sym_DASH_DASH] = ACTIONS(639),
    [anon_sym_AMP_EQ] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(641),
    [anon_sym_u16] = ACTIONS(639),
    [sym_double] = ACTIONS(641),
    [anon_sym_u64] = ACTIONS(639),
    [anon_sym_i16] = ACTIONS(639),
    [anon_sym_DASH] = ACTIONS(639),
    [anon_sym_goto] = ACTIONS(639),
    [anon_sym_EQ_EQ] = ACTIONS(641),
    [anon_sym_CARET] = ACTIONS(639),
    [anon_sym_LT] = ACTIONS(639),
    [anon_sym_LBRACE] = ACTIONS(641),
    [sym_null] = ACTIONS(639),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(641),
    [anon_sym_u32] = ACTIONS(639),
    [anon_sym_f32] = ACTIONS(639),
    [anon_sym_i32] = ACTIONS(639),
  },
  [228] = {
    [sym_oct] = ACTIONS(643),
    [sym_long] = ACTIONS(645),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(643),
    [sym_hex] = ACTIONS(645),
    [anon_sym_if] = ACTIONS(643),
    [anon_sym_switch] = ACTIONS(643),
    [sym_identifier] = ACTIONS(643),
    [anon_sym_end] = ACTIONS(643),
    [anon_sym_private] = ACTIONS(643),
    [anon_sym_u8] = ACTIONS(643),
    [anon_sym_f64] = ACTIONS(643),
    [sym_float] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(645),
    [anon_sym_i8] = ACTIONS(643),
    [anon_sym_return] = ACTIONS(643),
    [anon_sym_s32] = ACTIONS(643),
    [sym_binary] = ACTIONS(645),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [sym_readonly] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(643),
    [anon_sym_u16] = ACTIONS(643),
    [anon_sym_s8] = ACTIONS(643),
    [anon_sym_u64] = ACTIONS(643),
    [sym_integer] = ACTIONS(643),
    [anon_sym_i16] = ACTIONS(643),
    [sym_double] = ACTIONS(645),
    [anon_sym_section] = ACTIONS(643),
    [anon_sym_goto] = ACTIONS(643),
    [anon_sym_LBRACE] = ACTIONS(645),
    [sym_null] = ACTIONS(643),
    [anon_sym_while] = ACTIONS(643),
    [anon_sym_publish] = ACTIONS(643),
    [anon_sym_u32] = ACTIONS(643),
    [anon_sym_i64] = ACTIONS(643),
    [anon_sym_f32] = ACTIONS(643),
    [anon_sym_LPAREN] = ACTIONS(643),
    [anon_sym_i32] = ACTIONS(643),
  },
  [229] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(423),
  },
  [230] = {
    [sym_array] = STATE(229),
    [aux_sym_type_repeat2] = STATE(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(425),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(425),
  },
  [231] = {
    [sym_pointer] = STATE(231),
    [aux_sym_type_repeat1] = STATE(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_DOT] = ACTIONS(427),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(427),
    [anon_sym_STAR] = ACTIONS(429),
  },
  [232] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(647),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(647),
  },
  [233] = {
    [aux_sym__comma_list_types_repeat1] = STATE(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(647),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(649),
  },
  [234] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(515),
    [sym_readonly] = ACTIONS(515),
    [anon_sym_s16] = ACTIONS(515),
    [anon_sym_protected] = ACTIONS(515),
    [anon_sym_u16] = ACTIONS(515),
    [anon_sym_s8] = ACTIONS(515),
    [anon_sym_u64] = ACTIONS(515),
    [anon_sym_enum] = ACTIONS(515),
    [anon_sym_i16] = ACTIONS(515),
    [sym_is_declare] = ACTIONS(515),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(515),
    [anon_sym_private] = ACTIONS(515),
    [anon_sym_u8] = ACTIONS(515),
    [anon_sym_f64] = ACTIONS(515),
    [anon_sym_i8] = ACTIONS(515),
    [anon_sym_method] = ACTIONS(515),
    [anon_sym_s32] = ACTIONS(515),
    [anon_sym_publish] = ACTIONS(515),
    [anon_sym_u32] = ACTIONS(515),
    [anon_sym_i64] = ACTIONS(515),
    [anon_sym_f32] = ACTIONS(515),
    [sym_is_external] = ACTIONS(515),
    [anon_sym_i32] = ACTIONS(515),
  },
  [235] = {
    [sym__value] = STATE(245),
    [sym__number] = STATE(245),
    [sym_group_expression] = STATE(245),
    [sym_character] = STATE(245),
    [sym__literal] = STATE(245),
    [sym_string] = STATE(245),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(652),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(652),
    [sym_null] = ACTIONS(654),
    [sym_integer] = ACTIONS(654),
    [sym_binary] = ACTIONS(652),
    [sym_oct] = ACTIONS(654),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(654),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(652),
  },
  [236] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(656),
  },
  [237] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(658),
    [sym_readonly] = ACTIONS(658),
    [anon_sym_s16] = ACTIONS(658),
    [anon_sym_protected] = ACTIONS(658),
    [anon_sym_u16] = ACTIONS(658),
    [anon_sym_s8] = ACTIONS(658),
    [anon_sym_u64] = ACTIONS(658),
    [anon_sym_enum] = ACTIONS(658),
    [anon_sym_i16] = ACTIONS(658),
    [sym_is_declare] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(658),
    [anon_sym_end] = ACTIONS(658),
    [anon_sym_private] = ACTIONS(658),
    [anon_sym_u8] = ACTIONS(658),
    [anon_sym_f64] = ACTIONS(658),
    [anon_sym_i8] = ACTIONS(658),
    [anon_sym_method] = ACTIONS(658),
    [anon_sym_s32] = ACTIONS(658),
    [anon_sym_publish] = ACTIONS(658),
    [anon_sym_u32] = ACTIONS(658),
    [anon_sym_i64] = ACTIONS(658),
    [anon_sym_f32] = ACTIONS(658),
    [sym_is_external] = ACTIONS(658),
    [anon_sym_i32] = ACTIONS(658),
  },
  [238] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(643),
    [sym_readonly] = ACTIONS(643),
    [anon_sym_s16] = ACTIONS(643),
    [anon_sym_protected] = ACTIONS(643),
    [anon_sym_u16] = ACTIONS(643),
    [anon_sym_s8] = ACTIONS(643),
    [anon_sym_u64] = ACTIONS(643),
    [anon_sym_enum] = ACTIONS(643),
    [anon_sym_i16] = ACTIONS(643),
    [sym_is_declare] = ACTIONS(643),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(643),
    [anon_sym_end] = ACTIONS(643),
    [anon_sym_private] = ACTIONS(643),
    [anon_sym_u8] = ACTIONS(643),
    [anon_sym_f64] = ACTIONS(643),
    [anon_sym_i8] = ACTIONS(643),
    [anon_sym_method] = ACTIONS(643),
    [anon_sym_s32] = ACTIONS(643),
    [anon_sym_publish] = ACTIONS(643),
    [anon_sym_u32] = ACTIONS(643),
    [anon_sym_i64] = ACTIONS(643),
    [anon_sym_f32] = ACTIONS(643),
    [sym_is_external] = ACTIONS(643),
    [anon_sym_i32] = ACTIONS(643),
  },
  [239] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(249),
    [sym_end_case] = STATE(248),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(249),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(249),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(660),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [240] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(662),
  },
  [241] = {
    [anon_sym_DOT] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_default] = STATE(252),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(624),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [243] = {
    [anon_sym_DOT] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(670),
  },
  [246] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(590),
    [sym_readonly] = ACTIONS(590),
    [anon_sym_s16] = ACTIONS(590),
    [anon_sym_protected] = ACTIONS(590),
    [anon_sym_u16] = ACTIONS(590),
    [anon_sym_s8] = ACTIONS(590),
    [anon_sym_u64] = ACTIONS(590),
    [anon_sym_enum] = ACTIONS(590),
    [anon_sym_i16] = ACTIONS(590),
    [sym_is_declare] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(590),
    [anon_sym_end] = ACTIONS(590),
    [anon_sym_private] = ACTIONS(590),
    [anon_sym_u8] = ACTIONS(590),
    [anon_sym_f64] = ACTIONS(590),
    [anon_sym_i8] = ACTIONS(590),
    [anon_sym_method] = ACTIONS(590),
    [anon_sym_s32] = ACTIONS(590),
    [anon_sym_publish] = ACTIONS(590),
    [anon_sym_u32] = ACTIONS(590),
    [anon_sym_i64] = ACTIONS(590),
    [anon_sym_f32] = ACTIONS(590),
    [sym_is_external] = ACTIONS(590),
    [anon_sym_i32] = ACTIONS(590),
  },
  [247] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(672),
  },
  [248] = {
    [anon_sym_DOT] = ACTIONS(674),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [249] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(111),
    [sym_end_case] = STATE(256),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_access_control] = STATE(56),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym_character] = STATE(51),
    [aux_sym_compound_template_block_repeat1] = STATE(111),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(111),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(660),
    [anon_sym_private] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(88),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_readonly] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(71),
    [anon_sym_section] = ACTIONS(97),
    [anon_sym_goto] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(95),
    [anon_sym_while] = ACTIONS(103),
    [anon_sym_publish] = ACTIONS(109),
    [sym_oct] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(71),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [250] = {
    [anon_sym_DOT] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [251] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(678),
  },
  [252] = {
    [anon_sym_DOT] = ACTIONS(680),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [253] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(639),
    [sym_readonly] = ACTIONS(639),
    [anon_sym_s16] = ACTIONS(639),
    [anon_sym_protected] = ACTIONS(639),
    [anon_sym_u16] = ACTIONS(639),
    [anon_sym_s8] = ACTIONS(639),
    [anon_sym_u64] = ACTIONS(639),
    [anon_sym_enum] = ACTIONS(639),
    [anon_sym_i16] = ACTIONS(639),
    [sym_is_declare] = ACTIONS(639),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(639),
    [anon_sym_end] = ACTIONS(639),
    [anon_sym_private] = ACTIONS(639),
    [anon_sym_u8] = ACTIONS(639),
    [anon_sym_f64] = ACTIONS(639),
    [anon_sym_i8] = ACTIONS(639),
    [anon_sym_method] = ACTIONS(639),
    [anon_sym_s32] = ACTIONS(639),
    [anon_sym_publish] = ACTIONS(639),
    [anon_sym_u32] = ACTIONS(639),
    [anon_sym_i64] = ACTIONS(639),
    [anon_sym_f32] = ACTIONS(639),
    [sym_is_external] = ACTIONS(639),
    [anon_sym_i32] = ACTIONS(639),
  },
  [254] = {
    [anon_sym_DOT] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [255] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(684),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(684),
  },
  [256] = {
    [anon_sym_DOT] = ACTIONS(686),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [257] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(688),
  },
  [258] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(690),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(690),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
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
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_is_function, 1),
  [42] = {.count = 1, .reusable = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [48] = {.count = 1, .reusable = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = true}, SHIFT(32),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [54] = {.count = 1, .reusable = true}, SHIFT(30),
  [56] = {.count = 1, .reusable = true}, SHIFT(31),
  [58] = {.count = 1, .reusable = true}, SHIFT(35),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_is_method, 1),
  [62] = {.count = 1, .reusable = true}, SHIFT(36),
  [64] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(10),
  [67] = {.count = 1, .reusable = false}, SHIFT(50),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(51),
  [73] = {.count = 1, .reusable = false}, SHIFT(37),
  [75] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(38),
  [78] = {.count = 1, .reusable = false}, SHIFT(39),
  [80] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(40),
  [83] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(41),
  [86] = {.count = 1, .reusable = true}, SHIFT(42),
  [88] = {.count = 1, .reusable = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = true}, SHIFT(44),
  [92] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(45),
  [95] = {.count = 1, .reusable = false}, SHIFT(51),
  [97] = {.count = 1, .reusable = false}, SHIFT(46),
  [99] = {.count = 1, .reusable = false}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = false}, SHIFT(49),
  [105] = {.count = 1, .reusable = false}, SHIFT(38),
  [107] = {.count = 1, .reusable = false}, SHIFT(60),
  [109] = {.count = 1, .reusable = false}, SHIFT(41),
  [111] = {.count = 1, .reusable = false}, SHIFT(45),
  [113] = {.count = 1, .reusable = true}, SHIFT(64),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(63),
  [119] = {.count = 1, .reusable = false}, SHIFT(67),
  [121] = {.count = 1, .reusable = true}, SHIFT(69),
  [123] = {.count = 1, .reusable = true}, SHIFT(70),
  [125] = {.count = 1, .reusable = true}, SHIFT(73),
  [127] = {.count = 1, .reusable = true}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, SHIFT(76),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [133] = {.count = 1, .reusable = true}, SHIFT(78),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(79),
  [141] = {.count = 1, .reusable = true}, SHIFT(82),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [147] = {.count = 1, .reusable = true}, SHIFT(50),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [155] = {.count = 1, .reusable = true}, SHIFT(87),
  [157] = {.count = 1, .reusable = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = false}, SHIFT(89),
  [161] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [163] = {.count = 1, .reusable = true}, SHIFT(92),
  [165] = {.count = 1, .reusable = false}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(95),
  [169] = {.count = 1, .reusable = true}, SHIFT(96),
  [171] = {.count = 1, .reusable = true}, SHIFT(98),
  [173] = {.count = 1, .reusable = false}, SHIFT(98),
  [175] = {.count = 1, .reusable = true}, SHIFT(100),
  [177] = {.count = 1, .reusable = true}, SHIFT(101),
  [179] = {.count = 1, .reusable = false}, SHIFT(101),
  [181] = {.count = 1, .reusable = false}, SHIFT(100),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [185] = {.count = 1, .reusable = false}, SHIFT(104),
  [187] = {.count = 1, .reusable = true}, SHIFT(104),
  [189] = {.count = 1, .reusable = true}, SHIFT(106),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 2),
  [195] = {.count = 1, .reusable = true}, SHIFT(107),
  [197] = {.count = 1, .reusable = false}, SHIFT(109),
  [199] = {.count = 1, .reusable = false}, SHIFT(40),
  [201] = {.count = 1, .reusable = true}, SHIFT(112),
  [203] = {.count = 1, .reusable = true}, SHIFT(113),
  [205] = {.count = 1, .reusable = true}, SHIFT(114),
  [207] = {.count = 1, .reusable = true}, SHIFT(115),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(117),
  [213] = {.count = 1, .reusable = true}, SHIFT(118),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(123),
  [219] = {.count = 1, .reusable = true}, SHIFT(124),
  [221] = {.count = 1, .reusable = true}, SHIFT(125),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(128),
  [227] = {.count = 1, .reusable = true}, SHIFT(130),
  [229] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(8),
  [232] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(11),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(12),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(13),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [250] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(16),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [257] = {.count = 1, .reusable = true}, SHIFT(132),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [261] = {.count = 1, .reusable = true}, SHIFT(135),
  [263] = {.count = 1, .reusable = true}, SHIFT(134),
  [265] = {.count = 1, .reusable = true}, SHIFT(137),
  [267] = {.count = 1, .reusable = true}, SHIFT(140),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [275] = {.count = 1, .reusable = true}, SHIFT(141),
  [277] = {.count = 1, .reusable = true}, SHIFT(143),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 3),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2), SHIFT_REPEAT(30),
  [286] = {.count = 1, .reusable = true}, SHIFT(144),
  [288] = {.count = 1, .reusable = true}, SHIFT(145),
  [290] = {.count = 1, .reusable = true}, SHIFT(147),
  [292] = {.count = 1, .reusable = true}, SHIFT(148),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_template, 2),
  [296] = {.count = 1, .reusable = true}, SHIFT(151),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(152),
  [308] = {.count = 1, .reusable = false}, SHIFT(153),
  [310] = {.count = 1, .reusable = true}, SHIFT(154),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [316] = {.count = 1, .reusable = true}, SHIFT(155),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 1),
  [320] = {.count = 1, .reusable = true}, SHIFT(156),
  [322] = {.count = 1, .reusable = true}, SHIFT(158),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [328] = {.count = 1, .reusable = true}, SHIFT(159),
  [330] = {.count = 1, .reusable = false}, SHIFT(159),
  [332] = {.count = 1, .reusable = true}, SHIFT(160),
  [334] = {.count = 1, .reusable = true}, SHIFT(162),
  [336] = {.count = 1, .reusable = false}, SHIFT(162),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [350] = {.count = 1, .reusable = true}, SHIFT(163),
  [352] = {.count = 1, .reusable = false}, SHIFT(163),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 3),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(51),
  [359] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(51),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(10),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(37),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(39),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(38),
  [374] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2),
  [376] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(41),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(42),
  [382] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(43),
  [385] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(44),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(45),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(46),
  [394] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(47),
  [397] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(48),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(49),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(50),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [414] = {.count = 1, .reusable = true}, SHIFT(165),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [418] = {.count = 1, .reusable = true}, SHIFT(166),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(64),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(63),
  [432] = {.count = 1, .reusable = true}, SHIFT(167),
  [434] = {.count = 1, .reusable = true}, SHIFT(168),
  [436] = {.count = 1, .reusable = false}, SHIFT(171),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [444] = {.count = 1, .reusable = true}, SHIFT(175),
  [446] = {.count = 1, .reusable = false}, SHIFT(175),
  [448] = {.count = 1, .reusable = false}, SHIFT(174),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(177),
  [462] = {.count = 1, .reusable = true}, SHIFT(178),
  [464] = {.count = 1, .reusable = true}, SHIFT(180),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 4),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 4),
  [474] = {.count = 1, .reusable = false}, SHIFT(185),
  [476] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [480] = {.count = 1, .reusable = true}, SHIFT(188),
  [482] = {.count = 1, .reusable = true}, SHIFT(189),
  [484] = {.count = 1, .reusable = true}, SHIFT(192),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [496] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(153),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [503] = {.count = 1, .reusable = true}, SHIFT(194),
  [505] = {.count = 1, .reusable = false}, SHIFT(194),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 2),
  [509] = {.count = 1, .reusable = false}, SHIFT(196),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [519] = {.count = 1, .reusable = true}, SHIFT(199),
  [521] = {.count = 1, .reusable = false}, SHIFT(199),
  [523] = {.count = 1, .reusable = true}, SHIFT(200),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [527] = {.count = 1, .reusable = true}, SHIFT(201),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [537] = {.count = 1, .reusable = true}, SHIFT(203),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [543] = {.count = 1, .reusable = true}, SHIFT(207),
  [545] = {.count = 1, .reusable = true}, SHIFT(209),
  [547] = {.count = 1, .reusable = false}, SHIFT(209),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [553] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [555] = {.count = 1, .reusable = true}, SHIFT(212),
  [557] = {.count = 1, .reusable = true}, SHIFT(213),
  [559] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(134),
  [562] = {.count = 1, .reusable = true}, SHIFT(214),
  [564] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(141),
  [569] = {.count = 1, .reusable = true}, SHIFT(216),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [573] = {.count = 1, .reusable = true}, SHIFT(219),
  [575] = {.count = 1, .reusable = true}, SHIFT(222),
  [577] = {.count = 1, .reusable = true}, SHIFT(224),
  [579] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2),
  [581] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2), SHIFT_REPEAT(156),
  [584] = {.count = 1, .reusable = true}, SHIFT(225),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 4),
  [588] = {.count = 1, .reusable = true}, SHIFT(227),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [594] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [602] = {.count = 1, .reusable = true}, SHIFT(228),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [606] = {.count = 1, .reusable = true}, SHIFT(234),
  [608] = {.count = 1, .reusable = true}, SHIFT(236),
  [610] = {.count = 1, .reusable = false}, SHIFT(236),
  [612] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [614] = {.count = 1, .reusable = true}, SHIFT(237),
  [616] = {.count = 1, .reusable = true}, SHIFT(238),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [622] = {.count = 1, .reusable = true}, SHIFT(239),
  [624] = {.count = 1, .reusable = false}, SHIFT(240),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(188),
  [629] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [631] = {.count = 1, .reusable = true}, SHIFT(244),
  [633] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [637] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [639] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [643] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [647] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(207),
  [652] = {.count = 1, .reusable = true}, SHIFT(245),
  [654] = {.count = 1, .reusable = false}, SHIFT(245),
  [656] = {.count = 1, .reusable = true}, SHIFT(246),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [660] = {.count = 1, .reusable = false}, SHIFT(247),
  [662] = {.count = 1, .reusable = true}, SHIFT(250),
  [664] = {.count = 1, .reusable = true}, SHIFT(251),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [670] = {.count = 1, .reusable = true}, SHIFT(253),
  [672] = {.count = 1, .reusable = true}, SHIFT(254),
  [674] = {.count = 1, .reusable = true}, SHIFT(255),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 4),
  [680] = {.count = 1, .reusable = true}, SHIFT(257),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [686] = {.count = 1, .reusable = true}, SHIFT(258),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 5),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 6),
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
