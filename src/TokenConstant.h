//
// Created by chrisvega on 2/6/25.
//

#ifndef TOKENCONSTANT_H
#define TOKENCONSTANT_H



enum class TokenConstant {
    TOKEN_INT,
    TOKEN_FLOAT,
    TOKEN_DOUBLE,
    TOKEN_CHAR,
    TOKEN_BOOL,
    TOKEN_VOID,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_FOR,
    TOKEN_WHILE,
    TOKEN_DO,
    TOKEN_RETURN,
    TOKEN_CLASS,
    TOKEN_STRUCT,
    TOKEN_PUBLIC,
    TOKEN_PRIVATE,
    TOKEN_PROTECTED,
    TOKEN_NAMESPACE,
    TOKEN_USING,
    TOKEN_INCLUDE,
    TOKEN_NEW,
    TOKEN_DELETE,
    TOKEN_SWITCH,
    TOKEN_CASE,
    TOKEN_BREAK,
    TOKEN_CONTINUE,
    TOKEN_SIZEOF,
    TOKEN_TYPEDEF,
    TOKEN_STATIC,
    TOKEN_CONST,
    TOKEN_ASSIGN,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MULTIPLY,
    TOKEN_DIVIDE,
    TOKEN_MODULO,
    TOKEN_EQUAL,
    TOKEN_NOT_EQUAL,
    TOKEN_LESS,
    TOKEN_GREATER,
    TOKEN_LESS_EQUAL,
    TOKEN_GREATER_EQUAL,
    TOKEN_AND,
    TOKEN_OR,
    TOKEN_NOT,
    TOKEN_INCREMENT,
    TOKEN_DECREMENT,
    TOKEN_SEMICOLON,
    TOKEN_COMMA,
    TOKEN_DOT,
    TOKEN_LBRACE,
    TOKEN_RBRACE,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_LBRACKET,
    TOKEN_RBRACKET,
    TOKEN_INT_LITERAL,
    TOKEN_FLOAT_LITERAL,
    TOKEN_STRING_LITERAL,
    TOKEN_CHAR_LITERAL,
    TOKEN_IDENTIFIER,
    TOKEN_COMMENT_SINGLE_LINE,
    TOKEN_COMMENT_MULTI_LINE,
    TOKEN_EOF,
    UNKNOWN
};

const char* TokenConstantToString(TokenConstant tokenConstant);



#endif //TOKENCONSTANT_H
