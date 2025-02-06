//
// Created by chrisvega on 2/5/25.
//

#include <iostream>
#include "tokens.h"

void yyerror(const char *s, const char *token) {
    std::cerr << "Error at line " << yylineno << ": " << s << " (" << token << ")" << std::endl;
}