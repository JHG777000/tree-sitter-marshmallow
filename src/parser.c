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
#define STATE_COUNT 381
#define SYMBOL_COUNT 189
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_ = 1,
  sym__space = 2,
  sym__comment = 3,
  anon_sym_COMMA = 4,
  sym_readonly = 5,
  anon_sym_private = 6,
  anon_sym_protected = 7,
  anon_sym_publish = 8,
  anon_sym_end = 9,
  anon_sym_module = 10,
  anon_sym_function = 11,
  anon_sym_method = 12,
  anon_sym_if = 13,
  anon_sym_while = 14,
  anon_sym_switch = 15,
  anon_sym_case = 16,
  anon_sym_default = 17,
  anon_sym_DOT = 18,
  anon_sym_enum = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_returns = 22,
  anon_sym_i8 = 23,
  anon_sym_i16 = 24,
  anon_sym_i32 = 25,
  anon_sym_i64 = 26,
  anon_sym_u8 = 27,
  anon_sym_u16 = 28,
  anon_sym_u32 = 29,
  anon_sym_u64 = 30,
  anon_sym_f32 = 31,
  anon_sym_f64 = 32,
  anon_sym_s8 = 33,
  anon_sym_s16 = 34,
  anon_sym_s32 = 35,
  anon_sym_STAR = 36,
  anon_sym_LBRACK = 37,
  anon_sym_RBRACK = 38,
  sym_is_declare = 39,
  sym_is_external = 40,
  anon_sym_goto = 41,
  anon_sym_section = 42,
  anon_sym_COLON_EQ = 43,
  anon_sym_return = 44,
  anon_sym_DASH = 45,
  anon_sym_AMP = 46,
  anon_sym_BANG = 47,
  anon_sym_TILDE = 48,
  anon_sym_PLUS = 49,
  anon_sym_SLASH = 50,
  anon_sym_PERCENT = 51,
  anon_sym_PIPE = 52,
  anon_sym_CARET = 53,
  anon_sym_GT = 54,
  anon_sym_LT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_LT_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_EQ_EQ = 59,
  anon_sym_AMP_AMP = 60,
  anon_sym_PIPE_PIPE = 61,
  anon_sym_GT_GT = 62,
  anon_sym_LT_LT = 63,
  anon_sym_PLUS_EQ = 64,
  anon_sym_DASH_EQ = 65,
  anon_sym_STAR_EQ = 66,
  anon_sym_SLASH_EQ = 67,
  anon_sym_PERCENT_EQ = 68,
  anon_sym_AMP_EQ = 69,
  anon_sym_PIPE_EQ = 70,
  anon_sym_CARET_EQ = 71,
  anon_sym_GT_GT_EQ = 72,
  anon_sym_LT_LT_EQ = 73,
  anon_sym_PLUS_PLUS = 74,
  anon_sym_DASH_DASH = 75,
  anon_sym_LBRACE = 76,
  anon_sym_RBRACE = 77,
  sym_null = 78,
  sym_identifier = 79,
  anon_sym_DQUOTE = 80,
  aux_sym_string_token1 = 81,
  anon_sym_SQUOTE = 82,
  aux_sym_character_token1 = 83,
  anon_sym_BSLASH_BSLASH = 84,
  anon_sym_BSLASH0 = 85,
  anon_sym_BSLASHa = 86,
  anon_sym_BSLASHb = 87,
  anon_sym_BSLASHf = 88,
  anon_sym_BSLASHn = 89,
  anon_sym_BSLASHr = 90,
  anon_sym_BSLASHt = 91,
  anon_sym_BSLASHv = 92,
  sym_oct = 93,
  sym_integer = 94,
  sym_long = 95,
  sym_float = 96,
  sym_double = 97,
  sym_hex = 98,
  sym_binary = 99,
  sym_source_file = 100,
  sym_sentences = 101,
  sym__comma_list_variables = 102,
  sym__comma_list_assignment_or_collection_or_value = 103,
  sym__comma_list_types = 104,
  sym_access_control = 105,
  sym_end_module = 106,
  sym_end_function = 107,
  sym_end_method = 108,
  sym_end_if = 109,
  sym_end_while = 110,
  sym_end_switch = 111,
  sym_end_case = 112,
  sym_end_default = 113,
  sym__end_function = 114,
  sym__start_module_definition = 115,
  sym_start_module_definition = 116,
  sym_sentence = 117,
  sym_module_definition = 118,
  sym__definitions = 119,
  sym_compound_macro_block = 120,
  sym_end_compound_macro = 121,
  sym_compound_macro = 122,
  sym__enum_element = 123,
  sym_enum_definition = 124,
  sym_is_function = 125,
  sym_is_method = 126,
  sym_function_signature = 127,
  sym_function_definition = 128,
  sym_variable_definition = 129,
  sym_parameter_list = 130,
  sym_return_list = 131,
  sym_type = 132,
  sym__base_type = 133,
  sym_primitive_type = 134,
  sym_pointer = 135,
  sym_array = 136,
  sym_declaration_definition = 137,
  sym__statement = 138,
  sym__control_flow_statement = 139,
  sym__control_flow_statement_without_block = 140,
  sym_goto_statement = 141,
  sym_section_statement = 142,
  sym_single_line_if_statement = 143,
  sym_if_statement = 144,
  sym__if_statement = 145,
  sym_if_statement_with_block = 146,
  sym_while_statement = 147,
  sym__while_statement = 148,
  sym_while_statement_with_block = 149,
  sym_switch_statement = 150,
  sym__switch_statement = 151,
  sym_switch_statement_with_block = 152,
  sym__case_statement = 153,
  sym_case_statement_with_block = 154,
  sym__default_statement = 155,
  sym_default_statement_with_block = 156,
  sym__variable_statement = 157,
  sym_static_assignment = 158,
  sym_expression_statement = 159,
  sym_return_statement = 160,
  sym_group_expression = 161,
  sym_assignment_expression = 162,
  sym_unary_op = 163,
  sym_binary_op = 164,
  sym_assignment_op = 165,
  sym_assignment_post_op = 166,
  sym__assignment_or_collection_or_value = 167,
  sym__collection_or_value = 168,
  sym_collection = 169,
  sym__value = 170,
  sym__literal = 171,
  sym_string = 172,
  sym_character = 173,
  sym__escape_sequence = 174,
  sym__number = 175,
  aux_sym_source_file_repeat1 = 176,
  aux_sym_sentences_repeat1 = 177,
  aux_sym__comma_list_variables_repeat1 = 178,
  aux_sym__comma_list_assignment_or_collection_or_value_repeat1 = 179,
  aux_sym__comma_list_types_repeat1 = 180,
  aux_sym_module_definition_repeat1 = 181,
  aux_sym_compound_macro_block_repeat1 = 182,
  aux_sym_compound_macro_repeat1 = 183,
  aux_sym_enum_definition_repeat1 = 184,
  aux_sym_type_repeat1 = 185,
  aux_sym_type_repeat2 = 186,
  aux_sym_switch_statement_with_block_repeat1 = 187,
  aux_sym_string_repeat1 = 188,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = "​",
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
  [sym_sentences] = "sentences",
  [sym__comma_list_variables] = "_comma_list_variables",
  [sym__comma_list_assignment_or_collection_or_value] = "_comma_list_assignment_or_collection_or_value",
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
  [sym__start_module_definition] = "_start_module_definition",
  [sym_start_module_definition] = "start_module_definition",
  [sym_sentence] = "sentence",
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
  [sym__control_flow_statement_without_block] = "_control_flow_statement_without_block",
  [sym_goto_statement] = "goto_statement",
  [sym_section_statement] = "section_statement",
  [sym_single_line_if_statement] = "single_line_if_statement",
  [sym_if_statement] = "if_statement",
  [sym__if_statement] = "_if_statement",
  [sym_if_statement_with_block] = "if_statement_with_block",
  [sym_while_statement] = "while_statement",
  [sym__while_statement] = "_while_statement",
  [sym_while_statement_with_block] = "while_statement_with_block",
  [sym_switch_statement] = "switch_statement",
  [sym__switch_statement] = "_switch_statement",
  [sym_switch_statement_with_block] = "switch_statement_with_block",
  [sym__case_statement] = "_case_statement",
  [sym_case_statement_with_block] = "case_statement_with_block",
  [sym__default_statement] = "_default_statement",
  [sym_default_statement_with_block] = "default_statement_with_block",
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
  [aux_sym_sentences_repeat1] = "sentences_repeat1",
  [aux_sym__comma_list_variables_repeat1] = "_comma_list_variables_repeat1",
  [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = "_comma_list_assignment_or_collection_or_value_repeat1",
  [aux_sym__comma_list_types_repeat1] = "_comma_list_types_repeat1",
  [aux_sym_module_definition_repeat1] = "module_definition_repeat1",
  [aux_sym_compound_macro_block_repeat1] = "compound_macro_block_repeat1",
  [aux_sym_compound_macro_repeat1] = "compound_macro_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_type_repeat2] = "type_repeat2",
  [aux_sym_switch_statement_with_block_repeat1] = "switch_statement_with_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_sentences] = {
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
  [sym__start_module_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_start_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
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
  [sym__control_flow_statement_without_block] = {
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
  [sym__if_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement_with_block] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__while_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_while_statement_with_block] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__switch_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_switch_statement_with_block] = {
    .visible = true,
    .named = true,
  },
  [sym__case_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_case_statement_with_block] = {
    .visible = true,
    .named = true,
  },
  [sym__default_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_default_statement_with_block] = {
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
  [aux_sym_sentences_repeat1] = {
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
  [aux_sym_switch_statement_with_block_repeat1] = {
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
      if (lookahead == 8203)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (lookahead != 0)
        ADVANCE(44);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(47);
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '.')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'l')
        ADVANCE(61);
      if (lookahead == 'x')
        ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(64);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(69);
      if (lookahead == '>')
        ADVANCE(70);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '0')
        ADVANCE(71);
      if (lookahead == '\\')
        ADVANCE(72);
      if (lookahead == 'a')
        ADVANCE(73);
      if (lookahead == 'b')
        ADVANCE(74);
      if (lookahead == 'f')
        ADVANCE(75);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 'r')
        ADVANCE(77);
      if (lookahead == 't')
        ADVANCE(78);
      if (lookahead == 'v')
        ADVANCE(79);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(80);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(82);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'n')
        ADVANCE(83);
      if (lookahead == 'x')
        ADVANCE(84);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '3')
        ADVANCE(85);
      if (lookahead == '6')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'o')
        ADVANCE(88);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(89);
      if (lookahead == '3')
        ADVANCE(90);
      if (lookahead == '6')
        ADVANCE(91);
      if (lookahead == '8')
        ADVANCE(92);
      if (lookahead == 'f')
        ADVANCE(93);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'u')
        ADVANCE(96);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'r')
        ADVANCE(97);
      if (lookahead == 'u')
        ADVANCE(98);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'e')
        ADVANCE(99);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(100);
      if (lookahead == '3')
        ADVANCE(101);
      if (lookahead == '8')
        ADVANCE(102);
      if (lookahead == 'e')
        ADVANCE(103);
      if (lookahead == 'w')
        ADVANCE(104);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '1')
        ADVANCE(105);
      if (lookahead == '3')
        ADVANCE(106);
      if (lookahead == '6')
        ADVANCE(107);
      if (lookahead == '8')
        ADVANCE(108);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'h')
        ADVANCE(109);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '|')
        ADVANCE(111);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'l')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      END_STATE();
    case 50:
      if (lookahead == ')')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 53:
      if (lookahead == '-')
        ADVANCE(115);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 57:
      if (lookahead == '*')
        ADVANCE(116);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 60:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(117);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'l')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_oct);
      if (lookahead == 'l')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH0);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHa);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHn);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHr);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASHt);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHv);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 81:
      if (lookahead == 's')
        ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'c')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'd')
        ADVANCE(124);
      if (lookahead == 'u')
        ADVANCE(125);
      END_STATE();
    case 84:
      if (lookahead == 't')
        ADVANCE(126);
      END_STATE();
    case 85:
      if (lookahead == '2')
        ADVANCE(127);
      END_STATE();
    case 86:
      if (lookahead == '4')
        ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'n')
        ADVANCE(129);
      END_STATE();
    case 88:
      if (lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == '6')
        ADVANCE(131);
      END_STATE();
    case 90:
      if (lookahead == '2')
        ADVANCE(132);
      END_STATE();
    case 91:
      if (lookahead == '4')
        ADVANCE(133);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 94:
      if (lookahead == 't')
        ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'd')
        ADVANCE(135);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'i')
        ADVANCE(137);
      if (lookahead == 'o')
        ADVANCE(138);
      END_STATE();
    case 98:
      if (lookahead == 'b')
        ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == 'a')
        ADVANCE(140);
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == '6')
        ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == '2')
        ADVANCE(143);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 103:
      if (lookahead == 'c')
        ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 'i')
        ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == '6')
        ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == '2')
        ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == '4')
        ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 109:
      if (lookahead == 'i')
        ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 112:
      if (lookahead == ')')
        ADVANCE(113);
      if (lookahead == 'f')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_double);
      END_STATE();
    case 114:
      if (lookahead == ')')
        ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == '+')
        ADVANCE(151);
      if (lookahead == '-')
        ADVANCE(115);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 116:
      if (lookahead == '*')
        ADVANCE(116);
      if (lookahead == '/')
        ADVANCE(151);
      if (lookahead != 0)
        ADVANCE(57);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 121:
      if (lookahead == 'e')
        ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'l')
        ADVANCE(153);
      END_STATE();
    case 123:
      if (lookahead == 'a')
        ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 125:
      if (lookahead == 'm')
        ADVANCE(155);
      END_STATE();
    case 126:
      if (lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(157);
      END_STATE();
    case 130:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 134:
      if (lookahead == 'h')
        ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'u')
        ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 'l')
        ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'v')
        ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 't')
        ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 'l')
        ADVANCE(164);
      END_STATE();
    case 140:
      if (lookahead == 'd')
        ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'u')
        ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 145:
      if (lookahead == 't')
        ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(169);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 153:
      if (lookahead == 'a')
        ADVANCE(170);
      END_STATE();
    case 154:
      if (lookahead == 'u')
        ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 156:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 159:
      if (lookahead == 'o')
        ADVANCE(174);
      END_STATE();
    case 160:
      if (lookahead == 'l')
        ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 162:
      if (lookahead == 'a')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'i')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'c')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'r')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'l')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'i')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 'd')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'e')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'c')
        ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 's')
        ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'n')
        ADVANCE(194);
      END_STATE();
    case 181:
      if (lookahead == 'o')
        ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'h')
        ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 't')
        ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'a')
        ADVANCE(199);
      END_STATE();
    case 187:
      if (lookahead == 'o')
        ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 190:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 't')
        ADVANCE(202);
      END_STATE();
    case 192:
      if (lookahead == 'h')
        ADVANCE(203);
      END_STATE();
    case 193:
      if (lookahead == 'l')
        ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 195:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 199:
      if (lookahead == 'l')
        ADVANCE(206);
      END_STATE();
    case 200:
      if (lookahead == 'n')
        ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 202:
      if (lookahead == 'e')
        ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 204:
      if (lookahead == 'y')
        ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 208:
      if (lookahead == 'd')
        ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 211:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == 'm')
        ADVANCE(215);
      if (lookahead == 8203)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 212:
      if (lookahead == '-')
        ADVANCE(53);
      END_STATE();
    case 213:
      if (lookahead == '-')
        ADVANCE(216);
      END_STATE();
    case 214:
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(58);
      END_STATE();
    case 215:
      if (lookahead == 'o')
        ADVANCE(95);
      END_STATE();
    case 216:
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 217:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
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
        ADVANCE(231);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b')
        ADVANCE(60);
      if (lookahead == 'l')
        ADVANCE(61);
      if (lookahead == 'x')
        ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(64);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(234);
      if (lookahead == '6')
        ADVANCE(235);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(238);
      if (lookahead == '3')
        ADVANCE(239);
      if (lookahead == '6')
        ADVANCE(240);
      if (lookahead == '8')
        ADVANCE(241);
      if (lookahead == 'f')
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
        ADVANCE(231);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(243);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(246);
      if (lookahead == 'u')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(249);
      if (lookahead == '3')
        ADVANCE(250);
      if (lookahead == '8')
        ADVANCE(251);
      if (lookahead == 'e')
        ADVANCE(252);
      if (lookahead == 'w')
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
        ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(254);
      if (lookahead == '3')
        ADVANCE(255);
      if (lookahead == '6')
        ADVANCE(256);
      if (lookahead == '8')
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
        ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(231);
      END_STATE();
    case 231:
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
        ADVANCE(231);
      END_STATE();
    case 232:
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
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(259);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(231);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(231);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(231);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(231);
      END_STATE();
    case 239:
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
        ADVANCE(231);
      END_STATE();
    case 240:
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
        ADVANCE(231);
      END_STATE();
    case 241:
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
        ADVANCE(231);
      END_STATE();
    case 242:
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
        ADVANCE(231);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(231);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(271);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(231);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(274);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(231);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(231);
      END_STATE();
    case 251:
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
        ADVANCE(231);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(231);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(231);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(231);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(231);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(231);
      END_STATE();
    case 257:
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
        ADVANCE(231);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(231);
      END_STATE();
    case 259:
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
        ADVANCE(231);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(231);
      END_STATE();
    case 261:
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
        ADVANCE(231);
      END_STATE();
    case 262:
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
        ADVANCE(231);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(231);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 265:
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
        ADVANCE(231);
      END_STATE();
    case 266:
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
        ADVANCE(231);
      END_STATE();
    case 267:
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
        ADVANCE(231);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(231);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(231);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(231);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 276:
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
        ADVANCE(231);
      END_STATE();
    case 277:
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
        ADVANCE(231);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 280:
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
        ADVANCE(231);
      END_STATE();
    case 281:
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
        ADVANCE(231);
      END_STATE();
    case 282:
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
        ADVANCE(231);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 284:
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
        ADVANCE(231);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 286:
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
        ADVANCE(231);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 289:
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
        ADVANCE(231);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(231);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(231);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(231);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(231);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(231);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(231);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(231);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(231);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(231);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(231);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(231);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(231);
      END_STATE();
    case 308:
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
        ADVANCE(231);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(231);
      END_STATE();
    case 310:
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
        ADVANCE(231);
      END_STATE();
    case 311:
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
        ADVANCE(231);
      END_STATE();
    case 312:
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
        ADVANCE(231);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(231);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 316:
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
        ADVANCE(231);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(231);
      END_STATE();
    case 318:
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
        ADVANCE(231);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(231);
      END_STATE();
    case 320:
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
        ADVANCE(231);
      END_STATE();
    case 321:
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
        ADVANCE(231);
      END_STATE();
    case 322:
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
        ADVANCE(231);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(231);
      END_STATE();
    case 324:
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
        ADVANCE(231);
      END_STATE();
    case 325:
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
        ADVANCE(231);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(231);
      END_STATE();
    case 327:
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
        ADVANCE(231);
      END_STATE();
    case 328:
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
        ADVANCE(231);
      END_STATE();
    case 329:
      if (lookahead == '(')
        ADVANCE(330);
      if (lookahead == '*')
        ADVANCE(331);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 332:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 333:
      if (lookahead == '=')
        ADVANCE(65);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(233);
      if (lookahead == 'x')
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
        ADVANCE(231);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(238);
      if (lookahead == '3')
        ADVANCE(239);
      if (lookahead == '6')
        ADVANCE(240);
      if (lookahead == '8')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 337:
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
        ADVANCE(231);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(249);
      if (lookahead == '3')
        ADVANCE(250);
      if (lookahead == '8')
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
        ADVANCE(231);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(231);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(231);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(231);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(231);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(231);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(231);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 348:
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
        ADVANCE(231);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 351:
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
        ADVANCE(231);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 353:
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
        ADVANCE(231);
      END_STATE();
    case 354:
      if (lookahead == '*')
        ADVANCE(331);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 355:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'c')
        ADVANCE(356);
      if (lookahead == 'd')
        ADVANCE(357);
      if (lookahead == 'f')
        ADVANCE(358);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(231);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(231);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(231);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f')
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
        ADVANCE(231);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 364:
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
        ADVANCE(231);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 368:
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
        ADVANCE(231);
      END_STATE();
    case 369:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 370:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 371:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(234);
      if (lookahead == '6')
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
        ADVANCE(231);
      END_STATE();
    case 373:
      if (lookahead == '!')
        ADVANCE(374);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(375);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(331);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(376);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 375:
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
        ADVANCE(231);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(216);
      END_STATE();
    case 377:
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
        ADVANCE(231);
      END_STATE();
    case 378:
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '(')
        ADVANCE(330);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(384);
      if (lookahead == '>')
        ADVANCE(385);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(386);
      if (lookahead == '|')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '"' &&
          (lookahead < '\'' || '9' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '\\' || '_' < lookahead) &&
          (lookahead < '{' || '}' < lookahead))
        ADVANCE(231);
      END_STATE();
    case 379:
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(48);
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
        ADVANCE(231);
      END_STATE();
    case 381:
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == '=')
        ADVANCE(59);
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
        ADVANCE(231);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(80);
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
        ADVANCE(231);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(110);
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
        ADVANCE(231);
      END_STATE();
    case 388:
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
        ADVANCE(231);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=')
        ADVANCE(120);
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
        ADVANCE(231);
      END_STATE();
    case 390:
      if (lookahead == '+')
        ADVANCE(391);
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(44);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(53);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(216);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(58);
      END_STATE();
    case 394:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(395);
      if (lookahead == '-')
        ADVANCE(396);
      if (lookahead == '/')
        ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(399);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*')
        ADVANCE(402);
      if (lookahead == '/')
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(57);
      if (lookahead == '*')
        ADVANCE(405);
      if (lookahead != 0)
        ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(399);
      if (lookahead == '"')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(406);
      if (lookahead == '-')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(400);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(57);
      if (lookahead == '*')
        ADVANCE(405);
      if (lookahead == '/')
        ADVANCE(406);
      if (lookahead != 0)
        ADVANCE(402);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(399);
      END_STATE();
    case 407:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(408);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(384);
      if (lookahead == '>')
        ADVANCE(385);
      if (lookahead == '^')
        ADVANCE(386);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          (lookahead < ')' || ',' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 408:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 409:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 410:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(408);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(384);
      if (lookahead == '>')
        ADVANCE(385);
      if (lookahead == '^')
        ADVANCE(386);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(387);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != ')' &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead))
        ADVANCE(231);
      END_STATE();
    case 411:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 412:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 413:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(414);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(231);
      END_STATE();
    case 416:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 417:
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(418);
      if (lookahead == '*')
        ADVANCE(408);
      if (lookahead == '+')
        ADVANCE(419);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(420);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(421);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(422);
      if (lookahead == '>')
        ADVANCE(423);
      if (lookahead == '^')
        ADVANCE(424);
      if (lookahead == '|')
        ADVANCE(425);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 418:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 420:
      if (lookahead == '-')
        ADVANCE(216);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 421:
      if (lookahead == '*')
        ADVANCE(57);
      if (lookahead == '/')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 422:
      if (lookahead == '<')
        ADVANCE(426);
      END_STATE();
    case 423:
      if (lookahead == '>')
        ADVANCE(427);
      END_STATE();
    case 424:
      if (lookahead == '=')
        ADVANCE(80);
      END_STATE();
    case 425:
      if (lookahead == '=')
        ADVANCE(110);
      END_STATE();
    case 426:
      if (lookahead == '=')
        ADVANCE(119);
      END_STATE();
    case 427:
      if (lookahead == '=')
        ADVANCE(120);
      END_STATE();
    case 428:
      if (lookahead == '!')
        ADVANCE(429);
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
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(430);
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
        ADVANCE(42);
      END_STATE();
    case 429:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 430:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 431:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 432:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(408);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(384);
      if (lookahead == '>')
        ADVANCE(385);
      if (lookahead == '^')
        ADVANCE(386);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          (lookahead < ')' || '.' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 433:
      if (lookahead == '!')
        ADVANCE(429);
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
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(430);
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
        ADVANCE(42);
      END_STATE();
    case 434:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 435:
      if (lookahead == '(')
        ADVANCE(330);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == 'r')
        ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 436:
      if (lookahead == 'e')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'u')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'r')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'n')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 's')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 443:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 444:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '*' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_')
        ADVANCE(231);
      END_STATE();
    case 445:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(446);
      END_STATE();
    case 447:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 448:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == 'e')
        ADVANCE(449);
      if (lookahead == 'f')
        ADVANCE(450);
      if (lookahead == 'm')
        ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 449:
      if (lookahead == 'n')
        ADVANCE(452);
      END_STATE();
    case 450:
      if (lookahead == 'u')
        ADVANCE(87);
      END_STATE();
    case 451:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 452:
      if (lookahead == 'd')
        ADVANCE(124);
      END_STATE();
    case 453:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == 'e')
        ADVANCE(414);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < ')' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(231);
      END_STATE();
    case 454:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(379);
      if (lookahead == '&')
        ADVANCE(380);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(408);
      if (lookahead == '+')
        ADVANCE(381);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(382);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(383);
      if (lookahead == '0')
        ADVANCE(219);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '<')
        ADVANCE(384);
      if (lookahead == '>')
        ADVANCE(385);
      if (lookahead == '^')
        ADVANCE(386);
      if (lookahead == 'e')
        ADVANCE(220);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'g')
        ADVANCE(222);
      if (lookahead == 'i')
        ADVANCE(223);
      if (lookahead == 'm')
        ADVANCE(224);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == 'w')
        ADVANCE(230);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(387);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead))
        ADVANCE(231);
      END_STATE();
    case 455:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == ':')
        ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 456:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == 'c')
        ADVANCE(457);
      if (lookahead == 'd')
        ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 457:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 458:
      if (lookahead == 'e')
        ADVANCE(459);
      END_STATE();
    case 459:
      if (lookahead == 'f')
        ADVANCE(123);
      END_STATE();
    case 460:
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(372);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 461:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(218);
      if (lookahead == 'd')
        ADVANCE(334);
      if (lookahead == 'e')
        ADVANCE(335);
      if (lookahead == 'f')
        ADVANCE(221);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead == 'm')
        ADVANCE(337);
      if (lookahead == 'p')
        ADVANCE(226);
      if (lookahead == 'r')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead == 'u')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(231);
      END_STATE();
    case 462:
      if (lookahead == '*')
        ADVANCE(331);
      if (lookahead == '+')
        ADVANCE(212);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(214);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 211},
  [2] = {.lex_state = 217},
  [3] = {.lex_state = 329},
  [4] = {.lex_state = 211},
  [5] = {.lex_state = 332},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 329},
  [9] = {.lex_state = 354},
  [10] = {.lex_state = 329},
  [11] = {.lex_state = 355},
  [12] = {.lex_state = 329},
  [13] = {.lex_state = 369},
  [14] = {.lex_state = 370},
  [15] = {.lex_state = 371},
  [16] = {.lex_state = 373},
  [17] = {.lex_state = 329},
  [18] = {.lex_state = 378},
  [19] = {.lex_state = 329},
  [20] = {.lex_state = 390},
  [21] = {.lex_state = 369},
  [22] = {.lex_state = 329},
  [23] = {.lex_state = 329},
  [24] = {.lex_state = 394},
  [25] = {.lex_state = 329},
  [26] = {.lex_state = 329},
  [27] = {.lex_state = 407},
  [28] = {.lex_state = 409},
  [29] = {.lex_state = 370},
  [30] = {.lex_state = 329},
  [31] = {.lex_state = 217},
  [32] = {.lex_state = 329},
  [33] = {.lex_state = 378},
  [34] = {.lex_state = 329},
  [35] = {.lex_state = 329},
  [36] = {.lex_state = 217},
  [37] = {.lex_state = 410},
  [38] = {.lex_state = 329},
  [39] = {.lex_state = 329},
  [40] = {.lex_state = 217},
  [41] = {.lex_state = 329},
  [42] = {.lex_state = 329},
  [43] = {.lex_state = 211},
  [44] = {.lex_state = 411},
  [45] = {.lex_state = 329},
  [46] = {.lex_state = 211},
  [47] = {.lex_state = 329},
  [48] = {.lex_state = 329},
  [49] = {.lex_state = 370},
  [50] = {.lex_state = 329},
  [51] = {.lex_state = 329},
  [52] = {.lex_state = 332},
  [53] = {.lex_state = 412},
  [54] = {.lex_state = 413},
  [55] = {.lex_state = 329},
  [56] = {.lex_state = 329},
  [57] = {.lex_state = 329},
  [58] = {.lex_state = 329},
  [59] = {.lex_state = 329},
  [60] = {.lex_state = 329},
  [61] = {.lex_state = 329},
  [62] = {.lex_state = 329},
  [63] = {.lex_state = 329},
  [64] = {.lex_state = 217},
  [65] = {.lex_state = 329},
  [66] = {.lex_state = 416},
  [67] = {.lex_state = 416},
  [68] = {.lex_state = 417},
  [69] = {.lex_state = 329},
  [70] = {.lex_state = 369},
  [71] = {.lex_state = 373},
  [72] = {.lex_state = 371},
  [73] = {.lex_state = 369},
  [74] = {.lex_state = 378},
  [75] = {.lex_state = 428},
  [76] = {.lex_state = 329},
  [77] = {.lex_state = 329},
  [78] = {.lex_state = 217},
  [79] = {.lex_state = 431},
  [80] = {.lex_state = 329},
  [81] = {.lex_state = 329},
  [82] = {.lex_state = 329},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 394},
  [85] = {.lex_state = 390},
  [86] = {.lex_state = 409},
  [87] = {.lex_state = 432},
  [88] = {.lex_state = 329},
  [89] = {.lex_state = 433},
  [90] = {.lex_state = 394},
  [91] = {.lex_state = 373},
  [92] = {.lex_state = 434},
  [93] = {.lex_state = 329},
  [94] = {.lex_state = 371},
  [95] = {.lex_state = 329},
  [96] = {.lex_state = 217},
  [97] = {.lex_state = 369},
  [98] = {.lex_state = 369},
  [99] = {.lex_state = 435},
  [100] = {.lex_state = 443},
  [101] = {.lex_state = 444},
  [102] = {.lex_state = 444},
  [103] = {.lex_state = 445},
  [104] = {.lex_state = 354},
  [105] = {.lex_state = 329},
  [106] = {.lex_state = 329},
  [107] = {.lex_state = 217},
  [108] = {.lex_state = 332},
  [109] = {.lex_state = 371},
  [110] = {.lex_state = 329},
  [111] = {.lex_state = 329},
  [112] = {.lex_state = 370},
  [113] = {.lex_state = 332},
  [114] = {.lex_state = 412},
  [115] = {.lex_state = 329},
  [116] = {.lex_state = 329},
  [117] = {.lex_state = 329},
  [118] = {.lex_state = 435},
  [119] = {.lex_state = 329},
  [120] = {.lex_state = 211},
  [121] = {.lex_state = 332},
  [122] = {.lex_state = 329},
  [123] = {.lex_state = 332},
  [124] = {.lex_state = 329},
  [125] = {.lex_state = 447},
  [126] = {.lex_state = 378},
  [127] = {.lex_state = 369},
  [128] = {.lex_state = 329},
  [129] = {.lex_state = 447},
  [130] = {.lex_state = 413},
  [131] = {.lex_state = 329},
  [132] = {.lex_state = 413},
  [133] = {.lex_state = 332},
  [134] = {.lex_state = 413},
  [135] = {.lex_state = 355},
  [136] = {.lex_state = 448},
  [137] = {.lex_state = 329},
  [138] = {.lex_state = 413},
  [139] = {.lex_state = 453},
  [140] = {.lex_state = 369},
  [141] = {.lex_state = 416},
  [142] = {.lex_state = 454},
  [143] = {.lex_state = 369},
  [144] = {.lex_state = 443},
  [145] = {.lex_state = 371},
  [146] = {.lex_state = 369},
  [147] = {.lex_state = 428},
  [148] = {.lex_state = 454},
  [149] = {.lex_state = 371},
  [150] = {.lex_state = 369},
  [151] = {.lex_state = 369},
  [152] = {.lex_state = 217},
  [153] = {.lex_state = 329},
  [154] = {.lex_state = 435},
  [155] = {.lex_state = 455},
  [156] = {.lex_state = 371},
  [157] = {.lex_state = 217},
  [158] = {.lex_state = 329},
  [159] = {.lex_state = 329},
  [160] = {.lex_state = 456},
  [161] = {.lex_state = 433},
  [162] = {.lex_state = 432},
  [163] = {.lex_state = 394},
  [164] = {.lex_state = 217},
  [165] = {.lex_state = 433},
  [166] = {.lex_state = 394},
  [167] = {.lex_state = 371},
  [168] = {.lex_state = 369},
  [169] = {.lex_state = 428},
  [170] = {.lex_state = 453},
  [171] = {.lex_state = 217},
  [172] = {.lex_state = 329},
  [173] = {.lex_state = 455},
  [174] = {.lex_state = 455},
  [175] = {.lex_state = 329},
  [176] = {.lex_state = 435},
  [177] = {.lex_state = 373},
  [178] = {.lex_state = 394},
  [179] = {.lex_state = 390},
  [180] = {.lex_state = 369},
  [181] = {.lex_state = 444},
  [182] = {.lex_state = 460},
  [183] = {.lex_state = 217},
  [184] = {.lex_state = 435},
  [185] = {.lex_state = 329},
  [186] = {.lex_state = 369},
  [187] = {.lex_state = 461},
  [188] = {.lex_state = 354},
  [189] = {.lex_state = 445},
  [190] = {.lex_state = 329},
  [191] = {.lex_state = 329},
  [192] = {.lex_state = 329},
  [193] = {.lex_state = 329},
  [194] = {.lex_state = 435},
  [195] = {.lex_state = 332},
  [196] = {.lex_state = 371},
  [197] = {.lex_state = 329},
  [198] = {.lex_state = 412},
  [199] = {.lex_state = 329},
  [200] = {.lex_state = 455},
  [201] = {.lex_state = 413},
  [202] = {.lex_state = 435},
  [203] = {.lex_state = 329},
  [204] = {.lex_state = 435},
  [205] = {.lex_state = 211},
  [206] = {.lex_state = 329},
  [207] = {.lex_state = 332},
  [208] = {.lex_state = 434},
  [209] = {.lex_state = 217},
  [210] = {.lex_state = 413},
  [211] = {.lex_state = 329},
  [212] = {.lex_state = 413},
  [213] = {.lex_state = 413},
  [214] = {.lex_state = 332},
  [215] = {.lex_state = 217},
  [216] = {.lex_state = 413},
  [217] = {.lex_state = 329},
  [218] = {.lex_state = 329},
  [219] = {.lex_state = 329},
  [220] = {.lex_state = 448},
  [221] = {.lex_state = 413},
  [222] = {.lex_state = 355},
  [223] = {.lex_state = 413},
  [224] = {.lex_state = 332},
  [225] = {.lex_state = 329},
  [226] = {.lex_state = 416},
  [227] = {.lex_state = 416},
  [228] = {.lex_state = 461},
  [229] = {.lex_state = 428},
  [230] = {.lex_state = 371},
  [231] = {.lex_state = 369},
  [232] = {.lex_state = 454},
  [233] = {.lex_state = 371},
  [234] = {.lex_state = 431},
  [235] = {.lex_state = 455},
  [236] = {.lex_state = 435},
  [237] = {.lex_state = 217},
  [238] = {.lex_state = 432},
  [239] = {.lex_state = 432},
  [240] = {.lex_state = 434},
  [241] = {.lex_state = 371},
  [242] = {.lex_state = 369},
  [243] = {.lex_state = 217},
  [244] = {.lex_state = 455},
  [245] = {.lex_state = 329},
  [246] = {.lex_state = 329},
  [247] = {.lex_state = 455},
  [248] = {.lex_state = 443},
  [249] = {.lex_state = 217},
  [250] = {.lex_state = 435},
  [251] = {.lex_state = 329},
  [252] = {.lex_state = 371},
  [253] = {.lex_state = 369},
  [254] = {.lex_state = 428},
  [255] = {.lex_state = 217},
  [256] = {.lex_state = 394},
  [257] = {.lex_state = 217},
  [258] = {.lex_state = 416},
  [259] = {.lex_state = 462},
  [260] = {.lex_state = 329},
  [261] = {.lex_state = 462},
  [262] = {.lex_state = 461},
  [263] = {.lex_state = 354},
  [264] = {.lex_state = 332},
  [265] = {.lex_state = 332},
  [266] = {.lex_state = 435},
  [267] = {.lex_state = 329},
  [268] = {.lex_state = 369},
  [269] = {.lex_state = 329},
  [270] = {.lex_state = 435},
  [271] = {.lex_state = 412},
  [272] = {.lex_state = 329},
  [273] = {.lex_state = 455},
  [274] = {.lex_state = 413},
  [275] = {.lex_state = 329},
  [276] = {.lex_state = 435},
  [277] = {.lex_state = 332},
  [278] = {.lex_state = 329},
  [279] = {.lex_state = 329},
  [280] = {.lex_state = 413},
  [281] = {.lex_state = 329},
  [282] = {.lex_state = 329},
  [283] = {.lex_state = 413},
  [284] = {.lex_state = 329},
  [285] = {.lex_state = 217},
  [286] = {.lex_state = 329},
  [287] = {.lex_state = 355},
  [288] = {.lex_state = 329},
  [289] = {.lex_state = 413},
  [290] = {.lex_state = 448},
  [291] = {.lex_state = 355},
  [292] = {.lex_state = 355},
  [293] = {.lex_state = 329},
  [294] = {.lex_state = 413},
  [295] = {.lex_state = 332},
  [296] = {.lex_state = 428},
  [297] = {.lex_state = 371},
  [298] = {.lex_state = 454},
  [299] = {.lex_state = 455},
  [300] = {.lex_state = 455},
  [301] = {.lex_state = 434},
  [302] = {.lex_state = 371},
  [303] = {.lex_state = 329},
  [304] = {.lex_state = 455},
  [305] = {.lex_state = 329},
  [306] = {.lex_state = 455},
  [307] = {.lex_state = 461},
  [308] = {.lex_state = 217},
  [309] = {.lex_state = 329},
  [310] = {.lex_state = 217},
  [311] = {.lex_state = 371},
  [312] = {.lex_state = 369},
  [313] = {.lex_state = 217},
  [314] = {.lex_state = 217},
  [315] = {.lex_state = 217},
  [316] = {.lex_state = 371},
  [317] = {.lex_state = 462},
  [318] = {.lex_state = 462},
  [319] = {.lex_state = 462},
  [320] = {.lex_state = 332},
  [321] = {.lex_state = 329},
  [322] = {.lex_state = 373},
  [323] = {.lex_state = 394},
  [324] = {.lex_state = 390},
  [325] = {.lex_state = 369},
  [326] = {.lex_state = 332},
  [327] = {.lex_state = 435},
  [328] = {.lex_state = 329},
  [329] = {.lex_state = 329},
  [330] = {.lex_state = 413},
  [331] = {.lex_state = 329},
  [332] = {.lex_state = 332},
  [333] = {.lex_state = 329},
  [334] = {.lex_state = 413},
  [335] = {.lex_state = 329},
  [336] = {.lex_state = 355},
  [337] = {.lex_state = 329},
  [338] = {.lex_state = 329},
  [339] = {.lex_state = 448},
  [340] = {.lex_state = 329},
  [341] = {.lex_state = 428},
  [342] = {.lex_state = 434},
  [343] = {.lex_state = 217},
  [344] = {.lex_state = 329},
  [345] = {.lex_state = 217},
  [346] = {.lex_state = 217},
  [347] = {.lex_state = 371},
  [348] = {.lex_state = 462},
  [349] = {.lex_state = 462},
  [350] = {.lex_state = 462},
  [351] = {.lex_state = 462},
  [352] = {.lex_state = 462},
  [353] = {.lex_state = 332},
  [354] = {.lex_state = 371},
  [355] = {.lex_state = 369},
  [356] = {.lex_state = 428},
  [357] = {.lex_state = 332},
  [358] = {.lex_state = 394},
  [359] = {.lex_state = 217},
  [360] = {.lex_state = 416},
  [361] = {.lex_state = 329},
  [362] = {.lex_state = 332},
  [363] = {.lex_state = 329},
  [364] = {.lex_state = 413},
  [365] = {.lex_state = 332},
  [366] = {.lex_state = 355},
  [367] = {.lex_state = 448},
  [368] = {.lex_state = 217},
  [369] = {.lex_state = 217},
  [370] = {.lex_state = 332},
  [371] = {.lex_state = 371},
  [372] = {.lex_state = 369},
  [373] = {.lex_state = 332},
  [374] = {.lex_state = 332},
  [375] = {.lex_state = 332},
  [376] = {.lex_state = 332},
  [377] = {.lex_state = 332},
  [378] = {.lex_state = 332},
  [379] = {.lex_state = 371},
  [380] = {.lex_state = 332},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_BSLASH0] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_s8] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [sym_readonly] = ACTIONS(1),
    [anon_sym_BSLASHr] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BSLASHa] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_s16] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_BSLASHt] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_s32] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_BSLASHv] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_publish] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [sym_long] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_is_declare] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_is_external] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_BSLASHn] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
  },
  [1] = {
    [sym_module_definition] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym__start_module_definition] = STATE(5),
    [sym_sentences] = STATE(6),
    [sym_source_file] = STATE(7),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [anon_sym_] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(29),
    [sym_end_module] = STATE(30),
    [sym_string] = STATE(37),
    [sym_end_case] = STATE(30),
    [sym_character] = STATE(37),
    [sym_sentence] = STATE(40),
    [sym_enum_definition] = STATE(31),
    [sym_variable_definition] = STATE(30),
    [sym_goto_statement] = STATE(30),
    [sym_section_statement] = STATE(30),
    [sym_while_statement] = STATE(30),
    [sym__while_statement] = STATE(32),
    [sym__variable_statement] = STATE(30),
    [sym_end_function] = STATE(30),
    [sym_end_method] = STATE(30),
    [sym_end_default] = STATE(30),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(30),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym_is_method] = STATE(34),
    [sym_is_function] = STATE(34),
    [sym_type] = STATE(35),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(30),
    [sym_switch_statement] = STATE(30),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_end_if] = STATE(30),
    [sym_end_while] = STATE(30),
    [sym__start_module_definition] = STATE(36),
    [sym_start_module_definition] = STATE(31),
    [sym_end_compound_macro] = STATE(31),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__value] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__literal] = STATE(37),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(39),
    [aux_sym_sentences_repeat1] = STATE(40),
    [sym__switch_statement] = STATE(41),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(53),
  },
  [3] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
  },
  [4] = {
    [sym_module_definition] = STATE(43),
    [sym__start_module_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(43),
    [anon_sym_module] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym_is_method] = STATE(48),
    [sym_type] = STATE(35),
    [sym_declaration_definition] = STATE(52),
    [sym_access_control] = STATE(49),
    [sym_end_module] = STATE(50),
    [sym_enum_definition] = STATE(52),
    [sym_variable_definition] = STATE(51),
    [aux_sym_module_definition_repeat1] = STATE(52),
    [sym_compound_macro] = STATE(53),
    [sym_function_signature] = STATE(54),
    [sym_function_definition] = STATE(52),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__definitions] = STATE(52),
    [sym_compound_macro_block] = STATE(52),
    [sym_is_function] = STATE(48),
    [anon_sym_i16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(61),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym_is_external] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [sym_is_declare] = ACTIONS(63),
    [anon_sym_protected] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(65),
  },
  [6] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
  },
  [7] = {
    [sym__space] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
  },
  [8] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
  },
  [10] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
  },
  [11] = {
    [sym_compound_macro] = STATE(64),
    [anon_sym_module] = ACTIONS(77),
    [sym_identifier] = ACTIONS(79),
    [anon_sym_default] = ACTIONS(81),
    [anon_sym_function] = ACTIONS(83),
    [anon_sym_case] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(91),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_group_expression] = STATE(65),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [13] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(66),
    [sym__assignment_or_collection_or_value] = STATE(66),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(67),
    [sym__collection_or_value] = STATE(68),
    [sym_collection] = STATE(68),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [14] = {
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(95),
    [anon_sym_u8] = ACTIONS(95),
    [anon_sym_f64] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(95),
    [anon_sym_i8] = ACTIONS(95),
    [anon_sym_method] = ACTIONS(95),
    [anon_sym_s32] = ACTIONS(95),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(95),
    [anon_sym_i64] = ACTIONS(95),
    [anon_sym_f32] = ACTIONS(95),
    [anon_sym_function] = ACTIONS(95),
    [anon_sym_s16] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(95),
    [anon_sym_i32] = ACTIONS(95),
    [anon_sym_u64] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(95),
  },
  [15] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(69),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [16] = {
    [sym__literal] = STATE(75),
    [sym_group_expression] = STATE(75),
    [sym_assignment_expression] = STATE(72),
    [sym_string] = STATE(75),
    [sym_character] = STATE(75),
    [sym_unary_op] = STATE(73),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(75),
    [sym__value] = STATE(75),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_double] = ACTIONS(103),
    [sym_float] = ACTIONS(103),
    [sym_oct] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(105),
    [sym_null] = ACTIONS(99),
    [sym_binary] = ACTIONS(103),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(103),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(99),
  },
  [17] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(109),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [aux_sym_compound_macro_repeat1] = STATE(80),
    [sym_parameter_list] = STATE(81),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(121),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [sym__space] = ACTIONS(123),
  },
  [19] = {
    [sym_group_expression] = STATE(82),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [20] = {
    [sym__escape_sequence] = STATE(83),
    [anon_sym_BSLASH0] = ACTIONS(125),
    [anon_sym_BSLASHr] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(125),
    [anon_sym_BSLASHa] = ACTIONS(125),
    [anon_sym_BSLASHt] = ACTIONS(125),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(125),
    [anon_sym_BSLASHv] = ACTIONS(125),
    [anon_sym_BSLASHn] = ACTIONS(125),
    [aux_sym_character_token1] = ACTIONS(127),
    [anon_sym_BSLASHf] = ACTIONS(125),
  },
  [21] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(86),
    [sym__assignment_or_collection_or_value] = STATE(86),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(87),
    [sym_collection] = STATE(87),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [aux_sym_string_repeat1] = STATE(90),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(139),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(141),
  },
  [25] = {
    [sym_group_expression] = STATE(92),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(145),
  },
  [27] = {
    [anon_sym_s8] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_end] = ACTIONS(147),
    [sym_null] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [sym_readonly] = ACTIONS(147),
    [anon_sym_f32] = ACTIONS(147),
    [anon_sym_s16] = ACTIONS(147),
    [anon_sym_module] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_f64] = ACTIONS(147),
    [sym_oct] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_goto] = ACTIONS(147),
    [anon_sym_s32] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_i32] = ACTIONS(147),
    [sym_integer] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_section] = ACTIONS(147),
    [sym_double] = ACTIONS(149),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_method] = ACTIONS(147),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_publish] = ACTIONS(147),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [anon_sym_i64] = ACTIONS(147),
    [sym_long] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [sym_hex] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_switch] = ACTIONS(147),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_u8] = ACTIONS(147),
    [sym_float] = ACTIONS(149),
    [anon_sym_u32] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_i8] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [sym_binary] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_DASH_DASH] = ACTIONS(121),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [anon_sym_u16] = ACTIONS(147),
    [anon_sym_u64] = ACTIONS(147),
    [anon_sym_i16] = ACTIONS(147),
  },
  [28] = {
    [sym_integer] = ACTIONS(147),
    [anon_sym_section] = ACTIONS(147),
    [anon_sym_s8] = ACTIONS(147),
    [sym_double] = ACTIONS(149),
    [anon_sym_method] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_publish] = ACTIONS(147),
    [sym_readonly] = ACTIONS(147),
    [anon_sym_i64] = ACTIONS(147),
    [anon_sym_f32] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [sym_null] = ACTIONS(147),
    [sym_long] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(147),
    [sym_hex] = ACTIONS(149),
    [anon_sym_module] = ACTIONS(147),
    [anon_sym_switch] = ACTIONS(147),
    [sym_identifier] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_u8] = ACTIONS(147),
    [anon_sym_f64] = ACTIONS(147),
    [anon_sym_u32] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_i8] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_goto] = ACTIONS(147),
    [sym_oct] = ACTIONS(147),
    [anon_sym_s32] = ACTIONS(147),
    [sym_float] = ACTIONS(149),
    [sym_binary] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_function] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(147),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_u16] = ACTIONS(147),
    [anon_sym_i32] = ACTIONS(147),
    [anon_sym_u64] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_i16] = ACTIONS(147),
  },
  [29] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(95),
    [sym_type] = STATE(69),
    [sym_is_function] = STATE(95),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(151),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [30] = {
    [anon_sym_DOT] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym_integer] = ACTIONS(155),
    [anon_sym_section] = ACTIONS(155),
    [anon_sym_s8] = ACTIONS(155),
    [sym_double] = ACTIONS(157),
    [anon_sym_method] = ACTIONS(155),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_publish] = ACTIONS(155),
    [sym_readonly] = ACTIONS(155),
    [anon_sym_i64] = ACTIONS(155),
    [anon_sym_f32] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [sym_null] = ACTIONS(155),
    [sym_long] = ACTIONS(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(155),
    [sym_hex] = ACTIONS(157),
    [anon_sym_module] = ACTIONS(155),
    [anon_sym_switch] = ACTIONS(155),
    [sym_identifier] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_u8] = ACTIONS(155),
    [anon_sym_f64] = ACTIONS(155),
    [anon_sym_u32] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_i8] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_goto] = ACTIONS(155),
    [sym_oct] = ACTIONS(155),
    [anon_sym_s32] = ACTIONS(155),
    [sym_float] = ACTIONS(157),
    [sym_binary] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_function] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(155),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_u16] = ACTIONS(155),
    [anon_sym_i32] = ACTIONS(155),
    [anon_sym_u64] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(155),
    [anon_sym_i16] = ACTIONS(155),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [33] = {
    [sym_assignment_op] = STATE(98),
    [anon_sym_AMP_EQ] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(161),
    [anon_sym_DASH_EQ] = ACTIONS(161),
    [anon_sym_PIPE_EQ] = ACTIONS(161),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(161),
    [anon_sym_STAR_EQ] = ACTIONS(161),
    [anon_sym_CARET_EQ] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(161),
    [anon_sym_SLASH_EQ] = ACTIONS(161),
    [anon_sym_GT_GT_EQ] = ACTIONS(161),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(165),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym_integer] = ACTIONS(167),
    [anon_sym_section] = ACTIONS(167),
    [anon_sym_s8] = ACTIONS(167),
    [sym_double] = ACTIONS(169),
    [anon_sym_method] = ACTIONS(167),
    [anon_sym_end] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_publish] = ACTIONS(167),
    [sym_readonly] = ACTIONS(167),
    [anon_sym_i64] = ACTIONS(167),
    [anon_sym_f32] = ACTIONS(167),
    [anon_sym_LPAREN] = ACTIONS(167),
    [sym_null] = ACTIONS(167),
    [sym_long] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(167),
    [sym_hex] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(167),
    [anon_sym_switch] = ACTIONS(167),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_private] = ACTIONS(167),
    [anon_sym_u8] = ACTIONS(167),
    [anon_sym_f64] = ACTIONS(167),
    [anon_sym_u32] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_i8] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_goto] = ACTIONS(167),
    [sym_oct] = ACTIONS(167),
    [anon_sym_s32] = ACTIONS(167),
    [sym_float] = ACTIONS(169),
    [sym_binary] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_function] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(167),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(167),
    [anon_sym_u16] = ACTIONS(167),
    [anon_sym_i32] = ACTIONS(167),
    [anon_sym_u64] = ACTIONS(167),
    [anon_sym_enum] = ACTIONS(167),
    [anon_sym_i16] = ACTIONS(167),
  },
  [37] = {
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_s8] = ACTIONS(171),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_end] = ACTIONS(171),
    [sym_null] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [sym_readonly] = ACTIONS(171),
    [anon_sym_f32] = ACTIONS(171),
    [anon_sym_s16] = ACTIONS(171),
    [anon_sym_module] = ACTIONS(171),
    [sym_identifier] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_private] = ACTIONS(171),
    [anon_sym_f64] = ACTIONS(171),
    [sym_oct] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_goto] = ACTIONS(171),
    [anon_sym_s32] = ACTIONS(171),
    [anon_sym_function] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_protected] = ACTIONS(171),
    [anon_sym_i32] = ACTIONS(171),
    [sym_integer] = ACTIONS(171),
    [anon_sym_enum] = ACTIONS(171),
    [anon_sym_section] = ACTIONS(171),
    [sym_double] = ACTIONS(173),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_method] = ACTIONS(171),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_publish] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [anon_sym_i64] = ACTIONS(171),
    [sym_long] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [sym_hex] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_switch] = ACTIONS(171),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_u8] = ACTIONS(171),
    [sym_float] = ACTIONS(173),
    [anon_sym_u32] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_i8] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [sym_binary] = ACTIONS(173),
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [anon_sym_u16] = ACTIONS(171),
    [anon_sym_u64] = ACTIONS(171),
    [anon_sym_i16] = ACTIONS(171),
  },
  [38] = {
    [aux_sym_type_repeat2] = STATE(105),
    [sym_pointer] = STATE(106),
    [aux_sym_type_repeat1] = STATE(106),
    [sym_array] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_DOT] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [40] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(29),
    [sym_end_module] = STATE(30),
    [sym_string] = STATE(37),
    [sym_end_case] = STATE(30),
    [sym_character] = STATE(37),
    [sym_sentence] = STATE(107),
    [sym_enum_definition] = STATE(31),
    [sym_variable_definition] = STATE(30),
    [sym_goto_statement] = STATE(30),
    [sym_section_statement] = STATE(30),
    [sym_while_statement] = STATE(30),
    [sym__while_statement] = STATE(32),
    [sym__variable_statement] = STATE(30),
    [sym_end_function] = STATE(30),
    [sym_end_method] = STATE(30),
    [sym_end_default] = STATE(30),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(30),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym_is_method] = STATE(34),
    [sym_is_function] = STATE(34),
    [sym_type] = STATE(35),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(30),
    [sym_switch_statement] = STATE(30),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_end_if] = STATE(30),
    [sym_end_while] = STATE(30),
    [sym__start_module_definition] = STATE(36),
    [sym_start_module_definition] = STATE(31),
    [sym_end_compound_macro] = STATE(31),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__value] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__literal] = STATE(37),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(39),
    [aux_sym_sentences_repeat1] = STATE(107),
    [sym__switch_statement] = STATE(41),
    [anon_sym_i16] = ACTIONS(11),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_null] = ACTIONS(31),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [anon_sym_module] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(53),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_DOT] = ACTIONS(191),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [43] = {
    [sym_module_definition] = STATE(43),
    [sym__start_module_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(43),
    [anon_sym_module] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym_is_method] = STATE(110),
    [sym_type] = STATE(111),
    [sym_access_control] = STATE(112),
    [sym_function_signature] = STATE(113),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym_variable_definition] = STATE(113),
    [sym_is_function] = STATE(110),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(198),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
  },
  [45] = {
    [aux_sym_compound_macro_repeat1] = STATE(115),
    [sym_parameter_list] = STATE(116),
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym__space] = ACTIONS(123),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_module] = ACTIONS(202),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(204),
  },
  [48] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(206),
    [sym__comment] = ACTIONS(3),
  },
  [49] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(119),
    [sym_type] = STATE(69),
    [sym_is_function] = STATE(119),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(151),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [50] = {
    [anon_sym_DOT] = ACTIONS(208),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_DOT] = ACTIONS(210),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [sym_is_method] = STATE(48),
    [sym_type] = STATE(35),
    [sym_declaration_definition] = STATE(123),
    [sym_access_control] = STATE(49),
    [sym_end_module] = STATE(122),
    [sym_enum_definition] = STATE(123),
    [sym_variable_definition] = STATE(51),
    [aux_sym_module_definition_repeat1] = STATE(123),
    [sym_compound_macro] = STATE(53),
    [sym_function_signature] = STATE(54),
    [sym_function_definition] = STATE(123),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__definitions] = STATE(123),
    [sym_compound_macro_block] = STATE(123),
    [sym_is_function] = STATE(48),
    [anon_sym_i16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_end] = ACTIONS(61),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym_is_external] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [sym_is_declare] = ACTIONS(63),
    [anon_sym_protected] = ACTIONS(25),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(65),
  },
  [53] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(132),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(132),
    [sym_single_line_if_statement] = STATE(132),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_compound_macro] = STATE(133),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [sym_integer] = ACTIONS(31),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(212),
    [sym_double] = ACTIONS(15),
    [anon_sym_method] = ACTIONS(215),
    [anon_sym_end] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(220),
    [sym_readonly] = ACTIONS(223),
    [anon_sym_i64] = ACTIONS(212),
    [anon_sym_f32] = ACTIONS(212),
    [sym_null] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(212),
    [sym_is_declare] = ACTIONS(215),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(226),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(220),
    [anon_sym_u8] = ACTIONS(212),
    [anon_sym_f64] = ACTIONS(212),
    [anon_sym_u32] = ACTIONS(212),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(212),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(212),
    [sym_is_external] = ACTIONS(215),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(220),
    [anon_sym_u16] = ACTIONS(212),
    [anon_sym_i32] = ACTIONS(212),
    [anon_sym_u64] = ACTIONS(212),
    [anon_sym_enum] = ACTIONS(215),
    [anon_sym_i16] = ACTIONS(212),
  },
  [54] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym_end_function] = STATE(137),
    [sym_end_method] = STATE(137),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(137),
    [aux_sym_compound_macro_block_repeat1] = STATE(138),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(138),
    [sym_single_line_if_statement] = STATE(138),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(233),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_DOT] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [aux_sym_compound_macro_repeat1] = STATE(80),
    [sym_parameter_list] = STATE(81),
    [sym__space] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_DOT] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(245),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_DOT] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(249),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_DOT] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [sym_integer] = ACTIONS(255),
    [anon_sym_section] = ACTIONS(255),
    [anon_sym_s8] = ACTIONS(255),
    [sym_double] = ACTIONS(257),
    [anon_sym_method] = ACTIONS(255),
    [anon_sym_end] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_publish] = ACTIONS(255),
    [sym_readonly] = ACTIONS(255),
    [anon_sym_i64] = ACTIONS(255),
    [anon_sym_f32] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(255),
    [sym_null] = ACTIONS(255),
    [sym_long] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(255),
    [sym_hex] = ACTIONS(257),
    [anon_sym_module] = ACTIONS(255),
    [anon_sym_switch] = ACTIONS(255),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_private] = ACTIONS(255),
    [anon_sym_u8] = ACTIONS(255),
    [anon_sym_f64] = ACTIONS(255),
    [anon_sym_u32] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_i8] = ACTIONS(255),
    [anon_sym_return] = ACTIONS(255),
    [anon_sym_goto] = ACTIONS(255),
    [sym_oct] = ACTIONS(255),
    [anon_sym_s32] = ACTIONS(255),
    [sym_float] = ACTIONS(257),
    [sym_binary] = ACTIONS(257),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_function] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_if] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(255),
    [anon_sym_u16] = ACTIONS(255),
    [anon_sym_i32] = ACTIONS(255),
    [anon_sym_u64] = ACTIONS(255),
    [anon_sym_enum] = ACTIONS(255),
    [anon_sym_i16] = ACTIONS(255),
  },
  [65] = {
    [anon_sym_DOT] = ACTIONS(259),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(141),
    [anon_sym_RBRACE] = ACTIONS(261),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_RBRACE] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [68] = {
    [sym_assignment_op] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(267),
    [anon_sym_PERCENT_EQ] = ACTIONS(161),
    [anon_sym_DASH_EQ] = ACTIONS(161),
    [anon_sym_PIPE_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LT_LT_EQ] = ACTIONS(161),
    [anon_sym_SLASH_EQ] = ACTIONS(161),
    [anon_sym_GT_GT_EQ] = ACTIONS(161),
    [anon_sym_AMP_EQ] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_RBRACE] = ACTIONS(267),
    [anon_sym_STAR_EQ] = ACTIONS(161),
    [anon_sym_CARET_EQ] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
  },
  [69] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(271),
    [anon_sym_LPAREN] = ACTIONS(271),
    [sym_long] = ACTIONS(273),
    [sym_double] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(273),
    [sym_oct] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [sym_float] = ACTIONS(273),
    [sym_hex] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(271),
    [sym_integer] = ACTIONS(271),
    [sym_binary] = ACTIONS(273),
  },
  [71] = {
    [sym__literal] = STATE(147),
    [sym_group_expression] = STATE(147),
    [sym_assignment_expression] = STATE(145),
    [sym_string] = STATE(147),
    [sym_character] = STATE(147),
    [sym_unary_op] = STATE(146),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(147),
    [sym__value] = STATE(147),
    [sym_identifier] = ACTIONS(275),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_double] = ACTIONS(277),
    [sym_float] = ACTIONS(277),
    [sym_oct] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(105),
    [sym_null] = ACTIONS(275),
    [sym_binary] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(277),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(277),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(275),
  },
  [72] = {
    [anon_sym_RPAREN] = ACTIONS(279),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [73] = {
    [sym__literal] = STATE(149),
    [sym_group_expression] = STATE(149),
    [sym__number] = STATE(149),
    [sym_string] = STATE(149),
    [sym_character] = STATE(149),
    [sym__value] = STATE(149),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(281),
    [sym_identifier] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(281),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(283),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(281),
    [sym_hex] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(283),
    [sym_integer] = ACTIONS(283),
    [sym_binary] = ACTIONS(281),
  },
  [74] = {
    [sym_assignment_op] = STATE(143),
    [anon_sym_AMP_EQ] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(161),
    [anon_sym_DASH_EQ] = ACTIONS(161),
    [anon_sym_PIPE_EQ] = ACTIONS(161),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_PLUS_EQ] = ACTIONS(161),
    [anon_sym_STAR_EQ] = ACTIONS(161),
    [anon_sym_CARET_EQ] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(161),
    [anon_sym_SLASH_EQ] = ACTIONS(161),
    [anon_sym_GT_GT_EQ] = ACTIONS(161),
  },
  [75] = {
    [sym_binary_op] = STATE(151),
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
  },
  [76] = {
    [anon_sym_DOT] = ACTIONS(289),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [77] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(291),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym_integer] = ACTIONS(293),
    [anon_sym_section] = ACTIONS(293),
    [anon_sym_s8] = ACTIONS(293),
    [sym_double] = ACTIONS(295),
    [anon_sym_method] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [anon_sym_while] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_publish] = ACTIONS(293),
    [sym_readonly] = ACTIONS(293),
    [anon_sym_i64] = ACTIONS(293),
    [anon_sym_f32] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [sym_null] = ACTIONS(293),
    [sym_long] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(293),
    [sym_hex] = ACTIONS(295),
    [anon_sym_module] = ACTIONS(293),
    [anon_sym_switch] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_private] = ACTIONS(293),
    [anon_sym_u8] = ACTIONS(293),
    [anon_sym_f64] = ACTIONS(293),
    [anon_sym_u32] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_i8] = ACTIONS(293),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_goto] = ACTIONS(293),
    [sym_oct] = ACTIONS(293),
    [anon_sym_s32] = ACTIONS(293),
    [sym_float] = ACTIONS(295),
    [sym_binary] = ACTIONS(295),
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_function] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(293),
    [anon_sym_u16] = ACTIONS(293),
    [anon_sym_i32] = ACTIONS(293),
    [anon_sym_u64] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_i16] = ACTIONS(293),
  },
  [79] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(129),
    [sym_variable_definition] = STATE(155),
    [sym__comma_list_variables] = STATE(156),
    [sym__base_type] = STATE(38),
    [anon_sym_RPAREN] = ACTIONS(297),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
  },
  [80] = {
    [aux_sym_compound_macro_repeat1] = STATE(158),
    [sym_parameter_list] = STATE(159),
    [sym__space] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [anon_sym_DOT] = ACTIONS(299),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [82] = {
    [anon_sym_DOT] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_SQUOTE] = ACTIONS(303),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [84] = {
    [aux_sym_string_repeat1] = STATE(163),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(305),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [85] = {
    [sym__escape_sequence] = STATE(164),
    [anon_sym_BSLASH0] = ACTIONS(309),
    [anon_sym_BSLASHr] = ACTIONS(309),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(309),
    [anon_sym_BSLASHa] = ACTIONS(309),
    [anon_sym_BSLASHt] = ACTIONS(309),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(309),
    [anon_sym_BSLASHv] = ACTIONS(309),
    [anon_sym_BSLASHn] = ACTIONS(309),
    [aux_sym_character_token1] = ACTIONS(311),
    [anon_sym_BSLASHf] = ACTIONS(309),
  },
  [86] = {
    [sym_integer] = ACTIONS(313),
    [anon_sym_section] = ACTIONS(313),
    [anon_sym_s8] = ACTIONS(313),
    [sym_double] = ACTIONS(315),
    [anon_sym_method] = ACTIONS(313),
    [anon_sym_end] = ACTIONS(313),
    [anon_sym_while] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_publish] = ACTIONS(313),
    [sym_readonly] = ACTIONS(313),
    [anon_sym_i64] = ACTIONS(313),
    [anon_sym_f32] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [sym_null] = ACTIONS(313),
    [sym_long] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(313),
    [sym_hex] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(313),
    [anon_sym_switch] = ACTIONS(313),
    [sym_identifier] = ACTIONS(313),
    [anon_sym_private] = ACTIONS(313),
    [anon_sym_u8] = ACTIONS(313),
    [anon_sym_f64] = ACTIONS(313),
    [anon_sym_u32] = ACTIONS(313),
    [anon_sym_SQUOTE] = ACTIONS(315),
    [anon_sym_i8] = ACTIONS(313),
    [anon_sym_return] = ACTIONS(313),
    [anon_sym_goto] = ACTIONS(313),
    [sym_oct] = ACTIONS(313),
    [anon_sym_s32] = ACTIONS(313),
    [sym_float] = ACTIONS(315),
    [sym_binary] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_function] = ACTIONS(313),
    [anon_sym_DQUOTE] = ACTIONS(315),
    [anon_sym_if] = ACTIONS(313),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(313),
    [anon_sym_u16] = ACTIONS(313),
    [anon_sym_i32] = ACTIONS(313),
    [anon_sym_u64] = ACTIONS(313),
    [anon_sym_enum] = ACTIONS(313),
    [anon_sym_i16] = ACTIONS(313),
  },
  [87] = {
    [sym_assignment_op] = STATE(98),
    [sym_integer] = ACTIONS(317),
    [anon_sym_section] = ACTIONS(317),
    [anon_sym_CARET_EQ] = ACTIONS(161),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(317),
    [sym_double] = ACTIONS(267),
    [anon_sym_PLUS_EQ] = ACTIONS(161),
    [anon_sym_method] = ACTIONS(317),
    [anon_sym_end] = ACTIONS(317),
    [anon_sym_while] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(267),
    [anon_sym_publish] = ACTIONS(317),
    [sym_readonly] = ACTIONS(317),
    [anon_sym_i64] = ACTIONS(317),
    [anon_sym_f32] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [sym_null] = ACTIONS(317),
    [sym_long] = ACTIONS(267),
    [anon_sym_AMP_EQ] = ACTIONS(161),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_LT_LT_EQ] = ACTIONS(161),
    [anon_sym_s16] = ACTIONS(317),
    [sym_hex] = ACTIONS(267),
    [anon_sym_SLASH_EQ] = ACTIONS(161),
    [anon_sym_GT_GT_EQ] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(317),
    [anon_sym_switch] = ACTIONS(317),
    [sym_identifier] = ACTIONS(317),
    [anon_sym_PERCENT_EQ] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(317),
    [anon_sym_u8] = ACTIONS(317),
    [anon_sym_f64] = ACTIONS(317),
    [anon_sym_u32] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(267),
    [anon_sym_i8] = ACTIONS(317),
    [anon_sym_return] = ACTIONS(317),
    [anon_sym_goto] = ACTIONS(317),
    [sym_oct] = ACTIONS(317),
    [anon_sym_s32] = ACTIONS(317),
    [sym_float] = ACTIONS(267),
    [sym_binary] = ACTIONS(267),
    [anon_sym_DASH_EQ] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_PIPE_EQ] = ACTIONS(161),
    [anon_sym_function] = ACTIONS(317),
    [anon_sym_DQUOTE] = ACTIONS(267),
    [anon_sym_if] = ACTIONS(317),
    [anon_sym_STAR_EQ] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(317),
    [anon_sym_u16] = ACTIONS(317),
    [anon_sym_i32] = ACTIONS(317),
    [anon_sym_u64] = ACTIONS(317),
    [anon_sym_enum] = ACTIONS(317),
    [anon_sym_i16] = ACTIONS(317),
  },
  [88] = {
    [anon_sym_DOT] = ACTIONS(319),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(321),
    [anon_sym_PLUS_EQ] = ACTIONS(321),
    [anon_sym_PIPE_PIPE] = ACTIONS(321),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_LT_LT_EQ] = ACTIONS(321),
    [anon_sym_SLASH_EQ] = ACTIONS(321),
    [anon_sym_GT_GT_EQ] = ACTIONS(321),
    [anon_sym_AMP_EQ] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_AMP_AMP] = ACTIONS(321),
    [anon_sym_LT_EQ] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(321),
    [anon_sym_CARET] = ACTIONS(323),
    [anon_sym_PLUS_PLUS] = ACTIONS(321),
    [anon_sym_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_DASH_EQ] = ACTIONS(321),
    [anon_sym_PIPE_EQ] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_BANG_EQ] = ACTIONS(321),
    [anon_sym_LT_LT] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_DASH_DASH] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_STAR_EQ] = ACTIONS(321),
    [anon_sym_CARET_EQ] = ACTIONS(321),
    [sym__space] = ACTIONS(3),
  },
  [90] = {
    [aux_sym_string_repeat1] = STATE(166),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(325),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [91] = {
    [sym__literal] = STATE(169),
    [sym_group_expression] = STATE(169),
    [sym_assignment_expression] = STATE(167),
    [sym_string] = STATE(169),
    [sym_character] = STATE(169),
    [sym_unary_op] = STATE(168),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(169),
    [sym__value] = STATE(169),
    [sym_identifier] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_double] = ACTIONS(331),
    [sym_float] = ACTIONS(331),
    [sym_oct] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(105),
    [sym_null] = ACTIONS(329),
    [sym_binary] = ACTIONS(331),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(329),
  },
  [92] = {
    [sym_collection] = STATE(74),
    [sym_group_expression] = STATE(27),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(129),
    [sym_assignment_expression] = STATE(28),
    [sym_single_line_if_statement] = STATE(171),
    [sym_string] = STATE(37),
    [sym_while_statement_with_block] = STATE(172),
    [sym_character] = STATE(37),
    [sym__statement] = STATE(171),
    [sym_expression_statement] = STATE(172),
    [sym_return_statement] = STATE(172),
    [sym_variable_definition] = STATE(172),
    [sym_goto_statement] = STATE(172),
    [sym_section_statement] = STATE(172),
    [sym__value] = STATE(37),
    [sym__while_statement] = STATE(130),
    [sym__literal] = STATE(37),
    [sym__variable_statement] = STATE(172),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(172),
    [sym__collection_or_value] = STATE(74),
    [sym__if_statement] = STATE(134),
    [sym__number] = STATE(37),
    [sym_if_statement_with_block] = STATE(172),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(172),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [sym_null] = ACTIONS(31),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [93] = {
    [sym__enum_element] = STATE(174),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(175),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [95] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [sym_integer] = ACTIONS(339),
    [anon_sym_section] = ACTIONS(339),
    [anon_sym_s8] = ACTIONS(339),
    [sym_double] = ACTIONS(341),
    [anon_sym_method] = ACTIONS(339),
    [anon_sym_end] = ACTIONS(339),
    [anon_sym_while] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_publish] = ACTIONS(339),
    [sym_readonly] = ACTIONS(339),
    [anon_sym_i64] = ACTIONS(339),
    [anon_sym_f32] = ACTIONS(339),
    [anon_sym_LPAREN] = ACTIONS(339),
    [sym_null] = ACTIONS(339),
    [sym_long] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(339),
    [sym_hex] = ACTIONS(341),
    [anon_sym_module] = ACTIONS(339),
    [anon_sym_switch] = ACTIONS(339),
    [sym_identifier] = ACTIONS(339),
    [anon_sym_private] = ACTIONS(339),
    [anon_sym_u8] = ACTIONS(339),
    [anon_sym_f64] = ACTIONS(339),
    [anon_sym_u32] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(341),
    [anon_sym_i8] = ACTIONS(339),
    [anon_sym_return] = ACTIONS(339),
    [anon_sym_goto] = ACTIONS(339),
    [sym_oct] = ACTIONS(339),
    [anon_sym_s32] = ACTIONS(339),
    [sym_float] = ACTIONS(341),
    [sym_binary] = ACTIONS(341),
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_function] = ACTIONS(339),
    [anon_sym_DQUOTE] = ACTIONS(341),
    [anon_sym_if] = ACTIONS(339),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(339),
    [anon_sym_u16] = ACTIONS(339),
    [anon_sym_i32] = ACTIONS(339),
    [anon_sym_u64] = ACTIONS(339),
    [anon_sym_enum] = ACTIONS(339),
    [anon_sym_i16] = ACTIONS(339),
  },
  [97] = {
    [sym_identifier] = ACTIONS(343),
    [sym_double] = ACTIONS(345),
    [sym_float] = ACTIONS(345),
    [sym_oct] = ACTIONS(343),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_null] = ACTIONS(343),
    [sym_binary] = ACTIONS(345),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(345),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(345),
    [sym_integer] = ACTIONS(343),
  },
  [98] = {
    [sym__literal] = STATE(181),
    [sym_group_expression] = STATE(181),
    [sym_string] = STATE(181),
    [sym_character] = STATE(181),
    [sym__collection_or_value] = STATE(181),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(181),
    [sym__value] = STATE(181),
    [sym_identifier] = ACTIONS(347),
    [sym_double] = ACTIONS(349),
    [sym_float] = ACTIONS(349),
    [sym_oct] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(353),
    [sym_null] = ACTIONS(347),
    [sym_binary] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(357),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(349),
    [sym_integer] = ACTIONS(347),
  },
  [99] = {
    [sym_parameter_list] = STATE(184),
    [sym_return_list] = STATE(185),
    [anon_sym_DOT] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [sym_static_assignment] = STATE(187),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_DOT] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [sym_integer] = ACTIONS(367),
    [anon_sym_section] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_s8] = ACTIONS(367),
    [sym_double] = ACTIONS(369),
    [anon_sym_method] = ACTIONS(367),
    [anon_sym_end] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(367),
    [anon_sym_LBRACE] = ACTIONS(369),
    [anon_sym_publish] = ACTIONS(367),
    [sym_readonly] = ACTIONS(367),
    [anon_sym_i64] = ACTIONS(367),
    [anon_sym_f32] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(367),
    [sym_null] = ACTIONS(367),
    [sym_long] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(367),
    [sym_hex] = ACTIONS(369),
    [anon_sym_module] = ACTIONS(367),
    [anon_sym_switch] = ACTIONS(367),
    [sym_identifier] = ACTIONS(367),
    [anon_sym_COMMA] = ACTIONS(369),
    [anon_sym_private] = ACTIONS(367),
    [anon_sym_u8] = ACTIONS(367),
    [anon_sym_f64] = ACTIONS(367),
    [anon_sym_u32] = ACTIONS(367),
    [anon_sym_SQUOTE] = ACTIONS(369),
    [anon_sym_i8] = ACTIONS(367),
    [anon_sym_return] = ACTIONS(367),
    [anon_sym_goto] = ACTIONS(367),
    [sym_oct] = ACTIONS(367),
    [anon_sym_s32] = ACTIONS(367),
    [sym_float] = ACTIONS(369),
    [sym_binary] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(369),
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_function] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(369),
    [anon_sym_if] = ACTIONS(367),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(367),
    [anon_sym_u16] = ACTIONS(367),
    [anon_sym_i32] = ACTIONS(367),
    [anon_sym_u64] = ACTIONS(367),
    [anon_sym_enum] = ACTIONS(367),
    [anon_sym_i16] = ACTIONS(367),
  },
  [102] = {
    [sym_integer] = ACTIONS(371),
    [anon_sym_section] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_s8] = ACTIONS(371),
    [sym_double] = ACTIONS(373),
    [anon_sym_method] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(371),
    [anon_sym_while] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_publish] = ACTIONS(371),
    [sym_readonly] = ACTIONS(371),
    [anon_sym_i64] = ACTIONS(371),
    [anon_sym_f32] = ACTIONS(371),
    [anon_sym_LPAREN] = ACTIONS(371),
    [sym_null] = ACTIONS(371),
    [sym_long] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(371),
    [sym_hex] = ACTIONS(373),
    [anon_sym_module] = ACTIONS(371),
    [anon_sym_switch] = ACTIONS(371),
    [sym_identifier] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_private] = ACTIONS(371),
    [anon_sym_u8] = ACTIONS(371),
    [anon_sym_f64] = ACTIONS(371),
    [anon_sym_u32] = ACTIONS(371),
    [anon_sym_SQUOTE] = ACTIONS(373),
    [anon_sym_i8] = ACTIONS(371),
    [anon_sym_return] = ACTIONS(371),
    [anon_sym_goto] = ACTIONS(371),
    [sym_oct] = ACTIONS(371),
    [anon_sym_s32] = ACTIONS(371),
    [sym_float] = ACTIONS(373),
    [sym_binary] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_function] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [anon_sym_if] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(371),
    [anon_sym_u16] = ACTIONS(371),
    [anon_sym_i32] = ACTIONS(371),
    [anon_sym_u64] = ACTIONS(371),
    [anon_sym_enum] = ACTIONS(371),
    [anon_sym_i16] = ACTIONS(371),
  },
  [103] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(375),
    [sym_integer] = ACTIONS(377),
    [sym__comment] = ACTIONS(3),
  },
  [104] = {
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(379),
    [anon_sym_COMMA] = ACTIONS(379),
    [sym__comment] = ACTIONS(3),
  },
  [105] = {
    [sym_array] = STATE(190),
    [aux_sym_type_repeat2] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(383),
    [sym__comment] = ACTIONS(3),
  },
  [106] = {
    [aux_sym_type_repeat2] = STATE(191),
    [sym_pointer] = STATE(192),
    [aux_sym_type_repeat1] = STATE(192),
    [sym_array] = STATE(191),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(383),
    [anon_sym_STAR] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(29),
    [sym_end_module] = STATE(30),
    [sym_string] = STATE(37),
    [sym_end_case] = STATE(30),
    [sym_character] = STATE(37),
    [sym_sentence] = STATE(107),
    [sym_enum_definition] = STATE(31),
    [sym_variable_definition] = STATE(30),
    [sym_goto_statement] = STATE(30),
    [sym_section_statement] = STATE(30),
    [sym_while_statement] = STATE(30),
    [sym__while_statement] = STATE(32),
    [sym__variable_statement] = STATE(30),
    [sym_end_function] = STATE(30),
    [sym_end_method] = STATE(30),
    [sym_end_default] = STATE(30),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(30),
    [sym__collection_or_value] = STATE(33),
    [sym_collection] = STATE(33),
    [sym_is_method] = STATE(34),
    [sym_is_function] = STATE(34),
    [sym_type] = STATE(35),
    [sym_single_line_if_statement] = STATE(31),
    [sym_if_statement] = STATE(30),
    [sym_switch_statement] = STATE(30),
    [sym_expression_statement] = STATE(31),
    [sym_return_statement] = STATE(31),
    [sym_end_if] = STATE(30),
    [sym_end_while] = STATE(30),
    [sym__start_module_definition] = STATE(36),
    [sym_start_module_definition] = STATE(31),
    [sym_end_compound_macro] = STATE(31),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__value] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__literal] = STATE(37),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(39),
    [aux_sym_sentences_repeat1] = STATE(107),
    [sym__switch_statement] = STATE(41),
    [sym_integer] = ACTIONS(385),
    [anon_sym_section] = ACTIONS(388),
    [anon_sym_s8] = ACTIONS(391),
    [sym_double] = ACTIONS(394),
    [anon_sym_method] = ACTIONS(397),
    [anon_sym_end] = ACTIONS(400),
    [anon_sym_while] = ACTIONS(403),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_publish] = ACTIONS(409),
    [sym_readonly] = ACTIONS(412),
    [anon_sym_i64] = ACTIONS(391),
    [anon_sym_f32] = ACTIONS(391),
    [anon_sym_LPAREN] = ACTIONS(415),
    [sym_null] = ACTIONS(385),
    [sym_long] = ACTIONS(394),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(391),
    [sym_hex] = ACTIONS(394),
    [anon_sym_module] = ACTIONS(418),
    [anon_sym_switch] = ACTIONS(421),
    [sym_identifier] = ACTIONS(424),
    [anon_sym_private] = ACTIONS(409),
    [anon_sym_u8] = ACTIONS(391),
    [anon_sym_f64] = ACTIONS(391),
    [anon_sym_u32] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(427),
    [anon_sym_i8] = ACTIONS(391),
    [anon_sym_return] = ACTIONS(430),
    [anon_sym_goto] = ACTIONS(433),
    [sym_oct] = ACTIONS(385),
    [anon_sym_s32] = ACTIONS(391),
    [sym_float] = ACTIONS(394),
    [sym_binary] = ACTIONS(394),
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_function] = ACTIONS(438),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_if] = ACTIONS(444),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(409),
    [anon_sym_u16] = ACTIONS(391),
    [anon_sym_i32] = ACTIONS(391),
    [anon_sym_u64] = ACTIONS(391),
    [anon_sym_enum] = ACTIONS(447),
    [anon_sym_i16] = ACTIONS(391),
  },
  [108] = {
    [sym_is_declare] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_s8] = ACTIONS(450),
    [anon_sym_private] = ACTIONS(450),
    [anon_sym_u8] = ACTIONS(450),
    [anon_sym_f64] = ACTIONS(450),
    [anon_sym_u32] = ACTIONS(450),
    [anon_sym_i8] = ACTIONS(450),
    [anon_sym_method] = ACTIONS(450),
    [anon_sym_end] = ACTIONS(450),
    [anon_sym_s32] = ACTIONS(450),
    [anon_sym_publish] = ACTIONS(450),
    [sym_readonly] = ACTIONS(450),
    [anon_sym_i64] = ACTIONS(450),
    [anon_sym_f32] = ACTIONS(450),
    [sym_is_external] = ACTIONS(450),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(450),
    [anon_sym_s16] = ACTIONS(450),
    [anon_sym_protected] = ACTIONS(450),
    [anon_sym_u16] = ACTIONS(450),
    [anon_sym_i32] = ACTIONS(450),
    [anon_sym_u64] = ACTIONS(450),
    [anon_sym_enum] = ACTIONS(450),
    [anon_sym_i16] = ACTIONS(450),
  },
  [109] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(193),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [110] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(452),
    [sym__comment] = ACTIONS(3),
  },
  [111] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(454),
    [sym__comment] = ACTIONS(3),
  },
  [112] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(197),
    [sym_type] = STATE(193),
    [sym_is_function] = STATE(197),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(456),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(47),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [113] = {
    [sym_is_declare] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(458),
    [anon_sym_s8] = ACTIONS(458),
    [anon_sym_private] = ACTIONS(458),
    [anon_sym_u8] = ACTIONS(458),
    [anon_sym_f64] = ACTIONS(458),
    [anon_sym_u32] = ACTIONS(458),
    [anon_sym_i8] = ACTIONS(458),
    [anon_sym_method] = ACTIONS(458),
    [anon_sym_end] = ACTIONS(458),
    [anon_sym_s32] = ACTIONS(458),
    [anon_sym_publish] = ACTIONS(458),
    [sym_readonly] = ACTIONS(458),
    [anon_sym_i64] = ACTIONS(458),
    [anon_sym_f32] = ACTIONS(458),
    [sym_is_external] = ACTIONS(458),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(458),
    [anon_sym_s16] = ACTIONS(458),
    [anon_sym_protected] = ACTIONS(458),
    [anon_sym_u16] = ACTIONS(458),
    [anon_sym_i32] = ACTIONS(458),
    [anon_sym_u64] = ACTIONS(458),
    [anon_sym_enum] = ACTIONS(458),
    [anon_sym_i16] = ACTIONS(458),
  },
  [114] = {
    [sym_integer] = ACTIONS(293),
    [anon_sym_section] = ACTIONS(293),
    [anon_sym_s8] = ACTIONS(293),
    [sym_double] = ACTIONS(295),
    [anon_sym_method] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [anon_sym_while] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_publish] = ACTIONS(293),
    [sym_readonly] = ACTIONS(293),
    [anon_sym_i64] = ACTIONS(293),
    [anon_sym_f32] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [sym_null] = ACTIONS(293),
    [sym_long] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(293),
    [sym_is_declare] = ACTIONS(293),
    [sym_hex] = ACTIONS(295),
    [anon_sym_switch] = ACTIONS(293),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_private] = ACTIONS(293),
    [anon_sym_u8] = ACTIONS(293),
    [anon_sym_f64] = ACTIONS(293),
    [anon_sym_u32] = ACTIONS(293),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_i8] = ACTIONS(293),
    [anon_sym_return] = ACTIONS(293),
    [anon_sym_goto] = ACTIONS(293),
    [sym_oct] = ACTIONS(293),
    [anon_sym_s32] = ACTIONS(293),
    [sym_is_external] = ACTIONS(293),
    [sym_float] = ACTIONS(295),
    [sym_binary] = ACTIONS(295),
    [anon_sym_function] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [anon_sym_if] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(293),
    [anon_sym_u16] = ACTIONS(293),
    [anon_sym_i32] = ACTIONS(293),
    [anon_sym_u64] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_i16] = ACTIONS(293),
  },
  [115] = {
    [aux_sym_compound_macro_repeat1] = STATE(158),
    [sym_parameter_list] = STATE(199),
    [sym__space] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(460),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [117] = {
    [sym__enum_element] = STATE(200),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [sym_parameter_list] = STATE(202),
    [sym_return_list] = STATE(203),
    [anon_sym_DOT] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_module] = ACTIONS(466),
    [ts_builtin_sym_end] = ACTIONS(466),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [121] = {
    [sym_is_declare] = ACTIONS(468),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(468),
    [anon_sym_s8] = ACTIONS(468),
    [anon_sym_private] = ACTIONS(468),
    [anon_sym_u8] = ACTIONS(468),
    [anon_sym_f64] = ACTIONS(468),
    [anon_sym_u32] = ACTIONS(468),
    [anon_sym_i8] = ACTIONS(468),
    [anon_sym_method] = ACTIONS(468),
    [anon_sym_end] = ACTIONS(468),
    [anon_sym_s32] = ACTIONS(468),
    [anon_sym_publish] = ACTIONS(468),
    [sym_readonly] = ACTIONS(468),
    [anon_sym_i64] = ACTIONS(468),
    [anon_sym_f32] = ACTIONS(468),
    [sym_is_external] = ACTIONS(468),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(468),
    [anon_sym_s16] = ACTIONS(468),
    [anon_sym_protected] = ACTIONS(468),
    [anon_sym_u16] = ACTIONS(468),
    [anon_sym_i32] = ACTIONS(468),
    [anon_sym_u64] = ACTIONS(468),
    [anon_sym_enum] = ACTIONS(468),
    [anon_sym_i16] = ACTIONS(468),
  },
  [122] = {
    [anon_sym_DOT] = ACTIONS(470),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [123] = {
    [sym_is_method] = STATE(48),
    [sym_type] = STATE(35),
    [sym_declaration_definition] = STATE(123),
    [sym_access_control] = STATE(49),
    [sym_enum_definition] = STATE(123),
    [sym_variable_definition] = STATE(51),
    [aux_sym_module_definition_repeat1] = STATE(123),
    [sym_compound_macro] = STATE(53),
    [sym_function_signature] = STATE(54),
    [sym_function_definition] = STATE(123),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__definitions] = STATE(123),
    [sym_compound_macro_block] = STATE(123),
    [sym_is_function] = STATE(48),
    [sym_is_declare] = ACTIONS(472),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(475),
    [anon_sym_s8] = ACTIONS(478),
    [anon_sym_private] = ACTIONS(481),
    [anon_sym_u8] = ACTIONS(478),
    [anon_sym_f64] = ACTIONS(478),
    [anon_sym_u32] = ACTIONS(478),
    [anon_sym_i8] = ACTIONS(478),
    [anon_sym_method] = ACTIONS(484),
    [anon_sym_end] = ACTIONS(487),
    [anon_sym_s32] = ACTIONS(478),
    [anon_sym_publish] = ACTIONS(481),
    [sym_readonly] = ACTIONS(489),
    [anon_sym_i64] = ACTIONS(478),
    [anon_sym_f32] = ACTIONS(478),
    [sym_is_external] = ACTIONS(472),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(492),
    [anon_sym_s16] = ACTIONS(478),
    [anon_sym_protected] = ACTIONS(481),
    [anon_sym_u16] = ACTIONS(478),
    [anon_sym_i32] = ACTIONS(478),
    [anon_sym_u64] = ACTIONS(478),
    [anon_sym_enum] = ACTIONS(495),
    [anon_sym_i16] = ACTIONS(478),
  },
  [124] = {
    [sym_compound_macro] = STATE(207),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
  },
  [125] = {
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(95),
    [anon_sym_u8] = ACTIONS(95),
    [anon_sym_f64] = ACTIONS(95),
    [anon_sym_u32] = ACTIONS(95),
    [anon_sym_i8] = ACTIONS(95),
    [anon_sym_s32] = ACTIONS(95),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(95),
    [anon_sym_i64] = ACTIONS(95),
    [anon_sym_f32] = ACTIONS(95),
    [anon_sym_s16] = ACTIONS(95),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(95),
    [anon_sym_i32] = ACTIONS(95),
    [anon_sym_u64] = ACTIONS(95),
    [anon_sym_i16] = ACTIONS(95),
  },
  [126] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_DASH_EQ] = ACTIONS(111),
    [anon_sym_PERCENT_EQ] = ACTIONS(111),
    [anon_sym_PIPE_EQ] = ACTIONS(111),
    [anon_sym_PLUS_EQ] = ACTIONS(111),
    [anon_sym_LT_LT_EQ] = ACTIONS(111),
    [anon_sym_SLASH_EQ] = ACTIONS(111),
    [anon_sym_GT_GT_EQ] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_AMP_EQ] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(121),
    [anon_sym_STAR_EQ] = ACTIONS(111),
    [anon_sym_CARET_EQ] = ACTIONS(111),
    [sym__space] = ACTIONS(3),
  },
  [127] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(86),
    [sym__assignment_or_collection_or_value] = STATE(86),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(68),
    [sym_collection] = STATE(68),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [128] = {
    [sym_group_expression] = STATE(208),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [129] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(69),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(151),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [130] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(210),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(210),
    [sym_single_line_if_statement] = STATE(210),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_while] = STATE(211),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(500),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [131] = {
    [anon_sym_DOT] = ACTIONS(502),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [132] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_compound_macro] = STATE(214),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(504),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [133] = {
    [sym_is_declare] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(506),
    [anon_sym_s8] = ACTIONS(506),
    [anon_sym_private] = ACTIONS(506),
    [anon_sym_u8] = ACTIONS(506),
    [anon_sym_f64] = ACTIONS(506),
    [anon_sym_u32] = ACTIONS(506),
    [anon_sym_i8] = ACTIONS(506),
    [anon_sym_method] = ACTIONS(506),
    [anon_sym_end] = ACTIONS(506),
    [anon_sym_s32] = ACTIONS(506),
    [anon_sym_publish] = ACTIONS(506),
    [sym_readonly] = ACTIONS(506),
    [anon_sym_i64] = ACTIONS(506),
    [anon_sym_f32] = ACTIONS(506),
    [sym_is_external] = ACTIONS(506),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(506),
    [anon_sym_s16] = ACTIONS(506),
    [anon_sym_protected] = ACTIONS(506),
    [anon_sym_u16] = ACTIONS(506),
    [anon_sym_i32] = ACTIONS(506),
    [anon_sym_u64] = ACTIONS(506),
    [anon_sym_enum] = ACTIONS(506),
    [anon_sym_i16] = ACTIONS(506),
  },
  [134] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(216),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(216),
    [sym_single_line_if_statement] = STATE(216),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_if] = STATE(217),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(508),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [135] = {
    [sym_default_statement_with_block] = STATE(220),
    [sym_case_statement_with_block] = STATE(222),
    [sym__case_statement] = STATE(221),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(222),
    [sym__default_statement] = STATE(223),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(510),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(512),
  },
  [136] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_function] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
  },
  [137] = {
    [anon_sym_DOT] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [138] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym_end_function] = STATE(225),
    [sym_end_method] = STATE(225),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(225),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(233),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [139] = {
    [anon_sym_section] = ACTIONS(520),
    [anon_sym_s8] = ACTIONS(520),
    [sym_double] = ACTIONS(522),
    [anon_sym_LBRACE] = ACTIONS(522),
    [anon_sym_end] = ACTIONS(520),
    [anon_sym_while] = ACTIONS(520),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(520),
    [sym_readonly] = ACTIONS(520),
    [anon_sym_i64] = ACTIONS(520),
    [anon_sym_f32] = ACTIONS(520),
    [sym_null] = ACTIONS(520),
    [anon_sym_LPAREN] = ACTIONS(520),
    [sym_long] = ACTIONS(522),
    [anon_sym_s16] = ACTIONS(520),
    [sym_hex] = ACTIONS(522),
    [anon_sym_switch] = ACTIONS(520),
    [sym_identifier] = ACTIONS(520),
    [anon_sym_private] = ACTIONS(520),
    [anon_sym_u8] = ACTIONS(520),
    [anon_sym_f64] = ACTIONS(520),
    [anon_sym_u32] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(522),
    [anon_sym_i8] = ACTIONS(520),
    [anon_sym_return] = ACTIONS(520),
    [anon_sym_goto] = ACTIONS(520),
    [sym_oct] = ACTIONS(520),
    [anon_sym_s32] = ACTIONS(520),
    [sym_float] = ACTIONS(522),
    [sym_binary] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [anon_sym_if] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(520),
    [anon_sym_u16] = ACTIONS(520),
    [anon_sym_i32] = ACTIONS(520),
    [anon_sym_u64] = ACTIONS(520),
    [sym_integer] = ACTIONS(520),
    [anon_sym_i16] = ACTIONS(520),
  },
  [140] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(226),
    [sym__assignment_or_collection_or_value] = STATE(226),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(68),
    [sym_collection] = STATE(68),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [141] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(227),
    [anon_sym_RBRACE] = ACTIONS(524),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(263),
    [sym__comment] = ACTIONS(3),
  },
  [142] = {
    [anon_sym_s8] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_end] = ACTIONS(526),
    [sym_null] = ACTIONS(526),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(528),
    [sym_readonly] = ACTIONS(526),
    [anon_sym_f32] = ACTIONS(526),
    [anon_sym_s16] = ACTIONS(526),
    [anon_sym_module] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_private] = ACTIONS(526),
    [anon_sym_f64] = ACTIONS(526),
    [sym_oct] = ACTIONS(526),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_goto] = ACTIONS(526),
    [anon_sym_s32] = ACTIONS(526),
    [anon_sym_function] = ACTIONS(526),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [anon_sym_if] = ACTIONS(526),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_protected] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(526),
    [sym_integer] = ACTIONS(526),
    [anon_sym_enum] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_section] = ACTIONS(526),
    [sym_double] = ACTIONS(528),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [anon_sym_method] = ACTIONS(526),
    [anon_sym_LT_LT_EQ] = ACTIONS(528),
    [anon_sym_while] = ACTIONS(526),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_publish] = ACTIONS(526),
    [anon_sym_AMP_EQ] = ACTIONS(528),
    [anon_sym_i64] = ACTIONS(526),
    [sym_long] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(526),
    [anon_sym_COLON_EQ] = ACTIONS(528),
    [sym_hex] = ACTIONS(528),
    [anon_sym_switch] = ACTIONS(526),
    [anon_sym_PERCENT_EQ] = ACTIONS(528),
    [anon_sym_PIPE_EQ] = ACTIONS(528),
    [anon_sym_u8] = ACTIONS(526),
    [sym_float] = ACTIONS(528),
    [anon_sym_u32] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_i8] = ACTIONS(526),
    [anon_sym_return] = ACTIONS(526),
    [sym_binary] = ACTIONS(528),
    [ts_builtin_sym_end] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [anon_sym_u16] = ACTIONS(526),
    [anon_sym_u64] = ACTIONS(526),
    [anon_sym_i16] = ACTIONS(526),
  },
  [143] = {
    [sym__literal] = STATE(181),
    [sym_group_expression] = STATE(181),
    [sym_string] = STATE(181),
    [sym_character] = STATE(181),
    [sym__collection_or_value] = STATE(181),
    [sym_collection] = STATE(181),
    [sym__number] = STATE(181),
    [sym__value] = STATE(181),
    [sym_identifier] = ACTIONS(347),
    [sym_double] = ACTIONS(349),
    [sym_float] = ACTIONS(349),
    [sym_oct] = ACTIONS(347),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(347),
    [sym_binary] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(349),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(349),
    [sym_integer] = ACTIONS(347),
  },
  [144] = {
    [sym_static_assignment] = STATE(228),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_DOT] = ACTIONS(530),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
  },
  [145] = {
    [anon_sym_RPAREN] = ACTIONS(532),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [146] = {
    [sym__literal] = STATE(230),
    [sym_group_expression] = STATE(230),
    [sym__number] = STATE(230),
    [sym_string] = STATE(230),
    [sym_character] = STATE(230),
    [sym__value] = STATE(230),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(534),
    [sym_identifier] = ACTIONS(536),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(534),
    [sym_hex] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(536),
    [sym_integer] = ACTIONS(536),
    [sym_binary] = ACTIONS(534),
  },
  [147] = {
    [sym_binary_op] = STATE(231),
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(532),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_s8] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_end] = ACTIONS(538),
    [sym_null] = ACTIONS(538),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(540),
    [sym_readonly] = ACTIONS(538),
    [anon_sym_f32] = ACTIONS(538),
    [anon_sym_s16] = ACTIONS(538),
    [anon_sym_module] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_DASH_EQ] = ACTIONS(540),
    [anon_sym_private] = ACTIONS(538),
    [anon_sym_f64] = ACTIONS(538),
    [sym_oct] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(540),
    [anon_sym_goto] = ACTIONS(538),
    [anon_sym_s32] = ACTIONS(538),
    [anon_sym_function] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [anon_sym_if] = ACTIONS(538),
    [anon_sym_STAR_EQ] = ACTIONS(540),
    [anon_sym_protected] = ACTIONS(538),
    [anon_sym_i32] = ACTIONS(538),
    [sym_integer] = ACTIONS(538),
    [anon_sym_enum] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_section] = ACTIONS(538),
    [sym_double] = ACTIONS(540),
    [anon_sym_PLUS_EQ] = ACTIONS(540),
    [anon_sym_method] = ACTIONS(538),
    [anon_sym_LT_LT_EQ] = ACTIONS(540),
    [anon_sym_while] = ACTIONS(538),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [anon_sym_publish] = ACTIONS(538),
    [anon_sym_AMP_EQ] = ACTIONS(540),
    [anon_sym_i64] = ACTIONS(538),
    [sym_long] = ACTIONS(540),
    [anon_sym_LPAREN] = ACTIONS(538),
    [anon_sym_COLON_EQ] = ACTIONS(540),
    [sym_hex] = ACTIONS(540),
    [anon_sym_PLUS_PLUS] = ACTIONS(540),
    [anon_sym_switch] = ACTIONS(538),
    [anon_sym_PERCENT_EQ] = ACTIONS(540),
    [anon_sym_PIPE_EQ] = ACTIONS(540),
    [anon_sym_u8] = ACTIONS(538),
    [sym_float] = ACTIONS(540),
    [anon_sym_u32] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_i8] = ACTIONS(538),
    [anon_sym_return] = ACTIONS(538),
    [sym_binary] = ACTIONS(540),
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_DASH_DASH] = ACTIONS(538),
    [anon_sym_RBRACE] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(540),
    [anon_sym_u16] = ACTIONS(538),
    [anon_sym_u64] = ACTIONS(538),
    [anon_sym_i16] = ACTIONS(538),
  },
  [149] = {
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [150] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(544),
    [anon_sym_LPAREN] = ACTIONS(544),
    [sym_long] = ACTIONS(546),
    [sym_double] = ACTIONS(546),
    [anon_sym_DQUOTE] = ACTIONS(546),
    [sym_oct] = ACTIONS(544),
    [anon_sym_SQUOTE] = ACTIONS(546),
    [sym_float] = ACTIONS(546),
    [sym_hex] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(544),
    [sym_integer] = ACTIONS(544),
    [sym_binary] = ACTIONS(546),
  },
  [151] = {
    [sym__literal] = STATE(233),
    [sym_group_expression] = STATE(233),
    [sym__number] = STATE(233),
    [sym_string] = STATE(233),
    [sym_character] = STATE(233),
    [sym__value] = STATE(233),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(548),
    [sym_identifier] = ACTIONS(550),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(548),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(550),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(548),
    [sym_hex] = ACTIONS(548),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(550),
    [sym_integer] = ACTIONS(550),
    [sym_binary] = ACTIONS(548),
  },
  [152] = {
    [sym_integer] = ACTIONS(450),
    [anon_sym_section] = ACTIONS(450),
    [anon_sym_s8] = ACTIONS(450),
    [sym_double] = ACTIONS(552),
    [anon_sym_method] = ACTIONS(450),
    [anon_sym_end] = ACTIONS(450),
    [anon_sym_while] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(552),
    [anon_sym_publish] = ACTIONS(450),
    [sym_readonly] = ACTIONS(450),
    [anon_sym_i64] = ACTIONS(450),
    [anon_sym_f32] = ACTIONS(450),
    [anon_sym_LPAREN] = ACTIONS(450),
    [sym_null] = ACTIONS(450),
    [sym_long] = ACTIONS(552),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(450),
    [sym_hex] = ACTIONS(552),
    [anon_sym_module] = ACTIONS(450),
    [anon_sym_switch] = ACTIONS(450),
    [sym_identifier] = ACTIONS(450),
    [anon_sym_private] = ACTIONS(450),
    [anon_sym_u8] = ACTIONS(450),
    [anon_sym_f64] = ACTIONS(450),
    [anon_sym_u32] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(552),
    [anon_sym_i8] = ACTIONS(450),
    [anon_sym_return] = ACTIONS(450),
    [anon_sym_goto] = ACTIONS(450),
    [sym_oct] = ACTIONS(450),
    [anon_sym_s32] = ACTIONS(450),
    [sym_float] = ACTIONS(552),
    [sym_binary] = ACTIONS(552),
    [ts_builtin_sym_end] = ACTIONS(552),
    [anon_sym_function] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(552),
    [anon_sym_if] = ACTIONS(450),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(450),
    [anon_sym_u16] = ACTIONS(450),
    [anon_sym_i32] = ACTIONS(450),
    [anon_sym_u64] = ACTIONS(450),
    [anon_sym_enum] = ACTIONS(450),
    [anon_sym_i16] = ACTIONS(450),
  },
  [153] = {
    [sym__space] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(554),
    [anon_sym_LPAREN] = ACTIONS(554),
    [sym__comment] = ACTIONS(3),
  },
  [154] = {
    [anon_sym_DOT] = ACTIONS(556),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(556),
    [sym__comment] = ACTIONS(3),
  },
  [155] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(235),
    [anon_sym_RPAREN] = ACTIONS(558),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(560),
    [sym__comment] = ACTIONS(3),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [157] = {
    [sym_integer] = ACTIONS(564),
    [anon_sym_section] = ACTIONS(564),
    [anon_sym_s8] = ACTIONS(564),
    [sym_double] = ACTIONS(566),
    [anon_sym_method] = ACTIONS(564),
    [anon_sym_end] = ACTIONS(564),
    [anon_sym_while] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_publish] = ACTIONS(564),
    [sym_readonly] = ACTIONS(564),
    [anon_sym_i64] = ACTIONS(564),
    [anon_sym_f32] = ACTIONS(564),
    [anon_sym_LPAREN] = ACTIONS(564),
    [sym_null] = ACTIONS(564),
    [sym_long] = ACTIONS(566),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(564),
    [sym_hex] = ACTIONS(566),
    [anon_sym_module] = ACTIONS(564),
    [anon_sym_switch] = ACTIONS(564),
    [sym_identifier] = ACTIONS(564),
    [anon_sym_private] = ACTIONS(564),
    [anon_sym_u8] = ACTIONS(564),
    [anon_sym_f64] = ACTIONS(564),
    [anon_sym_u32] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_i8] = ACTIONS(564),
    [anon_sym_return] = ACTIONS(564),
    [anon_sym_goto] = ACTIONS(564),
    [sym_oct] = ACTIONS(564),
    [anon_sym_s32] = ACTIONS(564),
    [sym_float] = ACTIONS(566),
    [sym_binary] = ACTIONS(566),
    [ts_builtin_sym_end] = ACTIONS(566),
    [anon_sym_function] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_if] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(564),
    [anon_sym_u16] = ACTIONS(564),
    [anon_sym_i32] = ACTIONS(564),
    [anon_sym_u64] = ACTIONS(564),
    [anon_sym_enum] = ACTIONS(564),
    [anon_sym_i16] = ACTIONS(564),
  },
  [158] = {
    [aux_sym_compound_macro_repeat1] = STATE(158),
    [sym__space] = ACTIONS(568),
    [anon_sym_DOT] = ACTIONS(554),
    [anon_sym_LPAREN] = ACTIONS(554),
    [sym__comment] = ACTIONS(3),
  },
  [159] = {
    [anon_sym_DOT] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [160] = {
    [anon_sym_DOT] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(573),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(573),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(577),
    [anon_sym_EQ_EQ] = ACTIONS(575),
    [anon_sym_PLUS_EQ] = ACTIONS(575),
    [anon_sym_PIPE_PIPE] = ACTIONS(575),
    [anon_sym_SLASH] = ACTIONS(577),
    [anon_sym_LT] = ACTIONS(577),
    [anon_sym_LT_LT_EQ] = ACTIONS(575),
    [anon_sym_SLASH_EQ] = ACTIONS(575),
    [anon_sym_GT_GT_EQ] = ACTIONS(575),
    [anon_sym_AMP_EQ] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(577),
    [anon_sym_AMP_AMP] = ACTIONS(575),
    [anon_sym_LT_EQ] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(577),
    [anon_sym_PERCENT] = ACTIONS(577),
    [anon_sym_GT_EQ] = ACTIONS(575),
    [anon_sym_CARET] = ACTIONS(577),
    [anon_sym_PLUS_PLUS] = ACTIONS(575),
    [anon_sym_PERCENT_EQ] = ACTIONS(575),
    [anon_sym_DASH_EQ] = ACTIONS(575),
    [anon_sym_PIPE_EQ] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(575),
    [anon_sym_AMP] = ACTIONS(577),
    [anon_sym_BANG_EQ] = ACTIONS(575),
    [anon_sym_LT_LT] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_DASH_DASH] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(575),
    [anon_sym_STAR_EQ] = ACTIONS(575),
    [anon_sym_CARET_EQ] = ACTIONS(575),
    [sym__space] = ACTIONS(3),
  },
  [162] = {
    [anon_sym_s8] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_end] = ACTIONS(323),
    [sym_null] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(321),
    [sym_readonly] = ACTIONS(323),
    [anon_sym_f32] = ACTIONS(323),
    [anon_sym_s16] = ACTIONS(323),
    [anon_sym_module] = ACTIONS(323),
    [sym_identifier] = ACTIONS(323),
    [anon_sym_DASH_EQ] = ACTIONS(321),
    [anon_sym_private] = ACTIONS(323),
    [anon_sym_f64] = ACTIONS(323),
    [sym_oct] = ACTIONS(323),
    [anon_sym_goto] = ACTIONS(323),
    [anon_sym_s32] = ACTIONS(323),
    [anon_sym_function] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_if] = ACTIONS(323),
    [anon_sym_STAR_EQ] = ACTIONS(321),
    [anon_sym_protected] = ACTIONS(323),
    [anon_sym_i32] = ACTIONS(323),
    [sym_integer] = ACTIONS(323),
    [anon_sym_enum] = ACTIONS(323),
    [anon_sym_section] = ACTIONS(323),
    [sym_double] = ACTIONS(321),
    [anon_sym_PLUS_EQ] = ACTIONS(321),
    [anon_sym_method] = ACTIONS(323),
    [anon_sym_LT_LT_EQ] = ACTIONS(321),
    [anon_sym_while] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(321),
    [anon_sym_publish] = ACTIONS(323),
    [anon_sym_AMP_EQ] = ACTIONS(321),
    [anon_sym_i64] = ACTIONS(323),
    [sym_long] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_COLON_EQ] = ACTIONS(321),
    [sym_hex] = ACTIONS(321),
    [anon_sym_PLUS_PLUS] = ACTIONS(321),
    [anon_sym_switch] = ACTIONS(323),
    [anon_sym_PERCENT_EQ] = ACTIONS(321),
    [anon_sym_PIPE_EQ] = ACTIONS(321),
    [anon_sym_u8] = ACTIONS(323),
    [sym_float] = ACTIONS(321),
    [anon_sym_u32] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_i8] = ACTIONS(323),
    [anon_sym_return] = ACTIONS(323),
    [sym_binary] = ACTIONS(321),
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_DASH_DASH] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(321),
    [anon_sym_u16] = ACTIONS(323),
    [anon_sym_u64] = ACTIONS(323),
    [anon_sym_i16] = ACTIONS(323),
  },
  [163] = {
    [aux_sym_string_repeat1] = STATE(166),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(325),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(579),
  },
  [164] = {
    [anon_sym_SQUOTE] = ACTIONS(581),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_STAR] = ACTIONS(585),
    [anon_sym_EQ_EQ] = ACTIONS(583),
    [anon_sym_PLUS_EQ] = ACTIONS(583),
    [anon_sym_PIPE_PIPE] = ACTIONS(583),
    [anon_sym_SLASH] = ACTIONS(585),
    [anon_sym_LT] = ACTIONS(585),
    [anon_sym_LT_LT_EQ] = ACTIONS(583),
    [anon_sym_SLASH_EQ] = ACTIONS(583),
    [anon_sym_GT_GT_EQ] = ACTIONS(583),
    [anon_sym_AMP_EQ] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(583),
    [anon_sym_DASH] = ACTIONS(585),
    [anon_sym_AMP_AMP] = ACTIONS(583),
    [anon_sym_LT_EQ] = ACTIONS(583),
    [anon_sym_GT_GT] = ACTIONS(585),
    [anon_sym_PERCENT] = ACTIONS(585),
    [anon_sym_GT_EQ] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(585),
    [anon_sym_PLUS_PLUS] = ACTIONS(583),
    [anon_sym_PERCENT_EQ] = ACTIONS(583),
    [anon_sym_DASH_EQ] = ACTIONS(583),
    [anon_sym_PIPE_EQ] = ACTIONS(583),
    [anon_sym_COMMA] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(585),
    [anon_sym_BANG_EQ] = ACTIONS(583),
    [anon_sym_LT_LT] = ACTIONS(585),
    [anon_sym_PIPE] = ACTIONS(585),
    [anon_sym_PLUS] = ACTIONS(585),
    [anon_sym_GT] = ACTIONS(585),
    [anon_sym_DASH_DASH] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_STAR_EQ] = ACTIONS(583),
    [anon_sym_CARET_EQ] = ACTIONS(583),
    [sym__space] = ACTIONS(3),
  },
  [166] = {
    [aux_sym_string_repeat1] = STATE(166),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(587),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(590),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(592),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [168] = {
    [sym__literal] = STATE(241),
    [sym_group_expression] = STATE(241),
    [sym__number] = STATE(241),
    [sym_string] = STATE(241),
    [sym_character] = STATE(241),
    [sym__value] = STATE(241),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(594),
    [sym_identifier] = ACTIONS(596),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(594),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(596),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(594),
    [sym_hex] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(596),
    [sym_integer] = ACTIONS(596),
    [sym_binary] = ACTIONS(594),
  },
  [169] = {
    [sym_binary_op] = STATE(242),
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(592),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
  },
  [170] = {
    [anon_sym_section] = ACTIONS(598),
    [anon_sym_s8] = ACTIONS(598),
    [sym_double] = ACTIONS(600),
    [anon_sym_LBRACE] = ACTIONS(600),
    [anon_sym_end] = ACTIONS(598),
    [anon_sym_while] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(598),
    [sym_readonly] = ACTIONS(598),
    [anon_sym_i64] = ACTIONS(598),
    [anon_sym_f32] = ACTIONS(598),
    [sym_null] = ACTIONS(598),
    [anon_sym_LPAREN] = ACTIONS(598),
    [sym_long] = ACTIONS(600),
    [anon_sym_s16] = ACTIONS(598),
    [sym_hex] = ACTIONS(600),
    [anon_sym_switch] = ACTIONS(598),
    [sym_identifier] = ACTIONS(598),
    [anon_sym_private] = ACTIONS(598),
    [anon_sym_u8] = ACTIONS(598),
    [anon_sym_f64] = ACTIONS(598),
    [anon_sym_u32] = ACTIONS(598),
    [anon_sym_DOT] = ACTIONS(600),
    [anon_sym_SQUOTE] = ACTIONS(600),
    [anon_sym_i8] = ACTIONS(598),
    [anon_sym_return] = ACTIONS(598),
    [anon_sym_goto] = ACTIONS(598),
    [sym_oct] = ACTIONS(598),
    [anon_sym_s32] = ACTIONS(598),
    [sym_float] = ACTIONS(600),
    [sym_binary] = ACTIONS(600),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_if] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(598),
    [anon_sym_u16] = ACTIONS(598),
    [anon_sym_i32] = ACTIONS(598),
    [anon_sym_u64] = ACTIONS(598),
    [sym_integer] = ACTIONS(598),
    [anon_sym_i16] = ACTIONS(598),
  },
  [171] = {
    [sym_integer] = ACTIONS(602),
    [anon_sym_section] = ACTIONS(602),
    [anon_sym_s8] = ACTIONS(602),
    [sym_double] = ACTIONS(604),
    [anon_sym_method] = ACTIONS(602),
    [anon_sym_end] = ACTIONS(602),
    [anon_sym_while] = ACTIONS(602),
    [anon_sym_LBRACE] = ACTIONS(604),
    [anon_sym_publish] = ACTIONS(602),
    [sym_readonly] = ACTIONS(602),
    [anon_sym_i64] = ACTIONS(602),
    [anon_sym_f32] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [sym_null] = ACTIONS(602),
    [sym_long] = ACTIONS(604),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(602),
    [sym_hex] = ACTIONS(604),
    [anon_sym_module] = ACTIONS(602),
    [anon_sym_switch] = ACTIONS(602),
    [sym_identifier] = ACTIONS(602),
    [anon_sym_private] = ACTIONS(602),
    [anon_sym_u8] = ACTIONS(602),
    [anon_sym_f64] = ACTIONS(602),
    [anon_sym_u32] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_i8] = ACTIONS(602),
    [anon_sym_return] = ACTIONS(602),
    [anon_sym_goto] = ACTIONS(602),
    [sym_oct] = ACTIONS(602),
    [anon_sym_s32] = ACTIONS(602),
    [sym_float] = ACTIONS(604),
    [sym_binary] = ACTIONS(604),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_function] = ACTIONS(602),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_if] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(602),
    [anon_sym_u16] = ACTIONS(602),
    [anon_sym_i32] = ACTIONS(602),
    [anon_sym_u64] = ACTIONS(602),
    [anon_sym_enum] = ACTIONS(602),
    [anon_sym_i16] = ACTIONS(602),
  },
  [172] = {
    [anon_sym_DOT] = ACTIONS(606),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [173] = {
    [sym_static_assignment] = STATE(244),
    [anon_sym_RPAREN] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
  },
  [174] = {
    [aux_sym_enum_definition_repeat1] = STATE(247),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym__comment] = ACTIONS(3),
  },
  [175] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(614),
    [sym__comment] = ACTIONS(3),
  },
  [176] = {
    [sym_parameter_list] = STATE(250),
    [sym_return_list] = STATE(251),
    [anon_sym_DOT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [177] = {
    [sym__literal] = STATE(254),
    [sym_group_expression] = STATE(254),
    [sym_assignment_expression] = STATE(252),
    [sym_string] = STATE(254),
    [sym_character] = STATE(254),
    [sym_unary_op] = STATE(253),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(254),
    [sym__value] = STATE(254),
    [sym_identifier] = ACTIONS(618),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_double] = ACTIONS(620),
    [sym_float] = ACTIONS(620),
    [sym_oct] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(105),
    [sym_null] = ACTIONS(618),
    [sym_binary] = ACTIONS(620),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(620),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(620),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(618),
  },
  [178] = {
    [aux_sym_string_repeat1] = STATE(256),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(622),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(624),
  },
  [179] = {
    [sym__escape_sequence] = STATE(257),
    [anon_sym_BSLASH0] = ACTIONS(626),
    [anon_sym_BSLASHr] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(626),
    [anon_sym_BSLASHa] = ACTIONS(626),
    [anon_sym_BSLASHt] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(626),
    [anon_sym_BSLASHv] = ACTIONS(626),
    [anon_sym_BSLASHn] = ACTIONS(626),
    [aux_sym_character_token1] = ACTIONS(628),
    [anon_sym_BSLASHf] = ACTIONS(626),
  },
  [180] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(66),
    [sym__assignment_or_collection_or_value] = STATE(66),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(258),
    [sym__collection_or_value] = STATE(68),
    [sym_collection] = STATE(68),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [181] = {
    [sym_integer] = ACTIONS(630),
    [anon_sym_section] = ACTIONS(630),
    [anon_sym_RBRACE] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [anon_sym_s8] = ACTIONS(630),
    [sym_double] = ACTIONS(632),
    [anon_sym_method] = ACTIONS(630),
    [anon_sym_end] = ACTIONS(630),
    [anon_sym_while] = ACTIONS(630),
    [anon_sym_LBRACE] = ACTIONS(632),
    [anon_sym_publish] = ACTIONS(630),
    [sym_readonly] = ACTIONS(630),
    [anon_sym_i64] = ACTIONS(630),
    [anon_sym_f32] = ACTIONS(630),
    [anon_sym_LPAREN] = ACTIONS(630),
    [sym_null] = ACTIONS(630),
    [sym_long] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(630),
    [sym_hex] = ACTIONS(632),
    [anon_sym_module] = ACTIONS(630),
    [anon_sym_switch] = ACTIONS(630),
    [sym_identifier] = ACTIONS(630),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_private] = ACTIONS(630),
    [anon_sym_u8] = ACTIONS(630),
    [anon_sym_f64] = ACTIONS(630),
    [anon_sym_u32] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_i8] = ACTIONS(630),
    [anon_sym_return] = ACTIONS(630),
    [anon_sym_goto] = ACTIONS(630),
    [sym_oct] = ACTIONS(630),
    [anon_sym_s32] = ACTIONS(630),
    [sym_float] = ACTIONS(632),
    [sym_binary] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(632),
    [ts_builtin_sym_end] = ACTIONS(632),
    [anon_sym_function] = ACTIONS(630),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [anon_sym_if] = ACTIONS(630),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(630),
    [anon_sym_u16] = ACTIONS(630),
    [anon_sym_i32] = ACTIONS(630),
    [anon_sym_u64] = ACTIONS(630),
    [anon_sym_enum] = ACTIONS(630),
    [anon_sym_i16] = ACTIONS(630),
  },
  [182] = {
    [sym_primitive_type] = STATE(261),
    [sym_type] = STATE(259),
    [sym__comma_list_types] = STATE(260),
    [sym__base_type] = STATE(261),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [183] = {
    [sym_integer] = ACTIONS(638),
    [anon_sym_section] = ACTIONS(638),
    [anon_sym_s8] = ACTIONS(638),
    [sym_double] = ACTIONS(640),
    [anon_sym_method] = ACTIONS(638),
    [anon_sym_end] = ACTIONS(638),
    [anon_sym_while] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_publish] = ACTIONS(638),
    [sym_readonly] = ACTIONS(638),
    [anon_sym_i64] = ACTIONS(638),
    [anon_sym_f32] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [sym_null] = ACTIONS(638),
    [sym_long] = ACTIONS(640),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(638),
    [sym_hex] = ACTIONS(640),
    [anon_sym_module] = ACTIONS(638),
    [anon_sym_switch] = ACTIONS(638),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_u8] = ACTIONS(638),
    [anon_sym_f64] = ACTIONS(638),
    [anon_sym_u32] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_i8] = ACTIONS(638),
    [anon_sym_return] = ACTIONS(638),
    [anon_sym_goto] = ACTIONS(638),
    [sym_oct] = ACTIONS(638),
    [anon_sym_s32] = ACTIONS(638),
    [sym_float] = ACTIONS(640),
    [sym_binary] = ACTIONS(640),
    [ts_builtin_sym_end] = ACTIONS(640),
    [anon_sym_function] = ACTIONS(638),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_if] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_u16] = ACTIONS(638),
    [anon_sym_i32] = ACTIONS(638),
    [anon_sym_u64] = ACTIONS(638),
    [anon_sym_enum] = ACTIONS(638),
    [anon_sym_i16] = ACTIONS(638),
  },
  [184] = {
    [sym_return_list] = STATE(251),
    [anon_sym_DOT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [185] = {
    [anon_sym_DOT] = ACTIONS(616),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [186] = {
    [sym__literal] = STATE(262),
    [sym_group_expression] = STATE(262),
    [sym_string] = STATE(262),
    [sym_character] = STATE(262),
    [sym__collection_or_value] = STATE(262),
    [sym_collection] = STATE(262),
    [sym__number] = STATE(262),
    [sym__value] = STATE(262),
    [sym_identifier] = ACTIONS(642),
    [sym_double] = ACTIONS(644),
    [sym_float] = ACTIONS(644),
    [sym_oct] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(642),
    [sym_binary] = ACTIONS(644),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(644),
    [sym_integer] = ACTIONS(642),
  },
  [187] = {
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_s8] = ACTIONS(646),
    [anon_sym_method] = ACTIONS(646),
    [anon_sym_end] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(646),
    [sym_readonly] = ACTIONS(646),
    [anon_sym_i64] = ACTIONS(646),
    [anon_sym_f32] = ACTIONS(646),
    [anon_sym_s16] = ACTIONS(646),
    [sym_is_declare] = ACTIONS(646),
    [sym_identifier] = ACTIONS(646),
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_u8] = ACTIONS(646),
    [anon_sym_f64] = ACTIONS(646),
    [anon_sym_u32] = ACTIONS(646),
    [anon_sym_DOT] = ACTIONS(530),
    [anon_sym_i8] = ACTIONS(646),
    [anon_sym_s32] = ACTIONS(646),
    [sym_is_external] = ACTIONS(646),
    [anon_sym_function] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_u16] = ACTIONS(646),
    [anon_sym_i32] = ACTIONS(646),
    [anon_sym_u64] = ACTIONS(646),
    [anon_sym_enum] = ACTIONS(646),
    [anon_sym_i16] = ACTIONS(646),
  },
  [188] = {
    [anon_sym_LBRACK] = ACTIONS(648),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(650),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_COMMA] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
  },
  [189] = {
    [anon_sym_RBRACK] = ACTIONS(652),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [190] = {
    [sym_array] = STATE(190),
    [aux_sym_type_repeat2] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(654),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(657),
    [sym__comment] = ACTIONS(3),
  },
  [191] = {
    [sym_array] = STATE(190),
    [aux_sym_type_repeat2] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(659),
    [sym__comment] = ACTIONS(3),
  },
  [192] = {
    [sym_pointer] = STATE(192),
    [aux_sym_type_repeat1] = STATE(192),
    [anon_sym_LBRACK] = ACTIONS(661),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(665),
    [sym__comment] = ACTIONS(3),
  },
  [193] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(668),
    [sym__comment] = ACTIONS(3),
  },
  [194] = {
    [sym_parameter_list] = STATE(266),
    [sym_return_list] = STATE(267),
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [195] = {
    [sym_static_assignment] = STATE(187),
    [sym_is_declare] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(672),
    [anon_sym_s8] = ACTIONS(672),
    [anon_sym_private] = ACTIONS(672),
    [anon_sym_u8] = ACTIONS(672),
    [anon_sym_f64] = ACTIONS(672),
    [anon_sym_u32] = ACTIONS(672),
    [anon_sym_i8] = ACTIONS(672),
    [anon_sym_method] = ACTIONS(672),
    [anon_sym_end] = ACTIONS(672),
    [anon_sym_s32] = ACTIONS(672),
    [anon_sym_publish] = ACTIONS(672),
    [sym_readonly] = ACTIONS(672),
    [anon_sym_i64] = ACTIONS(672),
    [anon_sym_f32] = ACTIONS(672),
    [sym_is_external] = ACTIONS(672),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(672),
    [anon_sym_COLON_EQ] = ACTIONS(674),
    [anon_sym_s16] = ACTIONS(672),
    [anon_sym_protected] = ACTIONS(672),
    [anon_sym_u16] = ACTIONS(672),
    [anon_sym_i32] = ACTIONS(672),
    [anon_sym_u64] = ACTIONS(672),
    [anon_sym_enum] = ACTIONS(672),
    [anon_sym_i16] = ACTIONS(672),
  },
  [196] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(269),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [197] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(676),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [sym_integer] = ACTIONS(564),
    [anon_sym_section] = ACTIONS(564),
    [anon_sym_s8] = ACTIONS(564),
    [sym_double] = ACTIONS(566),
    [anon_sym_method] = ACTIONS(564),
    [anon_sym_end] = ACTIONS(564),
    [anon_sym_while] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(566),
    [anon_sym_publish] = ACTIONS(564),
    [sym_readonly] = ACTIONS(564),
    [anon_sym_i64] = ACTIONS(564),
    [anon_sym_f32] = ACTIONS(564),
    [anon_sym_LPAREN] = ACTIONS(564),
    [sym_null] = ACTIONS(564),
    [sym_long] = ACTIONS(566),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(564),
    [sym_is_declare] = ACTIONS(564),
    [sym_hex] = ACTIONS(566),
    [anon_sym_switch] = ACTIONS(564),
    [sym_identifier] = ACTIONS(564),
    [anon_sym_private] = ACTIONS(564),
    [anon_sym_u8] = ACTIONS(564),
    [anon_sym_f64] = ACTIONS(564),
    [anon_sym_u32] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_i8] = ACTIONS(564),
    [anon_sym_return] = ACTIONS(564),
    [anon_sym_goto] = ACTIONS(564),
    [sym_oct] = ACTIONS(564),
    [anon_sym_s32] = ACTIONS(564),
    [sym_is_external] = ACTIONS(564),
    [sym_float] = ACTIONS(566),
    [sym_binary] = ACTIONS(566),
    [anon_sym_function] = ACTIONS(564),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_if] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(564),
    [anon_sym_u16] = ACTIONS(564),
    [anon_sym_i32] = ACTIONS(564),
    [anon_sym_u64] = ACTIONS(564),
    [anon_sym_enum] = ACTIONS(564),
    [anon_sym_i16] = ACTIONS(564),
  },
  [199] = {
    [anon_sym_DOT] = ACTIONS(678),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [aux_sym_enum_definition_repeat1] = STATE(273),
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym__comment] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_section] = ACTIONS(638),
    [anon_sym_s8] = ACTIONS(638),
    [sym_double] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_end] = ACTIONS(638),
    [anon_sym_while] = ACTIONS(638),
    [sym_null] = ACTIONS(638),
    [anon_sym_publish] = ACTIONS(638),
    [sym_readonly] = ACTIONS(638),
    [anon_sym_i64] = ACTIONS(638),
    [anon_sym_f32] = ACTIONS(638),
    [anon_sym_LPAREN] = ACTIONS(638),
    [sym_long] = ACTIONS(640),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(638),
    [sym_hex] = ACTIONS(640),
    [anon_sym_switch] = ACTIONS(638),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_u8] = ACTIONS(638),
    [anon_sym_f64] = ACTIONS(638),
    [anon_sym_u32] = ACTIONS(638),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_i8] = ACTIONS(638),
    [anon_sym_return] = ACTIONS(638),
    [anon_sym_goto] = ACTIONS(638),
    [sym_oct] = ACTIONS(638),
    [anon_sym_s32] = ACTIONS(638),
    [sym_float] = ACTIONS(640),
    [sym_binary] = ACTIONS(640),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_if] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_u16] = ACTIONS(638),
    [anon_sym_i32] = ACTIONS(638),
    [anon_sym_u64] = ACTIONS(638),
    [sym_integer] = ACTIONS(638),
    [anon_sym_i16] = ACTIONS(638),
  },
  [202] = {
    [sym_return_list] = STATE(275),
    [anon_sym_DOT] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_DOT] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [sym_parameter_list] = STATE(276),
    [sym_return_list] = STATE(275),
    [anon_sym_DOT] = ACTIONS(682),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [anon_sym_module] = ACTIONS(684),
    [ts_builtin_sym_end] = ACTIONS(684),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [206] = {
    [aux_sym_compound_macro_repeat1] = STATE(278),
    [sym_parameter_list] = STATE(279),
    [sym__space] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(686),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [sym_is_declare] = ACTIONS(255),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(255),
    [anon_sym_s8] = ACTIONS(255),
    [anon_sym_private] = ACTIONS(255),
    [anon_sym_u8] = ACTIONS(255),
    [anon_sym_f64] = ACTIONS(255),
    [anon_sym_u32] = ACTIONS(255),
    [anon_sym_i8] = ACTIONS(255),
    [anon_sym_method] = ACTIONS(255),
    [anon_sym_end] = ACTIONS(255),
    [anon_sym_s32] = ACTIONS(255),
    [anon_sym_publish] = ACTIONS(255),
    [sym_readonly] = ACTIONS(255),
    [anon_sym_i64] = ACTIONS(255),
    [anon_sym_f32] = ACTIONS(255),
    [sym_is_external] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(255),
    [anon_sym_s16] = ACTIONS(255),
    [anon_sym_protected] = ACTIONS(255),
    [anon_sym_u16] = ACTIONS(255),
    [anon_sym_i32] = ACTIONS(255),
    [anon_sym_u64] = ACTIONS(255),
    [anon_sym_enum] = ACTIONS(255),
    [anon_sym_i16] = ACTIONS(255),
  },
  [208] = {
    [sym_collection] = STATE(74),
    [sym_group_expression] = STATE(27),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(129),
    [sym_assignment_expression] = STATE(28),
    [sym_single_line_if_statement] = STATE(280),
    [sym_string] = STATE(37),
    [sym_while_statement_with_block] = STATE(131),
    [sym_character] = STATE(37),
    [sym__statement] = STATE(280),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__while_statement] = STATE(130),
    [sym__literal] = STATE(37),
    [sym__variable_statement] = STATE(131),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym__if_statement] = STATE(134),
    [sym__number] = STATE(37),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [sym_null] = ACTIONS(31),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [209] = {
    [anon_sym_while] = ACTIONS(688),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_while] = STATE(281),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(500),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [211] = {
    [anon_sym_DOT] = ACTIONS(690),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_section] = ACTIONS(692),
    [anon_sym_s8] = ACTIONS(692),
    [sym_double] = ACTIONS(694),
    [anon_sym_LBRACE] = ACTIONS(694),
    [anon_sym_end] = ACTIONS(692),
    [anon_sym_while] = ACTIONS(692),
    [sym_null] = ACTIONS(692),
    [anon_sym_publish] = ACTIONS(692),
    [sym_readonly] = ACTIONS(692),
    [anon_sym_i64] = ACTIONS(692),
    [anon_sym_f32] = ACTIONS(692),
    [anon_sym_LPAREN] = ACTIONS(692),
    [sym_long] = ACTIONS(694),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(692),
    [sym_hex] = ACTIONS(694),
    [anon_sym_switch] = ACTIONS(692),
    [sym_identifier] = ACTIONS(692),
    [anon_sym_private] = ACTIONS(692),
    [anon_sym_u8] = ACTIONS(692),
    [anon_sym_f64] = ACTIONS(692),
    [anon_sym_u32] = ACTIONS(692),
    [anon_sym_SQUOTE] = ACTIONS(694),
    [anon_sym_i8] = ACTIONS(692),
    [anon_sym_return] = ACTIONS(692),
    [anon_sym_goto] = ACTIONS(692),
    [sym_oct] = ACTIONS(692),
    [anon_sym_s32] = ACTIONS(692),
    [sym_float] = ACTIONS(694),
    [sym_binary] = ACTIONS(694),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_if] = ACTIONS(692),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(692),
    [anon_sym_u16] = ACTIONS(692),
    [anon_sym_i32] = ACTIONS(692),
    [anon_sym_u64] = ACTIONS(692),
    [sym_integer] = ACTIONS(692),
    [anon_sym_i16] = ACTIONS(692),
  },
  [213] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(696),
    [anon_sym_s8] = ACTIONS(699),
    [sym_double] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(705),
    [anon_sym_end] = ACTIONS(708),
    [anon_sym_while] = ACTIONS(710),
    [sym_null] = ACTIONS(713),
    [anon_sym_publish] = ACTIONS(716),
    [sym_readonly] = ACTIONS(719),
    [anon_sym_i64] = ACTIONS(699),
    [anon_sym_f32] = ACTIONS(699),
    [anon_sym_LPAREN] = ACTIONS(722),
    [sym_long] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(699),
    [sym_hex] = ACTIONS(702),
    [anon_sym_switch] = ACTIONS(725),
    [sym_identifier] = ACTIONS(728),
    [anon_sym_private] = ACTIONS(716),
    [anon_sym_u8] = ACTIONS(699),
    [anon_sym_f64] = ACTIONS(699),
    [anon_sym_u32] = ACTIONS(699),
    [anon_sym_SQUOTE] = ACTIONS(731),
    [anon_sym_i8] = ACTIONS(699),
    [anon_sym_return] = ACTIONS(734),
    [anon_sym_goto] = ACTIONS(737),
    [sym_oct] = ACTIONS(713),
    [anon_sym_s32] = ACTIONS(699),
    [sym_float] = ACTIONS(702),
    [sym_binary] = ACTIONS(702),
    [anon_sym_DQUOTE] = ACTIONS(740),
    [anon_sym_if] = ACTIONS(743),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(716),
    [anon_sym_u16] = ACTIONS(699),
    [anon_sym_i32] = ACTIONS(699),
    [anon_sym_u64] = ACTIONS(699),
    [sym_integer] = ACTIONS(713),
    [anon_sym_i16] = ACTIONS(699),
  },
  [214] = {
    [sym_is_declare] = ACTIONS(746),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(746),
    [anon_sym_s8] = ACTIONS(746),
    [anon_sym_private] = ACTIONS(746),
    [anon_sym_u8] = ACTIONS(746),
    [anon_sym_f64] = ACTIONS(746),
    [anon_sym_u32] = ACTIONS(746),
    [anon_sym_i8] = ACTIONS(746),
    [anon_sym_method] = ACTIONS(746),
    [anon_sym_end] = ACTIONS(746),
    [anon_sym_s32] = ACTIONS(746),
    [anon_sym_publish] = ACTIONS(746),
    [sym_readonly] = ACTIONS(746),
    [anon_sym_i64] = ACTIONS(746),
    [anon_sym_f32] = ACTIONS(746),
    [sym_is_external] = ACTIONS(746),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(746),
    [anon_sym_s16] = ACTIONS(746),
    [anon_sym_protected] = ACTIONS(746),
    [anon_sym_u16] = ACTIONS(746),
    [anon_sym_i32] = ACTIONS(746),
    [anon_sym_u64] = ACTIONS(746),
    [anon_sym_enum] = ACTIONS(746),
    [anon_sym_i16] = ACTIONS(746),
  },
  [215] = {
    [anon_sym_if] = ACTIONS(748),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_if] = STATE(282),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(508),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [217] = {
    [anon_sym_DOT] = ACTIONS(750),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_DOT] = ACTIONS(752),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [sym_group_expression] = STATE(284),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(93),
  },
  [220] = {
    [sym_end_switch] = STATE(286),
    [anon_sym_end] = ACTIONS(754),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_end_case] = STATE(288),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(289),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(289),
    [sym_single_line_if_statement] = STATE(289),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(756),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [222] = {
    [sym_default_statement_with_block] = STATE(290),
    [sym_case_statement_with_block] = STATE(291),
    [sym__case_statement] = STATE(221),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(291),
    [sym__default_statement] = STATE(223),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(510),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(512),
  },
  [223] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym_end_default] = STATE(293),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(294),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(294),
    [sym_single_line_if_statement] = STATE(294),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(758),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [224] = {
    [sym_is_declare] = ACTIONS(760),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(760),
    [anon_sym_s8] = ACTIONS(760),
    [anon_sym_private] = ACTIONS(760),
    [anon_sym_u8] = ACTIONS(760),
    [anon_sym_f64] = ACTIONS(760),
    [anon_sym_u32] = ACTIONS(760),
    [anon_sym_i8] = ACTIONS(760),
    [anon_sym_method] = ACTIONS(760),
    [anon_sym_end] = ACTIONS(760),
    [anon_sym_s32] = ACTIONS(760),
    [anon_sym_publish] = ACTIONS(760),
    [sym_readonly] = ACTIONS(760),
    [anon_sym_i64] = ACTIONS(760),
    [anon_sym_f32] = ACTIONS(760),
    [sym_is_external] = ACTIONS(760),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(760),
    [anon_sym_s16] = ACTIONS(760),
    [anon_sym_protected] = ACTIONS(760),
    [anon_sym_u16] = ACTIONS(760),
    [anon_sym_i32] = ACTIONS(760),
    [anon_sym_u64] = ACTIONS(760),
    [anon_sym_enum] = ACTIONS(760),
    [anon_sym_i16] = ACTIONS(760),
  },
  [225] = {
    [anon_sym_DOT] = ACTIONS(762),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(764),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(764),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(227),
    [anon_sym_RBRACE] = ACTIONS(764),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(766),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_s8] = ACTIONS(771),
    [anon_sym_method] = ACTIONS(771),
    [anon_sym_end] = ACTIONS(771),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(771),
    [sym_readonly] = ACTIONS(771),
    [anon_sym_i64] = ACTIONS(771),
    [anon_sym_f32] = ACTIONS(771),
    [anon_sym_s16] = ACTIONS(771),
    [sym_is_declare] = ACTIONS(771),
    [sym_identifier] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(769),
    [anon_sym_private] = ACTIONS(771),
    [anon_sym_u8] = ACTIONS(771),
    [anon_sym_f64] = ACTIONS(771),
    [anon_sym_u32] = ACTIONS(771),
    [anon_sym_DOT] = ACTIONS(769),
    [anon_sym_i8] = ACTIONS(771),
    [anon_sym_s32] = ACTIONS(771),
    [sym_is_external] = ACTIONS(771),
    [anon_sym_function] = ACTIONS(771),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(771),
    [anon_sym_u16] = ACTIONS(771),
    [anon_sym_i32] = ACTIONS(771),
    [anon_sym_u64] = ACTIONS(771),
    [anon_sym_enum] = ACTIONS(771),
    [anon_sym_i16] = ACTIONS(771),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(538),
    [anon_sym_EQ_EQ] = ACTIONS(540),
    [anon_sym_PLUS_EQ] = ACTIONS(540),
    [anon_sym_PIPE_PIPE] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(538),
    [anon_sym_LT] = ACTIONS(538),
    [anon_sym_LT_LT_EQ] = ACTIONS(540),
    [anon_sym_SLASH_EQ] = ACTIONS(540),
    [anon_sym_GT_GT_EQ] = ACTIONS(540),
    [anon_sym_AMP_EQ] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(538),
    [anon_sym_AMP_AMP] = ACTIONS(540),
    [anon_sym_LT_EQ] = ACTIONS(540),
    [anon_sym_GT_GT] = ACTIONS(538),
    [anon_sym_PERCENT] = ACTIONS(538),
    [anon_sym_GT_EQ] = ACTIONS(540),
    [anon_sym_CARET] = ACTIONS(538),
    [anon_sym_PLUS_PLUS] = ACTIONS(540),
    [anon_sym_PERCENT_EQ] = ACTIONS(540),
    [anon_sym_DASH_EQ] = ACTIONS(540),
    [anon_sym_PIPE_EQ] = ACTIONS(540),
    [anon_sym_AMP] = ACTIONS(538),
    [anon_sym_BANG_EQ] = ACTIONS(540),
    [anon_sym_LT_LT] = ACTIONS(538),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(538),
    [anon_sym_GT] = ACTIONS(538),
    [anon_sym_DASH_DASH] = ACTIONS(538),
    [anon_sym_STAR_EQ] = ACTIONS(540),
    [anon_sym_CARET_EQ] = ACTIONS(540),
    [sym__space] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(773),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [231] = {
    [sym__literal] = STATE(297),
    [sym_group_expression] = STATE(297),
    [sym__number] = STATE(297),
    [sym_string] = STATE(297),
    [sym_character] = STATE(297),
    [sym__value] = STATE(297),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(775),
    [sym_identifier] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(777),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(775),
    [sym_hex] = ACTIONS(775),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(777),
    [sym_integer] = ACTIONS(777),
    [sym_binary] = ACTIONS(775),
  },
  [232] = {
    [anon_sym_s8] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_end] = ACTIONS(779),
    [sym_null] = ACTIONS(779),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(781),
    [sym_readonly] = ACTIONS(779),
    [anon_sym_f32] = ACTIONS(779),
    [anon_sym_s16] = ACTIONS(779),
    [anon_sym_module] = ACTIONS(779),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_COMMA] = ACTIONS(781),
    [anon_sym_DASH_EQ] = ACTIONS(781),
    [anon_sym_private] = ACTIONS(779),
    [anon_sym_f64] = ACTIONS(779),
    [sym_oct] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(781),
    [anon_sym_goto] = ACTIONS(779),
    [anon_sym_s32] = ACTIONS(779),
    [anon_sym_function] = ACTIONS(779),
    [anon_sym_DQUOTE] = ACTIONS(781),
    [anon_sym_if] = ACTIONS(779),
    [anon_sym_STAR_EQ] = ACTIONS(781),
    [anon_sym_protected] = ACTIONS(779),
    [anon_sym_i32] = ACTIONS(779),
    [sym_integer] = ACTIONS(779),
    [anon_sym_enum] = ACTIONS(779),
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_section] = ACTIONS(779),
    [sym_double] = ACTIONS(781),
    [anon_sym_PLUS_EQ] = ACTIONS(781),
    [anon_sym_method] = ACTIONS(779),
    [anon_sym_LT_LT_EQ] = ACTIONS(781),
    [anon_sym_while] = ACTIONS(779),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [anon_sym_publish] = ACTIONS(779),
    [anon_sym_AMP_EQ] = ACTIONS(781),
    [anon_sym_i64] = ACTIONS(779),
    [sym_long] = ACTIONS(781),
    [anon_sym_LPAREN] = ACTIONS(779),
    [anon_sym_COLON_EQ] = ACTIONS(781),
    [sym_hex] = ACTIONS(781),
    [anon_sym_PLUS_PLUS] = ACTIONS(781),
    [anon_sym_switch] = ACTIONS(779),
    [anon_sym_PERCENT_EQ] = ACTIONS(781),
    [anon_sym_PIPE_EQ] = ACTIONS(781),
    [anon_sym_u8] = ACTIONS(779),
    [sym_float] = ACTIONS(781),
    [anon_sym_u32] = ACTIONS(779),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [anon_sym_i8] = ACTIONS(779),
    [anon_sym_return] = ACTIONS(779),
    [sym_binary] = ACTIONS(781),
    [ts_builtin_sym_end] = ACTIONS(781),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_RBRACE] = ACTIONS(781),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(781),
    [anon_sym_u16] = ACTIONS(779),
    [anon_sym_u64] = ACTIONS(779),
    [anon_sym_i16] = ACTIONS(779),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(783),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [234] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(129),
    [sym_variable_definition] = STATE(299),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
  },
  [235] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(300),
    [anon_sym_RPAREN] = ACTIONS(785),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(560),
    [sym__comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_DOT] = ACTIONS(787),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(787),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [sym_integer] = ACTIONS(789),
    [anon_sym_section] = ACTIONS(789),
    [anon_sym_s8] = ACTIONS(789),
    [sym_double] = ACTIONS(791),
    [anon_sym_method] = ACTIONS(789),
    [anon_sym_end] = ACTIONS(789),
    [anon_sym_while] = ACTIONS(789),
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_publish] = ACTIONS(789),
    [sym_readonly] = ACTIONS(789),
    [anon_sym_i64] = ACTIONS(789),
    [anon_sym_f32] = ACTIONS(789),
    [anon_sym_LPAREN] = ACTIONS(789),
    [sym_null] = ACTIONS(789),
    [sym_long] = ACTIONS(791),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(789),
    [sym_hex] = ACTIONS(791),
    [anon_sym_module] = ACTIONS(789),
    [anon_sym_switch] = ACTIONS(789),
    [sym_identifier] = ACTIONS(789),
    [anon_sym_private] = ACTIONS(789),
    [anon_sym_u8] = ACTIONS(789),
    [anon_sym_f64] = ACTIONS(789),
    [anon_sym_u32] = ACTIONS(789),
    [anon_sym_SQUOTE] = ACTIONS(791),
    [anon_sym_i8] = ACTIONS(789),
    [anon_sym_return] = ACTIONS(789),
    [anon_sym_goto] = ACTIONS(789),
    [sym_oct] = ACTIONS(789),
    [anon_sym_s32] = ACTIONS(789),
    [sym_float] = ACTIONS(791),
    [sym_binary] = ACTIONS(791),
    [ts_builtin_sym_end] = ACTIONS(791),
    [anon_sym_function] = ACTIONS(789),
    [anon_sym_DQUOTE] = ACTIONS(791),
    [anon_sym_if] = ACTIONS(789),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(789),
    [anon_sym_u16] = ACTIONS(789),
    [anon_sym_i32] = ACTIONS(789),
    [anon_sym_u64] = ACTIONS(789),
    [anon_sym_enum] = ACTIONS(789),
    [anon_sym_i16] = ACTIONS(789),
  },
  [238] = {
    [anon_sym_s8] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_end] = ACTIONS(585),
    [sym_null] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(583),
    [sym_readonly] = ACTIONS(585),
    [anon_sym_f32] = ACTIONS(585),
    [anon_sym_s16] = ACTIONS(585),
    [anon_sym_module] = ACTIONS(585),
    [sym_identifier] = ACTIONS(585),
    [anon_sym_DASH_EQ] = ACTIONS(583),
    [anon_sym_private] = ACTIONS(585),
    [anon_sym_f64] = ACTIONS(585),
    [sym_oct] = ACTIONS(585),
    [anon_sym_goto] = ACTIONS(585),
    [anon_sym_s32] = ACTIONS(585),
    [anon_sym_function] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_if] = ACTIONS(585),
    [anon_sym_STAR_EQ] = ACTIONS(583),
    [anon_sym_protected] = ACTIONS(585),
    [anon_sym_i32] = ACTIONS(585),
    [sym_integer] = ACTIONS(585),
    [anon_sym_enum] = ACTIONS(585),
    [anon_sym_section] = ACTIONS(585),
    [sym_double] = ACTIONS(583),
    [anon_sym_PLUS_EQ] = ACTIONS(583),
    [anon_sym_method] = ACTIONS(585),
    [anon_sym_LT_LT_EQ] = ACTIONS(583),
    [anon_sym_while] = ACTIONS(585),
    [anon_sym_SLASH_EQ] = ACTIONS(583),
    [anon_sym_publish] = ACTIONS(585),
    [anon_sym_AMP_EQ] = ACTIONS(583),
    [anon_sym_i64] = ACTIONS(585),
    [sym_long] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(585),
    [anon_sym_COLON_EQ] = ACTIONS(583),
    [sym_hex] = ACTIONS(583),
    [anon_sym_PLUS_PLUS] = ACTIONS(583),
    [anon_sym_switch] = ACTIONS(585),
    [anon_sym_PERCENT_EQ] = ACTIONS(583),
    [anon_sym_PIPE_EQ] = ACTIONS(583),
    [anon_sym_u8] = ACTIONS(585),
    [sym_float] = ACTIONS(583),
    [anon_sym_u32] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_i8] = ACTIONS(585),
    [anon_sym_return] = ACTIONS(585),
    [sym_binary] = ACTIONS(583),
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_DASH_DASH] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(583),
    [anon_sym_u16] = ACTIONS(585),
    [anon_sym_u64] = ACTIONS(585),
    [anon_sym_i16] = ACTIONS(585),
  },
  [239] = {
    [anon_sym_s8] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_end] = ACTIONS(577),
    [sym_null] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(575),
    [sym_readonly] = ACTIONS(577),
    [anon_sym_f32] = ACTIONS(577),
    [anon_sym_s16] = ACTIONS(577),
    [anon_sym_module] = ACTIONS(577),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_DASH_EQ] = ACTIONS(575),
    [anon_sym_private] = ACTIONS(577),
    [anon_sym_f64] = ACTIONS(577),
    [sym_oct] = ACTIONS(577),
    [anon_sym_goto] = ACTIONS(577),
    [anon_sym_s32] = ACTIONS(577),
    [anon_sym_function] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(577),
    [anon_sym_STAR_EQ] = ACTIONS(575),
    [anon_sym_protected] = ACTIONS(577),
    [anon_sym_i32] = ACTIONS(577),
    [sym_integer] = ACTIONS(577),
    [anon_sym_enum] = ACTIONS(577),
    [anon_sym_section] = ACTIONS(577),
    [sym_double] = ACTIONS(575),
    [anon_sym_PLUS_EQ] = ACTIONS(575),
    [anon_sym_method] = ACTIONS(577),
    [anon_sym_LT_LT_EQ] = ACTIONS(575),
    [anon_sym_while] = ACTIONS(577),
    [anon_sym_SLASH_EQ] = ACTIONS(575),
    [anon_sym_publish] = ACTIONS(577),
    [anon_sym_AMP_EQ] = ACTIONS(575),
    [anon_sym_i64] = ACTIONS(577),
    [sym_long] = ACTIONS(575),
    [anon_sym_LPAREN] = ACTIONS(577),
    [anon_sym_COLON_EQ] = ACTIONS(575),
    [sym_hex] = ACTIONS(575),
    [anon_sym_PLUS_PLUS] = ACTIONS(575),
    [anon_sym_switch] = ACTIONS(577),
    [anon_sym_PERCENT_EQ] = ACTIONS(575),
    [anon_sym_PIPE_EQ] = ACTIONS(575),
    [anon_sym_u8] = ACTIONS(577),
    [sym_float] = ACTIONS(575),
    [anon_sym_u32] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_i8] = ACTIONS(577),
    [anon_sym_return] = ACTIONS(577),
    [sym_binary] = ACTIONS(575),
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_DASH_DASH] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(575),
    [anon_sym_u16] = ACTIONS(577),
    [anon_sym_u64] = ACTIONS(577),
    [anon_sym_i16] = ACTIONS(577),
  },
  [240] = {
    [anon_sym_section] = ACTIONS(538),
    [anon_sym_s8] = ACTIONS(538),
    [sym_double] = ACTIONS(540),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_while] = ACTIONS(538),
    [sym_null] = ACTIONS(538),
    [anon_sym_publish] = ACTIONS(538),
    [sym_readonly] = ACTIONS(538),
    [anon_sym_i64] = ACTIONS(538),
    [anon_sym_f32] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [sym_long] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(538),
    [sym_hex] = ACTIONS(540),
    [anon_sym_switch] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_private] = ACTIONS(538),
    [anon_sym_u8] = ACTIONS(538),
    [anon_sym_f64] = ACTIONS(538),
    [anon_sym_u32] = ACTIONS(538),
    [anon_sym_DOT] = ACTIONS(540),
    [anon_sym_i8] = ACTIONS(538),
    [anon_sym_return] = ACTIONS(538),
    [anon_sym_goto] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_s32] = ACTIONS(538),
    [sym_oct] = ACTIONS(538),
    [sym_float] = ACTIONS(540),
    [sym_binary] = ACTIONS(540),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [anon_sym_if] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(538),
    [anon_sym_u16] = ACTIONS(538),
    [anon_sym_i32] = ACTIONS(538),
    [anon_sym_u64] = ACTIONS(538),
    [sym_integer] = ACTIONS(538),
    [anon_sym_i16] = ACTIONS(538),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(793),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [sym__literal] = STATE(302),
    [sym_group_expression] = STATE(302),
    [sym__number] = STATE(302),
    [sym_string] = STATE(302),
    [sym_character] = STATE(302),
    [sym__value] = STATE(302),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(795),
    [sym_identifier] = ACTIONS(797),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(795),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(797),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(795),
    [sym_hex] = ACTIONS(795),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(797),
    [sym_integer] = ACTIONS(797),
    [sym_binary] = ACTIONS(795),
  },
  [243] = {
    [sym_integer] = ACTIONS(692),
    [anon_sym_section] = ACTIONS(692),
    [anon_sym_s8] = ACTIONS(692),
    [sym_double] = ACTIONS(694),
    [anon_sym_method] = ACTIONS(692),
    [anon_sym_end] = ACTIONS(692),
    [anon_sym_while] = ACTIONS(692),
    [anon_sym_LBRACE] = ACTIONS(694),
    [anon_sym_publish] = ACTIONS(692),
    [sym_readonly] = ACTIONS(692),
    [anon_sym_i64] = ACTIONS(692),
    [anon_sym_f32] = ACTIONS(692),
    [anon_sym_LPAREN] = ACTIONS(692),
    [sym_null] = ACTIONS(692),
    [sym_long] = ACTIONS(694),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(692),
    [sym_hex] = ACTIONS(694),
    [anon_sym_module] = ACTIONS(692),
    [anon_sym_switch] = ACTIONS(692),
    [sym_identifier] = ACTIONS(692),
    [anon_sym_private] = ACTIONS(692),
    [anon_sym_u8] = ACTIONS(692),
    [anon_sym_f64] = ACTIONS(692),
    [anon_sym_u32] = ACTIONS(692),
    [anon_sym_SQUOTE] = ACTIONS(694),
    [anon_sym_i8] = ACTIONS(692),
    [anon_sym_return] = ACTIONS(692),
    [anon_sym_goto] = ACTIONS(692),
    [sym_oct] = ACTIONS(692),
    [anon_sym_s32] = ACTIONS(692),
    [sym_float] = ACTIONS(694),
    [sym_binary] = ACTIONS(694),
    [ts_builtin_sym_end] = ACTIONS(694),
    [anon_sym_function] = ACTIONS(692),
    [anon_sym_DQUOTE] = ACTIONS(694),
    [anon_sym_if] = ACTIONS(692),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(692),
    [anon_sym_u16] = ACTIONS(692),
    [anon_sym_i32] = ACTIONS(692),
    [anon_sym_u64] = ACTIONS(692),
    [anon_sym_enum] = ACTIONS(692),
    [anon_sym_i16] = ACTIONS(692),
  },
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(799),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(799),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(801),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [sym__enum_element] = STATE(304),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
  },
  [247] = {
    [aux_sym_enum_definition_repeat1] = STATE(306),
    [anon_sym_RPAREN] = ACTIONS(803),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym__comment] = ACTIONS(3),
  },
  [248] = {
    [sym_static_assignment] = STATE(307),
    [anon_sym_RPAREN] = ACTIONS(769),
    [anon_sym_DOT] = ACTIONS(769),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(769),
    [anon_sym_COLON_EQ] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
  },
  [249] = {
    [sym_integer] = ACTIONS(805),
    [anon_sym_section] = ACTIONS(805),
    [anon_sym_s8] = ACTIONS(805),
    [sym_double] = ACTIONS(807),
    [anon_sym_method] = ACTIONS(805),
    [anon_sym_end] = ACTIONS(805),
    [anon_sym_while] = ACTIONS(805),
    [anon_sym_LBRACE] = ACTIONS(807),
    [anon_sym_publish] = ACTIONS(805),
    [sym_readonly] = ACTIONS(805),
    [anon_sym_i64] = ACTIONS(805),
    [anon_sym_f32] = ACTIONS(805),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_null] = ACTIONS(805),
    [sym_long] = ACTIONS(807),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(805),
    [sym_hex] = ACTIONS(807),
    [anon_sym_module] = ACTIONS(805),
    [anon_sym_switch] = ACTIONS(805),
    [sym_identifier] = ACTIONS(805),
    [anon_sym_private] = ACTIONS(805),
    [anon_sym_u8] = ACTIONS(805),
    [anon_sym_f64] = ACTIONS(805),
    [anon_sym_u32] = ACTIONS(805),
    [anon_sym_SQUOTE] = ACTIONS(807),
    [anon_sym_i8] = ACTIONS(805),
    [anon_sym_return] = ACTIONS(805),
    [anon_sym_goto] = ACTIONS(805),
    [sym_oct] = ACTIONS(805),
    [anon_sym_s32] = ACTIONS(805),
    [sym_float] = ACTIONS(807),
    [sym_binary] = ACTIONS(807),
    [ts_builtin_sym_end] = ACTIONS(807),
    [anon_sym_function] = ACTIONS(805),
    [anon_sym_DQUOTE] = ACTIONS(807),
    [anon_sym_if] = ACTIONS(805),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(805),
    [anon_sym_u16] = ACTIONS(805),
    [anon_sym_i32] = ACTIONS(805),
    [anon_sym_u64] = ACTIONS(805),
    [anon_sym_enum] = ACTIONS(805),
    [anon_sym_i16] = ACTIONS(805),
  },
  [250] = {
    [sym_return_list] = STATE(309),
    [anon_sym_DOT] = ACTIONS(809),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [251] = {
    [anon_sym_DOT] = ACTIONS(809),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [252] = {
    [anon_sym_RPAREN] = ACTIONS(811),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [253] = {
    [sym__literal] = STATE(311),
    [sym_group_expression] = STATE(311),
    [sym__number] = STATE(311),
    [sym_string] = STATE(311),
    [sym_character] = STATE(311),
    [sym__value] = STATE(311),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(813),
    [sym_identifier] = ACTIONS(815),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(813),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(815),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(813),
    [sym_hex] = ACTIONS(813),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(815),
    [sym_integer] = ACTIONS(815),
    [sym_binary] = ACTIONS(813),
  },
  [254] = {
    [sym_binary_op] = STATE(312),
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
  },
  [255] = {
    [sym_integer] = ACTIONS(323),
    [anon_sym_section] = ACTIONS(323),
    [anon_sym_s8] = ACTIONS(323),
    [sym_double] = ACTIONS(321),
    [anon_sym_method] = ACTIONS(323),
    [anon_sym_end] = ACTIONS(323),
    [anon_sym_while] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_publish] = ACTIONS(323),
    [sym_readonly] = ACTIONS(323),
    [anon_sym_i64] = ACTIONS(323),
    [anon_sym_f32] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [sym_null] = ACTIONS(323),
    [sym_long] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(323),
    [sym_hex] = ACTIONS(321),
    [anon_sym_module] = ACTIONS(323),
    [anon_sym_switch] = ACTIONS(323),
    [sym_identifier] = ACTIONS(323),
    [anon_sym_private] = ACTIONS(323),
    [anon_sym_u8] = ACTIONS(323),
    [anon_sym_f64] = ACTIONS(323),
    [anon_sym_u32] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_i8] = ACTIONS(323),
    [anon_sym_return] = ACTIONS(323),
    [anon_sym_goto] = ACTIONS(323),
    [sym_oct] = ACTIONS(323),
    [anon_sym_s32] = ACTIONS(323),
    [sym_float] = ACTIONS(321),
    [sym_binary] = ACTIONS(321),
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_function] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [anon_sym_if] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(323),
    [anon_sym_u16] = ACTIONS(323),
    [anon_sym_i32] = ACTIONS(323),
    [anon_sym_u64] = ACTIONS(323),
    [anon_sym_enum] = ACTIONS(323),
    [anon_sym_i16] = ACTIONS(323),
  },
  [256] = {
    [aux_sym_string_repeat1] = STATE(166),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(325),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(817),
  },
  [257] = {
    [anon_sym_SQUOTE] = ACTIONS(819),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [258] = {
    [anon_sym_RBRACE] = ACTIONS(821),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [259] = {
    [aux_sym__comma_list_types_repeat1] = STATE(317),
    [anon_sym_DOT] = ACTIONS(823),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(825),
    [sym__comment] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_DOT] = ACTIONS(827),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [261] = {
    [aux_sym_type_repeat2] = STATE(318),
    [sym_pointer] = STATE(319),
    [aux_sym_type_repeat1] = STATE(319),
    [sym_array] = STATE(318),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(829),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(829),
    [anon_sym_STAR] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_s8] = ACTIONS(833),
    [anon_sym_method] = ACTIONS(833),
    [anon_sym_end] = ACTIONS(833),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(833),
    [sym_readonly] = ACTIONS(833),
    [anon_sym_i64] = ACTIONS(833),
    [anon_sym_f32] = ACTIONS(833),
    [anon_sym_s16] = ACTIONS(833),
    [sym_is_declare] = ACTIONS(833),
    [sym_identifier] = ACTIONS(833),
    [anon_sym_COMMA] = ACTIONS(831),
    [anon_sym_private] = ACTIONS(833),
    [anon_sym_u8] = ACTIONS(833),
    [anon_sym_f64] = ACTIONS(833),
    [anon_sym_u32] = ACTIONS(833),
    [anon_sym_DOT] = ACTIONS(831),
    [anon_sym_i8] = ACTIONS(833),
    [anon_sym_s32] = ACTIONS(833),
    [sym_is_external] = ACTIONS(833),
    [anon_sym_function] = ACTIONS(833),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(833),
    [anon_sym_u16] = ACTIONS(833),
    [anon_sym_i32] = ACTIONS(833),
    [anon_sym_u64] = ACTIONS(833),
    [anon_sym_enum] = ACTIONS(833),
    [anon_sym_i16] = ACTIONS(833),
  },
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(835),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(837),
    [anon_sym_DOT] = ACTIONS(835),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym__comment] = ACTIONS(3),
  },
  [264] = {
    [sym_static_assignment] = STATE(228),
    [sym_is_declare] = ACTIONS(646),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(646),
    [anon_sym_s8] = ACTIONS(646),
    [anon_sym_private] = ACTIONS(646),
    [anon_sym_u8] = ACTIONS(646),
    [anon_sym_f64] = ACTIONS(646),
    [anon_sym_u32] = ACTIONS(646),
    [anon_sym_i8] = ACTIONS(646),
    [anon_sym_method] = ACTIONS(646),
    [anon_sym_end] = ACTIONS(646),
    [anon_sym_s32] = ACTIONS(646),
    [anon_sym_publish] = ACTIONS(646),
    [sym_readonly] = ACTIONS(646),
    [anon_sym_i64] = ACTIONS(646),
    [anon_sym_f32] = ACTIONS(646),
    [sym_is_external] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(646),
    [anon_sym_COLON_EQ] = ACTIONS(674),
    [anon_sym_s16] = ACTIONS(646),
    [anon_sym_protected] = ACTIONS(646),
    [anon_sym_u16] = ACTIONS(646),
    [anon_sym_i32] = ACTIONS(646),
    [anon_sym_u64] = ACTIONS(646),
    [anon_sym_enum] = ACTIONS(646),
    [anon_sym_i16] = ACTIONS(646),
  },
  [265] = {
    [sym_is_declare] = ACTIONS(638),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_s8] = ACTIONS(638),
    [anon_sym_private] = ACTIONS(638),
    [anon_sym_u8] = ACTIONS(638),
    [anon_sym_f64] = ACTIONS(638),
    [anon_sym_u32] = ACTIONS(638),
    [anon_sym_i8] = ACTIONS(638),
    [anon_sym_method] = ACTIONS(638),
    [anon_sym_end] = ACTIONS(638),
    [anon_sym_s32] = ACTIONS(638),
    [anon_sym_publish] = ACTIONS(638),
    [sym_readonly] = ACTIONS(638),
    [anon_sym_i64] = ACTIONS(638),
    [anon_sym_f32] = ACTIONS(638),
    [sym_is_external] = ACTIONS(638),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(638),
    [anon_sym_s16] = ACTIONS(638),
    [anon_sym_protected] = ACTIONS(638),
    [anon_sym_u16] = ACTIONS(638),
    [anon_sym_i32] = ACTIONS(638),
    [anon_sym_u64] = ACTIONS(638),
    [anon_sym_enum] = ACTIONS(638),
    [anon_sym_i16] = ACTIONS(638),
  },
  [266] = {
    [sym_return_list] = STATE(321),
    [anon_sym_DOT] = ACTIONS(839),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [267] = {
    [anon_sym_DOT] = ACTIONS(839),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [268] = {
    [sym__literal] = STATE(262),
    [sym_group_expression] = STATE(262),
    [sym_string] = STATE(262),
    [sym_character] = STATE(262),
    [sym__collection_or_value] = STATE(262),
    [sym_collection] = STATE(262),
    [sym__number] = STATE(262),
    [sym__value] = STATE(262),
    [sym_identifier] = ACTIONS(642),
    [sym_double] = ACTIONS(644),
    [sym_float] = ACTIONS(644),
    [sym_oct] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(841),
    [anon_sym_LBRACE] = ACTIONS(843),
    [sym_null] = ACTIONS(642),
    [sym_binary] = ACTIONS(644),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(644),
    [anon_sym_LPAREN] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(644),
    [sym_integer] = ACTIONS(642),
  },
  [269] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(849),
    [sym__comment] = ACTIONS(3),
  },
  [270] = {
    [sym_parameter_list] = STATE(327),
    [sym_return_list] = STATE(321),
    [anon_sym_DOT] = ACTIONS(839),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [271] = {
    [sym_integer] = ACTIONS(789),
    [anon_sym_section] = ACTIONS(789),
    [anon_sym_s8] = ACTIONS(789),
    [sym_double] = ACTIONS(791),
    [anon_sym_method] = ACTIONS(789),
    [anon_sym_end] = ACTIONS(789),
    [anon_sym_while] = ACTIONS(789),
    [anon_sym_LBRACE] = ACTIONS(791),
    [anon_sym_publish] = ACTIONS(789),
    [sym_readonly] = ACTIONS(789),
    [anon_sym_i64] = ACTIONS(789),
    [anon_sym_f32] = ACTIONS(789),
    [anon_sym_LPAREN] = ACTIONS(789),
    [sym_null] = ACTIONS(789),
    [sym_long] = ACTIONS(791),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(789),
    [sym_is_declare] = ACTIONS(789),
    [sym_hex] = ACTIONS(791),
    [anon_sym_switch] = ACTIONS(789),
    [sym_identifier] = ACTIONS(789),
    [anon_sym_private] = ACTIONS(789),
    [anon_sym_u8] = ACTIONS(789),
    [anon_sym_f64] = ACTIONS(789),
    [anon_sym_u32] = ACTIONS(789),
    [anon_sym_SQUOTE] = ACTIONS(791),
    [anon_sym_i8] = ACTIONS(789),
    [anon_sym_return] = ACTIONS(789),
    [anon_sym_goto] = ACTIONS(789),
    [sym_oct] = ACTIONS(789),
    [anon_sym_s32] = ACTIONS(789),
    [sym_is_external] = ACTIONS(789),
    [sym_float] = ACTIONS(791),
    [sym_binary] = ACTIONS(791),
    [anon_sym_function] = ACTIONS(789),
    [anon_sym_DQUOTE] = ACTIONS(791),
    [anon_sym_if] = ACTIONS(789),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(789),
    [anon_sym_u16] = ACTIONS(789),
    [anon_sym_i32] = ACTIONS(789),
    [anon_sym_u64] = ACTIONS(789),
    [anon_sym_enum] = ACTIONS(789),
    [anon_sym_i16] = ACTIONS(789),
  },
  [272] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [aux_sym_enum_definition_repeat1] = STATE(306),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(612),
    [sym__comment] = ACTIONS(3),
  },
  [274] = {
    [anon_sym_section] = ACTIONS(805),
    [anon_sym_s8] = ACTIONS(805),
    [sym_double] = ACTIONS(807),
    [anon_sym_LBRACE] = ACTIONS(807),
    [anon_sym_end] = ACTIONS(805),
    [anon_sym_while] = ACTIONS(805),
    [sym_null] = ACTIONS(805),
    [anon_sym_publish] = ACTIONS(805),
    [sym_readonly] = ACTIONS(805),
    [anon_sym_i64] = ACTIONS(805),
    [anon_sym_f32] = ACTIONS(805),
    [anon_sym_LPAREN] = ACTIONS(805),
    [sym_long] = ACTIONS(807),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(805),
    [sym_hex] = ACTIONS(807),
    [anon_sym_switch] = ACTIONS(805),
    [sym_identifier] = ACTIONS(805),
    [anon_sym_private] = ACTIONS(805),
    [anon_sym_u8] = ACTIONS(805),
    [anon_sym_f64] = ACTIONS(805),
    [anon_sym_u32] = ACTIONS(805),
    [anon_sym_SQUOTE] = ACTIONS(807),
    [anon_sym_i8] = ACTIONS(805),
    [anon_sym_return] = ACTIONS(805),
    [anon_sym_goto] = ACTIONS(805),
    [sym_oct] = ACTIONS(805),
    [anon_sym_s32] = ACTIONS(805),
    [sym_float] = ACTIONS(807),
    [sym_binary] = ACTIONS(807),
    [anon_sym_DQUOTE] = ACTIONS(807),
    [anon_sym_if] = ACTIONS(805),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(805),
    [anon_sym_u16] = ACTIONS(805),
    [anon_sym_i32] = ACTIONS(805),
    [anon_sym_u64] = ACTIONS(805),
    [sym_integer] = ACTIONS(805),
    [anon_sym_i16] = ACTIONS(805),
  },
  [275] = {
    [anon_sym_DOT] = ACTIONS(855),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [276] = {
    [sym_return_list] = STATE(331),
    [anon_sym_DOT] = ACTIONS(855),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [277] = {
    [sym_is_declare] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(293),
    [anon_sym_s8] = ACTIONS(293),
    [anon_sym_private] = ACTIONS(293),
    [anon_sym_u8] = ACTIONS(293),
    [anon_sym_f64] = ACTIONS(293),
    [anon_sym_u32] = ACTIONS(293),
    [anon_sym_i8] = ACTIONS(293),
    [anon_sym_method] = ACTIONS(293),
    [anon_sym_end] = ACTIONS(293),
    [anon_sym_s32] = ACTIONS(293),
    [anon_sym_publish] = ACTIONS(293),
    [sym_readonly] = ACTIONS(293),
    [anon_sym_i64] = ACTIONS(293),
    [anon_sym_f32] = ACTIONS(293),
    [sym_is_external] = ACTIONS(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(293),
    [anon_sym_s16] = ACTIONS(293),
    [anon_sym_protected] = ACTIONS(293),
    [anon_sym_u16] = ACTIONS(293),
    [anon_sym_i32] = ACTIONS(293),
    [anon_sym_u64] = ACTIONS(293),
    [anon_sym_enum] = ACTIONS(293),
    [anon_sym_i16] = ACTIONS(293),
  },
  [278] = {
    [aux_sym_compound_macro_repeat1] = STATE(158),
    [sym_parameter_list] = STATE(333),
    [sym__space] = ACTIONS(123),
    [anon_sym_DOT] = ACTIONS(857),
    [anon_sym_LPAREN] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
  },
  [279] = {
    [anon_sym_DOT] = ACTIONS(857),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [280] = {
    [anon_sym_section] = ACTIONS(602),
    [anon_sym_s8] = ACTIONS(602),
    [sym_double] = ACTIONS(604),
    [anon_sym_LBRACE] = ACTIONS(604),
    [anon_sym_end] = ACTIONS(602),
    [anon_sym_while] = ACTIONS(602),
    [sym_null] = ACTIONS(602),
    [anon_sym_publish] = ACTIONS(602),
    [sym_readonly] = ACTIONS(602),
    [anon_sym_i64] = ACTIONS(602),
    [anon_sym_f32] = ACTIONS(602),
    [anon_sym_LPAREN] = ACTIONS(602),
    [sym_long] = ACTIONS(604),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(602),
    [sym_hex] = ACTIONS(604),
    [anon_sym_switch] = ACTIONS(602),
    [sym_identifier] = ACTIONS(602),
    [anon_sym_private] = ACTIONS(602),
    [anon_sym_u8] = ACTIONS(602),
    [anon_sym_f64] = ACTIONS(602),
    [anon_sym_u32] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_i8] = ACTIONS(602),
    [anon_sym_return] = ACTIONS(602),
    [anon_sym_goto] = ACTIONS(602),
    [sym_oct] = ACTIONS(602),
    [anon_sym_s32] = ACTIONS(602),
    [sym_float] = ACTIONS(604),
    [sym_binary] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_if] = ACTIONS(602),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(602),
    [anon_sym_u16] = ACTIONS(602),
    [anon_sym_i32] = ACTIONS(602),
    [anon_sym_u64] = ACTIONS(602),
    [sym_integer] = ACTIONS(602),
    [anon_sym_i16] = ACTIONS(602),
  },
  [281] = {
    [anon_sym_DOT] = ACTIONS(859),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [282] = {
    [anon_sym_DOT] = ACTIONS(861),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [283] = {
    [anon_sym_section] = ACTIONS(863),
    [anon_sym_s8] = ACTIONS(863),
    [sym_double] = ACTIONS(865),
    [anon_sym_LBRACE] = ACTIONS(865),
    [anon_sym_end] = ACTIONS(863),
    [anon_sym_while] = ACTIONS(863),
    [sym_null] = ACTIONS(863),
    [anon_sym_publish] = ACTIONS(863),
    [sym_readonly] = ACTIONS(863),
    [anon_sym_i64] = ACTIONS(863),
    [anon_sym_f32] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(863),
    [sym_long] = ACTIONS(865),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(863),
    [sym_hex] = ACTIONS(865),
    [anon_sym_switch] = ACTIONS(863),
    [sym_identifier] = ACTIONS(863),
    [anon_sym_private] = ACTIONS(863),
    [anon_sym_u8] = ACTIONS(863),
    [anon_sym_f64] = ACTIONS(863),
    [anon_sym_u32] = ACTIONS(863),
    [anon_sym_SQUOTE] = ACTIONS(865),
    [anon_sym_i8] = ACTIONS(863),
    [anon_sym_return] = ACTIONS(863),
    [anon_sym_goto] = ACTIONS(863),
    [sym_oct] = ACTIONS(863),
    [anon_sym_s32] = ACTIONS(863),
    [sym_float] = ACTIONS(865),
    [sym_binary] = ACTIONS(865),
    [anon_sym_DQUOTE] = ACTIONS(865),
    [anon_sym_if] = ACTIONS(863),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(863),
    [anon_sym_u16] = ACTIONS(863),
    [anon_sym_i32] = ACTIONS(863),
    [anon_sym_u64] = ACTIONS(863),
    [sym_integer] = ACTIONS(863),
    [anon_sym_i16] = ACTIONS(863),
  },
  [284] = {
    [anon_sym_DOT] = ACTIONS(867),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [285] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(869),
    [sym__comment] = ACTIONS(3),
  },
  [286] = {
    [anon_sym_DOT] = ACTIONS(871),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [287] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(873),
  },
  [288] = {
    [anon_sym_DOT] = ACTIONS(875),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [289] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_end_case] = STATE(337),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(756),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [290] = {
    [sym_end_switch] = STATE(338),
    [anon_sym_end] = ACTIONS(754),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [sym__case_statement] = STATE(221),
    [sym_case_statement_with_block] = STATE(291),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(291),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(877),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(879),
  },
  [292] = {
    [anon_sym_default] = ACTIONS(882),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_DOT] = ACTIONS(884),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [294] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(129),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(131),
    [sym_goto_statement] = STATE(131),
    [sym_section_statement] = STATE(131),
    [sym__while_statement] = STATE(130),
    [sym__variable_statement] = STATE(131),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym_end_default] = STATE(340),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(213),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(213),
    [sym_single_line_if_statement] = STATE(213),
    [sym_while_statement_with_block] = STATE(131),
    [sym_expression_statement] = STATE(131),
    [sym_return_statement] = STATE(131),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(131),
    [sym__if_statement] = STATE(134),
    [sym_if_statement_with_block] = STATE(131),
    [sym__switch_statement] = STATE(135),
    [sym_switch_statement_with_block] = STATE(131),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(758),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(235),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(237),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(235),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(229),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(231),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(235),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [295] = {
    [sym_is_declare] = ACTIONS(886),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(886),
    [anon_sym_s8] = ACTIONS(886),
    [anon_sym_private] = ACTIONS(886),
    [anon_sym_u8] = ACTIONS(886),
    [anon_sym_f64] = ACTIONS(886),
    [anon_sym_u32] = ACTIONS(886),
    [anon_sym_i8] = ACTIONS(886),
    [anon_sym_method] = ACTIONS(886),
    [anon_sym_end] = ACTIONS(886),
    [anon_sym_s32] = ACTIONS(886),
    [anon_sym_publish] = ACTIONS(886),
    [sym_readonly] = ACTIONS(886),
    [anon_sym_i64] = ACTIONS(886),
    [anon_sym_f32] = ACTIONS(886),
    [sym_is_external] = ACTIONS(886),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(886),
    [anon_sym_s16] = ACTIONS(886),
    [anon_sym_protected] = ACTIONS(886),
    [anon_sym_u16] = ACTIONS(886),
    [anon_sym_i32] = ACTIONS(886),
    [anon_sym_u64] = ACTIONS(886),
    [anon_sym_enum] = ACTIONS(886),
    [anon_sym_i16] = ACTIONS(886),
  },
  [296] = {
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_STAR] = ACTIONS(779),
    [anon_sym_EQ_EQ] = ACTIONS(781),
    [anon_sym_PLUS_EQ] = ACTIONS(781),
    [anon_sym_PIPE_PIPE] = ACTIONS(781),
    [anon_sym_SLASH] = ACTIONS(779),
    [anon_sym_LT] = ACTIONS(779),
    [anon_sym_LT_LT_EQ] = ACTIONS(781),
    [anon_sym_SLASH_EQ] = ACTIONS(781),
    [anon_sym_GT_GT_EQ] = ACTIONS(781),
    [anon_sym_AMP_EQ] = ACTIONS(781),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(781),
    [anon_sym_DASH] = ACTIONS(779),
    [anon_sym_AMP_AMP] = ACTIONS(781),
    [anon_sym_LT_EQ] = ACTIONS(781),
    [anon_sym_GT_GT] = ACTIONS(779),
    [anon_sym_PERCENT] = ACTIONS(779),
    [anon_sym_GT_EQ] = ACTIONS(781),
    [anon_sym_CARET] = ACTIONS(779),
    [anon_sym_PLUS_PLUS] = ACTIONS(781),
    [anon_sym_PERCENT_EQ] = ACTIONS(781),
    [anon_sym_DASH_EQ] = ACTIONS(781),
    [anon_sym_PIPE_EQ] = ACTIONS(781),
    [anon_sym_AMP] = ACTIONS(779),
    [anon_sym_BANG_EQ] = ACTIONS(781),
    [anon_sym_LT_LT] = ACTIONS(779),
    [anon_sym_PIPE] = ACTIONS(779),
    [anon_sym_PLUS] = ACTIONS(779),
    [anon_sym_GT] = ACTIONS(779),
    [anon_sym_DASH_DASH] = ACTIONS(779),
    [anon_sym_STAR_EQ] = ACTIONS(781),
    [anon_sym_CARET_EQ] = ACTIONS(781),
    [sym__space] = ACTIONS(3),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(888),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [298] = {
    [anon_sym_s8] = ACTIONS(890),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_end] = ACTIONS(890),
    [sym_null] = ACTIONS(890),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(892),
    [sym_readonly] = ACTIONS(890),
    [anon_sym_f32] = ACTIONS(890),
    [anon_sym_s16] = ACTIONS(890),
    [anon_sym_module] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_DASH_EQ] = ACTIONS(892),
    [anon_sym_private] = ACTIONS(890),
    [anon_sym_f64] = ACTIONS(890),
    [sym_oct] = ACTIONS(890),
    [anon_sym_DOT] = ACTIONS(892),
    [anon_sym_goto] = ACTIONS(890),
    [anon_sym_s32] = ACTIONS(890),
    [anon_sym_function] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_if] = ACTIONS(890),
    [anon_sym_STAR_EQ] = ACTIONS(892),
    [anon_sym_protected] = ACTIONS(890),
    [anon_sym_i32] = ACTIONS(890),
    [sym_integer] = ACTIONS(890),
    [anon_sym_enum] = ACTIONS(890),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_section] = ACTIONS(890),
    [sym_double] = ACTIONS(892),
    [anon_sym_PLUS_EQ] = ACTIONS(892),
    [anon_sym_method] = ACTIONS(890),
    [anon_sym_LT_LT_EQ] = ACTIONS(892),
    [anon_sym_while] = ACTIONS(890),
    [anon_sym_SLASH_EQ] = ACTIONS(892),
    [anon_sym_publish] = ACTIONS(890),
    [anon_sym_AMP_EQ] = ACTIONS(892),
    [anon_sym_i64] = ACTIONS(890),
    [sym_long] = ACTIONS(892),
    [anon_sym_LPAREN] = ACTIONS(890),
    [anon_sym_COLON_EQ] = ACTIONS(892),
    [sym_hex] = ACTIONS(892),
    [anon_sym_PLUS_PLUS] = ACTIONS(892),
    [anon_sym_switch] = ACTIONS(890),
    [anon_sym_PERCENT_EQ] = ACTIONS(892),
    [anon_sym_PIPE_EQ] = ACTIONS(892),
    [anon_sym_u8] = ACTIONS(890),
    [sym_float] = ACTIONS(892),
    [anon_sym_u32] = ACTIONS(890),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [anon_sym_i8] = ACTIONS(890),
    [anon_sym_return] = ACTIONS(890),
    [sym_binary] = ACTIONS(892),
    [ts_builtin_sym_end] = ACTIONS(892),
    [anon_sym_DASH_DASH] = ACTIONS(890),
    [anon_sym_RBRACE] = ACTIONS(892),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(892),
    [anon_sym_u16] = ACTIONS(890),
    [anon_sym_u64] = ACTIONS(890),
    [anon_sym_i16] = ACTIONS(890),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(894),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(894),
    [sym__comment] = ACTIONS(3),
  },
  [300] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(300),
    [anon_sym_RPAREN] = ACTIONS(894),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(896),
    [sym__comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_section] = ACTIONS(779),
    [anon_sym_s8] = ACTIONS(779),
    [sym_double] = ACTIONS(781),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_while] = ACTIONS(779),
    [sym_null] = ACTIONS(779),
    [anon_sym_publish] = ACTIONS(779),
    [sym_readonly] = ACTIONS(779),
    [anon_sym_i64] = ACTIONS(779),
    [anon_sym_f32] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(779),
    [sym_long] = ACTIONS(781),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(779),
    [sym_hex] = ACTIONS(781),
    [anon_sym_switch] = ACTIONS(779),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_private] = ACTIONS(779),
    [anon_sym_u8] = ACTIONS(779),
    [anon_sym_f64] = ACTIONS(779),
    [anon_sym_u32] = ACTIONS(779),
    [anon_sym_DOT] = ACTIONS(781),
    [anon_sym_i8] = ACTIONS(779),
    [anon_sym_return] = ACTIONS(779),
    [anon_sym_goto] = ACTIONS(779),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [anon_sym_s32] = ACTIONS(779),
    [sym_oct] = ACTIONS(779),
    [sym_float] = ACTIONS(781),
    [sym_binary] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(781),
    [anon_sym_if] = ACTIONS(779),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(779),
    [anon_sym_u16] = ACTIONS(779),
    [anon_sym_i32] = ACTIONS(779),
    [anon_sym_u64] = ACTIONS(779),
    [sym_integer] = ACTIONS(779),
    [anon_sym_i16] = ACTIONS(779),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(899),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [303] = {
    [anon_sym_DOT] = ACTIONS(901),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [304] = {
    [anon_sym_RPAREN] = ACTIONS(903),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(903),
    [sym__comment] = ACTIONS(3),
  },
  [305] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(905),
    [sym__comment] = ACTIONS(3),
  },
  [306] = {
    [aux_sym_enum_definition_repeat1] = STATE(306),
    [anon_sym_RPAREN] = ACTIONS(903),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(907),
    [sym__comment] = ACTIONS(3),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(910),
    [anon_sym_s8] = ACTIONS(912),
    [anon_sym_method] = ACTIONS(912),
    [anon_sym_end] = ACTIONS(912),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(912),
    [sym_readonly] = ACTIONS(912),
    [anon_sym_i64] = ACTIONS(912),
    [anon_sym_f32] = ACTIONS(912),
    [anon_sym_s16] = ACTIONS(912),
    [sym_is_declare] = ACTIONS(912),
    [sym_identifier] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_private] = ACTIONS(912),
    [anon_sym_u8] = ACTIONS(912),
    [anon_sym_f64] = ACTIONS(912),
    [anon_sym_u32] = ACTIONS(912),
    [anon_sym_DOT] = ACTIONS(910),
    [anon_sym_i8] = ACTIONS(912),
    [anon_sym_s32] = ACTIONS(912),
    [sym_is_external] = ACTIONS(912),
    [anon_sym_function] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(912),
    [anon_sym_u16] = ACTIONS(912),
    [anon_sym_i32] = ACTIONS(912),
    [anon_sym_u64] = ACTIONS(912),
    [anon_sym_enum] = ACTIONS(912),
    [anon_sym_i16] = ACTIONS(912),
  },
  [308] = {
    [sym_integer] = ACTIONS(914),
    [anon_sym_section] = ACTIONS(914),
    [anon_sym_s8] = ACTIONS(914),
    [sym_double] = ACTIONS(916),
    [anon_sym_method] = ACTIONS(914),
    [anon_sym_end] = ACTIONS(914),
    [anon_sym_while] = ACTIONS(914),
    [anon_sym_LBRACE] = ACTIONS(916),
    [anon_sym_publish] = ACTIONS(914),
    [sym_readonly] = ACTIONS(914),
    [anon_sym_i64] = ACTIONS(914),
    [anon_sym_f32] = ACTIONS(914),
    [anon_sym_LPAREN] = ACTIONS(914),
    [sym_null] = ACTIONS(914),
    [sym_long] = ACTIONS(916),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(914),
    [sym_hex] = ACTIONS(916),
    [anon_sym_module] = ACTIONS(914),
    [anon_sym_switch] = ACTIONS(914),
    [sym_identifier] = ACTIONS(914),
    [anon_sym_private] = ACTIONS(914),
    [anon_sym_u8] = ACTIONS(914),
    [anon_sym_f64] = ACTIONS(914),
    [anon_sym_u32] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(916),
    [anon_sym_i8] = ACTIONS(914),
    [anon_sym_return] = ACTIONS(914),
    [anon_sym_goto] = ACTIONS(914),
    [sym_oct] = ACTIONS(914),
    [anon_sym_s32] = ACTIONS(914),
    [sym_float] = ACTIONS(916),
    [sym_binary] = ACTIONS(916),
    [ts_builtin_sym_end] = ACTIONS(916),
    [anon_sym_function] = ACTIONS(914),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_if] = ACTIONS(914),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(914),
    [anon_sym_u16] = ACTIONS(914),
    [anon_sym_i32] = ACTIONS(914),
    [anon_sym_u64] = ACTIONS(914),
    [anon_sym_enum] = ACTIONS(914),
    [anon_sym_i16] = ACTIONS(914),
  },
  [309] = {
    [anon_sym_DOT] = ACTIONS(918),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [310] = {
    [sym_integer] = ACTIONS(538),
    [anon_sym_section] = ACTIONS(538),
    [anon_sym_s8] = ACTIONS(538),
    [sym_double] = ACTIONS(540),
    [anon_sym_method] = ACTIONS(538),
    [anon_sym_end] = ACTIONS(538),
    [anon_sym_while] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_publish] = ACTIONS(538),
    [sym_readonly] = ACTIONS(538),
    [anon_sym_i64] = ACTIONS(538),
    [anon_sym_f32] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(538),
    [sym_null] = ACTIONS(538),
    [sym_long] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(538),
    [sym_hex] = ACTIONS(540),
    [anon_sym_module] = ACTIONS(538),
    [anon_sym_switch] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_private] = ACTIONS(538),
    [anon_sym_u8] = ACTIONS(538),
    [anon_sym_f64] = ACTIONS(538),
    [anon_sym_u32] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_i8] = ACTIONS(538),
    [anon_sym_return] = ACTIONS(538),
    [anon_sym_goto] = ACTIONS(538),
    [sym_oct] = ACTIONS(538),
    [anon_sym_s32] = ACTIONS(538),
    [sym_float] = ACTIONS(540),
    [sym_binary] = ACTIONS(540),
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_function] = ACTIONS(538),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [anon_sym_if] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(538),
    [anon_sym_u16] = ACTIONS(538),
    [anon_sym_i32] = ACTIONS(538),
    [anon_sym_u64] = ACTIONS(538),
    [anon_sym_enum] = ACTIONS(538),
    [anon_sym_i16] = ACTIONS(538),
  },
  [311] = {
    [anon_sym_RPAREN] = ACTIONS(920),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [312] = {
    [sym__literal] = STATE(347),
    [sym_group_expression] = STATE(347),
    [sym__number] = STATE(347),
    [sym_string] = STATE(347),
    [sym_character] = STATE(347),
    [sym__value] = STATE(347),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(922),
    [sym_identifier] = ACTIONS(924),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(922),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(924),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(922),
    [sym_hex] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(924),
    [sym_integer] = ACTIONS(924),
    [sym_binary] = ACTIONS(922),
  },
  [313] = {
    [sym_integer] = ACTIONS(585),
    [anon_sym_section] = ACTIONS(585),
    [anon_sym_s8] = ACTIONS(585),
    [sym_double] = ACTIONS(583),
    [anon_sym_method] = ACTIONS(585),
    [anon_sym_end] = ACTIONS(585),
    [anon_sym_while] = ACTIONS(585),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_publish] = ACTIONS(585),
    [sym_readonly] = ACTIONS(585),
    [anon_sym_i64] = ACTIONS(585),
    [anon_sym_f32] = ACTIONS(585),
    [anon_sym_LPAREN] = ACTIONS(585),
    [sym_null] = ACTIONS(585),
    [sym_long] = ACTIONS(583),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(585),
    [sym_hex] = ACTIONS(583),
    [anon_sym_module] = ACTIONS(585),
    [anon_sym_switch] = ACTIONS(585),
    [sym_identifier] = ACTIONS(585),
    [anon_sym_private] = ACTIONS(585),
    [anon_sym_u8] = ACTIONS(585),
    [anon_sym_f64] = ACTIONS(585),
    [anon_sym_u32] = ACTIONS(585),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_i8] = ACTIONS(585),
    [anon_sym_return] = ACTIONS(585),
    [anon_sym_goto] = ACTIONS(585),
    [sym_oct] = ACTIONS(585),
    [anon_sym_s32] = ACTIONS(585),
    [sym_float] = ACTIONS(583),
    [sym_binary] = ACTIONS(583),
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_function] = ACTIONS(585),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [anon_sym_if] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(585),
    [anon_sym_u16] = ACTIONS(585),
    [anon_sym_i32] = ACTIONS(585),
    [anon_sym_u64] = ACTIONS(585),
    [anon_sym_enum] = ACTIONS(585),
    [anon_sym_i16] = ACTIONS(585),
  },
  [314] = {
    [sym_integer] = ACTIONS(577),
    [anon_sym_section] = ACTIONS(577),
    [anon_sym_s8] = ACTIONS(577),
    [sym_double] = ACTIONS(575),
    [anon_sym_method] = ACTIONS(577),
    [anon_sym_end] = ACTIONS(577),
    [anon_sym_while] = ACTIONS(577),
    [anon_sym_LBRACE] = ACTIONS(575),
    [anon_sym_publish] = ACTIONS(577),
    [sym_readonly] = ACTIONS(577),
    [anon_sym_i64] = ACTIONS(577),
    [anon_sym_f32] = ACTIONS(577),
    [anon_sym_LPAREN] = ACTIONS(577),
    [sym_null] = ACTIONS(577),
    [sym_long] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(577),
    [sym_hex] = ACTIONS(575),
    [anon_sym_module] = ACTIONS(577),
    [anon_sym_switch] = ACTIONS(577),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_private] = ACTIONS(577),
    [anon_sym_u8] = ACTIONS(577),
    [anon_sym_f64] = ACTIONS(577),
    [anon_sym_u32] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(575),
    [anon_sym_i8] = ACTIONS(577),
    [anon_sym_return] = ACTIONS(577),
    [anon_sym_goto] = ACTIONS(577),
    [sym_oct] = ACTIONS(577),
    [anon_sym_s32] = ACTIONS(577),
    [sym_float] = ACTIONS(575),
    [sym_binary] = ACTIONS(575),
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_function] = ACTIONS(577),
    [anon_sym_DQUOTE] = ACTIONS(575),
    [anon_sym_if] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(577),
    [anon_sym_u16] = ACTIONS(577),
    [anon_sym_i32] = ACTIONS(577),
    [anon_sym_u64] = ACTIONS(577),
    [anon_sym_enum] = ACTIONS(577),
    [anon_sym_i16] = ACTIONS(577),
  },
  [315] = {
    [sym_integer] = ACTIONS(526),
    [anon_sym_section] = ACTIONS(526),
    [anon_sym_s8] = ACTIONS(526),
    [sym_double] = ACTIONS(528),
    [anon_sym_method] = ACTIONS(526),
    [anon_sym_end] = ACTIONS(526),
    [anon_sym_while] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_publish] = ACTIONS(526),
    [sym_readonly] = ACTIONS(526),
    [anon_sym_i64] = ACTIONS(526),
    [anon_sym_f32] = ACTIONS(526),
    [anon_sym_LPAREN] = ACTIONS(526),
    [sym_null] = ACTIONS(526),
    [sym_long] = ACTIONS(528),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(526),
    [sym_hex] = ACTIONS(528),
    [anon_sym_module] = ACTIONS(526),
    [anon_sym_switch] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_private] = ACTIONS(526),
    [anon_sym_u8] = ACTIONS(526),
    [anon_sym_f64] = ACTIONS(526),
    [anon_sym_u32] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_i8] = ACTIONS(526),
    [anon_sym_return] = ACTIONS(526),
    [anon_sym_goto] = ACTIONS(526),
    [sym_oct] = ACTIONS(526),
    [anon_sym_s32] = ACTIONS(526),
    [sym_float] = ACTIONS(528),
    [sym_binary] = ACTIONS(528),
    [ts_builtin_sym_end] = ACTIONS(528),
    [anon_sym_function] = ACTIONS(526),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [anon_sym_if] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(526),
    [anon_sym_u16] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(526),
    [anon_sym_u64] = ACTIONS(526),
    [anon_sym_enum] = ACTIONS(526),
    [anon_sym_i16] = ACTIONS(526),
  },
  [316] = {
    [sym_primitive_type] = STATE(261),
    [sym_type] = STATE(348),
    [sym__base_type] = STATE(261),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [317] = {
    [aux_sym__comma_list_types_repeat1] = STATE(349),
    [anon_sym_DOT] = ACTIONS(926),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(825),
    [sym__comment] = ACTIONS(3),
  },
  [318] = {
    [sym_array] = STATE(350),
    [aux_sym_type_repeat2] = STATE(350),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(928),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(928),
    [sym__comment] = ACTIONS(3),
  },
  [319] = {
    [aux_sym_type_repeat2] = STATE(351),
    [sym_pointer] = STATE(352),
    [aux_sym_type_repeat1] = STATE(352),
    [sym_array] = STATE(351),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(928),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_STAR] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
  },
  [320] = {
    [sym_is_declare] = ACTIONS(805),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(805),
    [anon_sym_s8] = ACTIONS(805),
    [anon_sym_private] = ACTIONS(805),
    [anon_sym_u8] = ACTIONS(805),
    [anon_sym_f64] = ACTIONS(805),
    [anon_sym_u32] = ACTIONS(805),
    [anon_sym_i8] = ACTIONS(805),
    [anon_sym_method] = ACTIONS(805),
    [anon_sym_end] = ACTIONS(805),
    [anon_sym_s32] = ACTIONS(805),
    [anon_sym_publish] = ACTIONS(805),
    [sym_readonly] = ACTIONS(805),
    [anon_sym_i64] = ACTIONS(805),
    [anon_sym_f32] = ACTIONS(805),
    [sym_is_external] = ACTIONS(805),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(805),
    [anon_sym_s16] = ACTIONS(805),
    [anon_sym_protected] = ACTIONS(805),
    [anon_sym_u16] = ACTIONS(805),
    [anon_sym_i32] = ACTIONS(805),
    [anon_sym_u64] = ACTIONS(805),
    [anon_sym_enum] = ACTIONS(805),
    [anon_sym_i16] = ACTIONS(805),
  },
  [321] = {
    [anon_sym_DOT] = ACTIONS(930),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [322] = {
    [sym__literal] = STATE(356),
    [sym_group_expression] = STATE(356),
    [sym_assignment_expression] = STATE(354),
    [sym_string] = STATE(356),
    [sym_character] = STATE(356),
    [sym_unary_op] = STATE(355),
    [sym__collection_or_value] = STATE(74),
    [sym_collection] = STATE(74),
    [sym__number] = STATE(356),
    [sym__value] = STATE(356),
    [sym_identifier] = ACTIONS(932),
    [anon_sym_BANG] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [sym_double] = ACTIONS(934),
    [sym_float] = ACTIONS(934),
    [sym_oct] = ACTIONS(932),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(105),
    [sym_null] = ACTIONS(932),
    [sym_binary] = ACTIONS(934),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(934),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(934),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(932),
  },
  [323] = {
    [aux_sym_string_repeat1] = STATE(358),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(936),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(938),
  },
  [324] = {
    [sym__escape_sequence] = STATE(359),
    [anon_sym_BSLASH0] = ACTIONS(940),
    [anon_sym_BSLASHr] = ACTIONS(940),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(940),
    [anon_sym_BSLASHa] = ACTIONS(940),
    [anon_sym_BSLASHt] = ACTIONS(940),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(940),
    [anon_sym_BSLASHv] = ACTIONS(940),
    [anon_sym_BSLASHn] = ACTIONS(940),
    [aux_sym_character_token1] = ACTIONS(942),
    [anon_sym_BSLASHf] = ACTIONS(940),
  },
  [325] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(66),
    [sym__assignment_or_collection_or_value] = STATE(66),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(360),
    [sym__collection_or_value] = STATE(68),
    [sym_collection] = STATE(68),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [326] = {
    [sym_static_assignment] = STATE(307),
    [sym_is_declare] = ACTIONS(771),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(771),
    [anon_sym_s8] = ACTIONS(771),
    [anon_sym_private] = ACTIONS(771),
    [anon_sym_u8] = ACTIONS(771),
    [anon_sym_f64] = ACTIONS(771),
    [anon_sym_u32] = ACTIONS(771),
    [anon_sym_i8] = ACTIONS(771),
    [anon_sym_method] = ACTIONS(771),
    [anon_sym_end] = ACTIONS(771),
    [anon_sym_s32] = ACTIONS(771),
    [anon_sym_publish] = ACTIONS(771),
    [sym_readonly] = ACTIONS(771),
    [anon_sym_i64] = ACTIONS(771),
    [anon_sym_f32] = ACTIONS(771),
    [sym_is_external] = ACTIONS(771),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(771),
    [anon_sym_COLON_EQ] = ACTIONS(674),
    [anon_sym_s16] = ACTIONS(771),
    [anon_sym_protected] = ACTIONS(771),
    [anon_sym_u16] = ACTIONS(771),
    [anon_sym_i32] = ACTIONS(771),
    [anon_sym_u64] = ACTIONS(771),
    [anon_sym_enum] = ACTIONS(771),
    [anon_sym_i16] = ACTIONS(771),
  },
  [327] = {
    [sym_return_list] = STATE(361),
    [anon_sym_DOT] = ACTIONS(930),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_DOT] = ACTIONS(944),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [329] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(946),
    [sym__comment] = ACTIONS(3),
  },
  [330] = {
    [anon_sym_section] = ACTIONS(914),
    [anon_sym_s8] = ACTIONS(914),
    [sym_double] = ACTIONS(916),
    [anon_sym_LBRACE] = ACTIONS(916),
    [anon_sym_end] = ACTIONS(914),
    [anon_sym_while] = ACTIONS(914),
    [sym_null] = ACTIONS(914),
    [anon_sym_publish] = ACTIONS(914),
    [sym_readonly] = ACTIONS(914),
    [anon_sym_i64] = ACTIONS(914),
    [anon_sym_f32] = ACTIONS(914),
    [anon_sym_LPAREN] = ACTIONS(914),
    [sym_long] = ACTIONS(916),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(914),
    [sym_hex] = ACTIONS(916),
    [anon_sym_switch] = ACTIONS(914),
    [sym_identifier] = ACTIONS(914),
    [anon_sym_private] = ACTIONS(914),
    [anon_sym_u8] = ACTIONS(914),
    [anon_sym_f64] = ACTIONS(914),
    [anon_sym_u32] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(916),
    [anon_sym_i8] = ACTIONS(914),
    [anon_sym_return] = ACTIONS(914),
    [anon_sym_goto] = ACTIONS(914),
    [sym_oct] = ACTIONS(914),
    [anon_sym_s32] = ACTIONS(914),
    [sym_float] = ACTIONS(916),
    [sym_binary] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_if] = ACTIONS(914),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(914),
    [anon_sym_u16] = ACTIONS(914),
    [anon_sym_i32] = ACTIONS(914),
    [anon_sym_u64] = ACTIONS(914),
    [sym_integer] = ACTIONS(914),
    [anon_sym_i16] = ACTIONS(914),
  },
  [331] = {
    [anon_sym_DOT] = ACTIONS(948),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [332] = {
    [sym_is_declare] = ACTIONS(564),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(564),
    [anon_sym_s8] = ACTIONS(564),
    [anon_sym_private] = ACTIONS(564),
    [anon_sym_u8] = ACTIONS(564),
    [anon_sym_f64] = ACTIONS(564),
    [anon_sym_u32] = ACTIONS(564),
    [anon_sym_i8] = ACTIONS(564),
    [anon_sym_method] = ACTIONS(564),
    [anon_sym_end] = ACTIONS(564),
    [anon_sym_s32] = ACTIONS(564),
    [anon_sym_publish] = ACTIONS(564),
    [sym_readonly] = ACTIONS(564),
    [anon_sym_i64] = ACTIONS(564),
    [anon_sym_f32] = ACTIONS(564),
    [sym_is_external] = ACTIONS(564),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(564),
    [anon_sym_s16] = ACTIONS(564),
    [anon_sym_protected] = ACTIONS(564),
    [anon_sym_u16] = ACTIONS(564),
    [anon_sym_i32] = ACTIONS(564),
    [anon_sym_u64] = ACTIONS(564),
    [anon_sym_enum] = ACTIONS(564),
    [anon_sym_i16] = ACTIONS(564),
  },
  [333] = {
    [anon_sym_DOT] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [334] = {
    [anon_sym_section] = ACTIONS(952),
    [anon_sym_s8] = ACTIONS(952),
    [sym_double] = ACTIONS(954),
    [anon_sym_LBRACE] = ACTIONS(954),
    [anon_sym_end] = ACTIONS(952),
    [anon_sym_while] = ACTIONS(952),
    [sym_null] = ACTIONS(952),
    [anon_sym_publish] = ACTIONS(952),
    [sym_readonly] = ACTIONS(952),
    [anon_sym_i64] = ACTIONS(952),
    [anon_sym_f32] = ACTIONS(952),
    [anon_sym_LPAREN] = ACTIONS(952),
    [sym_long] = ACTIONS(954),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(952),
    [sym_hex] = ACTIONS(954),
    [anon_sym_switch] = ACTIONS(952),
    [sym_identifier] = ACTIONS(952),
    [anon_sym_private] = ACTIONS(952),
    [anon_sym_u8] = ACTIONS(952),
    [anon_sym_f64] = ACTIONS(952),
    [anon_sym_u32] = ACTIONS(952),
    [anon_sym_SQUOTE] = ACTIONS(954),
    [anon_sym_i8] = ACTIONS(952),
    [anon_sym_return] = ACTIONS(952),
    [anon_sym_goto] = ACTIONS(952),
    [sym_oct] = ACTIONS(952),
    [anon_sym_s32] = ACTIONS(952),
    [sym_float] = ACTIONS(954),
    [sym_binary] = ACTIONS(954),
    [anon_sym_DQUOTE] = ACTIONS(954),
    [anon_sym_if] = ACTIONS(952),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(952),
    [anon_sym_u16] = ACTIONS(952),
    [anon_sym_i32] = ACTIONS(952),
    [anon_sym_u64] = ACTIONS(952),
    [sym_integer] = ACTIONS(952),
    [anon_sym_i16] = ACTIONS(952),
  },
  [335] = {
    [anon_sym_DOT] = ACTIONS(956),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [336] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(958),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(958),
  },
  [337] = {
    [anon_sym_DOT] = ACTIONS(960),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [338] = {
    [anon_sym_DOT] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_end] = ACTIONS(964),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [340] = {
    [anon_sym_DOT] = ACTIONS(966),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [341] = {
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_STAR] = ACTIONS(890),
    [anon_sym_EQ_EQ] = ACTIONS(892),
    [anon_sym_PLUS_EQ] = ACTIONS(892),
    [anon_sym_PIPE_PIPE] = ACTIONS(892),
    [anon_sym_SLASH] = ACTIONS(890),
    [anon_sym_LT] = ACTIONS(890),
    [anon_sym_LT_LT_EQ] = ACTIONS(892),
    [anon_sym_SLASH_EQ] = ACTIONS(892),
    [anon_sym_GT_GT_EQ] = ACTIONS(892),
    [anon_sym_AMP_EQ] = ACTIONS(892),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(892),
    [anon_sym_DASH] = ACTIONS(890),
    [anon_sym_AMP_AMP] = ACTIONS(892),
    [anon_sym_LT_EQ] = ACTIONS(892),
    [anon_sym_GT_GT] = ACTIONS(890),
    [anon_sym_PERCENT] = ACTIONS(890),
    [anon_sym_GT_EQ] = ACTIONS(892),
    [anon_sym_CARET] = ACTIONS(890),
    [anon_sym_PLUS_PLUS] = ACTIONS(892),
    [anon_sym_PERCENT_EQ] = ACTIONS(892),
    [anon_sym_DASH_EQ] = ACTIONS(892),
    [anon_sym_PIPE_EQ] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(890),
    [anon_sym_BANG_EQ] = ACTIONS(892),
    [anon_sym_LT_LT] = ACTIONS(890),
    [anon_sym_PIPE] = ACTIONS(890),
    [anon_sym_PLUS] = ACTIONS(890),
    [anon_sym_GT] = ACTIONS(890),
    [anon_sym_DASH_DASH] = ACTIONS(890),
    [anon_sym_STAR_EQ] = ACTIONS(892),
    [anon_sym_CARET_EQ] = ACTIONS(892),
    [sym__space] = ACTIONS(3),
  },
  [342] = {
    [anon_sym_section] = ACTIONS(890),
    [anon_sym_s8] = ACTIONS(890),
    [sym_double] = ACTIONS(892),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_while] = ACTIONS(890),
    [sym_null] = ACTIONS(890),
    [anon_sym_publish] = ACTIONS(890),
    [sym_readonly] = ACTIONS(890),
    [anon_sym_i64] = ACTIONS(890),
    [anon_sym_f32] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(890),
    [sym_long] = ACTIONS(892),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(890),
    [sym_hex] = ACTIONS(892),
    [anon_sym_switch] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_private] = ACTIONS(890),
    [anon_sym_u8] = ACTIONS(890),
    [anon_sym_f64] = ACTIONS(890),
    [anon_sym_u32] = ACTIONS(890),
    [anon_sym_DOT] = ACTIONS(892),
    [anon_sym_i8] = ACTIONS(890),
    [anon_sym_return] = ACTIONS(890),
    [anon_sym_goto] = ACTIONS(890),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [anon_sym_s32] = ACTIONS(890),
    [sym_oct] = ACTIONS(890),
    [sym_float] = ACTIONS(892),
    [sym_binary] = ACTIONS(892),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_if] = ACTIONS(890),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(890),
    [anon_sym_u16] = ACTIONS(890),
    [anon_sym_i32] = ACTIONS(890),
    [anon_sym_u64] = ACTIONS(890),
    [sym_integer] = ACTIONS(890),
    [anon_sym_i16] = ACTIONS(890),
  },
  [343] = {
    [sym_integer] = ACTIONS(968),
    [anon_sym_section] = ACTIONS(968),
    [anon_sym_s8] = ACTIONS(968),
    [sym_double] = ACTIONS(970),
    [anon_sym_method] = ACTIONS(968),
    [anon_sym_end] = ACTIONS(968),
    [anon_sym_while] = ACTIONS(968),
    [anon_sym_LBRACE] = ACTIONS(970),
    [anon_sym_publish] = ACTIONS(968),
    [sym_readonly] = ACTIONS(968),
    [anon_sym_i64] = ACTIONS(968),
    [anon_sym_f32] = ACTIONS(968),
    [anon_sym_LPAREN] = ACTIONS(968),
    [sym_null] = ACTIONS(968),
    [sym_long] = ACTIONS(970),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(968),
    [sym_hex] = ACTIONS(970),
    [anon_sym_module] = ACTIONS(968),
    [anon_sym_switch] = ACTIONS(968),
    [sym_identifier] = ACTIONS(968),
    [anon_sym_private] = ACTIONS(968),
    [anon_sym_u8] = ACTIONS(968),
    [anon_sym_f64] = ACTIONS(968),
    [anon_sym_u32] = ACTIONS(968),
    [anon_sym_SQUOTE] = ACTIONS(970),
    [anon_sym_i8] = ACTIONS(968),
    [anon_sym_return] = ACTIONS(968),
    [anon_sym_goto] = ACTIONS(968),
    [sym_oct] = ACTIONS(968),
    [anon_sym_s32] = ACTIONS(968),
    [sym_float] = ACTIONS(970),
    [sym_binary] = ACTIONS(970),
    [ts_builtin_sym_end] = ACTIONS(970),
    [anon_sym_function] = ACTIONS(968),
    [anon_sym_DQUOTE] = ACTIONS(970),
    [anon_sym_if] = ACTIONS(968),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(968),
    [anon_sym_u16] = ACTIONS(968),
    [anon_sym_i32] = ACTIONS(968),
    [anon_sym_u64] = ACTIONS(968),
    [anon_sym_enum] = ACTIONS(968),
    [anon_sym_i16] = ACTIONS(968),
  },
  [344] = {
    [anon_sym_DOT] = ACTIONS(972),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [345] = {
    [sym_integer] = ACTIONS(974),
    [anon_sym_section] = ACTIONS(974),
    [anon_sym_s8] = ACTIONS(974),
    [sym_double] = ACTIONS(976),
    [anon_sym_method] = ACTIONS(974),
    [anon_sym_end] = ACTIONS(974),
    [anon_sym_while] = ACTIONS(974),
    [anon_sym_LBRACE] = ACTIONS(976),
    [anon_sym_publish] = ACTIONS(974),
    [sym_readonly] = ACTIONS(974),
    [anon_sym_i64] = ACTIONS(974),
    [anon_sym_f32] = ACTIONS(974),
    [anon_sym_LPAREN] = ACTIONS(974),
    [sym_null] = ACTIONS(974),
    [sym_long] = ACTIONS(976),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(974),
    [sym_hex] = ACTIONS(976),
    [anon_sym_module] = ACTIONS(974),
    [anon_sym_switch] = ACTIONS(974),
    [sym_identifier] = ACTIONS(974),
    [anon_sym_private] = ACTIONS(974),
    [anon_sym_u8] = ACTIONS(974),
    [anon_sym_f64] = ACTIONS(974),
    [anon_sym_u32] = ACTIONS(974),
    [anon_sym_SQUOTE] = ACTIONS(976),
    [anon_sym_i8] = ACTIONS(974),
    [anon_sym_return] = ACTIONS(974),
    [anon_sym_goto] = ACTIONS(974),
    [sym_oct] = ACTIONS(974),
    [anon_sym_s32] = ACTIONS(974),
    [sym_float] = ACTIONS(976),
    [sym_binary] = ACTIONS(976),
    [ts_builtin_sym_end] = ACTIONS(976),
    [anon_sym_function] = ACTIONS(974),
    [anon_sym_DQUOTE] = ACTIONS(976),
    [anon_sym_if] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(974),
    [anon_sym_u16] = ACTIONS(974),
    [anon_sym_i32] = ACTIONS(974),
    [anon_sym_u64] = ACTIONS(974),
    [anon_sym_enum] = ACTIONS(974),
    [anon_sym_i16] = ACTIONS(974),
  },
  [346] = {
    [sym_integer] = ACTIONS(779),
    [anon_sym_section] = ACTIONS(779),
    [anon_sym_s8] = ACTIONS(779),
    [sym_double] = ACTIONS(781),
    [anon_sym_method] = ACTIONS(779),
    [anon_sym_end] = ACTIONS(779),
    [anon_sym_while] = ACTIONS(779),
    [anon_sym_LBRACE] = ACTIONS(781),
    [anon_sym_publish] = ACTIONS(779),
    [sym_readonly] = ACTIONS(779),
    [anon_sym_i64] = ACTIONS(779),
    [anon_sym_f32] = ACTIONS(779),
    [anon_sym_LPAREN] = ACTIONS(779),
    [sym_null] = ACTIONS(779),
    [sym_long] = ACTIONS(781),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(779),
    [sym_hex] = ACTIONS(781),
    [anon_sym_module] = ACTIONS(779),
    [anon_sym_switch] = ACTIONS(779),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_private] = ACTIONS(779),
    [anon_sym_u8] = ACTIONS(779),
    [anon_sym_f64] = ACTIONS(779),
    [anon_sym_u32] = ACTIONS(779),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [anon_sym_i8] = ACTIONS(779),
    [anon_sym_return] = ACTIONS(779),
    [anon_sym_goto] = ACTIONS(779),
    [sym_oct] = ACTIONS(779),
    [anon_sym_s32] = ACTIONS(779),
    [sym_float] = ACTIONS(781),
    [sym_binary] = ACTIONS(781),
    [ts_builtin_sym_end] = ACTIONS(781),
    [anon_sym_function] = ACTIONS(779),
    [anon_sym_DQUOTE] = ACTIONS(781),
    [anon_sym_if] = ACTIONS(779),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(779),
    [anon_sym_u16] = ACTIONS(779),
    [anon_sym_i32] = ACTIONS(779),
    [anon_sym_u64] = ACTIONS(779),
    [anon_sym_enum] = ACTIONS(779),
    [anon_sym_i16] = ACTIONS(779),
  },
  [347] = {
    [anon_sym_RPAREN] = ACTIONS(978),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [348] = {
    [anon_sym_DOT] = ACTIONS(980),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(980),
    [sym__comment] = ACTIONS(3),
  },
  [349] = {
    [aux_sym__comma_list_types_repeat1] = STATE(349),
    [anon_sym_DOT] = ACTIONS(980),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(982),
    [sym__comment] = ACTIONS(3),
  },
  [350] = {
    [sym_array] = STATE(350),
    [aux_sym_type_repeat2] = STATE(350),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_DOT] = ACTIONS(985),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(985),
    [sym__comment] = ACTIONS(3),
  },
  [351] = {
    [sym_array] = STATE(350),
    [aux_sym_type_repeat2] = STATE(350),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(987),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(987),
    [sym__comment] = ACTIONS(3),
  },
  [352] = {
    [sym_pointer] = STATE(352),
    [aux_sym_type_repeat1] = STATE(352),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_DOT] = ACTIONS(661),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(665),
    [anon_sym_COMMA] = ACTIONS(661),
    [sym__comment] = ACTIONS(3),
  },
  [353] = {
    [sym_is_declare] = ACTIONS(914),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(914),
    [anon_sym_s8] = ACTIONS(914),
    [anon_sym_private] = ACTIONS(914),
    [anon_sym_u8] = ACTIONS(914),
    [anon_sym_f64] = ACTIONS(914),
    [anon_sym_u32] = ACTIONS(914),
    [anon_sym_i8] = ACTIONS(914),
    [anon_sym_method] = ACTIONS(914),
    [anon_sym_end] = ACTIONS(914),
    [anon_sym_s32] = ACTIONS(914),
    [anon_sym_publish] = ACTIONS(914),
    [sym_readonly] = ACTIONS(914),
    [anon_sym_i64] = ACTIONS(914),
    [anon_sym_f32] = ACTIONS(914),
    [sym_is_external] = ACTIONS(914),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(914),
    [anon_sym_s16] = ACTIONS(914),
    [anon_sym_protected] = ACTIONS(914),
    [anon_sym_u16] = ACTIONS(914),
    [anon_sym_i32] = ACTIONS(914),
    [anon_sym_u64] = ACTIONS(914),
    [anon_sym_enum] = ACTIONS(914),
    [anon_sym_i16] = ACTIONS(914),
  },
  [354] = {
    [anon_sym_RPAREN] = ACTIONS(989),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [355] = {
    [sym__literal] = STATE(371),
    [sym_group_expression] = STATE(371),
    [sym__number] = STATE(371),
    [sym_string] = STATE(371),
    [sym_character] = STATE(371),
    [sym__value] = STATE(371),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(991),
    [sym_identifier] = ACTIONS(993),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(991),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(993),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(991),
    [sym_hex] = ACTIONS(991),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(993),
    [sym_integer] = ACTIONS(993),
    [sym_binary] = ACTIONS(991),
  },
  [356] = {
    [sym_binary_op] = STATE(372),
    [sym_assignment_post_op] = STATE(102),
    [anon_sym_RPAREN] = ACTIONS(989),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_EQ_EQ] = ACTIONS(287),
    [anon_sym_PLUS_EQ] = ACTIONS(173),
    [anon_sym_PIPE_PIPE] = ACTIONS(287),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_LT] = ACTIONS(285),
    [anon_sym_LT_LT_EQ] = ACTIONS(173),
    [anon_sym_SLASH_EQ] = ACTIONS(173),
    [anon_sym_GT_GT_EQ] = ACTIONS(173),
    [anon_sym_AMP_EQ] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(285),
    [anon_sym_AMP_AMP] = ACTIONS(287),
    [anon_sym_LT_EQ] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_PERCENT] = ACTIONS(285),
    [anon_sym_GT_EQ] = ACTIONS(287),
    [anon_sym_CARET] = ACTIONS(285),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_PERCENT_EQ] = ACTIONS(173),
    [anon_sym_DASH_EQ] = ACTIONS(173),
    [anon_sym_PIPE_EQ] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(285),
    [anon_sym_BANG_EQ] = ACTIONS(287),
    [anon_sym_LT_LT] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PLUS] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_DASH_DASH] = ACTIONS(177),
    [anon_sym_STAR_EQ] = ACTIONS(173),
    [anon_sym_CARET_EQ] = ACTIONS(173),
    [sym__space] = ACTIONS(3),
  },
  [357] = {
    [sym_is_declare] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(323),
    [anon_sym_s8] = ACTIONS(323),
    [anon_sym_private] = ACTIONS(323),
    [anon_sym_u8] = ACTIONS(323),
    [anon_sym_f64] = ACTIONS(323),
    [anon_sym_u32] = ACTIONS(323),
    [anon_sym_i8] = ACTIONS(323),
    [anon_sym_method] = ACTIONS(323),
    [anon_sym_end] = ACTIONS(323),
    [anon_sym_s32] = ACTIONS(323),
    [anon_sym_publish] = ACTIONS(323),
    [sym_readonly] = ACTIONS(323),
    [anon_sym_i64] = ACTIONS(323),
    [anon_sym_f32] = ACTIONS(323),
    [sym_is_external] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(323),
    [anon_sym_s16] = ACTIONS(323),
    [anon_sym_protected] = ACTIONS(323),
    [anon_sym_u16] = ACTIONS(323),
    [anon_sym_i32] = ACTIONS(323),
    [anon_sym_u64] = ACTIONS(323),
    [anon_sym_enum] = ACTIONS(323),
    [anon_sym_i16] = ACTIONS(323),
  },
  [358] = {
    [aux_sym_string_repeat1] = STATE(166),
    [sym__space] = ACTIONS(137),
    [aux_sym_string_token1] = ACTIONS(325),
    [sym__comment] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(995),
  },
  [359] = {
    [anon_sym_SQUOTE] = ACTIONS(997),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [360] = {
    [anon_sym_RBRACE] = ACTIONS(999),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [361] = {
    [anon_sym_DOT] = ACTIONS(1001),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [362] = {
    [sym_is_declare] = ACTIONS(968),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(968),
    [anon_sym_s8] = ACTIONS(968),
    [anon_sym_private] = ACTIONS(968),
    [anon_sym_u8] = ACTIONS(968),
    [anon_sym_f64] = ACTIONS(968),
    [anon_sym_u32] = ACTIONS(968),
    [anon_sym_i8] = ACTIONS(968),
    [anon_sym_method] = ACTIONS(968),
    [anon_sym_end] = ACTIONS(968),
    [anon_sym_s32] = ACTIONS(968),
    [anon_sym_publish] = ACTIONS(968),
    [sym_readonly] = ACTIONS(968),
    [anon_sym_i64] = ACTIONS(968),
    [anon_sym_f32] = ACTIONS(968),
    [sym_is_external] = ACTIONS(968),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(968),
    [anon_sym_s16] = ACTIONS(968),
    [anon_sym_protected] = ACTIONS(968),
    [anon_sym_u16] = ACTIONS(968),
    [anon_sym_i32] = ACTIONS(968),
    [anon_sym_u64] = ACTIONS(968),
    [anon_sym_enum] = ACTIONS(968),
    [anon_sym_i16] = ACTIONS(968),
  },
  [363] = {
    [anon_sym_DOT] = ACTIONS(1003),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [364] = {
    [anon_sym_section] = ACTIONS(974),
    [anon_sym_s8] = ACTIONS(974),
    [sym_double] = ACTIONS(976),
    [anon_sym_LBRACE] = ACTIONS(976),
    [anon_sym_end] = ACTIONS(974),
    [anon_sym_while] = ACTIONS(974),
    [sym_null] = ACTIONS(974),
    [anon_sym_publish] = ACTIONS(974),
    [sym_readonly] = ACTIONS(974),
    [anon_sym_i64] = ACTIONS(974),
    [anon_sym_f32] = ACTIONS(974),
    [anon_sym_LPAREN] = ACTIONS(974),
    [sym_long] = ACTIONS(976),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(974),
    [sym_hex] = ACTIONS(976),
    [anon_sym_switch] = ACTIONS(974),
    [sym_identifier] = ACTIONS(974),
    [anon_sym_private] = ACTIONS(974),
    [anon_sym_u8] = ACTIONS(974),
    [anon_sym_f64] = ACTIONS(974),
    [anon_sym_u32] = ACTIONS(974),
    [anon_sym_SQUOTE] = ACTIONS(976),
    [anon_sym_i8] = ACTIONS(974),
    [anon_sym_return] = ACTIONS(974),
    [anon_sym_goto] = ACTIONS(974),
    [sym_oct] = ACTIONS(974),
    [anon_sym_s32] = ACTIONS(974),
    [sym_float] = ACTIONS(976),
    [sym_binary] = ACTIONS(976),
    [anon_sym_DQUOTE] = ACTIONS(976),
    [anon_sym_if] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(974),
    [anon_sym_u16] = ACTIONS(974),
    [anon_sym_i32] = ACTIONS(974),
    [anon_sym_u64] = ACTIONS(974),
    [sym_integer] = ACTIONS(974),
    [anon_sym_i16] = ACTIONS(974),
  },
  [365] = {
    [sym_is_declare] = ACTIONS(789),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(789),
    [anon_sym_s8] = ACTIONS(789),
    [anon_sym_private] = ACTIONS(789),
    [anon_sym_u8] = ACTIONS(789),
    [anon_sym_f64] = ACTIONS(789),
    [anon_sym_u32] = ACTIONS(789),
    [anon_sym_i8] = ACTIONS(789),
    [anon_sym_method] = ACTIONS(789),
    [anon_sym_end] = ACTIONS(789),
    [anon_sym_s32] = ACTIONS(789),
    [anon_sym_publish] = ACTIONS(789),
    [sym_readonly] = ACTIONS(789),
    [anon_sym_i64] = ACTIONS(789),
    [anon_sym_f32] = ACTIONS(789),
    [sym_is_external] = ACTIONS(789),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(789),
    [anon_sym_s16] = ACTIONS(789),
    [anon_sym_protected] = ACTIONS(789),
    [anon_sym_u16] = ACTIONS(789),
    [anon_sym_i32] = ACTIONS(789),
    [anon_sym_u64] = ACTIONS(789),
    [anon_sym_enum] = ACTIONS(789),
    [anon_sym_i16] = ACTIONS(789),
  },
  [366] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(1005),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(1005),
  },
  [367] = {
    [anon_sym_end] = ACTIONS(1007),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [368] = {
    [sym_integer] = ACTIONS(1009),
    [anon_sym_section] = ACTIONS(1009),
    [anon_sym_s8] = ACTIONS(1009),
    [sym_double] = ACTIONS(1011),
    [anon_sym_method] = ACTIONS(1009),
    [anon_sym_end] = ACTIONS(1009),
    [anon_sym_while] = ACTIONS(1009),
    [anon_sym_LBRACE] = ACTIONS(1011),
    [anon_sym_publish] = ACTIONS(1009),
    [sym_readonly] = ACTIONS(1009),
    [anon_sym_i64] = ACTIONS(1009),
    [anon_sym_f32] = ACTIONS(1009),
    [anon_sym_LPAREN] = ACTIONS(1009),
    [sym_null] = ACTIONS(1009),
    [sym_long] = ACTIONS(1011),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(1009),
    [sym_hex] = ACTIONS(1011),
    [anon_sym_module] = ACTIONS(1009),
    [anon_sym_switch] = ACTIONS(1009),
    [sym_identifier] = ACTIONS(1009),
    [anon_sym_private] = ACTIONS(1009),
    [anon_sym_u8] = ACTIONS(1009),
    [anon_sym_f64] = ACTIONS(1009),
    [anon_sym_u32] = ACTIONS(1009),
    [anon_sym_SQUOTE] = ACTIONS(1011),
    [anon_sym_i8] = ACTIONS(1009),
    [anon_sym_return] = ACTIONS(1009),
    [anon_sym_goto] = ACTIONS(1009),
    [sym_oct] = ACTIONS(1009),
    [anon_sym_s32] = ACTIONS(1009),
    [sym_float] = ACTIONS(1011),
    [sym_binary] = ACTIONS(1011),
    [ts_builtin_sym_end] = ACTIONS(1011),
    [anon_sym_function] = ACTIONS(1009),
    [anon_sym_DQUOTE] = ACTIONS(1011),
    [anon_sym_if] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(1009),
    [anon_sym_u16] = ACTIONS(1009),
    [anon_sym_i32] = ACTIONS(1009),
    [anon_sym_u64] = ACTIONS(1009),
    [anon_sym_enum] = ACTIONS(1009),
    [anon_sym_i16] = ACTIONS(1009),
  },
  [369] = {
    [sym_integer] = ACTIONS(890),
    [anon_sym_section] = ACTIONS(890),
    [anon_sym_s8] = ACTIONS(890),
    [sym_double] = ACTIONS(892),
    [anon_sym_method] = ACTIONS(890),
    [anon_sym_end] = ACTIONS(890),
    [anon_sym_while] = ACTIONS(890),
    [anon_sym_LBRACE] = ACTIONS(892),
    [anon_sym_publish] = ACTIONS(890),
    [sym_readonly] = ACTIONS(890),
    [anon_sym_i64] = ACTIONS(890),
    [anon_sym_f32] = ACTIONS(890),
    [anon_sym_LPAREN] = ACTIONS(890),
    [sym_null] = ACTIONS(890),
    [sym_long] = ACTIONS(892),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(890),
    [sym_hex] = ACTIONS(892),
    [anon_sym_module] = ACTIONS(890),
    [anon_sym_switch] = ACTIONS(890),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_private] = ACTIONS(890),
    [anon_sym_u8] = ACTIONS(890),
    [anon_sym_f64] = ACTIONS(890),
    [anon_sym_u32] = ACTIONS(890),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [anon_sym_i8] = ACTIONS(890),
    [anon_sym_return] = ACTIONS(890),
    [anon_sym_goto] = ACTIONS(890),
    [sym_oct] = ACTIONS(890),
    [anon_sym_s32] = ACTIONS(890),
    [sym_float] = ACTIONS(892),
    [sym_binary] = ACTIONS(892),
    [ts_builtin_sym_end] = ACTIONS(892),
    [anon_sym_function] = ACTIONS(890),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_if] = ACTIONS(890),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(890),
    [anon_sym_u16] = ACTIONS(890),
    [anon_sym_i32] = ACTIONS(890),
    [anon_sym_u64] = ACTIONS(890),
    [anon_sym_enum] = ACTIONS(890),
    [anon_sym_i16] = ACTIONS(890),
  },
  [370] = {
    [sym_is_declare] = ACTIONS(538),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_s8] = ACTIONS(538),
    [anon_sym_private] = ACTIONS(538),
    [anon_sym_u8] = ACTIONS(538),
    [anon_sym_f64] = ACTIONS(538),
    [anon_sym_u32] = ACTIONS(538),
    [anon_sym_i8] = ACTIONS(538),
    [anon_sym_method] = ACTIONS(538),
    [anon_sym_end] = ACTIONS(538),
    [anon_sym_s32] = ACTIONS(538),
    [anon_sym_publish] = ACTIONS(538),
    [sym_readonly] = ACTIONS(538),
    [anon_sym_i64] = ACTIONS(538),
    [anon_sym_f32] = ACTIONS(538),
    [sym_is_external] = ACTIONS(538),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(538),
    [anon_sym_s16] = ACTIONS(538),
    [anon_sym_protected] = ACTIONS(538),
    [anon_sym_u16] = ACTIONS(538),
    [anon_sym_i32] = ACTIONS(538),
    [anon_sym_u64] = ACTIONS(538),
    [anon_sym_enum] = ACTIONS(538),
    [anon_sym_i16] = ACTIONS(538),
  },
  [371] = {
    [anon_sym_RPAREN] = ACTIONS(1013),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [372] = {
    [sym__literal] = STATE(379),
    [sym_group_expression] = STATE(379),
    [sym__number] = STATE(379),
    [sym_string] = STATE(379),
    [sym_character] = STATE(379),
    [sym__value] = STATE(379),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(1015),
    [sym_identifier] = ACTIONS(1017),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(1015),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(1017),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(1015),
    [sym_hex] = ACTIONS(1015),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(1017),
    [sym_integer] = ACTIONS(1017),
    [sym_binary] = ACTIONS(1015),
  },
  [373] = {
    [sym_is_declare] = ACTIONS(585),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(585),
    [anon_sym_s8] = ACTIONS(585),
    [anon_sym_private] = ACTIONS(585),
    [anon_sym_u8] = ACTIONS(585),
    [anon_sym_f64] = ACTIONS(585),
    [anon_sym_u32] = ACTIONS(585),
    [anon_sym_i8] = ACTIONS(585),
    [anon_sym_method] = ACTIONS(585),
    [anon_sym_end] = ACTIONS(585),
    [anon_sym_s32] = ACTIONS(585),
    [anon_sym_publish] = ACTIONS(585),
    [sym_readonly] = ACTIONS(585),
    [anon_sym_i64] = ACTIONS(585),
    [anon_sym_f32] = ACTIONS(585),
    [sym_is_external] = ACTIONS(585),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(585),
    [anon_sym_s16] = ACTIONS(585),
    [anon_sym_protected] = ACTIONS(585),
    [anon_sym_u16] = ACTIONS(585),
    [anon_sym_i32] = ACTIONS(585),
    [anon_sym_u64] = ACTIONS(585),
    [anon_sym_enum] = ACTIONS(585),
    [anon_sym_i16] = ACTIONS(585),
  },
  [374] = {
    [sym_is_declare] = ACTIONS(577),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(577),
    [anon_sym_s8] = ACTIONS(577),
    [anon_sym_private] = ACTIONS(577),
    [anon_sym_u8] = ACTIONS(577),
    [anon_sym_f64] = ACTIONS(577),
    [anon_sym_u32] = ACTIONS(577),
    [anon_sym_i8] = ACTIONS(577),
    [anon_sym_method] = ACTIONS(577),
    [anon_sym_end] = ACTIONS(577),
    [anon_sym_s32] = ACTIONS(577),
    [anon_sym_publish] = ACTIONS(577),
    [sym_readonly] = ACTIONS(577),
    [anon_sym_i64] = ACTIONS(577),
    [anon_sym_f32] = ACTIONS(577),
    [sym_is_external] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(577),
    [anon_sym_s16] = ACTIONS(577),
    [anon_sym_protected] = ACTIONS(577),
    [anon_sym_u16] = ACTIONS(577),
    [anon_sym_i32] = ACTIONS(577),
    [anon_sym_u64] = ACTIONS(577),
    [anon_sym_enum] = ACTIONS(577),
    [anon_sym_i16] = ACTIONS(577),
  },
  [375] = {
    [sym_is_declare] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_s8] = ACTIONS(526),
    [anon_sym_private] = ACTIONS(526),
    [anon_sym_u8] = ACTIONS(526),
    [anon_sym_f64] = ACTIONS(526),
    [anon_sym_u32] = ACTIONS(526),
    [anon_sym_i8] = ACTIONS(526),
    [anon_sym_method] = ACTIONS(526),
    [anon_sym_end] = ACTIONS(526),
    [anon_sym_s32] = ACTIONS(526),
    [anon_sym_publish] = ACTIONS(526),
    [sym_readonly] = ACTIONS(526),
    [anon_sym_i64] = ACTIONS(526),
    [anon_sym_f32] = ACTIONS(526),
    [sym_is_external] = ACTIONS(526),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(526),
    [anon_sym_s16] = ACTIONS(526),
    [anon_sym_protected] = ACTIONS(526),
    [anon_sym_u16] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(526),
    [anon_sym_u64] = ACTIONS(526),
    [anon_sym_enum] = ACTIONS(526),
    [anon_sym_i16] = ACTIONS(526),
  },
  [376] = {
    [sym_is_declare] = ACTIONS(974),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(974),
    [anon_sym_s8] = ACTIONS(974),
    [anon_sym_private] = ACTIONS(974),
    [anon_sym_u8] = ACTIONS(974),
    [anon_sym_f64] = ACTIONS(974),
    [anon_sym_u32] = ACTIONS(974),
    [anon_sym_i8] = ACTIONS(974),
    [anon_sym_method] = ACTIONS(974),
    [anon_sym_end] = ACTIONS(974),
    [anon_sym_s32] = ACTIONS(974),
    [anon_sym_publish] = ACTIONS(974),
    [sym_readonly] = ACTIONS(974),
    [anon_sym_i64] = ACTIONS(974),
    [anon_sym_f32] = ACTIONS(974),
    [sym_is_external] = ACTIONS(974),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(974),
    [anon_sym_s16] = ACTIONS(974),
    [anon_sym_protected] = ACTIONS(974),
    [anon_sym_u16] = ACTIONS(974),
    [anon_sym_i32] = ACTIONS(974),
    [anon_sym_u64] = ACTIONS(974),
    [anon_sym_enum] = ACTIONS(974),
    [anon_sym_i16] = ACTIONS(974),
  },
  [377] = {
    [sym_is_declare] = ACTIONS(1009),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1009),
    [anon_sym_s8] = ACTIONS(1009),
    [anon_sym_private] = ACTIONS(1009),
    [anon_sym_u8] = ACTIONS(1009),
    [anon_sym_f64] = ACTIONS(1009),
    [anon_sym_u32] = ACTIONS(1009),
    [anon_sym_i8] = ACTIONS(1009),
    [anon_sym_method] = ACTIONS(1009),
    [anon_sym_end] = ACTIONS(1009),
    [anon_sym_s32] = ACTIONS(1009),
    [anon_sym_publish] = ACTIONS(1009),
    [sym_readonly] = ACTIONS(1009),
    [anon_sym_i64] = ACTIONS(1009),
    [anon_sym_f32] = ACTIONS(1009),
    [sym_is_external] = ACTIONS(1009),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(1009),
    [anon_sym_s16] = ACTIONS(1009),
    [anon_sym_protected] = ACTIONS(1009),
    [anon_sym_u16] = ACTIONS(1009),
    [anon_sym_i32] = ACTIONS(1009),
    [anon_sym_u64] = ACTIONS(1009),
    [anon_sym_enum] = ACTIONS(1009),
    [anon_sym_i16] = ACTIONS(1009),
  },
  [378] = {
    [sym_is_declare] = ACTIONS(779),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_s8] = ACTIONS(779),
    [anon_sym_private] = ACTIONS(779),
    [anon_sym_u8] = ACTIONS(779),
    [anon_sym_f64] = ACTIONS(779),
    [anon_sym_u32] = ACTIONS(779),
    [anon_sym_i8] = ACTIONS(779),
    [anon_sym_method] = ACTIONS(779),
    [anon_sym_end] = ACTIONS(779),
    [anon_sym_s32] = ACTIONS(779),
    [anon_sym_publish] = ACTIONS(779),
    [sym_readonly] = ACTIONS(779),
    [anon_sym_i64] = ACTIONS(779),
    [anon_sym_f32] = ACTIONS(779),
    [sym_is_external] = ACTIONS(779),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(779),
    [anon_sym_s16] = ACTIONS(779),
    [anon_sym_protected] = ACTIONS(779),
    [anon_sym_u16] = ACTIONS(779),
    [anon_sym_i32] = ACTIONS(779),
    [anon_sym_u64] = ACTIONS(779),
    [anon_sym_enum] = ACTIONS(779),
    [anon_sym_i16] = ACTIONS(779),
  },
  [379] = {
    [anon_sym_RPAREN] = ACTIONS(1019),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [380] = {
    [sym_is_declare] = ACTIONS(890),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(890),
    [anon_sym_s8] = ACTIONS(890),
    [anon_sym_private] = ACTIONS(890),
    [anon_sym_u8] = ACTIONS(890),
    [anon_sym_f64] = ACTIONS(890),
    [anon_sym_u32] = ACTIONS(890),
    [anon_sym_i8] = ACTIONS(890),
    [anon_sym_method] = ACTIONS(890),
    [anon_sym_end] = ACTIONS(890),
    [anon_sym_s32] = ACTIONS(890),
    [anon_sym_publish] = ACTIONS(890),
    [sym_readonly] = ACTIONS(890),
    [anon_sym_i64] = ACTIONS(890),
    [anon_sym_f32] = ACTIONS(890),
    [sym_is_external] = ACTIONS(890),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(890),
    [anon_sym_s16] = ACTIONS(890),
    [anon_sym_protected] = ACTIONS(890),
    [anon_sym_u16] = ACTIONS(890),
    [anon_sym_i32] = ACTIONS(890),
    [anon_sym_u64] = ACTIONS(890),
    [anon_sym_enum] = ACTIONS(890),
    [anon_sym_i16] = ACTIONS(890),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = false}, SHIFT(9),
  [13] = {.count = 1, .reusable = false}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, SHIFT(37),
  [17] = {.count = 1, .reusable = false}, SHIFT(10),
  [19] = {.count = 1, .reusable = false}, SHIFT(11),
  [21] = {.count = 1, .reusable = false}, SHIFT(12),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = false}, SHIFT(15),
  [29] = {.count = 1, .reusable = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = false}, SHIFT(37),
  [33] = {.count = 1, .reusable = false}, SHIFT(17),
  [35] = {.count = 1, .reusable = false}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = false}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_sentences, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(42),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [59] = {.count = 1, .reusable = false}, SHIFT(45),
  [61] = {.count = 1, .reusable = false}, SHIFT(46),
  [63] = {.count = 1, .reusable = false}, SHIFT(44),
  [65] = {.count = 1, .reusable = false}, SHIFT(47),
  [67] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = false}, SHIFT(55),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_primitive_type, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_primitive_type, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_is_method, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(56),
  [79] = {.count = 1, .reusable = false}, SHIFT(57),
  [81] = {.count = 1, .reusable = false}, SHIFT(58),
  [83] = {.count = 1, .reusable = false}, SHIFT(59),
  [85] = {.count = 1, .reusable = false}, SHIFT(60),
  [87] = {.count = 1, .reusable = false}, SHIFT(61),
  [89] = {.count = 1, .reusable = false}, SHIFT(62),
  [91] = {.count = 1, .reusable = false}, SHIFT(63),
  [93] = {.count = 1, .reusable = true}, SHIFT(16),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(38),
  [99] = {.count = 1, .reusable = false}, SHIFT(75),
  [101] = {.count = 1, .reusable = true}, SHIFT(70),
  [103] = {.count = 1, .reusable = true}, SHIFT(75),
  [105] = {.count = 1, .reusable = false}, SHIFT(70),
  [107] = {.count = 1, .reusable = false}, SHIFT(71),
  [109] = {.count = 1, .reusable = false}, SHIFT(76),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(78),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [119] = {.count = 1, .reusable = true}, SHIFT(79),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(77),
  [125] = {.count = 1, .reusable = true}, SHIFT(83),
  [127] = {.count = 1, .reusable = false}, SHIFT(83),
  [129] = {.count = 1, .reusable = true}, SHIFT(85),
  [131] = {.count = 1, .reusable = true}, SHIFT(84),
  [133] = {.count = 1, .reusable = false}, SHIFT(88),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [137] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [139] = {.count = 1, .reusable = false}, SHIFT(90),
  [141] = {.count = 1, .reusable = true}, SHIFT(89),
  [143] = {.count = 1, .reusable = true}, SHIFT(91),
  [145] = {.count = 1, .reusable = true}, SHIFT(93),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [151] = {.count = 1, .reusable = false}, SHIFT(94),
  [153] = {.count = 1, .reusable = true}, SHIFT(96),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_sentence, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(97),
  [163] = {.count = 1, .reusable = false}, SHIFT(99),
  [165] = {.count = 1, .reusable = false}, SHIFT(100),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_start_module_definition, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_start_module_definition, 1),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym__collection_or_value, 1),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(101),
  [177] = {.count = 1, .reusable = false}, SHIFT(101),
  [179] = {.count = 1, .reusable = true}, SHIFT(103),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [183] = {.count = 1, .reusable = true}, SHIFT(104),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_sentences, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(108),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [198] = {.count = 1, .reusable = false}, SHIFT(109),
  [200] = {.count = 1, .reusable = true}, SHIFT(114),
  [202] = {.count = 1, .reusable = true}, SHIFT(56),
  [204] = {.count = 1, .reusable = true}, SHIFT(117),
  [206] = {.count = 1, .reusable = false}, SHIFT(118),
  [208] = {.count = 1, .reusable = true}, SHIFT(120),
  [210] = {.count = 1, .reusable = true}, SHIFT(121),
  [212] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(9),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [217] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(124),
  [220] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(125),
  [223] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(15),
  [226] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(126),
  [229] = {.count = 1, .reusable = false}, SHIFT(127),
  [231] = {.count = 1, .reusable = false}, SHIFT(128),
  [233] = {.count = 1, .reusable = false}, SHIFT(136),
  [235] = {.count = 1, .reusable = false}, SHIFT(125),
  [237] = {.count = 1, .reusable = false}, SHIFT(126),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_macro, 2),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_end_compound_macro, 2),
  [259] = {.count = 1, .reusable = true}, SHIFT(139),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [263] = {.count = 1, .reusable = true}, SHIFT(140),
  [265] = {.count = 1, .reusable = true}, SHIFT(142),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [269] = {.count = 1, .reusable = false}, SHIFT(144),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [275] = {.count = 1, .reusable = false}, SHIFT(147),
  [277] = {.count = 1, .reusable = true}, SHIFT(147),
  [279] = {.count = 1, .reusable = true}, SHIFT(148),
  [281] = {.count = 1, .reusable = true}, SHIFT(149),
  [283] = {.count = 1, .reusable = false}, SHIFT(149),
  [285] = {.count = 1, .reusable = false}, SHIFT(150),
  [287] = {.count = 1, .reusable = true}, SHIFT(150),
  [289] = {.count = 1, .reusable = true}, SHIFT(152),
  [291] = {.count = 1, .reusable = false}, SHIFT(153),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [297] = {.count = 1, .reusable = true}, SHIFT(154),
  [299] = {.count = 1, .reusable = true}, SHIFT(157),
  [301] = {.count = 1, .reusable = true}, SHIFT(160),
  [303] = {.count = 1, .reusable = true}, SHIFT(161),
  [305] = {.count = 1, .reusable = false}, SHIFT(163),
  [307] = {.count = 1, .reusable = true}, SHIFT(162),
  [309] = {.count = 1, .reusable = true}, SHIFT(164),
  [311] = {.count = 1, .reusable = false}, SHIFT(164),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = false}, SHIFT(166),
  [327] = {.count = 1, .reusable = true}, SHIFT(165),
  [329] = {.count = 1, .reusable = false}, SHIFT(169),
  [331] = {.count = 1, .reusable = true}, SHIFT(169),
  [333] = {.count = 1, .reusable = true}, SHIFT(170),
  [335] = {.count = 1, .reusable = false}, SHIFT(173),
  [337] = {.count = 1, .reusable = false}, SHIFT(176),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_sentence, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [347] = {.count = 1, .reusable = false}, SHIFT(181),
  [349] = {.count = 1, .reusable = true}, SHIFT(181),
  [351] = {.count = 1, .reusable = true}, SHIFT(179),
  [353] = {.count = 1, .reusable = true}, SHIFT(180),
  [355] = {.count = 1, .reusable = false}, SHIFT(177),
  [357] = {.count = 1, .reusable = true}, SHIFT(178),
  [359] = {.count = 1, .reusable = true}, SHIFT(183),
  [361] = {.count = 1, .reusable = true}, SHIFT(182),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [365] = {.count = 1, .reusable = true}, SHIFT(186),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_post_op, 1),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [375] = {.count = 1, .reusable = true}, SHIFT(188),
  [377] = {.count = 1, .reusable = true}, SHIFT(189),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [385] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(37),
  [388] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(8),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(9),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(37),
  [397] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(10),
  [400] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [403] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(12),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(13),
  [409] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [412] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(15),
  [415] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(16),
  [418] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(17),
  [421] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(19),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(18),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(20),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(21),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(22),
  [436] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2),
  [438] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(23),
  [441] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [444] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(25),
  [447] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(26),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym__start_module_definition, 3),
  [452] = {.count = 1, .reusable = false}, SHIFT(194),
  [454] = {.count = 1, .reusable = false}, SHIFT(195),
  [456] = {.count = 1, .reusable = false}, SHIFT(196),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(198),
  [462] = {.count = 1, .reusable = true}, SHIFT(201),
  [464] = {.count = 1, .reusable = false}, SHIFT(204),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 3),
  [468] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 2),
  [470] = {.count = 1, .reusable = true}, SHIFT(205),
  [472] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(44),
  [475] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(45),
  [478] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [481] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [487] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(15),
  [492] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(23),
  [495] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(47),
  [498] = {.count = 1, .reusable = false}, SHIFT(206),
  [500] = {.count = 1, .reusable = false}, SHIFT(209),
  [502] = {.count = 1, .reusable = true}, SHIFT(212),
  [504] = {.count = 1, .reusable = false}, SHIFT(124),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 2),
  [508] = {.count = 1, .reusable = false}, SHIFT(215),
  [510] = {.count = 1, .reusable = true}, SHIFT(218),
  [512] = {.count = 1, .reusable = true}, SHIFT(219),
  [514] = {.count = 1, .reusable = true}, SHIFT(62),
  [516] = {.count = 1, .reusable = true}, SHIFT(59),
  [518] = {.count = 1, .reusable = true}, SHIFT(224),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym__while_statement, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym__while_statement, 3),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [532] = {.count = 1, .reusable = true}, SHIFT(229),
  [534] = {.count = 1, .reusable = true}, SHIFT(230),
  [536] = {.count = 1, .reusable = false}, SHIFT(230),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [542] = {.count = 1, .reusable = true}, SHIFT(232),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(233),
  [550] = {.count = 1, .reusable = false}, SHIFT(233),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__start_module_definition, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [560] = {.count = 1, .reusable = true}, SHIFT(234),
  [562] = {.count = 1, .reusable = true}, SHIFT(236),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 3),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [568] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(77),
  [571] = {.count = 1, .reusable = true}, SHIFT(237),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym__switch_statement, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [579] = {.count = 1, .reusable = true}, SHIFT(238),
  [581] = {.count = 1, .reusable = true}, SHIFT(239),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [587] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(166),
  [590] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [592] = {.count = 1, .reusable = true}, SHIFT(240),
  [594] = {.count = 1, .reusable = true}, SHIFT(241),
  [596] = {.count = 1, .reusable = false}, SHIFT(241),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 3),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 3),
  [602] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [606] = {.count = 1, .reusable = true}, SHIFT(243),
  [608] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [610] = {.count = 1, .reusable = true}, SHIFT(245),
  [612] = {.count = 1, .reusable = true}, SHIFT(246),
  [614] = {.count = 1, .reusable = false}, SHIFT(248),
  [616] = {.count = 1, .reusable = true}, SHIFT(249),
  [618] = {.count = 1, .reusable = false}, SHIFT(254),
  [620] = {.count = 1, .reusable = true}, SHIFT(254),
  [622] = {.count = 1, .reusable = false}, SHIFT(256),
  [624] = {.count = 1, .reusable = true}, SHIFT(255),
  [626] = {.count = 1, .reusable = true}, SHIFT(257),
  [628] = {.count = 1, .reusable = false}, SHIFT(257),
  [630] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [634] = {.count = 1, .reusable = false}, SHIFT(261),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [642] = {.count = 1, .reusable = false}, SHIFT(262),
  [644] = {.count = 1, .reusable = true}, SHIFT(262),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [652] = {.count = 1, .reusable = true}, SHIFT(263),
  [654] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(103),
  [657] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [661] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [663] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(104),
  [668] = {.count = 1, .reusable = false}, SHIFT(264),
  [670] = {.count = 1, .reusable = true}, SHIFT(265),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [674] = {.count = 1, .reusable = true}, SHIFT(268),
  [676] = {.count = 1, .reusable = false}, SHIFT(270),
  [678] = {.count = 1, .reusable = true}, SHIFT(271),
  [680] = {.count = 1, .reusable = true}, SHIFT(272),
  [682] = {.count = 1, .reusable = true}, SHIFT(274),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 4),
  [686] = {.count = 1, .reusable = true}, SHIFT(277),
  [688] = {.count = 1, .reusable = true}, SHIFT(63),
  [690] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement_with_block, 2),
  [692] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [694] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(8),
  [699] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(9),
  [702] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(37),
  [705] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(13),
  [708] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2),
  [710] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(12),
  [713] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(37),
  [716] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(125),
  [719] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(15),
  [722] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(16),
  [725] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(19),
  [728] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(126),
  [731] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(20),
  [734] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(127),
  [737] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(22),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(24),
  [743] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(128),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 3),
  [748] = {.count = 1, .reusable = true}, SHIFT(61),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement_with_block, 2),
  [752] = {.count = 1, .reusable = true}, SHIFT(283),
  [754] = {.count = 1, .reusable = true}, SHIFT(285),
  [756] = {.count = 1, .reusable = false}, SHIFT(287),
  [758] = {.count = 1, .reusable = false}, SHIFT(292),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [762] = {.count = 1, .reusable = true}, SHIFT(295),
  [764] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(140),
  [769] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [771] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [773] = {.count = 1, .reusable = true}, SHIFT(296),
  [775] = {.count = 1, .reusable = true}, SHIFT(297),
  [777] = {.count = 1, .reusable = false}, SHIFT(297),
  [779] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [781] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [783] = {.count = 1, .reusable = true}, SHIFT(298),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 4),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 4),
  [793] = {.count = 1, .reusable = true}, SHIFT(301),
  [795] = {.count = 1, .reusable = true}, SHIFT(302),
  [797] = {.count = 1, .reusable = false}, SHIFT(302),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [801] = {.count = 1, .reusable = false}, SHIFT(303),
  [803] = {.count = 1, .reusable = true}, SHIFT(305),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [809] = {.count = 1, .reusable = true}, SHIFT(308),
  [811] = {.count = 1, .reusable = true}, SHIFT(310),
  [813] = {.count = 1, .reusable = true}, SHIFT(311),
  [815] = {.count = 1, .reusable = false}, SHIFT(311),
  [817] = {.count = 1, .reusable = true}, SHIFT(313),
  [819] = {.count = 1, .reusable = true}, SHIFT(314),
  [821] = {.count = 1, .reusable = true}, SHIFT(315),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [825] = {.count = 1, .reusable = true}, SHIFT(316),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [833] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [837] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [839] = {.count = 1, .reusable = true}, SHIFT(320),
  [841] = {.count = 1, .reusable = true}, SHIFT(324),
  [843] = {.count = 1, .reusable = true}, SHIFT(325),
  [845] = {.count = 1, .reusable = false}, SHIFT(322),
  [847] = {.count = 1, .reusable = true}, SHIFT(323),
  [849] = {.count = 1, .reusable = false}, SHIFT(326),
  [851] = {.count = 1, .reusable = false}, SHIFT(328),
  [853] = {.count = 1, .reusable = true}, SHIFT(329),
  [855] = {.count = 1, .reusable = true}, SHIFT(330),
  [857] = {.count = 1, .reusable = true}, SHIFT(332),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement_with_block, 3),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement_with_block, 3),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym__default_statement, 2),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym__default_statement, 2),
  [867] = {.count = 1, .reusable = true}, SHIFT(334),
  [869] = {.count = 1, .reusable = true}, SHIFT(335),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement_with_block, 3),
  [873] = {.count = 1, .reusable = true}, SHIFT(60),
  [875] = {.count = 1, .reusable = true}, SHIFT(336),
  [877] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_with_block_repeat1, 2),
  [879] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_with_block_repeat1, 2), SHIFT_REPEAT(219),
  [882] = {.count = 1, .reusable = true}, SHIFT(58),
  [884] = {.count = 1, .reusable = true}, SHIFT(339),
  [886] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [888] = {.count = 1, .reusable = true}, SHIFT(341),
  [890] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [894] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [896] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(234),
  [899] = {.count = 1, .reusable = true}, SHIFT(342),
  [901] = {.count = 1, .reusable = true}, SHIFT(343),
  [903] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [905] = {.count = 1, .reusable = false}, SHIFT(344),
  [907] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(246),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [912] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [914] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [916] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [918] = {.count = 1, .reusable = true}, SHIFT(345),
  [920] = {.count = 1, .reusable = true}, SHIFT(346),
  [922] = {.count = 1, .reusable = true}, SHIFT(347),
  [924] = {.count = 1, .reusable = false}, SHIFT(347),
  [926] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [928] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [930] = {.count = 1, .reusable = true}, SHIFT(353),
  [932] = {.count = 1, .reusable = false}, SHIFT(356),
  [934] = {.count = 1, .reusable = true}, SHIFT(356),
  [936] = {.count = 1, .reusable = false}, SHIFT(358),
  [938] = {.count = 1, .reusable = true}, SHIFT(357),
  [940] = {.count = 1, .reusable = true}, SHIFT(359),
  [942] = {.count = 1, .reusable = false}, SHIFT(359),
  [944] = {.count = 1, .reusable = true}, SHIFT(362),
  [946] = {.count = 1, .reusable = false}, SHIFT(363),
  [948] = {.count = 1, .reusable = true}, SHIFT(364),
  [950] = {.count = 1, .reusable = true}, SHIFT(365),
  [952] = {.count = 1, .reusable = false}, REDUCE(sym__case_statement, 3),
  [954] = {.count = 1, .reusable = true}, REDUCE(sym__case_statement, 3),
  [956] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement_with_block, 3),
  [960] = {.count = 1, .reusable = true}, SHIFT(366),
  [962] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement_with_block, 4),
  [964] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement_with_block, 3),
  [966] = {.count = 1, .reusable = true}, SHIFT(367),
  [968] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [970] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [972] = {.count = 1, .reusable = true}, SHIFT(368),
  [974] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [976] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [978] = {.count = 1, .reusable = true}, SHIFT(369),
  [980] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [982] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(316),
  [985] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [989] = {.count = 1, .reusable = true}, SHIFT(370),
  [991] = {.count = 1, .reusable = true}, SHIFT(371),
  [993] = {.count = 1, .reusable = false}, SHIFT(371),
  [995] = {.count = 1, .reusable = true}, SHIFT(373),
  [997] = {.count = 1, .reusable = true}, SHIFT(374),
  [999] = {.count = 1, .reusable = true}, SHIFT(375),
  [1001] = {.count = 1, .reusable = true}, SHIFT(376),
  [1003] = {.count = 1, .reusable = true}, SHIFT(377),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement_with_block, 4),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement_with_block, 4),
  [1009] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 7),
  [1013] = {.count = 1, .reusable = true}, SHIFT(378),
  [1015] = {.count = 1, .reusable = true}, SHIFT(379),
  [1017] = {.count = 1, .reusable = false}, SHIFT(379),
  [1019] = {.count = 1, .reusable = true}, SHIFT(380),
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
