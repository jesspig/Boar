SET(INC_DIR ../../include)

SET(LEXER_DIR ${INC_DIR}/boar/Lex)
SET(PARSER_DIR ${INC_DIR}/boar/Parse)

SET(LEXER_FILES
        ${LEXER_DIR}/Lexer.cpp
        ${LEXER_DIR}/Lexer.h
        ${LEXER_DIR}/Token.h
        )

SET(PARSER_FILES
        ${PARSER_DIR}/Parser.cpp
        ${PARSER_DIR}/Parser.h
        )

SET(INC_FILES
        ${LEXER_FILES}
        ${PARSER_FILES}
        )

ADD_EXECUTABLE(testLexer
        test.cpp
        test.h
        ${INC_FILES}
        )