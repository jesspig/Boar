#include "lexer.h"

void boar::lexer::getChar() {
    if (current >= code.size()) {
        value = '\0';
    } else {
        value = code[current++];
    }
}


void boar::lexer::getToken() {
    /*
     * 跳过空白字符
     * ---------------
     * skip whitespace
     */
    do {
        getChar();
    } while (std::isspace(value));

    int num = 0;
    TOKENS token = TOKENS::TOK_EOF;
    int position = current - 1;

    if (value == '\0') {
        token = TOKENS::TOK_EOF;
    } else if (value == '+') {
        token = TOKENS::TOK_PLUS;
        getChar();
    } else if (value == '-') {
        token = TOKENS::TOK_MINUS;
        getChar();
    } else if (value == '*') {
        token = TOKENS::TOK_MULTIPLY;
        getChar();
    } else if (value == '/') {
        token = TOKENS::TOK_DIVIDE;
        getChar();
    } else if (std::isdigit(value)) {
        num = 0;
        token = TOKENS::TOK_NUMBER;
        do {
            num += num * 10 + value - '0';
            getChar();
        } while (std::isdigit(value));
    } else {
        printf("[SYNTAX ERROR] Not support character \"%c\" \n", value);
    }

    tokenizer = std::make_shared<TOKEN>();
    tokenizer->tok = token;
    tokenizer->value = num;
    /*
     * 如果是结束符就不截取，否则截取截取 1 个 token 的内容
     * ---------------------------------------------
     * If it ends, do not clip the substring,
     * otherwise clip 1 token length string.
     */
    tokenizer->content = token == TOKENS::TOK_EOF
                         ? code.substr(position, 0)
                         : code.substr(position, current - position);
}
