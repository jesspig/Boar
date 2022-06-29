#ifndef BOAR_LEXER_H
#define BOAR_LEXER_H

#include "Token.h"

#include <string>
#include <memory>

namespace boar {

    class Lexer {
    private:
        std::string code;
        int current = 0;
        char value = code[current];
    public:
        std::shared_ptr<TOKEN> tokenizer;
    public:
        Lexer(std::string character) : code(character) {}

        int getCurrent() { return current; }

        void getToken();
    };

}

#endif //BOAR_LEXER_H
