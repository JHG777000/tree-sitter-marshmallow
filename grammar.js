module.exports = grammar({
  name: 'marshmallow',

  extras: $ => [
      /\s/,
    ],
    conflicts: $ => [
    [$._base_type,$.array_expression],
    [$._base_type,$.extension],
    [$._base_type,$._value],
    [$.access_expression,$.call_expression],
    [$.access_expression,$.array_expression],
    [$.scope_expression],
    [$.access_expression],
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
     seq('++', /.*/),
     $._block_comment_star,
     $._block_comment_plus,
   ),

    _comma_list_variables: $ => seq(choice($.variable_definition,$.container_definition),
      repeat(seq(',',choice($.variable_definition,$.container_definition)))),

    _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

    _comma_list_collection_or_value: $ => seq($._collection_or_value,repeat(seq(',',$._collection_or_value))),

    _comma_list_assignment_or_collection_or_value: $ => seq($._assignment_or_collection_or_value,repeat(seq(',',$._assignment_or_collection_or_value))),

    _comma_list_assignment_or_values: $ => seq($._assignment_or_value,repeat(seq(',',$._assignment_or_value))),

    _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

    _comma_list_types: $ => seq($.type,repeat(seq(',',$.type))),

    access_control: $ => choice('private', 'protected'),

    _sentence: $ => choice(
    seq(
      choice(
        $.definition,
        $.statement,
       ),
        '.',
      ),
      $._comment,
    ),

    definition: $ => choice(
     $.use_definition,  
     $.module_definition,
     $.declaration_definition,
     $.function_definition,
     $.variable_definition,
     $.container_definition,
     $.enum_definition,
     $.extension,
     $.end_extension,
    ),

    use_definition: $ => seq(
      choice(
        'use',
        'require',
      ),
      choice(
        'module',
        'package',
      ),
      choice(
       $.identifier,
       $.scope_expression,
      ),
    ),

    module_definition: $ => seq(
      'module',
      choice(
       $.identifier,
       $.scope_expression,
      ),
    ),

    //identifier_definition: $ => prec(1,seq($.identifier,$.identifier)),

    extension: $ => prec.dynamic(1,seq(
      choice(
       $.identifier,
       $.scope_expression,
      ),
     $.identifier,
     repeat(seq(optional($._space),choice(seq($.identifier),$.string))),
     optional($.parameter_list),
   )),

    end_extension: $ => seq('end',$.identifier),

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

    is_interface: $ => 'interface',

    is_overridable: $ => 'overridable',

    is_override: $ => 'override',

    _override: $ => choice($.is_overridable,$.is_override),

    is_primitive: $ => 'primitive',

    function_definition: $ => seq(
    optional($.access_control),
    optional($.is_interface),
    optional($._override),
    optional($.is_primitive),
    choice(
     $.is_function,
     $.is_method,
    ),
    $.identifier,
    optional($.parameter_list),
    optional($.return_list),
    ),

    readability: $ => seq(
      'readonly',
      'writelimited',
      'private_write',
      'protected_write',
      'system_readwrite',
       optional($.array),
    ),

    variable_definition: $ => seq(
      seq(
       optional($.access_control),
       optional($.readability),
       $.type,
       $.identifier,
       ),
       optional($.static_assignment),
     ),

     container_definition: $ => seq(
       seq(
        $.identifier,
        ':',
        $.container_types,
        ),
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

    container_types: $ => choice(
      'string',
      'symbol',
      'arguments',
      $.type,
    ),

    type: $ => seq(
     $._base_type,
     repeat($.pointer),
     repeat($.array),
   ),

   _base_type: $ => prec.dynamic(1,choice(
     $.identifier,
     $.primitive_type,
   )),

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
     choice(
      $.function_definition,
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
        $.cast_expression,
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

   access_expression: $ => seq(
    $._value,
    $._access_op,
    $._value,
   ),

    cast_expression: $ => seq(
      $.cast_ops,
      $.group_expression,
    ),

    cast_expression: $ => seq(
      $.cast_ops,
      $.group_expression,
    ),

    array_expression: $ => seq(
      $._value,
      $.array,
    ),

    call_expression: $ => seq(
      $._value,
      '(',
      $._comma_list_values,
      ')',
    ),

    scope_expression: $ => seq(
      choice(
       $.identifier,
       $.scope_expression,
      ),
      $._scope_op,
      choice(
       $.identifier,
       $.scope_expression,
      ),
    ),

    binding_expression: $ => seq(
     choice(
     $.access_expression,
     $.array_expression,
     $.call_expression,
     $.scope_expression,
   )
  ),

   _container_op: $ => ':',

   _scope_op: $ => '::',

   _access_op: $ => '->',

   _cast_op: $ => '$',

   _reinterpret_op: $ => '$$',

   _convert_op: $ => '$$$',

   cast_ops: $ => seq(
    choice(
      '$',
      '$$',
      '$$$'),
      $.type,
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
      '$',
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
      $.binding_expression,
    ),

    _literal: $ => choice(
      $._number,
      $.string,
      $.character,
      $.null,
    ),

    null: $ => 'null',

    identifier: $ => /[^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!_0-9][^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!]*/,

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
