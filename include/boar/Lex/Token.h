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
        std::string content;
    };
}


#endif //BOAR_TOKEN_H
