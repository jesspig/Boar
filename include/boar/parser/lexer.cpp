#include "lexer.h"

void boar::lexer::getToken() {
    /*
     * 跳过空白字符
     * ---------------
     * skip whitespace
     */
    value = code[current];
    TOKENS token;
    int position = current;
    int num = 0;


    while (std::isspace(value)) {
        if (current < code.size()) {
            value = code[current++];
        } else {
            token = TOKENS::TOK_EOF;
            return;
        }
    }

    if (value == '\0') {
        token = TOKENS::TOK_EOF;
        current++;

        setToken(token, num, position);
        return;
    }

    if (value == '+') {
        token = TOKENS::TOK_PLUS;
        current++;

        setToken(token, num, position);
        return;
    }

    if (value == '-') {
        token = TOKENS::TOK_MINUS;
        current++;

        setToken(token, num, position);
        return;
    }

    if (value == '*') {
        token = TOKENS::TOK_MULTIPLY;
        current++;

        setToken(token, num, position);
        return;
    }

    if (value == '/') {
        token = TOKENS::TOK_DIVIDE;
        current++;

        setToken(token, num, position);
        return;
    }

    if (isdigit(value)) {
        num = 0;
        token = TOKENS::TOK_NUMBER;
        do {
            num += num * 10 + value - '0';
            value = code[current++];
        } while (isdigit(value) && current < code.size());
        setToken(token, num, position);
        current++;
        return;
    } else {
        printf("[SYNTAX ERROR] Not support character \"%c\" \n", value);
    }

}

void boar::lexer::setToken(TOKENS token, int num, int position) {
    tokenizer = std::make_shared<TOKEN>();
    tokenizer->tok = token;
    tokenizer->value = num;
    tokenizer->content = code.substr(position, current - position - 1);
}
