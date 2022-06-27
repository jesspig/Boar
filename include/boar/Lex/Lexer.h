#ifndef BOAR_LEXER_H
#define BOAR_LEXER_H

#include <string_view>
#include <cctype>
#include <memory>

namespace boar {
    enum class TOKENS {
        /*
         * 符号
         *---------
         * operator
        */
        TOK_PLUS, TOK_MINUS, TOK_MULTIPLY, TOK_DIVIDE,

        /*
         * 类型
         * ----
         * type
         */
        TOK_NUMBER,
        TOK_EOF
    };

    struct TOKEN {
        TOKENS tok;
        int value;
        std::string_view content;
    };

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
