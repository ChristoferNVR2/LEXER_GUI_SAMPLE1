//
// Created by chrisvega on 2/6/25.
//

#include "TokenConstant.h"

const char* TokenConstantToString(const TokenConstant tokenType) {
    switch (tokenType) {
        case TokenConstant::TOKEN_INT: return "TOKEN_INT";
        case TokenConstant::TOKEN_FLOAT: return "TOKEN_FLOAT";
        case TokenConstant::TOKEN_DOUBLE: return "TOKEN_DOUBLE";
        case TokenConstant::TOKEN_CHAR: return "TOKEN_CHAR";
        case TokenConstant::TOKEN_BOOL: return "TOKEN_BOOL";
        case TokenConstant::TOKEN_VOID: return "TOKEN_VOID";
        case TokenConstant::TOKEN_IF: return "TOKEN_IF";
        case TokenConstant::TOKEN_ELSE: return "TOKEN_ELSE";
        case TokenConstant::TOKEN_FOR: return "TOKEN_FOR";
        case TokenConstant::TOKEN_WHILE: return "TOKEN_WHILE";
        case TokenConstant::TOKEN_DO: return "TOKEN_DO";
        case TokenConstant::TOKEN_RETURN: return "TOKEN_RETURN";
        case TokenConstant::TOKEN_CLASS: return "TOKEN_CLASS";
        case TokenConstant::TOKEN_STRUCT: return "TOKEN_STRUCT";
        case TokenConstant::TOKEN_PUBLIC: return "TOKEN_PUBLIC";
        case TokenConstant::TOKEN_PRIVATE: return "TOKEN_PRIVATE";
        case TokenConstant::TOKEN_PROTECTED: return "TOKEN_PROTECTED";
        case TokenConstant::TOKEN_NAMESPACE: return "TOKEN_NAMESPACE";
        case TokenConstant::TOKEN_USING: return "TOKEN_USING";
        case TokenConstant::TOKEN_INCLUDE: return "TOKEN_INCLUDE";
        case TokenConstant::TOKEN_NEW: return "TOKEN_NEW";
        case TokenConstant::TOKEN_DELETE: return "TOKEN_DELETE";
        case TokenConstant::TOKEN_SWITCH: return "TOKEN_SWITCH";
        case TokenConstant::TOKEN_CASE: return "TOKEN_CASE";
        case TokenConstant::TOKEN_BREAK: return "TOKEN_BREAK";
        case TokenConstant::TOKEN_CONTINUE: return "TOKEN_CONTINUE";
        case TokenConstant::TOKEN_SIZEOF: return "TOKEN_SIZEOF";
        case TokenConstant::TOKEN_TYPEDEF: return "TOKEN_TYPEDEF";
        case TokenConstant::TOKEN_STATIC: return "TOKEN_STATIC";
        case TokenConstant::TOKEN_CONST: return "TOKEN_CONST";
        case TokenConstant::TOKEN_ASSIGN: return "TOKEN_ASSIGN";
        case TokenConstant::TOKEN_PLUS: return "TOKEN_PLUS";
        case TokenConstant::TOKEN_MINUS: return "TOKEN_MINUS";
        case TokenConstant::TOKEN_MULTIPLY: return "TOKEN_MULTIPLY";
        case TokenConstant::TOKEN_DIVIDE: return "TOKEN_DIVIDE";
        case TokenConstant::TOKEN_MODULO: return "TOKEN_MODULO";
        case TokenConstant::TOKEN_EQUAL: return "TOKEN_EQUAL";
        case TokenConstant::TOKEN_NOT_EQUAL: return "TOKEN_NOT_EQUAL";
        case TokenConstant::TOKEN_LESS: return "TOKEN_LESS";
        case TokenConstant::TOKEN_GREATER: return "TOKEN_GREATER";
        case TokenConstant::TOKEN_LESS_EQUAL: return "TOKEN_LESS_EQUAL";
        case TokenConstant::TOKEN_GREATER_EQUAL: return "TOKEN_GREATER_EQUAL";
        case TokenConstant::TOKEN_AND: return "TOKEN_AND";
        case TokenConstant::TOKEN_OR: return "TOKEN_OR";
        case TokenConstant::TOKEN_NOT: return "TOKEN_NOT";
        case TokenConstant::TOKEN_INCREMENT: return "TOKEN_INCREMENT";
        case TokenConstant::TOKEN_DECREMENT: return "TOKEN_DECREMENT";
        case TokenConstant::TOKEN_SEMICOLON: return "TOKEN_SEMICOLON";
        case TokenConstant::TOKEN_COMMA: return "TOKEN_COMMA";
        case TokenConstant::TOKEN_DOT: return "TOKEN_DOT";
        case TokenConstant::TOKEN_LBRACE: return "TOKEN_LBRACE";
        case TokenConstant::TOKEN_RBRACE: return "TOKEN_RBRACE";
        case TokenConstant::TOKEN_LPAREN: return "TOKEN_LPAREN";
        case TokenConstant::TOKEN_RPAREN: return "TOKEN_RPAREN";
        case TokenConstant::TOKEN_LBRACKET: return "TOKEN_LBRACKET";
        case TokenConstant::TOKEN_RBRACKET: return "TOKEN_RBRACKET";
        case TokenConstant::TOKEN_INT_LITERAL: return "TOKEN_INT_LITERAL";
        case TokenConstant::TOKEN_FLOAT_LITERAL: return "TOKEN_FLOAT_LITERAL";
        case TokenConstant::TOKEN_STRING_LITERAL: return "TOKEN_STRING_LITERAL";
        case TokenConstant::TOKEN_CHAR_LITERAL: return "TOKEN_CHAR_LITERAL";
        case TokenConstant::TOKEN_IDENTIFIER: return "TOKEN_IDENTIFIER";
        case TokenConstant::TOKEN_COMMENT_SINGLE_LINE: return "TOKEN_COMMENT_SINGLE_LINE";
        case TokenConstant::TOKEN_COMMENT_MULTI_LINE: return "TOKEN_COMMENT_MULTI_LINE";
        case TokenConstant::TOKEN_EOF: return "TOKEN_EOF";
        case TokenConstant::UNKNOWN: return "UNKNOWN";
        default: return "ERROR";
    }
}