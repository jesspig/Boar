#include "test.h"

std::string code = "1   +12-    345*6789 / 987a65";


void testLexer() {

    boar::Lexer lex(code);
    do {
        lex.getToken();
        std::cout << lex.tokenizer->content << std::endl;
    } while (lex.getCurrent() < code.size());

}

int main() {

    testLexer();

    return 0;
}