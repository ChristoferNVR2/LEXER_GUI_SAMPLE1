//
// Created by chrisvega on 2/6/25.
//

#include "Token.h"

Token::Token(TokenConstant tokenType, const std::string& lexeme)
    : tokenType(tokenType), lexeme(lexeme) {}

TokenConstant Token::getTokenType() const {
    return tokenType;
}

void Token::setTokenType(TokenConstant tokenType) {
    this->tokenType = tokenType;
}

std::string Token::getLexeme() const {
    return lexeme;
}

void Token::setLexeme(const std::string& lexeme) {
    this->lexeme = lexeme;
}

std::string Token::toString() const {
    return "Token{tokenType=" + std::to_string(static_cast<int>(tokenType)) + ", lexeme='" + lexeme + "'}";
}