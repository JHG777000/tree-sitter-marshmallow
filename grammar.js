module.exports = grammar({
  name: 'marshmallow',

  word: $ => $.identifier,

  extras: $ => [
      /\s/,
      $._comment,
    ],

    conflicts: $ => [
    [$.readability],
    [$._base_type,$.binding_expression],
    [$.property_definition,$.__value],
    [$.attribute_definition,$.__value],
    [$._basic_type_value],
    [$.type_expression,$.__value],
    [$.expression_statement,$.__value],
    [$.scope_expression,$.__value],
    [$.scope_expression],
    [$.scope_expression,$.binding_expression],
    [$.return_list],
    [$.access_expression,$.call_expression],
    [$.access_expression],
    [$.static_assignment,$.call_expression],
    [$.assignment_expression,$.call_expression],
    [$.type_expression,$._base_type],
    [$.type_expression,$._base_type,$.__value],
    [$._base_type,$.__value],
    [$.case_statement],
    [$.binding_expression,$.identifier_expression],
    [$.assignment_expression,$.identifier_expression],
    [$.code_block],
    [$._base_type,$.extension_definition],
    [$.identifier_expression,$.__value],
    [$.access_expression,$.index_expression],
    [$.extension_list],
    [$.container_expression,$.__value],
    [$._base_type,$.identifier_expression],
    [$.code_signature],
    [$._comma_list_types],
    [$._comma_list_assignment_or_group_values],
    [$.class_definition,$.binding_expression],
    [$.transfer_management_expression,$._value],
    [$.arrow_expression,$._comma_list_parameter_variable_definition],
    [$.arrow_expression,$.__value],
    [$.arrow_expression,$.binding_expression],
    [$.arrow_expression,$.index_expression],
    [$.assignment_expression,$.index_expression],
    [$.assignment_expression,$.access_expression],
    [$._base_type,$._define_element,$.__value],
    [$._define_element,$._literal],
    [$.call_expression,$._group_value],
    [$._index_value,$._access_index_value],
    [$._comma_list_assignment_or_group_value_or_type],
   ],

  rules: {

    source_file: $ => seq(
      optional($.package_definition),
      repeat($.module_definition),
    ),

     end_package: $ => seq('end','package'),

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
     $.end_package,
     $.end_of_line,
   ),

   end_module: $ => seq('end','module'),

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
       $.vector_definition,
       $.variable_definition,
       $.enum_definition,
       $.class_definition,
       $.extension_definition,
       $.code_definition,
       $.embed_block,
       $.control_flow_definition,
      )
     ),
     $.end_module,
     $.end_of_line,
    ),

    use_definition_module: $ => seq(
      choice(
        'use',
        'require',
      ),
      choice(
        'module',
        'package',
      ),
      $.identifier_expression,
      optional(
        seq(
         'as',
         $.identifier,
       ),
      ),
      $.end_of_line,
    ),

    use_definition_package: $ => seq(
      'use',
      choice(
        'source',
        'package',
      ),
      $.string,
      $.end_of_line,
    ),

   traits_block: $ =>
    choice(
     $.property_definition,
     $.attribute_definition,
    ),

    end_traits: $ => seq('end','traits'),

    traits_definition: $ => seq(
      'traits',
      '(',
       field('variable',$.identifier),
      ')',
       $.end_of_line,
       repeat($.traits_block),
       $.end_traits,
       $.end_of_line,
    ),

    property_definition: $ => seq(
      'property',
       field('name',$.identifier),
       field('value',optional($._value)),
      $.end_of_line,
    ),

    attribute_definition: $ => seq(
      'attribute',
       field('name',$.identifier),
       field('value',optional($._value)),
      $.end_of_line,
    ),
     declaration_definition: $ => choice(
       $._declaration_definition,
       $.protocol_declaration_definition,
     ),

     protocol_declaration_definition: $ => seq(
       field('access_control',optional($.access_control)),
       'protocol',
       $.code_signature,
       $.end_of_line,
     ),

    _declaration_definition: $ => seq(
      field('access_control',optional($.access_control)),
      field('declaration_type',choice('declare','external')),
      choice(
       $.code_signature,
       $.variable_definition,
      ),
      optional(
        seq(
         'as',
         $.identifier,
       ),
      ),
      $.end_of_line,
    ),

    type_definition: $ => seq(
     'typedef',
     field('old_type',$.type_expression),
     field('new_type',$.identifier),
     $.end_of_line,
    ),

    vector_name: $ => seq(
      'vector_name',
      $._comma_list_identifiers,
      $.end_of_line,
    ),

    end_vector: $ => seq('end','vector'),

    vector_definition: $ => seq(
     'vector',
     $._number,
     ',',
     $.type_expression,
     $.identifier,
     $.end_of_line,
     repeat(
      choice(
       $.traits_block,
       $.vector_name,
      ),
     ),
     $.end_vector,
     $.end_of_line,
    ),

    enum_element: $ => seq(
     choice(
       'default',
       $.type_expression,
     ),
     $.identifier,
     optional($.static_assignment),
     $.end_of_line,
    ),

    end_enum: $ => seq('end','enum'),

    enum_definition: $ => seq(
     field('access_control',optional($.access_control)),
     'enum',
     optional($.type_expression),
     $.identifier,
     $.end_of_line,
     repeat(
      choice(
       $.traits_block,
       $.traits_definition,
       $.enum_element,
      ),
     ),
     $.end_enum,
     $.end_of_line,
    ),

    end_union: $ => seq('end','union'),

    union_definition: $ => seq(
      field('access_control',optional($.access_control)),
      'union',
      $.end_of_line,
      repeat(
       choice(
        $.traits_block,
        $.variable_definition,
       ),
      ),
      $.end_union,
      $.end_of_line,
    ),

    end_class: $ => seq('end','class'),

    class_variable_definition: $ => seq(
      choice(
        seq(
          optional($.class_access_control),
          optional($.readability),
          'class',
          choice(
            $.identifier,
            $.container_expression,
          ),
        ),
        seq(
          optional('protocol'),
          optional($.access_control),
          optional($.readability),
          $.type_expression,
          $.identifier,
        ),
      ),

      optional($.static_assignment),
      $.end_of_line,
    ),

    class_parameter_variable_definition: $ => seq(
      'parameter',
      $.parameter_variable_definition,
      $.end_of_line,
    ),

    class_definition: $ => seq(
     field('access_control',optional($.access_control)),
     field('class_type',optional(choice('final','abstract','protocol'))),
     'class',
     optional($.array_definition),
     $.identifier,
     repeat($.pointer),
     optional(
       choice(
       $.array_definition,
       $.unsafe_array_definition,
      )
     ),
     $.end_of_line,
     repeat(
      choice(
       $.traits_block,
       $.call_statement,
       $.call_expression,
       $.union_definition,
       $.class_variable_definition,
       $.class_parameter_variable_definition,
      ),
     ),
     $.end_class,
     $.end_of_line,
    ),

    type_expression: $ => choice(
      $.management_expression,
      $.freeable_expression,
      $.container_expression,
      $._type_value,
    ),

   management_expression: $ => seq(
    field( 'management_type',
     choice(
       'manager',
       'managed',
      ),
     ),
      choice(
       $.freeable_expression,
       $.container_expression,
       $._type_value,
      ),
     ),

    freeable_expression: $ => seq(
     'freeable',
     $._type_value,
    ),

    container_expression: $ => seq(
      seq(
       $.identifier_expression,
       ':',
       choice(
        $.type_expression,
        $.collection,
       ),
      ),
     ),

    _type_value: $ => choice(
     $._static_type_value,
     $._basic_type_value,
    ),

    _static_type_value: $ => seq(
      'static',
      choice(
        $.static_types,
        $._basic_type_value,
      ),
    ),

    _basic_type_value: $ => seq(
      $._base_type,
      repeat($.pointer),
      repeat(
        choice(
        $.array_definition,
        $.unsafe_array_definition,
      ),
     ),
     repeat($.pointer),
    ),

    _base_type: $ => choice(
      $.binding_expression,
      $.primitive_type,
      $.lambda_type,
      $.identifier,
    ),

    lambda_type: $ => seq(
      'lambda',
      optional($.code_signature),
    ),

    static_types: $ => choice(
      'datum',
      'field',
      'polymorph',
      'arguments',
      'expression',
      'definition',
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
         $._index_value,
       ),
      ']',
    ),

    unsafe_array_definition: $ => seq(
      '[[',
       optional(
         $._index_value,
       ),
      ']]',
    ),

    _readability_list: $ => choice(
      'readonly',
      'writelimited',
      'private_write',
      'protected_write',
      'system_readwrite',
      'thread_readwrite',
    ),

    _comma_list_readability: $ => seq($._readability_list,repeat(seq(',',$._readability_list))),

    composite_readability: $ => seq(
      'composite',
      '{',
      $._comma_list_readability,
      '}',
    ),

    readability: $ => seq(
      choice(
       $._readability_list,
       $.composite_readability,
      ),
      optional($.array_definition),
    ),

    variable_definition: $ => seq(
       optional($.access_control),
       field('is_export',optional('export')),
       optional($.readability),
       $.type_expression,
       optional($.identifier_or_string),
       optional($.static_assignment),
       $.end_of_line,
     ),

     local_variable_definition: $ => seq(
       choice(
        'parameter',
        seq(
         choice(
           seq(
            field('is_preserved',optional('preserved')),
            field('is_persistent',optional('persistent')),
           ),
           field('inoutpass',choice('in','out','inout','pass')),
          ),
         optional($.readability),
        ),
       ),
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
      repeat1($._operator_token),
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
     $.traits_block,
     $.traits_definition,
     $.local_variable_definition,
     $.embed_block,
     $.statement,
     )
    ),

    _code_types: $ => choice(
     'function',
     'method',
     'procedure',
     'extension',
     'operator',
   ),

    code_definition_type: $ => choice('export','override','overridable','omega'),

    end_code: $ => seq('end',field('end_code_type',$._code_types)),

    code_signature: $ => seq(
      field('code_type',$._code_types),
      optional(field('name',choice($.identifier_or_string,$.operator_name))),
      optional($.extension_list),
      optional($.parameter_list),
      optional($.return_list),
    ),

    code_definition: $ => seq(
     optional($.access_control),
     optional($.code_definition_type),
     $.code_signature,
     $.end_of_line,
     optional($.code_block),
     $.end_code,
     $.end_of_line,
    ),

    extension_list: $ => seq(
     ',',
     seq($.parameter_list,repeat(seq(',',$.parameter_list))),
     ',',
    ),

    end_extension_definition: $ => seq('end',$.identifier_expression),

    extension_definition: $ => seq(
     optional($.access_control),
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
     $.define_statement,
     $.generate_statement,
     $.returns_statement,
    ),

    _define_element: $ => choice(
      $._comma_list_defines,
      $.identifier,
      $.string,
    ),

    _comma_list_defines: $ => seq('{',seq($._define_element,repeat(seq(',',$._define_element))),'}'),

    define_statement: $ => seq(
     'define',
     $._comma_list_defines,
     $.end_of_line,
    ),

    end_generate: $ => seq('end','generate'),

    generate_block: $ => seq(
     'generate',
     $.end_of_line,
     repeat1(
       $.statement,
     ),
     $.end_generate,
     $.end_of_line,
    ),

    _generate_statement: $ => seq(
    'generate',
    $.statement,
    $.end_of_line,
   ),


    generate_statement: $ => choice(
      $.generate_block,
      $._generate_statement,
    ),

     control_flow_statement: $ => choice(
       $.if_statement,
       $.iff_statement,
       $.call_statement,
       $.while_statement,
       $.switch_statement,
       $.goto_statement,
       $.section_statement,
       $.single_line_if_statement,
       $.return_statement,
     ),

     end_call: $ => seq('end','call'),

     call_statement: $ => seq(
       'call',
       '(',
       $._comma_list_assignment_or_group_values,
       ')',
       $.end_of_line,
       repeat(
         seq(
           'argument',
           $._assignment_or_value,
           $.end_of_line,
         ),
       ),
       $.end_call,
       $.end_of_line,
     ),

     returns_statement: $ => seq(
       'returns',
       $._comma_list_types,
       $.end_of_line,
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

     iff_statement: $ => seq(
       'iff',
       $.group_expression,
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
      $.call_expression,
      $.assignment_expression,
     ),
     $.end_of_line
    ),

    _scope_op: $ => '::',

    access_op: $ => '->',

    overridable_access_op: $ => '-->',

    access_index_op: $ => seq('[',$._access_index_value,']'),

    safe_index_op: $ => seq('[',$._index_value,']'),

    unsafe_index_op: $ => seq('[[',$._index_value,']]'),

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
      '&&&',
      '|||',
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
          $._group_value
        ),
        seq(
          $._group_value,
          $.binary_op,
          $._group_value
        ),
        $._group_value,
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
      seq($._value,$.access_index_op),
    ),

    arrow_expression: $ => seq(
      '(',
       optional(
         $._comma_list_parameter_variable_definition,
      ),
    ')',
    '=>',
     choice(
      $.group_expression,
      $.call_expression,
      $.assignment_expression,
     ),
    ),

    call_expression: $ => seq(
      $._value,
      '(',
      optional($._comma_list_assignment_or_group_values),
      ')',
    ),

    scope_expression: $ => seq(
      choice(
       'nomangle',
       'underscore',
       $.identifier,
       $.scope_expression,
      ),
      $._scope_op,
      choice(
       $.identifier,
       $.binding_expression,
      ),
    ),

    binding_expression: $ => choice(
     $.arrow_expression,
     $.access_expression,
     $.index_expression,
     $.call_expression,
     $.scope_expression,
    ),

  identifier_expression: $ => choice($.identifier,$.scope_expression),

  _one_word_operators: $ => choice(
    '_init',
    '_sizeof',
    '_itemsof',
    '_typeofvar',
    '_typeofptr',
    '_typeofarray',
    '_is_ptr',
    '_is_vardef',
    '_is_number',
    '_is_float',
    '_is_string',
    '_is_lambda',
    '_is_array',
    '_is_class',
    '_is_subclass',
    '_is_superclass',
    '_is_identifier',
    '_get_lambda',
    '_get_return',
    '_get_returns',
    '_get_identifier',
    'conditional',
  ),

  one_word_operator: $ => seq(
    $._one_word_operators,
    '(',
    optional($._comma_list_assignment_or_group_values),
    ')',
  ),

    _space: $ => /\s/,

    _comment: $ => token(
      choice(
       seq('---', /.*/),
       seq('+++', /.*/),
       seq('...', /.*/),
       seq('**', /.*/),
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

     invoke_extension_block: $ => 'invoke_extension_block',

     embed_extension_block: $ => 'embed_extension_block',

     get_last_embed_block: $ => 'get_last_embed_block',

     identifier: $ => /[^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!_0-9][^\[\]\'\.\"\*\-\+\\%\s\(\)${}:=,!]*/,

     identifier_or_string: $ => choice($.identifier,$.string),

     string: $ => seq('"',repeat(choice(token.immediate(prec(1,(/[^\"]/))),$._escape_sequence)),'"'),

     embed_block: $ => seq('§',repeat(choice(token.immediate(prec(1,(/[^§]/))),$._escape_sequence)),'§'),

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
       seq(
        $._comma_list_assignment_or_group_value_or_type,
        optional(',')
       ),
     '}',
     ),

     transfer_management_expression: $ => seq(
       'transfer_management',
       $.__value,
     ),

     __value: $ => choice(
       $._literal,
       $.collection,
       $.identifier,
       $.group_expression,
       $.one_word_operator,
       $.binding_expression,
     ),


     _index_value: $ => choice(
       $._number,
       $.character,
       $.identifier,
       $.group_expression,
       $.binding_expression,
     ),

     _access_index_value: $ => choice(
       $.string,
       $.identifier,
       $.group_expression,
       $.binding_expression,
     ),

     _group_value: $ => choice(
       $._value,
       $.float_nop,
       $.double_nop,
     ),

     _value: $ => choice(
       $.__value,
       $.transfer_management_expression,
      ),

      one_word_value: $ => choice(
        $.null,
        $.get_last_embed_block,
        $.embed_extension_block,
        $.invoke_extension_block,
       ),

     _literal: $ => choice(
       $.string,
       $._number,
       $.character,
       $.one_word_value,
     ),

     oct: $ => token(seq('0',/[0-7]/)),

     integer: $ => token(/\d+/),

     long: $ => token(seq(/\d+/,'l')),

     float: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),'f',')')),

     double: $ => token(seq('(',choice(/\d+(\.(\d+)?)?/,/\.\d+/),')')),

     float_nop: $ => token(seq(choice(/\d+(\.(\d+)?)?/,/\.\d+/),'f')),

     double_nop: $ => token(choice(/\d+(\.(\d+)?)?/,/\.\d+/)),

     hex: $ => token(seq('0x', /[0-9a-fA-f]+/)),

     binary: $ => token(seq('0b', /[01]+/)),

     _assignment_or_group_value_or_type: $ => choice($._assignment_or_group_value,$.type_expression),

     _assignment_or_value: $ => choice($._value,$.assignment_expression),

     _assignment_or_group_value: $ => choice($._group_value,$.assignment_expression),

     _comma_list_variables: $ => seq($.variable_definition,
       repeat(seq(',',$.variable_definition))),

     _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

     _comma_list_assignment_or_group_values: $ => seq($._assignment_or_group_value,repeat(seq(',',$._assignment_or_group_value))),

     _comma_list_assignment_or_group_value_or_type: $ => seq($._assignment_or_group_value_or_type,repeat(seq(',',$._assignment_or_group_value_or_type))),

     _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

     _comma_list_types: $ => seq($.type_expression,repeat(seq(',',$.type_expression))),

     _comma_list_identifiers: $ => seq($.identifier,repeat(seq(',',$.identifier))),

     _comma_list_parameter_variable_definition: $ => seq($.parameter_variable_definition,repeat(seq(',',$.parameter_variable_definition))),

     access_control: $ => choice('private', 'protected'),

     class_access_control: $ => choice('inherit','include','friend'),

     end_of_line: $ => '.',

  }

});
