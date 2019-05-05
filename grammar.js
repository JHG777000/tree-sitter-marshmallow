module.exports = grammar({
  name: 'marshmallow',

  extras: $ => [
      /\s/,
      $._comment,
    ],
    conflicts: $ => [
    [$._definitions, $.compound_macro_block],
  ],

  rules: {

    source_file: $ => choice(repeat($.module_definition),$.sentences),

    sentences: $ => seq('\u{200B}',repeat($.sentence)),

    _space: $ => /\s/,

    //https://github.com/tree-sitter/tree-sitter-c/blob/5b250e138af1d56331117e328ff87ec9d5feb829/grammar.js#L734
    _comment: $ => token(choice(
     seq('//', /.*/),
     seq('---', /.*/),
     seq(
       '+-',
       /[^-]*\-+([^-+][^-]*\-+)*/,
       '+'
     ),
   )),

    _comma_list_variables: $ => seq($.variable_definition,repeat(seq(',',$.variable_definition))),

    _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

    _comma_list_collection_or_value: $ => seq($._collection_or_value,repeat(seq(',',$._collection_or_value))),

    _comma_list_assignment_or_collection_or_value: $ => seq($._assignment_or_collection_or_value,repeat(seq(',',$._assignment_or_collection_or_value))),

    _comma_list_assignment_or_values: $ => seq($._assignment_or_value,repeat(seq(',',$._assignment_or_value))),

    _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

    _comma_list_types: $ => seq($.type,repeat(seq(',',$.type))),

    readonly: $ => 'readonly',

    access_control: $ => choice('private', 'protected', 'publish'),

    end_module: $ => seq('end','module'),

    end_function: $ => seq('end','function'),

    end_method: $ => seq('end','method'),

    end_if: $ => seq('end','if'),

    end_while: $ => seq('end','while'),

    end_switch: $ => seq('end','switch'),

    end_case: $ => seq('end','case'),

    end_default: $ => seq('end','default'),

    _end_function: $ => choice($.end_function,$.end_method),

    _start_module_definition: $ => seq('module',$.identifier,'.',),

    start_module_definition: $ => $._start_module_definition,

    //unstructured subgrammar for eval statements
    sentence: $ => choice(
      $.start_module_definition,
      $.function_signature,
      $.enum_definition,
      $.compound_macro,
      $.end_compound_macro,
      $.expression_statement,
      $.return_statement,
      $.single_line_if_statement,
      seq($._control_flow_statement_without_block,'.'),
      seq($._variable_statement,'.'),
      seq($.end_module,'.'),
      seq($.end_if,'.'),
      seq($.end_while,'.'),
      seq($.end_case,'.'),
      seq($.end_default,'.'),
      seq($._end_function,'.'),
    ),

    module_definition: $ => seq(
      $._start_module_definition,
      repeat(
        $._definitions
      ),
      $.end_module,
      '.',
    ),

    _definitions: $ => choice(
     $.declaration_definition,
     $.function_definition,
     seq($.variable_definition,'.'),
     $.enum_definition,
     $.compound_macro,
     $.compound_macro_block,
    ),

    compound_macro_block: $ => seq(
      $.compound_macro,
      repeat($._statement),
      $.end_compound_macro,
    ),

    end_compound_macro: $ => seq('end',$.compound_macro),

    compound_macro: $ => seq(
      $.identifier,
      repeat(seq($._space,$.identifier)),
      optional($.parameter_list),
      '.'
    ),

    _enum_element: $ => seq($.identifier,optional($.static_assignment)),

    enum_definition: $ => seq(
    'enum',
    '(',
    seq($._enum_element,repeat(seq(',',$._enum_element))),
    ')',
    $.identifier,
    '.',
    ),

    is_function: $ => 'function',

    is_method: $ => 'method',

    function_signature: $ => seq(
    optional($.access_control),
    choice(
     $.is_function,
     $.is_method,
    ),
    $.identifier,
    optional($.parameter_list),
    optional($.return_list),
    '.',
    ),

    function_definition: $ => seq(
      $.function_signature,
      repeat($._statement),
      $._end_function,
      '.',
    ),

    variable_definition: $ => seq(
     optional($.access_control),
     optional($.readonly),
     $.type,
     $.identifier,
     optional($.static_assignment),
    ),

    parameter_list: $ => seq(
      '(',
       optional($._comma_list_variables),
      ')',
    ),

    return_list: $ => seq(
      'returns',
       optional($._comma_list_types),
    ),

    type: $ => seq(
     $._base_type,
     repeat($.pointer),
     repeat($.array),
   ),

   _base_type: $ => choice(
     $.identifier,
     $.primitive_type,
   ),

   primitive_type: $ => choice(
     ...[8, 16, 32, 64].map(n => `i${n}`),
     ...[8, 16, 32, 64].map(n => `u${n}`),
     ...[32, 64].map(n => `f${n}`),
     ...[8, 16, 32].map(n => `s${n}`),
   ),

   pointer: $ => seq(
     '*',
   ),

   array: $ => seq(
     '[',
     optional($.integer),
     ']',
   ),

   is_declare: $ => 'declare',

   is_external: $ => 'external',

   declaration_definition: $ => seq(
     choice($.is_declare,
     $.is_external),
     choice($.function_signature,
     $.variable_definition,
     ),
   ),

    _statement: $ => choice(
      seq(choice(
      $._variable_statement,
      $.expression_statement,
      $._control_flow_statement,
      $.return_statement,
    ),
    '.',
    ),
    $.single_line_if_statement,
  ),

  _control_flow_statement: $ => choice(
    $.if_statement_with_block,
    $.while_statement_with_block,
    $.switch_statement_with_block,
    $.goto_statement,
    $.section_statement,
  ),

  _control_flow_statement_without_block: $ => choice(
    $.if_statement,
    $.while_statement,
    $.switch_statement,
    $.goto_statement,
    $.section_statement,
  ),

  goto_statement: $ => seq(
    'goto',
    $.identifier,
  ),

  section_statement: $ => seq(
    'section',
    $.identifier,
  ),

  single_line_if_statement: $ => seq(
    'if',
    $.group_expression,
    $._statement
    ,
  ),

  if_statement: $ => $._if_statement,

  _if_statement: $ => seq(
   'if',
   $.group_expression,
   '.',
  ),

  if_statement_with_block: $ => seq(
   $._if_statement,
   repeat($._statement),
   $.end_if,
  ),

  while_statement: $ => $._while_statement,

  _while_statement: $ => seq(
   'while',
   $.group_expression,
   '.',
  ),

  while_statement_with_block: $ => seq(
   $._while_statement,
   repeat($._statement),
   $.end_while,
  ),

  switch_statement: $ => $._switch_statement,

  _switch_statement: $ => seq(
   'switch',
   $.group_expression,
   '.',
  ),

  switch_statement_with_block: $ => seq(
   $._switch_statement,
   repeat($.case_statement_with_block),
   $.default_statement_with_block,
   $.end_switch,
  ),

  case_statement: $ => $._case_statement,

  _case_statement: $ => seq(
   'case',
   $.group_expression,
   '.',
  ),

  case_statement_with_block: $ => seq(
   $._case_statement,
   repeat($._statement),
   $.end_case,
   '.',
  ),

  default_statement: $ => $._default_statement,

  _default_statement: $ => seq(
   'default',
   '.',
  ),

  default_statement_with_block: $ => seq(
   $._default_statement,
   repeat($._statement),
   $.end_default,
   '.',
  ),

  _variable_statement: $ => $.variable_definition,

  static_assignment: $ => seq(
    ':=',
    $._collection_or_value,
  ),

    expression_statement: $ => choice(
      $.group_expression,
      $.assignment_expression,
    ),

    return_statement: $ => seq(
      'return',
      $._assignment_or_collection_or_value,
    ),

    group_expression: $ => seq(
     '(',
      choice(
        seq(
          $.unary_op,
          $._value
        ),
        seq(
          $._value,
          $.binary_op,
          $._value
        ),
        $._value,
        $.assignment_expression,
       ),
     ')',
    ),

    assignment_expression: $ => choice(
      seq(
        $._collection_or_value,
        $.assignment_op,
        $._collection_or_value,
      ),
      seq(
        $._value,
        $.assignment_post_op,
      ),
    ),

    unary_op: $ => choice(
     '-',
     '&',
     '*',
     '!',
     '~',
    ),

    binary_op: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '%',
      '&',
      '|',
      '^',
      '>',
      '<',
      '>=',
      '<=',
      '!=',
      '==',
      '&&',
      '||',
      '>>',
      '<<',
    ),

    assignment_op: $ => choice(
      ':=',
      '+=',
      '-=',
      '*=',
      '/=',
      '%=',
      '&=',
      '|=',
      '^=',
      '>>=',
      '<<=',
    ),

    assignment_post_op: $ => choice(
      '++',
      '--',
    ),

    _assignment_or_collection_or_value: $ => choice($._collection_or_value,$.assignment_expression),

    _assignment_or_value: $ => choice($._value,$.assignment_expression),

    _collection_or_value: $ => choice($._value,$.collection),

    collection: $ => seq(
    '{',
     $._comma_list_assignment_or_collection_or_value,
    '}',
    ),

    _value: $ => choice(
      $._literal,
      $.identifier,
      $.group_expression,
    ),

    _literal: $ => choice(
      $._number,
      $.string,
      $.character,
      $.null,
    ),

    null: $ => 'null',

    identifier: $ => /[^\[\]\'\.\"\*\-\+\\%\s\(\){}:=,!_0-9][^\[\]\'\.\"\*\-\+\\%\s\(\){}:=,!]*/,

    string: $ => seq('"',repeat(token(/[^\"]+/)),'"'),

    character: $ => seq("'",choice(token(/[^\'\s]/),$._escape_sequence),"'"),

    _escape_sequence: $ => choice(
    '\\\\',
    '\\0',
    '\\a',
    '\\b',
    '\\f',
    '\\n',
    '\\n',
    '\\r',
    '\\t',
    '\\v',
    ),

    _number: $ => choice(
      $.integer,
      $.long,
      $.float,
      $.double,
      $.hex,
      $.oct,
      $.binary,
    ),

    oct: $ => token(seq('0',/[0-7]/)),

    integer: $ => token(/\d+/),

    long: $ => token(seq(/\d+/,'l')),

    float: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),'f',')')),

    double: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),')')),

    hex: $ => token(seq('0x', /[0-9a-fA-f]+/)),

    binary: $ => token(seq('0b', /[01]+/)),

  }
});
