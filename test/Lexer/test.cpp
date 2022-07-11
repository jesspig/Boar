#include "test.h"

std::string code = "1 +2*( 34 -56) / 7";


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