#ifndef BOAR_PARSER_H
#define BOAR_PARSER_H

#include "boar/Lex/Lexer.h"

namespace boar {
    class Parser {
    private:
        Lexer &lexer;
    public:
        Parser(Lexer &lex) : lexer(lex) {}
    };
}

#endif //BOAR_PARSER_H
