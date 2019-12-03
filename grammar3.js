module.exports = grammar({
  name: 'marshmallow',

  extras: $ => [
      /\s/,
      $._comment,
    ],

  rules: {

    source_file: $ => choice(
      repeat($.root_definition),
    ),

    _space: $ => /\s/,

    _comment: $ => token(
      choice(
       seq('+++', /.*/),
       seq('---', /.*/),
       seq('**', /.*/),
       seq('//', /.*/),
      )
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

     _comma_list_variables: $ => seq($.variable_definition,
       repeat(seq(',',$.variable_definition))),

     _comma_list_values: $ => seq($._value,repeat(seq(',',$._value))),

     _comma_list_assignment_or_values: $ => seq($._assignment_or_value,repeat(seq(',',$._assignment_or_value))),

     _comma_list_literals: $ => seq($._literal,repeat(seq(',',$._literal))),

     _comma_list_types: $ => seq($.type,repeat(seq(',',$.type))),

     end_of_line: $ => '.',

     root_definition: $ => choice(
       $.package_definition,
       repeat($.module_definition),
     ),

     package_definition: $ => seq(
      'package',
       $.scoped_identifier,
       $.end_of_line,
       repeat(
       $.use_definition,
       $.variable_definition,
     ),
     'end',
     'package',
     $.end_of_line,
   ),

     module_definition: $ => seq(
       'module',
       $.scoped_identifier,
       $.end_of_line,
       repeat(
         $.use_definition,
         $.declaration_definition,
         $.tye_definition,
         $.variable_definition,
         $.code_definition,
         $.class_definition,
         $.enum_definition,
         $.statement_definition,
       ),
       'end',
       'module',
       $.end_of_line,
     ),

  }

});
