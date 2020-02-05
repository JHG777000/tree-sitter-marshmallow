module.exports = grammar({
  name: 'marshmallow',

  extras: $ => [
      /\s/,
      $._comment,
    ],

    conflicts: $ => [
    [$.readability],
    [$._base_type,$.binding_expression],
    [$.property_definition,$._value],
    [$.attribute_definition,$._value],
    [$._basic_type_value],
    [$.type_expression,$._value],
    [$._polymorph_type_value,$._value],
    [$.expression_statement,$._value],
    [$.scope_expression,$._value],
    [$.scope_expression],
    [$.scope_expression,$.binding_expression],
    [$.return_list],
    [$.access_expression,$.call_expression],
    [$.access_expression],
    [$.static_assignment,$.call_expression],
    [$.assignment_expression,$.call_expression],
    [$.type_expression,$._base_type],
    [$.type_expression,$._base_type,$._value],
    [$._base_type,$._value],
    [$.case_statement],
    [$.binding_expression,$.identifier_expression],
    [$.assignment_expression,$.identifier_expression],
    [$.code_block],
    [$._base_type,$.extension_definition],
    [$.identifier_expression,$._value],
    [$.access_expression,$.index_expression],
    [$.extension_list],
   ],

  rules: {

    source_file: $ => choice(
      $.package_definition,
      repeat($.module_definition),
    ),

     package_definition: $ => seq(
      field('access_control',optional($.access_control)),
      'package',
      field('name',$.identifier),
       $.end_of_line,
       repeat(
        choice(
         $.use_definition_package,
         $.property_definition,
         $.attribute_definition,
       ),
     ),
     'end',
     'package',
     $.end_of_line,
   ),

   module_definition: $ => seq(
    field('access_control',optional($.access_control)),
    'module',
     field('name',$.identifier),
     $.end_of_line,
     repeat(
      choice(
       $.use_definition_module,
       $.property_definition,
       $.attribute_definition,
       $.traits_definition,
       $.declaration_definition,
       $.type_definition,
       $.variable_definition,
       //$.enum_definition,
       //$.class_definition,
       $.extension_definition,
       $.code_definition,
       $.control_flow_definition,
      )
     ),
     'end',
     'module',
     $.end_of_line,
    ),

    use_definition_module : $ => seq(
      choice(
        'use',
        'require',
      ),
      choice(
        'enum',
        'class',
        'module',
      ),
      $.identifier_expression,
    ),

    use_definition_package : $ => seq(
      choice(
        'use',
        'require',
      ),
      choice(
        'source',
        'package',
      ),
      $.string,
    ),

    traits_definition: $ => seq(
      'traits',
      '(',
       field('variable',$.identifier),
      ')',
       $.end_of_line,
       repeat(
        choice(
         $.property_definition,
         $.attribute_definition,
        ),
       ),
       'end',
       'traits',
       $.end_of_line,
    ),

    property_definition: $ => seq(
      'property',
      choice(
       field('name',$.identifier),
       field('value',optional($._value)),
      ),
      $.end_of_line,
    ),

    attribute_definition: $ => seq(
      'attribute',
      choice(
       field('name',$.identifier),
       field('value',optional($._value)),
      ),
      $.end_of_line,
    ),

    declaration_definition: $ => seq(
      field('access_control',optional($.access_control)),
      field('declaration_type',choice('declare','external')),
      choice(
       $.code_definition,
       $.variable_definition,
      ),
    ),

    type_definition: $ => seq(
     'typedef',
     field('old_type',$.type_expression),
     field('new_type',$.type_expression),
    ),

    type_expression: $ => choice(
      $.freeable_expression,
      $.binding_expression,
      $._type_value,
    ),

    freeable_expression: $ => seq(
     'freeable',
     $._type_value,
    ),

    _type_value: $ => choice(
     $._static_type_value,
     $._polymorph_type_value,
     $._basic_type_value,
    ),

    _static_type_value: $ => seq(
      'static',
      choice(
        $.static_types,
        $._basic_type_value,
      ),
    ),

    _polymorph_type_value: $ => seq(
      'polymorph',
      choice(
        $.polymorph_types,
        $.binding_expression,
      ),
    ),

    _basic_type_value: $ => seq(
      $._base_type,
      repeat($.pointer),
      repeat(
        choice(
        $.array_definition,
        $.unsafe_array_definition,
      )),
    ),

    _base_type: $ => choice(
      $.identifier_expression,
      $.binding_expression,
      $.primitive_type,
    ),

    static_types: $ => choice(
      'datum',
      'field',
    ),

    polymorph_types: $ => choice(
      'type',
      'anyvar',
      'vardef',
      'arguments',
      'identifier',
    ),

    primitive_type: $ => choice(
      ...[8, 16, 32, 64].map(n => `i${n}`),
      ...[8, 16, 32, 64].map(n => `u${n}`),
      ...[32, 64].map(n => `f${n}`),
      ...[8, 16, 32].map(n => `s${n}`),
    ),

    pointer: $ => '*',

    array_definition: $ => seq(
      '[',
       optional(
         $._value,
       ),
      ']',
    ),

    unsafe_array_definition: $ => seq(
      '[[',
       optional(
         $._value,
       ),
      ']]',
    ),

    readability: $ => seq(
      choice(
       'readonly',
       'writelimited',
       'private_write',
       'protected_write',
       'system_readwrite',
       'thread_readwrite',
      ),
      optional($.array_definition),
    ),

    variable_definition: $ => seq(
       optional($.access_control),
       field('is_export',optional('export')),
       optional($.readability),
       $.type_expression,
       $.identifier,
       optional($.static_assignment),
       $.end_of_line,
     ),

     local_variable_definition: $ => seq(
       choice(
        seq(
         field('is_preserved',optional('preserved')),
         field('is_persistent',optional('persistent')),
        ),
        field('inoutpass',choice('in','out','inout','pass')),
       ),
       optional($.readability),
       $.type_expression,
       $.identifier,
       optional($.static_assignment),
       $.end_of_line,
     ),

     parameter_variable_definition: $ => seq(
       $.type_expression,
       $.identifier,
       optional($.static_assignment),
     ),

     static_assignment: $ => seq(
       ':=',
       $._value,
     ),

     control_flow_definition: $ => $.control_flow_statement,

     _code_types: $ => choice(
      'function',
      'method',
      'procedure',
      'extension',
      'operator',
    ),

    _operator_token: $ => token(
      choice(
        '+',
        '-',
        '*',
        '/',
        '%',
        '>',
        '<',
        '@',
        '#',
        '&',
        '|',
        '^',
        '!',
        '?',
      ),
    ),

    operator_name: $ => choice(
       seq(
        $._operator_token,
        optional($._operator_token),
        optional($._operator_token),
      ),
      '[]',
      '[[]]',
    ),

    overridable_operator: $ => seq(
      '(',
      $._operator_token,
      optional($._operator_token),
      optional($._operator_token),
      ')',
    ),

    code_block: $ => repeat1(
    choice(
     $.property_definition,
     $.attribute_definition,
     $.traits_definition,
     $.local_variable_definition,
     $.extension_definition,
     $.code_definition,
     $.statement,
     )
    ),

    code_definition_type: $ => choice('export','override','overridable','omega'),

    end_code: $ => seq('end',field('end_code_type',$._code_types)),

     code_definition: $ => seq(
       optional($.access_control),
       optional($.code_definition_type),
       field('code_type',$._code_types),
       field('name',choice($.identifier,$.operator_name)),
       optional($.extension_list),
       optional($.parameter_list),
       optional($.return_list),
       $.end_of_line,
       optional($.code_block),
       $.end_code,
       $.end_of_line,
     ),

     end_extension_definition: $ => seq('end',$.identifier_expression),

     extension_list: $ => seq(
       ',',
       seq($.parameter_list,repeat(seq(',',$.parameter_list))),
       ',',
     ),

     extension_definition: $ => seq(
      field('name',$.identifier_expression),
      choice($.identifier,$.string),
      repeat(choice($.identifier,$.string)),
      optional($.parameter_list),
      $.end_of_line,
      optional($.code_block),
      $.end_extension_definition,
      $.end_of_line,
     ),

     parameter_list: $ => seq(
       '(',
        optional($._comma_list_parameter_variable_definition),
       ')',
     ),

     return_list: $ => seq(
      'returns',
       optional($._comma_list_types),
      ),

      statement: $ => choice(
        $.expression_statement,
        $.control_flow_statement,
      ),

     control_flow_statement: $ => choice(
       $.if_statement,
       $.while_statement,
       $.switch_statement,
       $.case_statement,
       $.default_statement,
       $.goto_statement,
       $.section_statement,
       $.single_line_if_statement,
       $.return_statement,
     ),

     goto_statement: $ => seq(
       'goto',
       $.identifier,
       $.end_of_line,
     ),

     section_statement: $ => seq(
       'section',
       $.identifier,
       $.end_of_line,
     ),

     single_line_if_statement: $ => seq(
       'if',
       $.group_expression,
       $.statement,
    ),

    end_if: $ => seq('end','if'),

    if_statement: $ => seq(
     'if',
     $.group_expression,
     $.end_of_line,
     optional($.code_block),
     $.end_if,
     $.end_of_line,
    ),

    end_while: $ => seq('end','while'),

    while_statement: $ => seq(
     'while',
     $.group_expression,
     $.end_of_line,
     optional($.code_block),
     $.end_while,
     $.end_of_line,
    ),

    end_switch: $ => seq('end','switch'),

    end_case: $ => seq('end','case',$.end_of_line),

    switch_statement: $ => seq(
     'switch',
     $.group_expression,
     $.end_of_line,
     repeat(
      choice(
      $.case_statement,
      $.end_case,
      $.default_statement,
      ),
     ),
     $.end_switch,
     $.end_of_line,
    ),

    case_statement: $ => seq(
     'case',
     $.group_expression,
     $.end_of_line,
     optional($.code_block),
    ),

    end_default: $ => seq('end','default'),

    default_statement: $ => seq(
     'default',
     $.end_of_line,
     optional($.code_block),
     $.end_default,
     $.end_of_line,
    ),

    return_statement: $ => seq(
      'return',
      $._assignment_or_value,
      $.end_of_line,
    ),

    expression_statement: $ => seq(
     choice(
      $.group_expression,
      $.assignment_expression,
     ),
     $.end_of_line
    ),

    _scope_op: $ => '::',

    access_op: $ => '->',

    overridable_access_op: $ => '-->',

    safe_index_op: $ => seq('[',$._value,']'),

    unsafe_index_op: $ => seq('[[',$._value,']]'),

    _cast_ops: $ => seq(
     choice(
       '$',
       '$$',
       '$$$'),
       $.type_expression,
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
      $.overridable_operator,
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
        $._value,
        $.assignment_op,
        $._value,
      ),
      seq(
        $._value,
        $.assignment_post_op,
      ),
    ),

    access_expression: $ => seq(
     $._value,
     choice(
       $.access_op,
       $.overridable_access_op,
     ),
     $._value,
    ),

    cast_expression: $ => seq(
      $._cast_ops,
      $.group_expression,
    ),

    index_expression: $ => choice(
      seq($._value,$.safe_index_op),
      seq($._value,$.unsafe_index_op),
    ),

    call_expression: $ => seq(
      $._value,
      '(',
      optional($._comma_list_assignment_or_values),
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
       $.binding_expression,
      ),
    ),

    binding_expression: $ => seq(
     choice(
     $.access_expression,
     $.index_expression,
     $.call_expression,
     $.scope_expression,
   )
  ),

  identifier_expression: $ => choice($.identifier,$.scope_expression),

    _space: $ => /\s/,

    _comment: $ => token(
      choice(
       seq('----', /.*/),
       seq('++++', /.*/),
       seq('****', /.*/),
       seq('...', /.*/),
       seq('//', /.*/),
       //https://github.com/tree-sitter/tree-sitter-c/blob/6002fcd5e86bb1e8670157bb008b97dbaf656d95/grammar.js#L918
       seq(
       '/*',
       /[^*]*\*+([^/*][^*]*\*+)*/,
       '/'
       ),
       seq(
       '+-',
       /[^-]*\-+([^-+][^-]*\-+)*/,
       '+'
       ),
      ),
     ),

     null: $ => 'null',

     identifier: $ => /[^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!_0-9][^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!]*/,

     datum_literal: $ => /[^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!0-9][^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!]*/,

     string: $ => seq('"',repeat(choice(token.immediate(prec(1,(/[^\"]/))),$._escape_sequence)),'"'),

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

     collection: $ => seq(
     '{',
      $._comma_list_assignment_or_values,
     '}',
     ),

     _value: $ => choice(
       $._literal,
       $.collection,
       $.identifier,
       $.group_expression,
       $.binding_expression,
     ),

     _literal: $ => choice(
       $._number,
       $.string,
       $.datum_literal,
       $.character,
       $.null,
     ),

     oct: $ => token(seq('0',/[0-7]/)),

     integer: $ => token(/\d+/),

     long: $ => token(seq(/\d+/,'l')),

     float: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),'f',')')),

     double: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),')')),

     hex: $ => token(seq('0x', /[0-9a-fA-f]+/)),

     binary: $ => token(seq('0b', /[01]+/)),

     _assignment_or_value: $ => choice($._value,$.assignment_expression),

     _comma_list_variables: $ => seq($.variable_definition,
       repeat(seq(',',$.variable_definition))),

     _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

     _comma_list_assignment_or_values: $ => seq($._assignment_or_value,repeat(seq(',',$._assignment_or_value))),

     _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

     _comma_list_types: $ => seq($.type_expression,repeat(seq(',',$.type_expression))),

     _comma_list_parameter_variable_definition: $ => seq($.parameter_variable_definition,repeat(seq(',',$.parameter_variable_definition))),

     access_control: $ => choice('private', 'protected'),

     end_of_line: $ => '.',

  }

});
