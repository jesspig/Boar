#include "Lexer.h"

void boar::Lexer::getToken() {

    tokenizer = std::make_shared<TOKEN>();
    value = code[current];
    if (value == '\0') {
        tokenizer->content = '\0';
        tokenizer->tok = TOKENS::TOK_EOF;
        return;
    }
    if (isspace(value)) {
        while (isspace(value)) {
            value = code[++current];
        }
    }
    if (isdigit(value)) {
        tokenizer->tok = TOKENS::TOK_NUMBER;
        std::string str = "";
        while (isdigit(value)) {
            str += value;
            value = code[++current];
        }
        tokenizer->content = str;
        return;
    }
    if (value == '+') {
        tokenizer->tok = TOKENS::TOK_PLUS;
        tokenizer->content = value;
        current++;
        return;
    }
    if (value == '-') {
        tokenizer->tok = TOKENS::TOK_MINUS;
        tokenizer->content = value;
        current++;
        return;
    }
    if (value == '*') {
        tokenizer->tok = TOKENS::TOK_MULTIPLY;
        tokenizer->content = value;
        current++;
        return;
    }
    if (value == '/') {
        tokenizer->tok = TOKENS::TOK_DIVIDE;
        tokenizer->content = value;
        current++;
        return;
    }
    printf("[SYNTAX ERROR] Not support character \"%c\" \n", value);
    exit(0);

}
