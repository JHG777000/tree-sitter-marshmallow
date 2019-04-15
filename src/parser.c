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
#define STATE_COUNT 250
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
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(49);
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '.')
        ADVANCE(54);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'f')
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
      if (lookahead == '.')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(58);
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
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 51:
      if (lookahead == '+')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'f')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 57:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(58);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == '.')
        ADVANCE(54);
      if (lookahead == 'f')
        ADVANCE(58);
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
        ADVANCE(113);
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
        ADVANCE(114);
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
        ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'c')
        ADVANCE(116);
      if (lookahead == 'f')
        ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(118);
      if (lookahead == 'u')
        ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == '2')
        ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == '4')
        ADVANCE(122);
      END_STATE();
    case 85:
      if (lookahead == 'n')
        ADVANCE(123);
      END_STATE();
    case 86:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 87:
      if (lookahead == '6')
        ADVANCE(125);
      END_STATE();
    case 88:
      if (lookahead == '2')
        ADVANCE(126);
      END_STATE();
    case 89:
      if (lookahead == '4')
        ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 92:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 93:
      if (lookahead == 'd')
        ADVANCE(129);
      END_STATE();
    case 94:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 95:
      if (lookahead == 'i')
        ADVANCE(131);
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 96:
      if (lookahead == 'b')
        ADVANCE(133);
      END_STATE();
    case 97:
      if (lookahead == 'a')
        ADVANCE(134);
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == '6')
        ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == '2')
        ADVANCE(137);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 101:
      if (lookahead == 'c')
        ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 'i')
        ADVANCE(139);
      END_STATE();
    case 103:
      if (lookahead == '6')
        ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == '2')
        ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead == '4')
        ADVANCE(142);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 107:
      if (lookahead == 'i')
        ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 110:
      if (lookahead == '+')
        ADVANCE(110);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead != 0)
        ADVANCE(51);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(145);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'a')
        ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 119:
      if (lookahead == 'm')
        ADVANCE(148);
      END_STATE();
    case 120:
      if (lookahead == 'e')
        ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 123:
      if (lookahead == 'c')
        ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 'o')
        ADVANCE(151);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 128:
      if (lookahead == 'h')
        ADVANCE(152);
      END_STATE();
    case 129:
      if (lookahead == 'u')
        ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'l')
        ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'v')
        ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'l')
        ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'd')
        ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'u')
        ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 139:
      if (lookahead == 't')
        ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 143:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 146:
      if (lookahead == 'a')
        ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 149:
      if (lookahead == 'r')
        ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 152:
      if (lookahead == 'o')
        ADVANCE(167);
      END_STATE();
    case 153:
      if (lookahead == 'l')
        ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 155:
      if (lookahead == 'a')
        ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 'e')
        ADVANCE(170);
      END_STATE();
    case 157:
      if (lookahead == 'i')
        ADVANCE(171);
      END_STATE();
    case 158:
      if (lookahead == 'o')
        ADVANCE(172);
      END_STATE();
    case 159:
      if (lookahead == 'r')
        ADVANCE(173);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'c')
        ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'e')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'l')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'n')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'i')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'd')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 't')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'c')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 's')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'n')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'o')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'h')
        ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 177:
      if (lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 178:
      if (lookahead == 't')
        ADVANCE(191);
      END_STATE();
    case 179:
      if (lookahead == 'a')
        ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'o')
        ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 183:
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 't')
        ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 'h')
        ADVANCE(196);
      END_STATE();
    case 186:
      if (lookahead == 'l')
        ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 188:
      if (lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 192:
      if (lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 195:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 197:
      if (lookahead == 'y')
        ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 201:
      if (lookahead == 'd')
        ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 204:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'm')
        ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 205:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(208);
      END_STATE();
    case 206:
      if (lookahead == '/')
        ADVANCE(55);
      END_STATE();
    case 207:
      if (lookahead == 'o')
        ADVANCE(93);
      END_STATE();
    case 208:
      if (lookahead == '-')
        ADVANCE(55);
      END_STATE();
    case 209:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(224);
      if (lookahead == 'x')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(226);
      if (lookahead == '6')
        ADVANCE(227);
      if (lookahead == 'u')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(229);
      if (lookahead == '3')
        ADVANCE(230);
      if (lookahead == '6')
        ADVANCE(231);
      if (lookahead == '8')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(234);
      if (lookahead == 'u')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(237);
      if (lookahead == '3')
        ADVANCE(238);
      if (lookahead == '8')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(240);
      if (lookahead == '3')
        ADVANCE(241);
      if (lookahead == '6')
        ADVANCE(242);
      if (lookahead == '8')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(245);
      if (lookahead == 'u')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(255);
      if (lookahead == 'o')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_s8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
        ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_s16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_s32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_method);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_is_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_publish);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_is_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_readonly);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 301:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(226);
      if (lookahead == '6')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 303:
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 304:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 305:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 306:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(307);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'g')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead == 's')
        ADVANCE(313);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == 'w')
        ADVANCE(314);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(54);
      if (lookahead == 'b')
        ADVANCE(57);
      if (lookahead == 'f')
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
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(229);
      if (lookahead == '3')
        ADVANCE(230);
      if (lookahead == '6')
        ADVANCE(231);
      if (lookahead == '8')
        ADVANCE(232);
      if (lookahead == 'f')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(237);
      if (lookahead == '3')
        ADVANCE(238);
      if (lookahead == '8')
        ADVANCE(239);
      if (lookahead == 'e')
        ADVANCE(319);
      if (lookahead == 'w')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(258);
      if (lookahead == 't')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_section);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 342:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(307);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'e')
        ADVANCE(343);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'g')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead == 's')
        ADVANCE(313);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == 'w')
        ADVANCE(314);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 345:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 346:
      if (lookahead == '%')
        ADVANCE(347);
      if (lookahead == '&')
        ADVANCE(348);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(354);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(355);
      if (lookahead == '|')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 347:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 348:
      if (lookahead == '=')
        ADVANCE(47);
      END_STATE();
    case 349:
      if (lookahead == '+')
        ADVANCE(49);
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 350:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 351:
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 352:
      if (lookahead == '=')
        ADVANCE(63);
      END_STATE();
    case 353:
      if (lookahead == '<')
        ADVANCE(357);
      END_STATE();
    case 354:
      if (lookahead == '>')
        ADVANCE(358);
      END_STATE();
    case 355:
      if (lookahead == '=')
        ADVANCE(78);
      END_STATE();
    case 356:
      if (lookahead == '=')
        ADVANCE(108);
      END_STATE();
    case 357:
      if (lookahead == '=')
        ADVANCE(113);
      END_STATE();
    case 358:
      if (lookahead == '=')
        ADVANCE(114);
      END_STATE();
    case 359:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(361);
      if (lookahead == '/')
        ADVANCE(362);
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
    case 361:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(208);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(55);
      END_STATE();
    case 363:
      if (lookahead == '!')
        ADVANCE(364);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(365);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(366);
      if (lookahead == '.')
        ADVANCE(307);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'n')
        ADVANCE(311);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(208);
      END_STATE();
    case 367:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '-')
        ADVANCE(368);
      if (lookahead == '/')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '+')
        ADVANCE(372);
      if (lookahead == '-')
        ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(51);
      if (lookahead == '+')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(371);
      if (lookahead == '"')
        ADVANCE(55);
      if (lookahead != 0)
        ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(51);
      if (lookahead == '+')
        ADVANCE(375);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(371);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'e')
        ADVANCE(378);
      if (lookahead == 'f')
        ADVANCE(379);
      if (lookahead == 'm')
        ADVANCE(380);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 378:
      if (lookahead == 'n')
        ADVANCE(381);
      END_STATE();
    case 379:
      if (lookahead == 'u')
        ADVANCE(85);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 381:
      if (lookahead == 'd')
        ADVANCE(118);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(383);
      END_STATE();
    case 384:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'r')
        ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 385:
      if (lookahead == 'e')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 't')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'u')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'r')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'n')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 's')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 392:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 393:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 394:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '0')
        ADVANCE(308);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'g')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(310);
      if (lookahead == 'n')
        ADVANCE(311);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead == 's')
        ADVANCE(313);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == 'w')
        ADVANCE(314);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 395:
      if (lookahead == '!')
        ADVANCE(396);
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
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(397);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 396:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 397:
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 398:
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 399:
      if (lookahead == '!')
        ADVANCE(396);
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
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(397);
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
    case 400:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'f')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '/')
        ADVANCE(206);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 402:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 403:
      if (lookahead == 'e')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'f')
        ADVANCE(117);
      END_STATE();
    case 405:
      if (lookahead == '%')
        ADVANCE(347);
      if (lookahead == '&')
        ADVANCE(348);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(406);
      if (lookahead == '+')
        ADVANCE(407);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(408);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(354);
      if (lookahead == '^')
        ADVANCE(355);
      if (lookahead == 'd')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(216);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'p')
        ADVANCE(219);
      if (lookahead == 'r')
        ADVANCE(220);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'u')
        ADVANCE(222);
      if (lookahead == '|')
        ADVANCE(356);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(212);
      END_STATE();
    case 406:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 407:
      if (lookahead == '=')
        ADVANCE(50);
      END_STATE();
    case 408:
      if (lookahead == '+')
        ADVANCE(51);
      if (lookahead == '-')
        ADVANCE(208);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 409:
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(205);
      if (lookahead == '.')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(206);
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
  [1] = {.lex_state = 204},
  [2] = {.lex_state = 209},
  [3] = {.lex_state = 204},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 209},
  [6] = {.lex_state = 204},
  [7] = {.lex_state = 213},
  [8] = {.lex_state = 209},
  [9] = {.lex_state = 301},
  [10] = {.lex_state = 303},
  [11] = {.lex_state = 304},
  [12] = {.lex_state = 209},
  [13] = {.lex_state = 305},
  [14] = {.lex_state = 209},
  [15] = {.lex_state = 204},
  [16] = {.lex_state = 209},
  [17] = {.lex_state = 209},
  [18] = {.lex_state = 306},
  [19] = {.lex_state = 342},
  [20] = {.lex_state = 209},
  [21] = {.lex_state = 304},
  [22] = {.lex_state = 209},
  [23] = {.lex_state = 209},
  [24] = {.lex_state = 213},
  [25] = {.lex_state = 209},
  [26] = {.lex_state = 209},
  [27] = {.lex_state = 209},
  [28] = {.lex_state = 213},
  [29] = {.lex_state = 304},
  [30] = {.lex_state = 209},
  [31] = {.lex_state = 306},
  [32] = {.lex_state = 345},
  [33] = {.lex_state = 209},
  [34] = {.lex_state = 209},
  [35] = {.lex_state = 209},
  [36] = {.lex_state = 204},
  [37] = {.lex_state = 209},
  [38] = {.lex_state = 346},
  [39] = {.lex_state = 209},
  [40] = {.lex_state = 209},
  [41] = {.lex_state = 359},
  [42] = {.lex_state = 360},
  [43] = {.lex_state = 363},
  [44] = {.lex_state = 367},
  [45] = {.lex_state = 209},
  [46] = {.lex_state = 209},
  [47] = {.lex_state = 363},
  [48] = {.lex_state = 209},
  [49] = {.lex_state = 363},
  [50] = {.lex_state = 346},
  [51] = {.lex_state = 209},
  [52] = {.lex_state = 209},
  [53] = {.lex_state = 213},
  [54] = {.lex_state = 346},
  [55] = {.lex_state = 359},
  [56] = {.lex_state = 346},
  [57] = {.lex_state = 342},
  [58] = {.lex_state = 377},
  [59] = {.lex_state = 209},
  [60] = {.lex_state = 342},
  [61] = {.lex_state = 303},
  [62] = {.lex_state = 382},
  [63] = {.lex_state = 209},
  [64] = {.lex_state = 209},
  [65] = {.lex_state = 301},
  [66] = {.lex_state = 209},
  [67] = {.lex_state = 384},
  [68] = {.lex_state = 392},
  [69] = {.lex_state = 209},
  [70] = {.lex_state = 213},
  [71] = {.lex_state = 392},
  [72] = {.lex_state = 393},
  [73] = {.lex_state = 393},
  [74] = {.lex_state = 384},
  [75] = {.lex_state = 209},
  [76] = {.lex_state = 209},
  [77] = {.lex_state = 384},
  [78] = {.lex_state = 393},
  [79] = {.lex_state = 301},
  [80] = {.lex_state = 306},
  [81] = {.lex_state = 209},
  [82] = {.lex_state = 209},
  [83] = {.lex_state = 363},
  [84] = {.lex_state = 394},
  [85] = {.lex_state = 209},
  [86] = {.lex_state = 209},
  [87] = {.lex_state = 213},
  [88] = {.lex_state = 213},
  [89] = {.lex_state = 209},
  [90] = {.lex_state = 346},
  [91] = {.lex_state = 395},
  [92] = {.lex_state = 367},
  [93] = {.lex_state = 209},
  [94] = {.lex_state = 209},
  [95] = {.lex_state = 398},
  [96] = {.lex_state = 398},
  [97] = {.lex_state = 209},
  [98] = {.lex_state = 363},
  [99] = {.lex_state = 399},
  [100] = {.lex_state = 301},
  [101] = {.lex_state = 363},
  [102] = {.lex_state = 359},
  [103] = {.lex_state = 359},
  [104] = {.lex_state = 342},
  [105] = {.lex_state = 363},
  [106] = {.lex_state = 363},
  [107] = {.lex_state = 213},
  [108] = {.lex_state = 342},
  [109] = {.lex_state = 209},
  [110] = {.lex_state = 209},
  [111] = {.lex_state = 213},
  [112] = {.lex_state = 209},
  [113] = {.lex_state = 303},
  [114] = {.lex_state = 382},
  [115] = {.lex_state = 209},
  [116] = {.lex_state = 209},
  [117] = {.lex_state = 209},
  [118] = {.lex_state = 209},
  [119] = {.lex_state = 384},
  [120] = {.lex_state = 400},
  [121] = {.lex_state = 342},
  [122] = {.lex_state = 384},
  [123] = {.lex_state = 209},
  [124] = {.lex_state = 363},
  [125] = {.lex_state = 392},
  [126] = {.lex_state = 204},
  [127] = {.lex_state = 392},
  [128] = {.lex_state = 393},
  [129] = {.lex_state = 209},
  [130] = {.lex_state = 209},
  [131] = {.lex_state = 393},
  [132] = {.lex_state = 213},
  [133] = {.lex_state = 384},
  [134] = {.lex_state = 209},
  [135] = {.lex_state = 384},
  [136] = {.lex_state = 345},
  [137] = {.lex_state = 393},
  [138] = {.lex_state = 384},
  [139] = {.lex_state = 306},
  [140] = {.lex_state = 399},
  [141] = {.lex_state = 301},
  [142] = {.lex_state = 363},
  [143] = {.lex_state = 342},
  [144] = {.lex_state = 342},
  [145] = {.lex_state = 401},
  [146] = {.lex_state = 213},
  [147] = {.lex_state = 209},
  [148] = {.lex_state = 209},
  [149] = {.lex_state = 395},
  [150] = {.lex_state = 395},
  [151] = {.lex_state = 367},
  [152] = {.lex_state = 405},
  [153] = {.lex_state = 363},
  [154] = {.lex_state = 398},
  [155] = {.lex_state = 342},
  [156] = {.lex_state = 363},
  [157] = {.lex_state = 395},
  [158] = {.lex_state = 363},
  [159] = {.lex_state = 301},
  [160] = {.lex_state = 359},
  [161] = {.lex_state = 213},
  [162] = {.lex_state = 303},
  [163] = {.lex_state = 392},
  [164] = {.lex_state = 342},
  [165] = {.lex_state = 384},
  [166] = {.lex_state = 209},
  [167] = {.lex_state = 409},
  [168] = {.lex_state = 209},
  [169] = {.lex_state = 409},
  [170] = {.lex_state = 392},
  [171] = {.lex_state = 393},
  [172] = {.lex_state = 209},
  [173] = {.lex_state = 209},
  [174] = {.lex_state = 393},
  [175] = {.lex_state = 213},
  [176] = {.lex_state = 209},
  [177] = {.lex_state = 384},
  [178] = {.lex_state = 393},
  [179] = {.lex_state = 393},
  [180] = {.lex_state = 394},
  [181] = {.lex_state = 363},
  [182] = {.lex_state = 301},
  [183] = {.lex_state = 306},
  [184] = {.lex_state = 342},
  [185] = {.lex_state = 209},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 209},
  [188] = {.lex_state = 401},
  [189] = {.lex_state = 377},
  [190] = {.lex_state = 213},
  [191] = {.lex_state = 209},
  [192] = {.lex_state = 398},
  [193] = {.lex_state = 398},
  [194] = {.lex_state = 306},
  [195] = {.lex_state = 342},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 301},
  [198] = {.lex_state = 395},
  [199] = {.lex_state = 392},
  [200] = {.lex_state = 342},
  [201] = {.lex_state = 209},
  [202] = {.lex_state = 409},
  [203] = {.lex_state = 409},
  [204] = {.lex_state = 301},
  [205] = {.lex_state = 409},
  [206] = {.lex_state = 213},
  [207] = {.lex_state = 209},
  [208] = {.lex_state = 213},
  [209] = {.lex_state = 209},
  [210] = {.lex_state = 301},
  [211] = {.lex_state = 394},
  [212] = {.lex_state = 209},
  [213] = {.lex_state = 209},
  [214] = {.lex_state = 209},
  [215] = {.lex_state = 342},
  [216] = {.lex_state = 401},
  [217] = {.lex_state = 377},
  [218] = {.lex_state = 306},
  [219] = {.lex_state = 209},
  [220] = {.lex_state = 213},
  [221] = {.lex_state = 209},
  [222] = {.lex_state = 209},
  [223] = {.lex_state = 395},
  [224] = {.lex_state = 342},
  [225] = {.lex_state = 409},
  [226] = {.lex_state = 409},
  [227] = {.lex_state = 409},
  [228] = {.lex_state = 409},
  [229] = {.lex_state = 409},
  [230] = {.lex_state = 213},
  [231] = {.lex_state = 213},
  [232] = {.lex_state = 394},
  [233] = {.lex_state = 342},
  [234] = {.lex_state = 401},
  [235] = {.lex_state = 209},
  [236] = {.lex_state = 342},
  [237] = {.lex_state = 209},
  [238] = {.lex_state = 209},
  [239] = {.lex_state = 401},
  [240] = {.lex_state = 209},
  [241] = {.lex_state = 342},
  [242] = {.lex_state = 209},
  [243] = {.lex_state = 377},
  [244] = {.lex_state = 209},
  [245] = {.lex_state = 209},
  [246] = {.lex_state = 401},
  [247] = {.lex_state = 209},
  [248] = {.lex_state = 377},
  [249] = {.lex_state = 401},
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
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(57),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym_end_compound_template] = STATE(53),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(57),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(57),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
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
    [sym_double] = ACTIONS(95),
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
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_end_function] = STATE(59),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym__literal] = STATE(50),
    [sym_string] = STATE(50),
    [sym_end_method] = STATE(59),
    [sym__end_function] = STATE(59),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(60),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym_character] = STATE(50),
    [sym_access_control] = STATE(55),
    [aux_sym_compound_template_block_repeat1] = STATE(60),
    [sym_type] = STATE(23),
    [sym__statement] = STATE(60),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
    [sym_pointer] = STATE(64),
    [sym_array] = STATE(63),
    [aux_sym_type_repeat2] = STATE(63),
    [aux_sym_type_repeat1] = STATE(64),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [21] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(66),
    [sym_is_method] = STATE(66),
    [sym_type] = STATE(25),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(117),
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
    [sym_identifier] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [sym_end_module] = STATE(69),
    [sym_compound_template] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(70),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(70),
    [sym_compound_template_block] = STATE(70),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(70),
    [aux_sym_module_definition_repeat1] = STATE(70),
    [sym_enum_definition] = STATE(70),
    [sym_variable_definition] = STATE(70),
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
    [sym_identifier] = ACTIONS(123),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym__enum_element] = STATE(73),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(127),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(129),
    [sym_readonly] = ACTIONS(129),
    [anon_sym_s16] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_u16] = ACTIONS(129),
    [anon_sym_s8] = ACTIONS(129),
    [anon_sym_u64] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_i16] = ACTIONS(129),
    [sym_is_declare] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_u8] = ACTIONS(129),
    [anon_sym_f64] = ACTIONS(129),
    [anon_sym_i8] = ACTIONS(129),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_s32] = ACTIONS(129),
    [anon_sym_publish] = ACTIONS(129),
    [anon_sym_u32] = ACTIONS(129),
    [anon_sym_i64] = ACTIONS(129),
    [anon_sym_f32] = ACTIONS(129),
    [sym_is_external] = ACTIONS(129),
    [anon_sym_i32] = ACTIONS(129),
  },
  [29] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(75),
    [sym_is_method] = STATE(75),
    [sym_type] = STATE(25),
    [anon_sym_function] = ACTIONS(22),
    [sym_readonly] = ACTIONS(117),
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
    [sym_identifier] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym_oct] = ACTIONS(133),
    [sym_long] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(133),
    [sym_is_declare] = ACTIONS(133),
    [sym_hex] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(133),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_u8] = ACTIONS(133),
    [anon_sym_f64] = ACTIONS(133),
    [sym_float] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [anon_sym_i8] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_s32] = ACTIONS(133),
    [sym_is_external] = ACTIONS(133),
    [sym_binary] = ACTIONS(135),
    [anon_sym_function] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_readonly] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_u16] = ACTIONS(133),
    [anon_sym_s8] = ACTIONS(133),
    [anon_sym_u64] = ACTIONS(133),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_i16] = ACTIONS(133),
    [sym_integer] = ACTIONS(133),
    [anon_sym_section] = ACTIONS(133),
    [sym_double] = ACTIONS(133),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_method] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(133),
    [sym_null] = ACTIONS(133),
    [anon_sym_publish] = ACTIONS(133),
    [anon_sym_u32] = ACTIONS(133),
    [anon_sym_i64] = ACTIONS(133),
    [anon_sym_f32] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_i32] = ACTIONS(133),
  },
  [32] = {
    [sym_type] = STATE(23),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__comma_list_variables] = STATE(79),
    [sym_access_control] = STATE(55),
    [sym_variable_definition] = STATE(78),
    [sym_readonly] = ACTIONS(24),
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
    [anon_sym_RPAREN] = ACTIONS(137),
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
    [aux_sym_compound_template_repeat1] = STATE(81),
    [sym_parameter_list] = STATE(82),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(141),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_module] = ACTIONS(143),
    [sym__space] = ACTIONS(3),
  },
  [37] = {
    [sym_group_expression] = STATE(84),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(145),
  },
  [38] = {
    [anon_sym_COLON_EQ] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_AMP_EQ] = ACTIONS(147),
    [anon_sym_CARET_EQ] = ACTIONS(147),
    [anon_sym_DASH_EQ] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(147),
    [sym_identifier] = ACTIONS(52),
    [anon_sym_STAR] = ACTIONS(151),
    [anon_sym_LT_LT_EQ] = ACTIONS(147),
    [anon_sym_PIPE_EQ] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(147),
    [anon_sym_SLASH_EQ] = ACTIONS(147),
    [anon_sym_GT_GT_EQ] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym_group_expression] = STATE(85),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [40] = {
    [sym_compound_template] = STATE(87),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(153),
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
    [sym__escape_sequence] = STATE(88),
    [anon_sym_BSLASHa] = ACTIONS(155),
    [anon_sym_BSLASHt] = ACTIONS(155),
    [anon_sym_BSLASH0] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(155),
    [anon_sym_BSLASHv] = ACTIONS(155),
    [aux_sym_character_token1] = ACTIONS(157),
    [anon_sym_BSLASHf] = ACTIONS(155),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(155),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(155),
    [anon_sym_BSLASHn] = ACTIONS(155),
  },
  [43] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_group_expression] = STATE(50),
    [sym__assignment_or_collection_or_value] = STATE(89),
    [sym__literal] = STATE(50),
    [sym_string] = STATE(50),
    [sym_assignment_expression] = STATE(89),
    [sym__collection_or_value] = STATE(90),
    [sym_character] = STATE(50),
    [sym_collection] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(95),
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
    [aux_sym_string_repeat1] = STATE(92),
    [sym__comment] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__space] = ACTIONS(159),
    [aux_sym_string_token1] = ACTIONS(163),
  },
  [45] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(165),
    [sym__comment] = ACTIONS(3),
  },
  [46] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym__value] = STATE(96),
    [sym__number] = STATE(96),
    [sym_group_expression] = STATE(96),
    [sym__comma_list_collection_or_value] = STATE(95),
    [sym__literal] = STATE(96),
    [sym_string] = STATE(96),
    [sym__collection_or_value] = STATE(96),
    [sym_character] = STATE(96),
    [sym_collection] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(169),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(171),
    [sym_integer] = ACTIONS(171),
    [sym_identifier] = ACTIONS(171),
    [sym_float] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(171),
    [sym_binary] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(171),
    [sym_long] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [48] = {
    [sym_group_expression] = STATE(97),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [49] = {
    [sym__value] = STATE(99),
    [sym__number] = STATE(99),
    [sym_group_expression] = STATE(99),
    [sym__literal] = STATE(99),
    [sym_string] = STATE(99),
    [sym_assignment_expression] = STATE(100),
    [sym_unary_op] = STATE(101),
    [sym__collection_or_value] = STATE(54),
    [sym_character] = STATE(99),
    [sym_collection] = STATE(54),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(177),
    [sym_integer] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_identifier] = ACTIONS(177),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(173),
    [sym_null] = ACTIONS(177),
    [sym_binary] = ACTIONS(175),
    [sym_oct] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [50] = {
    [sym_assignment_post_op] = STATE(103),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_DOT] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_DOT] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(191),
    [sym_readonly] = ACTIONS(191),
    [anon_sym_s16] = ACTIONS(191),
    [anon_sym_protected] = ACTIONS(191),
    [anon_sym_u16] = ACTIONS(191),
    [anon_sym_s8] = ACTIONS(191),
    [anon_sym_u64] = ACTIONS(191),
    [anon_sym_enum] = ACTIONS(191),
    [anon_sym_i16] = ACTIONS(191),
    [sym_is_declare] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(191),
    [anon_sym_end] = ACTIONS(191),
    [anon_sym_private] = ACTIONS(191),
    [anon_sym_u8] = ACTIONS(191),
    [anon_sym_f64] = ACTIONS(191),
    [anon_sym_i8] = ACTIONS(191),
    [anon_sym_method] = ACTIONS(191),
    [anon_sym_s32] = ACTIONS(191),
    [anon_sym_publish] = ACTIONS(191),
    [anon_sym_u32] = ACTIONS(191),
    [anon_sym_i64] = ACTIONS(191),
    [anon_sym_f32] = ACTIONS(191),
    [sym_is_external] = ACTIONS(191),
    [anon_sym_i32] = ACTIONS(191),
  },
  [54] = {
    [sym_assignment_op] = STATE(106),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
  },
  [55] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(25),
    [sym__base_type] = STATE(20),
    [sym_readonly] = ACTIONS(117),
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
  [56] = {
    [anon_sym_COLON_EQ] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(149),
    [anon_sym_AMP_EQ] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(147),
    [anon_sym_CARET_EQ] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(147),
    [anon_sym_PLUS_PLUS] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(147),
    [anon_sym_LT_LT_EQ] = ACTIONS(147),
    [anon_sym_PIPE_EQ] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_SLASH_EQ] = ACTIONS(147),
    [anon_sym_GT_GT_EQ] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym_end_compound_template] = STATE(107),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(195),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [58] = {
    [anon_sym_function] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(199),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(201),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_end_function] = STATE(112),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym__literal] = STATE(50),
    [sym_string] = STATE(50),
    [sym_end_method] = STATE(112),
    [sym__end_function] = STATE(112),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym_character] = STATE(50),
    [sym_access_control] = STATE(55),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym_type] = STATE(23),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [61] = {
    [anon_sym_COMMA] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
  },
  [62] = {
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_integer] = ACTIONS(207),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [63] = {
    [sym_array] = STATE(115),
    [aux_sym_type_repeat2] = STATE(115),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(209),
  },
  [64] = {
    [sym_pointer] = STATE(117),
    [sym_array] = STATE(116),
    [aux_sym_type_repeat2] = STATE(116),
    [aux_sym_type_repeat1] = STATE(117),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [65] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(118),
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
  [66] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(211),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [sym_parameter_list] = STATE(122),
    [sym_return_list] = STATE(123),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(215),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [68] = {
    [sym_static_assignment] = STATE(125),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_s16] = ACTIONS(219),
    [sym_is_declare] = ACTIONS(219),
    [sym_identifier] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_end] = ACTIONS(219),
    [anon_sym_private] = ACTIONS(219),
    [anon_sym_u8] = ACTIONS(219),
    [anon_sym_f64] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_i8] = ACTIONS(219),
    [anon_sym_s32] = ACTIONS(219),
    [sym_is_external] = ACTIONS(219),
    [anon_sym_function] = ACTIONS(219),
    [sym_readonly] = ACTIONS(219),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(219),
    [anon_sym_u16] = ACTIONS(219),
    [anon_sym_s8] = ACTIONS(219),
    [anon_sym_u64] = ACTIONS(219),
    [anon_sym_enum] = ACTIONS(219),
    [anon_sym_i16] = ACTIONS(219),
    [anon_sym_method] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(219),
    [anon_sym_u32] = ACTIONS(219),
    [anon_sym_i64] = ACTIONS(219),
    [anon_sym_f32] = ACTIONS(219),
    [anon_sym_i32] = ACTIONS(219),
  },
  [69] = {
    [anon_sym_DOT] = ACTIONS(223),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym_compound_template] = STATE(18),
    [sym_function_signature] = STATE(19),
    [sym_function_definition] = STATE(70),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_access_control] = STATE(21),
    [sym__definitions] = STATE(70),
    [sym_compound_template_block] = STATE(70),
    [sym_is_function] = STATE(22),
    [sym_is_method] = STATE(22),
    [sym_type] = STATE(23),
    [sym_declaration_definition] = STATE(70),
    [aux_sym_module_definition_repeat1] = STATE(70),
    [sym_enum_definition] = STATE(70),
    [sym_variable_definition] = STATE(70),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(225),
    [sym_readonly] = ACTIONS(228),
    [anon_sym_s16] = ACTIONS(231),
    [anon_sym_protected] = ACTIONS(234),
    [anon_sym_u16] = ACTIONS(231),
    [anon_sym_s8] = ACTIONS(231),
    [anon_sym_u64] = ACTIONS(231),
    [anon_sym_enum] = ACTIONS(237),
    [anon_sym_i16] = ACTIONS(231),
    [sym_is_declare] = ACTIONS(240),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_end] = ACTIONS(246),
    [anon_sym_private] = ACTIONS(234),
    [anon_sym_u8] = ACTIONS(231),
    [anon_sym_f64] = ACTIONS(231),
    [anon_sym_i8] = ACTIONS(231),
    [anon_sym_method] = ACTIONS(248),
    [anon_sym_s32] = ACTIONS(231),
    [anon_sym_publish] = ACTIONS(234),
    [anon_sym_u32] = ACTIONS(231),
    [anon_sym_i64] = ACTIONS(231),
    [anon_sym_f32] = ACTIONS(231),
    [sym_is_external] = ACTIONS(240),
    [anon_sym_i32] = ACTIONS(231),
  },
  [71] = {
    [sym_static_assignment] = STATE(127),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_s16] = ACTIONS(251),
    [sym_is_declare] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_private] = ACTIONS(251),
    [anon_sym_u8] = ACTIONS(251),
    [anon_sym_f64] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_i8] = ACTIONS(251),
    [anon_sym_s32] = ACTIONS(251),
    [sym_is_external] = ACTIONS(251),
    [anon_sym_function] = ACTIONS(251),
    [sym_readonly] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(251),
    [anon_sym_u16] = ACTIONS(251),
    [anon_sym_s8] = ACTIONS(251),
    [anon_sym_u64] = ACTIONS(251),
    [anon_sym_enum] = ACTIONS(251),
    [anon_sym_i16] = ACTIONS(251),
    [anon_sym_method] = ACTIONS(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(251),
    [anon_sym_u32] = ACTIONS(251),
    [anon_sym_i64] = ACTIONS(251),
    [anon_sym_f32] = ACTIONS(251),
    [anon_sym_i32] = ACTIONS(251),
  },
  [72] = {
    [sym_static_assignment] = STATE(128),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(255),
  },
  [73] = {
    [aux_sym_enum_definition_repeat1] = STATE(131),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(259),
  },
  [74] = {
    [sym_parameter_list] = STATE(133),
    [sym_return_list] = STATE(134),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [75] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
  },
  [77] = {
    [anon_sym_returns] = ACTIONS(267),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
  },
  [78] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(137),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(271),
  },
  [79] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(273),
  },
  [80] = {
    [sym_oct] = ACTIONS(275),
    [sym_long] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(275),
    [sym_is_declare] = ACTIONS(275),
    [sym_hex] = ACTIONS(277),
    [anon_sym_if] = ACTIONS(275),
    [anon_sym_switch] = ACTIONS(275),
    [sym_identifier] = ACTIONS(275),
    [anon_sym_end] = ACTIONS(275),
    [anon_sym_private] = ACTIONS(275),
    [anon_sym_u8] = ACTIONS(275),
    [anon_sym_f64] = ACTIONS(275),
    [sym_float] = ACTIONS(277),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_i8] = ACTIONS(275),
    [anon_sym_return] = ACTIONS(275),
    [anon_sym_s32] = ACTIONS(275),
    [sym_is_external] = ACTIONS(275),
    [sym_binary] = ACTIONS(277),
    [anon_sym_function] = ACTIONS(275),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [sym_readonly] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(275),
    [anon_sym_u16] = ACTIONS(275),
    [anon_sym_s8] = ACTIONS(275),
    [anon_sym_u64] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_i16] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [anon_sym_section] = ACTIONS(275),
    [sym_double] = ACTIONS(275),
    [anon_sym_goto] = ACTIONS(275),
    [anon_sym_method] = ACTIONS(275),
    [anon_sym_LBRACE] = ACTIONS(277),
    [anon_sym_while] = ACTIONS(275),
    [sym_null] = ACTIONS(275),
    [anon_sym_publish] = ACTIONS(275),
    [anon_sym_u32] = ACTIONS(275),
    [anon_sym_i64] = ACTIONS(275),
    [anon_sym_f32] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_i32] = ACTIONS(275),
  },
  [81] = {
    [aux_sym_compound_template_repeat1] = STATE(81),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(279),
    [anon_sym_DOT] = ACTIONS(265),
    [anon_sym_LPAREN] = ACTIONS(265),
  },
  [82] = {
    [anon_sym_DOT] = ACTIONS(282),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym__value] = STATE(140),
    [sym__number] = STATE(140),
    [sym_group_expression] = STATE(140),
    [sym__literal] = STATE(140),
    [sym_string] = STATE(140),
    [sym_assignment_expression] = STATE(141),
    [sym_unary_op] = STATE(142),
    [sym__collection_or_value] = STATE(54),
    [sym_character] = STATE(140),
    [sym_collection] = STATE(54),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(284),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(286),
    [sym_integer] = ACTIONS(286),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_identifier] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [sym_float] = ACTIONS(284),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(173),
    [sym_null] = ACTIONS(286),
    [sym_binary] = ACTIONS(284),
    [sym_oct] = ACTIONS(286),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(284),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [84] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(144),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(144),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [85] = {
    [anon_sym_DOT] = ACTIONS(290),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [86] = {
    [aux_sym_compound_template_repeat1] = STATE(147),
    [sym_parameter_list] = STATE(148),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [87] = {
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
  [88] = {
    [anon_sym_SQUOTE] = ACTIONS(296),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_DOT] = ACTIONS(298),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym_assignment_op] = STATE(106),
    [anon_sym_PIPE_EQ] = ACTIONS(193),
    [anon_sym_COLON_EQ] = ACTIONS(193),
    [anon_sym_PLUS_EQ] = ACTIONS(193),
    [anon_sym_AMP_EQ] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(300),
    [anon_sym_STAR_EQ] = ACTIONS(193),
    [anon_sym_CARET_EQ] = ACTIONS(193),
    [anon_sym_DASH_EQ] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(193),
    [anon_sym_GT_GT_EQ] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(193),
    [anon_sym_LT_LT_EQ] = ACTIONS(193),
  },
  [91] = {
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
  [92] = {
    [aux_sym_string_repeat1] = STATE(151),
    [sym__comment] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [sym__space] = ACTIONS(159),
    [aux_sym_string_token1] = ACTIONS(308),
  },
  [93] = {
    [anon_sym_DOT] = ACTIONS(310),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [anon_sym_DOT] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(314),
  },
  [96] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(154),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(316),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(318),
  },
  [97] = {
    [anon_sym_DOT] = ACTIONS(320),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [anon_sym_DQUOTE] = ACTIONS(322),
    [sym_float] = ACTIONS(322),
    [anon_sym_SQUOTE] = ACTIONS(322),
    [sym_hex] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(324),
    [sym_null] = ACTIONS(324),
    [sym_integer] = ACTIONS(324),
    [sym_binary] = ACTIONS(322),
    [sym_oct] = ACTIONS(324),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(324),
    [anon_sym_LPAREN] = ACTIONS(322),
    [sym_long] = ACTIONS(322),
  },
  [99] = {
    [sym_binary_op] = STATE(158),
    [sym_assignment_post_op] = STATE(103),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(326),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(330),
  },
  [101] = {
    [sym__value] = STATE(159),
    [sym__number] = STATE(159),
    [sym_group_expression] = STATE(159),
    [sym_character] = STATE(159),
    [sym__literal] = STATE(159),
    [sym_string] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(332),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(332),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(334),
    [sym_null] = ACTIONS(334),
    [sym_integer] = ACTIONS(334),
    [sym_binary] = ACTIONS(332),
    [sym_oct] = ACTIONS(334),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(332),
  },
  [102] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(336),
    [sym__space] = ACTIONS(3),
  },
  [103] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [sym__space] = ACTIONS(3),
  },
  [104] = {
    [sym_oct] = ACTIONS(340),
    [sym_long] = ACTIONS(342),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(340),
    [sym_hex] = ACTIONS(342),
    [anon_sym_if] = ACTIONS(340),
    [anon_sym_switch] = ACTIONS(340),
    [sym_identifier] = ACTIONS(340),
    [anon_sym_end] = ACTIONS(340),
    [anon_sym_private] = ACTIONS(340),
    [anon_sym_u8] = ACTIONS(340),
    [anon_sym_f64] = ACTIONS(340),
    [sym_float] = ACTIONS(342),
    [anon_sym_SQUOTE] = ACTIONS(342),
    [anon_sym_i8] = ACTIONS(340),
    [anon_sym_return] = ACTIONS(340),
    [anon_sym_s32] = ACTIONS(340),
    [sym_binary] = ACTIONS(342),
    [anon_sym_DQUOTE] = ACTIONS(342),
    [sym_readonly] = ACTIONS(340),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(340),
    [anon_sym_u16] = ACTIONS(340),
    [anon_sym_s8] = ACTIONS(340),
    [anon_sym_u64] = ACTIONS(340),
    [sym_integer] = ACTIONS(340),
    [anon_sym_i16] = ACTIONS(340),
    [sym_double] = ACTIONS(340),
    [anon_sym_section] = ACTIONS(340),
    [anon_sym_goto] = ACTIONS(340),
    [anon_sym_LBRACE] = ACTIONS(342),
    [sym_null] = ACTIONS(340),
    [anon_sym_while] = ACTIONS(340),
    [anon_sym_publish] = ACTIONS(340),
    [anon_sym_u32] = ACTIONS(340),
    [anon_sym_i64] = ACTIONS(340),
    [anon_sym_f32] = ACTIONS(340),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_i32] = ACTIONS(340),
  },
  [105] = {
    [anon_sym_DQUOTE] = ACTIONS(344),
    [sym_hex] = ACTIONS(344),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(346),
    [sym_integer] = ACTIONS(346),
    [sym_identifier] = ACTIONS(346),
    [sym_float] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [sym_null] = ACTIONS(346),
    [sym_binary] = ACTIONS(344),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(346),
    [sym_long] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(344),
  },
  [106] = {
    [sym__value] = STATE(160),
    [sym__number] = STATE(160),
    [sym_group_expression] = STATE(160),
    [sym__literal] = STATE(160),
    [sym_string] = STATE(160),
    [sym__collection_or_value] = STATE(160),
    [sym_character] = STATE(160),
    [sym_collection] = STATE(160),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(348),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(350),
    [sym_integer] = ACTIONS(350),
    [sym_identifier] = ACTIONS(350),
    [sym_float] = ACTIONS(348),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(350),
    [sym_binary] = ACTIONS(348),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(350),
    [sym_long] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [107] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(352),
    [sym_readonly] = ACTIONS(352),
    [anon_sym_s16] = ACTIONS(352),
    [anon_sym_protected] = ACTIONS(352),
    [anon_sym_u16] = ACTIONS(352),
    [anon_sym_s8] = ACTIONS(352),
    [anon_sym_u64] = ACTIONS(352),
    [anon_sym_enum] = ACTIONS(352),
    [anon_sym_i16] = ACTIONS(352),
    [sym_is_declare] = ACTIONS(352),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_u8] = ACTIONS(352),
    [anon_sym_f64] = ACTIONS(352),
    [anon_sym_i8] = ACTIONS(352),
    [anon_sym_method] = ACTIONS(352),
    [anon_sym_s32] = ACTIONS(352),
    [anon_sym_publish] = ACTIONS(352),
    [anon_sym_u32] = ACTIONS(352),
    [anon_sym_i64] = ACTIONS(352),
    [anon_sym_f32] = ACTIONS(352),
    [sym_is_external] = ACTIONS(352),
    [anon_sym_i32] = ACTIONS(352),
  },
  [108] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [sym_oct] = ACTIONS(354),
    [sym_long] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(360),
    [sym_hex] = ACTIONS(357),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_switch] = ACTIONS(366),
    [sym_identifier] = ACTIONS(369),
    [anon_sym_end] = ACTIONS(372),
    [anon_sym_private] = ACTIONS(374),
    [anon_sym_u8] = ACTIONS(360),
    [anon_sym_f64] = ACTIONS(360),
    [sym_float] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_i8] = ACTIONS(360),
    [anon_sym_return] = ACTIONS(380),
    [anon_sym_s32] = ACTIONS(360),
    [sym_binary] = ACTIONS(357),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [sym_readonly] = ACTIONS(386),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(374),
    [anon_sym_u16] = ACTIONS(360),
    [anon_sym_s8] = ACTIONS(360),
    [anon_sym_u64] = ACTIONS(360),
    [sym_integer] = ACTIONS(354),
    [anon_sym_i16] = ACTIONS(360),
    [sym_double] = ACTIONS(354),
    [anon_sym_section] = ACTIONS(389),
    [anon_sym_goto] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_null] = ACTIONS(354),
    [anon_sym_while] = ACTIONS(398),
    [anon_sym_publish] = ACTIONS(374),
    [anon_sym_u32] = ACTIONS(360),
    [anon_sym_i64] = ACTIONS(360),
    [anon_sym_f32] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(401),
    [anon_sym_i32] = ACTIONS(360),
  },
  [109] = {
    [anon_sym_DOT] = ACTIONS(404),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_DOT] = ACTIONS(406),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [111] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(408),
    [sym_readonly] = ACTIONS(408),
    [anon_sym_s16] = ACTIONS(408),
    [anon_sym_protected] = ACTIONS(408),
    [anon_sym_u16] = ACTIONS(408),
    [anon_sym_s8] = ACTIONS(408),
    [anon_sym_u64] = ACTIONS(408),
    [anon_sym_enum] = ACTIONS(408),
    [anon_sym_i16] = ACTIONS(408),
    [sym_is_declare] = ACTIONS(408),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(408),
    [anon_sym_end] = ACTIONS(408),
    [anon_sym_private] = ACTIONS(408),
    [anon_sym_u8] = ACTIONS(408),
    [anon_sym_f64] = ACTIONS(408),
    [anon_sym_i8] = ACTIONS(408),
    [anon_sym_method] = ACTIONS(408),
    [anon_sym_s32] = ACTIONS(408),
    [anon_sym_publish] = ACTIONS(408),
    [anon_sym_u32] = ACTIONS(408),
    [anon_sym_i64] = ACTIONS(408),
    [anon_sym_f32] = ACTIONS(408),
    [sym_is_external] = ACTIONS(408),
    [anon_sym_i32] = ACTIONS(408),
  },
  [112] = {
    [anon_sym_DOT] = ACTIONS(410),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [113] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(412),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
  },
  [114] = {
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym_array] = STATE(115),
    [aux_sym_type_repeat2] = STATE(115),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(419),
  },
  [116] = {
    [sym_array] = STATE(115),
    [aux_sym_type_repeat2] = STATE(115),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(421),
  },
  [117] = {
    [sym_pointer] = STATE(117),
    [aux_sym_type_repeat1] = STATE(117),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(425),
  },
  [118] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(428),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym_parameter_list] = STATE(165),
    [sym_return_list] = STATE(166),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [120] = {
    [sym__base_type] = STATE(167),
    [sym_primitive_type] = STATE(167),
    [sym__comma_list_types] = STATE(168),
    [sym_type] = STATE(169),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(432),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [121] = {
    [sym_oct] = ACTIONS(436),
    [sym_long] = ACTIONS(438),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(436),
    [sym_hex] = ACTIONS(438),
    [anon_sym_if] = ACTIONS(436),
    [anon_sym_switch] = ACTIONS(436),
    [sym_identifier] = ACTIONS(436),
    [anon_sym_end] = ACTIONS(436),
    [anon_sym_private] = ACTIONS(436),
    [anon_sym_u8] = ACTIONS(436),
    [anon_sym_f64] = ACTIONS(436),
    [sym_float] = ACTIONS(438),
    [anon_sym_SQUOTE] = ACTIONS(438),
    [anon_sym_i8] = ACTIONS(436),
    [anon_sym_return] = ACTIONS(436),
    [anon_sym_s32] = ACTIONS(436),
    [sym_binary] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(438),
    [sym_readonly] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(436),
    [anon_sym_u16] = ACTIONS(436),
    [anon_sym_s8] = ACTIONS(436),
    [anon_sym_u64] = ACTIONS(436),
    [sym_integer] = ACTIONS(436),
    [anon_sym_i16] = ACTIONS(436),
    [sym_double] = ACTIONS(436),
    [anon_sym_section] = ACTIONS(436),
    [anon_sym_goto] = ACTIONS(436),
    [anon_sym_LBRACE] = ACTIONS(438),
    [sym_null] = ACTIONS(436),
    [anon_sym_while] = ACTIONS(436),
    [anon_sym_publish] = ACTIONS(436),
    [anon_sym_u32] = ACTIONS(436),
    [anon_sym_i64] = ACTIONS(436),
    [anon_sym_f32] = ACTIONS(436),
    [anon_sym_LPAREN] = ACTIONS(438),
    [anon_sym_i32] = ACTIONS(436),
  },
  [122] = {
    [sym_return_list] = STATE(166),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_DOT] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [124] = {
    [sym__value] = STATE(170),
    [sym__number] = STATE(170),
    [sym_group_expression] = STATE(170),
    [sym__literal] = STATE(170),
    [sym_string] = STATE(170),
    [sym__collection_or_value] = STATE(170),
    [sym_character] = STATE(170),
    [sym_collection] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(440),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(442),
    [sym_integer] = ACTIONS(442),
    [sym_identifier] = ACTIONS(442),
    [sym_float] = ACTIONS(440),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(442),
    [sym_binary] = ACTIONS(440),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(442),
    [sym_long] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [125] = {
    [anon_sym_s16] = ACTIONS(251),
    [sym_is_declare] = ACTIONS(251),
    [sym_identifier] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_private] = ACTIONS(251),
    [anon_sym_u8] = ACTIONS(251),
    [anon_sym_f64] = ACTIONS(251),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_i8] = ACTIONS(251),
    [anon_sym_s32] = ACTIONS(251),
    [sym_is_external] = ACTIONS(251),
    [anon_sym_function] = ACTIONS(251),
    [sym_readonly] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(251),
    [anon_sym_u16] = ACTIONS(251),
    [anon_sym_s8] = ACTIONS(251),
    [anon_sym_u64] = ACTIONS(251),
    [anon_sym_enum] = ACTIONS(251),
    [anon_sym_i16] = ACTIONS(251),
    [anon_sym_method] = ACTIONS(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(251),
    [anon_sym_u32] = ACTIONS(251),
    [anon_sym_i64] = ACTIONS(251),
    [anon_sym_f32] = ACTIONS(251),
    [anon_sym_i32] = ACTIONS(251),
  },
  [126] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_module] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
  },
  [127] = {
    [anon_sym_s16] = ACTIONS(446),
    [sym_is_declare] = ACTIONS(446),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_end] = ACTIONS(446),
    [anon_sym_private] = ACTIONS(446),
    [anon_sym_u8] = ACTIONS(446),
    [anon_sym_f64] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_i8] = ACTIONS(446),
    [anon_sym_s32] = ACTIONS(446),
    [sym_is_external] = ACTIONS(446),
    [anon_sym_function] = ACTIONS(446),
    [sym_readonly] = ACTIONS(446),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(446),
    [anon_sym_u16] = ACTIONS(446),
    [anon_sym_s8] = ACTIONS(446),
    [anon_sym_u64] = ACTIONS(446),
    [anon_sym_enum] = ACTIONS(446),
    [anon_sym_i16] = ACTIONS(446),
    [anon_sym_method] = ACTIONS(446),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(446),
    [anon_sym_u32] = ACTIONS(446),
    [anon_sym_i64] = ACTIONS(446),
    [anon_sym_f32] = ACTIONS(446),
    [anon_sym_i32] = ACTIONS(446),
  },
  [128] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(450),
  },
  [129] = {
    [sym__enum_element] = STATE(171),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
  },
  [130] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(452),
    [sym__comment] = ACTIONS(3),
  },
  [131] = {
    [aux_sym_enum_definition_repeat1] = STATE(174),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(259),
  },
  [132] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(436),
    [sym_readonly] = ACTIONS(436),
    [anon_sym_s16] = ACTIONS(436),
    [anon_sym_protected] = ACTIONS(436),
    [anon_sym_u16] = ACTIONS(436),
    [anon_sym_s8] = ACTIONS(436),
    [anon_sym_u64] = ACTIONS(436),
    [anon_sym_enum] = ACTIONS(436),
    [anon_sym_i16] = ACTIONS(436),
    [sym_is_declare] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(436),
    [anon_sym_end] = ACTIONS(436),
    [anon_sym_private] = ACTIONS(436),
    [anon_sym_u8] = ACTIONS(436),
    [anon_sym_f64] = ACTIONS(436),
    [anon_sym_i8] = ACTIONS(436),
    [anon_sym_method] = ACTIONS(436),
    [anon_sym_s32] = ACTIONS(436),
    [anon_sym_publish] = ACTIONS(436),
    [anon_sym_u32] = ACTIONS(436),
    [anon_sym_i64] = ACTIONS(436),
    [anon_sym_f32] = ACTIONS(436),
    [sym_is_external] = ACTIONS(436),
    [anon_sym_i32] = ACTIONS(436),
  },
  [133] = {
    [sym_return_list] = STATE(176),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(456),
    [sym__space] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_DOT] = ACTIONS(456),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [sym_parameter_list] = STATE(177),
    [sym_return_list] = STATE(176),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(456),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [136] = {
    [sym_access_control] = STATE(55),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(23),
    [sym_variable_definition] = STATE(178),
    [sym_readonly] = ACTIONS(24),
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
  [137] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(271),
  },
  [138] = {
    [anon_sym_returns] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
  },
  [139] = {
    [sym_oct] = ACTIONS(462),
    [sym_long] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(462),
    [sym_is_declare] = ACTIONS(462),
    [sym_hex] = ACTIONS(464),
    [anon_sym_if] = ACTIONS(462),
    [anon_sym_switch] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [anon_sym_end] = ACTIONS(462),
    [anon_sym_private] = ACTIONS(462),
    [anon_sym_u8] = ACTIONS(462),
    [anon_sym_f64] = ACTIONS(462),
    [sym_float] = ACTIONS(464),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_i8] = ACTIONS(462),
    [anon_sym_return] = ACTIONS(462),
    [anon_sym_s32] = ACTIONS(462),
    [sym_is_external] = ACTIONS(462),
    [sym_binary] = ACTIONS(464),
    [anon_sym_function] = ACTIONS(462),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [sym_readonly] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(462),
    [anon_sym_u16] = ACTIONS(462),
    [anon_sym_s8] = ACTIONS(462),
    [anon_sym_u64] = ACTIONS(462),
    [anon_sym_enum] = ACTIONS(462),
    [anon_sym_i16] = ACTIONS(462),
    [sym_integer] = ACTIONS(462),
    [anon_sym_section] = ACTIONS(462),
    [sym_double] = ACTIONS(462),
    [anon_sym_goto] = ACTIONS(462),
    [anon_sym_method] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(464),
    [anon_sym_while] = ACTIONS(462),
    [sym_null] = ACTIONS(462),
    [anon_sym_publish] = ACTIONS(462),
    [anon_sym_u32] = ACTIONS(462),
    [anon_sym_i64] = ACTIONS(462),
    [anon_sym_f32] = ACTIONS(462),
    [anon_sym_LPAREN] = ACTIONS(464),
    [anon_sym_i32] = ACTIONS(462),
  },
  [140] = {
    [sym_binary_op] = STATE(181),
    [sym_assignment_post_op] = STATE(103),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_AMP_AMP] = ACTIONS(326),
    [anon_sym_DASH_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(328),
    [anon_sym_PERCENT] = ACTIONS(328),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_PERCENT_EQ] = ACTIONS(181),
    [anon_sym_LT_LT_EQ] = ACTIONS(181),
    [anon_sym_PIPE_EQ] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_AMP] = ACTIONS(328),
    [anon_sym_PIPE_PIPE] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_LT_LT] = ACTIONS(328),
    [anon_sym_PIPE] = ACTIONS(328),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [anon_sym_GT] = ACTIONS(328),
    [anon_sym_DASH_DASH] = ACTIONS(183),
    [anon_sym_AMP_EQ] = ACTIONS(181),
    [anon_sym_STAR_EQ] = ACTIONS(181),
    [anon_sym_CARET_EQ] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(328),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [anon_sym_PLUS_EQ] = ACTIONS(181),
    [anon_sym_CARET] = ACTIONS(328),
    [anon_sym_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(328),
    [anon_sym_SLASH_EQ] = ACTIONS(181),
    [anon_sym_GT_GT_EQ] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [141] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(466),
  },
  [142] = {
    [sym__value] = STATE(182),
    [sym__number] = STATE(182),
    [sym_group_expression] = STATE(182),
    [sym_character] = STATE(182),
    [sym__literal] = STATE(182),
    [sym_string] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(468),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(470),
    [sym_null] = ACTIONS(470),
    [sym_integer] = ACTIONS(470),
    [sym_binary] = ACTIONS(468),
    [sym_oct] = ACTIONS(470),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(470),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(468),
  },
  [143] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(184),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(184),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(184),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_end_if] = STATE(185),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(472),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [144] = {
    [sym_oct] = ACTIONS(474),
    [sym_long] = ACTIONS(476),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(474),
    [sym_hex] = ACTIONS(476),
    [anon_sym_if] = ACTIONS(474),
    [anon_sym_switch] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_private] = ACTIONS(474),
    [anon_sym_u8] = ACTIONS(474),
    [anon_sym_f64] = ACTIONS(474),
    [sym_float] = ACTIONS(476),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_i8] = ACTIONS(474),
    [anon_sym_return] = ACTIONS(474),
    [anon_sym_s32] = ACTIONS(474),
    [sym_binary] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [sym_readonly] = ACTIONS(474),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(474),
    [anon_sym_u16] = ACTIONS(474),
    [anon_sym_s8] = ACTIONS(474),
    [anon_sym_u64] = ACTIONS(474),
    [sym_integer] = ACTIONS(474),
    [anon_sym_i16] = ACTIONS(474),
    [sym_double] = ACTIONS(474),
    [anon_sym_section] = ACTIONS(474),
    [anon_sym_goto] = ACTIONS(474),
    [anon_sym_LBRACE] = ACTIONS(476),
    [sym_null] = ACTIONS(474),
    [anon_sym_while] = ACTIONS(474),
    [anon_sym_publish] = ACTIONS(474),
    [anon_sym_u32] = ACTIONS(474),
    [anon_sym_i64] = ACTIONS(474),
    [anon_sym_f32] = ACTIONS(474),
    [anon_sym_LPAREN] = ACTIONS(476),
    [anon_sym_i32] = ACTIONS(474),
  },
  [145] = {
    [sym_case_statement] = STATE(188),
    [aux_sym_switch_statement_repeat1] = STATE(188),
    [sym_default_statement] = STATE(189),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(480),
  },
  [146] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(133),
    [sym_readonly] = ACTIONS(133),
    [anon_sym_s16] = ACTIONS(133),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_u16] = ACTIONS(133),
    [anon_sym_s8] = ACTIONS(133),
    [anon_sym_u64] = ACTIONS(133),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_i16] = ACTIONS(133),
    [sym_is_declare] = ACTIONS(133),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_u8] = ACTIONS(133),
    [anon_sym_f64] = ACTIONS(133),
    [anon_sym_i8] = ACTIONS(133),
    [anon_sym_method] = ACTIONS(133),
    [anon_sym_s32] = ACTIONS(133),
    [anon_sym_publish] = ACTIONS(133),
    [anon_sym_u32] = ACTIONS(133),
    [anon_sym_i64] = ACTIONS(133),
    [anon_sym_f32] = ACTIONS(133),
    [sym_is_external] = ACTIONS(133),
    [anon_sym_i32] = ACTIONS(133),
  },
  [147] = {
    [aux_sym_compound_template_repeat1] = STATE(81),
    [sym_parameter_list] = STATE(191),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(482),
    [anon_sym_LPAREN] = ACTIONS(50),
  },
  [148] = {
    [anon_sym_DOT] = ACTIONS(482),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [149] = {
    [anon_sym_s16] = ACTIONS(484),
    [anon_sym_AMP_AMP] = ACTIONS(486),
    [anon_sym_GT_GT] = ACTIONS(484),
    [anon_sym_GT_EQ] = ACTIONS(486),
    [anon_sym_RBRACE] = ACTIONS(486),
    [sym_identifier] = ACTIONS(484),
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_LT_LT_EQ] = ACTIONS(486),
    [anon_sym_private] = ACTIONS(484),
    [anon_sym_f64] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(486),
    [anon_sym_PLUS] = ACTIONS(484),
    [anon_sym_s32] = ACTIONS(484),
    [anon_sym_PIPE_PIPE] = ACTIONS(486),
    [anon_sym_LT_LT] = ACTIONS(484),
    [anon_sym_LT_EQ] = ACTIONS(486),
    [anon_sym_function] = ACTIONS(484),
    [sym_readonly] = ACTIONS(484),
    [anon_sym_STAR_EQ] = ACTIONS(486),
    [anon_sym_protected] = ACTIONS(484),
    [anon_sym_s8] = ACTIONS(484),
    [anon_sym_enum] = ACTIONS(484),
    [anon_sym_STAR] = ACTIONS(484),
    [anon_sym_PLUS_EQ] = ACTIONS(486),
    [anon_sym_SLASH] = ACTIONS(484),
    [anon_sym_method] = ACTIONS(484),
    [anon_sym_SLASH_EQ] = ACTIONS(486),
    [anon_sym_publish] = ACTIONS(484),
    [anon_sym_i64] = ACTIONS(484),
    [anon_sym_COLON_EQ] = ACTIONS(486),
    [sym_is_declare] = ACTIONS(484),
    [anon_sym_DASH_EQ] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(484),
    [anon_sym_PLUS_PLUS] = ACTIONS(486),
    [anon_sym_PERCENT_EQ] = ACTIONS(486),
    [anon_sym_end] = ACTIONS(484),
    [anon_sym_PIPE_EQ] = ACTIONS(486),
    [anon_sym_u8] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_i8] = ACTIONS(484),
    [anon_sym_AMP] = ACTIONS(484),
    [sym_is_external] = ACTIONS(484),
    [anon_sym_BANG_EQ] = ACTIONS(486),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_GT] = ACTIONS(484),
    [anon_sym_DASH_DASH] = ACTIONS(484),
    [anon_sym_AMP_EQ] = ACTIONS(486),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(486),
    [anon_sym_u16] = ACTIONS(484),
    [anon_sym_u64] = ACTIONS(484),
    [anon_sym_i16] = ACTIONS(484),
    [anon_sym_DASH] = ACTIONS(484),
    [anon_sym_EQ_EQ] = ACTIONS(486),
    [anon_sym_CARET] = ACTIONS(484),
    [anon_sym_LT] = ACTIONS(484),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(486),
    [anon_sym_u32] = ACTIONS(484),
    [anon_sym_f32] = ACTIONS(484),
    [anon_sym_i32] = ACTIONS(484),
  },
  [150] = {
    [anon_sym_s16] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(490),
    [anon_sym_GT_GT] = ACTIONS(488),
    [anon_sym_GT_EQ] = ACTIONS(490),
    [anon_sym_RBRACE] = ACTIONS(490),
    [sym_identifier] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_LT_LT_EQ] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(488),
    [anon_sym_f64] = ACTIONS(488),
    [anon_sym_DOT] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_s32] = ACTIONS(488),
    [anon_sym_PIPE_PIPE] = ACTIONS(490),
    [anon_sym_LT_LT] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [anon_sym_function] = ACTIONS(488),
    [sym_readonly] = ACTIONS(488),
    [anon_sym_STAR_EQ] = ACTIONS(490),
    [anon_sym_protected] = ACTIONS(488),
    [anon_sym_s8] = ACTIONS(488),
    [anon_sym_enum] = ACTIONS(488),
    [anon_sym_STAR] = ACTIONS(488),
    [anon_sym_PLUS_EQ] = ACTIONS(490),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_method] = ACTIONS(488),
    [anon_sym_SLASH_EQ] = ACTIONS(490),
    [anon_sym_publish] = ACTIONS(488),
    [anon_sym_i64] = ACTIONS(488),
    [anon_sym_COLON_EQ] = ACTIONS(490),
    [sym_is_declare] = ACTIONS(488),
    [anon_sym_DASH_EQ] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(488),
    [anon_sym_PLUS_PLUS] = ACTIONS(490),
    [anon_sym_PERCENT_EQ] = ACTIONS(490),
    [anon_sym_end] = ACTIONS(488),
    [anon_sym_PIPE_EQ] = ACTIONS(490),
    [anon_sym_u8] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(490),
    [anon_sym_i8] = ACTIONS(488),
    [anon_sym_AMP] = ACTIONS(488),
    [sym_is_external] = ACTIONS(488),
    [anon_sym_BANG_EQ] = ACTIONS(490),
    [anon_sym_PIPE] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(488),
    [anon_sym_DASH_DASH] = ACTIONS(488),
    [anon_sym_AMP_EQ] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(490),
    [anon_sym_u16] = ACTIONS(488),
    [anon_sym_u64] = ACTIONS(488),
    [anon_sym_i16] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(488),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(488),
    [anon_sym_LT] = ACTIONS(488),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(490),
    [anon_sym_u32] = ACTIONS(488),
    [anon_sym_f32] = ACTIONS(488),
    [anon_sym_i32] = ACTIONS(488),
  },
  [151] = {
    [aux_sym_string_repeat1] = STATE(151),
    [sym__comment] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [sym__space] = ACTIONS(159),
    [aux_sym_string_token1] = ACTIONS(494),
  },
  [152] = {
    [anon_sym_i32] = ACTIONS(497),
    [anon_sym_COLON_EQ] = ACTIONS(499),
    [anon_sym_s16] = ACTIONS(497),
    [sym_is_declare] = ACTIONS(497),
    [anon_sym_DASH_EQ] = ACTIONS(499),
    [anon_sym_RBRACE] = ACTIONS(499),
    [sym_identifier] = ACTIONS(497),
    [anon_sym_PERCENT_EQ] = ACTIONS(499),
    [anon_sym_LT_LT_EQ] = ACTIONS(499),
    [anon_sym_PIPE_EQ] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_end] = ACTIONS(497),
    [anon_sym_private] = ACTIONS(497),
    [anon_sym_DOT] = ACTIONS(499),
    [anon_sym_u8] = ACTIONS(497),
    [anon_sym_f64] = ACTIONS(497),
    [anon_sym_i8] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_s32] = ACTIONS(497),
    [sym_is_external] = ACTIONS(497),
    [anon_sym_function] = ACTIONS(497),
    [anon_sym_AMP_EQ] = ACTIONS(499),
    [anon_sym_STAR_EQ] = ACTIONS(499),
    [anon_sym_CARET_EQ] = ACTIONS(499),
    [sym__space] = ACTIONS(3),
    [sym_readonly] = ACTIONS(497),
    [anon_sym_protected] = ACTIONS(497),
    [anon_sym_u16] = ACTIONS(497),
    [anon_sym_s8] = ACTIONS(497),
    [anon_sym_u64] = ACTIONS(497),
    [anon_sym_enum] = ACTIONS(497),
    [anon_sym_i16] = ACTIONS(497),
    [anon_sym_PLUS_EQ] = ACTIONS(499),
    [anon_sym_method] = ACTIONS(497),
    [anon_sym_SLASH_EQ] = ACTIONS(499),
    [anon_sym_GT_GT_EQ] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(497),
    [anon_sym_u32] = ACTIONS(497),
    [anon_sym_i64] = ACTIONS(497),
    [anon_sym_f32] = ACTIONS(497),
  },
  [153] = {
    [sym__value] = STATE(192),
    [sym__number] = STATE(192),
    [sym_group_expression] = STATE(192),
    [sym__literal] = STATE(192),
    [sym_string] = STATE(192),
    [sym__collection_or_value] = STATE(192),
    [sym_character] = STATE(192),
    [sym_collection] = STATE(192),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(501),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(503),
    [sym_integer] = ACTIONS(503),
    [sym_identifier] = ACTIONS(503),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(101),
    [sym_null] = ACTIONS(503),
    [sym_binary] = ACTIONS(501),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(503),
    [sym_long] = ACTIONS(501),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [154] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(505),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(318),
  },
  [155] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(195),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(195),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(195),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_end_while] = STATE(196),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(507),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [156] = {
    [anon_sym_DQUOTE] = ACTIONS(509),
    [sym_float] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [sym_hex] = ACTIONS(509),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(511),
    [sym_null] = ACTIONS(511),
    [sym_integer] = ACTIONS(511),
    [sym_binary] = ACTIONS(509),
    [sym_oct] = ACTIONS(511),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(511),
    [anon_sym_LPAREN] = ACTIONS(509),
    [sym_long] = ACTIONS(509),
  },
  [157] = {
    [anon_sym_s16] = ACTIONS(513),
    [anon_sym_AMP_AMP] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(513),
    [anon_sym_GT_EQ] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [sym_identifier] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_LT_LT_EQ] = ACTIONS(515),
    [anon_sym_private] = ACTIONS(513),
    [anon_sym_f64] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_s32] = ACTIONS(513),
    [anon_sym_PIPE_PIPE] = ACTIONS(515),
    [anon_sym_LT_LT] = ACTIONS(513),
    [anon_sym_LT_EQ] = ACTIONS(515),
    [anon_sym_function] = ACTIONS(513),
    [sym_readonly] = ACTIONS(513),
    [anon_sym_STAR_EQ] = ACTIONS(515),
    [anon_sym_protected] = ACTIONS(513),
    [anon_sym_s8] = ACTIONS(513),
    [anon_sym_enum] = ACTIONS(513),
    [anon_sym_STAR] = ACTIONS(513),
    [anon_sym_PLUS_EQ] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_method] = ACTIONS(513),
    [anon_sym_SLASH_EQ] = ACTIONS(515),
    [anon_sym_publish] = ACTIONS(513),
    [anon_sym_i64] = ACTIONS(513),
    [anon_sym_COLON_EQ] = ACTIONS(515),
    [sym_is_declare] = ACTIONS(513),
    [anon_sym_DASH_EQ] = ACTIONS(515),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_PLUS_PLUS] = ACTIONS(515),
    [anon_sym_PERCENT_EQ] = ACTIONS(515),
    [anon_sym_end] = ACTIONS(513),
    [anon_sym_PIPE_EQ] = ACTIONS(515),
    [anon_sym_u8] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_i8] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(513),
    [sym_is_external] = ACTIONS(513),
    [anon_sym_BANG_EQ] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_DASH_DASH] = ACTIONS(513),
    [anon_sym_AMP_EQ] = ACTIONS(515),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(515),
    [anon_sym_u16] = ACTIONS(513),
    [anon_sym_u64] = ACTIONS(513),
    [anon_sym_i16] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym_EQ_EQ] = ACTIONS(515),
    [anon_sym_CARET] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(515),
    [anon_sym_u32] = ACTIONS(513),
    [anon_sym_f32] = ACTIONS(513),
    [anon_sym_i32] = ACTIONS(513),
  },
  [158] = {
    [sym__value] = STATE(197),
    [sym__number] = STATE(197),
    [sym_group_expression] = STATE(197),
    [sym_character] = STATE(197),
    [sym__literal] = STATE(197),
    [sym_string] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(517),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(517),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(519),
    [sym_null] = ACTIONS(519),
    [sym_integer] = ACTIONS(519),
    [sym_binary] = ACTIONS(517),
    [sym_oct] = ACTIONS(519),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(519),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(517),
  },
  [159] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(521),
  },
  [160] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_DOT] = ACTIONS(523),
    [sym__space] = ACTIONS(3),
  },
  [161] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(525),
    [sym_readonly] = ACTIONS(525),
    [anon_sym_s16] = ACTIONS(525),
    [anon_sym_protected] = ACTIONS(525),
    [anon_sym_u16] = ACTIONS(525),
    [anon_sym_s8] = ACTIONS(525),
    [anon_sym_u64] = ACTIONS(525),
    [anon_sym_enum] = ACTIONS(525),
    [anon_sym_i16] = ACTIONS(525),
    [sym_is_declare] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(525),
    [anon_sym_end] = ACTIONS(525),
    [anon_sym_private] = ACTIONS(525),
    [anon_sym_u8] = ACTIONS(525),
    [anon_sym_f64] = ACTIONS(525),
    [anon_sym_i8] = ACTIONS(525),
    [anon_sym_method] = ACTIONS(525),
    [anon_sym_s32] = ACTIONS(525),
    [anon_sym_publish] = ACTIONS(525),
    [anon_sym_u32] = ACTIONS(525),
    [anon_sym_i64] = ACTIONS(525),
    [anon_sym_f32] = ACTIONS(525),
    [sym_is_external] = ACTIONS(525),
    [anon_sym_i32] = ACTIONS(525),
  },
  [162] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(527),
    [anon_sym_DOT] = ACTIONS(527),
    [anon_sym_COMMA] = ACTIONS(527),
  },
  [163] = {
    [sym_static_assignment] = STATE(199),
    [anon_sym_COLON_EQ] = ACTIONS(217),
    [anon_sym_s16] = ACTIONS(446),
    [sym_is_declare] = ACTIONS(446),
    [sym_identifier] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_end] = ACTIONS(446),
    [anon_sym_private] = ACTIONS(446),
    [anon_sym_u8] = ACTIONS(446),
    [anon_sym_f64] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(448),
    [anon_sym_i8] = ACTIONS(446),
    [anon_sym_s32] = ACTIONS(446),
    [sym_is_external] = ACTIONS(446),
    [anon_sym_function] = ACTIONS(446),
    [sym_readonly] = ACTIONS(446),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(446),
    [anon_sym_u16] = ACTIONS(446),
    [anon_sym_s8] = ACTIONS(446),
    [anon_sym_u64] = ACTIONS(446),
    [anon_sym_enum] = ACTIONS(446),
    [anon_sym_i16] = ACTIONS(446),
    [anon_sym_method] = ACTIONS(446),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(446),
    [anon_sym_u32] = ACTIONS(446),
    [anon_sym_i64] = ACTIONS(446),
    [anon_sym_f32] = ACTIONS(446),
    [anon_sym_i32] = ACTIONS(446),
  },
  [164] = {
    [sym_oct] = ACTIONS(529),
    [sym_long] = ACTIONS(531),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(529),
    [sym_hex] = ACTIONS(531),
    [anon_sym_if] = ACTIONS(529),
    [anon_sym_switch] = ACTIONS(529),
    [sym_identifier] = ACTIONS(529),
    [anon_sym_end] = ACTIONS(529),
    [anon_sym_private] = ACTIONS(529),
    [anon_sym_u8] = ACTIONS(529),
    [anon_sym_f64] = ACTIONS(529),
    [sym_float] = ACTIONS(531),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_i8] = ACTIONS(529),
    [anon_sym_return] = ACTIONS(529),
    [anon_sym_s32] = ACTIONS(529),
    [sym_binary] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [sym_readonly] = ACTIONS(529),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(529),
    [anon_sym_u16] = ACTIONS(529),
    [anon_sym_s8] = ACTIONS(529),
    [anon_sym_u64] = ACTIONS(529),
    [sym_integer] = ACTIONS(529),
    [anon_sym_i16] = ACTIONS(529),
    [sym_double] = ACTIONS(529),
    [anon_sym_section] = ACTIONS(529),
    [anon_sym_goto] = ACTIONS(529),
    [anon_sym_LBRACE] = ACTIONS(531),
    [sym_null] = ACTIONS(529),
    [anon_sym_while] = ACTIONS(529),
    [anon_sym_publish] = ACTIONS(529),
    [anon_sym_u32] = ACTIONS(529),
    [anon_sym_i64] = ACTIONS(529),
    [anon_sym_f32] = ACTIONS(529),
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_i32] = ACTIONS(529),
  },
  [165] = {
    [sym_return_list] = STATE(201),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
  },
  [166] = {
    [anon_sym_DOT] = ACTIONS(533),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [167] = {
    [sym_pointer] = STATE(203),
    [sym_array] = STATE(202),
    [aux_sym_type_repeat2] = STATE(202),
    [aux_sym_type_repeat1] = STATE(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(113),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [168] = {
    [anon_sym_DOT] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [169] = {
    [aux_sym__comma_list_types_repeat1] = STATE(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(537),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(539),
  },
  [170] = {
    [anon_sym_s16] = ACTIONS(541),
    [sym_is_declare] = ACTIONS(541),
    [sym_identifier] = ACTIONS(541),
    [anon_sym_COMMA] = ACTIONS(543),
    [anon_sym_end] = ACTIONS(541),
    [anon_sym_private] = ACTIONS(541),
    [anon_sym_u8] = ACTIONS(541),
    [anon_sym_f64] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_i8] = ACTIONS(541),
    [anon_sym_s32] = ACTIONS(541),
    [sym_is_external] = ACTIONS(541),
    [anon_sym_function] = ACTIONS(541),
    [sym_readonly] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(541),
    [anon_sym_u16] = ACTIONS(541),
    [anon_sym_s8] = ACTIONS(541),
    [anon_sym_u64] = ACTIONS(541),
    [anon_sym_enum] = ACTIONS(541),
    [anon_sym_i16] = ACTIONS(541),
    [anon_sym_method] = ACTIONS(541),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(541),
    [anon_sym_u32] = ACTIONS(541),
    [anon_sym_i64] = ACTIONS(541),
    [anon_sym_f32] = ACTIONS(541),
    [anon_sym_i32] = ACTIONS(541),
  },
  [171] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(545),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(545),
  },
  [172] = {
    [anon_sym_DOT] = ACTIONS(547),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [173] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(549),
    [sym__comment] = ACTIONS(3),
  },
  [174] = {
    [aux_sym_enum_definition_repeat1] = STATE(174),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(545),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(551),
  },
  [175] = {
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
  [176] = {
    [anon_sym_DOT] = ACTIONS(554),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [177] = {
    [sym_return_list] = STATE(209),
    [anon_sym_returns] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(554),
    [sym__space] = ACTIONS(3),
  },
  [178] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(556),
  },
  [179] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(558),
  },
  [180] = {
    [sym_oct] = ACTIONS(513),
    [sym_long] = ACTIONS(515),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(513),
    [sym_hex] = ACTIONS(515),
    [anon_sym_if] = ACTIONS(513),
    [anon_sym_switch] = ACTIONS(513),
    [sym_identifier] = ACTIONS(513),
    [anon_sym_private] = ACTIONS(513),
    [anon_sym_u8] = ACTIONS(513),
    [anon_sym_f64] = ACTIONS(513),
    [sym_float] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(513),
    [anon_sym_i8] = ACTIONS(513),
    [anon_sym_return] = ACTIONS(513),
    [anon_sym_SQUOTE] = ACTIONS(515),
    [anon_sym_s32] = ACTIONS(513),
    [sym_binary] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_readonly] = ACTIONS(513),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(513),
    [anon_sym_u16] = ACTIONS(513),
    [anon_sym_s8] = ACTIONS(513),
    [anon_sym_u64] = ACTIONS(513),
    [sym_integer] = ACTIONS(513),
    [anon_sym_i16] = ACTIONS(513),
    [sym_double] = ACTIONS(513),
    [anon_sym_section] = ACTIONS(513),
    [anon_sym_goto] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(515),
    [sym_null] = ACTIONS(513),
    [anon_sym_while] = ACTIONS(513),
    [anon_sym_publish] = ACTIONS(513),
    [anon_sym_u32] = ACTIONS(513),
    [anon_sym_i64] = ACTIONS(513),
    [anon_sym_f32] = ACTIONS(513),
    [anon_sym_LPAREN] = ACTIONS(515),
    [anon_sym_i32] = ACTIONS(513),
  },
  [181] = {
    [sym__value] = STATE(210),
    [sym__number] = STATE(210),
    [sym_group_expression] = STATE(210),
    [sym_character] = STATE(210),
    [sym__literal] = STATE(210),
    [sym_string] = STATE(210),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_float] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [sym_hex] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(563),
    [sym_null] = ACTIONS(563),
    [sym_integer] = ACTIONS(563),
    [sym_binary] = ACTIONS(561),
    [sym_oct] = ACTIONS(563),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(67),
    [sym_long] = ACTIONS(561),
  },
  [182] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(565),
  },
  [183] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(567),
  },
  [184] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_end_if] = STATE(213),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(472),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [185] = {
    [anon_sym_DOT] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [186] = {
    [sym_group_expression] = STATE(214),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(67),
  },
  [187] = {
    [anon_sym_DOT] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [188] = {
    [sym_case_statement] = STATE(216),
    [aux_sym_switch_statement_repeat1] = STATE(216),
    [sym_default_statement] = STATE(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(480),
  },
  [189] = {
    [sym_end_switch] = STATE(219),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(573),
  },
  [190] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(275),
    [sym_readonly] = ACTIONS(275),
    [anon_sym_s16] = ACTIONS(275),
    [anon_sym_protected] = ACTIONS(275),
    [anon_sym_u16] = ACTIONS(275),
    [anon_sym_s8] = ACTIONS(275),
    [anon_sym_u64] = ACTIONS(275),
    [anon_sym_enum] = ACTIONS(275),
    [anon_sym_i16] = ACTIONS(275),
    [sym_is_declare] = ACTIONS(275),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(275),
    [anon_sym_end] = ACTIONS(275),
    [anon_sym_private] = ACTIONS(275),
    [anon_sym_u8] = ACTIONS(275),
    [anon_sym_f64] = ACTIONS(275),
    [anon_sym_i8] = ACTIONS(275),
    [anon_sym_method] = ACTIONS(275),
    [anon_sym_s32] = ACTIONS(275),
    [anon_sym_publish] = ACTIONS(275),
    [anon_sym_u32] = ACTIONS(275),
    [anon_sym_i64] = ACTIONS(275),
    [anon_sym_f32] = ACTIONS(275),
    [sym_is_external] = ACTIONS(275),
    [anon_sym_i32] = ACTIONS(275),
  },
  [191] = {
    [anon_sym_DOT] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [192] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(577),
  },
  [193] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(579),
  },
  [194] = {
    [anon_sym_while] = ACTIONS(582),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [195] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_switch_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_end_while] = STATE(222),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(507),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [196] = {
    [anon_sym_DOT] = ACTIONS(584),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [197] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(586),
  },
  [198] = {
    [anon_sym_s16] = ACTIONS(588),
    [anon_sym_AMP_AMP] = ACTIONS(590),
    [anon_sym_GT_GT] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(590),
    [anon_sym_RBRACE] = ACTIONS(590),
    [sym_identifier] = ACTIONS(588),
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_LT_LT_EQ] = ACTIONS(590),
    [anon_sym_private] = ACTIONS(588),
    [anon_sym_f64] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_PLUS] = ACTIONS(588),
    [anon_sym_s32] = ACTIONS(588),
    [anon_sym_PIPE_PIPE] = ACTIONS(590),
    [anon_sym_LT_LT] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(590),
    [anon_sym_function] = ACTIONS(588),
    [sym_readonly] = ACTIONS(588),
    [anon_sym_STAR_EQ] = ACTIONS(590),
    [anon_sym_protected] = ACTIONS(588),
    [anon_sym_s8] = ACTIONS(588),
    [anon_sym_enum] = ACTIONS(588),
    [anon_sym_STAR] = ACTIONS(588),
    [anon_sym_PLUS_EQ] = ACTIONS(590),
    [anon_sym_SLASH] = ACTIONS(588),
    [anon_sym_method] = ACTIONS(588),
    [anon_sym_SLASH_EQ] = ACTIONS(590),
    [anon_sym_publish] = ACTIONS(588),
    [anon_sym_i64] = ACTIONS(588),
    [anon_sym_COLON_EQ] = ACTIONS(590),
    [sym_is_declare] = ACTIONS(588),
    [anon_sym_DASH_EQ] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(588),
    [anon_sym_PLUS_PLUS] = ACTIONS(590),
    [anon_sym_PERCENT_EQ] = ACTIONS(590),
    [anon_sym_end] = ACTIONS(588),
    [anon_sym_PIPE_EQ] = ACTIONS(590),
    [anon_sym_u8] = ACTIONS(588),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_i8] = ACTIONS(588),
    [anon_sym_AMP] = ACTIONS(588),
    [sym_is_external] = ACTIONS(588),
    [anon_sym_BANG_EQ] = ACTIONS(590),
    [anon_sym_PIPE] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_DASH_DASH] = ACTIONS(588),
    [anon_sym_AMP_EQ] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(590),
    [anon_sym_u16] = ACTIONS(588),
    [anon_sym_u64] = ACTIONS(588),
    [anon_sym_i16] = ACTIONS(588),
    [anon_sym_DASH] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(590),
    [anon_sym_CARET] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(590),
    [anon_sym_u32] = ACTIONS(588),
    [anon_sym_f32] = ACTIONS(588),
    [anon_sym_i32] = ACTIONS(588),
  },
  [199] = {
    [anon_sym_s16] = ACTIONS(592),
    [sym_is_declare] = ACTIONS(592),
    [sym_identifier] = ACTIONS(592),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_end] = ACTIONS(592),
    [anon_sym_private] = ACTIONS(592),
    [anon_sym_u8] = ACTIONS(592),
    [anon_sym_f64] = ACTIONS(592),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_DOT] = ACTIONS(594),
    [anon_sym_i8] = ACTIONS(592),
    [anon_sym_s32] = ACTIONS(592),
    [sym_is_external] = ACTIONS(592),
    [anon_sym_function] = ACTIONS(592),
    [sym_readonly] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(592),
    [anon_sym_u16] = ACTIONS(592),
    [anon_sym_s8] = ACTIONS(592),
    [anon_sym_u64] = ACTIONS(592),
    [anon_sym_enum] = ACTIONS(592),
    [anon_sym_i16] = ACTIONS(592),
    [anon_sym_method] = ACTIONS(592),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(592),
    [anon_sym_u32] = ACTIONS(592),
    [anon_sym_i64] = ACTIONS(592),
    [anon_sym_f32] = ACTIONS(592),
    [anon_sym_i32] = ACTIONS(592),
  },
  [200] = {
    [sym_oct] = ACTIONS(596),
    [sym_long] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(596),
    [sym_hex] = ACTIONS(598),
    [anon_sym_if] = ACTIONS(596),
    [anon_sym_switch] = ACTIONS(596),
    [sym_identifier] = ACTIONS(596),
    [anon_sym_end] = ACTIONS(596),
    [anon_sym_private] = ACTIONS(596),
    [anon_sym_u8] = ACTIONS(596),
    [anon_sym_f64] = ACTIONS(596),
    [sym_float] = ACTIONS(598),
    [anon_sym_SQUOTE] = ACTIONS(598),
    [anon_sym_i8] = ACTIONS(596),
    [anon_sym_return] = ACTIONS(596),
    [anon_sym_s32] = ACTIONS(596),
    [sym_binary] = ACTIONS(598),
    [anon_sym_DQUOTE] = ACTIONS(598),
    [sym_readonly] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(596),
    [anon_sym_u16] = ACTIONS(596),
    [anon_sym_s8] = ACTIONS(596),
    [anon_sym_u64] = ACTIONS(596),
    [sym_integer] = ACTIONS(596),
    [anon_sym_i16] = ACTIONS(596),
    [sym_double] = ACTIONS(596),
    [anon_sym_section] = ACTIONS(596),
    [anon_sym_goto] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(598),
    [sym_null] = ACTIONS(596),
    [anon_sym_while] = ACTIONS(596),
    [anon_sym_publish] = ACTIONS(596),
    [anon_sym_u32] = ACTIONS(596),
    [anon_sym_i64] = ACTIONS(596),
    [anon_sym_f32] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(598),
    [anon_sym_i32] = ACTIONS(596),
  },
  [201] = {
    [anon_sym_DOT] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [202] = {
    [sym_array] = STATE(225),
    [aux_sym_type_repeat2] = STATE(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(209),
  },
  [203] = {
    [sym_pointer] = STATE(227),
    [sym_array] = STATE(226),
    [aux_sym_type_repeat2] = STATE(226),
    [aux_sym_type_repeat1] = STATE(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(209),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(115),
  },
  [204] = {
    [sym_primitive_type] = STATE(167),
    [sym_type] = STATE(228),
    [sym__base_type] = STATE(167),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(432),
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
  [205] = {
    [aux_sym__comma_list_types_repeat1] = STATE(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(539),
  },
  [206] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(604),
    [sym_readonly] = ACTIONS(604),
    [anon_sym_s16] = ACTIONS(604),
    [anon_sym_protected] = ACTIONS(604),
    [anon_sym_u16] = ACTIONS(604),
    [anon_sym_s8] = ACTIONS(604),
    [anon_sym_u64] = ACTIONS(604),
    [anon_sym_enum] = ACTIONS(604),
    [anon_sym_i16] = ACTIONS(604),
    [sym_is_declare] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(604),
    [anon_sym_end] = ACTIONS(604),
    [anon_sym_private] = ACTIONS(604),
    [anon_sym_u8] = ACTIONS(604),
    [anon_sym_f64] = ACTIONS(604),
    [anon_sym_i8] = ACTIONS(604),
    [anon_sym_method] = ACTIONS(604),
    [anon_sym_s32] = ACTIONS(604),
    [anon_sym_publish] = ACTIONS(604),
    [anon_sym_u32] = ACTIONS(604),
    [anon_sym_i64] = ACTIONS(604),
    [anon_sym_f32] = ACTIONS(604),
    [sym_is_external] = ACTIONS(604),
    [anon_sym_i32] = ACTIONS(604),
  },
  [207] = {
    [anon_sym_DOT] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(596),
    [sym_readonly] = ACTIONS(596),
    [anon_sym_s16] = ACTIONS(596),
    [anon_sym_protected] = ACTIONS(596),
    [anon_sym_u16] = ACTIONS(596),
    [anon_sym_s8] = ACTIONS(596),
    [anon_sym_u64] = ACTIONS(596),
    [anon_sym_enum] = ACTIONS(596),
    [anon_sym_i16] = ACTIONS(596),
    [sym_is_declare] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(596),
    [anon_sym_end] = ACTIONS(596),
    [anon_sym_private] = ACTIONS(596),
    [anon_sym_u8] = ACTIONS(596),
    [anon_sym_f64] = ACTIONS(596),
    [anon_sym_i8] = ACTIONS(596),
    [anon_sym_method] = ACTIONS(596),
    [anon_sym_s32] = ACTIONS(596),
    [anon_sym_publish] = ACTIONS(596),
    [anon_sym_u32] = ACTIONS(596),
    [anon_sym_i64] = ACTIONS(596),
    [anon_sym_f32] = ACTIONS(596),
    [sym_is_external] = ACTIONS(596),
    [anon_sym_i32] = ACTIONS(596),
  },
  [209] = {
    [anon_sym_DOT] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(610),
  },
  [211] = {
    [sym_oct] = ACTIONS(588),
    [sym_long] = ACTIONS(590),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(588),
    [sym_hex] = ACTIONS(590),
    [anon_sym_if] = ACTIONS(588),
    [anon_sym_switch] = ACTIONS(588),
    [sym_identifier] = ACTIONS(588),
    [anon_sym_private] = ACTIONS(588),
    [anon_sym_u8] = ACTIONS(588),
    [anon_sym_f64] = ACTIONS(588),
    [sym_float] = ACTIONS(590),
    [anon_sym_DOT] = ACTIONS(588),
    [anon_sym_i8] = ACTIONS(588),
    [anon_sym_return] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_s32] = ACTIONS(588),
    [sym_binary] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [sym_readonly] = ACTIONS(588),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(588),
    [anon_sym_u16] = ACTIONS(588),
    [anon_sym_s8] = ACTIONS(588),
    [anon_sym_u64] = ACTIONS(588),
    [sym_integer] = ACTIONS(588),
    [anon_sym_i16] = ACTIONS(588),
    [sym_double] = ACTIONS(588),
    [anon_sym_section] = ACTIONS(588),
    [anon_sym_goto] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(590),
    [sym_null] = ACTIONS(588),
    [anon_sym_while] = ACTIONS(588),
    [anon_sym_publish] = ACTIONS(588),
    [anon_sym_u32] = ACTIONS(588),
    [anon_sym_i64] = ACTIONS(588),
    [anon_sym_f32] = ACTIONS(588),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_i32] = ACTIONS(588),
  },
  [212] = {
    [anon_sym_DOT] = ACTIONS(612),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_DOT] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(236),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym_end_default] = STATE(235),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(236),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(236),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(618),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [216] = {
    [sym_case_statement] = STATE(216),
    [aux_sym_switch_statement_repeat1] = STATE(216),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(620),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(623),
  },
  [217] = {
    [sym_end_switch] = STATE(237),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(573),
  },
  [218] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(625),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_DOT] = ACTIONS(627),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [220] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(462),
    [sym_readonly] = ACTIONS(462),
    [anon_sym_s16] = ACTIONS(462),
    [anon_sym_protected] = ACTIONS(462),
    [anon_sym_u16] = ACTIONS(462),
    [anon_sym_s8] = ACTIONS(462),
    [anon_sym_u64] = ACTIONS(462),
    [anon_sym_enum] = ACTIONS(462),
    [anon_sym_i16] = ACTIONS(462),
    [sym_is_declare] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(462),
    [anon_sym_end] = ACTIONS(462),
    [anon_sym_private] = ACTIONS(462),
    [anon_sym_u8] = ACTIONS(462),
    [anon_sym_f64] = ACTIONS(462),
    [anon_sym_i8] = ACTIONS(462),
    [anon_sym_method] = ACTIONS(462),
    [anon_sym_s32] = ACTIONS(462),
    [anon_sym_publish] = ACTIONS(462),
    [anon_sym_u32] = ACTIONS(462),
    [anon_sym_i64] = ACTIONS(462),
    [anon_sym_f32] = ACTIONS(462),
    [sym_is_external] = ACTIONS(462),
    [anon_sym_i32] = ACTIONS(462),
  },
  [221] = {
    [anon_sym_DOT] = ACTIONS(629),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_DOT] = ACTIONS(631),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_s16] = ACTIONS(633),
    [anon_sym_AMP_AMP] = ACTIONS(635),
    [anon_sym_GT_GT] = ACTIONS(633),
    [anon_sym_GT_EQ] = ACTIONS(635),
    [anon_sym_RBRACE] = ACTIONS(635),
    [sym_identifier] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_LT_LT_EQ] = ACTIONS(635),
    [anon_sym_private] = ACTIONS(633),
    [anon_sym_f64] = ACTIONS(633),
    [anon_sym_DOT] = ACTIONS(635),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_s32] = ACTIONS(633),
    [anon_sym_PIPE_PIPE] = ACTIONS(635),
    [anon_sym_LT_LT] = ACTIONS(633),
    [anon_sym_LT_EQ] = ACTIONS(635),
    [anon_sym_function] = ACTIONS(633),
    [sym_readonly] = ACTIONS(633),
    [anon_sym_STAR_EQ] = ACTIONS(635),
    [anon_sym_protected] = ACTIONS(633),
    [anon_sym_s8] = ACTIONS(633),
    [anon_sym_enum] = ACTIONS(633),
    [anon_sym_STAR] = ACTIONS(633),
    [anon_sym_PLUS_EQ] = ACTIONS(635),
    [anon_sym_SLASH] = ACTIONS(633),
    [anon_sym_method] = ACTIONS(633),
    [anon_sym_SLASH_EQ] = ACTIONS(635),
    [anon_sym_publish] = ACTIONS(633),
    [anon_sym_i64] = ACTIONS(633),
    [anon_sym_COLON_EQ] = ACTIONS(635),
    [sym_is_declare] = ACTIONS(633),
    [anon_sym_DASH_EQ] = ACTIONS(635),
    [anon_sym_PERCENT] = ACTIONS(633),
    [anon_sym_PLUS_PLUS] = ACTIONS(635),
    [anon_sym_PERCENT_EQ] = ACTIONS(635),
    [anon_sym_end] = ACTIONS(633),
    [anon_sym_PIPE_EQ] = ACTIONS(635),
    [anon_sym_u8] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_i8] = ACTIONS(633),
    [anon_sym_AMP] = ACTIONS(633),
    [sym_is_external] = ACTIONS(633),
    [anon_sym_BANG_EQ] = ACTIONS(635),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_DASH_DASH] = ACTIONS(633),
    [anon_sym_AMP_EQ] = ACTIONS(635),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(635),
    [anon_sym_u16] = ACTIONS(633),
    [anon_sym_u64] = ACTIONS(633),
    [anon_sym_i16] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym_EQ_EQ] = ACTIONS(635),
    [anon_sym_CARET] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(635),
    [anon_sym_u32] = ACTIONS(633),
    [anon_sym_f32] = ACTIONS(633),
    [anon_sym_i32] = ACTIONS(633),
  },
  [224] = {
    [sym_oct] = ACTIONS(637),
    [sym_long] = ACTIONS(639),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(637),
    [sym_hex] = ACTIONS(639),
    [anon_sym_if] = ACTIONS(637),
    [anon_sym_switch] = ACTIONS(637),
    [sym_identifier] = ACTIONS(637),
    [anon_sym_end] = ACTIONS(637),
    [anon_sym_private] = ACTIONS(637),
    [anon_sym_u8] = ACTIONS(637),
    [anon_sym_f64] = ACTIONS(637),
    [sym_float] = ACTIONS(639),
    [anon_sym_SQUOTE] = ACTIONS(639),
    [anon_sym_i8] = ACTIONS(637),
    [anon_sym_return] = ACTIONS(637),
    [anon_sym_s32] = ACTIONS(637),
    [sym_binary] = ACTIONS(639),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [sym_readonly] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(637),
    [anon_sym_u16] = ACTIONS(637),
    [anon_sym_s8] = ACTIONS(637),
    [anon_sym_u64] = ACTIONS(637),
    [sym_integer] = ACTIONS(637),
    [anon_sym_i16] = ACTIONS(637),
    [sym_double] = ACTIONS(637),
    [anon_sym_section] = ACTIONS(637),
    [anon_sym_goto] = ACTIONS(637),
    [anon_sym_LBRACE] = ACTIONS(639),
    [sym_null] = ACTIONS(637),
    [anon_sym_while] = ACTIONS(637),
    [anon_sym_publish] = ACTIONS(637),
    [anon_sym_u32] = ACTIONS(637),
    [anon_sym_i64] = ACTIONS(637),
    [anon_sym_f32] = ACTIONS(637),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_i32] = ACTIONS(637),
  },
  [225] = {
    [sym_array] = STATE(225),
    [aux_sym_type_repeat2] = STATE(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(419),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(419),
  },
  [226] = {
    [sym_array] = STATE(225),
    [aux_sym_type_repeat2] = STATE(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(421),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(421),
  },
  [227] = {
    [sym_pointer] = STATE(227),
    [aux_sym_type_repeat1] = STATE(227),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(423),
    [anon_sym_DOT] = ACTIONS(423),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(423),
    [anon_sym_STAR] = ACTIONS(425),
  },
  [228] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(641),
  },
  [229] = {
    [aux_sym__comma_list_types_repeat1] = STATE(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(641),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(643),
  },
  [230] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(646),
    [sym_readonly] = ACTIONS(646),
    [anon_sym_s16] = ACTIONS(646),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_u16] = ACTIONS(646),
    [anon_sym_s8] = ACTIONS(646),
    [anon_sym_u64] = ACTIONS(646),
    [anon_sym_enum] = ACTIONS(646),
    [anon_sym_i16] = ACTIONS(646),
    [sym_is_declare] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(646),
    [anon_sym_end] = ACTIONS(646),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_u8] = ACTIONS(646),
    [anon_sym_f64] = ACTIONS(646),
    [anon_sym_i8] = ACTIONS(646),
    [anon_sym_method] = ACTIONS(646),
    [anon_sym_s32] = ACTIONS(646),
    [anon_sym_publish] = ACTIONS(646),
    [anon_sym_u32] = ACTIONS(646),
    [anon_sym_i64] = ACTIONS(646),
    [anon_sym_f32] = ACTIONS(646),
    [sym_is_external] = ACTIONS(646),
    [anon_sym_i32] = ACTIONS(646),
  },
  [231] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(637),
    [sym_readonly] = ACTIONS(637),
    [anon_sym_s16] = ACTIONS(637),
    [anon_sym_protected] = ACTIONS(637),
    [anon_sym_u16] = ACTIONS(637),
    [anon_sym_s8] = ACTIONS(637),
    [anon_sym_u64] = ACTIONS(637),
    [anon_sym_enum] = ACTIONS(637),
    [anon_sym_i16] = ACTIONS(637),
    [sym_is_declare] = ACTIONS(637),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(637),
    [anon_sym_end] = ACTIONS(637),
    [anon_sym_private] = ACTIONS(637),
    [anon_sym_u8] = ACTIONS(637),
    [anon_sym_f64] = ACTIONS(637),
    [anon_sym_i8] = ACTIONS(637),
    [anon_sym_method] = ACTIONS(637),
    [anon_sym_s32] = ACTIONS(637),
    [anon_sym_publish] = ACTIONS(637),
    [anon_sym_u32] = ACTIONS(637),
    [anon_sym_i64] = ACTIONS(637),
    [anon_sym_f32] = ACTIONS(637),
    [sym_is_external] = ACTIONS(637),
    [anon_sym_i32] = ACTIONS(637),
  },
  [232] = {
    [sym_oct] = ACTIONS(633),
    [sym_long] = ACTIONS(635),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(633),
    [sym_hex] = ACTIONS(635),
    [anon_sym_if] = ACTIONS(633),
    [anon_sym_switch] = ACTIONS(633),
    [sym_identifier] = ACTIONS(633),
    [anon_sym_private] = ACTIONS(633),
    [anon_sym_u8] = ACTIONS(633),
    [anon_sym_f64] = ACTIONS(633),
    [sym_float] = ACTIONS(635),
    [anon_sym_DOT] = ACTIONS(633),
    [anon_sym_i8] = ACTIONS(633),
    [anon_sym_return] = ACTIONS(633),
    [anon_sym_SQUOTE] = ACTIONS(635),
    [anon_sym_s32] = ACTIONS(633),
    [sym_binary] = ACTIONS(635),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [sym_readonly] = ACTIONS(633),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(633),
    [anon_sym_u16] = ACTIONS(633),
    [anon_sym_s8] = ACTIONS(633),
    [anon_sym_u64] = ACTIONS(633),
    [sym_integer] = ACTIONS(633),
    [anon_sym_i16] = ACTIONS(633),
    [sym_double] = ACTIONS(633),
    [anon_sym_section] = ACTIONS(633),
    [anon_sym_goto] = ACTIONS(633),
    [anon_sym_LBRACE] = ACTIONS(635),
    [sym_null] = ACTIONS(633),
    [anon_sym_while] = ACTIONS(633),
    [anon_sym_publish] = ACTIONS(633),
    [anon_sym_u32] = ACTIONS(633),
    [anon_sym_i64] = ACTIONS(633),
    [anon_sym_f32] = ACTIONS(633),
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_i32] = ACTIONS(633),
  },
  [233] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(241),
    [sym_end_case] = STATE(240),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(241),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(241),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(648),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [234] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(650),
  },
  [235] = {
    [anon_sym_DOT] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [236] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym_end_default] = STATE(244),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(618),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [237] = {
    [anon_sym_DOT] = ACTIONS(654),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [238] = {
    [anon_sym_DOT] = ACTIONS(656),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [239] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(658),
  },
  [240] = {
    [anon_sym_DOT] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [241] = {
    [sym__value] = STATE(50),
    [sym__number] = STATE(50),
    [sym_variable_definition] = STATE(51),
    [sym_section_statement] = STATE(51),
    [sym_single_line_if_statement] = STATE(108),
    [sym_end_case] = STATE(247),
    [sym__variable_statement] = STATE(51),
    [sym_assignment_expression] = STATE(52),
    [sym__collection_or_value] = STATE(54),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(51),
    [sym_goto_statement] = STATE(51),
    [sym_switch_statement] = STATE(51),
    [sym_access_control] = STATE(55),
    [sym_return_statement] = STATE(51),
    [sym_group_expression] = STATE(56),
    [sym_character] = STATE(50),
    [aux_sym_compound_template_block_repeat1] = STATE(108),
    [sym__literal] = STATE(50),
    [sym_type] = STATE(23),
    [sym_string] = STATE(50),
    [sym__statement] = STATE(108),
    [sym_if_statement] = STATE(51),
    [sym_while_statement] = STATE(51),
    [sym_expression_statement] = STATE(51),
    [sym_collection] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(73),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(648),
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
    [sym_readonly] = ACTIONS(24),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(95),
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
  [242] = {
    [anon_sym_DOT] = ACTIONS(662),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [243] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(664),
  },
  [244] = {
    [anon_sym_DOT] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_DOT] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(670),
  },
  [247] = {
    [anon_sym_DOT] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [248] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(674),
  },
  [249] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(676),
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
  [67] = {.count = 1, .reusable = true}, SHIFT(49),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(50),
  [73] = {.count = 1, .reusable = false}, SHIFT(37),
  [75] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(38),
  [78] = {.count = 1, .reusable = false}, SHIFT(39),
  [80] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(40),
  [83] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(41),
  [86] = {.count = 1, .reusable = true}, SHIFT(42),
  [88] = {.count = 1, .reusable = false}, SHIFT(43),
  [90] = {.count = 1, .reusable = true}, SHIFT(44),
  [92] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(9),
  [95] = {.count = 1, .reusable = false}, SHIFT(50),
  [97] = {.count = 1, .reusable = false}, SHIFT(45),
  [99] = {.count = 1, .reusable = false}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, SHIFT(47),
  [103] = {.count = 1, .reusable = false}, SHIFT(48),
  [105] = {.count = 1, .reusable = false}, SHIFT(38),
  [107] = {.count = 1, .reusable = false}, SHIFT(58),
  [109] = {.count = 1, .reusable = false}, SHIFT(41),
  [111] = {.count = 1, .reusable = true}, SHIFT(62),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(61),
  [117] = {.count = 1, .reusable = false}, SHIFT(65),
  [119] = {.count = 1, .reusable = true}, SHIFT(67),
  [121] = {.count = 1, .reusable = true}, SHIFT(68),
  [123] = {.count = 1, .reusable = true}, SHIFT(71),
  [125] = {.count = 1, .reusable = true}, SHIFT(72),
  [127] = {.count = 1, .reusable = true}, SHIFT(74),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(76),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(77),
  [139] = {.count = 1, .reusable = true}, SHIFT(80),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [145] = {.count = 1, .reusable = true}, SHIFT(83),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [153] = {.count = 1, .reusable = true}, SHIFT(86),
  [155] = {.count = 1, .reusable = true}, SHIFT(88),
  [157] = {.count = 1, .reusable = false}, SHIFT(88),
  [159] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [161] = {.count = 1, .reusable = true}, SHIFT(91),
  [163] = {.count = 1, .reusable = false}, SHIFT(92),
  [165] = {.count = 1, .reusable = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true}, SHIFT(94),
  [169] = {.count = 1, .reusable = true}, SHIFT(96),
  [171] = {.count = 1, .reusable = false}, SHIFT(96),
  [173] = {.count = 1, .reusable = true}, SHIFT(98),
  [175] = {.count = 1, .reusable = true}, SHIFT(99),
  [177] = {.count = 1, .reusable = false}, SHIFT(99),
  [179] = {.count = 1, .reusable = false}, SHIFT(98),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [183] = {.count = 1, .reusable = false}, SHIFT(102),
  [185] = {.count = 1, .reusable = true}, SHIFT(102),
  [187] = {.count = 1, .reusable = true}, SHIFT(104),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 2),
  [193] = {.count = 1, .reusable = true}, SHIFT(105),
  [195] = {.count = 1, .reusable = false}, SHIFT(40),
  [197] = {.count = 1, .reusable = true}, SHIFT(109),
  [199] = {.count = 1, .reusable = true}, SHIFT(110),
  [201] = {.count = 1, .reusable = true}, SHIFT(111),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(113),
  [207] = {.count = 1, .reusable = true}, SHIFT(114),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(119),
  [213] = {.count = 1, .reusable = true}, SHIFT(120),
  [215] = {.count = 1, .reusable = true}, SHIFT(121),
  [217] = {.count = 1, .reusable = true}, SHIFT(124),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(126),
  [225] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(8),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(11),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(12),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(13),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(16),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [257] = {.count = 1, .reusable = true}, SHIFT(130),
  [259] = {.count = 1, .reusable = true}, SHIFT(129),
  [261] = {.count = 1, .reusable = true}, SHIFT(132),
  [263] = {.count = 1, .reusable = true}, SHIFT(135),
  [265] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [271] = {.count = 1, .reusable = true}, SHIFT(136),
  [273] = {.count = 1, .reusable = true}, SHIFT(138),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 3),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2), SHIFT_REPEAT(30),
  [282] = {.count = 1, .reusable = true}, SHIFT(139),
  [284] = {.count = 1, .reusable = true}, SHIFT(140),
  [286] = {.count = 1, .reusable = false}, SHIFT(140),
  [288] = {.count = 1, .reusable = false}, SHIFT(143),
  [290] = {.count = 1, .reusable = true}, SHIFT(145),
  [292] = {.count = 1, .reusable = true}, SHIFT(146),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_template, 2),
  [296] = {.count = 1, .reusable = true}, SHIFT(149),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(150),
  [308] = {.count = 1, .reusable = false}, SHIFT(151),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(152),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 1),
  [318] = {.count = 1, .reusable = true}, SHIFT(153),
  [320] = {.count = 1, .reusable = true}, SHIFT(155),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [326] = {.count = 1, .reusable = true}, SHIFT(156),
  [328] = {.count = 1, .reusable = false}, SHIFT(156),
  [330] = {.count = 1, .reusable = true}, SHIFT(157),
  [332] = {.count = 1, .reusable = true}, SHIFT(159),
  [334] = {.count = 1, .reusable = false}, SHIFT(159),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [346] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [348] = {.count = 1, .reusable = true}, SHIFT(160),
  [350] = {.count = 1, .reusable = false}, SHIFT(160),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 3),
  [354] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(50),
  [357] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(50),
  [360] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(10),
  [363] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(37),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(39),
  [369] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(38),
  [372] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(41),
  [377] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(42),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(43),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(44),
  [386] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(9),
  [389] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(45),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(46),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(47),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(48),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(49),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [410] = {.count = 1, .reusable = true}, SHIFT(161),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [414] = {.count = 1, .reusable = true}, SHIFT(162),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(62),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [425] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(61),
  [428] = {.count = 1, .reusable = true}, SHIFT(163),
  [430] = {.count = 1, .reusable = true}, SHIFT(164),
  [432] = {.count = 1, .reusable = false}, SHIFT(167),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [440] = {.count = 1, .reusable = true}, SHIFT(170),
  [442] = {.count = 1, .reusable = false}, SHIFT(170),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(172),
  [454] = {.count = 1, .reusable = true}, SHIFT(173),
  [456] = {.count = 1, .reusable = true}, SHIFT(175),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 4),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 4),
  [466] = {.count = 1, .reusable = true}, SHIFT(180),
  [468] = {.count = 1, .reusable = true}, SHIFT(182),
  [470] = {.count = 1, .reusable = false}, SHIFT(182),
  [472] = {.count = 1, .reusable = false}, SHIFT(183),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [478] = {.count = 1, .reusable = true}, SHIFT(186),
  [480] = {.count = 1, .reusable = true}, SHIFT(187),
  [482] = {.count = 1, .reusable = true}, SHIFT(190),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(151),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [501] = {.count = 1, .reusable = true}, SHIFT(192),
  [503] = {.count = 1, .reusable = false}, SHIFT(192),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 2),
  [507] = {.count = 1, .reusable = false}, SHIFT(194),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [517] = {.count = 1, .reusable = true}, SHIFT(197),
  [519] = {.count = 1, .reusable = false}, SHIFT(197),
  [521] = {.count = 1, .reusable = true}, SHIFT(198),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [533] = {.count = 1, .reusable = true}, SHIFT(200),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [539] = {.count = 1, .reusable = true}, SHIFT(204),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [545] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [547] = {.count = 1, .reusable = true}, SHIFT(206),
  [549] = {.count = 1, .reusable = true}, SHIFT(207),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(129),
  [554] = {.count = 1, .reusable = true}, SHIFT(208),
  [556] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [558] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(136),
  [561] = {.count = 1, .reusable = true}, SHIFT(210),
  [563] = {.count = 1, .reusable = false}, SHIFT(210),
  [565] = {.count = 1, .reusable = true}, SHIFT(211),
  [567] = {.count = 1, .reusable = true}, SHIFT(212),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [571] = {.count = 1, .reusable = true}, SHIFT(215),
  [573] = {.count = 1, .reusable = true}, SHIFT(218),
  [575] = {.count = 1, .reusable = true}, SHIFT(220),
  [577] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2), SHIFT_REPEAT(153),
  [582] = {.count = 1, .reusable = true}, SHIFT(221),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 4),
  [586] = {.count = 1, .reusable = true}, SHIFT(223),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [590] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [600] = {.count = 1, .reusable = true}, SHIFT(224),
  [602] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [604] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [606] = {.count = 1, .reusable = true}, SHIFT(230),
  [608] = {.count = 1, .reusable = true}, SHIFT(231),
  [610] = {.count = 1, .reusable = true}, SHIFT(232),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [616] = {.count = 1, .reusable = true}, SHIFT(233),
  [618] = {.count = 1, .reusable = false}, SHIFT(234),
  [620] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(186),
  [623] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [625] = {.count = 1, .reusable = true}, SHIFT(238),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [635] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [641] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(204),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [648] = {.count = 1, .reusable = false}, SHIFT(239),
  [650] = {.count = 1, .reusable = true}, SHIFT(242),
  [652] = {.count = 1, .reusable = true}, SHIFT(243),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [658] = {.count = 1, .reusable = true}, SHIFT(245),
  [660] = {.count = 1, .reusable = true}, SHIFT(246),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 4),
  [666] = {.count = 1, .reusable = true}, SHIFT(248),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [672] = {.count = 1, .reusable = true}, SHIFT(249),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 5),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 6),
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
