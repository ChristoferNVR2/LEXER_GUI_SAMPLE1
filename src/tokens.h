//
// Created by chrisvega on 2/5/25.
//

#ifndef TOKENS_H
#define TOKENS_H

extern int yylineno;
void yyerror(const char *s, const char *token);
int yylex();

#endif //TOKENS_H
