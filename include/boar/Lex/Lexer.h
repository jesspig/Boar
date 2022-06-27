#ifndef BOAR_LEXER_H
#define BOAR_LEXER_H

#include "Token.h"

#include <string_view>
#include <cctype>
#include <memory>

namespace boar {

    class Lexer {
    private:
        std::string_view code;
        char value = '\0';
        int current = 0;
    public:
        std::shared_ptr<TOKEN> tokenizer;
    public:
        Lexer(const char *character) : code(character) {}

        void getChar();

        void getToken();
    };

}





#endif //BOAR_LEXER_H
