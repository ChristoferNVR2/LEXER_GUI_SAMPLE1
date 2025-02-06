//
// Created by chrisvega on 2/6/25.
//

#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include "TokenConstant.h"


class Token {
public:
    Token(TokenConstant tokenType, const std::string& lexeme);
    TokenConstant getTokenType() const;
    void setTokenType(TokenConstant tokenType);
    std::string getLexeme() const;
    void setLexeme(const std::string& lexeme);
    std::string toString() const;

private:
    TokenConstant tokenType;
    std::string lexeme;
};



#endif //TOKEN_H
