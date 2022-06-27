#ifndef BOAR_TOKEN_H
#define BOAR_TOKEN_H

#include <string_view>

namespace boar{
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
}


#endif //BOAR_TOKEN_H
