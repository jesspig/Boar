#ifndef BOAR_TOKEN_H
#define BOAR_TOKEN_H

#include <string>

namespace boar {
    enum class TOKENS {
        /*
         * 符号
         *---------
         * operator
        */
        TOK_PLUS, TOK_MINUS, TOK_MULTIPLY, TOK_DIVIDE, TOK_EOF,
        TOK_PARENT, TOK_EQUAL, TOK_GREATER, TOK_LESS,

        /*
         * 类型
         * ----
         * type
         */
        TOK_NUMBER, TOK_STRING
    };

    struct TOKEN {
        TOKENS tok;
        std::string content;
    };
}


#endif //BOAR_TOKEN_H
