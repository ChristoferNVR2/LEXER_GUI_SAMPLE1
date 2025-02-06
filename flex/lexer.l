%{
#include <iostream>
#include "tokens.h"

using namespace std;
%}

%option noyywrap

INT      [0-9]+
FLOAT      [0-9]+\.[0-9]+
ID         [a-zA-Z_][a-zA-Z0-9_]*
STRING     \"(\\.|[^\"])*\"
CHAR       \'(\\.|[^'])\'
COMMENT1   "//".*
COMMENT2   "/\*".*?"\*/"
WS         [ \t\r\n]+

%%

"int"          { cout << "TOKEN_INT\n"; }
"float"        { cout << "TOKEN_FLOAT\n"; }
"double"       { cout << "TOKEN_DOUBLE\n"; }
"char"         { cout << "TOKEN_CHAR\n"; }
"bool"         { cout << "TOKEN_BOOL\n"; }
"void"         { cout << "TOKEN_VOID\n"; }
"if"           { cout << "TOKEN_IF\n"; }
"else"         { cout << "TOKEN_ELSE\n"; }
"for"          { cout << "TOKEN_FOR\n"; }
"while"        { cout << "TOKEN_WHILE\n"; }
"do"           { cout << "TOKEN_DO\n"; }
"return"       { cout << "TOKEN_RETURN\n"; }
"class"        { cout << "TOKEN_CLASS\n"; }
"struct"       { cout << "TOKEN_STRUCT\n"; }
"public"       { cout << "TOKEN_PUBLIC\n"; }
"private"      { cout << "TOKEN_PRIVATE\n"; }
"protected"    { cout << "TOKEN_PROTECTED\n"; }
"namespace"    { cout << "TOKEN_NAMESPACE\n"; }
"using"        { cout << "TOKEN_USING\n"; }
"include"      { cout << "TOKEN_INCLUDE\n"; }
"new"          { cout << "TOKEN_NEW\n"; }
"delete"       { cout << "TOKEN_DELETE\n"; }
"switch"       { cout << "TOKEN_SWITCH\n"; }
"case"         { cout << "TOKEN_CASE\n"; }
"break"        { cout << "TOKEN_BREAK\n"; }
"continue"     { cout << "TOKEN_CONTINUE\n"; }
"sizeof"       { cout << "TOKEN_SIZEOF\n"; }
"typedef"      { cout << "TOKEN_TYPEDEF\n"; }
"static"       { cout << "TOKEN_STATIC\n"; }
"const"        { cout << "TOKEN_CONST\n"; }

"="            { cout << "TOKEN_ASSIGN\n"; }
"+"            { cout << "TOKEN_PLUS\n"; }
"-"            { cout << "TOKEN_MINUS\n"; }
"*"            { cout << "TOKEN_MULTIPLY\n"; }
"/"            { cout << "TOKEN_DIVIDE\n"; }
"%"            { cout << "TOKEN_MODULO\n"; }
"=="           { cout << "TOKEN_EQUAL\n"; }
"!="           { cout << "TOKEN_NOT_EQUAL\n"; }
"<"            { cout << "TOKEN_LESS\n"; }
">"            { cout << "TOKEN_GREATER\n"; }
"<="           { cout << "TOKEN_LESS_EQUAL\n"; }
">="           { cout << "TOKEN_GREATER_EQUAL\n"; }
"&&"           { cout << "TOKEN_AND\n"; }
"||"           { cout << "TOKEN_OR\n"; }
"!"            { cout << "TOKEN_NOT\n"; }
"++"           { cout << "TOKEN_INCREMENT\n"; }
"--"           { cout << "TOKEN_DECREMENT\n"; }

";"            { cout << "TOKEN_SEMICOLON\n"; }
","            { cout << "TOKEN_COMMA\n"; }
"."            { cout << "TOKEN_DOT\n"; }
"{"            { cout << "TOKEN_LBRACE\n"; }
"}"            { cout << "TOKEN_RBRACE\n"; }
"("            { cout << "TOKEN_LPAREN\n"; }
")"            { cout << "TOKEN_RPAREN\n"; }
"["            { cout << "TOKEN_LBRACKET\n"; }
"]"            { cout << "TOKEN_RBRACKET\n"; }

{FLOAT}        { cout << "TOKEN_FLOAT_LITERAL: " << yytext << "\n"; }
{INT}        { cout << "TOKEN_INT_LITERAL: " << yytext << "\n"; }
{STRING}       { cout << "TOKEN_STRING_LITERAL: " << yytext << "\n"; }
{CHAR}         { cout << "TOKEN_CHAR_LITERAL: " << yytext << "\n"; }

{ID}           { cout << "TOKEN_IDENTIFIER: " << yytext << "\n"; }

{COMMENT1}     { cout << "TOKEN_COMMENT_SINGLE_LINE\n"; }
{COMMENT2}     { cout << "TOKEN_COMMENT_MULTI_LINE\n"; }

{WS}           { /* Ignore */ }

.              { yyerror("Unknown Token", yytext); }

%%
