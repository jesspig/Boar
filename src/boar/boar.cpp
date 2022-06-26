#include "boar.h"

int main(int argc, char **argv) {

//    if (argc != 2){
//        printf("[INPUT ERROR] Input format:\n");
//        printf("\t--- ./boar filename.boar\n");
//        return 0;
//    }

    const char *code = "1   + 12 -    345 * 6789 / 98765";
    boar::lexer lex(code);
    do {
        lex.getToken();
        std::cout << lex.tokenizer->content << std::endl;
    } while (lex.tokenizer->tok != boar::TOKENS::TOK_EOF);


    return 0;
}
