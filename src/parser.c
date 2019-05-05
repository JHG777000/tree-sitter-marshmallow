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
#define STATE_COUNT 379
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
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == 'l')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
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
        ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == ')')
        ADVANCE(112);
      if (lookahead == '.')
        ADVANCE(111);
      if (lookahead == 'f')
        ADVANCE(113);
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
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
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
        ADVANCE(115);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_long);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(116);
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
        ADVANCE(117);
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
        ADVANCE(118);
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
        ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == 'c')
        ADVANCE(120);
      if (lookahead == 'f')
        ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'd')
        ADVANCE(122);
      if (lookahead == 'u')
        ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 't')
        ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == '2')
        ADVANCE(125);
      END_STATE();
    case 85:
      if (lookahead == '4')
        ADVANCE(126);
      END_STATE();
    case 86:
      if (lookahead == 'n')
        ADVANCE(127);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == '6')
        ADVANCE(129);
      END_STATE();
    case 89:
      if (lookahead == '2')
        ADVANCE(130);
      END_STATE();
    case 90:
      if (lookahead == '4')
        ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 93:
      if (lookahead == 't')
        ADVANCE(132);
      END_STATE();
    case 94:
      if (lookahead == 'd')
        ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'l')
        ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'i')
        ADVANCE(135);
      if (lookahead == 'o')
        ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'b')
        ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 99:
      if (lookahead == '6')
        ADVANCE(140);
      END_STATE();
    case 100:
      if (lookahead == '2')
        ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_s8);
      END_STATE();
    case 102:
      if (lookahead == 'c')
        ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == 'i')
        ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == '6')
        ADVANCE(144);
      END_STATE();
    case 105:
      if (lookahead == '2')
        ADVANCE(145);
      END_STATE();
    case 106:
      if (lookahead == '4')
        ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 108:
      if (lookahead == 'i')
        ADVANCE(147);
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
        ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == '+')
        ADVANCE(149);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead != 0)
        ADVANCE(53);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f'))
        ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 120:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'a')
        ADVANCE(152);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 123:
      if (lookahead == 'm')
        ADVANCE(153);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 127:
      if (lookahead == 'c')
        ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 132:
      if (lookahead == 'h')
        ADVANCE(157);
      END_STATE();
    case 133:
      if (lookahead == 'u')
        ADVANCE(158);
      END_STATE();
    case 134:
      if (lookahead == 'l')
        ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'v')
        ADVANCE(160);
      END_STATE();
    case 136:
      if (lookahead == 't')
        ADVANCE(161);
      END_STATE();
    case 137:
      if (lookahead == 'l')
        ADVANCE(162);
      END_STATE();
    case 138:
      if (lookahead == 'd')
        ADVANCE(163);
      END_STATE();
    case 139:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_s16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_s32);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(165);
      END_STATE();
    case 143:
      if (lookahead == 't')
        ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 147:
      if (lookahead == 'l')
        ADVANCE(167);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 151:
      if (lookahead == 'a')
        ADVANCE(168);
      END_STATE();
    case 152:
      if (lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 154:
      if (lookahead == 'r')
        ADVANCE(170);
      END_STATE();
    case 155:
      if (lookahead == 't')
        ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 157:
      if (lookahead == 'o')
        ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'l')
        ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 160:
      if (lookahead == 'a')
        ADVANCE(174);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'i')
        ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'o')
        ADVANCE(177);
      END_STATE();
    case 164:
      if (lookahead == 'r')
        ADVANCE(178);
      END_STATE();
    case 165:
      if (lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 166:
      if (lookahead == 'c')
        ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 168:
      if (lookahead == 'r')
        ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 170:
      if (lookahead == 'n')
        ADVANCE(184);
      END_STATE();
    case 171:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 172:
      if (lookahead == 'd')
        ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'e')
        ADVANCE(187);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(188);
      END_STATE();
    case 175:
      if (lookahead == 'c')
        ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 's')
        ADVANCE(190);
      END_STATE();
    case 177:
      if (lookahead == 'n')
        ADVANCE(191);
      END_STATE();
    case 178:
      if (lookahead == 'n')
        ADVANCE(192);
      END_STATE();
    case 179:
      if (lookahead == 'o')
        ADVANCE(193);
      END_STATE();
    case 180:
      if (lookahead == 'h')
        ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(195);
      END_STATE();
    case 183:
      if (lookahead == 't')
        ADVANCE(196);
      END_STATE();
    case 184:
      if (lookahead == 'a')
        ADVANCE(197);
      END_STATE();
    case 185:
      if (lookahead == 'o')
        ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 188:
      if (lookahead == 'e')
        ADVANCE(199);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(200);
      END_STATE();
    case 190:
      if (lookahead == 'h')
        ADVANCE(201);
      END_STATE();
    case 191:
      if (lookahead == 'l')
        ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 193:
      if (lookahead == 'n')
        ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_is_declare);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 197:
      if (lookahead == 'l')
        ADVANCE(204);
      END_STATE();
    case 198:
      if (lookahead == 'n')
        ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_publish);
      END_STATE();
    case 202:
      if (lookahead == 'y')
        ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_is_external);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 206:
      if (lookahead == 'd')
        ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_readonly);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 209:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == 'm')
        ADVANCE(213);
      if (lookahead == 8203)
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 210:
      if (lookahead == '-')
        ADVANCE(53);
      END_STATE();
    case 211:
      if (lookahead == '-')
        ADVANCE(214);
      END_STATE();
    case 212:
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 213:
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 214:
      if (lookahead == '-')
        ADVANCE(57);
      END_STATE();
    case 215:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
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
        ADVANCE(229);
      END_STATE();
    case 217:
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
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(232);
      if (lookahead == '6')
        ADVANCE(233);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 221:
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
        ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(241);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(244);
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
        ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(247);
      if (lookahead == '3')
        ADVANCE(248);
      if (lookahead == '8')
        ADVANCE(249);
      if (lookahead == 'e')
        ADVANCE(250);
      if (lookahead == 'w')
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
        ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(252);
      if (lookahead == '3')
        ADVANCE(253);
      if (lookahead == '6')
        ADVANCE(254);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 229:
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
        ADVANCE(229);
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
      if (lookahead == 'd')
        ADVANCE(257);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 232:
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
        ADVANCE(229);
      END_STATE();
    case 233:
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
        ADVANCE(229);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(229);
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
        ADVANCE(229);
      END_STATE();
    case 240:
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
        ADVANCE(229);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(269);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b')
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
        ADVANCE(229);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(272);
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
        ADVANCE(229);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 249:
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
        ADVANCE(229);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2')
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
        ADVANCE(229);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4')
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
        ADVANCE(229);
      END_STATE();
    case 255:
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
        ADVANCE(229);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 257:
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
        ADVANCE(229);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
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
        ADVANCE(229);
      END_STATE();
    case 259:
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
        ADVANCE(229);
      END_STATE();
    case 260:
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
        ADVANCE(229);
      END_STATE();
    case 261:
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
        ADVANCE(229);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 263:
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
        ADVANCE(229);
      END_STATE();
    case 264:
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
        ADVANCE(229);
      END_STATE();
    case 265:
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
        ADVANCE(229);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
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
        ADVANCE(229);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 271:
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
        ADVANCE(229);
      END_STATE();
    case 272:
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
        ADVANCE(229);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
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
        ADVANCE(229);
      END_STATE();
    case 274:
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
        ADVANCE(229);
      END_STATE();
    case 275:
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
        ADVANCE(229);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 278:
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
        ADVANCE(229);
      END_STATE();
    case 279:
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
        ADVANCE(229);
      END_STATE();
    case 280:
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
        ADVANCE(229);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 282:
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
        ADVANCE(229);
      END_STATE();
    case 283:
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
        ADVANCE(229);
      END_STATE();
    case 284:
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
        ADVANCE(229);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 286:
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
        ADVANCE(229);
      END_STATE();
    case 287:
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
        ADVANCE(229);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(229);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
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
        ADVANCE(229);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 299:
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
        ADVANCE(229);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
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
        ADVANCE(229);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
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
        ADVANCE(229);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 306:
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
        ADVANCE(229);
      END_STATE();
    case 307:
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
        ADVANCE(229);
      END_STATE();
    case 308:
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
        ADVANCE(229);
      END_STATE();
    case 309:
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
        ADVANCE(229);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h')
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
        ADVANCE(229);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 314:
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
        ADVANCE(229);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 316:
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
        ADVANCE(229);
      END_STATE();
    case 317:
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
        ADVANCE(229);
      END_STATE();
    case 318:
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
        ADVANCE(229);
      END_STATE();
    case 319:
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
        ADVANCE(229);
      END_STATE();
    case 320:
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
        ADVANCE(229);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
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
        ADVANCE(229);
      END_STATE();
    case 322:
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
        ADVANCE(229);
      END_STATE();
    case 323:
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
        ADVANCE(229);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 325:
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
        ADVANCE(229);
      END_STATE();
    case 326:
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
        ADVANCE(229);
      END_STATE();
    case 327:
      if (lookahead == '(')
        ADVANCE(328);
      if (lookahead == '*')
        ADVANCE(329);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
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
        ADVANCE(229);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 330:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 331:
      if (lookahead == '=')
        ADVANCE(64);
      END_STATE();
    case 332:
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
        ADVANCE(229);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 'x')
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
        ADVANCE(229);
      END_STATE();
    case 334:
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
        ADVANCE(229);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 336:
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
        ADVANCE(229);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1')
        ADVANCE(247);
      if (lookahead == '3')
        ADVANCE(248);
      if (lookahead == '8')
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
        ADVANCE(229);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
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
        ADVANCE(229);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
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
        ADVANCE(229);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 341:
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
        ADVANCE(229);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(229);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
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
        ADVANCE(229);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
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
        ADVANCE(229);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
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
        ADVANCE(229);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
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
        ADVANCE(229);
      END_STATE();
    case 349:
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
        ADVANCE(229);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
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
        ADVANCE(229);
      END_STATE();
    case 351:
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
        ADVANCE(229);
      END_STATE();
    case 352:
      if (lookahead == '*')
        ADVANCE(329);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
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
        ADVANCE(229);
      END_STATE();
    case 353:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == 'c')
        ADVANCE(354);
      if (lookahead == 'd')
        ADVANCE(355);
      if (lookahead == 'f')
        ADVANCE(356);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead == 'm')
        ADVANCE(358);
      if (lookahead == 'w')
        ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 354:
      if (lookahead == 'a')
        ADVANCE(80);
      END_STATE();
    case 355:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 356:
      if (lookahead == 'u')
        ADVANCE(86);
      END_STATE();
    case 357:
      if (lookahead == 'f')
        ADVANCE(92);
      END_STATE();
    case 358:
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == 'o')
        ADVANCE(94);
      END_STATE();
    case 359:
      if (lookahead == 'h')
        ADVANCE(108);
      END_STATE();
    case 360:
      if (lookahead == 'f')
        ADVANCE(121);
      END_STATE();
    case 361:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 362:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 363:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3')
        ADVANCE(232);
      if (lookahead == '6')
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
        ADVANCE(229);
      END_STATE();
    case 365:
      if (lookahead == '!')
        ADVANCE(366);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '&')
        ADVANCE(367);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(329);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(368);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '~')
        ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '%' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 367:
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
        ADVANCE(229);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(214);
      END_STATE();
    case 369:
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
        ADVANCE(229);
      END_STATE();
    case 370:
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(372);
      if (lookahead == '(')
        ADVANCE(328);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(373);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '[')
        ADVANCE(20);
      if (lookahead == '^')
        ADVANCE(378);
      if (lookahead == '|')
        ADVANCE(379);
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
        ADVANCE(229);
      END_STATE();
    case 371:
      if (lookahead == '=')
        ADVANCE(46);
      END_STATE();
    case 372:
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
        ADVANCE(229);
      END_STATE();
    case 373:
      if (lookahead == '+')
        ADVANCE(52);
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 374:
      if (lookahead == '-')
        ADVANCE(55);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
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
        ADVANCE(229);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<')
        ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '>')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 378:
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
        ADVANCE(229);
      END_STATE();
    case 379:
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
        ADVANCE(229);
      END_STATE();
    case 380:
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
        ADVANCE(229);
      END_STATE();
    case 381:
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
        ADVANCE(229);
      END_STATE();
    case 382:
      if (lookahead == '+')
        ADVANCE(383);
      if (lookahead == '-')
        ADVANCE(384);
      if (lookahead == '/')
        ADVANCE(385);
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
    case 383:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(53);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '-')
        ADVANCE(214);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == '/')
        ADVANCE(57);
      END_STATE();
    case 386:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(387);
      if (lookahead == '-')
        ADVANCE(388);
      if (lookahead == '/')
        ADVANCE(389);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(390);
      if (lookahead != 0)
        ADVANCE(391);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\n')
        ADVANCE(391);
      if (lookahead == '"')
        ADVANCE(57);
      if (lookahead != 0)
        ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"')
        ADVANCE(53);
      if (lookahead == '+')
        ADVANCE(396);
      if (lookahead == '-')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(392);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '"')
        ADVANCE(391);
      END_STATE();
    case 397:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(372);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(373);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '^')
        ADVANCE(378);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          (lookahead < ')' || ',' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 398:
      if (lookahead == '=')
        ADVANCE(51);
      END_STATE();
    case 399:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 400:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(372);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(373);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '^')
        ADVANCE(378);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(379);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != ')' &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead))
        ADVANCE(229);
      END_STATE();
    case 401:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 402:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 403:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '%' &&
          (lookahead < '\'' || '.' < lookahead) &&
          lookahead != ':' &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
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
        ADVANCE(229);
      END_STATE();
    case 406:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 407:
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(408);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(409);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(410);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(411);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(412);
      if (lookahead == '>')
        ADVANCE(413);
      if (lookahead == '^')
        ADVANCE(414);
      if (lookahead == '|')
        ADVANCE(415);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 408:
      if (lookahead == '=')
        ADVANCE(48);
      END_STATE();
    case 409:
      if (lookahead == '-')
        ADVANCE(53);
      if (lookahead == '=')
        ADVANCE(54);
      END_STATE();
    case 410:
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '=')
        ADVANCE(56);
      END_STATE();
    case 411:
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 412:
      if (lookahead == '<')
        ADVANCE(416);
      END_STATE();
    case 413:
      if (lookahead == '>')
        ADVANCE(417);
      END_STATE();
    case 414:
      if (lookahead == '=')
        ADVANCE(79);
      END_STATE();
    case 415:
      if (lookahead == '=')
        ADVANCE(109);
      END_STATE();
    case 416:
      if (lookahead == '=')
        ADVANCE(117);
      END_STATE();
    case 417:
      if (lookahead == '=')
        ADVANCE(118);
      END_STATE();
    case 418:
      if (lookahead == '!')
        ADVANCE(419);
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
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(420);
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
    case 419:
      if (lookahead == '=')
        ADVANCE(45);
      END_STATE();
    case 420:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 421:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 422:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(372);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(373);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '^')
        ADVANCE(378);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          (lookahead < ')' || '.' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead) &&
          lookahead != '}')
        ADVANCE(229);
      END_STATE();
    case 423:
      if (lookahead == '!')
        ADVANCE(419);
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
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(420);
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
    case 424:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 425:
      if (lookahead == '(')
        ADVANCE(328);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == 'r')
        ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 426:
      if (lookahead == 'e')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 't')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'u')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'r')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'n')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 's')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 433:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 434:
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
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
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
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '%' &&
          (lookahead < '*' || ':' < lookahead) &&
          lookahead != '=' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '_')
        ADVANCE(229);
      END_STATE();
    case 435:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(436);
      END_STATE();
    case 437:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 438:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
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
        ADVANCE(229);
      END_STATE();
    case 439:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '%')
        ADVANCE(371);
      if (lookahead == '&')
        ADVANCE(372);
      if (lookahead == '\'')
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == '+')
        ADVANCE(373);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(374);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(375);
      if (lookahead == '0')
        ADVANCE(217);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(377);
      if (lookahead == '^')
        ADVANCE(378);
      if (lookahead == 'e')
        ADVANCE(218);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'i')
        ADVANCE(221);
      if (lookahead == 'm')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(225);
      if (lookahead == 's')
        ADVANCE(226);
      if (lookahead == 'u')
        ADVANCE(227);
      if (lookahead == 'w')
        ADVANCE(228);
      if (lookahead == '{')
        ADVANCE(37);
      if (lookahead == '|')
        ADVANCE(379);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '!' &&
          lookahead != '=' &&
          (lookahead < '[' || '_' < lookahead))
        ADVANCE(229);
      END_STATE();
    case 440:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == ':')
        ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 441:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == 'c')
        ADVANCE(354);
      if (lookahead == 'd')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 442:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'f')
        ADVANCE(364);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 443:
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(216);
      if (lookahead == 'd')
        ADVANCE(332);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'f')
        ADVANCE(219);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(335);
      if (lookahead == 'p')
        ADVANCE(224);
      if (lookahead == 'r')
        ADVANCE(336);
      if (lookahead == 's')
        ADVANCE(337);
      if (lookahead == 'u')
        ADVANCE(227);
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
        ADVANCE(229);
      END_STATE();
    case 444:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(212);
      if (lookahead == 'e')
        ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(42);
      END_STATE();
    case 445:
      if (lookahead == 'n')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'd')
        ADVANCE(122);
      END_STATE();
    case 447:
      if (lookahead == '*')
        ADVANCE(329);
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == ',')
        ADVANCE(11);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(13);
      if (lookahead == '/')
        ADVANCE(212);
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
  [1] = {.lex_state = 209},
  [2] = {.lex_state = 215},
  [3] = {.lex_state = 327},
  [4] = {.lex_state = 209},
  [5] = {.lex_state = 330},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 327},
  [9] = {.lex_state = 352},
  [10] = {.lex_state = 327},
  [11] = {.lex_state = 353},
  [12] = {.lex_state = 327},
  [13] = {.lex_state = 361},
  [14] = {.lex_state = 362},
  [15] = {.lex_state = 363},
  [16] = {.lex_state = 365},
  [17] = {.lex_state = 327},
  [18] = {.lex_state = 370},
  [19] = {.lex_state = 327},
  [20] = {.lex_state = 382},
  [21] = {.lex_state = 361},
  [22] = {.lex_state = 327},
  [23] = {.lex_state = 327},
  [24] = {.lex_state = 386},
  [25] = {.lex_state = 327},
  [26] = {.lex_state = 327},
  [27] = {.lex_state = 397},
  [28] = {.lex_state = 399},
  [29] = {.lex_state = 362},
  [30] = {.lex_state = 327},
  [31] = {.lex_state = 215},
  [32] = {.lex_state = 327},
  [33] = {.lex_state = 370},
  [34] = {.lex_state = 327},
  [35] = {.lex_state = 327},
  [36] = {.lex_state = 215},
  [37] = {.lex_state = 400},
  [38] = {.lex_state = 327},
  [39] = {.lex_state = 215},
  [40] = {.lex_state = 327},
  [41] = {.lex_state = 327},
  [42] = {.lex_state = 327},
  [43] = {.lex_state = 209},
  [44] = {.lex_state = 401},
  [45] = {.lex_state = 327},
  [46] = {.lex_state = 209},
  [47] = {.lex_state = 327},
  [48] = {.lex_state = 327},
  [49] = {.lex_state = 362},
  [50] = {.lex_state = 327},
  [51] = {.lex_state = 327},
  [52] = {.lex_state = 330},
  [53] = {.lex_state = 402},
  [54] = {.lex_state = 403},
  [55] = {.lex_state = 327},
  [56] = {.lex_state = 327},
  [57] = {.lex_state = 327},
  [58] = {.lex_state = 327},
  [59] = {.lex_state = 327},
  [60] = {.lex_state = 327},
  [61] = {.lex_state = 327},
  [62] = {.lex_state = 327},
  [63] = {.lex_state = 327},
  [64] = {.lex_state = 406},
  [65] = {.lex_state = 406},
  [66] = {.lex_state = 407},
  [67] = {.lex_state = 327},
  [68] = {.lex_state = 361},
  [69] = {.lex_state = 365},
  [70] = {.lex_state = 363},
  [71] = {.lex_state = 361},
  [72] = {.lex_state = 370},
  [73] = {.lex_state = 418},
  [74] = {.lex_state = 327},
  [75] = {.lex_state = 327},
  [76] = {.lex_state = 215},
  [77] = {.lex_state = 421},
  [78] = {.lex_state = 327},
  [79] = {.lex_state = 327},
  [80] = {.lex_state = 327},
  [81] = {.lex_state = 215},
  [82] = {.lex_state = 386},
  [83] = {.lex_state = 382},
  [84] = {.lex_state = 399},
  [85] = {.lex_state = 422},
  [86] = {.lex_state = 327},
  [87] = {.lex_state = 423},
  [88] = {.lex_state = 386},
  [89] = {.lex_state = 365},
  [90] = {.lex_state = 424},
  [91] = {.lex_state = 327},
  [92] = {.lex_state = 363},
  [93] = {.lex_state = 327},
  [94] = {.lex_state = 215},
  [95] = {.lex_state = 361},
  [96] = {.lex_state = 361},
  [97] = {.lex_state = 425},
  [98] = {.lex_state = 433},
  [99] = {.lex_state = 434},
  [100] = {.lex_state = 434},
  [101] = {.lex_state = 435},
  [102] = {.lex_state = 352},
  [103] = {.lex_state = 327},
  [104] = {.lex_state = 327},
  [105] = {.lex_state = 215},
  [106] = {.lex_state = 330},
  [107] = {.lex_state = 363},
  [108] = {.lex_state = 327},
  [109] = {.lex_state = 327},
  [110] = {.lex_state = 362},
  [111] = {.lex_state = 330},
  [112] = {.lex_state = 402},
  [113] = {.lex_state = 327},
  [114] = {.lex_state = 327},
  [115] = {.lex_state = 327},
  [116] = {.lex_state = 425},
  [117] = {.lex_state = 327},
  [118] = {.lex_state = 209},
  [119] = {.lex_state = 330},
  [120] = {.lex_state = 327},
  [121] = {.lex_state = 330},
  [122] = {.lex_state = 327},
  [123] = {.lex_state = 437},
  [124] = {.lex_state = 370},
  [125] = {.lex_state = 361},
  [126] = {.lex_state = 327},
  [127] = {.lex_state = 437},
  [128] = {.lex_state = 403},
  [129] = {.lex_state = 327},
  [130] = {.lex_state = 403},
  [131] = {.lex_state = 330},
  [132] = {.lex_state = 403},
  [133] = {.lex_state = 353},
  [134] = {.lex_state = 353},
  [135] = {.lex_state = 327},
  [136] = {.lex_state = 403},
  [137] = {.lex_state = 438},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 406},
  [140] = {.lex_state = 439},
  [141] = {.lex_state = 361},
  [142] = {.lex_state = 433},
  [143] = {.lex_state = 363},
  [144] = {.lex_state = 361},
  [145] = {.lex_state = 418},
  [146] = {.lex_state = 439},
  [147] = {.lex_state = 363},
  [148] = {.lex_state = 361},
  [149] = {.lex_state = 361},
  [150] = {.lex_state = 215},
  [151] = {.lex_state = 327},
  [152] = {.lex_state = 425},
  [153] = {.lex_state = 440},
  [154] = {.lex_state = 363},
  [155] = {.lex_state = 215},
  [156] = {.lex_state = 327},
  [157] = {.lex_state = 327},
  [158] = {.lex_state = 441},
  [159] = {.lex_state = 423},
  [160] = {.lex_state = 422},
  [161] = {.lex_state = 386},
  [162] = {.lex_state = 215},
  [163] = {.lex_state = 423},
  [164] = {.lex_state = 386},
  [165] = {.lex_state = 363},
  [166] = {.lex_state = 361},
  [167] = {.lex_state = 418},
  [168] = {.lex_state = 438},
  [169] = {.lex_state = 215},
  [170] = {.lex_state = 327},
  [171] = {.lex_state = 440},
  [172] = {.lex_state = 440},
  [173] = {.lex_state = 327},
  [174] = {.lex_state = 425},
  [175] = {.lex_state = 365},
  [176] = {.lex_state = 386},
  [177] = {.lex_state = 382},
  [178] = {.lex_state = 361},
  [179] = {.lex_state = 434},
  [180] = {.lex_state = 442},
  [181] = {.lex_state = 215},
  [182] = {.lex_state = 425},
  [183] = {.lex_state = 327},
  [184] = {.lex_state = 361},
  [185] = {.lex_state = 443},
  [186] = {.lex_state = 352},
  [187] = {.lex_state = 435},
  [188] = {.lex_state = 327},
  [189] = {.lex_state = 327},
  [190] = {.lex_state = 327},
  [191] = {.lex_state = 327},
  [192] = {.lex_state = 425},
  [193] = {.lex_state = 330},
  [194] = {.lex_state = 363},
  [195] = {.lex_state = 327},
  [196] = {.lex_state = 402},
  [197] = {.lex_state = 327},
  [198] = {.lex_state = 440},
  [199] = {.lex_state = 403},
  [200] = {.lex_state = 425},
  [201] = {.lex_state = 327},
  [202] = {.lex_state = 425},
  [203] = {.lex_state = 209},
  [204] = {.lex_state = 327},
  [205] = {.lex_state = 330},
  [206] = {.lex_state = 424},
  [207] = {.lex_state = 215},
  [208] = {.lex_state = 403},
  [209] = {.lex_state = 327},
  [210] = {.lex_state = 403},
  [211] = {.lex_state = 403},
  [212] = {.lex_state = 330},
  [213] = {.lex_state = 215},
  [214] = {.lex_state = 403},
  [215] = {.lex_state = 327},
  [216] = {.lex_state = 327},
  [217] = {.lex_state = 327},
  [218] = {.lex_state = 444},
  [219] = {.lex_state = 403},
  [220] = {.lex_state = 353},
  [221] = {.lex_state = 403},
  [222] = {.lex_state = 330},
  [223] = {.lex_state = 327},
  [224] = {.lex_state = 406},
  [225] = {.lex_state = 406},
  [226] = {.lex_state = 443},
  [227] = {.lex_state = 418},
  [228] = {.lex_state = 363},
  [229] = {.lex_state = 361},
  [230] = {.lex_state = 439},
  [231] = {.lex_state = 363},
  [232] = {.lex_state = 421},
  [233] = {.lex_state = 440},
  [234] = {.lex_state = 425},
  [235] = {.lex_state = 215},
  [236] = {.lex_state = 422},
  [237] = {.lex_state = 422},
  [238] = {.lex_state = 424},
  [239] = {.lex_state = 363},
  [240] = {.lex_state = 361},
  [241] = {.lex_state = 215},
  [242] = {.lex_state = 440},
  [243] = {.lex_state = 327},
  [244] = {.lex_state = 327},
  [245] = {.lex_state = 440},
  [246] = {.lex_state = 433},
  [247] = {.lex_state = 215},
  [248] = {.lex_state = 425},
  [249] = {.lex_state = 327},
  [250] = {.lex_state = 363},
  [251] = {.lex_state = 361},
  [252] = {.lex_state = 418},
  [253] = {.lex_state = 215},
  [254] = {.lex_state = 386},
  [255] = {.lex_state = 215},
  [256] = {.lex_state = 406},
  [257] = {.lex_state = 447},
  [258] = {.lex_state = 327},
  [259] = {.lex_state = 447},
  [260] = {.lex_state = 443},
  [261] = {.lex_state = 352},
  [262] = {.lex_state = 330},
  [263] = {.lex_state = 330},
  [264] = {.lex_state = 425},
  [265] = {.lex_state = 327},
  [266] = {.lex_state = 361},
  [267] = {.lex_state = 327},
  [268] = {.lex_state = 425},
  [269] = {.lex_state = 402},
  [270] = {.lex_state = 327},
  [271] = {.lex_state = 440},
  [272] = {.lex_state = 403},
  [273] = {.lex_state = 327},
  [274] = {.lex_state = 425},
  [275] = {.lex_state = 330},
  [276] = {.lex_state = 327},
  [277] = {.lex_state = 327},
  [278] = {.lex_state = 403},
  [279] = {.lex_state = 327},
  [280] = {.lex_state = 327},
  [281] = {.lex_state = 403},
  [282] = {.lex_state = 327},
  [283] = {.lex_state = 215},
  [284] = {.lex_state = 327},
  [285] = {.lex_state = 353},
  [286] = {.lex_state = 327},
  [287] = {.lex_state = 403},
  [288] = {.lex_state = 444},
  [289] = {.lex_state = 353},
  [290] = {.lex_state = 353},
  [291] = {.lex_state = 327},
  [292] = {.lex_state = 403},
  [293] = {.lex_state = 330},
  [294] = {.lex_state = 418},
  [295] = {.lex_state = 363},
  [296] = {.lex_state = 439},
  [297] = {.lex_state = 440},
  [298] = {.lex_state = 440},
  [299] = {.lex_state = 424},
  [300] = {.lex_state = 363},
  [301] = {.lex_state = 327},
  [302] = {.lex_state = 440},
  [303] = {.lex_state = 327},
  [304] = {.lex_state = 440},
  [305] = {.lex_state = 443},
  [306] = {.lex_state = 215},
  [307] = {.lex_state = 327},
  [308] = {.lex_state = 215},
  [309] = {.lex_state = 363},
  [310] = {.lex_state = 361},
  [311] = {.lex_state = 215},
  [312] = {.lex_state = 215},
  [313] = {.lex_state = 215},
  [314] = {.lex_state = 363},
  [315] = {.lex_state = 447},
  [316] = {.lex_state = 447},
  [317] = {.lex_state = 447},
  [318] = {.lex_state = 330},
  [319] = {.lex_state = 327},
  [320] = {.lex_state = 365},
  [321] = {.lex_state = 386},
  [322] = {.lex_state = 382},
  [323] = {.lex_state = 361},
  [324] = {.lex_state = 330},
  [325] = {.lex_state = 425},
  [326] = {.lex_state = 327},
  [327] = {.lex_state = 327},
  [328] = {.lex_state = 403},
  [329] = {.lex_state = 327},
  [330] = {.lex_state = 330},
  [331] = {.lex_state = 327},
  [332] = {.lex_state = 403},
  [333] = {.lex_state = 327},
  [334] = {.lex_state = 353},
  [335] = {.lex_state = 327},
  [336] = {.lex_state = 327},
  [337] = {.lex_state = 444},
  [338] = {.lex_state = 327},
  [339] = {.lex_state = 418},
  [340] = {.lex_state = 424},
  [341] = {.lex_state = 215},
  [342] = {.lex_state = 327},
  [343] = {.lex_state = 215},
  [344] = {.lex_state = 215},
  [345] = {.lex_state = 363},
  [346] = {.lex_state = 447},
  [347] = {.lex_state = 447},
  [348] = {.lex_state = 447},
  [349] = {.lex_state = 447},
  [350] = {.lex_state = 447},
  [351] = {.lex_state = 330},
  [352] = {.lex_state = 363},
  [353] = {.lex_state = 361},
  [354] = {.lex_state = 418},
  [355] = {.lex_state = 330},
  [356] = {.lex_state = 386},
  [357] = {.lex_state = 215},
  [358] = {.lex_state = 406},
  [359] = {.lex_state = 327},
  [360] = {.lex_state = 330},
  [361] = {.lex_state = 327},
  [362] = {.lex_state = 403},
  [363] = {.lex_state = 330},
  [364] = {.lex_state = 353},
  [365] = {.lex_state = 444},
  [366] = {.lex_state = 215},
  [367] = {.lex_state = 215},
  [368] = {.lex_state = 330},
  [369] = {.lex_state = 363},
  [370] = {.lex_state = 361},
  [371] = {.lex_state = 330},
  [372] = {.lex_state = 330},
  [373] = {.lex_state = 330},
  [374] = {.lex_state = 330},
  [375] = {.lex_state = 330},
  [376] = {.lex_state = 330},
  [377] = {.lex_state = 363},
  [378] = {.lex_state = 330},
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
    [sym_sentence] = STATE(39),
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
    [sym__value] = STATE(37),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [aux_sym_sentences_repeat1] = STATE(39),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(40),
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
    [anon_sym_module] = ACTIONS(77),
    [anon_sym_default] = ACTIONS(79),
    [anon_sym_function] = ACTIONS(81),
    [anon_sym_case] = ACTIONS(83),
    [anon_sym_if] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(87),
    [anon_sym_while] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
  },
  [12] = {
    [sym_group_expression] = STATE(63),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [13] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(64),
    [sym__assignment_or_collection_or_value] = STATE(64),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(65),
    [sym__collection_or_value] = STATE(66),
    [sym_collection] = STATE(66),
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
    [sym_identifier] = ACTIONS(93),
    [anon_sym_s8] = ACTIONS(93),
    [anon_sym_u8] = ACTIONS(93),
    [anon_sym_f64] = ACTIONS(93),
    [anon_sym_u32] = ACTIONS(93),
    [anon_sym_i8] = ACTIONS(93),
    [anon_sym_method] = ACTIONS(93),
    [anon_sym_s32] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(93),
    [anon_sym_i64] = ACTIONS(93),
    [anon_sym_f32] = ACTIONS(93),
    [anon_sym_function] = ACTIONS(93),
    [anon_sym_s16] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(93),
    [anon_sym_i32] = ACTIONS(93),
    [anon_sym_u64] = ACTIONS(93),
    [anon_sym_i16] = ACTIONS(93),
  },
  [15] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(67),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
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
    [sym__literal] = STATE(73),
    [sym_group_expression] = STATE(73),
    [sym_assignment_expression] = STATE(70),
    [sym_string] = STATE(73),
    [sym_character] = STATE(73),
    [sym_unary_op] = STATE(71),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(73),
    [sym__value] = STATE(73),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_double] = ACTIONS(101),
    [sym_float] = ACTIONS(101),
    [sym_oct] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(103),
    [sym_null] = ACTIONS(97),
    [sym_binary] = ACTIONS(101),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(101),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(97),
  },
  [17] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(107),
    [sym__comment] = ACTIONS(3),
  },
  [18] = {
    [aux_sym_compound_macro_repeat1] = STATE(78),
    [sym_parameter_list] = STATE(79),
    [anon_sym_PLUS_PLUS] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(109),
    [anon_sym_PERCENT_EQ] = ACTIONS(109),
    [anon_sym_PIPE_EQ] = ACTIONS(109),
    [anon_sym_PLUS_EQ] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LT_LT_EQ] = ACTIONS(109),
    [anon_sym_SLASH_EQ] = ACTIONS(109),
    [anon_sym_GT_GT_EQ] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_AMP_EQ] = ACTIONS(109),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_COLON_EQ] = ACTIONS(109),
    [anon_sym_DASH_DASH] = ACTIONS(119),
    [anon_sym_STAR_EQ] = ACTIONS(109),
    [anon_sym_CARET_EQ] = ACTIONS(109),
    [sym__space] = ACTIONS(121),
  },
  [19] = {
    [sym_group_expression] = STATE(80),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [20] = {
    [sym__escape_sequence] = STATE(81),
    [anon_sym_BSLASH0] = ACTIONS(123),
    [anon_sym_BSLASHr] = ACTIONS(123),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(123),
    [anon_sym_BSLASHa] = ACTIONS(123),
    [anon_sym_BSLASHt] = ACTIONS(123),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(123),
    [anon_sym_BSLASHv] = ACTIONS(123),
    [anon_sym_BSLASHn] = ACTIONS(123),
    [aux_sym_character_token1] = ACTIONS(125),
    [anon_sym_BSLASHf] = ACTIONS(123),
  },
  [21] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(84),
    [sym__assignment_or_collection_or_value] = STATE(84),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(85),
    [sym_collection] = STATE(85),
    [sym__number] = STATE(37),
    [sym__value] = STATE(37),
    [sym_identifier] = ACTIONS(31),
    [sym_double] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [sym_oct] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(31),
    [sym_binary] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(15),
    [sym_integer] = ACTIONS(31),
  },
  [22] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(131),
    [sym__comment] = ACTIONS(3),
  },
  [23] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
  },
  [24] = {
    [aux_sym_string_repeat1] = STATE(88),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(137),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(139),
  },
  [25] = {
    [sym_group_expression] = STATE(90),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(141),
  },
  [26] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [27] = {
    [anon_sym_s8] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(145),
    [sym_null] = ACTIONS(145),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(109),
    [sym_readonly] = ACTIONS(145),
    [anon_sym_f32] = ACTIONS(145),
    [anon_sym_s16] = ACTIONS(145),
    [anon_sym_module] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_DASH_EQ] = ACTIONS(109),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_f64] = ACTIONS(145),
    [sym_oct] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(147),
    [anon_sym_goto] = ACTIONS(145),
    [anon_sym_s32] = ACTIONS(145),
    [anon_sym_function] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_STAR_EQ] = ACTIONS(109),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_i32] = ACTIONS(145),
    [sym_integer] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_section] = ACTIONS(145),
    [sym_double] = ACTIONS(147),
    [anon_sym_PLUS_EQ] = ACTIONS(109),
    [anon_sym_method] = ACTIONS(145),
    [anon_sym_LT_LT_EQ] = ACTIONS(109),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_SLASH_EQ] = ACTIONS(109),
    [anon_sym_publish] = ACTIONS(145),
    [anon_sym_AMP_EQ] = ACTIONS(109),
    [anon_sym_i64] = ACTIONS(145),
    [sym_long] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_COLON_EQ] = ACTIONS(109),
    [sym_hex] = ACTIONS(147),
    [anon_sym_PLUS_PLUS] = ACTIONS(109),
    [anon_sym_switch] = ACTIONS(145),
    [anon_sym_PERCENT_EQ] = ACTIONS(109),
    [anon_sym_PIPE_EQ] = ACTIONS(109),
    [anon_sym_u8] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_u32] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_i8] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [sym_binary] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_DASH_DASH] = ACTIONS(119),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(109),
    [anon_sym_u16] = ACTIONS(145),
    [anon_sym_u64] = ACTIONS(145),
    [anon_sym_i16] = ACTIONS(145),
  },
  [28] = {
    [sym_integer] = ACTIONS(145),
    [anon_sym_section] = ACTIONS(145),
    [anon_sym_s8] = ACTIONS(145),
    [sym_double] = ACTIONS(147),
    [anon_sym_method] = ACTIONS(145),
    [anon_sym_end] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_publish] = ACTIONS(145),
    [sym_readonly] = ACTIONS(145),
    [anon_sym_i64] = ACTIONS(145),
    [anon_sym_f32] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [sym_null] = ACTIONS(145),
    [sym_long] = ACTIONS(147),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(145),
    [sym_hex] = ACTIONS(147),
    [anon_sym_module] = ACTIONS(145),
    [anon_sym_switch] = ACTIONS(145),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_u8] = ACTIONS(145),
    [anon_sym_f64] = ACTIONS(145),
    [anon_sym_u32] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_i8] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_goto] = ACTIONS(145),
    [sym_oct] = ACTIONS(145),
    [anon_sym_s32] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [sym_binary] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(145),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(145),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_u16] = ACTIONS(145),
    [anon_sym_i32] = ACTIONS(145),
    [anon_sym_u64] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_i16] = ACTIONS(145),
  },
  [29] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(93),
    [sym_type] = STATE(67),
    [sym_is_function] = STATE(93),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(149),
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
    [anon_sym_DOT] = ACTIONS(151),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [31] = {
    [sym_integer] = ACTIONS(153),
    [anon_sym_section] = ACTIONS(153),
    [anon_sym_s8] = ACTIONS(153),
    [sym_double] = ACTIONS(155),
    [anon_sym_method] = ACTIONS(153),
    [anon_sym_end] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_publish] = ACTIONS(153),
    [sym_readonly] = ACTIONS(153),
    [anon_sym_i64] = ACTIONS(153),
    [anon_sym_f32] = ACTIONS(153),
    [anon_sym_LPAREN] = ACTIONS(153),
    [sym_null] = ACTIONS(153),
    [sym_long] = ACTIONS(155),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(153),
    [sym_hex] = ACTIONS(155),
    [anon_sym_module] = ACTIONS(153),
    [anon_sym_switch] = ACTIONS(153),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_private] = ACTIONS(153),
    [anon_sym_u8] = ACTIONS(153),
    [anon_sym_f64] = ACTIONS(153),
    [anon_sym_u32] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [anon_sym_i8] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_goto] = ACTIONS(153),
    [sym_oct] = ACTIONS(153),
    [anon_sym_s32] = ACTIONS(153),
    [sym_float] = ACTIONS(155),
    [sym_binary] = ACTIONS(155),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_function] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(153),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(153),
    [anon_sym_u16] = ACTIONS(153),
    [anon_sym_i32] = ACTIONS(153),
    [anon_sym_u64] = ACTIONS(153),
    [anon_sym_enum] = ACTIONS(153),
    [anon_sym_i16] = ACTIONS(153),
  },
  [32] = {
    [anon_sym_DOT] = ACTIONS(157),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [33] = {
    [sym_assignment_op] = STATE(96),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
  },
  [34] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
  },
  [35] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
  },
  [36] = {
    [sym_integer] = ACTIONS(165),
    [anon_sym_section] = ACTIONS(165),
    [anon_sym_s8] = ACTIONS(165),
    [sym_double] = ACTIONS(167),
    [anon_sym_method] = ACTIONS(165),
    [anon_sym_end] = ACTIONS(165),
    [anon_sym_while] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(167),
    [anon_sym_publish] = ACTIONS(165),
    [sym_readonly] = ACTIONS(165),
    [anon_sym_i64] = ACTIONS(165),
    [anon_sym_f32] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [sym_null] = ACTIONS(165),
    [sym_long] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(165),
    [sym_hex] = ACTIONS(167),
    [anon_sym_module] = ACTIONS(165),
    [anon_sym_switch] = ACTIONS(165),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_u8] = ACTIONS(165),
    [anon_sym_f64] = ACTIONS(165),
    [anon_sym_u32] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_i8] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_goto] = ACTIONS(165),
    [sym_oct] = ACTIONS(165),
    [anon_sym_s32] = ACTIONS(165),
    [sym_float] = ACTIONS(167),
    [sym_binary] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_function] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(165),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_u16] = ACTIONS(165),
    [anon_sym_i32] = ACTIONS(165),
    [anon_sym_u64] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_i16] = ACTIONS(165),
  },
  [37] = {
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_s8] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_end] = ACTIONS(169),
    [sym_null] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [sym_readonly] = ACTIONS(169),
    [anon_sym_f32] = ACTIONS(169),
    [anon_sym_s16] = ACTIONS(169),
    [anon_sym_module] = ACTIONS(169),
    [sym_identifier] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_private] = ACTIONS(169),
    [anon_sym_f64] = ACTIONS(169),
    [sym_oct] = ACTIONS(169),
    [anon_sym_DOT] = ACTIONS(171),
    [anon_sym_goto] = ACTIONS(169),
    [anon_sym_s32] = ACTIONS(169),
    [anon_sym_function] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(169),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_protected] = ACTIONS(169),
    [anon_sym_i32] = ACTIONS(169),
    [sym_integer] = ACTIONS(169),
    [anon_sym_enum] = ACTIONS(169),
    [anon_sym_section] = ACTIONS(169),
    [sym_double] = ACTIONS(171),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_method] = ACTIONS(169),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(169),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_publish] = ACTIONS(169),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [anon_sym_i64] = ACTIONS(169),
    [sym_long] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [sym_hex] = ACTIONS(171),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_switch] = ACTIONS(169),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_u8] = ACTIONS(169),
    [sym_float] = ACTIONS(171),
    [anon_sym_u32] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_i8] = ACTIONS(169),
    [anon_sym_return] = ACTIONS(169),
    [sym_binary] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_RBRACE] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [anon_sym_u16] = ACTIONS(169),
    [anon_sym_u64] = ACTIONS(169),
    [anon_sym_i16] = ACTIONS(169),
  },
  [38] = {
    [aux_sym_type_repeat2] = STATE(103),
    [sym_pointer] = STATE(104),
    [aux_sym_type_repeat1] = STATE(104),
    [sym_array] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_STAR] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [39] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(29),
    [sym_end_module] = STATE(30),
    [sym_string] = STATE(37),
    [sym_end_case] = STATE(30),
    [sym_character] = STATE(37),
    [sym_sentence] = STATE(105),
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
    [sym__value] = STATE(37),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [aux_sym_sentences_repeat1] = STATE(105),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(40),
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
    [ts_builtin_sym_end] = ACTIONS(183),
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
  [40] = {
    [anon_sym_DOT] = ACTIONS(185),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_DOT] = ACTIONS(187),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_DOT] = ACTIONS(189),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [43] = {
    [sym_module_definition] = STATE(43),
    [sym__start_module_definition] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(43),
    [anon_sym_module] = ACTIONS(191),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym_is_method] = STATE(108),
    [sym_type] = STATE(109),
    [sym_access_control] = STATE(110),
    [sym_function_signature] = STATE(111),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym_variable_definition] = STATE(111),
    [sym_is_function] = STATE(108),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(25),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(25),
    [sym_readonly] = ACTIONS(196),
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
    [aux_sym_compound_macro_repeat1] = STATE(113),
    [sym_parameter_list] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(115),
    [sym__space] = ACTIONS(121),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(115),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_module] = ACTIONS(77),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(200),
  },
  [48] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(202),
    [sym__comment] = ACTIONS(3),
  },
  [49] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(117),
    [sym_type] = STATE(67),
    [sym_is_function] = STATE(117),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(149),
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
    [anon_sym_DOT] = ACTIONS(204),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_DOT] = ACTIONS(206),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [sym_is_method] = STATE(48),
    [sym_type] = STATE(35),
    [sym_declaration_definition] = STATE(121),
    [sym_access_control] = STATE(49),
    [sym_end_module] = STATE(120),
    [sym_enum_definition] = STATE(121),
    [sym_variable_definition] = STATE(51),
    [aux_sym_module_definition_repeat1] = STATE(121),
    [sym_compound_macro] = STATE(53),
    [sym_function_signature] = STATE(54),
    [sym_function_definition] = STATE(121),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__definitions] = STATE(121),
    [sym_compound_macro_block] = STATE(121),
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
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(130),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(130),
    [sym_single_line_if_statement] = STATE(130),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_compound_macro] = STATE(131),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [sym_integer] = ACTIONS(31),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(208),
    [sym_double] = ACTIONS(15),
    [anon_sym_method] = ACTIONS(211),
    [anon_sym_end] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(216),
    [sym_readonly] = ACTIONS(219),
    [anon_sym_i64] = ACTIONS(208),
    [anon_sym_f32] = ACTIONS(208),
    [sym_null] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(208),
    [sym_is_declare] = ACTIONS(211),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(222),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(216),
    [anon_sym_u8] = ACTIONS(208),
    [anon_sym_f64] = ACTIONS(208),
    [anon_sym_u32] = ACTIONS(208),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(208),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(208),
    [sym_is_external] = ACTIONS(211),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_function] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(216),
    [anon_sym_u16] = ACTIONS(208),
    [anon_sym_i32] = ACTIONS(208),
    [anon_sym_u64] = ACTIONS(208),
    [anon_sym_enum] = ACTIONS(211),
    [anon_sym_i16] = ACTIONS(208),
  },
  [54] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym_end_function] = STATE(135),
    [sym_end_method] = STATE(135),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(135),
    [aux_sym_compound_macro_block_repeat1] = STATE(136),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(136),
    [sym_single_line_if_statement] = STATE(136),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(229),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [55] = {
    [anon_sym_DOT] = ACTIONS(235),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_DOT] = ACTIONS(237),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_DOT] = ACTIONS(239),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_DOT] = ACTIONS(241),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_DOT] = ACTIONS(243),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_DOT] = ACTIONS(245),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_DOT] = ACTIONS(247),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_DOT] = ACTIONS(249),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_DOT] = ACTIONS(251),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(139),
    [anon_sym_RBRACE] = ACTIONS(253),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_RBRACE] = ACTIONS(257),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [66] = {
    [sym_assignment_op] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_DOT] = ACTIONS(259),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(259),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
  },
  [67] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(261),
    [sym__comment] = ACTIONS(3),
  },
  [68] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(263),
    [sym_long] = ACTIONS(265),
    [sym_double] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(265),
    [sym_oct] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(265),
    [sym_float] = ACTIONS(265),
    [sym_hex] = ACTIONS(265),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(263),
    [sym_integer] = ACTIONS(263),
    [sym_binary] = ACTIONS(265),
  },
  [69] = {
    [sym__literal] = STATE(145),
    [sym_group_expression] = STATE(145),
    [sym_assignment_expression] = STATE(143),
    [sym_string] = STATE(145),
    [sym_character] = STATE(145),
    [sym_unary_op] = STATE(144),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(145),
    [sym__value] = STATE(145),
    [sym_identifier] = ACTIONS(267),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_double] = ACTIONS(269),
    [sym_float] = ACTIONS(269),
    [sym_oct] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(103),
    [sym_null] = ACTIONS(267),
    [sym_binary] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(269),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(267),
  },
  [70] = {
    [anon_sym_RPAREN] = ACTIONS(271),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [71] = {
    [sym__literal] = STATE(147),
    [sym_group_expression] = STATE(147),
    [sym__number] = STATE(147),
    [sym_string] = STATE(147),
    [sym_character] = STATE(147),
    [sym__value] = STATE(147),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(273),
    [sym_identifier] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(273),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(275),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(273),
    [sym_hex] = ACTIONS(273),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(275),
    [sym_integer] = ACTIONS(275),
    [sym_binary] = ACTIONS(273),
  },
  [72] = {
    [sym_assignment_op] = STATE(141),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
  },
  [73] = {
    [sym_binary_op] = STATE(149),
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
  },
  [74] = {
    [anon_sym_DOT] = ACTIONS(281),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [75] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym_integer] = ACTIONS(285),
    [anon_sym_section] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(285),
    [sym_double] = ACTIONS(287),
    [anon_sym_method] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_while] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_publish] = ACTIONS(285),
    [sym_readonly] = ACTIONS(285),
    [anon_sym_i64] = ACTIONS(285),
    [anon_sym_f32] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_null] = ACTIONS(285),
    [sym_long] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(285),
    [sym_hex] = ACTIONS(287),
    [anon_sym_module] = ACTIONS(285),
    [anon_sym_switch] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_u8] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_i8] = ACTIONS(285),
    [anon_sym_return] = ACTIONS(285),
    [anon_sym_goto] = ACTIONS(285),
    [sym_oct] = ACTIONS(285),
    [anon_sym_s32] = ACTIONS(285),
    [sym_float] = ACTIONS(287),
    [sym_binary] = ACTIONS(287),
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_function] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_if] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_u16] = ACTIONS(285),
    [anon_sym_i32] = ACTIONS(285),
    [anon_sym_u64] = ACTIONS(285),
    [anon_sym_enum] = ACTIONS(285),
    [anon_sym_i16] = ACTIONS(285),
  },
  [77] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(127),
    [sym_variable_definition] = STATE(153),
    [sym__comma_list_variables] = STATE(154),
    [sym__base_type] = STATE(38),
    [anon_sym_RPAREN] = ACTIONS(289),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
  },
  [78] = {
    [aux_sym_compound_macro_repeat1] = STATE(156),
    [sym_parameter_list] = STATE(157),
    [sym__space] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_DOT] = ACTIONS(291),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [anon_sym_DOT] = ACTIONS(293),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [anon_sym_SQUOTE] = ACTIONS(295),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [82] = {
    [aux_sym_string_repeat1] = STATE(161),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(297),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(299),
  },
  [83] = {
    [sym__escape_sequence] = STATE(162),
    [anon_sym_BSLASH0] = ACTIONS(301),
    [anon_sym_BSLASHr] = ACTIONS(301),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(301),
    [anon_sym_BSLASHa] = ACTIONS(301),
    [anon_sym_BSLASHt] = ACTIONS(301),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(301),
    [anon_sym_BSLASHv] = ACTIONS(301),
    [anon_sym_BSLASHn] = ACTIONS(301),
    [aux_sym_character_token1] = ACTIONS(303),
    [anon_sym_BSLASHf] = ACTIONS(301),
  },
  [84] = {
    [sym_integer] = ACTIONS(305),
    [anon_sym_section] = ACTIONS(305),
    [anon_sym_s8] = ACTIONS(305),
    [sym_double] = ACTIONS(307),
    [anon_sym_method] = ACTIONS(305),
    [anon_sym_end] = ACTIONS(305),
    [anon_sym_while] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_publish] = ACTIONS(305),
    [sym_readonly] = ACTIONS(305),
    [anon_sym_i64] = ACTIONS(305),
    [anon_sym_f32] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [sym_null] = ACTIONS(305),
    [sym_long] = ACTIONS(307),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(305),
    [sym_hex] = ACTIONS(307),
    [anon_sym_module] = ACTIONS(305),
    [anon_sym_switch] = ACTIONS(305),
    [sym_identifier] = ACTIONS(305),
    [anon_sym_private] = ACTIONS(305),
    [anon_sym_u8] = ACTIONS(305),
    [anon_sym_f64] = ACTIONS(305),
    [anon_sym_u32] = ACTIONS(305),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_i8] = ACTIONS(305),
    [anon_sym_return] = ACTIONS(305),
    [anon_sym_goto] = ACTIONS(305),
    [sym_oct] = ACTIONS(305),
    [anon_sym_s32] = ACTIONS(305),
    [sym_float] = ACTIONS(307),
    [sym_binary] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_function] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [anon_sym_if] = ACTIONS(305),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(305),
    [anon_sym_u16] = ACTIONS(305),
    [anon_sym_i32] = ACTIONS(305),
    [anon_sym_u64] = ACTIONS(305),
    [anon_sym_enum] = ACTIONS(305),
    [anon_sym_i16] = ACTIONS(305),
  },
  [85] = {
    [sym_assignment_op] = STATE(96),
    [sym_integer] = ACTIONS(309),
    [anon_sym_section] = ACTIONS(309),
    [anon_sym_CARET_EQ] = ACTIONS(159),
    [sym__space] = ACTIONS(3),
    [anon_sym_s8] = ACTIONS(309),
    [sym_double] = ACTIONS(259),
    [anon_sym_PLUS_EQ] = ACTIONS(159),
    [anon_sym_method] = ACTIONS(309),
    [anon_sym_end] = ACTIONS(309),
    [anon_sym_while] = ACTIONS(309),
    [anon_sym_LBRACE] = ACTIONS(259),
    [anon_sym_publish] = ACTIONS(309),
    [sym_readonly] = ACTIONS(309),
    [anon_sym_i64] = ACTIONS(309),
    [anon_sym_f32] = ACTIONS(309),
    [anon_sym_LPAREN] = ACTIONS(309),
    [sym_null] = ACTIONS(309),
    [sym_long] = ACTIONS(259),
    [anon_sym_AMP_EQ] = ACTIONS(159),
    [anon_sym_COLON_EQ] = ACTIONS(159),
    [anon_sym_LT_LT_EQ] = ACTIONS(159),
    [anon_sym_s16] = ACTIONS(309),
    [sym_hex] = ACTIONS(259),
    [anon_sym_SLASH_EQ] = ACTIONS(159),
    [anon_sym_GT_GT_EQ] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(309),
    [anon_sym_switch] = ACTIONS(309),
    [sym_identifier] = ACTIONS(309),
    [anon_sym_PERCENT_EQ] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(309),
    [anon_sym_u8] = ACTIONS(309),
    [anon_sym_f64] = ACTIONS(309),
    [anon_sym_u32] = ACTIONS(309),
    [anon_sym_SQUOTE] = ACTIONS(259),
    [anon_sym_i8] = ACTIONS(309),
    [anon_sym_return] = ACTIONS(309),
    [anon_sym_goto] = ACTIONS(309),
    [sym_oct] = ACTIONS(309),
    [anon_sym_s32] = ACTIONS(309),
    [sym_float] = ACTIONS(259),
    [sym_binary] = ACTIONS(259),
    [anon_sym_DASH_EQ] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_PIPE_EQ] = ACTIONS(159),
    [anon_sym_function] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(309),
    [anon_sym_STAR_EQ] = ACTIONS(159),
    [anon_sym_protected] = ACTIONS(309),
    [anon_sym_u16] = ACTIONS(309),
    [anon_sym_i32] = ACTIONS(309),
    [anon_sym_u64] = ACTIONS(309),
    [anon_sym_enum] = ACTIONS(309),
    [anon_sym_i16] = ACTIONS(309),
  },
  [86] = {
    [anon_sym_DOT] = ACTIONS(311),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_EQ_EQ] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_PIPE_PIPE] = ACTIONS(313),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AMP_AMP] = ACTIONS(313),
    [anon_sym_LT_EQ] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_GT_EQ] = ACTIONS(313),
    [anon_sym_CARET] = ACTIONS(315),
    [anon_sym_PLUS_PLUS] = ACTIONS(313),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [anon_sym_BANG_EQ] = ACTIONS(313),
    [anon_sym_LT_LT] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_DASH_DASH] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [sym__space] = ACTIONS(3),
  },
  [88] = {
    [aux_sym_string_repeat1] = STATE(164),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(317),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(319),
  },
  [89] = {
    [sym__literal] = STATE(167),
    [sym_group_expression] = STATE(167),
    [sym_assignment_expression] = STATE(165),
    [sym_string] = STATE(167),
    [sym_character] = STATE(167),
    [sym_unary_op] = STATE(166),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(167),
    [sym__value] = STATE(167),
    [sym_identifier] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_double] = ACTIONS(323),
    [sym_float] = ACTIONS(323),
    [sym_oct] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(103),
    [sym_null] = ACTIONS(321),
    [sym_binary] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(323),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(321),
  },
  [90] = {
    [sym_collection] = STATE(72),
    [sym_group_expression] = STATE(27),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(127),
    [sym_assignment_expression] = STATE(28),
    [sym_single_line_if_statement] = STATE(169),
    [sym_string] = STATE(37),
    [sym_while_statement_with_block] = STATE(170),
    [sym_character] = STATE(37),
    [sym__statement] = STATE(169),
    [sym_expression_statement] = STATE(170),
    [sym_return_statement] = STATE(170),
    [sym_variable_definition] = STATE(170),
    [sym_goto_statement] = STATE(170),
    [sym_section_statement] = STATE(170),
    [sym__value] = STATE(37),
    [sym__while_statement] = STATE(128),
    [sym__literal] = STATE(37),
    [sym__variable_statement] = STATE(170),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(170),
    [sym__collection_or_value] = STATE(72),
    [sym__if_statement] = STATE(132),
    [sym__number] = STATE(37),
    [sym_if_statement_with_block] = STATE(170),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(170),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [sym_null] = ACTIONS(31),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(51),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [91] = {
    [sym__enum_element] = STATE(172),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
  },
  [92] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(173),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
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
  [93] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(329),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [sym_integer] = ACTIONS(331),
    [anon_sym_section] = ACTIONS(331),
    [anon_sym_s8] = ACTIONS(331),
    [sym_double] = ACTIONS(333),
    [anon_sym_method] = ACTIONS(331),
    [anon_sym_end] = ACTIONS(331),
    [anon_sym_while] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_publish] = ACTIONS(331),
    [sym_readonly] = ACTIONS(331),
    [anon_sym_i64] = ACTIONS(331),
    [anon_sym_f32] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(331),
    [sym_null] = ACTIONS(331),
    [sym_long] = ACTIONS(333),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(331),
    [sym_hex] = ACTIONS(333),
    [anon_sym_module] = ACTIONS(331),
    [anon_sym_switch] = ACTIONS(331),
    [sym_identifier] = ACTIONS(331),
    [anon_sym_private] = ACTIONS(331),
    [anon_sym_u8] = ACTIONS(331),
    [anon_sym_f64] = ACTIONS(331),
    [anon_sym_u32] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_i8] = ACTIONS(331),
    [anon_sym_return] = ACTIONS(331),
    [anon_sym_goto] = ACTIONS(331),
    [sym_oct] = ACTIONS(331),
    [anon_sym_s32] = ACTIONS(331),
    [sym_float] = ACTIONS(333),
    [sym_binary] = ACTIONS(333),
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_function] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [anon_sym_if] = ACTIONS(331),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(331),
    [anon_sym_u16] = ACTIONS(331),
    [anon_sym_i32] = ACTIONS(331),
    [anon_sym_u64] = ACTIONS(331),
    [anon_sym_enum] = ACTIONS(331),
    [anon_sym_i16] = ACTIONS(331),
  },
  [95] = {
    [sym_identifier] = ACTIONS(335),
    [sym_double] = ACTIONS(337),
    [sym_float] = ACTIONS(337),
    [sym_oct] = ACTIONS(335),
    [anon_sym_SQUOTE] = ACTIONS(337),
    [anon_sym_LBRACE] = ACTIONS(337),
    [sym_null] = ACTIONS(335),
    [sym_binary] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(337),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(337),
    [sym_integer] = ACTIONS(335),
  },
  [96] = {
    [sym__literal] = STATE(179),
    [sym_group_expression] = STATE(179),
    [sym_string] = STATE(179),
    [sym_character] = STATE(179),
    [sym__collection_or_value] = STATE(179),
    [sym_collection] = STATE(179),
    [sym__number] = STATE(179),
    [sym__value] = STATE(179),
    [sym_identifier] = ACTIONS(339),
    [sym_double] = ACTIONS(341),
    [sym_float] = ACTIONS(341),
    [sym_oct] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(345),
    [sym_null] = ACTIONS(339),
    [sym_binary] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(349),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(341),
    [sym_integer] = ACTIONS(339),
  },
  [97] = {
    [sym_parameter_list] = STATE(182),
    [sym_return_list] = STATE(183),
    [anon_sym_DOT] = ACTIONS(351),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [sym_static_assignment] = STATE(185),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_DOT] = ACTIONS(355),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_COLON_EQ] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [sym_integer] = ACTIONS(359),
    [anon_sym_section] = ACTIONS(359),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_s8] = ACTIONS(359),
    [sym_double] = ACTIONS(361),
    [anon_sym_method] = ACTIONS(359),
    [anon_sym_end] = ACTIONS(359),
    [anon_sym_while] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_publish] = ACTIONS(359),
    [sym_readonly] = ACTIONS(359),
    [anon_sym_i64] = ACTIONS(359),
    [anon_sym_f32] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [sym_null] = ACTIONS(359),
    [sym_long] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(359),
    [sym_hex] = ACTIONS(361),
    [anon_sym_module] = ACTIONS(359),
    [anon_sym_switch] = ACTIONS(359),
    [sym_identifier] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_private] = ACTIONS(359),
    [anon_sym_u8] = ACTIONS(359),
    [anon_sym_f64] = ACTIONS(359),
    [anon_sym_u32] = ACTIONS(359),
    [anon_sym_SQUOTE] = ACTIONS(361),
    [anon_sym_i8] = ACTIONS(359),
    [anon_sym_return] = ACTIONS(359),
    [anon_sym_goto] = ACTIONS(359),
    [sym_oct] = ACTIONS(359),
    [anon_sym_s32] = ACTIONS(359),
    [sym_float] = ACTIONS(361),
    [sym_binary] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(361),
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_function] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(361),
    [anon_sym_if] = ACTIONS(359),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(359),
    [anon_sym_u16] = ACTIONS(359),
    [anon_sym_i32] = ACTIONS(359),
    [anon_sym_u64] = ACTIONS(359),
    [anon_sym_enum] = ACTIONS(359),
    [anon_sym_i16] = ACTIONS(359),
  },
  [100] = {
    [sym_integer] = ACTIONS(363),
    [anon_sym_section] = ACTIONS(363),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_s8] = ACTIONS(363),
    [sym_double] = ACTIONS(365),
    [anon_sym_method] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(363),
    [anon_sym_LBRACE] = ACTIONS(365),
    [anon_sym_publish] = ACTIONS(363),
    [sym_readonly] = ACTIONS(363),
    [anon_sym_i64] = ACTIONS(363),
    [anon_sym_f32] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym_null] = ACTIONS(363),
    [sym_long] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(363),
    [sym_hex] = ACTIONS(365),
    [anon_sym_module] = ACTIONS(363),
    [anon_sym_switch] = ACTIONS(363),
    [sym_identifier] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_private] = ACTIONS(363),
    [anon_sym_u8] = ACTIONS(363),
    [anon_sym_f64] = ACTIONS(363),
    [anon_sym_u32] = ACTIONS(363),
    [anon_sym_SQUOTE] = ACTIONS(365),
    [anon_sym_i8] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(363),
    [anon_sym_goto] = ACTIONS(363),
    [sym_oct] = ACTIONS(363),
    [anon_sym_s32] = ACTIONS(363),
    [sym_float] = ACTIONS(365),
    [sym_binary] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(365),
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_function] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [anon_sym_if] = ACTIONS(363),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(363),
    [anon_sym_u16] = ACTIONS(363),
    [anon_sym_i32] = ACTIONS(363),
    [anon_sym_u64] = ACTIONS(363),
    [anon_sym_enum] = ACTIONS(363),
    [anon_sym_i16] = ACTIONS(363),
  },
  [101] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_integer] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(371),
    [sym__comment] = ACTIONS(3),
  },
  [103] = {
    [sym_array] = STATE(188),
    [aux_sym_type_repeat2] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(375),
    [sym__comment] = ACTIONS(3),
  },
  [104] = {
    [aux_sym_type_repeat2] = STATE(189),
    [sym_pointer] = STATE(190),
    [aux_sym_type_repeat1] = STATE(190),
    [sym_array] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [105] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(29),
    [sym_end_module] = STATE(30),
    [sym_string] = STATE(37),
    [sym_end_case] = STATE(30),
    [sym_character] = STATE(37),
    [sym_sentence] = STATE(105),
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
    [sym__value] = STATE(37),
    [sym_compound_macro] = STATE(31),
    [sym_function_signature] = STATE(31),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [aux_sym_sentences_repeat1] = STATE(105),
    [sym__control_flow_statement_without_block] = STATE(30),
    [sym__if_statement] = STATE(40),
    [sym__switch_statement] = STATE(41),
    [sym_integer] = ACTIONS(377),
    [anon_sym_section] = ACTIONS(380),
    [anon_sym_s8] = ACTIONS(383),
    [sym_double] = ACTIONS(386),
    [anon_sym_method] = ACTIONS(389),
    [anon_sym_end] = ACTIONS(392),
    [anon_sym_while] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_publish] = ACTIONS(401),
    [sym_readonly] = ACTIONS(404),
    [anon_sym_i64] = ACTIONS(383),
    [anon_sym_f32] = ACTIONS(383),
    [anon_sym_LPAREN] = ACTIONS(407),
    [sym_null] = ACTIONS(377),
    [sym_long] = ACTIONS(386),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(383),
    [sym_hex] = ACTIONS(386),
    [anon_sym_module] = ACTIONS(410),
    [anon_sym_switch] = ACTIONS(413),
    [sym_identifier] = ACTIONS(416),
    [anon_sym_private] = ACTIONS(401),
    [anon_sym_u8] = ACTIONS(383),
    [anon_sym_f64] = ACTIONS(383),
    [anon_sym_u32] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(419),
    [anon_sym_i8] = ACTIONS(383),
    [anon_sym_return] = ACTIONS(422),
    [anon_sym_goto] = ACTIONS(425),
    [sym_oct] = ACTIONS(377),
    [anon_sym_s32] = ACTIONS(383),
    [sym_float] = ACTIONS(386),
    [sym_binary] = ACTIONS(386),
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_function] = ACTIONS(430),
    [anon_sym_DQUOTE] = ACTIONS(433),
    [anon_sym_if] = ACTIONS(436),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(401),
    [anon_sym_u16] = ACTIONS(383),
    [anon_sym_i32] = ACTIONS(383),
    [anon_sym_u64] = ACTIONS(383),
    [anon_sym_enum] = ACTIONS(439),
    [anon_sym_i16] = ACTIONS(383),
  },
  [106] = {
    [sym_is_declare] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(442),
    [anon_sym_s8] = ACTIONS(442),
    [anon_sym_private] = ACTIONS(442),
    [anon_sym_u8] = ACTIONS(442),
    [anon_sym_f64] = ACTIONS(442),
    [anon_sym_u32] = ACTIONS(442),
    [anon_sym_i8] = ACTIONS(442),
    [anon_sym_method] = ACTIONS(442),
    [anon_sym_end] = ACTIONS(442),
    [anon_sym_s32] = ACTIONS(442),
    [anon_sym_publish] = ACTIONS(442),
    [sym_readonly] = ACTIONS(442),
    [anon_sym_i64] = ACTIONS(442),
    [anon_sym_f32] = ACTIONS(442),
    [sym_is_external] = ACTIONS(442),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(442),
    [anon_sym_s16] = ACTIONS(442),
    [anon_sym_protected] = ACTIONS(442),
    [anon_sym_u16] = ACTIONS(442),
    [anon_sym_i32] = ACTIONS(442),
    [anon_sym_u64] = ACTIONS(442),
    [anon_sym_enum] = ACTIONS(442),
    [anon_sym_i16] = ACTIONS(442),
  },
  [107] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(191),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
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
  [108] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(444),
    [sym__comment] = ACTIONS(3),
  },
  [109] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(446),
    [sym__comment] = ACTIONS(3),
  },
  [110] = {
    [sym_primitive_type] = STATE(38),
    [sym_is_method] = STATE(195),
    [sym_type] = STATE(191),
    [sym_is_function] = STATE(195),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(17),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(448),
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
  [111] = {
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
  [112] = {
    [sym_integer] = ACTIONS(285),
    [anon_sym_section] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(285),
    [sym_double] = ACTIONS(287),
    [anon_sym_method] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_while] = ACTIONS(285),
    [anon_sym_LBRACE] = ACTIONS(287),
    [anon_sym_publish] = ACTIONS(285),
    [sym_readonly] = ACTIONS(285),
    [anon_sym_i64] = ACTIONS(285),
    [anon_sym_f32] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [sym_null] = ACTIONS(285),
    [sym_long] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(285),
    [sym_is_declare] = ACTIONS(285),
    [sym_hex] = ACTIONS(287),
    [anon_sym_switch] = ACTIONS(285),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_u8] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(285),
    [anon_sym_SQUOTE] = ACTIONS(287),
    [anon_sym_i8] = ACTIONS(285),
    [anon_sym_return] = ACTIONS(285),
    [anon_sym_goto] = ACTIONS(285),
    [sym_oct] = ACTIONS(285),
    [anon_sym_s32] = ACTIONS(285),
    [sym_is_external] = ACTIONS(285),
    [sym_float] = ACTIONS(287),
    [sym_binary] = ACTIONS(287),
    [anon_sym_function] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [anon_sym_if] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_u16] = ACTIONS(285),
    [anon_sym_i32] = ACTIONS(285),
    [anon_sym_u64] = ACTIONS(285),
    [anon_sym_enum] = ACTIONS(285),
    [anon_sym_i16] = ACTIONS(285),
  },
  [113] = {
    [aux_sym_compound_macro_repeat1] = STATE(156),
    [sym_parameter_list] = STATE(197),
    [sym__space] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [114] = {
    [anon_sym_DOT] = ACTIONS(452),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym__enum_element] = STATE(198),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
  },
  [116] = {
    [sym_parameter_list] = STATE(200),
    [sym_return_list] = STATE(201),
    [anon_sym_DOT] = ACTIONS(454),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [117] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(456),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [anon_sym_module] = ACTIONS(458),
    [ts_builtin_sym_end] = ACTIONS(458),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym_is_declare] = ACTIONS(460),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(460),
    [anon_sym_s8] = ACTIONS(460),
    [anon_sym_private] = ACTIONS(460),
    [anon_sym_u8] = ACTIONS(460),
    [anon_sym_f64] = ACTIONS(460),
    [anon_sym_u32] = ACTIONS(460),
    [anon_sym_i8] = ACTIONS(460),
    [anon_sym_method] = ACTIONS(460),
    [anon_sym_end] = ACTIONS(460),
    [anon_sym_s32] = ACTIONS(460),
    [anon_sym_publish] = ACTIONS(460),
    [sym_readonly] = ACTIONS(460),
    [anon_sym_i64] = ACTIONS(460),
    [anon_sym_f32] = ACTIONS(460),
    [sym_is_external] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(460),
    [anon_sym_s16] = ACTIONS(460),
    [anon_sym_protected] = ACTIONS(460),
    [anon_sym_u16] = ACTIONS(460),
    [anon_sym_i32] = ACTIONS(460),
    [anon_sym_u64] = ACTIONS(460),
    [anon_sym_enum] = ACTIONS(460),
    [anon_sym_i16] = ACTIONS(460),
  },
  [120] = {
    [anon_sym_DOT] = ACTIONS(462),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [121] = {
    [sym_is_method] = STATE(48),
    [sym_type] = STATE(35),
    [sym_declaration_definition] = STATE(121),
    [sym_access_control] = STATE(49),
    [sym_enum_definition] = STATE(121),
    [sym_variable_definition] = STATE(51),
    [aux_sym_module_definition_repeat1] = STATE(121),
    [sym_compound_macro] = STATE(53),
    [sym_function_signature] = STATE(54),
    [sym_function_definition] = STATE(121),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__definitions] = STATE(121),
    [sym_compound_macro_block] = STATE(121),
    [sym_is_function] = STATE(48),
    [sym_is_declare] = ACTIONS(464),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(467),
    [anon_sym_s8] = ACTIONS(470),
    [anon_sym_private] = ACTIONS(473),
    [anon_sym_u8] = ACTIONS(470),
    [anon_sym_f64] = ACTIONS(470),
    [anon_sym_u32] = ACTIONS(470),
    [anon_sym_i8] = ACTIONS(470),
    [anon_sym_method] = ACTIONS(476),
    [anon_sym_end] = ACTIONS(479),
    [anon_sym_s32] = ACTIONS(470),
    [anon_sym_publish] = ACTIONS(473),
    [sym_readonly] = ACTIONS(481),
    [anon_sym_i64] = ACTIONS(470),
    [anon_sym_f32] = ACTIONS(470),
    [sym_is_external] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(484),
    [anon_sym_s16] = ACTIONS(470),
    [anon_sym_protected] = ACTIONS(473),
    [anon_sym_u16] = ACTIONS(470),
    [anon_sym_i32] = ACTIONS(470),
    [anon_sym_u64] = ACTIONS(470),
    [anon_sym_enum] = ACTIONS(487),
    [anon_sym_i16] = ACTIONS(470),
  },
  [122] = {
    [sym_compound_macro] = STATE(205),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(490),
    [sym__comment] = ACTIONS(3),
  },
  [123] = {
    [sym_identifier] = ACTIONS(93),
    [anon_sym_s8] = ACTIONS(93),
    [anon_sym_u8] = ACTIONS(93),
    [anon_sym_f64] = ACTIONS(93),
    [anon_sym_u32] = ACTIONS(93),
    [anon_sym_i8] = ACTIONS(93),
    [anon_sym_s32] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(93),
    [anon_sym_i64] = ACTIONS(93),
    [anon_sym_f32] = ACTIONS(93),
    [anon_sym_s16] = ACTIONS(93),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(93),
    [anon_sym_i32] = ACTIONS(93),
    [anon_sym_u64] = ACTIONS(93),
    [anon_sym_i16] = ACTIONS(93),
  },
  [124] = {
    [anon_sym_PLUS_PLUS] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_DASH_EQ] = ACTIONS(109),
    [anon_sym_PERCENT_EQ] = ACTIONS(109),
    [anon_sym_PIPE_EQ] = ACTIONS(109),
    [anon_sym_PLUS_EQ] = ACTIONS(109),
    [anon_sym_LT_LT_EQ] = ACTIONS(109),
    [anon_sym_SLASH_EQ] = ACTIONS(109),
    [anon_sym_GT_GT_EQ] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_AMP_EQ] = ACTIONS(109),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(109),
    [anon_sym_DASH_DASH] = ACTIONS(119),
    [anon_sym_STAR_EQ] = ACTIONS(109),
    [anon_sym_CARET_EQ] = ACTIONS(109),
    [sym__space] = ACTIONS(3),
  },
  [125] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(84),
    [sym__assignment_or_collection_or_value] = STATE(84),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(66),
    [sym_collection] = STATE(66),
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
  [126] = {
    [sym_group_expression] = STATE(206),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(141),
  },
  [127] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(67),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [sym_readonly] = ACTIONS(149),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_s16] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [anon_sym_i16] = ACTIONS(11),
  },
  [128] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(208),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(208),
    [sym_single_line_if_statement] = STATE(208),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_while] = STATE(209),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(492),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [129] = {
    [anon_sym_DOT] = ACTIONS(494),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [130] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_compound_macro] = STATE(212),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(496),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [131] = {
    [sym_is_declare] = ACTIONS(498),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(498),
    [anon_sym_s8] = ACTIONS(498),
    [anon_sym_private] = ACTIONS(498),
    [anon_sym_u8] = ACTIONS(498),
    [anon_sym_f64] = ACTIONS(498),
    [anon_sym_u32] = ACTIONS(498),
    [anon_sym_i8] = ACTIONS(498),
    [anon_sym_method] = ACTIONS(498),
    [anon_sym_end] = ACTIONS(498),
    [anon_sym_s32] = ACTIONS(498),
    [anon_sym_publish] = ACTIONS(498),
    [sym_readonly] = ACTIONS(498),
    [anon_sym_i64] = ACTIONS(498),
    [anon_sym_f32] = ACTIONS(498),
    [sym_is_external] = ACTIONS(498),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(498),
    [anon_sym_s16] = ACTIONS(498),
    [anon_sym_protected] = ACTIONS(498),
    [anon_sym_u16] = ACTIONS(498),
    [anon_sym_i32] = ACTIONS(498),
    [anon_sym_u64] = ACTIONS(498),
    [anon_sym_enum] = ACTIONS(498),
    [anon_sym_i16] = ACTIONS(498),
  },
  [132] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(214),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(214),
    [sym_single_line_if_statement] = STATE(214),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_if] = STATE(215),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(500),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [133] = {
    [sym_default_statement_with_block] = STATE(218),
    [sym_case_statement_with_block] = STATE(220),
    [sym__case_statement] = STATE(219),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(220),
    [sym__default_statement] = STATE(221),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(502),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(504),
  },
  [134] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_method] = ACTIONS(87),
    [anon_sym_function] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [anon_sym_DOT] = ACTIONS(506),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym_end_function] = STATE(223),
    [sym_end_method] = STATE(223),
    [sym__number] = STATE(37),
    [sym__end_function] = STATE(223),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(229),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [137] = {
    [anon_sym_section] = ACTIONS(508),
    [anon_sym_s8] = ACTIONS(508),
    [sym_double] = ACTIONS(510),
    [anon_sym_LBRACE] = ACTIONS(510),
    [anon_sym_end] = ACTIONS(508),
    [anon_sym_while] = ACTIONS(508),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(508),
    [sym_readonly] = ACTIONS(508),
    [anon_sym_i64] = ACTIONS(508),
    [anon_sym_f32] = ACTIONS(508),
    [sym_null] = ACTIONS(508),
    [anon_sym_LPAREN] = ACTIONS(508),
    [sym_long] = ACTIONS(510),
    [anon_sym_s16] = ACTIONS(508),
    [sym_hex] = ACTIONS(510),
    [anon_sym_switch] = ACTIONS(508),
    [sym_identifier] = ACTIONS(508),
    [anon_sym_private] = ACTIONS(508),
    [anon_sym_u8] = ACTIONS(508),
    [anon_sym_f64] = ACTIONS(508),
    [anon_sym_u32] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(510),
    [anon_sym_SQUOTE] = ACTIONS(510),
    [anon_sym_i8] = ACTIONS(508),
    [anon_sym_return] = ACTIONS(508),
    [anon_sym_goto] = ACTIONS(508),
    [sym_oct] = ACTIONS(508),
    [anon_sym_s32] = ACTIONS(508),
    [sym_float] = ACTIONS(510),
    [sym_binary] = ACTIONS(510),
    [anon_sym_DQUOTE] = ACTIONS(510),
    [anon_sym_if] = ACTIONS(508),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(508),
    [anon_sym_u16] = ACTIONS(508),
    [anon_sym_i32] = ACTIONS(508),
    [anon_sym_u64] = ACTIONS(508),
    [sym_integer] = ACTIONS(508),
    [anon_sym_i16] = ACTIONS(508),
  },
  [138] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(224),
    [sym__assignment_or_collection_or_value] = STATE(224),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__collection_or_value] = STATE(66),
    [sym_collection] = STATE(66),
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
  [139] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(225),
    [anon_sym_RBRACE] = ACTIONS(512),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
  },
  [140] = {
    [anon_sym_s8] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_end] = ACTIONS(514),
    [sym_null] = ACTIONS(514),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(516),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [anon_sym_s16] = ACTIONS(514),
    [anon_sym_module] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_DASH_EQ] = ACTIONS(516),
    [anon_sym_private] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [sym_oct] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_goto] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [anon_sym_function] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [anon_sym_if] = ACTIONS(514),
    [anon_sym_STAR_EQ] = ACTIONS(516),
    [anon_sym_protected] = ACTIONS(514),
    [anon_sym_i32] = ACTIONS(514),
    [sym_integer] = ACTIONS(514),
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_section] = ACTIONS(514),
    [sym_double] = ACTIONS(516),
    [anon_sym_PLUS_EQ] = ACTIONS(516),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_LT_LT_EQ] = ACTIONS(516),
    [anon_sym_while] = ACTIONS(514),
    [anon_sym_SLASH_EQ] = ACTIONS(516),
    [anon_sym_publish] = ACTIONS(514),
    [anon_sym_AMP_EQ] = ACTIONS(516),
    [anon_sym_i64] = ACTIONS(514),
    [sym_long] = ACTIONS(516),
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_COLON_EQ] = ACTIONS(516),
    [sym_hex] = ACTIONS(516),
    [anon_sym_switch] = ACTIONS(514),
    [anon_sym_PERCENT_EQ] = ACTIONS(516),
    [anon_sym_PIPE_EQ] = ACTIONS(516),
    [anon_sym_u8] = ACTIONS(514),
    [sym_float] = ACTIONS(516),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_return] = ACTIONS(514),
    [sym_binary] = ACTIONS(516),
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(516),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_i16] = ACTIONS(514),
  },
  [141] = {
    [sym__literal] = STATE(179),
    [sym_group_expression] = STATE(179),
    [sym_string] = STATE(179),
    [sym_character] = STATE(179),
    [sym__collection_or_value] = STATE(179),
    [sym_collection] = STATE(179),
    [sym__number] = STATE(179),
    [sym__value] = STATE(179),
    [sym_identifier] = ACTIONS(339),
    [sym_double] = ACTIONS(341),
    [sym_float] = ACTIONS(341),
    [sym_oct] = ACTIONS(339),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(339),
    [sym_binary] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(341),
    [sym_integer] = ACTIONS(339),
  },
  [142] = {
    [sym_static_assignment] = STATE(226),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_DOT] = ACTIONS(518),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_COLON_EQ] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
  },
  [143] = {
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [144] = {
    [sym__literal] = STATE(228),
    [sym_group_expression] = STATE(228),
    [sym__number] = STATE(228),
    [sym_string] = STATE(228),
    [sym_character] = STATE(228),
    [sym__value] = STATE(228),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(522),
    [sym_identifier] = ACTIONS(524),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(522),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(522),
    [sym_hex] = ACTIONS(522),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(524),
    [sym_integer] = ACTIONS(524),
    [sym_binary] = ACTIONS(522),
  },
  [145] = {
    [sym_binary_op] = STATE(229),
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
  },
  [146] = {
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
    [anon_sym_PLUS_PLUS] = ACTIONS(528),
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
    [anon_sym_DASH_DASH] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [anon_sym_u16] = ACTIONS(526),
    [anon_sym_u64] = ACTIONS(526),
    [anon_sym_i16] = ACTIONS(526),
  },
  [147] = {
    [anon_sym_RPAREN] = ACTIONS(530),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [148] = {
    [sym__comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(532),
    [anon_sym_LPAREN] = ACTIONS(532),
    [sym_long] = ACTIONS(534),
    [sym_double] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [sym_oct] = ACTIONS(532),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [sym_float] = ACTIONS(534),
    [sym_hex] = ACTIONS(534),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(532),
    [sym_integer] = ACTIONS(532),
    [sym_binary] = ACTIONS(534),
  },
  [149] = {
    [sym__literal] = STATE(231),
    [sym_group_expression] = STATE(231),
    [sym__number] = STATE(231),
    [sym_string] = STATE(231),
    [sym_character] = STATE(231),
    [sym__value] = STATE(231),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(536),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(538),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(536),
    [sym_hex] = ACTIONS(536),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(538),
    [sym_integer] = ACTIONS(538),
    [sym_binary] = ACTIONS(536),
  },
  [150] = {
    [sym_integer] = ACTIONS(442),
    [anon_sym_section] = ACTIONS(442),
    [anon_sym_s8] = ACTIONS(442),
    [sym_double] = ACTIONS(540),
    [anon_sym_method] = ACTIONS(442),
    [anon_sym_end] = ACTIONS(442),
    [anon_sym_while] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(540),
    [anon_sym_publish] = ACTIONS(442),
    [sym_readonly] = ACTIONS(442),
    [anon_sym_i64] = ACTIONS(442),
    [anon_sym_f32] = ACTIONS(442),
    [anon_sym_LPAREN] = ACTIONS(442),
    [sym_null] = ACTIONS(442),
    [sym_long] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(442),
    [sym_hex] = ACTIONS(540),
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_switch] = ACTIONS(442),
    [sym_identifier] = ACTIONS(442),
    [anon_sym_private] = ACTIONS(442),
    [anon_sym_u8] = ACTIONS(442),
    [anon_sym_f64] = ACTIONS(442),
    [anon_sym_u32] = ACTIONS(442),
    [anon_sym_SQUOTE] = ACTIONS(540),
    [anon_sym_i8] = ACTIONS(442),
    [anon_sym_return] = ACTIONS(442),
    [anon_sym_goto] = ACTIONS(442),
    [sym_oct] = ACTIONS(442),
    [anon_sym_s32] = ACTIONS(442),
    [sym_float] = ACTIONS(540),
    [sym_binary] = ACTIONS(540),
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_function] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(540),
    [anon_sym_if] = ACTIONS(442),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(442),
    [anon_sym_u16] = ACTIONS(442),
    [anon_sym_i32] = ACTIONS(442),
    [anon_sym_u64] = ACTIONS(442),
    [anon_sym_enum] = ACTIONS(442),
    [anon_sym_i16] = ACTIONS(442),
  },
  [151] = {
    [sym__space] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
  },
  [152] = {
    [anon_sym_DOT] = ACTIONS(544),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(544),
    [sym__comment] = ACTIONS(3),
  },
  [153] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(233),
    [anon_sym_RPAREN] = ACTIONS(546),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(548),
    [sym__comment] = ACTIONS(3),
  },
  [154] = {
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [155] = {
    [sym_integer] = ACTIONS(552),
    [anon_sym_section] = ACTIONS(552),
    [anon_sym_s8] = ACTIONS(552),
    [sym_double] = ACTIONS(554),
    [anon_sym_method] = ACTIONS(552),
    [anon_sym_end] = ACTIONS(552),
    [anon_sym_while] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_publish] = ACTIONS(552),
    [sym_readonly] = ACTIONS(552),
    [anon_sym_i64] = ACTIONS(552),
    [anon_sym_f32] = ACTIONS(552),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_null] = ACTIONS(552),
    [sym_long] = ACTIONS(554),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(552),
    [sym_hex] = ACTIONS(554),
    [anon_sym_module] = ACTIONS(552),
    [anon_sym_switch] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [anon_sym_private] = ACTIONS(552),
    [anon_sym_u8] = ACTIONS(552),
    [anon_sym_f64] = ACTIONS(552),
    [anon_sym_u32] = ACTIONS(552),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_i8] = ACTIONS(552),
    [anon_sym_return] = ACTIONS(552),
    [anon_sym_goto] = ACTIONS(552),
    [sym_oct] = ACTIONS(552),
    [anon_sym_s32] = ACTIONS(552),
    [sym_float] = ACTIONS(554),
    [sym_binary] = ACTIONS(554),
    [ts_builtin_sym_end] = ACTIONS(554),
    [anon_sym_function] = ACTIONS(552),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [anon_sym_if] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(552),
    [anon_sym_u16] = ACTIONS(552),
    [anon_sym_i32] = ACTIONS(552),
    [anon_sym_u64] = ACTIONS(552),
    [anon_sym_enum] = ACTIONS(552),
    [anon_sym_i16] = ACTIONS(552),
  },
  [156] = {
    [aux_sym_compound_macro_repeat1] = STATE(156),
    [sym__space] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_LPAREN] = ACTIONS(542),
    [sym__comment] = ACTIONS(3),
  },
  [157] = {
    [anon_sym_DOT] = ACTIONS(559),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [158] = {
    [anon_sym_DOT] = ACTIONS(561),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(561),
  },
  [159] = {
    [anon_sym_RPAREN] = ACTIONS(563),
    [anon_sym_STAR] = ACTIONS(565),
    [anon_sym_EQ_EQ] = ACTIONS(563),
    [anon_sym_PLUS_EQ] = ACTIONS(563),
    [anon_sym_PIPE_PIPE] = ACTIONS(563),
    [anon_sym_SLASH] = ACTIONS(565),
    [anon_sym_LT] = ACTIONS(565),
    [anon_sym_LT_LT_EQ] = ACTIONS(563),
    [anon_sym_SLASH_EQ] = ACTIONS(563),
    [anon_sym_GT_GT_EQ] = ACTIONS(563),
    [anon_sym_AMP_EQ] = ACTIONS(563),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(563),
    [anon_sym_DASH] = ACTIONS(565),
    [anon_sym_AMP_AMP] = ACTIONS(563),
    [anon_sym_LT_EQ] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(565),
    [anon_sym_PERCENT] = ACTIONS(565),
    [anon_sym_GT_EQ] = ACTIONS(563),
    [anon_sym_CARET] = ACTIONS(565),
    [anon_sym_PLUS_PLUS] = ACTIONS(563),
    [anon_sym_PERCENT_EQ] = ACTIONS(563),
    [anon_sym_DASH_EQ] = ACTIONS(563),
    [anon_sym_PIPE_EQ] = ACTIONS(563),
    [anon_sym_COMMA] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(563),
    [anon_sym_AMP] = ACTIONS(565),
    [anon_sym_BANG_EQ] = ACTIONS(563),
    [anon_sym_LT_LT] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(565),
    [anon_sym_DASH_DASH] = ACTIONS(565),
    [anon_sym_RBRACE] = ACTIONS(563),
    [anon_sym_STAR_EQ] = ACTIONS(563),
    [anon_sym_CARET_EQ] = ACTIONS(563),
    [sym__space] = ACTIONS(3),
  },
  [160] = {
    [anon_sym_s8] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_end] = ACTIONS(315),
    [sym_null] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(313),
    [sym_readonly] = ACTIONS(315),
    [anon_sym_f32] = ACTIONS(315),
    [anon_sym_s16] = ACTIONS(315),
    [anon_sym_module] = ACTIONS(315),
    [sym_identifier] = ACTIONS(315),
    [anon_sym_DASH_EQ] = ACTIONS(313),
    [anon_sym_private] = ACTIONS(315),
    [anon_sym_f64] = ACTIONS(315),
    [sym_oct] = ACTIONS(315),
    [anon_sym_goto] = ACTIONS(315),
    [anon_sym_s32] = ACTIONS(315),
    [anon_sym_function] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(315),
    [anon_sym_STAR_EQ] = ACTIONS(313),
    [anon_sym_protected] = ACTIONS(315),
    [anon_sym_i32] = ACTIONS(315),
    [sym_integer] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_section] = ACTIONS(315),
    [sym_double] = ACTIONS(313),
    [anon_sym_PLUS_EQ] = ACTIONS(313),
    [anon_sym_method] = ACTIONS(315),
    [anon_sym_LT_LT_EQ] = ACTIONS(313),
    [anon_sym_while] = ACTIONS(315),
    [anon_sym_SLASH_EQ] = ACTIONS(313),
    [anon_sym_publish] = ACTIONS(315),
    [anon_sym_AMP_EQ] = ACTIONS(313),
    [anon_sym_i64] = ACTIONS(315),
    [sym_long] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_COLON_EQ] = ACTIONS(313),
    [sym_hex] = ACTIONS(313),
    [anon_sym_PLUS_PLUS] = ACTIONS(313),
    [anon_sym_switch] = ACTIONS(315),
    [anon_sym_PERCENT_EQ] = ACTIONS(313),
    [anon_sym_PIPE_EQ] = ACTIONS(313),
    [anon_sym_u8] = ACTIONS(315),
    [sym_float] = ACTIONS(313),
    [anon_sym_u32] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_i8] = ACTIONS(315),
    [anon_sym_return] = ACTIONS(315),
    [sym_binary] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_DASH_DASH] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(313),
    [anon_sym_u16] = ACTIONS(315),
    [anon_sym_u64] = ACTIONS(315),
    [anon_sym_i16] = ACTIONS(315),
  },
  [161] = {
    [aux_sym_string_repeat1] = STATE(164),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(317),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(567),
  },
  [162] = {
    [anon_sym_SQUOTE] = ACTIONS(569),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_STAR] = ACTIONS(573),
    [anon_sym_EQ_EQ] = ACTIONS(571),
    [anon_sym_PLUS_EQ] = ACTIONS(571),
    [anon_sym_PIPE_PIPE] = ACTIONS(571),
    [anon_sym_SLASH] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(573),
    [anon_sym_LT_LT_EQ] = ACTIONS(571),
    [anon_sym_SLASH_EQ] = ACTIONS(571),
    [anon_sym_GT_GT_EQ] = ACTIONS(571),
    [anon_sym_AMP_EQ] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(573),
    [anon_sym_AMP_AMP] = ACTIONS(571),
    [anon_sym_LT_EQ] = ACTIONS(571),
    [anon_sym_GT_GT] = ACTIONS(573),
    [anon_sym_PERCENT] = ACTIONS(573),
    [anon_sym_GT_EQ] = ACTIONS(571),
    [anon_sym_CARET] = ACTIONS(573),
    [anon_sym_PLUS_PLUS] = ACTIONS(571),
    [anon_sym_PERCENT_EQ] = ACTIONS(571),
    [anon_sym_DASH_EQ] = ACTIONS(571),
    [anon_sym_PIPE_EQ] = ACTIONS(571),
    [anon_sym_COMMA] = ACTIONS(571),
    [anon_sym_DOT] = ACTIONS(571),
    [anon_sym_AMP] = ACTIONS(573),
    [anon_sym_BANG_EQ] = ACTIONS(571),
    [anon_sym_LT_LT] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_DASH_DASH] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_STAR_EQ] = ACTIONS(571),
    [anon_sym_CARET_EQ] = ACTIONS(571),
    [sym__space] = ACTIONS(3),
  },
  [164] = {
    [aux_sym_string_repeat1] = STATE(164),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(575),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(578),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(580),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [166] = {
    [sym__literal] = STATE(239),
    [sym_group_expression] = STATE(239),
    [sym__number] = STATE(239),
    [sym_string] = STATE(239),
    [sym_character] = STATE(239),
    [sym__value] = STATE(239),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(582),
    [sym_identifier] = ACTIONS(584),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(582),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(584),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(582),
    [sym_hex] = ACTIONS(582),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(584),
    [sym_integer] = ACTIONS(584),
    [sym_binary] = ACTIONS(582),
  },
  [167] = {
    [sym_binary_op] = STATE(240),
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(580),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
  },
  [168] = {
    [anon_sym_section] = ACTIONS(586),
    [anon_sym_s8] = ACTIONS(586),
    [sym_double] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(588),
    [anon_sym_end] = ACTIONS(586),
    [anon_sym_while] = ACTIONS(586),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(586),
    [sym_readonly] = ACTIONS(586),
    [anon_sym_i64] = ACTIONS(586),
    [anon_sym_f32] = ACTIONS(586),
    [sym_null] = ACTIONS(586),
    [anon_sym_LPAREN] = ACTIONS(586),
    [sym_long] = ACTIONS(588),
    [anon_sym_s16] = ACTIONS(586),
    [sym_hex] = ACTIONS(588),
    [anon_sym_switch] = ACTIONS(586),
    [sym_identifier] = ACTIONS(586),
    [anon_sym_private] = ACTIONS(586),
    [anon_sym_u8] = ACTIONS(586),
    [anon_sym_f64] = ACTIONS(586),
    [anon_sym_u32] = ACTIONS(586),
    [anon_sym_DOT] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(588),
    [anon_sym_i8] = ACTIONS(586),
    [anon_sym_return] = ACTIONS(586),
    [anon_sym_goto] = ACTIONS(586),
    [sym_oct] = ACTIONS(586),
    [anon_sym_s32] = ACTIONS(586),
    [sym_float] = ACTIONS(588),
    [sym_binary] = ACTIONS(588),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_if] = ACTIONS(586),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(586),
    [anon_sym_u16] = ACTIONS(586),
    [anon_sym_i32] = ACTIONS(586),
    [anon_sym_u64] = ACTIONS(586),
    [sym_integer] = ACTIONS(586),
    [anon_sym_i16] = ACTIONS(586),
  },
  [169] = {
    [sym_integer] = ACTIONS(590),
    [anon_sym_section] = ACTIONS(590),
    [anon_sym_s8] = ACTIONS(590),
    [sym_double] = ACTIONS(592),
    [anon_sym_method] = ACTIONS(590),
    [anon_sym_end] = ACTIONS(590),
    [anon_sym_while] = ACTIONS(590),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_publish] = ACTIONS(590),
    [sym_readonly] = ACTIONS(590),
    [anon_sym_i64] = ACTIONS(590),
    [anon_sym_f32] = ACTIONS(590),
    [anon_sym_LPAREN] = ACTIONS(590),
    [sym_null] = ACTIONS(590),
    [sym_long] = ACTIONS(592),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(590),
    [sym_hex] = ACTIONS(592),
    [anon_sym_module] = ACTIONS(590),
    [anon_sym_switch] = ACTIONS(590),
    [sym_identifier] = ACTIONS(590),
    [anon_sym_private] = ACTIONS(590),
    [anon_sym_u8] = ACTIONS(590),
    [anon_sym_f64] = ACTIONS(590),
    [anon_sym_u32] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_i8] = ACTIONS(590),
    [anon_sym_return] = ACTIONS(590),
    [anon_sym_goto] = ACTIONS(590),
    [sym_oct] = ACTIONS(590),
    [anon_sym_s32] = ACTIONS(590),
    [sym_float] = ACTIONS(592),
    [sym_binary] = ACTIONS(592),
    [ts_builtin_sym_end] = ACTIONS(592),
    [anon_sym_function] = ACTIONS(590),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_if] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(590),
    [anon_sym_u16] = ACTIONS(590),
    [anon_sym_i32] = ACTIONS(590),
    [anon_sym_u64] = ACTIONS(590),
    [anon_sym_enum] = ACTIONS(590),
    [anon_sym_i16] = ACTIONS(590),
  },
  [170] = {
    [anon_sym_DOT] = ACTIONS(594),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [171] = {
    [sym_static_assignment] = STATE(242),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_COLON_EQ] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
  },
  [172] = {
    [aux_sym_enum_definition_repeat1] = STATE(245),
    [anon_sym_RPAREN] = ACTIONS(598),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__comment] = ACTIONS(3),
  },
  [173] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(602),
    [sym__comment] = ACTIONS(3),
  },
  [174] = {
    [sym_parameter_list] = STATE(248),
    [sym_return_list] = STATE(249),
    [anon_sym_DOT] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [175] = {
    [sym__literal] = STATE(252),
    [sym_group_expression] = STATE(252),
    [sym_assignment_expression] = STATE(250),
    [sym_string] = STATE(252),
    [sym_character] = STATE(252),
    [sym_unary_op] = STATE(251),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(252),
    [sym__value] = STATE(252),
    [sym_identifier] = ACTIONS(606),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_double] = ACTIONS(608),
    [sym_float] = ACTIONS(608),
    [sym_oct] = ACTIONS(606),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(103),
    [sym_null] = ACTIONS(606),
    [sym_binary] = ACTIONS(608),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(608),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(608),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(606),
  },
  [176] = {
    [aux_sym_string_repeat1] = STATE(254),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(610),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(612),
  },
  [177] = {
    [sym__escape_sequence] = STATE(255),
    [anon_sym_BSLASH0] = ACTIONS(614),
    [anon_sym_BSLASHr] = ACTIONS(614),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(614),
    [anon_sym_BSLASHa] = ACTIONS(614),
    [anon_sym_BSLASHt] = ACTIONS(614),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(614),
    [anon_sym_BSLASHv] = ACTIONS(614),
    [anon_sym_BSLASHn] = ACTIONS(614),
    [aux_sym_character_token1] = ACTIONS(616),
    [anon_sym_BSLASHf] = ACTIONS(614),
  },
  [178] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(64),
    [sym__assignment_or_collection_or_value] = STATE(64),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(256),
    [sym__collection_or_value] = STATE(66),
    [sym_collection] = STATE(66),
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
  [179] = {
    [sym_integer] = ACTIONS(618),
    [anon_sym_section] = ACTIONS(618),
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_RPAREN] = ACTIONS(620),
    [anon_sym_s8] = ACTIONS(618),
    [sym_double] = ACTIONS(620),
    [anon_sym_method] = ACTIONS(618),
    [anon_sym_end] = ACTIONS(618),
    [anon_sym_while] = ACTIONS(618),
    [anon_sym_LBRACE] = ACTIONS(620),
    [anon_sym_publish] = ACTIONS(618),
    [sym_readonly] = ACTIONS(618),
    [anon_sym_i64] = ACTIONS(618),
    [anon_sym_f32] = ACTIONS(618),
    [anon_sym_LPAREN] = ACTIONS(618),
    [sym_null] = ACTIONS(618),
    [sym_long] = ACTIONS(620),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(618),
    [sym_hex] = ACTIONS(620),
    [anon_sym_module] = ACTIONS(618),
    [anon_sym_switch] = ACTIONS(618),
    [sym_identifier] = ACTIONS(618),
    [anon_sym_COMMA] = ACTIONS(620),
    [anon_sym_private] = ACTIONS(618),
    [anon_sym_u8] = ACTIONS(618),
    [anon_sym_f64] = ACTIONS(618),
    [anon_sym_u32] = ACTIONS(618),
    [anon_sym_SQUOTE] = ACTIONS(620),
    [anon_sym_i8] = ACTIONS(618),
    [anon_sym_return] = ACTIONS(618),
    [anon_sym_goto] = ACTIONS(618),
    [sym_oct] = ACTIONS(618),
    [anon_sym_s32] = ACTIONS(618),
    [sym_float] = ACTIONS(620),
    [sym_binary] = ACTIONS(620),
    [anon_sym_DOT] = ACTIONS(620),
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_function] = ACTIONS(618),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [anon_sym_if] = ACTIONS(618),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(618),
    [anon_sym_u16] = ACTIONS(618),
    [anon_sym_i32] = ACTIONS(618),
    [anon_sym_u64] = ACTIONS(618),
    [anon_sym_enum] = ACTIONS(618),
    [anon_sym_i16] = ACTIONS(618),
  },
  [180] = {
    [sym_primitive_type] = STATE(259),
    [sym_type] = STATE(257),
    [sym__comma_list_types] = STATE(258),
    [sym__base_type] = STATE(259),
    [sym_identifier] = ACTIONS(622),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(624),
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
  [181] = {
    [sym_integer] = ACTIONS(626),
    [anon_sym_section] = ACTIONS(626),
    [anon_sym_s8] = ACTIONS(626),
    [sym_double] = ACTIONS(628),
    [anon_sym_method] = ACTIONS(626),
    [anon_sym_end] = ACTIONS(626),
    [anon_sym_while] = ACTIONS(626),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_publish] = ACTIONS(626),
    [sym_readonly] = ACTIONS(626),
    [anon_sym_i64] = ACTIONS(626),
    [anon_sym_f32] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [sym_null] = ACTIONS(626),
    [sym_long] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(626),
    [sym_hex] = ACTIONS(628),
    [anon_sym_module] = ACTIONS(626),
    [anon_sym_switch] = ACTIONS(626),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_u8] = ACTIONS(626),
    [anon_sym_f64] = ACTIONS(626),
    [anon_sym_u32] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [anon_sym_i8] = ACTIONS(626),
    [anon_sym_return] = ACTIONS(626),
    [anon_sym_goto] = ACTIONS(626),
    [sym_oct] = ACTIONS(626),
    [anon_sym_s32] = ACTIONS(626),
    [sym_float] = ACTIONS(628),
    [sym_binary] = ACTIONS(628),
    [ts_builtin_sym_end] = ACTIONS(628),
    [anon_sym_function] = ACTIONS(626),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_u16] = ACTIONS(626),
    [anon_sym_i32] = ACTIONS(626),
    [anon_sym_u64] = ACTIONS(626),
    [anon_sym_enum] = ACTIONS(626),
    [anon_sym_i16] = ACTIONS(626),
  },
  [182] = {
    [sym_return_list] = STATE(249),
    [anon_sym_DOT] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [183] = {
    [anon_sym_DOT] = ACTIONS(604),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [184] = {
    [sym__literal] = STATE(260),
    [sym_group_expression] = STATE(260),
    [sym_string] = STATE(260),
    [sym_character] = STATE(260),
    [sym__collection_or_value] = STATE(260),
    [sym_collection] = STATE(260),
    [sym__number] = STATE(260),
    [sym__value] = STATE(260),
    [sym_identifier] = ACTIONS(630),
    [sym_double] = ACTIONS(632),
    [sym_float] = ACTIONS(632),
    [sym_oct] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [sym_null] = ACTIONS(630),
    [sym_binary] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(632),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(632),
    [sym_integer] = ACTIONS(630),
  },
  [185] = {
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_s8] = ACTIONS(634),
    [anon_sym_method] = ACTIONS(634),
    [anon_sym_end] = ACTIONS(634),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(634),
    [sym_readonly] = ACTIONS(634),
    [anon_sym_i64] = ACTIONS(634),
    [anon_sym_f32] = ACTIONS(634),
    [anon_sym_s16] = ACTIONS(634),
    [sym_is_declare] = ACTIONS(634),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_private] = ACTIONS(634),
    [anon_sym_u8] = ACTIONS(634),
    [anon_sym_f64] = ACTIONS(634),
    [anon_sym_u32] = ACTIONS(634),
    [anon_sym_DOT] = ACTIONS(518),
    [anon_sym_i8] = ACTIONS(634),
    [anon_sym_s32] = ACTIONS(634),
    [sym_is_external] = ACTIONS(634),
    [anon_sym_function] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(634),
    [anon_sym_u16] = ACTIONS(634),
    [anon_sym_i32] = ACTIONS(634),
    [anon_sym_u64] = ACTIONS(634),
    [anon_sym_enum] = ACTIONS(634),
    [anon_sym_i16] = ACTIONS(634),
  },
  [186] = {
    [anon_sym_LBRACK] = ACTIONS(636),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(638),
    [anon_sym_DOT] = ACTIONS(636),
    [anon_sym_COMMA] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(640),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [188] = {
    [sym_array] = STATE(188),
    [aux_sym_type_repeat2] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(642),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(645),
    [sym__comment] = ACTIONS(3),
  },
  [189] = {
    [sym_array] = STATE(188),
    [aux_sym_type_repeat2] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(647),
    [sym__comment] = ACTIONS(3),
  },
  [190] = {
    [sym_pointer] = STATE(190),
    [aux_sym_type_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(649),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(651),
    [anon_sym_STAR] = ACTIONS(653),
    [sym__comment] = ACTIONS(3),
  },
  [191] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
  },
  [192] = {
    [sym_parameter_list] = STATE(264),
    [sym_return_list] = STATE(265),
    [anon_sym_DOT] = ACTIONS(658),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [193] = {
    [sym_static_assignment] = STATE(185),
    [sym_is_declare] = ACTIONS(660),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(660),
    [anon_sym_s8] = ACTIONS(660),
    [anon_sym_private] = ACTIONS(660),
    [anon_sym_u8] = ACTIONS(660),
    [anon_sym_f64] = ACTIONS(660),
    [anon_sym_u32] = ACTIONS(660),
    [anon_sym_i8] = ACTIONS(660),
    [anon_sym_method] = ACTIONS(660),
    [anon_sym_end] = ACTIONS(660),
    [anon_sym_s32] = ACTIONS(660),
    [anon_sym_publish] = ACTIONS(660),
    [sym_readonly] = ACTIONS(660),
    [anon_sym_i64] = ACTIONS(660),
    [anon_sym_f32] = ACTIONS(660),
    [sym_is_external] = ACTIONS(660),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(660),
    [anon_sym_COLON_EQ] = ACTIONS(662),
    [anon_sym_s16] = ACTIONS(660),
    [anon_sym_protected] = ACTIONS(660),
    [anon_sym_u16] = ACTIONS(660),
    [anon_sym_i32] = ACTIONS(660),
    [anon_sym_u64] = ACTIONS(660),
    [anon_sym_enum] = ACTIONS(660),
    [anon_sym_i16] = ACTIONS(660),
  },
  [194] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(267),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
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
  [195] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
  },
  [196] = {
    [sym_integer] = ACTIONS(552),
    [anon_sym_section] = ACTIONS(552),
    [anon_sym_s8] = ACTIONS(552),
    [sym_double] = ACTIONS(554),
    [anon_sym_method] = ACTIONS(552),
    [anon_sym_end] = ACTIONS(552),
    [anon_sym_while] = ACTIONS(552),
    [anon_sym_LBRACE] = ACTIONS(554),
    [anon_sym_publish] = ACTIONS(552),
    [sym_readonly] = ACTIONS(552),
    [anon_sym_i64] = ACTIONS(552),
    [anon_sym_f32] = ACTIONS(552),
    [anon_sym_LPAREN] = ACTIONS(552),
    [sym_null] = ACTIONS(552),
    [sym_long] = ACTIONS(554),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(552),
    [sym_is_declare] = ACTIONS(552),
    [sym_hex] = ACTIONS(554),
    [anon_sym_switch] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [anon_sym_private] = ACTIONS(552),
    [anon_sym_u8] = ACTIONS(552),
    [anon_sym_f64] = ACTIONS(552),
    [anon_sym_u32] = ACTIONS(552),
    [anon_sym_SQUOTE] = ACTIONS(554),
    [anon_sym_i8] = ACTIONS(552),
    [anon_sym_return] = ACTIONS(552),
    [anon_sym_goto] = ACTIONS(552),
    [sym_oct] = ACTIONS(552),
    [anon_sym_s32] = ACTIONS(552),
    [sym_is_external] = ACTIONS(552),
    [sym_float] = ACTIONS(554),
    [sym_binary] = ACTIONS(554),
    [anon_sym_function] = ACTIONS(552),
    [anon_sym_DQUOTE] = ACTIONS(554),
    [anon_sym_if] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(552),
    [anon_sym_u16] = ACTIONS(552),
    [anon_sym_i32] = ACTIONS(552),
    [anon_sym_u64] = ACTIONS(552),
    [anon_sym_enum] = ACTIONS(552),
    [anon_sym_i16] = ACTIONS(552),
  },
  [197] = {
    [anon_sym_DOT] = ACTIONS(666),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [aux_sym_enum_definition_repeat1] = STATE(271),
    [anon_sym_RPAREN] = ACTIONS(668),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [anon_sym_section] = ACTIONS(626),
    [anon_sym_s8] = ACTIONS(626),
    [sym_double] = ACTIONS(628),
    [anon_sym_LBRACE] = ACTIONS(628),
    [anon_sym_end] = ACTIONS(626),
    [anon_sym_while] = ACTIONS(626),
    [sym_null] = ACTIONS(626),
    [anon_sym_publish] = ACTIONS(626),
    [sym_readonly] = ACTIONS(626),
    [anon_sym_i64] = ACTIONS(626),
    [anon_sym_f32] = ACTIONS(626),
    [anon_sym_LPAREN] = ACTIONS(626),
    [sym_long] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(626),
    [sym_hex] = ACTIONS(628),
    [anon_sym_switch] = ACTIONS(626),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_u8] = ACTIONS(626),
    [anon_sym_f64] = ACTIONS(626),
    [anon_sym_u32] = ACTIONS(626),
    [anon_sym_SQUOTE] = ACTIONS(628),
    [anon_sym_i8] = ACTIONS(626),
    [anon_sym_return] = ACTIONS(626),
    [anon_sym_goto] = ACTIONS(626),
    [sym_oct] = ACTIONS(626),
    [anon_sym_s32] = ACTIONS(626),
    [sym_float] = ACTIONS(628),
    [sym_binary] = ACTIONS(628),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [anon_sym_if] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_u16] = ACTIONS(626),
    [anon_sym_i32] = ACTIONS(626),
    [anon_sym_u64] = ACTIONS(626),
    [sym_integer] = ACTIONS(626),
    [anon_sym_i16] = ACTIONS(626),
  },
  [200] = {
    [sym_return_list] = STATE(273),
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [202] = {
    [sym_parameter_list] = STATE(274),
    [sym_return_list] = STATE(273),
    [anon_sym_DOT] = ACTIONS(670),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_module] = ACTIONS(672),
    [ts_builtin_sym_end] = ACTIONS(672),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [aux_sym_compound_macro_repeat1] = STATE(276),
    [sym_parameter_list] = STATE(277),
    [sym__space] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(674),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [sym_is_declare] = ACTIONS(676),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(676),
    [anon_sym_s8] = ACTIONS(676),
    [anon_sym_private] = ACTIONS(676),
    [anon_sym_u8] = ACTIONS(676),
    [anon_sym_f64] = ACTIONS(676),
    [anon_sym_u32] = ACTIONS(676),
    [anon_sym_i8] = ACTIONS(676),
    [anon_sym_method] = ACTIONS(676),
    [anon_sym_end] = ACTIONS(676),
    [anon_sym_s32] = ACTIONS(676),
    [anon_sym_publish] = ACTIONS(676),
    [sym_readonly] = ACTIONS(676),
    [anon_sym_i64] = ACTIONS(676),
    [anon_sym_f32] = ACTIONS(676),
    [sym_is_external] = ACTIONS(676),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(676),
    [anon_sym_s16] = ACTIONS(676),
    [anon_sym_protected] = ACTIONS(676),
    [anon_sym_u16] = ACTIONS(676),
    [anon_sym_i32] = ACTIONS(676),
    [anon_sym_u64] = ACTIONS(676),
    [anon_sym_enum] = ACTIONS(676),
    [anon_sym_i16] = ACTIONS(676),
  },
  [206] = {
    [sym_collection] = STATE(72),
    [sym_group_expression] = STATE(27),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(127),
    [sym_assignment_expression] = STATE(28),
    [sym_single_line_if_statement] = STATE(278),
    [sym_string] = STATE(37),
    [sym_while_statement_with_block] = STATE(129),
    [sym_character] = STATE(37),
    [sym__statement] = STATE(278),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__while_statement] = STATE(128),
    [sym__literal] = STATE(37),
    [sym__variable_statement] = STATE(129),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym__if_statement] = STATE(132),
    [sym__number] = STATE(37),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(21),
    [sym_null] = ACTIONS(31),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [207] = {
    [anon_sym_while] = ACTIONS(89),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_while] = STATE(279),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(492),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [209] = {
    [anon_sym_DOT] = ACTIONS(678),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_section] = ACTIONS(680),
    [anon_sym_s8] = ACTIONS(680),
    [sym_double] = ACTIONS(682),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_end] = ACTIONS(680),
    [anon_sym_while] = ACTIONS(680),
    [sym_null] = ACTIONS(680),
    [anon_sym_publish] = ACTIONS(680),
    [sym_readonly] = ACTIONS(680),
    [anon_sym_i64] = ACTIONS(680),
    [anon_sym_f32] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [sym_long] = ACTIONS(682),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(680),
    [sym_hex] = ACTIONS(682),
    [anon_sym_switch] = ACTIONS(680),
    [sym_identifier] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(680),
    [anon_sym_u8] = ACTIONS(680),
    [anon_sym_f64] = ACTIONS(680),
    [anon_sym_u32] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_i8] = ACTIONS(680),
    [anon_sym_return] = ACTIONS(680),
    [anon_sym_goto] = ACTIONS(680),
    [sym_oct] = ACTIONS(680),
    [anon_sym_s32] = ACTIONS(680),
    [sym_float] = ACTIONS(682),
    [sym_binary] = ACTIONS(682),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_if] = ACTIONS(680),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(680),
    [anon_sym_u16] = ACTIONS(680),
    [anon_sym_i32] = ACTIONS(680),
    [anon_sym_u64] = ACTIONS(680),
    [sym_integer] = ACTIONS(680),
    [anon_sym_i16] = ACTIONS(680),
  },
  [211] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(684),
    [anon_sym_s8] = ACTIONS(687),
    [sym_double] = ACTIONS(690),
    [anon_sym_LBRACE] = ACTIONS(693),
    [anon_sym_end] = ACTIONS(696),
    [anon_sym_while] = ACTIONS(698),
    [sym_null] = ACTIONS(701),
    [anon_sym_publish] = ACTIONS(704),
    [sym_readonly] = ACTIONS(707),
    [anon_sym_i64] = ACTIONS(687),
    [anon_sym_f32] = ACTIONS(687),
    [anon_sym_LPAREN] = ACTIONS(710),
    [sym_long] = ACTIONS(690),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(687),
    [sym_hex] = ACTIONS(690),
    [anon_sym_switch] = ACTIONS(713),
    [sym_identifier] = ACTIONS(716),
    [anon_sym_private] = ACTIONS(704),
    [anon_sym_u8] = ACTIONS(687),
    [anon_sym_f64] = ACTIONS(687),
    [anon_sym_u32] = ACTIONS(687),
    [anon_sym_SQUOTE] = ACTIONS(719),
    [anon_sym_i8] = ACTIONS(687),
    [anon_sym_return] = ACTIONS(722),
    [anon_sym_goto] = ACTIONS(725),
    [sym_oct] = ACTIONS(701),
    [anon_sym_s32] = ACTIONS(687),
    [sym_float] = ACTIONS(690),
    [sym_binary] = ACTIONS(690),
    [anon_sym_DQUOTE] = ACTIONS(728),
    [anon_sym_if] = ACTIONS(731),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(704),
    [anon_sym_u16] = ACTIONS(687),
    [anon_sym_i32] = ACTIONS(687),
    [anon_sym_u64] = ACTIONS(687),
    [sym_integer] = ACTIONS(701),
    [anon_sym_i16] = ACTIONS(687),
  },
  [212] = {
    [sym_is_declare] = ACTIONS(734),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(734),
    [anon_sym_s8] = ACTIONS(734),
    [anon_sym_private] = ACTIONS(734),
    [anon_sym_u8] = ACTIONS(734),
    [anon_sym_f64] = ACTIONS(734),
    [anon_sym_u32] = ACTIONS(734),
    [anon_sym_i8] = ACTIONS(734),
    [anon_sym_method] = ACTIONS(734),
    [anon_sym_end] = ACTIONS(734),
    [anon_sym_s32] = ACTIONS(734),
    [anon_sym_publish] = ACTIONS(734),
    [sym_readonly] = ACTIONS(734),
    [anon_sym_i64] = ACTIONS(734),
    [anon_sym_f32] = ACTIONS(734),
    [sym_is_external] = ACTIONS(734),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(734),
    [anon_sym_s16] = ACTIONS(734),
    [anon_sym_protected] = ACTIONS(734),
    [anon_sym_u16] = ACTIONS(734),
    [anon_sym_i32] = ACTIONS(734),
    [anon_sym_u64] = ACTIONS(734),
    [anon_sym_enum] = ACTIONS(734),
    [anon_sym_i16] = ACTIONS(734),
  },
  [213] = {
    [anon_sym_if] = ACTIONS(85),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym_end_if] = STATE(280),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(500),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [215] = {
    [anon_sym_DOT] = ACTIONS(736),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_DOT] = ACTIONS(738),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [sym_group_expression] = STATE(282),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(91),
  },
  [218] = {
    [sym_end_switch] = STATE(284),
    [anon_sym_end] = ACTIONS(740),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_end_case] = STATE(286),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(287),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(287),
    [sym_single_line_if_statement] = STATE(287),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(742),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [220] = {
    [sym_default_statement_with_block] = STATE(288),
    [sym_case_statement_with_block] = STATE(289),
    [sym__case_statement] = STATE(219),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(289),
    [sym__default_statement] = STATE(221),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(502),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(504),
  },
  [221] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym_end_default] = STATE(291),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(292),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(292),
    [sym_single_line_if_statement] = STATE(292),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(744),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [222] = {
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
  [223] = {
    [anon_sym_DOT] = ACTIONS(748),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(750),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(750),
    [sym__comment] = ACTIONS(3),
  },
  [225] = {
    [aux_sym__comma_list_assignment_or_collection_or_value_repeat1] = STATE(225),
    [anon_sym_RBRACE] = ACTIONS(750),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(752),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_s8] = ACTIONS(757),
    [anon_sym_method] = ACTIONS(757),
    [anon_sym_end] = ACTIONS(757),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(757),
    [sym_readonly] = ACTIONS(757),
    [anon_sym_i64] = ACTIONS(757),
    [anon_sym_f32] = ACTIONS(757),
    [anon_sym_s16] = ACTIONS(757),
    [sym_is_declare] = ACTIONS(757),
    [sym_identifier] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_private] = ACTIONS(757),
    [anon_sym_u8] = ACTIONS(757),
    [anon_sym_f64] = ACTIONS(757),
    [anon_sym_u32] = ACTIONS(757),
    [anon_sym_DOT] = ACTIONS(755),
    [anon_sym_i8] = ACTIONS(757),
    [anon_sym_s32] = ACTIONS(757),
    [sym_is_external] = ACTIONS(757),
    [anon_sym_function] = ACTIONS(757),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(757),
    [anon_sym_u16] = ACTIONS(757),
    [anon_sym_i32] = ACTIONS(757),
    [anon_sym_u64] = ACTIONS(757),
    [anon_sym_enum] = ACTIONS(757),
    [anon_sym_i16] = ACTIONS(757),
  },
  [227] = {
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [anon_sym_PLUS_EQ] = ACTIONS(528),
    [anon_sym_PIPE_PIPE] = ACTIONS(528),
    [anon_sym_SLASH] = ACTIONS(526),
    [anon_sym_LT] = ACTIONS(526),
    [anon_sym_LT_LT_EQ] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [anon_sym_GT_GT_EQ] = ACTIONS(528),
    [anon_sym_AMP_EQ] = ACTIONS(528),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(528),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_AMP_AMP] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [anon_sym_GT_GT] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_PLUS_PLUS] = ACTIONS(528),
    [anon_sym_PERCENT_EQ] = ACTIONS(528),
    [anon_sym_DASH_EQ] = ACTIONS(528),
    [anon_sym_PIPE_EQ] = ACTIONS(528),
    [anon_sym_AMP] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(528),
    [anon_sym_LT_LT] = ACTIONS(526),
    [anon_sym_PIPE] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_DASH_DASH] = ACTIONS(526),
    [anon_sym_STAR_EQ] = ACTIONS(528),
    [anon_sym_CARET_EQ] = ACTIONS(528),
    [sym__space] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [sym__literal] = STATE(295),
    [sym_group_expression] = STATE(295),
    [sym__number] = STATE(295),
    [sym_string] = STATE(295),
    [sym_character] = STATE(295),
    [sym__value] = STATE(295),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(761),
    [sym_identifier] = ACTIONS(763),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(761),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(763),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(761),
    [sym_hex] = ACTIONS(761),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(763),
    [sym_integer] = ACTIONS(763),
    [sym_binary] = ACTIONS(761),
  },
  [230] = {
    [anon_sym_s8] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(767),
    [anon_sym_end] = ACTIONS(765),
    [sym_null] = ACTIONS(765),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(767),
    [sym_readonly] = ACTIONS(765),
    [anon_sym_f32] = ACTIONS(765),
    [anon_sym_s16] = ACTIONS(765),
    [anon_sym_module] = ACTIONS(765),
    [sym_identifier] = ACTIONS(765),
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_DASH_EQ] = ACTIONS(767),
    [anon_sym_private] = ACTIONS(765),
    [anon_sym_f64] = ACTIONS(765),
    [sym_oct] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_goto] = ACTIONS(765),
    [anon_sym_s32] = ACTIONS(765),
    [anon_sym_function] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(767),
    [anon_sym_if] = ACTIONS(765),
    [anon_sym_STAR_EQ] = ACTIONS(767),
    [anon_sym_protected] = ACTIONS(765),
    [anon_sym_i32] = ACTIONS(765),
    [sym_integer] = ACTIONS(765),
    [anon_sym_enum] = ACTIONS(765),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_section] = ACTIONS(765),
    [sym_double] = ACTIONS(767),
    [anon_sym_PLUS_EQ] = ACTIONS(767),
    [anon_sym_method] = ACTIONS(765),
    [anon_sym_LT_LT_EQ] = ACTIONS(767),
    [anon_sym_while] = ACTIONS(765),
    [anon_sym_SLASH_EQ] = ACTIONS(767),
    [anon_sym_publish] = ACTIONS(765),
    [anon_sym_AMP_EQ] = ACTIONS(767),
    [anon_sym_i64] = ACTIONS(765),
    [sym_long] = ACTIONS(767),
    [anon_sym_LPAREN] = ACTIONS(765),
    [anon_sym_COLON_EQ] = ACTIONS(767),
    [sym_hex] = ACTIONS(767),
    [anon_sym_PLUS_PLUS] = ACTIONS(767),
    [anon_sym_switch] = ACTIONS(765),
    [anon_sym_PERCENT_EQ] = ACTIONS(767),
    [anon_sym_PIPE_EQ] = ACTIONS(767),
    [anon_sym_u8] = ACTIONS(765),
    [sym_float] = ACTIONS(767),
    [anon_sym_u32] = ACTIONS(765),
    [anon_sym_SQUOTE] = ACTIONS(767),
    [anon_sym_i8] = ACTIONS(765),
    [anon_sym_return] = ACTIONS(765),
    [sym_binary] = ACTIONS(767),
    [ts_builtin_sym_end] = ACTIONS(767),
    [anon_sym_DASH_DASH] = ACTIONS(765),
    [anon_sym_RBRACE] = ACTIONS(767),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(767),
    [anon_sym_u16] = ACTIONS(765),
    [anon_sym_u64] = ACTIONS(765),
    [anon_sym_i16] = ACTIONS(765),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(769),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [232] = {
    [sym_primitive_type] = STATE(38),
    [sym_type] = STATE(35),
    [sym_access_control] = STATE(127),
    [sym_variable_definition] = STATE(297),
    [sym__base_type] = STATE(38),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_s8] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_s32] = ACTIONS(11),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym__space] = ACTIONS(3),
    [anon_sym_i16] = ACTIONS(11),
  },
  [233] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(548),
    [sym__comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_DOT] = ACTIONS(773),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(773),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [sym_integer] = ACTIONS(775),
    [anon_sym_section] = ACTIONS(775),
    [anon_sym_s8] = ACTIONS(775),
    [sym_double] = ACTIONS(777),
    [anon_sym_method] = ACTIONS(775),
    [anon_sym_end] = ACTIONS(775),
    [anon_sym_while] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_publish] = ACTIONS(775),
    [sym_readonly] = ACTIONS(775),
    [anon_sym_i64] = ACTIONS(775),
    [anon_sym_f32] = ACTIONS(775),
    [anon_sym_LPAREN] = ACTIONS(775),
    [sym_null] = ACTIONS(775),
    [sym_long] = ACTIONS(777),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(775),
    [sym_hex] = ACTIONS(777),
    [anon_sym_module] = ACTIONS(775),
    [anon_sym_switch] = ACTIONS(775),
    [sym_identifier] = ACTIONS(775),
    [anon_sym_private] = ACTIONS(775),
    [anon_sym_u8] = ACTIONS(775),
    [anon_sym_f64] = ACTIONS(775),
    [anon_sym_u32] = ACTIONS(775),
    [anon_sym_SQUOTE] = ACTIONS(777),
    [anon_sym_i8] = ACTIONS(775),
    [anon_sym_return] = ACTIONS(775),
    [anon_sym_goto] = ACTIONS(775),
    [sym_oct] = ACTIONS(775),
    [anon_sym_s32] = ACTIONS(775),
    [sym_float] = ACTIONS(777),
    [sym_binary] = ACTIONS(777),
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_function] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [anon_sym_if] = ACTIONS(775),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(775),
    [anon_sym_u16] = ACTIONS(775),
    [anon_sym_i32] = ACTIONS(775),
    [anon_sym_u64] = ACTIONS(775),
    [anon_sym_enum] = ACTIONS(775),
    [anon_sym_i16] = ACTIONS(775),
  },
  [236] = {
    [anon_sym_s8] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_end] = ACTIONS(573),
    [sym_null] = ACTIONS(573),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(571),
    [sym_readonly] = ACTIONS(573),
    [anon_sym_f32] = ACTIONS(573),
    [anon_sym_s16] = ACTIONS(573),
    [anon_sym_module] = ACTIONS(573),
    [sym_identifier] = ACTIONS(573),
    [anon_sym_DASH_EQ] = ACTIONS(571),
    [anon_sym_private] = ACTIONS(573),
    [anon_sym_f64] = ACTIONS(573),
    [sym_oct] = ACTIONS(573),
    [anon_sym_goto] = ACTIONS(573),
    [anon_sym_s32] = ACTIONS(573),
    [anon_sym_function] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_if] = ACTIONS(573),
    [anon_sym_STAR_EQ] = ACTIONS(571),
    [anon_sym_protected] = ACTIONS(573),
    [anon_sym_i32] = ACTIONS(573),
    [sym_integer] = ACTIONS(573),
    [anon_sym_enum] = ACTIONS(573),
    [anon_sym_section] = ACTIONS(573),
    [sym_double] = ACTIONS(571),
    [anon_sym_PLUS_EQ] = ACTIONS(571),
    [anon_sym_method] = ACTIONS(573),
    [anon_sym_LT_LT_EQ] = ACTIONS(571),
    [anon_sym_while] = ACTIONS(573),
    [anon_sym_SLASH_EQ] = ACTIONS(571),
    [anon_sym_publish] = ACTIONS(573),
    [anon_sym_AMP_EQ] = ACTIONS(571),
    [anon_sym_i64] = ACTIONS(573),
    [sym_long] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_COLON_EQ] = ACTIONS(571),
    [sym_hex] = ACTIONS(571),
    [anon_sym_PLUS_PLUS] = ACTIONS(571),
    [anon_sym_switch] = ACTIONS(573),
    [anon_sym_PERCENT_EQ] = ACTIONS(571),
    [anon_sym_PIPE_EQ] = ACTIONS(571),
    [anon_sym_u8] = ACTIONS(573),
    [sym_float] = ACTIONS(571),
    [anon_sym_u32] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_i8] = ACTIONS(573),
    [anon_sym_return] = ACTIONS(573),
    [sym_binary] = ACTIONS(571),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_DASH_DASH] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(571),
    [anon_sym_u16] = ACTIONS(573),
    [anon_sym_u64] = ACTIONS(573),
    [anon_sym_i16] = ACTIONS(573),
  },
  [237] = {
    [anon_sym_s8] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_end] = ACTIONS(565),
    [sym_null] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(563),
    [sym_readonly] = ACTIONS(565),
    [anon_sym_f32] = ACTIONS(565),
    [anon_sym_s16] = ACTIONS(565),
    [anon_sym_module] = ACTIONS(565),
    [sym_identifier] = ACTIONS(565),
    [anon_sym_DASH_EQ] = ACTIONS(563),
    [anon_sym_private] = ACTIONS(565),
    [anon_sym_f64] = ACTIONS(565),
    [sym_oct] = ACTIONS(565),
    [anon_sym_goto] = ACTIONS(565),
    [anon_sym_s32] = ACTIONS(565),
    [anon_sym_function] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(565),
    [anon_sym_STAR_EQ] = ACTIONS(563),
    [anon_sym_protected] = ACTIONS(565),
    [anon_sym_i32] = ACTIONS(565),
    [sym_integer] = ACTIONS(565),
    [anon_sym_enum] = ACTIONS(565),
    [anon_sym_section] = ACTIONS(565),
    [sym_double] = ACTIONS(563),
    [anon_sym_PLUS_EQ] = ACTIONS(563),
    [anon_sym_method] = ACTIONS(565),
    [anon_sym_LT_LT_EQ] = ACTIONS(563),
    [anon_sym_while] = ACTIONS(565),
    [anon_sym_SLASH_EQ] = ACTIONS(563),
    [anon_sym_publish] = ACTIONS(565),
    [anon_sym_AMP_EQ] = ACTIONS(563),
    [anon_sym_i64] = ACTIONS(565),
    [sym_long] = ACTIONS(563),
    [anon_sym_LPAREN] = ACTIONS(565),
    [anon_sym_COLON_EQ] = ACTIONS(563),
    [sym_hex] = ACTIONS(563),
    [anon_sym_PLUS_PLUS] = ACTIONS(563),
    [anon_sym_switch] = ACTIONS(565),
    [anon_sym_PERCENT_EQ] = ACTIONS(563),
    [anon_sym_PIPE_EQ] = ACTIONS(563),
    [anon_sym_u8] = ACTIONS(565),
    [sym_float] = ACTIONS(563),
    [anon_sym_u32] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_i8] = ACTIONS(565),
    [anon_sym_return] = ACTIONS(565),
    [sym_binary] = ACTIONS(563),
    [ts_builtin_sym_end] = ACTIONS(563),
    [anon_sym_DASH_DASH] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(563),
    [anon_sym_u16] = ACTIONS(565),
    [anon_sym_u64] = ACTIONS(565),
    [anon_sym_i16] = ACTIONS(565),
  },
  [238] = {
    [anon_sym_section] = ACTIONS(526),
    [anon_sym_s8] = ACTIONS(526),
    [sym_double] = ACTIONS(528),
    [anon_sym_LBRACE] = ACTIONS(528),
    [anon_sym_while] = ACTIONS(526),
    [sym_null] = ACTIONS(526),
    [anon_sym_publish] = ACTIONS(526),
    [sym_readonly] = ACTIONS(526),
    [anon_sym_i64] = ACTIONS(526),
    [anon_sym_f32] = ACTIONS(526),
    [anon_sym_LPAREN] = ACTIONS(526),
    [sym_long] = ACTIONS(528),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(526),
    [sym_hex] = ACTIONS(528),
    [anon_sym_switch] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [anon_sym_private] = ACTIONS(526),
    [anon_sym_u8] = ACTIONS(526),
    [anon_sym_f64] = ACTIONS(526),
    [anon_sym_u32] = ACTIONS(526),
    [anon_sym_DOT] = ACTIONS(528),
    [anon_sym_i8] = ACTIONS(526),
    [anon_sym_return] = ACTIONS(526),
    [anon_sym_goto] = ACTIONS(526),
    [anon_sym_SQUOTE] = ACTIONS(528),
    [anon_sym_s32] = ACTIONS(526),
    [sym_oct] = ACTIONS(526),
    [sym_float] = ACTIONS(528),
    [sym_binary] = ACTIONS(528),
    [anon_sym_DQUOTE] = ACTIONS(528),
    [anon_sym_if] = ACTIONS(526),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(526),
    [anon_sym_u16] = ACTIONS(526),
    [anon_sym_i32] = ACTIONS(526),
    [anon_sym_u64] = ACTIONS(526),
    [sym_integer] = ACTIONS(526),
    [anon_sym_i16] = ACTIONS(526),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(779),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [sym__literal] = STATE(300),
    [sym_group_expression] = STATE(300),
    [sym__number] = STATE(300),
    [sym_string] = STATE(300),
    [sym_character] = STATE(300),
    [sym__value] = STATE(300),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(781),
    [sym_identifier] = ACTIONS(783),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(781),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(783),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(781),
    [sym_hex] = ACTIONS(781),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(783),
    [sym_integer] = ACTIONS(783),
    [sym_binary] = ACTIONS(781),
  },
  [241] = {
    [sym_integer] = ACTIONS(680),
    [anon_sym_section] = ACTIONS(680),
    [anon_sym_s8] = ACTIONS(680),
    [sym_double] = ACTIONS(682),
    [anon_sym_method] = ACTIONS(680),
    [anon_sym_end] = ACTIONS(680),
    [anon_sym_while] = ACTIONS(680),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_publish] = ACTIONS(680),
    [sym_readonly] = ACTIONS(680),
    [anon_sym_i64] = ACTIONS(680),
    [anon_sym_f32] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(680),
    [sym_null] = ACTIONS(680),
    [sym_long] = ACTIONS(682),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(680),
    [sym_hex] = ACTIONS(682),
    [anon_sym_module] = ACTIONS(680),
    [anon_sym_switch] = ACTIONS(680),
    [sym_identifier] = ACTIONS(680),
    [anon_sym_private] = ACTIONS(680),
    [anon_sym_u8] = ACTIONS(680),
    [anon_sym_f64] = ACTIONS(680),
    [anon_sym_u32] = ACTIONS(680),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [anon_sym_i8] = ACTIONS(680),
    [anon_sym_return] = ACTIONS(680),
    [anon_sym_goto] = ACTIONS(680),
    [sym_oct] = ACTIONS(680),
    [anon_sym_s32] = ACTIONS(680),
    [sym_float] = ACTIONS(682),
    [sym_binary] = ACTIONS(682),
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_function] = ACTIONS(680),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_if] = ACTIONS(680),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(680),
    [anon_sym_u16] = ACTIONS(680),
    [anon_sym_i32] = ACTIONS(680),
    [anon_sym_u64] = ACTIONS(680),
    [anon_sym_enum] = ACTIONS(680),
    [anon_sym_i16] = ACTIONS(680),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(785),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(785),
    [sym__comment] = ACTIONS(3),
  },
  [243] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(787),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [sym__enum_element] = STATE(302),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [aux_sym_enum_definition_repeat1] = STATE(304),
    [anon_sym_RPAREN] = ACTIONS(789),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [sym_static_assignment] = STATE(305),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_DOT] = ACTIONS(755),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_COLON_EQ] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
  },
  [247] = {
    [sym_integer] = ACTIONS(791),
    [anon_sym_section] = ACTIONS(791),
    [anon_sym_s8] = ACTIONS(791),
    [sym_double] = ACTIONS(793),
    [anon_sym_method] = ACTIONS(791),
    [anon_sym_end] = ACTIONS(791),
    [anon_sym_while] = ACTIONS(791),
    [anon_sym_LBRACE] = ACTIONS(793),
    [anon_sym_publish] = ACTIONS(791),
    [sym_readonly] = ACTIONS(791),
    [anon_sym_i64] = ACTIONS(791),
    [anon_sym_f32] = ACTIONS(791),
    [anon_sym_LPAREN] = ACTIONS(791),
    [sym_null] = ACTIONS(791),
    [sym_long] = ACTIONS(793),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(791),
    [sym_hex] = ACTIONS(793),
    [anon_sym_module] = ACTIONS(791),
    [anon_sym_switch] = ACTIONS(791),
    [sym_identifier] = ACTIONS(791),
    [anon_sym_private] = ACTIONS(791),
    [anon_sym_u8] = ACTIONS(791),
    [anon_sym_f64] = ACTIONS(791),
    [anon_sym_u32] = ACTIONS(791),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [anon_sym_i8] = ACTIONS(791),
    [anon_sym_return] = ACTIONS(791),
    [anon_sym_goto] = ACTIONS(791),
    [sym_oct] = ACTIONS(791),
    [anon_sym_s32] = ACTIONS(791),
    [sym_float] = ACTIONS(793),
    [sym_binary] = ACTIONS(793),
    [ts_builtin_sym_end] = ACTIONS(793),
    [anon_sym_function] = ACTIONS(791),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [anon_sym_if] = ACTIONS(791),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(791),
    [anon_sym_u16] = ACTIONS(791),
    [anon_sym_i32] = ACTIONS(791),
    [anon_sym_u64] = ACTIONS(791),
    [anon_sym_enum] = ACTIONS(791),
    [anon_sym_i16] = ACTIONS(791),
  },
  [248] = {
    [sym_return_list] = STATE(307),
    [anon_sym_DOT] = ACTIONS(795),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [249] = {
    [anon_sym_DOT] = ACTIONS(795),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [250] = {
    [anon_sym_RPAREN] = ACTIONS(797),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [251] = {
    [sym__literal] = STATE(309),
    [sym_group_expression] = STATE(309),
    [sym__number] = STATE(309),
    [sym_string] = STATE(309),
    [sym_character] = STATE(309),
    [sym__value] = STATE(309),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(799),
    [sym_identifier] = ACTIONS(801),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(799),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(801),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(799),
    [sym_hex] = ACTIONS(799),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(801),
    [sym_integer] = ACTIONS(801),
    [sym_binary] = ACTIONS(799),
  },
  [252] = {
    [sym_binary_op] = STATE(310),
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(797),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
  },
  [253] = {
    [sym_integer] = ACTIONS(315),
    [anon_sym_section] = ACTIONS(315),
    [anon_sym_s8] = ACTIONS(315),
    [sym_double] = ACTIONS(313),
    [anon_sym_method] = ACTIONS(315),
    [anon_sym_end] = ACTIONS(315),
    [anon_sym_while] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_publish] = ACTIONS(315),
    [sym_readonly] = ACTIONS(315),
    [anon_sym_i64] = ACTIONS(315),
    [anon_sym_f32] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [sym_null] = ACTIONS(315),
    [sym_long] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(315),
    [sym_hex] = ACTIONS(313),
    [anon_sym_module] = ACTIONS(315),
    [anon_sym_switch] = ACTIONS(315),
    [sym_identifier] = ACTIONS(315),
    [anon_sym_private] = ACTIONS(315),
    [anon_sym_u8] = ACTIONS(315),
    [anon_sym_f64] = ACTIONS(315),
    [anon_sym_u32] = ACTIONS(315),
    [anon_sym_SQUOTE] = ACTIONS(313),
    [anon_sym_i8] = ACTIONS(315),
    [anon_sym_return] = ACTIONS(315),
    [anon_sym_goto] = ACTIONS(315),
    [sym_oct] = ACTIONS(315),
    [anon_sym_s32] = ACTIONS(315),
    [sym_float] = ACTIONS(313),
    [sym_binary] = ACTIONS(313),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_function] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(313),
    [anon_sym_if] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(315),
    [anon_sym_u16] = ACTIONS(315),
    [anon_sym_i32] = ACTIONS(315),
    [anon_sym_u64] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_i16] = ACTIONS(315),
  },
  [254] = {
    [aux_sym_string_repeat1] = STATE(164),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(317),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(803),
  },
  [255] = {
    [anon_sym_SQUOTE] = ACTIONS(805),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_RBRACE] = ACTIONS(807),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [257] = {
    [aux_sym__comma_list_types_repeat1] = STATE(315),
    [anon_sym_DOT] = ACTIONS(809),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(811),
    [sym__comment] = ACTIONS(3),
  },
  [258] = {
    [anon_sym_DOT] = ACTIONS(813),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [259] = {
    [aux_sym_type_repeat2] = STATE(316),
    [sym_pointer] = STATE(317),
    [aux_sym_type_repeat1] = STATE(317),
    [sym_array] = STATE(316),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(815),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(815),
    [anon_sym_STAR] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(817),
    [anon_sym_s8] = ACTIONS(819),
    [anon_sym_method] = ACTIONS(819),
    [anon_sym_end] = ACTIONS(819),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(819),
    [sym_readonly] = ACTIONS(819),
    [anon_sym_i64] = ACTIONS(819),
    [anon_sym_f32] = ACTIONS(819),
    [anon_sym_s16] = ACTIONS(819),
    [sym_is_declare] = ACTIONS(819),
    [sym_identifier] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_private] = ACTIONS(819),
    [anon_sym_u8] = ACTIONS(819),
    [anon_sym_f64] = ACTIONS(819),
    [anon_sym_u32] = ACTIONS(819),
    [anon_sym_DOT] = ACTIONS(817),
    [anon_sym_i8] = ACTIONS(819),
    [anon_sym_s32] = ACTIONS(819),
    [sym_is_external] = ACTIONS(819),
    [anon_sym_function] = ACTIONS(819),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(819),
    [anon_sym_u16] = ACTIONS(819),
    [anon_sym_i32] = ACTIONS(819),
    [anon_sym_u64] = ACTIONS(819),
    [anon_sym_enum] = ACTIONS(819),
    [anon_sym_i16] = ACTIONS(819),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(821),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
    [sym__comment] = ACTIONS(3),
  },
  [262] = {
    [sym_static_assignment] = STATE(226),
    [sym_is_declare] = ACTIONS(634),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(634),
    [anon_sym_s8] = ACTIONS(634),
    [anon_sym_private] = ACTIONS(634),
    [anon_sym_u8] = ACTIONS(634),
    [anon_sym_f64] = ACTIONS(634),
    [anon_sym_u32] = ACTIONS(634),
    [anon_sym_i8] = ACTIONS(634),
    [anon_sym_method] = ACTIONS(634),
    [anon_sym_end] = ACTIONS(634),
    [anon_sym_s32] = ACTIONS(634),
    [anon_sym_publish] = ACTIONS(634),
    [sym_readonly] = ACTIONS(634),
    [anon_sym_i64] = ACTIONS(634),
    [anon_sym_f32] = ACTIONS(634),
    [sym_is_external] = ACTIONS(634),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(634),
    [anon_sym_COLON_EQ] = ACTIONS(662),
    [anon_sym_s16] = ACTIONS(634),
    [anon_sym_protected] = ACTIONS(634),
    [anon_sym_u16] = ACTIONS(634),
    [anon_sym_i32] = ACTIONS(634),
    [anon_sym_u64] = ACTIONS(634),
    [anon_sym_enum] = ACTIONS(634),
    [anon_sym_i16] = ACTIONS(634),
  },
  [263] = {
    [sym_is_declare] = ACTIONS(626),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(626),
    [anon_sym_s8] = ACTIONS(626),
    [anon_sym_private] = ACTIONS(626),
    [anon_sym_u8] = ACTIONS(626),
    [anon_sym_f64] = ACTIONS(626),
    [anon_sym_u32] = ACTIONS(626),
    [anon_sym_i8] = ACTIONS(626),
    [anon_sym_method] = ACTIONS(626),
    [anon_sym_end] = ACTIONS(626),
    [anon_sym_s32] = ACTIONS(626),
    [anon_sym_publish] = ACTIONS(626),
    [sym_readonly] = ACTIONS(626),
    [anon_sym_i64] = ACTIONS(626),
    [anon_sym_f32] = ACTIONS(626),
    [sym_is_external] = ACTIONS(626),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(626),
    [anon_sym_s16] = ACTIONS(626),
    [anon_sym_protected] = ACTIONS(626),
    [anon_sym_u16] = ACTIONS(626),
    [anon_sym_i32] = ACTIONS(626),
    [anon_sym_u64] = ACTIONS(626),
    [anon_sym_enum] = ACTIONS(626),
    [anon_sym_i16] = ACTIONS(626),
  },
  [264] = {
    [sym_return_list] = STATE(319),
    [anon_sym_DOT] = ACTIONS(825),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [265] = {
    [anon_sym_DOT] = ACTIONS(825),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [266] = {
    [sym__literal] = STATE(260),
    [sym_group_expression] = STATE(260),
    [sym_string] = STATE(260),
    [sym_character] = STATE(260),
    [sym__collection_or_value] = STATE(260),
    [sym_collection] = STATE(260),
    [sym__number] = STATE(260),
    [sym__value] = STATE(260),
    [sym_identifier] = ACTIONS(630),
    [sym_double] = ACTIONS(632),
    [sym_float] = ACTIONS(632),
    [sym_oct] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(827),
    [anon_sym_LBRACE] = ACTIONS(829),
    [sym_null] = ACTIONS(630),
    [sym_binary] = ACTIONS(632),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(632),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_DQUOTE] = ACTIONS(833),
    [sym__space] = ACTIONS(3),
    [sym_hex] = ACTIONS(632),
    [sym_integer] = ACTIONS(630),
  },
  [267] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(835),
    [sym__comment] = ACTIONS(3),
  },
  [268] = {
    [sym_parameter_list] = STATE(325),
    [sym_return_list] = STATE(319),
    [anon_sym_DOT] = ACTIONS(825),
    [sym__space] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [269] = {
    [sym_integer] = ACTIONS(775),
    [anon_sym_section] = ACTIONS(775),
    [anon_sym_s8] = ACTIONS(775),
    [sym_double] = ACTIONS(777),
    [anon_sym_method] = ACTIONS(775),
    [anon_sym_end] = ACTIONS(775),
    [anon_sym_while] = ACTIONS(775),
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_publish] = ACTIONS(775),
    [sym_readonly] = ACTIONS(775),
    [anon_sym_i64] = ACTIONS(775),
    [anon_sym_f32] = ACTIONS(775),
    [anon_sym_LPAREN] = ACTIONS(775),
    [sym_null] = ACTIONS(775),
    [sym_long] = ACTIONS(777),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(775),
    [sym_is_declare] = ACTIONS(775),
    [sym_hex] = ACTIONS(777),
    [anon_sym_switch] = ACTIONS(775),
    [sym_identifier] = ACTIONS(775),
    [anon_sym_private] = ACTIONS(775),
    [anon_sym_u8] = ACTIONS(775),
    [anon_sym_f64] = ACTIONS(775),
    [anon_sym_u32] = ACTIONS(775),
    [anon_sym_SQUOTE] = ACTIONS(777),
    [anon_sym_i8] = ACTIONS(775),
    [anon_sym_return] = ACTIONS(775),
    [anon_sym_goto] = ACTIONS(775),
    [sym_oct] = ACTIONS(775),
    [anon_sym_s32] = ACTIONS(775),
    [sym_is_external] = ACTIONS(775),
    [sym_float] = ACTIONS(777),
    [sym_binary] = ACTIONS(777),
    [anon_sym_function] = ACTIONS(775),
    [anon_sym_DQUOTE] = ACTIONS(777),
    [anon_sym_if] = ACTIONS(775),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(775),
    [anon_sym_u16] = ACTIONS(775),
    [anon_sym_i32] = ACTIONS(775),
    [anon_sym_u64] = ACTIONS(775),
    [anon_sym_enum] = ACTIONS(775),
    [anon_sym_i16] = ACTIONS(775),
  },
  [270] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(837),
    [sym__comment] = ACTIONS(3),
  },
  [271] = {
    [aux_sym_enum_definition_repeat1] = STATE(304),
    [anon_sym_RPAREN] = ACTIONS(839),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(600),
    [sym__comment] = ACTIONS(3),
  },
  [272] = {
    [anon_sym_section] = ACTIONS(791),
    [anon_sym_s8] = ACTIONS(791),
    [sym_double] = ACTIONS(793),
    [anon_sym_LBRACE] = ACTIONS(793),
    [anon_sym_end] = ACTIONS(791),
    [anon_sym_while] = ACTIONS(791),
    [sym_null] = ACTIONS(791),
    [anon_sym_publish] = ACTIONS(791),
    [sym_readonly] = ACTIONS(791),
    [anon_sym_i64] = ACTIONS(791),
    [anon_sym_f32] = ACTIONS(791),
    [anon_sym_LPAREN] = ACTIONS(791),
    [sym_long] = ACTIONS(793),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(791),
    [sym_hex] = ACTIONS(793),
    [anon_sym_switch] = ACTIONS(791),
    [sym_identifier] = ACTIONS(791),
    [anon_sym_private] = ACTIONS(791),
    [anon_sym_u8] = ACTIONS(791),
    [anon_sym_f64] = ACTIONS(791),
    [anon_sym_u32] = ACTIONS(791),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [anon_sym_i8] = ACTIONS(791),
    [anon_sym_return] = ACTIONS(791),
    [anon_sym_goto] = ACTIONS(791),
    [sym_oct] = ACTIONS(791),
    [anon_sym_s32] = ACTIONS(791),
    [sym_float] = ACTIONS(793),
    [sym_binary] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [anon_sym_if] = ACTIONS(791),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(791),
    [anon_sym_u16] = ACTIONS(791),
    [anon_sym_i32] = ACTIONS(791),
    [anon_sym_u64] = ACTIONS(791),
    [sym_integer] = ACTIONS(791),
    [anon_sym_i16] = ACTIONS(791),
  },
  [273] = {
    [anon_sym_DOT] = ACTIONS(841),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [274] = {
    [sym_return_list] = STATE(329),
    [anon_sym_DOT] = ACTIONS(841),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [275] = {
    [sym_is_declare] = ACTIONS(285),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(285),
    [anon_sym_s8] = ACTIONS(285),
    [anon_sym_private] = ACTIONS(285),
    [anon_sym_u8] = ACTIONS(285),
    [anon_sym_f64] = ACTIONS(285),
    [anon_sym_u32] = ACTIONS(285),
    [anon_sym_i8] = ACTIONS(285),
    [anon_sym_method] = ACTIONS(285),
    [anon_sym_end] = ACTIONS(285),
    [anon_sym_s32] = ACTIONS(285),
    [anon_sym_publish] = ACTIONS(285),
    [sym_readonly] = ACTIONS(285),
    [anon_sym_i64] = ACTIONS(285),
    [anon_sym_f32] = ACTIONS(285),
    [sym_is_external] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(285),
    [anon_sym_s16] = ACTIONS(285),
    [anon_sym_protected] = ACTIONS(285),
    [anon_sym_u16] = ACTIONS(285),
    [anon_sym_i32] = ACTIONS(285),
    [anon_sym_u64] = ACTIONS(285),
    [anon_sym_enum] = ACTIONS(285),
    [anon_sym_i16] = ACTIONS(285),
  },
  [276] = {
    [aux_sym_compound_macro_repeat1] = STATE(156),
    [sym_parameter_list] = STATE(331),
    [sym__space] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(843),
    [anon_sym_LPAREN] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [277] = {
    [anon_sym_DOT] = ACTIONS(843),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [278] = {
    [anon_sym_section] = ACTIONS(590),
    [anon_sym_s8] = ACTIONS(590),
    [sym_double] = ACTIONS(592),
    [anon_sym_LBRACE] = ACTIONS(592),
    [anon_sym_end] = ACTIONS(590),
    [anon_sym_while] = ACTIONS(590),
    [sym_null] = ACTIONS(590),
    [anon_sym_publish] = ACTIONS(590),
    [sym_readonly] = ACTIONS(590),
    [anon_sym_i64] = ACTIONS(590),
    [anon_sym_f32] = ACTIONS(590),
    [anon_sym_LPAREN] = ACTIONS(590),
    [sym_long] = ACTIONS(592),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(590),
    [sym_hex] = ACTIONS(592),
    [anon_sym_switch] = ACTIONS(590),
    [sym_identifier] = ACTIONS(590),
    [anon_sym_private] = ACTIONS(590),
    [anon_sym_u8] = ACTIONS(590),
    [anon_sym_f64] = ACTIONS(590),
    [anon_sym_u32] = ACTIONS(590),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_i8] = ACTIONS(590),
    [anon_sym_return] = ACTIONS(590),
    [anon_sym_goto] = ACTIONS(590),
    [sym_oct] = ACTIONS(590),
    [anon_sym_s32] = ACTIONS(590),
    [sym_float] = ACTIONS(592),
    [sym_binary] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [anon_sym_if] = ACTIONS(590),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(590),
    [anon_sym_u16] = ACTIONS(590),
    [anon_sym_i32] = ACTIONS(590),
    [anon_sym_u64] = ACTIONS(590),
    [sym_integer] = ACTIONS(590),
    [anon_sym_i16] = ACTIONS(590),
  },
  [279] = {
    [anon_sym_DOT] = ACTIONS(845),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [280] = {
    [anon_sym_DOT] = ACTIONS(847),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [281] = {
    [anon_sym_section] = ACTIONS(849),
    [anon_sym_s8] = ACTIONS(849),
    [sym_double] = ACTIONS(851),
    [anon_sym_LBRACE] = ACTIONS(851),
    [anon_sym_end] = ACTIONS(849),
    [anon_sym_while] = ACTIONS(849),
    [sym_null] = ACTIONS(849),
    [anon_sym_publish] = ACTIONS(849),
    [sym_readonly] = ACTIONS(849),
    [anon_sym_i64] = ACTIONS(849),
    [anon_sym_f32] = ACTIONS(849),
    [anon_sym_LPAREN] = ACTIONS(849),
    [sym_long] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(849),
    [sym_hex] = ACTIONS(851),
    [anon_sym_switch] = ACTIONS(849),
    [sym_identifier] = ACTIONS(849),
    [anon_sym_private] = ACTIONS(849),
    [anon_sym_u8] = ACTIONS(849),
    [anon_sym_f64] = ACTIONS(849),
    [anon_sym_u32] = ACTIONS(849),
    [anon_sym_SQUOTE] = ACTIONS(851),
    [anon_sym_i8] = ACTIONS(849),
    [anon_sym_return] = ACTIONS(849),
    [anon_sym_goto] = ACTIONS(849),
    [sym_oct] = ACTIONS(849),
    [anon_sym_s32] = ACTIONS(849),
    [sym_float] = ACTIONS(851),
    [sym_binary] = ACTIONS(851),
    [anon_sym_DQUOTE] = ACTIONS(851),
    [anon_sym_if] = ACTIONS(849),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(849),
    [anon_sym_u16] = ACTIONS(849),
    [anon_sym_i32] = ACTIONS(849),
    [anon_sym_u64] = ACTIONS(849),
    [sym_integer] = ACTIONS(849),
    [anon_sym_i16] = ACTIONS(849),
  },
  [282] = {
    [anon_sym_DOT] = ACTIONS(853),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [283] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_switch] = ACTIONS(855),
    [sym__comment] = ACTIONS(3),
  },
  [284] = {
    [anon_sym_DOT] = ACTIONS(857),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [285] = {
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(83),
  },
  [286] = {
    [anon_sym_DOT] = ACTIONS(859),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [287] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_end_case] = STATE(335),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(742),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [288] = {
    [sym_end_switch] = STATE(336),
    [anon_sym_end] = ACTIONS(740),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [289] = {
    [sym__case_statement] = STATE(219),
    [sym_case_statement_with_block] = STATE(289),
    [aux_sym_switch_statement_with_block_repeat1] = STATE(289),
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(861),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(863),
  },
  [290] = {
    [anon_sym_default] = ACTIONS(79),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [anon_sym_DOT] = ACTIONS(866),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [292] = {
    [sym_group_expression] = STATE(27),
    [sym_assignment_expression] = STATE(28),
    [sym_access_control] = STATE(127),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym_variable_definition] = STATE(129),
    [sym_goto_statement] = STATE(129),
    [sym_section_statement] = STATE(129),
    [sym__while_statement] = STATE(128),
    [sym__variable_statement] = STATE(129),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym_end_default] = STATE(338),
    [sym__number] = STATE(37),
    [aux_sym_compound_macro_block_repeat1] = STATE(211),
    [sym_type] = STATE(35),
    [sym__statement] = STATE(211),
    [sym_single_line_if_statement] = STATE(211),
    [sym_while_statement_with_block] = STATE(129),
    [sym_expression_statement] = STATE(129),
    [sym_return_statement] = STATE(129),
    [sym__value] = STATE(37),
    [sym__literal] = STATE(37),
    [sym__base_type] = STATE(38),
    [sym_primitive_type] = STATE(38),
    [sym__control_flow_statement] = STATE(129),
    [sym__if_statement] = STATE(132),
    [sym_if_statement_with_block] = STATE(129),
    [sym__switch_statement] = STATE(133),
    [sym_switch_statement_with_block] = STATE(129),
    [anon_sym_section] = ACTIONS(13),
    [anon_sym_s8] = ACTIONS(11),
    [sym_double] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_end] = ACTIONS(744),
    [sym_null] = ACTIONS(31),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_publish] = ACTIONS(231),
    [sym_readonly] = ACTIONS(27),
    [anon_sym_i64] = ACTIONS(11),
    [anon_sym_f32] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_long] = ACTIONS(15),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(11),
    [sym_hex] = ACTIONS(15),
    [sym_identifier] = ACTIONS(233),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_private] = ACTIONS(231),
    [anon_sym_u8] = ACTIONS(11),
    [anon_sym_f64] = ACTIONS(11),
    [anon_sym_u32] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_i8] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(225),
    [anon_sym_goto] = ACTIONS(43),
    [sym_oct] = ACTIONS(31),
    [anon_sym_s32] = ACTIONS(11),
    [sym_float] = ACTIONS(15),
    [sym_binary] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [anon_sym_if] = ACTIONS(227),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(231),
    [anon_sym_u16] = ACTIONS(11),
    [anon_sym_i32] = ACTIONS(11),
    [anon_sym_u64] = ACTIONS(11),
    [sym_integer] = ACTIONS(31),
    [anon_sym_i16] = ACTIONS(11),
  },
  [293] = {
    [sym_is_declare] = ACTIONS(868),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(868),
    [anon_sym_s8] = ACTIONS(868),
    [anon_sym_private] = ACTIONS(868),
    [anon_sym_u8] = ACTIONS(868),
    [anon_sym_f64] = ACTIONS(868),
    [anon_sym_u32] = ACTIONS(868),
    [anon_sym_i8] = ACTIONS(868),
    [anon_sym_method] = ACTIONS(868),
    [anon_sym_end] = ACTIONS(868),
    [anon_sym_s32] = ACTIONS(868),
    [anon_sym_publish] = ACTIONS(868),
    [sym_readonly] = ACTIONS(868),
    [anon_sym_i64] = ACTIONS(868),
    [anon_sym_f32] = ACTIONS(868),
    [sym_is_external] = ACTIONS(868),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(868),
    [anon_sym_s16] = ACTIONS(868),
    [anon_sym_protected] = ACTIONS(868),
    [anon_sym_u16] = ACTIONS(868),
    [anon_sym_i32] = ACTIONS(868),
    [anon_sym_u64] = ACTIONS(868),
    [anon_sym_enum] = ACTIONS(868),
    [anon_sym_i16] = ACTIONS(868),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_STAR] = ACTIONS(765),
    [anon_sym_EQ_EQ] = ACTIONS(767),
    [anon_sym_PLUS_EQ] = ACTIONS(767),
    [anon_sym_PIPE_PIPE] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(765),
    [anon_sym_LT] = ACTIONS(765),
    [anon_sym_LT_LT_EQ] = ACTIONS(767),
    [anon_sym_SLASH_EQ] = ACTIONS(767),
    [anon_sym_GT_GT_EQ] = ACTIONS(767),
    [anon_sym_AMP_EQ] = ACTIONS(767),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(767),
    [anon_sym_DASH] = ACTIONS(765),
    [anon_sym_AMP_AMP] = ACTIONS(767),
    [anon_sym_LT_EQ] = ACTIONS(767),
    [anon_sym_GT_GT] = ACTIONS(765),
    [anon_sym_PERCENT] = ACTIONS(765),
    [anon_sym_GT_EQ] = ACTIONS(767),
    [anon_sym_CARET] = ACTIONS(765),
    [anon_sym_PLUS_PLUS] = ACTIONS(767),
    [anon_sym_PERCENT_EQ] = ACTIONS(767),
    [anon_sym_DASH_EQ] = ACTIONS(767),
    [anon_sym_PIPE_EQ] = ACTIONS(767),
    [anon_sym_AMP] = ACTIONS(765),
    [anon_sym_BANG_EQ] = ACTIONS(767),
    [anon_sym_LT_LT] = ACTIONS(765),
    [anon_sym_PIPE] = ACTIONS(765),
    [anon_sym_PLUS] = ACTIONS(765),
    [anon_sym_GT] = ACTIONS(765),
    [anon_sym_DASH_DASH] = ACTIONS(765),
    [anon_sym_STAR_EQ] = ACTIONS(767),
    [anon_sym_CARET_EQ] = ACTIONS(767),
    [sym__space] = ACTIONS(3),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_s8] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_end] = ACTIONS(872),
    [sym_null] = ACTIONS(872),
    [sym__comment] = ACTIONS(3),
    [anon_sym_GT_GT_EQ] = ACTIONS(874),
    [sym_readonly] = ACTIONS(872),
    [anon_sym_f32] = ACTIONS(872),
    [anon_sym_s16] = ACTIONS(872),
    [anon_sym_module] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [anon_sym_COMMA] = ACTIONS(874),
    [anon_sym_DASH_EQ] = ACTIONS(874),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_f64] = ACTIONS(872),
    [sym_oct] = ACTIONS(872),
    [anon_sym_DOT] = ACTIONS(874),
    [anon_sym_goto] = ACTIONS(872),
    [anon_sym_s32] = ACTIONS(872),
    [anon_sym_function] = ACTIONS(872),
    [anon_sym_DQUOTE] = ACTIONS(874),
    [anon_sym_if] = ACTIONS(872),
    [anon_sym_STAR_EQ] = ACTIONS(874),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_i32] = ACTIONS(872),
    [sym_integer] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_section] = ACTIONS(872),
    [sym_double] = ACTIONS(874),
    [anon_sym_PLUS_EQ] = ACTIONS(874),
    [anon_sym_method] = ACTIONS(872),
    [anon_sym_LT_LT_EQ] = ACTIONS(874),
    [anon_sym_while] = ACTIONS(872),
    [anon_sym_SLASH_EQ] = ACTIONS(874),
    [anon_sym_publish] = ACTIONS(872),
    [anon_sym_AMP_EQ] = ACTIONS(874),
    [anon_sym_i64] = ACTIONS(872),
    [sym_long] = ACTIONS(874),
    [anon_sym_LPAREN] = ACTIONS(872),
    [anon_sym_COLON_EQ] = ACTIONS(874),
    [sym_hex] = ACTIONS(874),
    [anon_sym_PLUS_PLUS] = ACTIONS(874),
    [anon_sym_switch] = ACTIONS(872),
    [anon_sym_PERCENT_EQ] = ACTIONS(874),
    [anon_sym_PIPE_EQ] = ACTIONS(874),
    [anon_sym_u8] = ACTIONS(872),
    [sym_float] = ACTIONS(874),
    [anon_sym_u32] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(874),
    [anon_sym_i8] = ACTIONS(872),
    [anon_sym_return] = ACTIONS(872),
    [sym_binary] = ACTIONS(874),
    [ts_builtin_sym_end] = ACTIONS(874),
    [anon_sym_DASH_DASH] = ACTIONS(872),
    [anon_sym_RBRACE] = ACTIONS(874),
    [sym__space] = ACTIONS(3),
    [anon_sym_CARET_EQ] = ACTIONS(874),
    [anon_sym_u16] = ACTIONS(872),
    [anon_sym_u64] = ACTIONS(872),
    [anon_sym_i16] = ACTIONS(872),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(876),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(876),
    [sym__comment] = ACTIONS(3),
  },
  [298] = {
    [aux_sym__comma_list_variables_repeat1] = STATE(298),
    [anon_sym_RPAREN] = ACTIONS(876),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(878),
    [sym__comment] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_section] = ACTIONS(765),
    [anon_sym_s8] = ACTIONS(765),
    [sym_double] = ACTIONS(767),
    [anon_sym_LBRACE] = ACTIONS(767),
    [anon_sym_while] = ACTIONS(765),
    [sym_null] = ACTIONS(765),
    [anon_sym_publish] = ACTIONS(765),
    [sym_readonly] = ACTIONS(765),
    [anon_sym_i64] = ACTIONS(765),
    [anon_sym_f32] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(765),
    [sym_long] = ACTIONS(767),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(765),
    [sym_hex] = ACTIONS(767),
    [anon_sym_switch] = ACTIONS(765),
    [sym_identifier] = ACTIONS(765),
    [anon_sym_private] = ACTIONS(765),
    [anon_sym_u8] = ACTIONS(765),
    [anon_sym_f64] = ACTIONS(765),
    [anon_sym_u32] = ACTIONS(765),
    [anon_sym_DOT] = ACTIONS(767),
    [anon_sym_i8] = ACTIONS(765),
    [anon_sym_return] = ACTIONS(765),
    [anon_sym_goto] = ACTIONS(765),
    [anon_sym_SQUOTE] = ACTIONS(767),
    [anon_sym_s32] = ACTIONS(765),
    [sym_oct] = ACTIONS(765),
    [sym_float] = ACTIONS(767),
    [sym_binary] = ACTIONS(767),
    [anon_sym_DQUOTE] = ACTIONS(767),
    [anon_sym_if] = ACTIONS(765),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(765),
    [anon_sym_u16] = ACTIONS(765),
    [anon_sym_i32] = ACTIONS(765),
    [anon_sym_u64] = ACTIONS(765),
    [sym_integer] = ACTIONS(765),
    [anon_sym_i16] = ACTIONS(765),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(881),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_DOT] = ACTIONS(883),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [302] = {
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(885),
    [sym__comment] = ACTIONS(3),
  },
  [303] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(887),
    [sym__comment] = ACTIONS(3),
  },
  [304] = {
    [aux_sym_enum_definition_repeat1] = STATE(304),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(889),
    [sym__comment] = ACTIONS(3),
  },
  [305] = {
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_s8] = ACTIONS(894),
    [anon_sym_method] = ACTIONS(894),
    [anon_sym_end] = ACTIONS(894),
    [sym__comment] = ACTIONS(3),
    [anon_sym_publish] = ACTIONS(894),
    [sym_readonly] = ACTIONS(894),
    [anon_sym_i64] = ACTIONS(894),
    [anon_sym_f32] = ACTIONS(894),
    [anon_sym_s16] = ACTIONS(894),
    [sym_is_declare] = ACTIONS(894),
    [sym_identifier] = ACTIONS(894),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_private] = ACTIONS(894),
    [anon_sym_u8] = ACTIONS(894),
    [anon_sym_f64] = ACTIONS(894),
    [anon_sym_u32] = ACTIONS(894),
    [anon_sym_DOT] = ACTIONS(892),
    [anon_sym_i8] = ACTIONS(894),
    [anon_sym_s32] = ACTIONS(894),
    [sym_is_external] = ACTIONS(894),
    [anon_sym_function] = ACTIONS(894),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(894),
    [anon_sym_u16] = ACTIONS(894),
    [anon_sym_i32] = ACTIONS(894),
    [anon_sym_u64] = ACTIONS(894),
    [anon_sym_enum] = ACTIONS(894),
    [anon_sym_i16] = ACTIONS(894),
  },
  [306] = {
    [sym_integer] = ACTIONS(896),
    [anon_sym_section] = ACTIONS(896),
    [anon_sym_s8] = ACTIONS(896),
    [sym_double] = ACTIONS(898),
    [anon_sym_method] = ACTIONS(896),
    [anon_sym_end] = ACTIONS(896),
    [anon_sym_while] = ACTIONS(896),
    [anon_sym_LBRACE] = ACTIONS(898),
    [anon_sym_publish] = ACTIONS(896),
    [sym_readonly] = ACTIONS(896),
    [anon_sym_i64] = ACTIONS(896),
    [anon_sym_f32] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym_null] = ACTIONS(896),
    [sym_long] = ACTIONS(898),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(896),
    [sym_hex] = ACTIONS(898),
    [anon_sym_module] = ACTIONS(896),
    [anon_sym_switch] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [anon_sym_private] = ACTIONS(896),
    [anon_sym_u8] = ACTIONS(896),
    [anon_sym_f64] = ACTIONS(896),
    [anon_sym_u32] = ACTIONS(896),
    [anon_sym_SQUOTE] = ACTIONS(898),
    [anon_sym_i8] = ACTIONS(896),
    [anon_sym_return] = ACTIONS(896),
    [anon_sym_goto] = ACTIONS(896),
    [sym_oct] = ACTIONS(896),
    [anon_sym_s32] = ACTIONS(896),
    [sym_float] = ACTIONS(898),
    [sym_binary] = ACTIONS(898),
    [ts_builtin_sym_end] = ACTIONS(898),
    [anon_sym_function] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(898),
    [anon_sym_if] = ACTIONS(896),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(896),
    [anon_sym_u16] = ACTIONS(896),
    [anon_sym_i32] = ACTIONS(896),
    [anon_sym_u64] = ACTIONS(896),
    [anon_sym_enum] = ACTIONS(896),
    [anon_sym_i16] = ACTIONS(896),
  },
  [307] = {
    [anon_sym_DOT] = ACTIONS(900),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [308] = {
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
  [309] = {
    [anon_sym_RPAREN] = ACTIONS(902),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [310] = {
    [sym__literal] = STATE(345),
    [sym_group_expression] = STATE(345),
    [sym__number] = STATE(345),
    [sym_string] = STATE(345),
    [sym_character] = STATE(345),
    [sym__value] = STATE(345),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(904),
    [sym_identifier] = ACTIONS(906),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(904),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(906),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(904),
    [sym_hex] = ACTIONS(904),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(906),
    [sym_integer] = ACTIONS(906),
    [sym_binary] = ACTIONS(904),
  },
  [311] = {
    [sym_integer] = ACTIONS(573),
    [anon_sym_section] = ACTIONS(573),
    [anon_sym_s8] = ACTIONS(573),
    [sym_double] = ACTIONS(571),
    [anon_sym_method] = ACTIONS(573),
    [anon_sym_end] = ACTIONS(573),
    [anon_sym_while] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_publish] = ACTIONS(573),
    [sym_readonly] = ACTIONS(573),
    [anon_sym_i64] = ACTIONS(573),
    [anon_sym_f32] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [sym_null] = ACTIONS(573),
    [sym_long] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(573),
    [sym_hex] = ACTIONS(571),
    [anon_sym_module] = ACTIONS(573),
    [anon_sym_switch] = ACTIONS(573),
    [sym_identifier] = ACTIONS(573),
    [anon_sym_private] = ACTIONS(573),
    [anon_sym_u8] = ACTIONS(573),
    [anon_sym_f64] = ACTIONS(573),
    [anon_sym_u32] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_i8] = ACTIONS(573),
    [anon_sym_return] = ACTIONS(573),
    [anon_sym_goto] = ACTIONS(573),
    [sym_oct] = ACTIONS(573),
    [anon_sym_s32] = ACTIONS(573),
    [sym_float] = ACTIONS(571),
    [sym_binary] = ACTIONS(571),
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_function] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_if] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(573),
    [anon_sym_u16] = ACTIONS(573),
    [anon_sym_i32] = ACTIONS(573),
    [anon_sym_u64] = ACTIONS(573),
    [anon_sym_enum] = ACTIONS(573),
    [anon_sym_i16] = ACTIONS(573),
  },
  [312] = {
    [sym_integer] = ACTIONS(565),
    [anon_sym_section] = ACTIONS(565),
    [anon_sym_s8] = ACTIONS(565),
    [sym_double] = ACTIONS(563),
    [anon_sym_method] = ACTIONS(565),
    [anon_sym_end] = ACTIONS(565),
    [anon_sym_while] = ACTIONS(565),
    [anon_sym_LBRACE] = ACTIONS(563),
    [anon_sym_publish] = ACTIONS(565),
    [sym_readonly] = ACTIONS(565),
    [anon_sym_i64] = ACTIONS(565),
    [anon_sym_f32] = ACTIONS(565),
    [anon_sym_LPAREN] = ACTIONS(565),
    [sym_null] = ACTIONS(565),
    [sym_long] = ACTIONS(563),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(565),
    [sym_hex] = ACTIONS(563),
    [anon_sym_module] = ACTIONS(565),
    [anon_sym_switch] = ACTIONS(565),
    [sym_identifier] = ACTIONS(565),
    [anon_sym_private] = ACTIONS(565),
    [anon_sym_u8] = ACTIONS(565),
    [anon_sym_f64] = ACTIONS(565),
    [anon_sym_u32] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_i8] = ACTIONS(565),
    [anon_sym_return] = ACTIONS(565),
    [anon_sym_goto] = ACTIONS(565),
    [sym_oct] = ACTIONS(565),
    [anon_sym_s32] = ACTIONS(565),
    [sym_float] = ACTIONS(563),
    [sym_binary] = ACTIONS(563),
    [ts_builtin_sym_end] = ACTIONS(563),
    [anon_sym_function] = ACTIONS(565),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_if] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(565),
    [anon_sym_u16] = ACTIONS(565),
    [anon_sym_i32] = ACTIONS(565),
    [anon_sym_u64] = ACTIONS(565),
    [anon_sym_enum] = ACTIONS(565),
    [anon_sym_i16] = ACTIONS(565),
  },
  [313] = {
    [sym_integer] = ACTIONS(514),
    [anon_sym_section] = ACTIONS(514),
    [anon_sym_s8] = ACTIONS(514),
    [sym_double] = ACTIONS(516),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_end] = ACTIONS(514),
    [anon_sym_while] = ACTIONS(514),
    [anon_sym_LBRACE] = ACTIONS(516),
    [anon_sym_publish] = ACTIONS(514),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_i64] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [anon_sym_LPAREN] = ACTIONS(514),
    [sym_null] = ACTIONS(514),
    [sym_long] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(514),
    [sym_hex] = ACTIONS(516),
    [anon_sym_module] = ACTIONS(514),
    [anon_sym_switch] = ACTIONS(514),
    [sym_identifier] = ACTIONS(514),
    [anon_sym_private] = ACTIONS(514),
    [anon_sym_u8] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_SQUOTE] = ACTIONS(516),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_return] = ACTIONS(514),
    [anon_sym_goto] = ACTIONS(514),
    [sym_oct] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [sym_float] = ACTIONS(516),
    [sym_binary] = ACTIONS(516),
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_function] = ACTIONS(514),
    [anon_sym_DQUOTE] = ACTIONS(516),
    [anon_sym_if] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(514),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_i32] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_i16] = ACTIONS(514),
  },
  [314] = {
    [sym_primitive_type] = STATE(259),
    [sym_type] = STATE(346),
    [sym__base_type] = STATE(259),
    [sym_identifier] = ACTIONS(622),
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
  [315] = {
    [aux_sym__comma_list_types_repeat1] = STATE(347),
    [anon_sym_DOT] = ACTIONS(908),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(811),
    [sym__comment] = ACTIONS(3),
  },
  [316] = {
    [sym_array] = STATE(348),
    [aux_sym_type_repeat2] = STATE(348),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(910),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(910),
    [sym__comment] = ACTIONS(3),
  },
  [317] = {
    [aux_sym_type_repeat2] = STATE(349),
    [sym_pointer] = STATE(350),
    [aux_sym_type_repeat1] = STATE(350),
    [sym_array] = STATE(349),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(910),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_STAR] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
  },
  [318] = {
    [sym_is_declare] = ACTIONS(791),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(791),
    [anon_sym_s8] = ACTIONS(791),
    [anon_sym_private] = ACTIONS(791),
    [anon_sym_u8] = ACTIONS(791),
    [anon_sym_f64] = ACTIONS(791),
    [anon_sym_u32] = ACTIONS(791),
    [anon_sym_i8] = ACTIONS(791),
    [anon_sym_method] = ACTIONS(791),
    [anon_sym_end] = ACTIONS(791),
    [anon_sym_s32] = ACTIONS(791),
    [anon_sym_publish] = ACTIONS(791),
    [sym_readonly] = ACTIONS(791),
    [anon_sym_i64] = ACTIONS(791),
    [anon_sym_f32] = ACTIONS(791),
    [sym_is_external] = ACTIONS(791),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(791),
    [anon_sym_s16] = ACTIONS(791),
    [anon_sym_protected] = ACTIONS(791),
    [anon_sym_u16] = ACTIONS(791),
    [anon_sym_i32] = ACTIONS(791),
    [anon_sym_u64] = ACTIONS(791),
    [anon_sym_enum] = ACTIONS(791),
    [anon_sym_i16] = ACTIONS(791),
  },
  [319] = {
    [anon_sym_DOT] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [320] = {
    [sym__literal] = STATE(354),
    [sym_group_expression] = STATE(354),
    [sym_assignment_expression] = STATE(352),
    [sym_string] = STATE(354),
    [sym_character] = STATE(354),
    [sym_unary_op] = STATE(353),
    [sym__collection_or_value] = STATE(72),
    [sym_collection] = STATE(72),
    [sym__number] = STATE(354),
    [sym__value] = STATE(354),
    [sym_identifier] = ACTIONS(914),
    [anon_sym_BANG] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [sym_double] = ACTIONS(916),
    [sym_float] = ACTIONS(916),
    [sym_oct] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(103),
    [sym_null] = ACTIONS(914),
    [sym_binary] = ACTIONS(916),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(916),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_hex] = ACTIONS(916),
    [sym__space] = ACTIONS(3),
    [sym_integer] = ACTIONS(914),
  },
  [321] = {
    [aux_sym_string_repeat1] = STATE(356),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(918),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(920),
  },
  [322] = {
    [sym__escape_sequence] = STATE(357),
    [anon_sym_BSLASH0] = ACTIONS(922),
    [anon_sym_BSLASHr] = ACTIONS(922),
    [sym__comment] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(922),
    [anon_sym_BSLASHa] = ACTIONS(922),
    [anon_sym_BSLASHt] = ACTIONS(922),
    [sym__space] = ACTIONS(3),
    [anon_sym_BSLASHb] = ACTIONS(922),
    [anon_sym_BSLASHv] = ACTIONS(922),
    [anon_sym_BSLASHn] = ACTIONS(922),
    [aux_sym_character_token1] = ACTIONS(924),
    [anon_sym_BSLASHf] = ACTIONS(922),
  },
  [323] = {
    [sym__literal] = STATE(37),
    [sym_group_expression] = STATE(37),
    [sym_assignment_expression] = STATE(64),
    [sym__assignment_or_collection_or_value] = STATE(64),
    [sym_string] = STATE(37),
    [sym_character] = STATE(37),
    [sym__comma_list_assignment_or_collection_or_value] = STATE(358),
    [sym__collection_or_value] = STATE(66),
    [sym_collection] = STATE(66),
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
  [324] = {
    [sym_static_assignment] = STATE(305),
    [sym_is_declare] = ACTIONS(757),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(757),
    [anon_sym_s8] = ACTIONS(757),
    [anon_sym_private] = ACTIONS(757),
    [anon_sym_u8] = ACTIONS(757),
    [anon_sym_f64] = ACTIONS(757),
    [anon_sym_u32] = ACTIONS(757),
    [anon_sym_i8] = ACTIONS(757),
    [anon_sym_method] = ACTIONS(757),
    [anon_sym_end] = ACTIONS(757),
    [anon_sym_s32] = ACTIONS(757),
    [anon_sym_publish] = ACTIONS(757),
    [sym_readonly] = ACTIONS(757),
    [anon_sym_i64] = ACTIONS(757),
    [anon_sym_f32] = ACTIONS(757),
    [sym_is_external] = ACTIONS(757),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(757),
    [anon_sym_COLON_EQ] = ACTIONS(662),
    [anon_sym_s16] = ACTIONS(757),
    [anon_sym_protected] = ACTIONS(757),
    [anon_sym_u16] = ACTIONS(757),
    [anon_sym_i32] = ACTIONS(757),
    [anon_sym_u64] = ACTIONS(757),
    [anon_sym_enum] = ACTIONS(757),
    [anon_sym_i16] = ACTIONS(757),
  },
  [325] = {
    [sym_return_list] = STATE(359),
    [anon_sym_DOT] = ACTIONS(912),
    [sym__space] = ACTIONS(3),
    [anon_sym_returns] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
  },
  [326] = {
    [anon_sym_DOT] = ACTIONS(926),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [327] = {
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(928),
    [sym__comment] = ACTIONS(3),
  },
  [328] = {
    [anon_sym_section] = ACTIONS(896),
    [anon_sym_s8] = ACTIONS(896),
    [sym_double] = ACTIONS(898),
    [anon_sym_LBRACE] = ACTIONS(898),
    [anon_sym_end] = ACTIONS(896),
    [anon_sym_while] = ACTIONS(896),
    [sym_null] = ACTIONS(896),
    [anon_sym_publish] = ACTIONS(896),
    [sym_readonly] = ACTIONS(896),
    [anon_sym_i64] = ACTIONS(896),
    [anon_sym_f32] = ACTIONS(896),
    [anon_sym_LPAREN] = ACTIONS(896),
    [sym_long] = ACTIONS(898),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(896),
    [sym_hex] = ACTIONS(898),
    [anon_sym_switch] = ACTIONS(896),
    [sym_identifier] = ACTIONS(896),
    [anon_sym_private] = ACTIONS(896),
    [anon_sym_u8] = ACTIONS(896),
    [anon_sym_f64] = ACTIONS(896),
    [anon_sym_u32] = ACTIONS(896),
    [anon_sym_SQUOTE] = ACTIONS(898),
    [anon_sym_i8] = ACTIONS(896),
    [anon_sym_return] = ACTIONS(896),
    [anon_sym_goto] = ACTIONS(896),
    [sym_oct] = ACTIONS(896),
    [anon_sym_s32] = ACTIONS(896),
    [sym_float] = ACTIONS(898),
    [sym_binary] = ACTIONS(898),
    [anon_sym_DQUOTE] = ACTIONS(898),
    [anon_sym_if] = ACTIONS(896),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(896),
    [anon_sym_u16] = ACTIONS(896),
    [anon_sym_i32] = ACTIONS(896),
    [anon_sym_u64] = ACTIONS(896),
    [sym_integer] = ACTIONS(896),
    [anon_sym_i16] = ACTIONS(896),
  },
  [329] = {
    [anon_sym_DOT] = ACTIONS(930),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [330] = {
    [sym_is_declare] = ACTIONS(552),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(552),
    [anon_sym_s8] = ACTIONS(552),
    [anon_sym_private] = ACTIONS(552),
    [anon_sym_u8] = ACTIONS(552),
    [anon_sym_f64] = ACTIONS(552),
    [anon_sym_u32] = ACTIONS(552),
    [anon_sym_i8] = ACTIONS(552),
    [anon_sym_method] = ACTIONS(552),
    [anon_sym_end] = ACTIONS(552),
    [anon_sym_s32] = ACTIONS(552),
    [anon_sym_publish] = ACTIONS(552),
    [sym_readonly] = ACTIONS(552),
    [anon_sym_i64] = ACTIONS(552),
    [anon_sym_f32] = ACTIONS(552),
    [sym_is_external] = ACTIONS(552),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(552),
    [anon_sym_s16] = ACTIONS(552),
    [anon_sym_protected] = ACTIONS(552),
    [anon_sym_u16] = ACTIONS(552),
    [anon_sym_i32] = ACTIONS(552),
    [anon_sym_u64] = ACTIONS(552),
    [anon_sym_enum] = ACTIONS(552),
    [anon_sym_i16] = ACTIONS(552),
  },
  [331] = {
    [anon_sym_DOT] = ACTIONS(932),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [332] = {
    [anon_sym_section] = ACTIONS(934),
    [anon_sym_s8] = ACTIONS(934),
    [sym_double] = ACTIONS(936),
    [anon_sym_LBRACE] = ACTIONS(936),
    [anon_sym_end] = ACTIONS(934),
    [anon_sym_while] = ACTIONS(934),
    [sym_null] = ACTIONS(934),
    [anon_sym_publish] = ACTIONS(934),
    [sym_readonly] = ACTIONS(934),
    [anon_sym_i64] = ACTIONS(934),
    [anon_sym_f32] = ACTIONS(934),
    [anon_sym_LPAREN] = ACTIONS(934),
    [sym_long] = ACTIONS(936),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(934),
    [sym_hex] = ACTIONS(936),
    [anon_sym_switch] = ACTIONS(934),
    [sym_identifier] = ACTIONS(934),
    [anon_sym_private] = ACTIONS(934),
    [anon_sym_u8] = ACTIONS(934),
    [anon_sym_f64] = ACTIONS(934),
    [anon_sym_u32] = ACTIONS(934),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [anon_sym_i8] = ACTIONS(934),
    [anon_sym_return] = ACTIONS(934),
    [anon_sym_goto] = ACTIONS(934),
    [sym_oct] = ACTIONS(934),
    [anon_sym_s32] = ACTIONS(934),
    [sym_float] = ACTIONS(936),
    [sym_binary] = ACTIONS(936),
    [anon_sym_DQUOTE] = ACTIONS(936),
    [anon_sym_if] = ACTIONS(934),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(934),
    [anon_sym_u16] = ACTIONS(934),
    [anon_sym_i32] = ACTIONS(934),
    [anon_sym_u64] = ACTIONS(934),
    [sym_integer] = ACTIONS(934),
    [anon_sym_i16] = ACTIONS(934),
  },
  [333] = {
    [anon_sym_DOT] = ACTIONS(938),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [334] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(940),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(940),
  },
  [335] = {
    [anon_sym_DOT] = ACTIONS(942),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [336] = {
    [anon_sym_DOT] = ACTIONS(944),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [337] = {
    [anon_sym_end] = ACTIONS(946),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [338] = {
    [anon_sym_DOT] = ACTIONS(948),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [339] = {
    [anon_sym_RPAREN] = ACTIONS(874),
    [anon_sym_STAR] = ACTIONS(872),
    [anon_sym_EQ_EQ] = ACTIONS(874),
    [anon_sym_PLUS_EQ] = ACTIONS(874),
    [anon_sym_PIPE_PIPE] = ACTIONS(874),
    [anon_sym_SLASH] = ACTIONS(872),
    [anon_sym_LT] = ACTIONS(872),
    [anon_sym_LT_LT_EQ] = ACTIONS(874),
    [anon_sym_SLASH_EQ] = ACTIONS(874),
    [anon_sym_GT_GT_EQ] = ACTIONS(874),
    [anon_sym_AMP_EQ] = ACTIONS(874),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(874),
    [anon_sym_DASH] = ACTIONS(872),
    [anon_sym_AMP_AMP] = ACTIONS(874),
    [anon_sym_LT_EQ] = ACTIONS(874),
    [anon_sym_GT_GT] = ACTIONS(872),
    [anon_sym_PERCENT] = ACTIONS(872),
    [anon_sym_GT_EQ] = ACTIONS(874),
    [anon_sym_CARET] = ACTIONS(872),
    [anon_sym_PLUS_PLUS] = ACTIONS(874),
    [anon_sym_PERCENT_EQ] = ACTIONS(874),
    [anon_sym_DASH_EQ] = ACTIONS(874),
    [anon_sym_PIPE_EQ] = ACTIONS(874),
    [anon_sym_AMP] = ACTIONS(872),
    [anon_sym_BANG_EQ] = ACTIONS(874),
    [anon_sym_LT_LT] = ACTIONS(872),
    [anon_sym_PIPE] = ACTIONS(872),
    [anon_sym_PLUS] = ACTIONS(872),
    [anon_sym_GT] = ACTIONS(872),
    [anon_sym_DASH_DASH] = ACTIONS(872),
    [anon_sym_STAR_EQ] = ACTIONS(874),
    [anon_sym_CARET_EQ] = ACTIONS(874),
    [sym__space] = ACTIONS(3),
  },
  [340] = {
    [anon_sym_section] = ACTIONS(872),
    [anon_sym_s8] = ACTIONS(872),
    [sym_double] = ACTIONS(874),
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_while] = ACTIONS(872),
    [sym_null] = ACTIONS(872),
    [anon_sym_publish] = ACTIONS(872),
    [sym_readonly] = ACTIONS(872),
    [anon_sym_i64] = ACTIONS(872),
    [anon_sym_f32] = ACTIONS(872),
    [anon_sym_LPAREN] = ACTIONS(872),
    [sym_long] = ACTIONS(874),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(872),
    [sym_hex] = ACTIONS(874),
    [anon_sym_switch] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_u8] = ACTIONS(872),
    [anon_sym_f64] = ACTIONS(872),
    [anon_sym_u32] = ACTIONS(872),
    [anon_sym_DOT] = ACTIONS(874),
    [anon_sym_i8] = ACTIONS(872),
    [anon_sym_return] = ACTIONS(872),
    [anon_sym_goto] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(874),
    [anon_sym_s32] = ACTIONS(872),
    [sym_oct] = ACTIONS(872),
    [sym_float] = ACTIONS(874),
    [sym_binary] = ACTIONS(874),
    [anon_sym_DQUOTE] = ACTIONS(874),
    [anon_sym_if] = ACTIONS(872),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_u16] = ACTIONS(872),
    [anon_sym_i32] = ACTIONS(872),
    [anon_sym_u64] = ACTIONS(872),
    [sym_integer] = ACTIONS(872),
    [anon_sym_i16] = ACTIONS(872),
  },
  [341] = {
    [sym_integer] = ACTIONS(950),
    [anon_sym_section] = ACTIONS(950),
    [anon_sym_s8] = ACTIONS(950),
    [sym_double] = ACTIONS(952),
    [anon_sym_method] = ACTIONS(950),
    [anon_sym_end] = ACTIONS(950),
    [anon_sym_while] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(952),
    [anon_sym_publish] = ACTIONS(950),
    [sym_readonly] = ACTIONS(950),
    [anon_sym_i64] = ACTIONS(950),
    [anon_sym_f32] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(950),
    [sym_null] = ACTIONS(950),
    [sym_long] = ACTIONS(952),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(950),
    [sym_hex] = ACTIONS(952),
    [anon_sym_module] = ACTIONS(950),
    [anon_sym_switch] = ACTIONS(950),
    [sym_identifier] = ACTIONS(950),
    [anon_sym_private] = ACTIONS(950),
    [anon_sym_u8] = ACTIONS(950),
    [anon_sym_f64] = ACTIONS(950),
    [anon_sym_u32] = ACTIONS(950),
    [anon_sym_SQUOTE] = ACTIONS(952),
    [anon_sym_i8] = ACTIONS(950),
    [anon_sym_return] = ACTIONS(950),
    [anon_sym_goto] = ACTIONS(950),
    [sym_oct] = ACTIONS(950),
    [anon_sym_s32] = ACTIONS(950),
    [sym_float] = ACTIONS(952),
    [sym_binary] = ACTIONS(952),
    [ts_builtin_sym_end] = ACTIONS(952),
    [anon_sym_function] = ACTIONS(950),
    [anon_sym_DQUOTE] = ACTIONS(952),
    [anon_sym_if] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(950),
    [anon_sym_u16] = ACTIONS(950),
    [anon_sym_i32] = ACTIONS(950),
    [anon_sym_u64] = ACTIONS(950),
    [anon_sym_enum] = ACTIONS(950),
    [anon_sym_i16] = ACTIONS(950),
  },
  [342] = {
    [anon_sym_DOT] = ACTIONS(954),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [343] = {
    [sym_integer] = ACTIONS(956),
    [anon_sym_section] = ACTIONS(956),
    [anon_sym_s8] = ACTIONS(956),
    [sym_double] = ACTIONS(958),
    [anon_sym_method] = ACTIONS(956),
    [anon_sym_end] = ACTIONS(956),
    [anon_sym_while] = ACTIONS(956),
    [anon_sym_LBRACE] = ACTIONS(958),
    [anon_sym_publish] = ACTIONS(956),
    [sym_readonly] = ACTIONS(956),
    [anon_sym_i64] = ACTIONS(956),
    [anon_sym_f32] = ACTIONS(956),
    [anon_sym_LPAREN] = ACTIONS(956),
    [sym_null] = ACTIONS(956),
    [sym_long] = ACTIONS(958),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(956),
    [sym_hex] = ACTIONS(958),
    [anon_sym_module] = ACTIONS(956),
    [anon_sym_switch] = ACTIONS(956),
    [sym_identifier] = ACTIONS(956),
    [anon_sym_private] = ACTIONS(956),
    [anon_sym_u8] = ACTIONS(956),
    [anon_sym_f64] = ACTIONS(956),
    [anon_sym_u32] = ACTIONS(956),
    [anon_sym_SQUOTE] = ACTIONS(958),
    [anon_sym_i8] = ACTIONS(956),
    [anon_sym_return] = ACTIONS(956),
    [anon_sym_goto] = ACTIONS(956),
    [sym_oct] = ACTIONS(956),
    [anon_sym_s32] = ACTIONS(956),
    [sym_float] = ACTIONS(958),
    [sym_binary] = ACTIONS(958),
    [ts_builtin_sym_end] = ACTIONS(958),
    [anon_sym_function] = ACTIONS(956),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_if] = ACTIONS(956),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(956),
    [anon_sym_u16] = ACTIONS(956),
    [anon_sym_i32] = ACTIONS(956),
    [anon_sym_u64] = ACTIONS(956),
    [anon_sym_enum] = ACTIONS(956),
    [anon_sym_i16] = ACTIONS(956),
  },
  [344] = {
    [sym_integer] = ACTIONS(765),
    [anon_sym_section] = ACTIONS(765),
    [anon_sym_s8] = ACTIONS(765),
    [sym_double] = ACTIONS(767),
    [anon_sym_method] = ACTIONS(765),
    [anon_sym_end] = ACTIONS(765),
    [anon_sym_while] = ACTIONS(765),
    [anon_sym_LBRACE] = ACTIONS(767),
    [anon_sym_publish] = ACTIONS(765),
    [sym_readonly] = ACTIONS(765),
    [anon_sym_i64] = ACTIONS(765),
    [anon_sym_f32] = ACTIONS(765),
    [anon_sym_LPAREN] = ACTIONS(765),
    [sym_null] = ACTIONS(765),
    [sym_long] = ACTIONS(767),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(765),
    [sym_hex] = ACTIONS(767),
    [anon_sym_module] = ACTIONS(765),
    [anon_sym_switch] = ACTIONS(765),
    [sym_identifier] = ACTIONS(765),
    [anon_sym_private] = ACTIONS(765),
    [anon_sym_u8] = ACTIONS(765),
    [anon_sym_f64] = ACTIONS(765),
    [anon_sym_u32] = ACTIONS(765),
    [anon_sym_SQUOTE] = ACTIONS(767),
    [anon_sym_i8] = ACTIONS(765),
    [anon_sym_return] = ACTIONS(765),
    [anon_sym_goto] = ACTIONS(765),
    [sym_oct] = ACTIONS(765),
    [anon_sym_s32] = ACTIONS(765),
    [sym_float] = ACTIONS(767),
    [sym_binary] = ACTIONS(767),
    [ts_builtin_sym_end] = ACTIONS(767),
    [anon_sym_function] = ACTIONS(765),
    [anon_sym_DQUOTE] = ACTIONS(767),
    [anon_sym_if] = ACTIONS(765),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(765),
    [anon_sym_u16] = ACTIONS(765),
    [anon_sym_i32] = ACTIONS(765),
    [anon_sym_u64] = ACTIONS(765),
    [anon_sym_enum] = ACTIONS(765),
    [anon_sym_i16] = ACTIONS(765),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(960),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [346] = {
    [anon_sym_DOT] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(962),
    [sym__comment] = ACTIONS(3),
  },
  [347] = {
    [aux_sym__comma_list_types_repeat1] = STATE(347),
    [anon_sym_DOT] = ACTIONS(962),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(964),
    [sym__comment] = ACTIONS(3),
  },
  [348] = {
    [sym_array] = STATE(348),
    [aux_sym_type_repeat2] = STATE(348),
    [anon_sym_LBRACK] = ACTIONS(642),
    [anon_sym_DOT] = ACTIONS(967),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(967),
    [sym__comment] = ACTIONS(3),
  },
  [349] = {
    [sym_array] = STATE(348),
    [aux_sym_type_repeat2] = STATE(348),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_DOT] = ACTIONS(969),
    [sym__space] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(969),
    [sym__comment] = ACTIONS(3),
  },
  [350] = {
    [sym_pointer] = STATE(350),
    [aux_sym_type_repeat1] = STATE(350),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_DOT] = ACTIONS(649),
    [sym__space] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(653),
    [anon_sym_COMMA] = ACTIONS(649),
    [sym__comment] = ACTIONS(3),
  },
  [351] = {
    [sym_is_declare] = ACTIONS(896),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(896),
    [anon_sym_s8] = ACTIONS(896),
    [anon_sym_private] = ACTIONS(896),
    [anon_sym_u8] = ACTIONS(896),
    [anon_sym_f64] = ACTIONS(896),
    [anon_sym_u32] = ACTIONS(896),
    [anon_sym_i8] = ACTIONS(896),
    [anon_sym_method] = ACTIONS(896),
    [anon_sym_end] = ACTIONS(896),
    [anon_sym_s32] = ACTIONS(896),
    [anon_sym_publish] = ACTIONS(896),
    [sym_readonly] = ACTIONS(896),
    [anon_sym_i64] = ACTIONS(896),
    [anon_sym_f32] = ACTIONS(896),
    [sym_is_external] = ACTIONS(896),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(896),
    [anon_sym_s16] = ACTIONS(896),
    [anon_sym_protected] = ACTIONS(896),
    [anon_sym_u16] = ACTIONS(896),
    [anon_sym_i32] = ACTIONS(896),
    [anon_sym_u64] = ACTIONS(896),
    [anon_sym_enum] = ACTIONS(896),
    [anon_sym_i16] = ACTIONS(896),
  },
  [352] = {
    [anon_sym_RPAREN] = ACTIONS(971),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [353] = {
    [sym__literal] = STATE(369),
    [sym_group_expression] = STATE(369),
    [sym__number] = STATE(369),
    [sym_string] = STATE(369),
    [sym_character] = STATE(369),
    [sym__value] = STATE(369),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(973),
    [sym_identifier] = ACTIONS(975),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(973),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(975),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(973),
    [sym_hex] = ACTIONS(973),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(975),
    [sym_integer] = ACTIONS(975),
    [sym_binary] = ACTIONS(973),
  },
  [354] = {
    [sym_binary_op] = STATE(370),
    [sym_assignment_post_op] = STATE(100),
    [anon_sym_RPAREN] = ACTIONS(971),
    [anon_sym_STAR] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [anon_sym_PLUS_EQ] = ACTIONS(171),
    [anon_sym_PIPE_PIPE] = ACTIONS(279),
    [anon_sym_SLASH] = ACTIONS(277),
    [anon_sym_LT] = ACTIONS(277),
    [anon_sym_LT_LT_EQ] = ACTIONS(171),
    [anon_sym_SLASH_EQ] = ACTIONS(171),
    [anon_sym_GT_GT_EQ] = ACTIONS(171),
    [anon_sym_AMP_EQ] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_COLON_EQ] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(277),
    [anon_sym_AMP_AMP] = ACTIONS(279),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_PERCENT] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(277),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_PERCENT_EQ] = ACTIONS(171),
    [anon_sym_DASH_EQ] = ACTIONS(171),
    [anon_sym_PIPE_EQ] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_BANG_EQ] = ACTIONS(279),
    [anon_sym_LT_LT] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PLUS] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_STAR_EQ] = ACTIONS(171),
    [anon_sym_CARET_EQ] = ACTIONS(171),
    [sym__space] = ACTIONS(3),
  },
  [355] = {
    [sym_is_declare] = ACTIONS(315),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(315),
    [anon_sym_s8] = ACTIONS(315),
    [anon_sym_private] = ACTIONS(315),
    [anon_sym_u8] = ACTIONS(315),
    [anon_sym_f64] = ACTIONS(315),
    [anon_sym_u32] = ACTIONS(315),
    [anon_sym_i8] = ACTIONS(315),
    [anon_sym_method] = ACTIONS(315),
    [anon_sym_end] = ACTIONS(315),
    [anon_sym_s32] = ACTIONS(315),
    [anon_sym_publish] = ACTIONS(315),
    [sym_readonly] = ACTIONS(315),
    [anon_sym_i64] = ACTIONS(315),
    [anon_sym_f32] = ACTIONS(315),
    [sym_is_external] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(315),
    [anon_sym_s16] = ACTIONS(315),
    [anon_sym_protected] = ACTIONS(315),
    [anon_sym_u16] = ACTIONS(315),
    [anon_sym_i32] = ACTIONS(315),
    [anon_sym_u64] = ACTIONS(315),
    [anon_sym_enum] = ACTIONS(315),
    [anon_sym_i16] = ACTIONS(315),
  },
  [356] = {
    [aux_sym_string_repeat1] = STATE(164),
    [sym__space] = ACTIONS(135),
    [aux_sym_string_token1] = ACTIONS(317),
    [sym__comment] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(977),
  },
  [357] = {
    [anon_sym_SQUOTE] = ACTIONS(979),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [358] = {
    [anon_sym_RBRACE] = ACTIONS(981),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [359] = {
    [anon_sym_DOT] = ACTIONS(983),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [360] = {
    [sym_is_declare] = ACTIONS(950),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(950),
    [anon_sym_s8] = ACTIONS(950),
    [anon_sym_private] = ACTIONS(950),
    [anon_sym_u8] = ACTIONS(950),
    [anon_sym_f64] = ACTIONS(950),
    [anon_sym_u32] = ACTIONS(950),
    [anon_sym_i8] = ACTIONS(950),
    [anon_sym_method] = ACTIONS(950),
    [anon_sym_end] = ACTIONS(950),
    [anon_sym_s32] = ACTIONS(950),
    [anon_sym_publish] = ACTIONS(950),
    [sym_readonly] = ACTIONS(950),
    [anon_sym_i64] = ACTIONS(950),
    [anon_sym_f32] = ACTIONS(950),
    [sym_is_external] = ACTIONS(950),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(950),
    [anon_sym_s16] = ACTIONS(950),
    [anon_sym_protected] = ACTIONS(950),
    [anon_sym_u16] = ACTIONS(950),
    [anon_sym_i32] = ACTIONS(950),
    [anon_sym_u64] = ACTIONS(950),
    [anon_sym_enum] = ACTIONS(950),
    [anon_sym_i16] = ACTIONS(950),
  },
  [361] = {
    [anon_sym_DOT] = ACTIONS(985),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [362] = {
    [anon_sym_section] = ACTIONS(956),
    [anon_sym_s8] = ACTIONS(956),
    [sym_double] = ACTIONS(958),
    [anon_sym_LBRACE] = ACTIONS(958),
    [anon_sym_end] = ACTIONS(956),
    [anon_sym_while] = ACTIONS(956),
    [sym_null] = ACTIONS(956),
    [anon_sym_publish] = ACTIONS(956),
    [sym_readonly] = ACTIONS(956),
    [anon_sym_i64] = ACTIONS(956),
    [anon_sym_f32] = ACTIONS(956),
    [anon_sym_LPAREN] = ACTIONS(956),
    [sym_long] = ACTIONS(958),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(956),
    [sym_hex] = ACTIONS(958),
    [anon_sym_switch] = ACTIONS(956),
    [sym_identifier] = ACTIONS(956),
    [anon_sym_private] = ACTIONS(956),
    [anon_sym_u8] = ACTIONS(956),
    [anon_sym_f64] = ACTIONS(956),
    [anon_sym_u32] = ACTIONS(956),
    [anon_sym_SQUOTE] = ACTIONS(958),
    [anon_sym_i8] = ACTIONS(956),
    [anon_sym_return] = ACTIONS(956),
    [anon_sym_goto] = ACTIONS(956),
    [sym_oct] = ACTIONS(956),
    [anon_sym_s32] = ACTIONS(956),
    [sym_float] = ACTIONS(958),
    [sym_binary] = ACTIONS(958),
    [anon_sym_DQUOTE] = ACTIONS(958),
    [anon_sym_if] = ACTIONS(956),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(956),
    [anon_sym_u16] = ACTIONS(956),
    [anon_sym_i32] = ACTIONS(956),
    [anon_sym_u64] = ACTIONS(956),
    [sym_integer] = ACTIONS(956),
    [anon_sym_i16] = ACTIONS(956),
  },
  [363] = {
    [sym_is_declare] = ACTIONS(775),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(775),
    [anon_sym_s8] = ACTIONS(775),
    [anon_sym_private] = ACTIONS(775),
    [anon_sym_u8] = ACTIONS(775),
    [anon_sym_f64] = ACTIONS(775),
    [anon_sym_u32] = ACTIONS(775),
    [anon_sym_i8] = ACTIONS(775),
    [anon_sym_method] = ACTIONS(775),
    [anon_sym_end] = ACTIONS(775),
    [anon_sym_s32] = ACTIONS(775),
    [anon_sym_publish] = ACTIONS(775),
    [sym_readonly] = ACTIONS(775),
    [anon_sym_i64] = ACTIONS(775),
    [anon_sym_f32] = ACTIONS(775),
    [sym_is_external] = ACTIONS(775),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(775),
    [anon_sym_s16] = ACTIONS(775),
    [anon_sym_protected] = ACTIONS(775),
    [anon_sym_u16] = ACTIONS(775),
    [anon_sym_i32] = ACTIONS(775),
    [anon_sym_u64] = ACTIONS(775),
    [anon_sym_enum] = ACTIONS(775),
    [anon_sym_i16] = ACTIONS(775),
  },
  [364] = {
    [sym__space] = ACTIONS(3),
    [anon_sym_default] = ACTIONS(987),
    [sym__comment] = ACTIONS(3),
    [anon_sym_case] = ACTIONS(987),
  },
  [365] = {
    [anon_sym_end] = ACTIONS(989),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [366] = {
    [sym_integer] = ACTIONS(991),
    [anon_sym_section] = ACTIONS(991),
    [anon_sym_s8] = ACTIONS(991),
    [sym_double] = ACTIONS(993),
    [anon_sym_method] = ACTIONS(991),
    [anon_sym_end] = ACTIONS(991),
    [anon_sym_while] = ACTIONS(991),
    [anon_sym_LBRACE] = ACTIONS(993),
    [anon_sym_publish] = ACTIONS(991),
    [sym_readonly] = ACTIONS(991),
    [anon_sym_i64] = ACTIONS(991),
    [anon_sym_f32] = ACTIONS(991),
    [anon_sym_LPAREN] = ACTIONS(991),
    [sym_null] = ACTIONS(991),
    [sym_long] = ACTIONS(993),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(991),
    [sym_hex] = ACTIONS(993),
    [anon_sym_module] = ACTIONS(991),
    [anon_sym_switch] = ACTIONS(991),
    [sym_identifier] = ACTIONS(991),
    [anon_sym_private] = ACTIONS(991),
    [anon_sym_u8] = ACTIONS(991),
    [anon_sym_f64] = ACTIONS(991),
    [anon_sym_u32] = ACTIONS(991),
    [anon_sym_SQUOTE] = ACTIONS(993),
    [anon_sym_i8] = ACTIONS(991),
    [anon_sym_return] = ACTIONS(991),
    [anon_sym_goto] = ACTIONS(991),
    [sym_oct] = ACTIONS(991),
    [anon_sym_s32] = ACTIONS(991),
    [sym_float] = ACTIONS(993),
    [sym_binary] = ACTIONS(993),
    [ts_builtin_sym_end] = ACTIONS(993),
    [anon_sym_function] = ACTIONS(991),
    [anon_sym_DQUOTE] = ACTIONS(993),
    [anon_sym_if] = ACTIONS(991),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(991),
    [anon_sym_u16] = ACTIONS(991),
    [anon_sym_i32] = ACTIONS(991),
    [anon_sym_u64] = ACTIONS(991),
    [anon_sym_enum] = ACTIONS(991),
    [anon_sym_i16] = ACTIONS(991),
  },
  [367] = {
    [sym_integer] = ACTIONS(872),
    [anon_sym_section] = ACTIONS(872),
    [anon_sym_s8] = ACTIONS(872),
    [sym_double] = ACTIONS(874),
    [anon_sym_method] = ACTIONS(872),
    [anon_sym_end] = ACTIONS(872),
    [anon_sym_while] = ACTIONS(872),
    [anon_sym_LBRACE] = ACTIONS(874),
    [anon_sym_publish] = ACTIONS(872),
    [sym_readonly] = ACTIONS(872),
    [anon_sym_i64] = ACTIONS(872),
    [anon_sym_f32] = ACTIONS(872),
    [anon_sym_LPAREN] = ACTIONS(872),
    [sym_null] = ACTIONS(872),
    [sym_long] = ACTIONS(874),
    [sym__comment] = ACTIONS(3),
    [anon_sym_s16] = ACTIONS(872),
    [sym_hex] = ACTIONS(874),
    [anon_sym_module] = ACTIONS(872),
    [anon_sym_switch] = ACTIONS(872),
    [sym_identifier] = ACTIONS(872),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_u8] = ACTIONS(872),
    [anon_sym_f64] = ACTIONS(872),
    [anon_sym_u32] = ACTIONS(872),
    [anon_sym_SQUOTE] = ACTIONS(874),
    [anon_sym_i8] = ACTIONS(872),
    [anon_sym_return] = ACTIONS(872),
    [anon_sym_goto] = ACTIONS(872),
    [sym_oct] = ACTIONS(872),
    [anon_sym_s32] = ACTIONS(872),
    [sym_float] = ACTIONS(874),
    [sym_binary] = ACTIONS(874),
    [ts_builtin_sym_end] = ACTIONS(874),
    [anon_sym_function] = ACTIONS(872),
    [anon_sym_DQUOTE] = ACTIONS(874),
    [anon_sym_if] = ACTIONS(872),
    [sym__space] = ACTIONS(3),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_u16] = ACTIONS(872),
    [anon_sym_i32] = ACTIONS(872),
    [anon_sym_u64] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_i16] = ACTIONS(872),
  },
  [368] = {
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
  [369] = {
    [anon_sym_RPAREN] = ACTIONS(995),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [370] = {
    [sym__literal] = STATE(377),
    [sym_group_expression] = STATE(377),
    [sym__number] = STATE(377),
    [sym_string] = STATE(377),
    [sym_character] = STATE(377),
    [sym__value] = STATE(377),
    [sym__comment] = ACTIONS(3),
    [sym_long] = ACTIONS(997),
    [sym_identifier] = ACTIONS(999),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_double] = ACTIONS(997),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_oct] = ACTIONS(999),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [sym_float] = ACTIONS(997),
    [sym_hex] = ACTIONS(997),
    [sym__space] = ACTIONS(3),
    [sym_null] = ACTIONS(999),
    [sym_integer] = ACTIONS(999),
    [sym_binary] = ACTIONS(997),
  },
  [371] = {
    [sym_is_declare] = ACTIONS(573),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(573),
    [anon_sym_s8] = ACTIONS(573),
    [anon_sym_private] = ACTIONS(573),
    [anon_sym_u8] = ACTIONS(573),
    [anon_sym_f64] = ACTIONS(573),
    [anon_sym_u32] = ACTIONS(573),
    [anon_sym_i8] = ACTIONS(573),
    [anon_sym_method] = ACTIONS(573),
    [anon_sym_end] = ACTIONS(573),
    [anon_sym_s32] = ACTIONS(573),
    [anon_sym_publish] = ACTIONS(573),
    [sym_readonly] = ACTIONS(573),
    [anon_sym_i64] = ACTIONS(573),
    [anon_sym_f32] = ACTIONS(573),
    [sym_is_external] = ACTIONS(573),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(573),
    [anon_sym_s16] = ACTIONS(573),
    [anon_sym_protected] = ACTIONS(573),
    [anon_sym_u16] = ACTIONS(573),
    [anon_sym_i32] = ACTIONS(573),
    [anon_sym_u64] = ACTIONS(573),
    [anon_sym_enum] = ACTIONS(573),
    [anon_sym_i16] = ACTIONS(573),
  },
  [372] = {
    [sym_is_declare] = ACTIONS(565),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(565),
    [anon_sym_s8] = ACTIONS(565),
    [anon_sym_private] = ACTIONS(565),
    [anon_sym_u8] = ACTIONS(565),
    [anon_sym_f64] = ACTIONS(565),
    [anon_sym_u32] = ACTIONS(565),
    [anon_sym_i8] = ACTIONS(565),
    [anon_sym_method] = ACTIONS(565),
    [anon_sym_end] = ACTIONS(565),
    [anon_sym_s32] = ACTIONS(565),
    [anon_sym_publish] = ACTIONS(565),
    [sym_readonly] = ACTIONS(565),
    [anon_sym_i64] = ACTIONS(565),
    [anon_sym_f32] = ACTIONS(565),
    [sym_is_external] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(565),
    [anon_sym_s16] = ACTIONS(565),
    [anon_sym_protected] = ACTIONS(565),
    [anon_sym_u16] = ACTIONS(565),
    [anon_sym_i32] = ACTIONS(565),
    [anon_sym_u64] = ACTIONS(565),
    [anon_sym_enum] = ACTIONS(565),
    [anon_sym_i16] = ACTIONS(565),
  },
  [373] = {
    [sym_is_declare] = ACTIONS(514),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(514),
    [anon_sym_s8] = ACTIONS(514),
    [anon_sym_private] = ACTIONS(514),
    [anon_sym_u8] = ACTIONS(514),
    [anon_sym_f64] = ACTIONS(514),
    [anon_sym_u32] = ACTIONS(514),
    [anon_sym_i8] = ACTIONS(514),
    [anon_sym_method] = ACTIONS(514),
    [anon_sym_end] = ACTIONS(514),
    [anon_sym_s32] = ACTIONS(514),
    [anon_sym_publish] = ACTIONS(514),
    [sym_readonly] = ACTIONS(514),
    [anon_sym_i64] = ACTIONS(514),
    [anon_sym_f32] = ACTIONS(514),
    [sym_is_external] = ACTIONS(514),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(514),
    [anon_sym_s16] = ACTIONS(514),
    [anon_sym_protected] = ACTIONS(514),
    [anon_sym_u16] = ACTIONS(514),
    [anon_sym_i32] = ACTIONS(514),
    [anon_sym_u64] = ACTIONS(514),
    [anon_sym_enum] = ACTIONS(514),
    [anon_sym_i16] = ACTIONS(514),
  },
  [374] = {
    [sym_is_declare] = ACTIONS(956),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(956),
    [anon_sym_s8] = ACTIONS(956),
    [anon_sym_private] = ACTIONS(956),
    [anon_sym_u8] = ACTIONS(956),
    [anon_sym_f64] = ACTIONS(956),
    [anon_sym_u32] = ACTIONS(956),
    [anon_sym_i8] = ACTIONS(956),
    [anon_sym_method] = ACTIONS(956),
    [anon_sym_end] = ACTIONS(956),
    [anon_sym_s32] = ACTIONS(956),
    [anon_sym_publish] = ACTIONS(956),
    [sym_readonly] = ACTIONS(956),
    [anon_sym_i64] = ACTIONS(956),
    [anon_sym_f32] = ACTIONS(956),
    [sym_is_external] = ACTIONS(956),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(956),
    [anon_sym_s16] = ACTIONS(956),
    [anon_sym_protected] = ACTIONS(956),
    [anon_sym_u16] = ACTIONS(956),
    [anon_sym_i32] = ACTIONS(956),
    [anon_sym_u64] = ACTIONS(956),
    [anon_sym_enum] = ACTIONS(956),
    [anon_sym_i16] = ACTIONS(956),
  },
  [375] = {
    [sym_is_declare] = ACTIONS(991),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(991),
    [anon_sym_s8] = ACTIONS(991),
    [anon_sym_private] = ACTIONS(991),
    [anon_sym_u8] = ACTIONS(991),
    [anon_sym_f64] = ACTIONS(991),
    [anon_sym_u32] = ACTIONS(991),
    [anon_sym_i8] = ACTIONS(991),
    [anon_sym_method] = ACTIONS(991),
    [anon_sym_end] = ACTIONS(991),
    [anon_sym_s32] = ACTIONS(991),
    [anon_sym_publish] = ACTIONS(991),
    [sym_readonly] = ACTIONS(991),
    [anon_sym_i64] = ACTIONS(991),
    [anon_sym_f32] = ACTIONS(991),
    [sym_is_external] = ACTIONS(991),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(991),
    [anon_sym_s16] = ACTIONS(991),
    [anon_sym_protected] = ACTIONS(991),
    [anon_sym_u16] = ACTIONS(991),
    [anon_sym_i32] = ACTIONS(991),
    [anon_sym_u64] = ACTIONS(991),
    [anon_sym_enum] = ACTIONS(991),
    [anon_sym_i16] = ACTIONS(991),
  },
  [376] = {
    [sym_is_declare] = ACTIONS(765),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(765),
    [anon_sym_s8] = ACTIONS(765),
    [anon_sym_private] = ACTIONS(765),
    [anon_sym_u8] = ACTIONS(765),
    [anon_sym_f64] = ACTIONS(765),
    [anon_sym_u32] = ACTIONS(765),
    [anon_sym_i8] = ACTIONS(765),
    [anon_sym_method] = ACTIONS(765),
    [anon_sym_end] = ACTIONS(765),
    [anon_sym_s32] = ACTIONS(765),
    [anon_sym_publish] = ACTIONS(765),
    [sym_readonly] = ACTIONS(765),
    [anon_sym_i64] = ACTIONS(765),
    [anon_sym_f32] = ACTIONS(765),
    [sym_is_external] = ACTIONS(765),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(765),
    [anon_sym_s16] = ACTIONS(765),
    [anon_sym_protected] = ACTIONS(765),
    [anon_sym_u16] = ACTIONS(765),
    [anon_sym_i32] = ACTIONS(765),
    [anon_sym_u64] = ACTIONS(765),
    [anon_sym_enum] = ACTIONS(765),
    [anon_sym_i16] = ACTIONS(765),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(1001),
    [sym__space] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [378] = {
    [sym_is_declare] = ACTIONS(872),
    [sym__space] = ACTIONS(3),
    [sym_identifier] = ACTIONS(872),
    [anon_sym_s8] = ACTIONS(872),
    [anon_sym_private] = ACTIONS(872),
    [anon_sym_u8] = ACTIONS(872),
    [anon_sym_f64] = ACTIONS(872),
    [anon_sym_u32] = ACTIONS(872),
    [anon_sym_i8] = ACTIONS(872),
    [anon_sym_method] = ACTIONS(872),
    [anon_sym_end] = ACTIONS(872),
    [anon_sym_s32] = ACTIONS(872),
    [anon_sym_publish] = ACTIONS(872),
    [sym_readonly] = ACTIONS(872),
    [anon_sym_i64] = ACTIONS(872),
    [anon_sym_f32] = ACTIONS(872),
    [sym_is_external] = ACTIONS(872),
    [sym__comment] = ACTIONS(3),
    [anon_sym_function] = ACTIONS(872),
    [anon_sym_s16] = ACTIONS(872),
    [anon_sym_protected] = ACTIONS(872),
    [anon_sym_u16] = ACTIONS(872),
    [anon_sym_i32] = ACTIONS(872),
    [anon_sym_u64] = ACTIONS(872),
    [anon_sym_enum] = ACTIONS(872),
    [anon_sym_i16] = ACTIONS(872),
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
  [77] = {.count = 1, .reusable = true}, SHIFT(57),
  [79] = {.count = 1, .reusable = true}, SHIFT(59),
  [81] = {.count = 1, .reusable = true}, SHIFT(61),
  [83] = {.count = 1, .reusable = true}, SHIFT(62),
  [85] = {.count = 1, .reusable = true}, SHIFT(56),
  [87] = {.count = 1, .reusable = true}, SHIFT(58),
  [89] = {.count = 1, .reusable = true}, SHIFT(60),
  [91] = {.count = 1, .reusable = true}, SHIFT(16),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_access_control, 1),
  [95] = {.count = 1, .reusable = false}, SHIFT(38),
  [97] = {.count = 1, .reusable = false}, SHIFT(73),
  [99] = {.count = 1, .reusable = true}, SHIFT(68),
  [101] = {.count = 1, .reusable = true}, SHIFT(73),
  [103] = {.count = 1, .reusable = false}, SHIFT(68),
  [105] = {.count = 1, .reusable = false}, SHIFT(69),
  [107] = {.count = 1, .reusable = false}, SHIFT(74),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__base_type, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(76),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__base_type, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(77),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(75),
  [123] = {.count = 1, .reusable = true}, SHIFT(81),
  [125] = {.count = 1, .reusable = false}, SHIFT(81),
  [127] = {.count = 1, .reusable = true}, SHIFT(83),
  [129] = {.count = 1, .reusable = true}, SHIFT(82),
  [131] = {.count = 1, .reusable = false}, SHIFT(86),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_is_function, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [137] = {.count = 1, .reusable = false}, SHIFT(88),
  [139] = {.count = 1, .reusable = true}, SHIFT(87),
  [141] = {.count = 1, .reusable = true}, SHIFT(89),
  [143] = {.count = 1, .reusable = true}, SHIFT(91),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_expression_statement, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_expression_statement, 1),
  [149] = {.count = 1, .reusable = false}, SHIFT(92),
  [151] = {.count = 1, .reusable = true}, SHIFT(94),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_sentence, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 1),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(95),
  [161] = {.count = 1, .reusable = false}, SHIFT(97),
  [163] = {.count = 1, .reusable = false}, SHIFT(98),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_start_module_definition, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_start_module_definition, 1),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym__collection_or_value, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__collection_or_value, 1),
  [173] = {.count = 1, .reusable = true}, SHIFT(99),
  [175] = {.count = 1, .reusable = false}, SHIFT(99),
  [177] = {.count = 1, .reusable = true}, SHIFT(101),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_type, 1),
  [181] = {.count = 1, .reusable = true}, SHIFT(102),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_sentences, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement, 1),
  [189] = {.count = 1, .reusable = true}, SHIFT(106),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [196] = {.count = 1, .reusable = false}, SHIFT(107),
  [198] = {.count = 1, .reusable = true}, SHIFT(112),
  [200] = {.count = 1, .reusable = true}, SHIFT(115),
  [202] = {.count = 1, .reusable = false}, SHIFT(116),
  [204] = {.count = 1, .reusable = true}, SHIFT(118),
  [206] = {.count = 1, .reusable = true}, SHIFT(119),
  [208] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(9),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 1),
  [213] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(122),
  [216] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(123),
  [219] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(15),
  [222] = {.count = 2, .reusable = false}, REDUCE(sym__definitions, 1), SHIFT(124),
  [225] = {.count = 1, .reusable = false}, SHIFT(125),
  [227] = {.count = 1, .reusable = false}, SHIFT(126),
  [229] = {.count = 1, .reusable = false}, SHIFT(134),
  [231] = {.count = 1, .reusable = false}, SHIFT(123),
  [233] = {.count = 1, .reusable = false}, SHIFT(124),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_section_statement, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_end_if, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_end_module, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_end_method, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_end_default, 2),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_end_while, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_end_function, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_end_case, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(137),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 1),
  [255] = {.count = 1, .reusable = true}, SHIFT(138),
  [257] = {.count = 1, .reusable = true}, SHIFT(140),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [261] = {.count = 1, .reusable = false}, SHIFT(142),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_unary_op, 1),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_unary_op, 1),
  [267] = {.count = 1, .reusable = false}, SHIFT(145),
  [269] = {.count = 1, .reusable = true}, SHIFT(145),
  [271] = {.count = 1, .reusable = true}, SHIFT(146),
  [273] = {.count = 1, .reusable = true}, SHIFT(147),
  [275] = {.count = 1, .reusable = false}, SHIFT(147),
  [277] = {.count = 1, .reusable = false}, SHIFT(148),
  [279] = {.count = 1, .reusable = true}, SHIFT(148),
  [281] = {.count = 1, .reusable = true}, SHIFT(150),
  [283] = {.count = 1, .reusable = false}, SHIFT(151),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(152),
  [291] = {.count = 1, .reusable = true}, SHIFT(155),
  [293] = {.count = 1, .reusable = true}, SHIFT(158),
  [295] = {.count = 1, .reusable = true}, SHIFT(159),
  [297] = {.count = 1, .reusable = false}, SHIFT(161),
  [299] = {.count = 1, .reusable = true}, SHIFT(160),
  [301] = {.count = 1, .reusable = true}, SHIFT(162),
  [303] = {.count = 1, .reusable = false}, SHIFT(162),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_return_statement, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_return_statement, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__assignment_or_collection_or_value, 1),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_goto_statement, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_string, 2),
  [317] = {.count = 1, .reusable = false}, SHIFT(164),
  [319] = {.count = 1, .reusable = true}, SHIFT(163),
  [321] = {.count = 1, .reusable = false}, SHIFT(167),
  [323] = {.count = 1, .reusable = true}, SHIFT(167),
  [325] = {.count = 1, .reusable = true}, SHIFT(168),
  [327] = {.count = 1, .reusable = false}, SHIFT(171),
  [329] = {.count = 1, .reusable = false}, SHIFT(174),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_sentence, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_sentence, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_op, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_op, 1),
  [339] = {.count = 1, .reusable = false}, SHIFT(179),
  [341] = {.count = 1, .reusable = true}, SHIFT(179),
  [343] = {.count = 1, .reusable = true}, SHIFT(177),
  [345] = {.count = 1, .reusable = true}, SHIFT(178),
  [347] = {.count = 1, .reusable = false}, SHIFT(175),
  [349] = {.count = 1, .reusable = true}, SHIFT(176),
  [351] = {.count = 1, .reusable = true}, SHIFT(181),
  [353] = {.count = 1, .reusable = true}, SHIFT(180),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(184),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_post_op, 1),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_post_op, 1),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 2),
  [367] = {.count = 1, .reusable = true}, SHIFT(186),
  [369] = {.count = 1, .reusable = true}, SHIFT(187),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_pointer, 1),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_pointer, 1),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_type, 2),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(37),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(8),
  [383] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(9),
  [386] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(37),
  [389] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(10),
  [392] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(11),
  [395] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(12),
  [398] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(13),
  [401] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(14),
  [404] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(15),
  [407] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(16),
  [410] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(17),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(19),
  [416] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(18),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(20),
  [422] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(21),
  [425] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(22),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(23),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(24),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(25),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym_sentences_repeat1, 2), SHIFT_REPEAT(26),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym__start_module_definition, 3),
  [444] = {.count = 1, .reusable = false}, SHIFT(192),
  [446] = {.count = 1, .reusable = false}, SHIFT(193),
  [448] = {.count = 1, .reusable = false}, SHIFT(194),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_declaration_definition, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(196),
  [454] = {.count = 1, .reusable = true}, SHIFT(199),
  [456] = {.count = 1, .reusable = false}, SHIFT(202),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym__definitions, 2),
  [462] = {.count = 1, .reusable = true}, SHIFT(203),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(44),
  [467] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(45),
  [470] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(9),
  [473] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(14),
  [476] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(10),
  [479] = {.count = 1, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [481] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(15),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(23),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(47),
  [490] = {.count = 1, .reusable = false}, SHIFT(204),
  [492] = {.count = 1, .reusable = false}, SHIFT(207),
  [494] = {.count = 1, .reusable = true}, SHIFT(210),
  [496] = {.count = 1, .reusable = false}, SHIFT(122),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 2),
  [500] = {.count = 1, .reusable = false}, SHIFT(213),
  [502] = {.count = 1, .reusable = true}, SHIFT(216),
  [504] = {.count = 1, .reusable = true}, SHIFT(217),
  [506] = {.count = 1, .reusable = true}, SHIFT(222),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym__while_statement, 3),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym__while_statement, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_assignment_or_collection_or_value, 2),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_collection, 3),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_collection, 3),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 3),
  [520] = {.count = 1, .reusable = true}, SHIFT(227),
  [522] = {.count = 1, .reusable = true}, SHIFT(228),
  [524] = {.count = 1, .reusable = false}, SHIFT(228),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 3),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 3),
  [530] = {.count = 1, .reusable = true}, SHIFT(230),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_binary_op, 1),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_binary_op, 1),
  [536] = {.count = 1, .reusable = true}, SHIFT(231),
  [538] = {.count = 1, .reusable = false}, SHIFT(231),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__start_module_definition, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 1),
  [548] = {.count = 1, .reusable = true}, SHIFT(232),
  [550] = {.count = 1, .reusable = true}, SHIFT(234),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 3),
  [554] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 3),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_repeat1, 2), SHIFT_REPEAT(75),
  [559] = {.count = 1, .reusable = true}, SHIFT(235),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__switch_statement, 3),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_character, 3),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym_character, 3),
  [567] = {.count = 1, .reusable = true}, SHIFT(236),
  [569] = {.count = 1, .reusable = true}, SHIFT(237),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_string, 3),
  [575] = {.count = 2, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(164),
  [578] = {.count = 1, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2),
  [580] = {.count = 1, .reusable = true}, SHIFT(238),
  [582] = {.count = 1, .reusable = true}, SHIFT(239),
  [584] = {.count = 1, .reusable = false}, SHIFT(239),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym__if_statement, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym__if_statement, 3),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_single_line_if_statement, 3),
  [592] = {.count = 1, .reusable = true}, REDUCE(sym_single_line_if_statement, 3),
  [594] = {.count = 1, .reusable = true}, SHIFT(241),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 1),
  [598] = {.count = 1, .reusable = true}, SHIFT(243),
  [600] = {.count = 1, .reusable = true}, SHIFT(244),
  [602] = {.count = 1, .reusable = false}, SHIFT(246),
  [604] = {.count = 1, .reusable = true}, SHIFT(247),
  [606] = {.count = 1, .reusable = false}, SHIFT(252),
  [608] = {.count = 1, .reusable = true}, SHIFT(252),
  [610] = {.count = 1, .reusable = false}, SHIFT(254),
  [612] = {.count = 1, .reusable = true}, SHIFT(253),
  [614] = {.count = 1, .reusable = true}, SHIFT(255),
  [616] = {.count = 1, .reusable = false}, SHIFT(255),
  [618] = {.count = 1, .reusable = false}, REDUCE(sym_assignment_expression, 3),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_expression, 3),
  [622] = {.count = 1, .reusable = false}, SHIFT(259),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 1),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 3),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 3),
  [630] = {.count = 1, .reusable = false}, SHIFT(260),
  [632] = {.count = 1, .reusable = true}, SHIFT(260),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 3),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_array, 2),
  [640] = {.count = 1, .reusable = true}, SHIFT(261),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2), SHIFT_REPEAT(101),
  [645] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat2, 2),
  [647] = {.count = 1, .reusable = false}, REDUCE(sym_type, 3),
  [649] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2),
  [651] = {.count = 1, .reusable = false}, REDUCE(aux_sym_type_repeat1, 2),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(102),
  [656] = {.count = 1, .reusable = false}, SHIFT(262),
  [658] = {.count = 1, .reusable = true}, SHIFT(263),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 2),
  [662] = {.count = 1, .reusable = true}, SHIFT(266),
  [664] = {.count = 1, .reusable = false}, SHIFT(268),
  [666] = {.count = 1, .reusable = true}, SHIFT(269),
  [668] = {.count = 1, .reusable = true}, SHIFT(270),
  [670] = {.count = 1, .reusable = true}, SHIFT(272),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_module_definition, 4),
  [674] = {.count = 1, .reusable = true}, SHIFT(275),
  [676] = {.count = 1, .reusable = false}, REDUCE(sym_end_compound_macro, 2),
  [678] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement_with_block, 2),
  [680] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [684] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(8),
  [687] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(9),
  [690] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(37),
  [693] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(13),
  [696] = {.count = 1, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2),
  [698] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(12),
  [701] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(37),
  [704] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(123),
  [707] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(15),
  [710] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(16),
  [713] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(19),
  [716] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(124),
  [719] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(20),
  [722] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(125),
  [725] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(22),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(24),
  [731] = {.count = 2, .reusable = false}, REDUCE(aux_sym_compound_macro_block_repeat1, 2), SHIFT_REPEAT(126),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro_block, 3),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement_with_block, 2),
  [738] = {.count = 1, .reusable = true}, SHIFT(281),
  [740] = {.count = 1, .reusable = true}, SHIFT(283),
  [742] = {.count = 1, .reusable = false}, SHIFT(285),
  [744] = {.count = 1, .reusable = false}, SHIFT(290),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 3),
  [748] = {.count = 1, .reusable = true}, SHIFT(293),
  [750] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2),
  [752] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_assignment_or_collection_or_value_repeat1, 2), SHIFT_REPEAT(138),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 4),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 4),
  [759] = {.count = 1, .reusable = true}, SHIFT(294),
  [761] = {.count = 1, .reusable = true}, SHIFT(295),
  [763] = {.count = 1, .reusable = false}, SHIFT(295),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 4),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 4),
  [769] = {.count = 1, .reusable = true}, SHIFT(296),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_variables, 2),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_parameter_list, 3),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_compound_macro, 4),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_compound_macro, 4),
  [779] = {.count = 1, .reusable = true}, SHIFT(299),
  [781] = {.count = 1, .reusable = true}, SHIFT(300),
  [783] = {.count = 1, .reusable = false}, SHIFT(300),
  [785] = {.count = 1, .reusable = true}, REDUCE(sym__enum_element, 2),
  [787] = {.count = 1, .reusable = false}, SHIFT(301),
  [789] = {.count = 1, .reusable = true}, SHIFT(303),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 4),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 4),
  [795] = {.count = 1, .reusable = true}, SHIFT(306),
  [797] = {.count = 1, .reusable = true}, SHIFT(308),
  [799] = {.count = 1, .reusable = true}, SHIFT(309),
  [801] = {.count = 1, .reusable = false}, SHIFT(309),
  [803] = {.count = 1, .reusable = true}, SHIFT(311),
  [805] = {.count = 1, .reusable = true}, SHIFT(312),
  [807] = {.count = 1, .reusable = true}, SHIFT(313),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 1),
  [811] = {.count = 1, .reusable = true}, SHIFT(314),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_return_list, 2),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_type, 1),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_static_assignment, 2),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_static_assignment, 2),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_array, 3),
  [825] = {.count = 1, .reusable = true}, SHIFT(318),
  [827] = {.count = 1, .reusable = true}, SHIFT(322),
  [829] = {.count = 1, .reusable = true}, SHIFT(323),
  [831] = {.count = 1, .reusable = false}, SHIFT(320),
  [833] = {.count = 1, .reusable = true}, SHIFT(321),
  [835] = {.count = 1, .reusable = false}, SHIFT(324),
  [837] = {.count = 1, .reusable = false}, SHIFT(326),
  [839] = {.count = 1, .reusable = true}, SHIFT(327),
  [841] = {.count = 1, .reusable = true}, SHIFT(328),
  [843] = {.count = 1, .reusable = true}, SHIFT(330),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement_with_block, 3),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_if_statement_with_block, 3),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym__default_statement, 2),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym__default_statement, 2),
  [853] = {.count = 1, .reusable = true}, SHIFT(332),
  [855] = {.count = 1, .reusable = true}, SHIFT(333),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement_with_block, 3),
  [859] = {.count = 1, .reusable = true}, SHIFT(334),
  [861] = {.count = 1, .reusable = true}, REDUCE(aux_sym_switch_statement_with_block_repeat1, 2),
  [863] = {.count = 2, .reusable = true}, REDUCE(aux_sym_switch_statement_with_block_repeat1, 2), SHIFT_REPEAT(217),
  [866] = {.count = 1, .reusable = true}, SHIFT(337),
  [868] = {.count = 1, .reusable = false}, REDUCE(sym_function_definition, 4),
  [870] = {.count = 1, .reusable = true}, SHIFT(339),
  [872] = {.count = 1, .reusable = false}, REDUCE(sym_group_expression, 5),
  [874] = {.count = 1, .reusable = true}, REDUCE(sym_group_expression, 5),
  [876] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2),
  [878] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_variables_repeat1, 2), SHIFT_REPEAT(232),
  [881] = {.count = 1, .reusable = true}, SHIFT(340),
  [883] = {.count = 1, .reusable = true}, SHIFT(341),
  [885] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [887] = {.count = 1, .reusable = false}, SHIFT(342),
  [889] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(244),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_variable_definition, 5),
  [894] = {.count = 1, .reusable = false}, REDUCE(sym_variable_definition, 5),
  [896] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 5),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 5),
  [900] = {.count = 1, .reusable = true}, SHIFT(343),
  [902] = {.count = 1, .reusable = true}, SHIFT(344),
  [904] = {.count = 1, .reusable = true}, SHIFT(345),
  [906] = {.count = 1, .reusable = false}, SHIFT(345),
  [908] = {.count = 1, .reusable = true}, REDUCE(sym__comma_list_types, 2),
  [910] = {.count = 1, .reusable = true}, REDUCE(sym_type, 2),
  [912] = {.count = 1, .reusable = true}, SHIFT(351),
  [914] = {.count = 1, .reusable = false}, SHIFT(354),
  [916] = {.count = 1, .reusable = true}, SHIFT(354),
  [918] = {.count = 1, .reusable = false}, SHIFT(356),
  [920] = {.count = 1, .reusable = true}, SHIFT(355),
  [922] = {.count = 1, .reusable = true}, SHIFT(357),
  [924] = {.count = 1, .reusable = false}, SHIFT(357),
  [926] = {.count = 1, .reusable = true}, SHIFT(360),
  [928] = {.count = 1, .reusable = false}, SHIFT(361),
  [930] = {.count = 1, .reusable = true}, SHIFT(362),
  [932] = {.count = 1, .reusable = true}, SHIFT(363),
  [934] = {.count = 1, .reusable = false}, REDUCE(sym__case_statement, 3),
  [936] = {.count = 1, .reusable = true}, REDUCE(sym__case_statement, 3),
  [938] = {.count = 1, .reusable = true}, REDUCE(sym_end_switch, 2),
  [940] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement_with_block, 3),
  [942] = {.count = 1, .reusable = true}, SHIFT(364),
  [944] = {.count = 1, .reusable = true}, REDUCE(sym_switch_statement_with_block, 4),
  [946] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement_with_block, 3),
  [948] = {.count = 1, .reusable = true}, SHIFT(365),
  [950] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 6),
  [952] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [954] = {.count = 1, .reusable = true}, SHIFT(366),
  [956] = {.count = 1, .reusable = false}, REDUCE(sym_function_signature, 6),
  [958] = {.count = 1, .reusable = true}, REDUCE(sym_function_signature, 6),
  [960] = {.count = 1, .reusable = true}, SHIFT(367),
  [962] = {.count = 1, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2),
  [964] = {.count = 2, .reusable = true}, REDUCE(aux_sym__comma_list_types_repeat1, 2), SHIFT_REPEAT(314),
  [967] = {.count = 1, .reusable = true}, REDUCE(aux_sym_type_repeat2, 2),
  [969] = {.count = 1, .reusable = true}, REDUCE(sym_type, 3),
  [971] = {.count = 1, .reusable = true}, SHIFT(368),
  [973] = {.count = 1, .reusable = true}, SHIFT(369),
  [975] = {.count = 1, .reusable = false}, SHIFT(369),
  [977] = {.count = 1, .reusable = true}, SHIFT(371),
  [979] = {.count = 1, .reusable = true}, SHIFT(372),
  [981] = {.count = 1, .reusable = true}, SHIFT(373),
  [983] = {.count = 1, .reusable = true}, SHIFT(374),
  [985] = {.count = 1, .reusable = true}, SHIFT(375),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym_case_statement_with_block, 4),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_default_statement_with_block, 4),
  [991] = {.count = 1, .reusable = false}, REDUCE(sym_enum_definition, 7),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 7),
  [995] = {.count = 1, .reusable = true}, SHIFT(376),
  [997] = {.count = 1, .reusable = true}, SHIFT(377),
  [999] = {.count = 1, .reusable = false}, SHIFT(377),
  [1001] = {.count = 1, .reusable = true}, SHIFT(378),
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
