module.exports = grammar({
  name: 'marshmallow',

  extras: $ => [
      /\s/,
    ],
    conflicts: $ => [
    [$._value, $.compound_macro],
  ],

  rules: {

    source_file: $ => choice(
      repeat($._sentence),
    ),

    _space: $ => /\s/,

    _block_comment_star: $ =>
       seq('/*',repeat(choice(/[^/]/,$._block_comment_star,$._block_comment_plus)),'*/'),

   _block_comment_plus: $ =>
      seq('+-',repeat(choice(/[^+]/,$._block_comment_plus,$._block_comment_star)),'-+'),

    _comment: $ => choice(
     seq('//', /.*/),
     seq('--', /.*/),
     seq('**', /.*/),
     $._block_comment_star,
     $._block_comment_plus,
   ),

    _comma_list_variables: $ => seq($.variable_definition,repeat(seq(',',$.variable_definition))),

    _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

    _comma_list_collection_or_value: $ => seq($._collection_or_value,repeat(seq(',',$._collection_or_value))),

    _comma_list_assignment_or_collection_or_value: $ => seq($._assignment_or_collection_or_value,repeat(seq(',',$._assignment_or_collection_or_value))),

    _comma_list_assignment_or_values: $ => seq($._assignment_or_value,repeat(seq(',',$._assignment_or_value))),

    _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

    _comma_list_types: $ => seq($.type,repeat(seq(',',$.type))),

    readonly: $ => 'readonly',

    access_control: $ => choice('private', 'protected', 'publish'),

    _sentence: $ => choice(
    seq(
      choice(
        $.definition,
        $.statement),
        '.',
      ),
      $._comment,
    ),

    definition: $ => choice(
     $.module_definition,
     $.declaration_definition,
     $.function_definition,
     $.variable_definition,
     $.enum_definition,
     $.compound_macro,
     $.end_compound_macro,
    ),

    module_definition: $ => seq(
      'module',
      $.identifier,
    ),

    compound_macro: $ => seq(
      $.identifier,
      repeat(seq($._space,$.identifier)),
      optional($.parameter_list),
    ),

    end_compound_macro: $ => seq('end',$.compound_macro),

    _enum_element: $ => seq($.identifier,optional($.static_assignment)),

    enum_definition: $ => seq(
    'enum',
    '(',
    seq($._enum_element,repeat(seq(',',$._enum_element))),
    ')',
    $.identifier,
    ),

    is_function: $ => 'function',

    is_method: $ => 'method',

    function_definition: $ => seq(
    optional($.access_control),
    choice(
     $.is_function,
     $.is_method,
    ),
    $.identifier,
    optional($.parameter_list),
    optional($.return_list),
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
     choice($.function_definition,
     $.variable_definition,
     ),
   ),

    statement: $ => choice(
      choice(
      $.expression_statement,
      $._control_flow_statement,
      $.return_statement,
      $.end_statement,
    ),
  ),

  end_statement: $ => seq(
    'end',
    choice(
    'module',
    'function',
    'method',
    'if',
    'while',
    'switch',
    'case',
    'default',
   ),
  ),

  _control_flow_statement: $ => choice(
    $.if_statement,
    $.while_statement,
    $.switch_statement,
    $.case_statement,
    $.default_statement,
    $.goto_statement,
    $.section_statement,
    $.single_line_if_statement,
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
    $.statement
    ,
  ),

  if_statement: $ => seq(
   'if',
   $.group_expression,
  ),

  while_statement: $ => seq(
   'while',
   $.group_expression,
  ),

  switch_statement: $ => seq(
   'switch',
   $.group_expression,
  ),

  case_statement: $ => seq(
   'case',
   $.group_expression,
  ),

  default_statement: $ => seq(
   'default',
  ),

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
        repeat($._space), //why?
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

    string: $ => seq('"',repeat(choice(token(/[^\"]/),$._escape_sequence)),'"'),

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
    '\\\"',
    '\\\'',
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
