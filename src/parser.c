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
#define STATE_COUNT 279
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
    case 401:
      if (lookahead == '!')
        ADVANCE(402);
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
        ADVANCE(403);
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
    case 402:
      if (lookahead == '=')
        ADVANCE(44);
      END_STATE();
    case 403:
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 404:
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
    case 405:
      if (lookahead == '!')
        ADVANCE(402);
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
        ADVANCE(403);
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
    case 406:
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
  [28] = {.lex_state = 219},
  [29] = {.lex_state = 311},
  [30] = {.lex_state = 213},
  [31] = {.lex_state = 313},
  [32] = {.lex_state = 351},
  [33] = {.lex_state = 213},
  [34] = {.lex_state = 213},
  [35] = {.lex_state = 213},
  [36] = {.lex_state = 208},
  [37] = {.lex_state = 213},
  [38] = {.lex_state = 352},
  [39] = {.lex_state = 213},
  [40] = {.lex_state = 213},
  [41] = {.lex_state = 364},
  [42] = {.lex_state = 365},
  [43] = {.lex_state = 368},
  [44] = {.lex_state = 369},
  [45] = {.lex_state = 308},
  [46] = {.lex_state = 213},
  [47] = {.lex_state = 213},
  [48] = {.lex_state = 368},
  [49] = {.lex_state = 213},
  [50] = {.lex_state = 379},
  [51] = {.lex_state = 352},
  [52] = {.lex_state = 213},
  [53] = {.lex_state = 213},
  [54] = {.lex_state = 219},
  [55] = {.lex_state = 352},
  [56] = {.lex_state = 364},
  [57] = {.lex_state = 352},
  [58] = {.lex_state = 348},
  [59] = {.lex_state = 213},
  [60] = {.lex_state = 384},
  [61] = {.lex_state = 213},
  [62] = {.lex_state = 348},
  [63] = {.lex_state = 310},
  [64] = {.lex_state = 389},
  [65] = {.lex_state = 213},
  [66] = {.lex_state = 213},
  [67] = {.lex_state = 308},
  [68] = {.lex_state = 213},
  [69] = {.lex_state = 391},
  [70] = {.lex_state = 219},
  [71] = {.lex_state = 213},
  [72] = {.lex_state = 219},
  [73] = {.lex_state = 219},
  [74] = {.lex_state = 399},
  [75] = {.lex_state = 399},
  [76] = {.lex_state = 391},
  [77] = {.lex_state = 213},
  [78] = {.lex_state = 213},
  [79] = {.lex_state = 391},
  [80] = {.lex_state = 399},
  [81] = {.lex_state = 308},
  [82] = {.lex_state = 313},
  [83] = {.lex_state = 213},
  [84] = {.lex_state = 213},
  [85] = {.lex_state = 379},
  [86] = {.lex_state = 400},
  [87] = {.lex_state = 213},
  [88] = {.lex_state = 213},
  [89] = {.lex_state = 219},
  [90] = {.lex_state = 311},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 352},
  [93] = {.lex_state = 401},
  [94] = {.lex_state = 369},
  [95] = {.lex_state = 213},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 404},
  [99] = {.lex_state = 404},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 368},
  [102] = {.lex_state = 405},
  [103] = {.lex_state = 308},
  [104] = {.lex_state = 368},
  [105] = {.lex_state = 364},
  [106] = {.lex_state = 364},
  [107] = {.lex_state = 348},
  [108] = {.lex_state = 368},
  [109] = {.lex_state = 368},
  [110] = {.lex_state = 308},
  [111] = {.lex_state = 219},
  [112] = {.lex_state = 348},
  [113] = {.lex_state = 406},
  [114] = {.lex_state = 213},
  [115] = {.lex_state = 213},
  [116] = {.lex_state = 219},
  [117] = {.lex_state = 213},
  [118] = {.lex_state = 310},
  [119] = {.lex_state = 389},
  [120] = {.lex_state = 213},
  [121] = {.lex_state = 213},
  [122] = {.lex_state = 213},
  [123] = {.lex_state = 213},
  [124] = {.lex_state = 391},
  [125] = {.lex_state = 407},
  [126] = {.lex_state = 348},
  [127] = {.lex_state = 391},
  [128] = {.lex_state = 213},
  [129] = {.lex_state = 368},
  [130] = {.lex_state = 408},
  [131] = {.lex_state = 208},
  [132] = {.lex_state = 408},
  [133] = {.lex_state = 368},
  [134] = {.lex_state = 399},
  [135] = {.lex_state = 213},
  [136] = {.lex_state = 213},
  [137] = {.lex_state = 399},
  [138] = {.lex_state = 219},
  [139] = {.lex_state = 391},
  [140] = {.lex_state = 213},
  [141] = {.lex_state = 391},
  [142] = {.lex_state = 351},
  [143] = {.lex_state = 399},
  [144] = {.lex_state = 391},
  [145] = {.lex_state = 313},
  [146] = {.lex_state = 405},
  [147] = {.lex_state = 308},
  [148] = {.lex_state = 368},
  [149] = {.lex_state = 348},
  [150] = {.lex_state = 348},
  [151] = {.lex_state = 409},
  [152] = {.lex_state = 219},
  [153] = {.lex_state = 213},
  [154] = {.lex_state = 213},
  [155] = {.lex_state = 401},
  [156] = {.lex_state = 401},
  [157] = {.lex_state = 369},
  [158] = {.lex_state = 406},
  [159] = {.lex_state = 413},
  [160] = {.lex_state = 368},
  [161] = {.lex_state = 404},
  [162] = {.lex_state = 348},
  [163] = {.lex_state = 368},
  [164] = {.lex_state = 401},
  [165] = {.lex_state = 368},
  [166] = {.lex_state = 308},
  [167] = {.lex_state = 364},
  [168] = {.lex_state = 213},
  [169] = {.lex_state = 219},
  [170] = {.lex_state = 310},
  [171] = {.lex_state = 219},
  [172] = {.lex_state = 348},
  [173] = {.lex_state = 391},
  [174] = {.lex_state = 213},
  [175] = {.lex_state = 425},
  [176] = {.lex_state = 213},
  [177] = {.lex_state = 425},
  [178] = {.lex_state = 369},
  [179] = {.lex_state = 365},
  [180] = {.lex_state = 368},
  [181] = {.lex_state = 379},
  [182] = {.lex_state = 408},
  [183] = {.lex_state = 399},
  [184] = {.lex_state = 213},
  [185] = {.lex_state = 213},
  [186] = {.lex_state = 399},
  [187] = {.lex_state = 219},
  [188] = {.lex_state = 213},
  [189] = {.lex_state = 391},
  [190] = {.lex_state = 399},
  [191] = {.lex_state = 399},
  [192] = {.lex_state = 400},
  [193] = {.lex_state = 368},
  [194] = {.lex_state = 308},
  [195] = {.lex_state = 313},
  [196] = {.lex_state = 348},
  [197] = {.lex_state = 213},
  [198] = {.lex_state = 213},
  [199] = {.lex_state = 213},
  [200] = {.lex_state = 409},
  [201] = {.lex_state = 384},
  [202] = {.lex_state = 219},
  [203] = {.lex_state = 213},
  [204] = {.lex_state = 404},
  [205] = {.lex_state = 404},
  [206] = {.lex_state = 313},
  [207] = {.lex_state = 348},
  [208] = {.lex_state = 213},
  [209] = {.lex_state = 308},
  [210] = {.lex_state = 401},
  [211] = {.lex_state = 406},
  [212] = {.lex_state = 408},
  [213] = {.lex_state = 348},
  [214] = {.lex_state = 213},
  [215] = {.lex_state = 425},
  [216] = {.lex_state = 425},
  [217] = {.lex_state = 308},
  [218] = {.lex_state = 425},
  [219] = {.lex_state = 219},
  [220] = {.lex_state = 369},
  [221] = {.lex_state = 311},
  [222] = {.lex_state = 404},
  [223] = {.lex_state = 405},
  [224] = {.lex_state = 308},
  [225] = {.lex_state = 368},
  [226] = {.lex_state = 219},
  [227] = {.lex_state = 213},
  [228] = {.lex_state = 219},
  [229] = {.lex_state = 213},
  [230] = {.lex_state = 308},
  [231] = {.lex_state = 400},
  [232] = {.lex_state = 213},
  [233] = {.lex_state = 213},
  [234] = {.lex_state = 213},
  [235] = {.lex_state = 348},
  [236] = {.lex_state = 409},
  [237] = {.lex_state = 384},
  [238] = {.lex_state = 313},
  [239] = {.lex_state = 213},
  [240] = {.lex_state = 219},
  [241] = {.lex_state = 213},
  [242] = {.lex_state = 213},
  [243] = {.lex_state = 401},
  [244] = {.lex_state = 348},
  [245] = {.lex_state = 425},
  [246] = {.lex_state = 425},
  [247] = {.lex_state = 425},
  [248] = {.lex_state = 425},
  [249] = {.lex_state = 425},
  [250] = {.lex_state = 219},
  [251] = {.lex_state = 219},
  [252] = {.lex_state = 219},
  [253] = {.lex_state = 219},
  [254] = {.lex_state = 368},
  [255] = {.lex_state = 308},
  [256] = {.lex_state = 219},
  [257] = {.lex_state = 219},
  [258] = {.lex_state = 400},
  [259] = {.lex_state = 348},
  [260] = {.lex_state = 409},
  [261] = {.lex_state = 213},
  [262] = {.lex_state = 348},
  [263] = {.lex_state = 213},
  [264] = {.lex_state = 213},
  [265] = {.lex_state = 308},
  [266] = {.lex_state = 219},
  [267] = {.lex_state = 409},
  [268] = {.lex_state = 213},
  [269] = {.lex_state = 348},
  [270] = {.lex_state = 213},
  [271] = {.lex_state = 384},
  [272] = {.lex_state = 213},
  [273] = {.lex_state = 219},
  [274] = {.lex_state = 213},
  [275] = {.lex_state = 409},
  [276] = {.lex_state = 213},
  [277] = {.lex_state = 384},
  [278] = {.lex_state = 409},
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
    [anon_sym_LPAREN] = ACTIONS(52),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(54),
    [sym__space] = ACTIONS(56),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(60),
  },
  [15] = {
    [anon_sym_module] = ACTIONS(62),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [16] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(64),
    [sym__comment] = ACTIONS(3),
  },
  [17] = {
    [anon_sym_DOT] = ACTIONS(66),
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
    [anon_sym_i32] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(68),
    [sym_is_declare] = ACTIONS(73),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(84),
    [anon_sym_private] = ACTIONS(87),
    [anon_sym_u8] = ACTIONS(68),
    [anon_sym_f64] = ACTIONS(68),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(68),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(68),
    [sym_is_external] = ACTIONS(73),
    [sym_binary] = ACTIONS(75),
    [anon_sym_function] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(96),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(87),
    [anon_sym_u16] = ACTIONS(68),
    [anon_sym_s8] = ACTIONS(68),
    [anon_sym_u64] = ACTIONS(68),
    [anon_sym_enum] = ACTIONS(73),
    [anon_sym_i16] = ACTIONS(68),
    [sym_integer] = ACTIONS(99),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_method] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(87),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(68),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(68),
    [anon_sym_f32] = ACTIONS(68),
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
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(111),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [20] = {
    [sym_pointer] = STATE(66),
    [sym_array] = STATE(65),
    [aux_sym_type_repeat2] = STATE(65),
    [aux_sym_type_repeat1] = STATE(66),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [21] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(68),
    [sym_is_method] = STATE(68),
    [sym_type] = STATE(25),
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
    [sym_identifier] = ACTIONS(129),
    [sym__comment] = ACTIONS(3),
  },
  [26] = {
    [sym__enum_element] = STATE(75),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
  },
  [27] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [28] = {
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
  [29] = {
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_is_function] = STATE(77),
    [sym_is_method] = STATE(77),
    [sym_type] = STATE(25),
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
  [30] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(137),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym_oct] = ACTIONS(139),
    [sym_long] = ACTIONS(141),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(139),
    [sym_is_declare] = ACTIONS(139),
    [sym_hex] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_switch] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_u8] = ACTIONS(139),
    [anon_sym_f64] = ACTIONS(139),
    [sym_float] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_i8] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_s32] = ACTIONS(139),
    [sym_is_external] = ACTIONS(139),
    [sym_binary] = ACTIONS(141),
    [anon_sym_function] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [sym_readonly] = ACTIONS(139),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_u16] = ACTIONS(139),
    [anon_sym_s8] = ACTIONS(139),
    [anon_sym_u64] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_i16] = ACTIONS(139),
    [sym_integer] = ACTIONS(139),
    [anon_sym_section] = ACTIONS(139),
    [sym_double] = ACTIONS(141),
    [anon_sym_goto] = ACTIONS(139),
    [anon_sym_method] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(139),
    [sym_null] = ACTIONS(139),
    [anon_sym_publish] = ACTIONS(139),
    [anon_sym_u32] = ACTIONS(139),
    [anon_sym_i64] = ACTIONS(139),
    [anon_sym_f32] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_i32] = ACTIONS(139),
  },
  [32] = {
    [sym_type] = STATE(59),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__comma_list_variables] = STATE(81),
    [sym_access_control] = STATE(56),
    [sym_variable_definition] = STATE(80),
    [sym_readonly] = ACTIONS(115),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(113),
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
    [sym__space] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [34] = {
    [anon_sym_DOT] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_DOT] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(149),
    [sym__space] = ACTIONS(3),
  },
  [37] = {
    [sym_group_expression] = STATE(86),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(151),
  },
  [38] = {
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_AMP_EQ] = ACTIONS(153),
    [anon_sym_CARET_EQ] = ACTIONS(153),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_LT_LT_EQ] = ACTIONS(153),
    [anon_sym_PIPE_EQ] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_GT_GT_EQ] = ACTIONS(153),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym_group_expression] = STATE(87),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [40] = {
    [sym_compound_template] = STATE(89),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
  },
  [41] = {
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
  [42] = {
    [sym__escape_sequence] = STATE(90),
    [anon_sym_BSLASHa] = ACTIONS(161),
    [anon_sym_BSLASHt] = ACTIONS(161),
    [anon_sym_BSLASH0] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(161),
    [anon_sym_BSLASHv] = ACTIONS(161),
    [aux_sym_character_token1] = ACTIONS(163),
    [anon_sym_BSLASHf] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(161),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(161),
    [anon_sym_BSLASHn] = ACTIONS(161),
  },
  [43] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_group_expression] = STATE(51),
    [sym__assignment_or_collection_or_value] = STATE(91),
    [sym__literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_assignment_expression] = STATE(91),
    [sym__collection_or_value] = STATE(92),
    [sym_character] = STATE(51),
    [sym_collection] = STATE(92),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(75),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(75),
    [sym_integer] = ACTIONS(99),
    [sym_identifier] = ACTIONS(99),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [sym_binary] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(99),
    [sym_long] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [44] = {
    [aux_sym_string_repeat1] = STATE(94),
    [sym__comment] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__space] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(169),
  },
  [45] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(95),
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
    [sym_identifier] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
  },
  [48] = {
    [sym__value] = STATE(99),
    [sym__number] = STATE(99),
    [sym_group_expression] = STATE(99),
    [sym__comma_list_collection_or_value] = STATE(98),
    [sym__literal] = STATE(99),
    [sym_string] = STATE(99),
    [sym__collection_or_value] = STATE(99),
    [sym_character] = STATE(99),
    [sym_collection] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(175),
    [sym_integer] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(177),
    [sym_binary] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(177),
    [sym_long] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [49] = {
    [sym_group_expression] = STATE(100),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [50] = {
    [sym__value] = STATE(102),
    [sym__number] = STATE(102),
    [sym_group_expression] = STATE(102),
    [sym__literal] = STATE(102),
    [sym_string] = STATE(102),
    [sym_assignment_expression] = STATE(103),
    [sym_unary_op] = STATE(104),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(102),
    [sym_collection] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(181),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(181),
    [sym_integer] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [sym_float] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(179),
    [sym_null] = ACTIONS(183),
    [sym_binary] = ACTIONS(181),
    [sym_oct] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [51] = {
    [sym_assignment_post_op] = STATE(106),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_DASH_DASH] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_PLUS_PLUS] = ACTIONS(191),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(187),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_DOT] = ACTIONS(193),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_DOT] = ACTIONS(195),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(197),
    [sym_readonly] = ACTIONS(197),
    [anon_sym_s16] = ACTIONS(197),
    [anon_sym_protected] = ACTIONS(197),
    [anon_sym_u16] = ACTIONS(197),
    [anon_sym_s8] = ACTIONS(197),
    [anon_sym_u64] = ACTIONS(197),
    [anon_sym_enum] = ACTIONS(197),
    [anon_sym_i16] = ACTIONS(197),
    [sym_is_declare] = ACTIONS(197),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(197),
    [anon_sym_end] = ACTIONS(197),
    [anon_sym_private] = ACTIONS(197),
    [anon_sym_u8] = ACTIONS(197),
    [anon_sym_f64] = ACTIONS(197),
    [anon_sym_i8] = ACTIONS(197),
    [anon_sym_method] = ACTIONS(197),
    [anon_sym_s32] = ACTIONS(197),
    [anon_sym_publish] = ACTIONS(197),
    [anon_sym_u32] = ACTIONS(197),
    [anon_sym_i64] = ACTIONS(197),
    [anon_sym_f32] = ACTIONS(197),
    [sym_is_external] = ACTIONS(197),
    [anon_sym_i32] = ACTIONS(197),
  },
  [55] = {
    [sym_assignment_op] = STATE(109),
    [anon_sym_PIPE_EQ] = ACTIONS(199),
    [anon_sym_COLON_EQ] = ACTIONS(199),
    [anon_sym_PLUS_EQ] = ACTIONS(199),
    [anon_sym_AMP_EQ] = ACTIONS(199),
    [anon_sym_STAR_EQ] = ACTIONS(199),
    [anon_sym_CARET_EQ] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(199),
    [anon_sym_SLASH_EQ] = ACTIONS(199),
    [anon_sym_GT_GT_EQ] = ACTIONS(199),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(199),
  },
  [56] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(95),
    [sym__base_type] = STATE(20),
    [sym_readonly] = ACTIONS(201),
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
    [anon_sym_COLON_EQ] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(155),
    [anon_sym_AMP_EQ] = ACTIONS(153),
    [anon_sym_STAR_EQ] = ACTIONS(153),
    [anon_sym_CARET_EQ] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_PERCENT_EQ] = ACTIONS(153),
    [anon_sym_LT_LT_EQ] = ACTIONS(153),
    [anon_sym_PIPE_EQ] = ACTIONS(153),
    [anon_sym_PLUS_EQ] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_SLASH_EQ] = ACTIONS(153),
    [anon_sym_GT_GT_EQ] = ACTIONS(153),
    [sym__comment] = ACTIONS(3),
  },
  [58] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_compound_template] = STATE(111),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(203),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [59] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_function] = ACTIONS(207),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(209),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(211),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_end_function] = STATE(117),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym__control_flow_statement] = STATE(52),
    [sym_goto_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym_return_statement] = STATE(52),
    [sym_group_expression] = STATE(57),
    [sym__literal] = STATE(51),
    [sym_string] = STATE(51),
    [sym_end_method] = STATE(117),
    [sym__end_function] = STATE(117),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(51),
    [sym_access_control] = STATE(56),
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym_type] = STATE(59),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(111),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(215),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
  },
  [64] = {
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym_integer] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(3),
  },
  [65] = {
    [sym_array] = STATE(120),
    [aux_sym_type_repeat2] = STATE(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(221),
  },
  [66] = {
    [sym_pointer] = STATE(122),
    [sym_array] = STATE(121),
    [aux_sym_type_repeat2] = STATE(121),
    [aux_sym_type_repeat1] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [67] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(123),
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
    [sym_identifier] = ACTIONS(223),
    [sym__comment] = ACTIONS(3),
  },
  [69] = {
    [sym_parameter_list] = STATE(127),
    [sym_return_list] = STATE(128),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [70] = {
    [sym_static_assignment] = STATE(130),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(229),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym_readonly] = ACTIONS(229),
    [anon_sym_s16] = ACTIONS(229),
    [anon_sym_protected] = ACTIONS(229),
    [anon_sym_u16] = ACTIONS(229),
    [anon_sym_s8] = ACTIONS(229),
    [anon_sym_u64] = ACTIONS(229),
    [anon_sym_enum] = ACTIONS(229),
    [anon_sym_i16] = ACTIONS(229),
    [sym_is_declare] = ACTIONS(229),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(229),
    [anon_sym_end] = ACTIONS(229),
    [anon_sym_private] = ACTIONS(229),
    [anon_sym_u8] = ACTIONS(229),
    [anon_sym_f64] = ACTIONS(229),
    [anon_sym_i8] = ACTIONS(229),
    [anon_sym_method] = ACTIONS(229),
    [anon_sym_s32] = ACTIONS(229),
    [anon_sym_publish] = ACTIONS(229),
    [anon_sym_u32] = ACTIONS(229),
    [anon_sym_i64] = ACTIONS(229),
    [anon_sym_f32] = ACTIONS(229),
    [sym_is_external] = ACTIONS(229),
    [anon_sym_i32] = ACTIONS(229),
  },
  [71] = {
    [anon_sym_DOT] = ACTIONS(233),
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
    [anon_sym_function] = ACTIONS(235),
    [sym_readonly] = ACTIONS(238),
    [anon_sym_s16] = ACTIONS(241),
    [anon_sym_protected] = ACTIONS(244),
    [anon_sym_u16] = ACTIONS(241),
    [anon_sym_s8] = ACTIONS(241),
    [anon_sym_u64] = ACTIONS(241),
    [anon_sym_enum] = ACTIONS(247),
    [anon_sym_i16] = ACTIONS(241),
    [sym_is_declare] = ACTIONS(250),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(256),
    [anon_sym_private] = ACTIONS(244),
    [anon_sym_u8] = ACTIONS(241),
    [anon_sym_f64] = ACTIONS(241),
    [anon_sym_i8] = ACTIONS(241),
    [anon_sym_method] = ACTIONS(258),
    [anon_sym_s32] = ACTIONS(241),
    [anon_sym_publish] = ACTIONS(244),
    [anon_sym_u32] = ACTIONS(241),
    [anon_sym_i64] = ACTIONS(241),
    [anon_sym_f32] = ACTIONS(241),
    [sym_is_external] = ACTIONS(250),
    [anon_sym_i32] = ACTIONS(241),
  },
  [73] = {
    [sym_static_assignment] = STATE(132),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(261),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym_readonly] = ACTIONS(261),
    [anon_sym_s16] = ACTIONS(261),
    [anon_sym_protected] = ACTIONS(261),
    [anon_sym_u16] = ACTIONS(261),
    [anon_sym_s8] = ACTIONS(261),
    [anon_sym_u64] = ACTIONS(261),
    [anon_sym_enum] = ACTIONS(261),
    [anon_sym_i16] = ACTIONS(261),
    [sym_is_declare] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_end] = ACTIONS(261),
    [anon_sym_private] = ACTIONS(261),
    [anon_sym_u8] = ACTIONS(261),
    [anon_sym_f64] = ACTIONS(261),
    [anon_sym_i8] = ACTIONS(261),
    [anon_sym_method] = ACTIONS(261),
    [anon_sym_s32] = ACTIONS(261),
    [anon_sym_publish] = ACTIONS(261),
    [anon_sym_u32] = ACTIONS(261),
    [anon_sym_i64] = ACTIONS(261),
    [anon_sym_f32] = ACTIONS(261),
    [sym_is_external] = ACTIONS(261),
    [anon_sym_i32] = ACTIONS(261),
  },
  [74] = {
    [sym_static_assignment] = STATE(134),
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(265),
  },
  [75] = {
    [aux_sym_enum_definition_repeat1] = STATE(137),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(267),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(269),
  },
  [76] = {
    [sym_parameter_list] = STATE(139),
    [sym_return_list] = STATE(140),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(275),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(275),
  },
  [79] = {
    [anon_sym_returns] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
  },
  [80] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(143),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(281),
  },
  [81] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(283),
  },
  [82] = {
    [sym_oct] = ACTIONS(285),
    [sym_long] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(285),
    [sym_is_declare] = ACTIONS(285),
    [sym_hex] = ACTIONS(287),
    [anon_sym_if] = ACTIONS(285),
    [anon_sym_switch] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_u8] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(285),
    [sym_float] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_i8] = ACTIONS(285),
    [anon_sym_return] = ACTIONS(285),
    [anon_sym_s32] = ACTIONS(285),
    [sym_is_external] = ACTIONS(285),
    [sym_binary] = ACTIONS(287),
    [anon_sym_function] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym_readonly] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_u16] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(285),
    [anon_sym_u64] = ACTIONS(285),
    [anon_sym_enum] = ACTIONS(285),
    [anon_sym_i16] = ACTIONS(285),
    [sym_integer] = ACTIONS(285),
    [anon_sym_section] = ACTIONS(285),
    [sym_double] = ACTIONS(287),
    [anon_sym_goto] = ACTIONS(285),
    [anon_sym_method] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_while] = ACTIONS(285),
    [sym_null] = ACTIONS(285),
    [anon_sym_publish] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(285),
    [anon_sym_i64] = ACTIONS(285),
    [anon_sym_f32] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_i32] = ACTIONS(285),
  },
  [83] = {
    [aux_sym_compound_template_repeat1] = STATE(83),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(275),
  },
  [84] = {
    [anon_sym_DOT] = ACTIONS(292),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [sym__value] = STATE(146),
    [sym__number] = STATE(146),
    [sym_group_expression] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_string] = STATE(146),
    [sym_assignment_expression] = STATE(147),
    [sym_unary_op] = STATE(148),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(146),
    [sym_collection] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(294),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(294),
    [sym_integer] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_identifier] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [sym_float] = ACTIONS(294),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(179),
    [sym_null] = ACTIONS(296),
    [sym_binary] = ACTIONS(294),
    [sym_oct] = ACTIONS(296),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(294),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [86] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(150),
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
    [sym__statement] = STATE(150),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [87] = {
    [anon_sym_DOT] = ACTIONS(300),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [88] = {
    [aux_sym_compound_template_repeat1] = STATE(153),
    [sym_parameter_list] = STATE(154),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(302),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [89] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(304),
    [sym_readonly] = ACTIONS(304),
    [anon_sym_s16] = ACTIONS(304),
    [anon_sym_protected] = ACTIONS(304),
    [anon_sym_u16] = ACTIONS(304),
    [anon_sym_s8] = ACTIONS(304),
    [anon_sym_u64] = ACTIONS(304),
    [anon_sym_enum] = ACTIONS(304),
    [anon_sym_i16] = ACTIONS(304),
    [sym_is_declare] = ACTIONS(304),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(304),
    [anon_sym_end] = ACTIONS(304),
    [anon_sym_private] = ACTIONS(304),
    [anon_sym_u8] = ACTIONS(304),
    [anon_sym_f64] = ACTIONS(304),
    [anon_sym_i8] = ACTIONS(304),
    [anon_sym_method] = ACTIONS(304),
    [anon_sym_s32] = ACTIONS(304),
    [anon_sym_publish] = ACTIONS(304),
    [anon_sym_u32] = ACTIONS(304),
    [anon_sym_i64] = ACTIONS(304),
    [anon_sym_f32] = ACTIONS(304),
    [sym_is_external] = ACTIONS(304),
    [anon_sym_i32] = ACTIONS(304),
  },
  [90] = {
    [anon_sym_SQUOTE] = ACTIONS(306),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [anon_sym_DOT] = ACTIONS(308),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [92] = {
    [sym_assignment_op] = STATE(109),
    [anon_sym_PIPE_EQ] = ACTIONS(199),
    [anon_sym_COLON_EQ] = ACTIONS(199),
    [anon_sym_PLUS_EQ] = ACTIONS(199),
    [anon_sym_AMP_EQ] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(310),
    [anon_sym_STAR_EQ] = ACTIONS(199),
    [anon_sym_CARET_EQ] = ACTIONS(199),
    [anon_sym_DASH_EQ] = ACTIONS(199),
    [sym__space] = ACTIONS(3),
    [anon_sym_SLASH_EQ] = ACTIONS(199),
    [anon_sym_GT_GT_EQ] = ACTIONS(199),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(199),
    [anon_sym_LT_LT_EQ] = ACTIONS(199),
  },
  [93] = {
    [anon_sym_COLON_EQ] = ACTIONS(312),
    [anon_sym_AMP_AMP] = ACTIONS(312),
    [anon_sym_DASH_EQ] = ACTIONS(312),
    [anon_sym_GT_GT] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(314),
    [anon_sym_GT_EQ] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
    [anon_sym_PLUS_PLUS] = ACTIONS(312),
    [anon_sym_PERCENT_EQ] = ACTIONS(312),
    [anon_sym_LT_LT_EQ] = ACTIONS(312),
    [anon_sym_PIPE_EQ] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_DOT] = ACTIONS(312),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_AMP] = ACTIONS(314),
    [anon_sym_PIPE_PIPE] = ACTIONS(312),
    [anon_sym_BANG_EQ] = ACTIONS(312),
    [anon_sym_LT_LT] = ACTIONS(314),
    [anon_sym_PIPE] = ACTIONS(314),
    [anon_sym_LT_EQ] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(314),
    [anon_sym_DASH_DASH] = ACTIONS(314),
    [anon_sym_AMP_EQ] = ACTIONS(312),
    [anon_sym_STAR_EQ] = ACTIONS(312),
    [anon_sym_CARET_EQ] = ACTIONS(312),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_EQ_EQ] = ACTIONS(312),
    [anon_sym_PLUS_EQ] = ACTIONS(312),
    [anon_sym_CARET] = ACTIONS(314),
    [anon_sym_SLASH] = ACTIONS(314),
    [anon_sym_LT] = ACTIONS(314),
    [anon_sym_SLASH_EQ] = ACTIONS(312),
    [anon_sym_GT_GT_EQ] = ACTIONS(312),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [aux_sym_string_repeat1] = STATE(157),
    [sym__comment] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(316),
    [sym__space] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(318),
  },
  [95] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [anon_sym_DOT] = ACTIONS(322),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [anon_sym_DOT] = ACTIONS(324),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(326),
  },
  [99] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(328),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(330),
  },
  [100] = {
    [anon_sym_DOT] = ACTIONS(332),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [anon_sym_DQUOTE] = ACTIONS(334),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(334),
    [sym_hex] = ACTIONS(334),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(334),
    [sym_null] = ACTIONS(336),
    [sym_integer] = ACTIONS(336),
    [sym_binary] = ACTIONS(334),
    [sym_oct] = ACTIONS(336),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(336),
    [anon_sym_LPAREN] = ACTIONS(336),
    [sym_long] = ACTIONS(334),
  },
  [102] = {
    [sym_binary_op] = STATE(165),
    [sym_assignment_post_op] = STATE(106),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(191),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [sym__comment] = ACTIONS(3),
  },
  [103] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(342),
  },
  [104] = {
    [sym__value] = STATE(166),
    [sym__number] = STATE(166),
    [sym_group_expression] = STATE(166),
    [sym_character] = STATE(166),
    [sym__literal] = STATE(166),
    [sym_string] = STATE(166),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(344),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(344),
    [sym_null] = ACTIONS(346),
    [sym_integer] = ACTIONS(346),
    [sym_binary] = ACTIONS(344),
    [sym_oct] = ACTIONS(346),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(346),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(344),
  },
  [105] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [sym__space] = ACTIONS(3),
  },
  [106] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(350),
    [sym__space] = ACTIONS(3),
  },
  [107] = {
    [sym_oct] = ACTIONS(352),
    [sym_long] = ACTIONS(354),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(352),
    [sym_hex] = ACTIONS(354),
    [anon_sym_if] = ACTIONS(352),
    [anon_sym_switch] = ACTIONS(352),
    [sym_identifier] = ACTIONS(352),
    [anon_sym_end] = ACTIONS(352),
    [anon_sym_private] = ACTIONS(352),
    [anon_sym_u8] = ACTIONS(352),
    [anon_sym_f64] = ACTIONS(352),
    [sym_float] = ACTIONS(354),
    [anon_sym_SQUOTE] = ACTIONS(354),
    [anon_sym_i8] = ACTIONS(352),
    [anon_sym_return] = ACTIONS(352),
    [anon_sym_s32] = ACTIONS(352),
    [sym_binary] = ACTIONS(354),
    [anon_sym_DQUOTE] = ACTIONS(354),
    [sym_readonly] = ACTIONS(352),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(352),
    [anon_sym_u16] = ACTIONS(352),
    [anon_sym_s8] = ACTIONS(352),
    [anon_sym_u64] = ACTIONS(352),
    [sym_integer] = ACTIONS(352),
    [anon_sym_i16] = ACTIONS(352),
    [sym_double] = ACTIONS(354),
    [anon_sym_section] = ACTIONS(352),
    [anon_sym_goto] = ACTIONS(352),
    [anon_sym_LBRACE] = ACTIONS(354),
    [sym_null] = ACTIONS(352),
    [anon_sym_while] = ACTIONS(352),
    [anon_sym_publish] = ACTIONS(352),
    [anon_sym_u32] = ACTIONS(352),
    [anon_sym_i64] = ACTIONS(352),
    [anon_sym_f32] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [anon_sym_i32] = ACTIONS(352),
  },
  [108] = {
    [anon_sym_DQUOTE] = ACTIONS(356),
    [sym_hex] = ACTIONS(356),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(356),
    [sym_integer] = ACTIONS(358),
    [sym_identifier] = ACTIONS(358),
    [sym_float] = ACTIONS(356),
    [anon_sym_SQUOTE] = ACTIONS(356),
    [anon_sym_LBRACE] = ACTIONS(356),
    [sym_null] = ACTIONS(358),
    [sym_binary] = ACTIONS(356),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(358),
    [sym_long] = ACTIONS(356),
    [anon_sym_LPAREN] = ACTIONS(358),
  },
  [109] = {
    [sym__value] = STATE(167),
    [sym__number] = STATE(167),
    [sym_group_expression] = STATE(167),
    [sym__literal] = STATE(167),
    [sym_string] = STATE(167),
    [sym__collection_or_value] = STATE(167),
    [sym_character] = STATE(167),
    [sym_collection] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(360),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(360),
    [sym_integer] = ACTIONS(362),
    [sym_identifier] = ACTIONS(362),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(362),
    [sym_binary] = ACTIONS(360),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(362),
    [sym_long] = ACTIONS(360),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [110] = {
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(168),
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
  [111] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(364),
    [sym_readonly] = ACTIONS(364),
    [anon_sym_s16] = ACTIONS(364),
    [anon_sym_protected] = ACTIONS(364),
    [anon_sym_u16] = ACTIONS(364),
    [anon_sym_s8] = ACTIONS(364),
    [anon_sym_u64] = ACTIONS(364),
    [anon_sym_enum] = ACTIONS(364),
    [anon_sym_i16] = ACTIONS(364),
    [sym_is_declare] = ACTIONS(364),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(364),
    [anon_sym_end] = ACTIONS(364),
    [anon_sym_private] = ACTIONS(364),
    [anon_sym_u8] = ACTIONS(364),
    [anon_sym_f64] = ACTIONS(364),
    [anon_sym_i8] = ACTIONS(364),
    [anon_sym_method] = ACTIONS(364),
    [anon_sym_s32] = ACTIONS(364),
    [anon_sym_publish] = ACTIONS(364),
    [anon_sym_u32] = ACTIONS(364),
    [anon_sym_i64] = ACTIONS(364),
    [anon_sym_f32] = ACTIONS(364),
    [sym_is_external] = ACTIONS(364),
    [anon_sym_i32] = ACTIONS(364),
  },
  [112] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [sym_oct] = ACTIONS(366),
    [sym_long] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(372),
    [sym_hex] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(375),
    [anon_sym_switch] = ACTIONS(378),
    [sym_identifier] = ACTIONS(381),
    [anon_sym_end] = ACTIONS(384),
    [anon_sym_private] = ACTIONS(386),
    [anon_sym_u8] = ACTIONS(372),
    [anon_sym_f64] = ACTIONS(372),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_i8] = ACTIONS(372),
    [anon_sym_return] = ACTIONS(392),
    [anon_sym_s32] = ACTIONS(372),
    [sym_binary] = ACTIONS(369),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [sym_readonly] = ACTIONS(398),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(386),
    [anon_sym_u16] = ACTIONS(372),
    [anon_sym_s8] = ACTIONS(372),
    [anon_sym_u64] = ACTIONS(372),
    [sym_integer] = ACTIONS(366),
    [anon_sym_i16] = ACTIONS(372),
    [sym_double] = ACTIONS(369),
    [anon_sym_section] = ACTIONS(401),
    [anon_sym_goto] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(407),
    [sym_null] = ACTIONS(366),
    [anon_sym_while] = ACTIONS(410),
    [anon_sym_publish] = ACTIONS(386),
    [anon_sym_u32] = ACTIONS(372),
    [anon_sym_i64] = ACTIONS(372),
    [anon_sym_f32] = ACTIONS(372),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_i32] = ACTIONS(372),
  },
  [113] = {
    [sym_static_assignment] = STATE(130),
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_DOT] = ACTIONS(416),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(416),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(418),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [anon_sym_DOT] = ACTIONS(420),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [116] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(422),
    [sym_readonly] = ACTIONS(422),
    [anon_sym_s16] = ACTIONS(422),
    [anon_sym_protected] = ACTIONS(422),
    [anon_sym_u16] = ACTIONS(422),
    [anon_sym_s8] = ACTIONS(422),
    [anon_sym_u64] = ACTIONS(422),
    [anon_sym_enum] = ACTIONS(422),
    [anon_sym_i16] = ACTIONS(422),
    [sym_is_declare] = ACTIONS(422),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(422),
    [anon_sym_end] = ACTIONS(422),
    [anon_sym_private] = ACTIONS(422),
    [anon_sym_u8] = ACTIONS(422),
    [anon_sym_f64] = ACTIONS(422),
    [anon_sym_i8] = ACTIONS(422),
    [anon_sym_method] = ACTIONS(422),
    [anon_sym_s32] = ACTIONS(422),
    [anon_sym_publish] = ACTIONS(422),
    [anon_sym_u32] = ACTIONS(422),
    [anon_sym_i64] = ACTIONS(422),
    [anon_sym_f32] = ACTIONS(422),
    [sym_is_external] = ACTIONS(422),
    [anon_sym_i32] = ACTIONS(422),
  },
  [117] = {
    [anon_sym_DOT] = ACTIONS(424),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(426),
  },
  [119] = {
    [anon_sym_RBRACK] = ACTIONS(430),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [sym_array] = STATE(120),
    [aux_sym_type_repeat2] = STATE(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(432),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(435),
  },
  [121] = {
    [sym_array] = STATE(120),
    [aux_sym_type_repeat2] = STATE(120),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(437),
  },
  [122] = {
    [sym_pointer] = STATE(122),
    [aux_sym_type_repeat1] = STATE(122),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(441),
    [anon_sym_STAR] = ACTIONS(443),
  },
  [123] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(446),
    [sym__comment] = ACTIONS(3),
  },
  [124] = {
    [sym_parameter_list] = STATE(173),
    [sym_return_list] = STATE(174),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [125] = {
    [sym__base_type] = STATE(175),
    [sym_primitive_type] = STATE(175),
    [sym__comma_list_types] = STATE(176),
    [sym_type] = STATE(177),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [anon_sym_i32] = ACTIONS(26),
  },
  [126] = {
    [sym_oct] = ACTIONS(454),
    [sym_long] = ACTIONS(456),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(454),
    [sym_hex] = ACTIONS(456),
    [anon_sym_if] = ACTIONS(454),
    [anon_sym_switch] = ACTIONS(454),
    [sym_identifier] = ACTIONS(454),
    [anon_sym_end] = ACTIONS(454),
    [anon_sym_private] = ACTIONS(454),
    [anon_sym_u8] = ACTIONS(454),
    [anon_sym_f64] = ACTIONS(454),
    [sym_float] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [anon_sym_i8] = ACTIONS(454),
    [anon_sym_return] = ACTIONS(454),
    [anon_sym_s32] = ACTIONS(454),
    [sym_binary] = ACTIONS(456),
    [anon_sym_DQUOTE] = ACTIONS(456),
    [sym_readonly] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(454),
    [anon_sym_u16] = ACTIONS(454),
    [anon_sym_s8] = ACTIONS(454),
    [anon_sym_u64] = ACTIONS(454),
    [sym_integer] = ACTIONS(454),
    [anon_sym_i16] = ACTIONS(454),
    [sym_double] = ACTIONS(456),
    [anon_sym_section] = ACTIONS(454),
    [anon_sym_goto] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(456),
    [sym_null] = ACTIONS(454),
    [anon_sym_while] = ACTIONS(454),
    [anon_sym_publish] = ACTIONS(454),
    [anon_sym_u32] = ACTIONS(454),
    [anon_sym_i64] = ACTIONS(454),
    [anon_sym_f32] = ACTIONS(454),
    [anon_sym_LPAREN] = ACTIONS(454),
    [anon_sym_i32] = ACTIONS(454),
  },
  [127] = {
    [sym_return_list] = STATE(174),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
  },
  [128] = {
    [anon_sym_DOT] = ACTIONS(448),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [129] = {
    [sym__value] = STATE(182),
    [sym__number] = STATE(182),
    [sym_group_expression] = STATE(182),
    [sym__literal] = STATE(182),
    [sym_string] = STATE(182),
    [sym__collection_or_value] = STATE(182),
    [sym_character] = STATE(182),
    [sym_collection] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(458),
    [sym_hex] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(460),
    [sym_integer] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [sym_float] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_LBRACE] = ACTIONS(466),
    [sym_null] = ACTIONS(462),
    [sym_binary] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(462),
    [sym_long] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(468),
  },
  [130] = {
    [anon_sym_s16] = ACTIONS(261),
    [sym_is_declare] = ACTIONS(261),
    [sym_identifier] = ACTIONS(261),
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_end] = ACTIONS(261),
    [anon_sym_private] = ACTIONS(261),
    [anon_sym_u8] = ACTIONS(261),
    [anon_sym_f64] = ACTIONS(261),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [anon_sym_i8] = ACTIONS(261),
    [anon_sym_s32] = ACTIONS(261),
    [sym_is_external] = ACTIONS(261),
    [anon_sym_function] = ACTIONS(261),
    [sym_readonly] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(261),
    [anon_sym_u16] = ACTIONS(261),
    [anon_sym_s8] = ACTIONS(261),
    [anon_sym_u64] = ACTIONS(261),
    [anon_sym_enum] = ACTIONS(261),
    [anon_sym_i16] = ACTIONS(261),
    [anon_sym_method] = ACTIONS(261),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(261),
    [anon_sym_u32] = ACTIONS(261),
    [anon_sym_i64] = ACTIONS(261),
    [anon_sym_f32] = ACTIONS(261),
    [anon_sym_i32] = ACTIONS(261),
  },
  [131] = {
    [sym__comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_module] = ACTIONS(472),
    [sym__space] = ACTIONS(3),
  },
  [132] = {
    [anon_sym_s16] = ACTIONS(474),
    [sym_is_declare] = ACTIONS(474),
    [sym_identifier] = ACTIONS(474),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_private] = ACTIONS(474),
    [anon_sym_u8] = ACTIONS(474),
    [anon_sym_f64] = ACTIONS(474),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [anon_sym_i8] = ACTIONS(474),
    [anon_sym_s32] = ACTIONS(474),
    [sym_is_external] = ACTIONS(474),
    [anon_sym_function] = ACTIONS(474),
    [sym_readonly] = ACTIONS(474),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(474),
    [anon_sym_u16] = ACTIONS(474),
    [anon_sym_s8] = ACTIONS(474),
    [anon_sym_u64] = ACTIONS(474),
    [anon_sym_enum] = ACTIONS(474),
    [anon_sym_i16] = ACTIONS(474),
    [anon_sym_method] = ACTIONS(474),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(474),
    [anon_sym_u32] = ACTIONS(474),
    [anon_sym_i64] = ACTIONS(474),
    [anon_sym_f32] = ACTIONS(474),
    [anon_sym_i32] = ACTIONS(474),
  },
  [133] = {
    [sym__value] = STATE(182),
    [sym__number] = STATE(182),
    [sym_group_expression] = STATE(182),
    [sym__literal] = STATE(182),
    [sym_string] = STATE(182),
    [sym__collection_or_value] = STATE(182),
    [sym_character] = STATE(182),
    [sym_collection] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(460),
    [sym_integer] = ACTIONS(462),
    [sym_identifier] = ACTIONS(462),
    [sym_float] = ACTIONS(460),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(462),
    [sym_binary] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(462),
    [sym_long] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [134] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(478),
  },
  [135] = {
    [sym__enum_element] = STATE(183),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(480),
    [sym__comment] = ACTIONS(3),
  },
  [137] = {
    [aux_sym_enum_definition_repeat1] = STATE(186),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(269),
  },
  [138] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(454),
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
  [139] = {
    [sym_return_list] = STATE(188),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_DOT] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [141] = {
    [sym_parameter_list] = STATE(189),
    [sym_return_list] = STATE(188),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(484),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [142] = {
    [sym_access_control] = STATE(56),
    [sym__base_type] = STATE(20),
    [sym_primitive_type] = STATE(20),
    [sym_type] = STATE(59),
    [sym_variable_definition] = STATE(190),
    [sym_readonly] = ACTIONS(115),
    [anon_sym_s16] = ACTIONS(26),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_s32] = ACTIONS(26),
    [anon_sym_publish] = ACTIONS(113),
    [anon_sym_u32] = ACTIONS(26),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i32] = ACTIONS(26),
  },
  [143] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(486),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(281),
  },
  [144] = {
    [anon_sym_returns] = ACTIONS(488),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(488),
    [sym__space] = ACTIONS(3),
  },
  [145] = {
    [sym_oct] = ACTIONS(490),
    [sym_long] = ACTIONS(492),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(490),
    [sym_is_declare] = ACTIONS(490),
    [sym_hex] = ACTIONS(492),
    [anon_sym_if] = ACTIONS(490),
    [anon_sym_switch] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
    [anon_sym_end] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_u8] = ACTIONS(490),
    [anon_sym_f64] = ACTIONS(490),
    [sym_float] = ACTIONS(492),
    [anon_sym_SQUOTE] = ACTIONS(492),
    [anon_sym_i8] = ACTIONS(490),
    [anon_sym_return] = ACTIONS(490),
    [anon_sym_s32] = ACTIONS(490),
    [sym_is_external] = ACTIONS(490),
    [sym_binary] = ACTIONS(492),
    [anon_sym_function] = ACTIONS(490),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [sym_readonly] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_u16] = ACTIONS(490),
    [anon_sym_s8] = ACTIONS(490),
    [anon_sym_u64] = ACTIONS(490),
    [anon_sym_enum] = ACTIONS(490),
    [anon_sym_i16] = ACTIONS(490),
    [sym_integer] = ACTIONS(490),
    [anon_sym_section] = ACTIONS(490),
    [sym_double] = ACTIONS(492),
    [anon_sym_goto] = ACTIONS(490),
    [anon_sym_method] = ACTIONS(490),
    [anon_sym_LBRACE] = ACTIONS(492),
    [anon_sym_while] = ACTIONS(490),
    [sym_null] = ACTIONS(490),
    [anon_sym_publish] = ACTIONS(490),
    [anon_sym_u32] = ACTIONS(490),
    [anon_sym_i64] = ACTIONS(490),
    [anon_sym_f32] = ACTIONS(490),
    [anon_sym_LPAREN] = ACTIONS(490),
    [anon_sym_i32] = ACTIONS(490),
  },
  [146] = {
    [sym_binary_op] = STATE(193),
    [sym_assignment_post_op] = STATE(106),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(191),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [sym__comment] = ACTIONS(3),
  },
  [147] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(494),
  },
  [148] = {
    [sym__value] = STATE(194),
    [sym__number] = STATE(194),
    [sym_group_expression] = STATE(194),
    [sym_character] = STATE(194),
    [sym__literal] = STATE(194),
    [sym_string] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(496),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(496),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(496),
    [sym_null] = ACTIONS(498),
    [sym_integer] = ACTIONS(498),
    [sym_binary] = ACTIONS(496),
    [sym_oct] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(498),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(496),
  },
  [149] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(196),
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
    [aux_sym_compound_template_block_repeat1] = STATE(196),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(196),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_if] = STATE(197),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(500),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [150] = {
    [sym_oct] = ACTIONS(502),
    [sym_long] = ACTIONS(504),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(502),
    [sym_hex] = ACTIONS(504),
    [anon_sym_if] = ACTIONS(502),
    [anon_sym_switch] = ACTIONS(502),
    [sym_identifier] = ACTIONS(502),
    [anon_sym_end] = ACTIONS(502),
    [anon_sym_private] = ACTIONS(502),
    [anon_sym_u8] = ACTIONS(502),
    [anon_sym_f64] = ACTIONS(502),
    [sym_float] = ACTIONS(504),
    [anon_sym_SQUOTE] = ACTIONS(504),
    [anon_sym_i8] = ACTIONS(502),
    [anon_sym_return] = ACTIONS(502),
    [anon_sym_s32] = ACTIONS(502),
    [sym_binary] = ACTIONS(504),
    [anon_sym_DQUOTE] = ACTIONS(504),
    [sym_readonly] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(502),
    [anon_sym_u16] = ACTIONS(502),
    [anon_sym_s8] = ACTIONS(502),
    [anon_sym_u64] = ACTIONS(502),
    [sym_integer] = ACTIONS(502),
    [anon_sym_i16] = ACTIONS(502),
    [sym_double] = ACTIONS(504),
    [anon_sym_section] = ACTIONS(502),
    [anon_sym_goto] = ACTIONS(502),
    [anon_sym_LBRACE] = ACTIONS(504),
    [sym_null] = ACTIONS(502),
    [anon_sym_while] = ACTIONS(502),
    [anon_sym_publish] = ACTIONS(502),
    [anon_sym_u32] = ACTIONS(502),
    [anon_sym_i64] = ACTIONS(502),
    [anon_sym_f32] = ACTIONS(502),
    [anon_sym_LPAREN] = ACTIONS(502),
    [anon_sym_i32] = ACTIONS(502),
  },
  [151] = {
    [sym_case_statement] = STATE(200),
    [aux_sym_switch_statement_repeat1] = STATE(200),
    [sym_default_statement] = STATE(201),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(508),
  },
  [152] = {
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
  [153] = {
    [aux_sym_compound_template_repeat1] = STATE(83),
    [sym_parameter_list] = STATE(203),
    [sym__comment] = ACTIONS(3),
    [sym__space] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(510),
    [anon_sym_LPAREN] = ACTIONS(52),
  },
  [154] = {
    [anon_sym_DOT] = ACTIONS(510),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [155] = {
    [anon_sym_COLON_EQ] = ACTIONS(512),
    [anon_sym_AMP_AMP] = ACTIONS(512),
    [anon_sym_DASH_EQ] = ACTIONS(512),
    [anon_sym_GT_GT] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_GT_EQ] = ACTIONS(512),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_PLUS_PLUS] = ACTIONS(512),
    [anon_sym_PERCENT_EQ] = ACTIONS(512),
    [anon_sym_LT_LT_EQ] = ACTIONS(512),
    [anon_sym_PIPE_EQ] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(514),
    [anon_sym_AMP] = ACTIONS(514),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_BANG_EQ] = ACTIONS(512),
    [anon_sym_LT_LT] = ACTIONS(514),
    [anon_sym_PIPE] = ACTIONS(514),
    [anon_sym_LT_EQ] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_DASH_DASH] = ACTIONS(514),
    [anon_sym_AMP_EQ] = ACTIONS(512),
    [anon_sym_STAR_EQ] = ACTIONS(512),
    [anon_sym_CARET_EQ] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(514),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_EQ_EQ] = ACTIONS(512),
    [anon_sym_PLUS_EQ] = ACTIONS(512),
    [anon_sym_CARET] = ACTIONS(514),
    [anon_sym_SLASH] = ACTIONS(514),
    [anon_sym_LT] = ACTIONS(514),
    [anon_sym_SLASH_EQ] = ACTIONS(512),
    [anon_sym_GT_GT_EQ] = ACTIONS(512),
    [sym__comment] = ACTIONS(3),
  },
  [156] = {
    [anon_sym_COLON_EQ] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(516),
    [anon_sym_DASH_EQ] = ACTIONS(516),
    [anon_sym_GT_GT] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_PLUS_PLUS] = ACTIONS(516),
    [anon_sym_PERCENT_EQ] = ACTIONS(516),
    [anon_sym_LT_LT_EQ] = ACTIONS(516),
    [anon_sym_PIPE_EQ] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_AMP] = ACTIONS(518),
    [anon_sym_PIPE_PIPE] = ACTIONS(516),
    [anon_sym_BANG_EQ] = ACTIONS(516),
    [anon_sym_LT_LT] = ACTIONS(518),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_DASH_DASH] = ACTIONS(518),
    [anon_sym_AMP_EQ] = ACTIONS(516),
    [anon_sym_STAR_EQ] = ACTIONS(516),
    [anon_sym_CARET_EQ] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_STAR] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(516),
    [anon_sym_PLUS_EQ] = ACTIONS(516),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [anon_sym_LT] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(516),
    [anon_sym_GT_GT_EQ] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
  },
  [157] = {
    [aux_sym_string_repeat1] = STATE(157),
    [sym__comment] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [sym__space] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(522),
  },
  [158] = {
    [sym_static_assignment] = STATE(132),
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_DOT] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(470),
  },
  [159] = {
    [anon_sym_COLON_EQ] = ACTIONS(525),
    [anon_sym_AMP_EQ] = ACTIONS(525),
    [anon_sym_STAR_EQ] = ACTIONS(525),
    [anon_sym_CARET_EQ] = ACTIONS(525),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH_EQ] = ACTIONS(525),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_PERCENT_EQ] = ACTIONS(525),
    [anon_sym_LT_LT_EQ] = ACTIONS(525),
    [anon_sym_PIPE_EQ] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(525),
    [anon_sym_PLUS_EQ] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_DOT] = ACTIONS(525),
    [anon_sym_SLASH_EQ] = ACTIONS(525),
    [anon_sym_GT_GT_EQ] = ACTIONS(525),
    [sym__comment] = ACTIONS(3),
  },
  [160] = {
    [sym__value] = STATE(204),
    [sym__number] = STATE(204),
    [sym_group_expression] = STATE(204),
    [sym__literal] = STATE(204),
    [sym_string] = STATE(204),
    [sym__collection_or_value] = STATE(204),
    [sym_character] = STATE(204),
    [sym_collection] = STATE(204),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(527),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(527),
    [sym_integer] = ACTIONS(529),
    [sym_identifier] = ACTIONS(529),
    [sym_float] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(529),
    [sym_binary] = ACTIONS(527),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(529),
    [sym_long] = ACTIONS(527),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [161] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(531),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(330),
  },
  [162] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(207),
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
    [aux_sym_compound_template_block_repeat1] = STATE(207),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(207),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_while] = STATE(208),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(533),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [163] = {
    [anon_sym_DQUOTE] = ACTIONS(535),
    [sym_float] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [sym_hex] = ACTIONS(535),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(535),
    [sym_null] = ACTIONS(537),
    [sym_integer] = ACTIONS(537),
    [sym_binary] = ACTIONS(535),
    [sym_oct] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(537),
    [anon_sym_LPAREN] = ACTIONS(537),
    [sym_long] = ACTIONS(535),
  },
  [164] = {
    [anon_sym_COLON_EQ] = ACTIONS(539),
    [anon_sym_AMP_AMP] = ACTIONS(539),
    [anon_sym_DASH_EQ] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(541),
    [anon_sym_PERCENT] = ACTIONS(541),
    [anon_sym_GT_EQ] = ACTIONS(539),
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_PLUS_PLUS] = ACTIONS(539),
    [anon_sym_PERCENT_EQ] = ACTIONS(539),
    [anon_sym_LT_LT_EQ] = ACTIONS(539),
    [anon_sym_PIPE_EQ] = ACTIONS(539),
    [anon_sym_COMMA] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_PLUS] = ACTIONS(541),
    [anon_sym_AMP] = ACTIONS(541),
    [anon_sym_PIPE_PIPE] = ACTIONS(539),
    [anon_sym_BANG_EQ] = ACTIONS(539),
    [anon_sym_LT_LT] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(541),
    [anon_sym_LT_EQ] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(541),
    [anon_sym_DASH_DASH] = ACTIONS(541),
    [anon_sym_AMP_EQ] = ACTIONS(539),
    [anon_sym_STAR_EQ] = ACTIONS(539),
    [anon_sym_CARET_EQ] = ACTIONS(539),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(541),
    [anon_sym_STAR] = ACTIONS(541),
    [anon_sym_EQ_EQ] = ACTIONS(539),
    [anon_sym_PLUS_EQ] = ACTIONS(539),
    [anon_sym_CARET] = ACTIONS(541),
    [anon_sym_SLASH] = ACTIONS(541),
    [anon_sym_LT] = ACTIONS(541),
    [anon_sym_SLASH_EQ] = ACTIONS(539),
    [anon_sym_GT_GT_EQ] = ACTIONS(539),
    [sym__comment] = ACTIONS(3),
  },
  [165] = {
    [sym__value] = STATE(209),
    [sym__number] = STATE(209),
    [sym_group_expression] = STATE(209),
    [sym_character] = STATE(209),
    [sym__literal] = STATE(209),
    [sym_string] = STATE(209),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(543),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(543),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(543),
    [sym_null] = ACTIONS(545),
    [sym_integer] = ACTIONS(545),
    [sym_binary] = ACTIONS(543),
    [sym_oct] = ACTIONS(545),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(543),
  },
  [166] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(547),
  },
  [167] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_DOT] = ACTIONS(549),
    [sym__space] = ACTIONS(3),
  },
  [168] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
  },
  [169] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(553),
    [sym_readonly] = ACTIONS(553),
    [anon_sym_s16] = ACTIONS(553),
    [anon_sym_protected] = ACTIONS(553),
    [anon_sym_u16] = ACTIONS(553),
    [anon_sym_s8] = ACTIONS(553),
    [anon_sym_u64] = ACTIONS(553),
    [anon_sym_enum] = ACTIONS(553),
    [anon_sym_i16] = ACTIONS(553),
    [sym_is_declare] = ACTIONS(553),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(553),
    [anon_sym_end] = ACTIONS(553),
    [anon_sym_private] = ACTIONS(553),
    [anon_sym_u8] = ACTIONS(553),
    [anon_sym_f64] = ACTIONS(553),
    [anon_sym_i8] = ACTIONS(553),
    [anon_sym_method] = ACTIONS(553),
    [anon_sym_s32] = ACTIONS(553),
    [anon_sym_publish] = ACTIONS(553),
    [anon_sym_u32] = ACTIONS(553),
    [anon_sym_i64] = ACTIONS(553),
    [anon_sym_f32] = ACTIONS(553),
    [sym_is_external] = ACTIONS(553),
    [anon_sym_i32] = ACTIONS(553),
  },
  [170] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(555),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_COMMA] = ACTIONS(555),
  },
  [171] = {
    [sym_static_assignment] = STATE(212),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(474),
    [anon_sym_COLON_EQ] = ACTIONS(231),
    [sym_readonly] = ACTIONS(474),
    [anon_sym_s16] = ACTIONS(474),
    [anon_sym_protected] = ACTIONS(474),
    [anon_sym_u16] = ACTIONS(474),
    [anon_sym_s8] = ACTIONS(474),
    [anon_sym_u64] = ACTIONS(474),
    [anon_sym_enum] = ACTIONS(474),
    [anon_sym_i16] = ACTIONS(474),
    [sym_is_declare] = ACTIONS(474),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(474),
    [anon_sym_end] = ACTIONS(474),
    [anon_sym_private] = ACTIONS(474),
    [anon_sym_u8] = ACTIONS(474),
    [anon_sym_f64] = ACTIONS(474),
    [anon_sym_i8] = ACTIONS(474),
    [anon_sym_method] = ACTIONS(474),
    [anon_sym_s32] = ACTIONS(474),
    [anon_sym_publish] = ACTIONS(474),
    [anon_sym_u32] = ACTIONS(474),
    [anon_sym_i64] = ACTIONS(474),
    [anon_sym_f32] = ACTIONS(474),
    [sym_is_external] = ACTIONS(474),
    [anon_sym_i32] = ACTIONS(474),
  },
  [172] = {
    [sym_oct] = ACTIONS(559),
    [sym_long] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(559),
    [sym_hex] = ACTIONS(561),
    [anon_sym_if] = ACTIONS(559),
    [anon_sym_switch] = ACTIONS(559),
    [sym_identifier] = ACTIONS(559),
    [anon_sym_end] = ACTIONS(559),
    [anon_sym_private] = ACTIONS(559),
    [anon_sym_u8] = ACTIONS(559),
    [anon_sym_f64] = ACTIONS(559),
    [sym_float] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_i8] = ACTIONS(559),
    [anon_sym_return] = ACTIONS(559),
    [anon_sym_s32] = ACTIONS(559),
    [sym_binary] = ACTIONS(561),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [sym_readonly] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(559),
    [anon_sym_u16] = ACTIONS(559),
    [anon_sym_s8] = ACTIONS(559),
    [anon_sym_u64] = ACTIONS(559),
    [sym_integer] = ACTIONS(559),
    [anon_sym_i16] = ACTIONS(559),
    [sym_double] = ACTIONS(561),
    [anon_sym_section] = ACTIONS(559),
    [anon_sym_goto] = ACTIONS(559),
    [anon_sym_LBRACE] = ACTIONS(561),
    [sym_null] = ACTIONS(559),
    [anon_sym_while] = ACTIONS(559),
    [anon_sym_publish] = ACTIONS(559),
    [anon_sym_u32] = ACTIONS(559),
    [anon_sym_i64] = ACTIONS(559),
    [anon_sym_f32] = ACTIONS(559),
    [anon_sym_LPAREN] = ACTIONS(559),
    [anon_sym_i32] = ACTIONS(559),
  },
  [173] = {
    [sym_return_list] = STATE(214),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
  },
  [174] = {
    [anon_sym_DOT] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [175] = {
    [sym_pointer] = STATE(216),
    [sym_array] = STATE(215),
    [aux_sym_type_repeat2] = STATE(215),
    [aux_sym_type_repeat1] = STATE(216),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [176] = {
    [anon_sym_DOT] = ACTIONS(567),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [177] = {
    [aux_sym__comma_list_types_repeat1] = STATE(218),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(571),
  },
  [178] = {
    [aux_sym_string_repeat1] = STATE(220),
    [sym__comment] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__space] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(575),
  },
  [179] = {
    [sym__escape_sequence] = STATE(221),
    [anon_sym_BSLASHa] = ACTIONS(577),
    [anon_sym_BSLASHt] = ACTIONS(577),
    [anon_sym_BSLASH0] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(577),
    [anon_sym_BSLASHv] = ACTIONS(577),
    [aux_sym_character_token1] = ACTIONS(579),
    [anon_sym_BSLASHf] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASHr] = ACTIONS(577),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(577),
    [anon_sym_BSLASHn] = ACTIONS(577),
  },
  [180] = {
    [sym__value] = STATE(99),
    [sym__number] = STATE(99),
    [sym_group_expression] = STATE(99),
    [sym__comma_list_collection_or_value] = STATE(222),
    [sym__literal] = STATE(99),
    [sym_string] = STATE(99),
    [sym__collection_or_value] = STATE(99),
    [sym_character] = STATE(99),
    [sym_collection] = STATE(99),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(175),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(175),
    [sym_integer] = ACTIONS(177),
    [sym_identifier] = ACTIONS(177),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(177),
    [sym_binary] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [sym_oct] = ACTIONS(177),
    [sym_long] = ACTIONS(175),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [181] = {
    [sym__value] = STATE(223),
    [sym__number] = STATE(223),
    [sym_group_expression] = STATE(223),
    [sym__literal] = STATE(223),
    [sym_string] = STATE(223),
    [sym_assignment_expression] = STATE(224),
    [sym_unary_op] = STATE(225),
    [sym__collection_or_value] = STATE(55),
    [sym_character] = STATE(223),
    [sym_collection] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_hex] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(581),
    [sym_integer] = ACTIONS(583),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_identifier] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [sym_float] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(179),
    [sym_null] = ACTIONS(583),
    [sym_binary] = ACTIONS(581),
    [sym_oct] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(71),
  },
  [182] = {
    [anon_sym_s16] = ACTIONS(585),
    [sym_is_declare] = ACTIONS(585),
    [sym_identifier] = ACTIONS(585),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_end] = ACTIONS(585),
    [anon_sym_private] = ACTIONS(585),
    [anon_sym_u8] = ACTIONS(585),
    [anon_sym_f64] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_DOT] = ACTIONS(587),
    [anon_sym_i8] = ACTIONS(585),
    [anon_sym_s32] = ACTIONS(585),
    [sym_is_external] = ACTIONS(585),
    [anon_sym_function] = ACTIONS(585),
    [sym_readonly] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(585),
    [anon_sym_u16] = ACTIONS(585),
    [anon_sym_s8] = ACTIONS(585),
    [anon_sym_u64] = ACTIONS(585),
    [anon_sym_enum] = ACTIONS(585),
    [anon_sym_i16] = ACTIONS(585),
    [anon_sym_method] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(585),
    [anon_sym_u32] = ACTIONS(585),
    [anon_sym_i64] = ACTIONS(585),
    [anon_sym_f32] = ACTIONS(585),
    [anon_sym_i32] = ACTIONS(585),
  },
  [183] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(589),
  },
  [184] = {
    [anon_sym_DOT] = ACTIONS(591),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [185] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(593),
    [sym__comment] = ACTIONS(3),
  },
  [186] = {
    [aux_sym_enum_definition_repeat1] = STATE(186),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(589),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(595),
  },
  [187] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(559),
    [sym_readonly] = ACTIONS(559),
    [anon_sym_s16] = ACTIONS(559),
    [anon_sym_protected] = ACTIONS(559),
    [anon_sym_u16] = ACTIONS(559),
    [anon_sym_s8] = ACTIONS(559),
    [anon_sym_u64] = ACTIONS(559),
    [anon_sym_enum] = ACTIONS(559),
    [anon_sym_i16] = ACTIONS(559),
    [sym_is_declare] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(559),
    [anon_sym_end] = ACTIONS(559),
    [anon_sym_private] = ACTIONS(559),
    [anon_sym_u8] = ACTIONS(559),
    [anon_sym_f64] = ACTIONS(559),
    [anon_sym_i8] = ACTIONS(559),
    [anon_sym_method] = ACTIONS(559),
    [anon_sym_s32] = ACTIONS(559),
    [anon_sym_publish] = ACTIONS(559),
    [anon_sym_u32] = ACTIONS(559),
    [anon_sym_i64] = ACTIONS(559),
    [anon_sym_f32] = ACTIONS(559),
    [sym_is_external] = ACTIONS(559),
    [anon_sym_i32] = ACTIONS(559),
  },
  [188] = {
    [anon_sym_DOT] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [189] = {
    [sym_return_list] = STATE(229),
    [anon_sym_returns] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
  },
  [190] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(600),
  },
  [191] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(602),
  },
  [192] = {
    [sym_oct] = ACTIONS(541),
    [sym_long] = ACTIONS(539),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(541),
    [sym_hex] = ACTIONS(539),
    [anon_sym_if] = ACTIONS(541),
    [anon_sym_switch] = ACTIONS(541),
    [sym_identifier] = ACTIONS(541),
    [anon_sym_private] = ACTIONS(541),
    [anon_sym_u8] = ACTIONS(541),
    [anon_sym_f64] = ACTIONS(541),
    [sym_float] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_i8] = ACTIONS(541),
    [anon_sym_return] = ACTIONS(541),
    [anon_sym_SQUOTE] = ACTIONS(539),
    [anon_sym_s32] = ACTIONS(541),
    [sym_binary] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [sym_readonly] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(541),
    [anon_sym_u16] = ACTIONS(541),
    [anon_sym_s8] = ACTIONS(541),
    [anon_sym_u64] = ACTIONS(541),
    [sym_integer] = ACTIONS(541),
    [anon_sym_i16] = ACTIONS(541),
    [sym_double] = ACTIONS(539),
    [anon_sym_section] = ACTIONS(541),
    [anon_sym_goto] = ACTIONS(541),
    [anon_sym_LBRACE] = ACTIONS(539),
    [sym_null] = ACTIONS(541),
    [anon_sym_while] = ACTIONS(541),
    [anon_sym_publish] = ACTIONS(541),
    [anon_sym_u32] = ACTIONS(541),
    [anon_sym_i64] = ACTIONS(541),
    [anon_sym_f32] = ACTIONS(541),
    [anon_sym_LPAREN] = ACTIONS(541),
    [anon_sym_i32] = ACTIONS(541),
  },
  [193] = {
    [sym__value] = STATE(230),
    [sym__number] = STATE(230),
    [sym_group_expression] = STATE(230),
    [sym_character] = STATE(230),
    [sym__literal] = STATE(230),
    [sym_string] = STATE(230),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(605),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(605),
    [sym_null] = ACTIONS(607),
    [sym_integer] = ACTIONS(607),
    [sym_binary] = ACTIONS(605),
    [sym_oct] = ACTIONS(607),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(607),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(605),
  },
  [194] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(609),
  },
  [195] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(611),
  },
  [196] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_if] = STATE(233),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(500),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [197] = {
    [anon_sym_DOT] = ACTIONS(613),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [sym_group_expression] = STATE(234),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(157),
  },
  [199] = {
    [anon_sym_DOT] = ACTIONS(615),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [sym_case_statement] = STATE(236),
    [aux_sym_switch_statement_repeat1] = STATE(236),
    [sym_default_statement] = STATE(237),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(508),
  },
  [201] = {
    [sym_end_switch] = STATE(239),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(617),
  },
  [202] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(285),
    [sym_readonly] = ACTIONS(285),
    [anon_sym_s16] = ACTIONS(285),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_u16] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(285),
    [anon_sym_u64] = ACTIONS(285),
    [anon_sym_enum] = ACTIONS(285),
    [anon_sym_i16] = ACTIONS(285),
    [sym_is_declare] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_u8] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(285),
    [anon_sym_i8] = ACTIONS(285),
    [anon_sym_method] = ACTIONS(285),
    [anon_sym_s32] = ACTIONS(285),
    [anon_sym_publish] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(285),
    [anon_sym_i64] = ACTIONS(285),
    [anon_sym_f32] = ACTIONS(285),
    [sym_is_external] = ACTIONS(285),
    [anon_sym_i32] = ACTIONS(285),
  },
  [203] = {
    [anon_sym_DOT] = ACTIONS(619),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(621),
  },
  [205] = {
    [aux_sym__comma_list_collection_or_value_repeat1] = STATE(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(621),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(623),
  },
  [206] = {
    [anon_sym_while] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_end_while] = STATE(242),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(533),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [208] = {
    [anon_sym_DOT] = ACTIONS(628),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [209] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(630),
  },
  [210] = {
    [anon_sym_COLON_EQ] = ACTIONS(632),
    [anon_sym_AMP_AMP] = ACTIONS(632),
    [anon_sym_DASH_EQ] = ACTIONS(632),
    [anon_sym_GT_GT] = ACTIONS(634),
    [anon_sym_PERCENT] = ACTIONS(634),
    [anon_sym_GT_EQ] = ACTIONS(632),
    [anon_sym_RBRACE] = ACTIONS(632),
    [anon_sym_PLUS_PLUS] = ACTIONS(632),
    [anon_sym_PERCENT_EQ] = ACTIONS(632),
    [anon_sym_LT_LT_EQ] = ACTIONS(632),
    [anon_sym_PIPE_EQ] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_PLUS] = ACTIONS(634),
    [anon_sym_AMP] = ACTIONS(634),
    [anon_sym_PIPE_PIPE] = ACTIONS(632),
    [anon_sym_BANG_EQ] = ACTIONS(632),
    [anon_sym_LT_LT] = ACTIONS(634),
    [anon_sym_PIPE] = ACTIONS(634),
    [anon_sym_LT_EQ] = ACTIONS(632),
    [anon_sym_GT] = ACTIONS(634),
    [anon_sym_DASH_DASH] = ACTIONS(634),
    [anon_sym_AMP_EQ] = ACTIONS(632),
    [anon_sym_STAR_EQ] = ACTIONS(632),
    [anon_sym_CARET_EQ] = ACTIONS(632),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(634),
    [anon_sym_STAR] = ACTIONS(634),
    [anon_sym_EQ_EQ] = ACTIONS(632),
    [anon_sym_PLUS_EQ] = ACTIONS(632),
    [anon_sym_CARET] = ACTIONS(634),
    [anon_sym_SLASH] = ACTIONS(634),
    [anon_sym_LT] = ACTIONS(634),
    [anon_sym_SLASH_EQ] = ACTIONS(632),
    [anon_sym_GT_GT_EQ] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [sym_static_assignment] = STATE(212),
    [anon_sym_COLON_EQ] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(476),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(476),
  },
  [212] = {
    [anon_sym_s16] = ACTIONS(636),
    [sym_is_declare] = ACTIONS(636),
    [sym_identifier] = ACTIONS(636),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_end] = ACTIONS(636),
    [anon_sym_private] = ACTIONS(636),
    [anon_sym_u8] = ACTIONS(636),
    [anon_sym_f64] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_DOT] = ACTIONS(638),
    [anon_sym_i8] = ACTIONS(636),
    [anon_sym_s32] = ACTIONS(636),
    [sym_is_external] = ACTIONS(636),
    [anon_sym_function] = ACTIONS(636),
    [sym_readonly] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(636),
    [anon_sym_u16] = ACTIONS(636),
    [anon_sym_s8] = ACTIONS(636),
    [anon_sym_u64] = ACTIONS(636),
    [anon_sym_enum] = ACTIONS(636),
    [anon_sym_i16] = ACTIONS(636),
    [anon_sym_method] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(636),
    [anon_sym_u32] = ACTIONS(636),
    [anon_sym_i64] = ACTIONS(636),
    [anon_sym_f32] = ACTIONS(636),
    [anon_sym_i32] = ACTIONS(636),
  },
  [213] = {
    [sym_oct] = ACTIONS(640),
    [sym_long] = ACTIONS(642),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(640),
    [sym_hex] = ACTIONS(642),
    [anon_sym_if] = ACTIONS(640),
    [anon_sym_switch] = ACTIONS(640),
    [sym_identifier] = ACTIONS(640),
    [anon_sym_end] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_u8] = ACTIONS(640),
    [anon_sym_f64] = ACTIONS(640),
    [sym_float] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_i8] = ACTIONS(640),
    [anon_sym_return] = ACTIONS(640),
    [anon_sym_s32] = ACTIONS(640),
    [sym_binary] = ACTIONS(642),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [sym_readonly] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_u16] = ACTIONS(640),
    [anon_sym_s8] = ACTIONS(640),
    [anon_sym_u64] = ACTIONS(640),
    [sym_integer] = ACTIONS(640),
    [anon_sym_i16] = ACTIONS(640),
    [sym_double] = ACTIONS(642),
    [anon_sym_section] = ACTIONS(640),
    [anon_sym_goto] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(642),
    [sym_null] = ACTIONS(640),
    [anon_sym_while] = ACTIONS(640),
    [anon_sym_publish] = ACTIONS(640),
    [anon_sym_u32] = ACTIONS(640),
    [anon_sym_i64] = ACTIONS(640),
    [anon_sym_f32] = ACTIONS(640),
    [anon_sym_LPAREN] = ACTIONS(640),
    [anon_sym_i32] = ACTIONS(640),
  },
  [214] = {
    [anon_sym_DOT] = ACTIONS(644),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [sym_array] = STATE(245),
    [aux_sym_type_repeat2] = STATE(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(646),
  },
  [216] = {
    [sym_pointer] = STATE(247),
    [sym_array] = STATE(246),
    [aux_sym_type_repeat2] = STATE(246),
    [aux_sym_type_repeat1] = STATE(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(646),
    [anon_sym_STAR] = ACTIONS(121),
  },
  [217] = {
    [sym_primitive_type] = STATE(175),
    [sym_type] = STATE(248),
    [sym__base_type] = STATE(175),
    [anon_sym_s16] = ACTIONS(26),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [anon_sym_i16] = ACTIONS(26),
    [sym_identifier] = ACTIONS(450),
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
  [218] = {
    [aux_sym__comma_list_types_repeat1] = STATE(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(571),
  },
  [219] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(314),
    [sym_readonly] = ACTIONS(314),
    [anon_sym_s16] = ACTIONS(314),
    [anon_sym_protected] = ACTIONS(314),
    [anon_sym_u16] = ACTIONS(314),
    [anon_sym_s8] = ACTIONS(314),
    [anon_sym_u64] = ACTIONS(314),
    [anon_sym_enum] = ACTIONS(314),
    [anon_sym_i16] = ACTIONS(314),
    [sym_is_declare] = ACTIONS(314),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(314),
    [anon_sym_end] = ACTIONS(314),
    [anon_sym_private] = ACTIONS(314),
    [anon_sym_u8] = ACTIONS(314),
    [anon_sym_f64] = ACTIONS(314),
    [anon_sym_i8] = ACTIONS(314),
    [anon_sym_method] = ACTIONS(314),
    [anon_sym_s32] = ACTIONS(314),
    [anon_sym_publish] = ACTIONS(314),
    [anon_sym_u32] = ACTIONS(314),
    [anon_sym_i64] = ACTIONS(314),
    [anon_sym_f32] = ACTIONS(314),
    [sym_is_external] = ACTIONS(314),
    [anon_sym_i32] = ACTIONS(314),
  },
  [220] = {
    [aux_sym_string_repeat1] = STATE(157),
    [sym__comment] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(650),
    [sym__space] = ACTIONS(165),
    [aux_sym_string_token1] = ACTIONS(318),
  },
  [221] = {
    [anon_sym_SQUOTE] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(654),
  },
  [223] = {
    [sym_binary_op] = STATE(254),
    [sym_assignment_post_op] = STATE(106),
    [anon_sym_COLON_EQ] = ACTIONS(187),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_DASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(191),
    [anon_sym_PERCENT_EQ] = ACTIONS(187),
    [anon_sym_LT_LT_EQ] = ACTIONS(187),
    [anon_sym_PIPE_EQ] = ACTIONS(187),
    [anon_sym_RPAREN] = ACTIONS(656),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_AMP] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_BANG_EQ] = ACTIONS(338),
    [anon_sym_LT_LT] = ACTIONS(340),
    [anon_sym_PIPE] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_GT] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(189),
    [anon_sym_AMP_EQ] = ACTIONS(187),
    [anon_sym_STAR_EQ] = ACTIONS(187),
    [anon_sym_CARET_EQ] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [anon_sym_PLUS_EQ] = ACTIONS(187),
    [anon_sym_CARET] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(187),
    [anon_sym_GT_GT_EQ] = ACTIONS(187),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(656),
  },
  [225] = {
    [sym__value] = STATE(255),
    [sym__number] = STATE(255),
    [sym_group_expression] = STATE(255),
    [sym_character] = STATE(255),
    [sym__literal] = STATE(255),
    [sym_string] = STATE(255),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(658),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(658),
    [sym_null] = ACTIONS(660),
    [sym_integer] = ACTIONS(660),
    [sym_binary] = ACTIONS(658),
    [sym_oct] = ACTIONS(660),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(660),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(658),
  },
  [226] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(662),
    [sym_readonly] = ACTIONS(662),
    [anon_sym_s16] = ACTIONS(662),
    [anon_sym_protected] = ACTIONS(662),
    [anon_sym_u16] = ACTIONS(662),
    [anon_sym_s8] = ACTIONS(662),
    [anon_sym_u64] = ACTIONS(662),
    [anon_sym_enum] = ACTIONS(662),
    [anon_sym_i16] = ACTIONS(662),
    [sym_is_declare] = ACTIONS(662),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(662),
    [anon_sym_end] = ACTIONS(662),
    [anon_sym_private] = ACTIONS(662),
    [anon_sym_u8] = ACTIONS(662),
    [anon_sym_f64] = ACTIONS(662),
    [anon_sym_i8] = ACTIONS(662),
    [anon_sym_method] = ACTIONS(662),
    [anon_sym_s32] = ACTIONS(662),
    [anon_sym_publish] = ACTIONS(662),
    [anon_sym_u32] = ACTIONS(662),
    [anon_sym_i64] = ACTIONS(662),
    [anon_sym_f32] = ACTIONS(662),
    [sym_is_external] = ACTIONS(662),
    [anon_sym_i32] = ACTIONS(662),
  },
  [227] = {
    [anon_sym_DOT] = ACTIONS(664),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(640),
    [sym_readonly] = ACTIONS(640),
    [anon_sym_s16] = ACTIONS(640),
    [anon_sym_protected] = ACTIONS(640),
    [anon_sym_u16] = ACTIONS(640),
    [anon_sym_s8] = ACTIONS(640),
    [anon_sym_u64] = ACTIONS(640),
    [anon_sym_enum] = ACTIONS(640),
    [anon_sym_i16] = ACTIONS(640),
    [sym_is_declare] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(640),
    [anon_sym_end] = ACTIONS(640),
    [anon_sym_private] = ACTIONS(640),
    [anon_sym_u8] = ACTIONS(640),
    [anon_sym_f64] = ACTIONS(640),
    [anon_sym_i8] = ACTIONS(640),
    [anon_sym_method] = ACTIONS(640),
    [anon_sym_s32] = ACTIONS(640),
    [anon_sym_publish] = ACTIONS(640),
    [anon_sym_u32] = ACTIONS(640),
    [anon_sym_i64] = ACTIONS(640),
    [anon_sym_f32] = ACTIONS(640),
    [sym_is_external] = ACTIONS(640),
    [anon_sym_i32] = ACTIONS(640),
  },
  [229] = {
    [anon_sym_DOT] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(668),
  },
  [231] = {
    [sym_oct] = ACTIONS(634),
    [sym_long] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(634),
    [sym_hex] = ACTIONS(632),
    [anon_sym_if] = ACTIONS(634),
    [anon_sym_switch] = ACTIONS(634),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_private] = ACTIONS(634),
    [anon_sym_u8] = ACTIONS(634),
    [anon_sym_f64] = ACTIONS(634),
    [sym_float] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_i8] = ACTIONS(634),
    [anon_sym_return] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_s32] = ACTIONS(634),
    [sym_binary] = ACTIONS(632),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym_readonly] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(634),
    [anon_sym_u16] = ACTIONS(634),
    [anon_sym_s8] = ACTIONS(634),
    [anon_sym_u64] = ACTIONS(634),
    [sym_integer] = ACTIONS(634),
    [anon_sym_i16] = ACTIONS(634),
    [sym_double] = ACTIONS(632),
    [anon_sym_section] = ACTIONS(634),
    [anon_sym_goto] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(632),
    [sym_null] = ACTIONS(634),
    [anon_sym_while] = ACTIONS(634),
    [anon_sym_publish] = ACTIONS(634),
    [anon_sym_u32] = ACTIONS(634),
    [anon_sym_i64] = ACTIONS(634),
    [anon_sym_f32] = ACTIONS(634),
    [anon_sym_LPAREN] = ACTIONS(634),
    [anon_sym_i32] = ACTIONS(634),
  },
  [232] = {
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [233] = {
    [anon_sym_DOT] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(674),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(262),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_default] = STATE(261),
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
    [aux_sym_compound_template_block_repeat1] = STATE(262),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(262),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [236] = {
    [sym_case_statement] = STATE(236),
    [aux_sym_switch_statement_repeat1] = STATE(236),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(678),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(681),
  },
  [237] = {
    [sym_end_switch] = STATE(263),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(617),
  },
  [238] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(683),
    [sym__comment] = ACTIONS(3),
  },
  [239] = {
    [anon_sym_DOT] = ACTIONS(685),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(490),
    [sym_readonly] = ACTIONS(490),
    [anon_sym_s16] = ACTIONS(490),
    [anon_sym_protected] = ACTIONS(490),
    [anon_sym_u16] = ACTIONS(490),
    [anon_sym_s8] = ACTIONS(490),
    [anon_sym_u64] = ACTIONS(490),
    [anon_sym_enum] = ACTIONS(490),
    [anon_sym_i16] = ACTIONS(490),
    [sym_is_declare] = ACTIONS(490),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(490),
    [anon_sym_end] = ACTIONS(490),
    [anon_sym_private] = ACTIONS(490),
    [anon_sym_u8] = ACTIONS(490),
    [anon_sym_f64] = ACTIONS(490),
    [anon_sym_i8] = ACTIONS(490),
    [anon_sym_method] = ACTIONS(490),
    [anon_sym_s32] = ACTIONS(490),
    [anon_sym_publish] = ACTIONS(490),
    [anon_sym_u32] = ACTIONS(490),
    [anon_sym_i64] = ACTIONS(490),
    [anon_sym_f32] = ACTIONS(490),
    [sym_is_external] = ACTIONS(490),
    [anon_sym_i32] = ACTIONS(490),
  },
  [241] = {
    [anon_sym_DOT] = ACTIONS(687),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_DOT] = ACTIONS(689),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [243] = {
    [anon_sym_COLON_EQ] = ACTIONS(691),
    [anon_sym_AMP_AMP] = ACTIONS(691),
    [anon_sym_DASH_EQ] = ACTIONS(691),
    [anon_sym_GT_GT] = ACTIONS(693),
    [anon_sym_PERCENT] = ACTIONS(693),
    [anon_sym_GT_EQ] = ACTIONS(691),
    [anon_sym_RBRACE] = ACTIONS(691),
    [anon_sym_PLUS_PLUS] = ACTIONS(691),
    [anon_sym_PERCENT_EQ] = ACTIONS(691),
    [anon_sym_LT_LT_EQ] = ACTIONS(691),
    [anon_sym_PIPE_EQ] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym_PLUS] = ACTIONS(693),
    [anon_sym_AMP] = ACTIONS(693),
    [anon_sym_PIPE_PIPE] = ACTIONS(691),
    [anon_sym_BANG_EQ] = ACTIONS(691),
    [anon_sym_LT_LT] = ACTIONS(693),
    [anon_sym_PIPE] = ACTIONS(693),
    [anon_sym_LT_EQ] = ACTIONS(691),
    [anon_sym_GT] = ACTIONS(693),
    [anon_sym_DASH_DASH] = ACTIONS(693),
    [anon_sym_AMP_EQ] = ACTIONS(691),
    [anon_sym_STAR_EQ] = ACTIONS(691),
    [anon_sym_CARET_EQ] = ACTIONS(691),
    [sym__space] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(693),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_EQ_EQ] = ACTIONS(691),
    [anon_sym_PLUS_EQ] = ACTIONS(691),
    [anon_sym_CARET] = ACTIONS(693),
    [anon_sym_SLASH] = ACTIONS(693),
    [anon_sym_LT] = ACTIONS(693),
    [anon_sym_SLASH_EQ] = ACTIONS(691),
    [anon_sym_GT_GT_EQ] = ACTIONS(691),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [sym_oct] = ACTIONS(695),
    [sym_long] = ACTIONS(697),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(695),
    [sym_hex] = ACTIONS(697),
    [anon_sym_if] = ACTIONS(695),
    [anon_sym_switch] = ACTIONS(695),
    [sym_identifier] = ACTIONS(695),
    [anon_sym_end] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_u8] = ACTIONS(695),
    [anon_sym_f64] = ACTIONS(695),
    [sym_float] = ACTIONS(697),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [anon_sym_i8] = ACTIONS(695),
    [anon_sym_return] = ACTIONS(695),
    [anon_sym_s32] = ACTIONS(695),
    [sym_binary] = ACTIONS(697),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [sym_readonly] = ACTIONS(695),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_u16] = ACTIONS(695),
    [anon_sym_s8] = ACTIONS(695),
    [anon_sym_u64] = ACTIONS(695),
    [sym_integer] = ACTIONS(695),
    [anon_sym_i16] = ACTIONS(695),
    [sym_double] = ACTIONS(697),
    [anon_sym_section] = ACTIONS(695),
    [anon_sym_goto] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(697),
    [sym_null] = ACTIONS(695),
    [anon_sym_while] = ACTIONS(695),
    [anon_sym_publish] = ACTIONS(695),
    [anon_sym_u32] = ACTIONS(695),
    [anon_sym_i64] = ACTIONS(695),
    [anon_sym_f32] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(695),
    [anon_sym_i32] = ACTIONS(695),
  },
  [245] = {
    [sym_array] = STATE(245),
    [aux_sym_type_repeat2] = STATE(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(699),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(699),
  },
  [246] = {
    [sym_array] = STATE(245),
    [aux_sym_type_repeat2] = STATE(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(701),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(701),
  },
  [247] = {
    [sym_pointer] = STATE(247),
    [aux_sym_type_repeat1] = STATE(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_DOT] = ACTIONS(439),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_STAR] = ACTIONS(443),
  },
  [248] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(703),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(703),
  },
  [249] = {
    [aux_sym__comma_list_types_repeat1] = STATE(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(703),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(705),
  },
  [250] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(518),
    [sym_readonly] = ACTIONS(518),
    [anon_sym_s16] = ACTIONS(518),
    [anon_sym_protected] = ACTIONS(518),
    [anon_sym_u16] = ACTIONS(518),
    [anon_sym_s8] = ACTIONS(518),
    [anon_sym_u64] = ACTIONS(518),
    [anon_sym_enum] = ACTIONS(518),
    [anon_sym_i16] = ACTIONS(518),
    [sym_is_declare] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(518),
    [anon_sym_end] = ACTIONS(518),
    [anon_sym_private] = ACTIONS(518),
    [anon_sym_u8] = ACTIONS(518),
    [anon_sym_f64] = ACTIONS(518),
    [anon_sym_i8] = ACTIONS(518),
    [anon_sym_method] = ACTIONS(518),
    [anon_sym_s32] = ACTIONS(518),
    [anon_sym_publish] = ACTIONS(518),
    [anon_sym_u32] = ACTIONS(518),
    [anon_sym_i64] = ACTIONS(518),
    [anon_sym_f32] = ACTIONS(518),
    [sym_is_external] = ACTIONS(518),
    [anon_sym_i32] = ACTIONS(518),
  },
  [251] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(514),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_s16] = ACTIONS(514),
    [anon_sym_protected] = ACTIONS(514),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_s8] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_i16] = ACTIONS(514),
    [sym_is_declare] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(514),
    [anon_sym_end] = ACTIONS(514),
    [anon_sym_private] = ACTIONS(514),
    [anon_sym_u8] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [anon_sym_publish] = ACTIONS(514),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_i64] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [sym_is_external] = ACTIONS(514),
    [anon_sym_i32] = ACTIONS(514),
  },
  [252] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(708),
    [sym_readonly] = ACTIONS(708),
    [anon_sym_s16] = ACTIONS(708),
    [anon_sym_protected] = ACTIONS(708),
    [anon_sym_u16] = ACTIONS(708),
    [anon_sym_s8] = ACTIONS(708),
    [anon_sym_u64] = ACTIONS(708),
    [anon_sym_enum] = ACTIONS(708),
    [anon_sym_i16] = ACTIONS(708),
    [sym_is_declare] = ACTIONS(708),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(708),
    [anon_sym_end] = ACTIONS(708),
    [anon_sym_private] = ACTIONS(708),
    [anon_sym_u8] = ACTIONS(708),
    [anon_sym_f64] = ACTIONS(708),
    [anon_sym_i8] = ACTIONS(708),
    [anon_sym_method] = ACTIONS(708),
    [anon_sym_s32] = ACTIONS(708),
    [anon_sym_publish] = ACTIONS(708),
    [anon_sym_u32] = ACTIONS(708),
    [anon_sym_i64] = ACTIONS(708),
    [anon_sym_f32] = ACTIONS(708),
    [sym_is_external] = ACTIONS(708),
    [anon_sym_i32] = ACTIONS(708),
  },
  [253] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(541),
    [sym_readonly] = ACTIONS(541),
    [anon_sym_s16] = ACTIONS(541),
    [anon_sym_protected] = ACTIONS(541),
    [anon_sym_u16] = ACTIONS(541),
    [anon_sym_s8] = ACTIONS(541),
    [anon_sym_u64] = ACTIONS(541),
    [anon_sym_enum] = ACTIONS(541),
    [anon_sym_i16] = ACTIONS(541),
    [sym_is_declare] = ACTIONS(541),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(541),
    [anon_sym_end] = ACTIONS(541),
    [anon_sym_private] = ACTIONS(541),
    [anon_sym_u8] = ACTIONS(541),
    [anon_sym_f64] = ACTIONS(541),
    [anon_sym_i8] = ACTIONS(541),
    [anon_sym_method] = ACTIONS(541),
    [anon_sym_s32] = ACTIONS(541),
    [anon_sym_publish] = ACTIONS(541),
    [anon_sym_u32] = ACTIONS(541),
    [anon_sym_i64] = ACTIONS(541),
    [anon_sym_f32] = ACTIONS(541),
    [sym_is_external] = ACTIONS(541),
    [anon_sym_i32] = ACTIONS(541),
  },
  [254] = {
    [sym__value] = STATE(265),
    [sym__number] = STATE(265),
    [sym_group_expression] = STATE(265),
    [sym_character] = STATE(265),
    [sym__literal] = STATE(265),
    [sym_string] = STATE(265),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_float] = ACTIONS(710),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [sym_hex] = ACTIONS(710),
    [sym__space] = ACTIONS(3),
    [sym_double] = ACTIONS(710),
    [sym_null] = ACTIONS(712),
    [sym_integer] = ACTIONS(712),
    [sym_binary] = ACTIONS(710),
    [sym_oct] = ACTIONS(712),
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(712),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_long] = ACTIONS(710),
  },
  [255] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(714),
  },
  [256] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(716),
    [sym_readonly] = ACTIONS(716),
    [anon_sym_s16] = ACTIONS(716),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_u16] = ACTIONS(716),
    [anon_sym_s8] = ACTIONS(716),
    [anon_sym_u64] = ACTIONS(716),
    [anon_sym_enum] = ACTIONS(716),
    [anon_sym_i16] = ACTIONS(716),
    [sym_is_declare] = ACTIONS(716),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(716),
    [anon_sym_end] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_u8] = ACTIONS(716),
    [anon_sym_f64] = ACTIONS(716),
    [anon_sym_i8] = ACTIONS(716),
    [anon_sym_method] = ACTIONS(716),
    [anon_sym_s32] = ACTIONS(716),
    [anon_sym_publish] = ACTIONS(716),
    [anon_sym_u32] = ACTIONS(716),
    [anon_sym_i64] = ACTIONS(716),
    [anon_sym_f32] = ACTIONS(716),
    [sym_is_external] = ACTIONS(716),
    [anon_sym_i32] = ACTIONS(716),
  },
  [257] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(695),
    [sym_readonly] = ACTIONS(695),
    [anon_sym_s16] = ACTIONS(695),
    [anon_sym_protected] = ACTIONS(695),
    [anon_sym_u16] = ACTIONS(695),
    [anon_sym_s8] = ACTIONS(695),
    [anon_sym_u64] = ACTIONS(695),
    [anon_sym_enum] = ACTIONS(695),
    [anon_sym_i16] = ACTIONS(695),
    [sym_is_declare] = ACTIONS(695),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(695),
    [anon_sym_end] = ACTIONS(695),
    [anon_sym_private] = ACTIONS(695),
    [anon_sym_u8] = ACTIONS(695),
    [anon_sym_f64] = ACTIONS(695),
    [anon_sym_i8] = ACTIONS(695),
    [anon_sym_method] = ACTIONS(695),
    [anon_sym_s32] = ACTIONS(695),
    [anon_sym_publish] = ACTIONS(695),
    [anon_sym_u32] = ACTIONS(695),
    [anon_sym_i64] = ACTIONS(695),
    [anon_sym_f32] = ACTIONS(695),
    [sym_is_external] = ACTIONS(695),
    [anon_sym_i32] = ACTIONS(695),
  },
  [258] = {
    [sym_oct] = ACTIONS(693),
    [sym_long] = ACTIONS(691),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(693),
    [sym_hex] = ACTIONS(691),
    [anon_sym_if] = ACTIONS(693),
    [anon_sym_switch] = ACTIONS(693),
    [sym_identifier] = ACTIONS(693),
    [anon_sym_private] = ACTIONS(693),
    [anon_sym_u8] = ACTIONS(693),
    [anon_sym_f64] = ACTIONS(693),
    [sym_float] = ACTIONS(691),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym_i8] = ACTIONS(693),
    [anon_sym_return] = ACTIONS(693),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [anon_sym_s32] = ACTIONS(693),
    [sym_binary] = ACTIONS(691),
    [anon_sym_DQUOTE] = ACTIONS(691),
    [sym_readonly] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(693),
    [anon_sym_u16] = ACTIONS(693),
    [anon_sym_s8] = ACTIONS(693),
    [anon_sym_u64] = ACTIONS(693),
    [sym_integer] = ACTIONS(693),
    [anon_sym_i16] = ACTIONS(693),
    [sym_double] = ACTIONS(691),
    [anon_sym_section] = ACTIONS(693),
    [anon_sym_goto] = ACTIONS(693),
    [anon_sym_LBRACE] = ACTIONS(691),
    [sym_null] = ACTIONS(693),
    [anon_sym_while] = ACTIONS(693),
    [anon_sym_publish] = ACTIONS(693),
    [anon_sym_u32] = ACTIONS(693),
    [anon_sym_i64] = ACTIONS(693),
    [anon_sym_f32] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(693),
    [anon_sym_i32] = ACTIONS(693),
  },
  [259] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(269),
    [sym_end_case] = STATE(268),
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
    [aux_sym_compound_template_block_repeat1] = STATE(269),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(269),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(718),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [260] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(720),
  },
  [261] = {
    [anon_sym_DOT] = ACTIONS(722),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [262] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
    [sym__variable_statement] = STATE(52),
    [sym_assignment_expression] = STATE(53),
    [sym_end_default] = STATE(272),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [263] = {
    [anon_sym_DOT] = ACTIONS(724),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_DOT] = ACTIONS(726),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [265] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(728),
  },
  [266] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(634),
    [sym_readonly] = ACTIONS(634),
    [anon_sym_s16] = ACTIONS(634),
    [anon_sym_protected] = ACTIONS(634),
    [anon_sym_u16] = ACTIONS(634),
    [anon_sym_s8] = ACTIONS(634),
    [anon_sym_u64] = ACTIONS(634),
    [anon_sym_enum] = ACTIONS(634),
    [anon_sym_i16] = ACTIONS(634),
    [sym_is_declare] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_end] = ACTIONS(634),
    [anon_sym_private] = ACTIONS(634),
    [anon_sym_u8] = ACTIONS(634),
    [anon_sym_f64] = ACTIONS(634),
    [anon_sym_i8] = ACTIONS(634),
    [anon_sym_method] = ACTIONS(634),
    [anon_sym_s32] = ACTIONS(634),
    [anon_sym_publish] = ACTIONS(634),
    [anon_sym_u32] = ACTIONS(634),
    [anon_sym_i64] = ACTIONS(634),
    [anon_sym_f32] = ACTIONS(634),
    [sym_is_external] = ACTIONS(634),
    [anon_sym_i32] = ACTIONS(634),
  },
  [267] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(730),
  },
  [268] = {
    [anon_sym_DOT] = ACTIONS(732),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [269] = {
    [sym__value] = STATE(51),
    [sym__number] = STATE(51),
    [sym_variable_definition] = STATE(52),
    [sym_section_statement] = STATE(52),
    [sym_single_line_if_statement] = STATE(112),
    [sym_end_case] = STATE(276),
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
    [aux_sym_compound_template_block_repeat1] = STATE(112),
    [sym__literal] = STATE(51),
    [sym_type] = STATE(59),
    [sym_string] = STATE(51),
    [sym__statement] = STATE(112),
    [sym_if_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym_expression_statement] = STATE(52),
    [sym_collection] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_i32] = ACTIONS(26),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(26),
    [sym_hex] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(77),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(718),
    [anon_sym_private] = ACTIONS(113),
    [anon_sym_u8] = ACTIONS(26),
    [anon_sym_f64] = ACTIONS(26),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_i8] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(92),
    [anon_sym_s32] = ACTIONS(26),
    [sym_binary] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_readonly] = ACTIONS(115),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(113),
    [anon_sym_u16] = ACTIONS(26),
    [anon_sym_s8] = ACTIONS(26),
    [anon_sym_u64] = ACTIONS(26),
    [sym_integer] = ACTIONS(99),
    [anon_sym_i16] = ACTIONS(26),
    [sym_double] = ACTIONS(75),
    [anon_sym_section] = ACTIONS(101),
    [anon_sym_goto] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [anon_sym_while] = ACTIONS(107),
    [anon_sym_publish] = ACTIONS(113),
    [sym_oct] = ACTIONS(99),
    [anon_sym_u32] = ACTIONS(26),
    [sym_long] = ACTIONS(75),
    [anon_sym_i64] = ACTIONS(26),
    [anon_sym_f32] = ACTIONS(26),
  },
  [270] = {
    [anon_sym_DOT] = ACTIONS(734),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [271] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(736),
  },
  [272] = {
    [anon_sym_DOT] = ACTIONS(738),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(693),
    [sym_readonly] = ACTIONS(693),
    [anon_sym_s16] = ACTIONS(693),
    [anon_sym_protected] = ACTIONS(693),
    [anon_sym_u16] = ACTIONS(693),
    [anon_sym_s8] = ACTIONS(693),
    [anon_sym_u64] = ACTIONS(693),
    [anon_sym_enum] = ACTIONS(693),
    [anon_sym_i16] = ACTIONS(693),
    [sym_is_declare] = ACTIONS(693),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(693),
    [anon_sym_end] = ACTIONS(693),
    [anon_sym_private] = ACTIONS(693),
    [anon_sym_u8] = ACTIONS(693),
    [anon_sym_f64] = ACTIONS(693),
    [anon_sym_i8] = ACTIONS(693),
    [anon_sym_method] = ACTIONS(693),
    [anon_sym_s32] = ACTIONS(693),
    [anon_sym_publish] = ACTIONS(693),
    [anon_sym_u32] = ACTIONS(693),
    [anon_sym_i64] = ACTIONS(693),
    [anon_sym_f32] = ACTIONS(693),
    [sym_is_external] = ACTIONS(693),
    [anon_sym_i32] = ACTIONS(693),
  },
  [274] = {
    [anon_sym_DOT] = ACTIONS(740),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [275] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(742),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(742),
  },
  [276] = {
    [anon_sym_DOT] = ACTIONS(744),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [277] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(746),
  },
  [278] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(748),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(748),
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
  [50] = {.count = 1, .reusable = true}, SHIFT(26),
  [52] = {.count = 1, .reusable = true}, SHIFT(32),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [56] = {.count = 1, .reusable = true}, SHIFT(30),
  [58] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [60] = {.count = 1, .reusable = true}, SHIFT(31),
  [62] = {.count = 1, .reusable = true}, SHIFT(35),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [66] = {.count = 1, .reusable = true}, SHIFT(36),
  [68] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(10),
  [71] = {.count = 1, .reusable = false}, SHIFT(50),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(51),
  [77] = {.count = 1, .reusable = false}, SHIFT(37),
  [79] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(38),
  [82] = {.count = 1, .reusable = false}, SHIFT(39),
  [84] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(40),
  [87] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(41),
  [90] = {.count = 1, .reusable = true}, SHIFT(42),
  [92] = {.count = 1, .reusable = false}, SHIFT(43),
  [94] = {.count = 1, .reusable = true}, SHIFT(44),
  [96] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(45),
  [99] = {.count = 1, .reusable = false}, SHIFT(51),
  [101] = {.count = 1, .reusable = false}, SHIFT(46),
  [103] = {.count = 1, .reusable = false}, SHIFT(47),
  [105] = {.count = 1, .reusable = true}, SHIFT(48),
  [107] = {.count = 1, .reusable = false}, SHIFT(49),
  [109] = {.count = 1, .reusable = false}, SHIFT(38),
  [111] = {.count = 1, .reusable = false}, SHIFT(60),
  [113] = {.count = 1, .reusable = false}, SHIFT(41),
  [115] = {.count = 1, .reusable = false}, SHIFT(45),
  [117] = {.count = 1, .reusable = true}, SHIFT(64),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(63),
  [123] = {.count = 1, .reusable = false}, SHIFT(67),
  [125] = {.count = 1, .reusable = false}, SHIFT(69),
  [127] = {.count = 1, .reusable = false}, SHIFT(70),
  [129] = {.count = 1, .reusable = false}, SHIFT(73),
  [131] = {.count = 1, .reusable = false}, SHIFT(74),
  [133] = {.count = 1, .reusable = false}, SHIFT(76),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [137] = {.count = 1, .reusable = false}, SHIFT(78),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(79),
  [145] = {.count = 1, .reusable = true}, SHIFT(82),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 5),
  [151] = {.count = 1, .reusable = true}, SHIFT(85),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(50),
  [159] = {.count = 1, .reusable = false}, SHIFT(88),
  [161] = {.count = 1, .reusable = true}, SHIFT(90),
  [163] = {.count = 1, .reusable = false}, SHIFT(90),
  [165] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [167] = {.count = 1, .reusable = true}, SHIFT(93),
  [169] = {.count = 1, .reusable = false}, SHIFT(94),
  [171] = {.count = 1, .reusable = false}, SHIFT(96),
  [173] = {.count = 1, .reusable = false}, SHIFT(97),
  [175] = {.count = 1, .reusable = true}, SHIFT(99),
  [177] = {.count = 1, .reusable = false}, SHIFT(99),
  [179] = {.count = 1, .reusable = false}, SHIFT(101),
  [181] = {.count = 1, .reusable = true}, SHIFT(102),
  [183] = {.count = 1, .reusable = false}, SHIFT(102),
  [185] = {.count = 1, .reusable = true}, SHIFT(101),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [189] = {.count = 1, .reusable = false}, SHIFT(105),
  [191] = {.count = 1, .reusable = true}, SHIFT(105),
  [193] = {.count = 1, .reusable = true}, SHIFT(107),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 2),
  [199] = {.count = 1, .reusable = true}, SHIFT(108),
  [201] = {.count = 1, .reusable = false}, SHIFT(110),
  [203] = {.count = 1, .reusable = false}, SHIFT(40),
  [205] = {.count = 1, .reusable = false}, SHIFT(113),
  [207] = {.count = 1, .reusable = true}, SHIFT(114),
  [209] = {.count = 1, .reusable = true}, SHIFT(115),
  [211] = {.count = 1, .reusable = true}, SHIFT(116),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [217] = {.count = 1, .reusable = true}, SHIFT(118),
  [219] = {.count = 1, .reusable = true}, SHIFT(119),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [223] = {.count = 1, .reusable = false}, SHIFT(124),
  [225] = {.count = 1, .reusable = true}, SHIFT(125),
  [227] = {.count = 1, .reusable = true}, SHIFT(126),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(129),
  [233] = {.count = 1, .reusable = true}, SHIFT(131),
  [235] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(8),
  [238] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [241] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [244] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(11),
  [247] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(12),
  [250] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(13),
  [253] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(16),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [263] = {.count = 1, .reusable = true}, SHIFT(133),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [267] = {.count = 1, .reusable = true}, SHIFT(136),
  [269] = {.count = 1, .reusable = true}, SHIFT(135),
  [271] = {.count = 1, .reusable = true}, SHIFT(138),
  [273] = {.count = 1, .reusable = false}, SHIFT(141),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(142),
  [283] = {.count = 1, .reusable = true}, SHIFT(144),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 3),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_repeat1, 2), SHIFT_REPEAT(30),
  [292] = {.count = 1, .reusable = true}, SHIFT(145),
  [294] = {.count = 1, .reusable = true}, SHIFT(146),
  [296] = {.count = 1, .reusable = false}, SHIFT(146),
  [298] = {.count = 1, .reusable = true}, SHIFT(149),
  [300] = {.count = 1, .reusable = true}, SHIFT(151),
  [302] = {.count = 1, .reusable = true}, SHIFT(152),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_template, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(155),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [316] = {.count = 1, .reusable = true}, SHIFT(156),
  [318] = {.count = 1, .reusable = false}, SHIFT(157),
  [320] = {.count = 1, .reusable = false}, SHIFT(158),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [326] = {.count = 1, .reusable = true}, SHIFT(159),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 1),
  [330] = {.count = 1, .reusable = true}, SHIFT(160),
  [332] = {.count = 1, .reusable = true}, SHIFT(162),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [338] = {.count = 1, .reusable = true}, SHIFT(163),
  [340] = {.count = 1, .reusable = false}, SHIFT(163),
  [342] = {.count = 1, .reusable = true}, SHIFT(164),
  [344] = {.count = 1, .reusable = true}, SHIFT(166),
  [346] = {.count = 1, .reusable = false}, SHIFT(166),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [360] = {.count = 1, .reusable = true}, SHIFT(167),
  [362] = {.count = 1, .reusable = false}, SHIFT(167),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template_block, 3),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(51),
  [369] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(51),
  [372] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(10),
  [375] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(37),
  [378] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(39),
  [381] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(38),
  [384] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2),
  [386] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(41),
  [389] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(42),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(43),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(44),
  [398] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(45),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(46),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(47),
  [407] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(48),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(49),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_template_block_repeat1, 2), SHIFT_REPEAT(50),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [424] = {.count = 1, .reusable = true}, SHIFT(169),
  [426] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [428] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [430] = {.count = 1, .reusable = true}, SHIFT(170),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(64),
  [435] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [441] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(63),
  [446] = {.count = 1, .reusable = false}, SHIFT(171),
  [448] = {.count = 1, .reusable = true}, SHIFT(172),
  [450] = {.count = 1, .reusable = false}, SHIFT(175),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [458] = {.count = 1, .reusable = true}, SHIFT(178),
  [460] = {.count = 1, .reusable = true}, SHIFT(182),
  [462] = {.count = 1, .reusable = false}, SHIFT(182),
  [464] = {.count = 1, .reusable = true}, SHIFT(179),
  [466] = {.count = 1, .reusable = true}, SHIFT(180),
  [468] = {.count = 1, .reusable = false}, SHIFT(181),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 6),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [480] = {.count = 1, .reusable = false}, SHIFT(184),
  [482] = {.count = 1, .reusable = true}, SHIFT(185),
  [484] = {.count = 1, .reusable = true}, SHIFT(187),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_compound_template, 4),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_compound_template, 4),
  [494] = {.count = 1, .reusable = true}, SHIFT(192),
  [496] = {.count = 1, .reusable = true}, SHIFT(194),
  [498] = {.count = 1, .reusable = false}, SHIFT(194),
  [500] = {.count = 1, .reusable = false}, SHIFT(195),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [506] = {.count = 1, .reusable = true}, SHIFT(198),
  [508] = {.count = 1, .reusable = true}, SHIFT(199),
  [510] = {.count = 1, .reusable = true}, SHIFT(202),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(157),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [527] = {.count = 1, .reusable = true}, SHIFT(204),
  [529] = {.count = 1, .reusable = false}, SHIFT(204),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_collection_or_value, 2),
  [533] = {.count = 1, .reusable = false}, SHIFT(206),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [543] = {.count = 1, .reusable = true}, SHIFT(209),
  [545] = {.count = 1, .reusable = false}, SHIFT(209),
  [547] = {.count = 1, .reusable = true}, SHIFT(210),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [551] = {.count = 1, .reusable = false}, SHIFT(211),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [563] = {.count = 1, .reusable = true}, SHIFT(213),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [571] = {.count = 1, .reusable = true}, SHIFT(217),
  [573] = {.count = 1, .reusable = true}, SHIFT(219),
  [575] = {.count = 1, .reusable = false}, SHIFT(220),
  [577] = {.count = 1, .reusable = true}, SHIFT(221),
  [579] = {.count = 1, .reusable = false}, SHIFT(221),
  [581] = {.count = 1, .reusable = true}, SHIFT(223),
  [583] = {.count = 1, .reusable = false}, SHIFT(223),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [589] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [591] = {.count = 1, .reusable = true}, SHIFT(226),
  [593] = {.count = 1, .reusable = false}, SHIFT(227),
  [595] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(135),
  [598] = {.count = 1, .reusable = true}, SHIFT(228),
  [600] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(142),
  [605] = {.count = 1, .reusable = true}, SHIFT(230),
  [607] = {.count = 1, .reusable = false}, SHIFT(230),
  [609] = {.count = 1, .reusable = true}, SHIFT(231),
  [611] = {.count = 1, .reusable = true}, SHIFT(232),
  [613] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 4),
  [615] = {.count = 1, .reusable = true}, SHIFT(235),
  [617] = {.count = 1, .reusable = true}, SHIFT(238),
  [619] = {.count = 1, .reusable = true}, SHIFT(240),
  [621] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2),
  [623] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_collection_or_value_repeat1, 2), SHIFT_REPEAT(160),
  [626] = {.count = 1, .reusable = true}, SHIFT(241),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 4),
  [630] = {.count = 1, .reusable = true}, SHIFT(243),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [644] = {.count = 1, .reusable = true}, SHIFT(244),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [650] = {.count = 1, .reusable = true}, SHIFT(250),
  [652] = {.count = 1, .reusable = true}, SHIFT(251),
  [654] = {.count = 1, .reusable = true}, SHIFT(252),
  [656] = {.count = 1, .reusable = true}, SHIFT(253),
  [658] = {.count = 1, .reusable = true}, SHIFT(255),
  [660] = {.count = 1, .reusable = false}, SHIFT(255),
  [662] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [664] = {.count = 1, .reusable = true}, SHIFT(256),
  [666] = {.count = 1, .reusable = true}, SHIFT(257),
  [668] = {.count = 1, .reusable = true}, SHIFT(258),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 5),
  [674] = {.count = 1, .reusable = true}, SHIFT(259),
  [676] = {.count = 1, .reusable = false}, SHIFT(260),
  [678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2), SHIFT_REPEAT(198),
  [681] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_repeat1, 2),
  [683] = {.count = 1, .reusable = true}, SHIFT(264),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 5),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [695] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [699] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [703] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(217),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [710] = {.count = 1, .reusable = true}, SHIFT(265),
  [712] = {.count = 1, .reusable = false}, SHIFT(265),
  [714] = {.count = 1, .reusable = true}, SHIFT(266),
  [716] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [718] = {.count = 1, .reusable = false}, SHIFT(267),
  [720] = {.count = 1, .reusable = true}, SHIFT(270),
  [722] = {.count = 1, .reusable = true}, SHIFT(271),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 6),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [728] = {.count = 1, .reusable = true}, SHIFT(273),
  [730] = {.count = 1, .reusable = true}, SHIFT(274),
  [732] = {.count = 1, .reusable = true}, SHIFT(275),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 4),
  [738] = {.count = 1, .reusable = true}, SHIFT(277),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 5),
  [744] = {.count = 1, .reusable = true}, SHIFT(278),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement, 5),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement, 6),
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
