SET(INC_DIR ../../include)

SET(LEXER_DIR ${INC_DIR}/boar/Lex)
SET(PARSER_DIR ${INC_DIR}/boar/Parse)
SET(AST_DIR ${INC_DIR}/boar/AST)

SET(INC_FILES
        ${LEXER_DIR}/Lexer.cpp
        ${LEXER_DIR}/Lexer.h
        ${LEXER_DIR}/Token.h
        ${PARSER_DIR}/Parser.cpp
        ${PARSER_DIR}/Parser.h
        ${AST_DIR}/AST.cpp
        ${AST_DIR}/AST.h
        )

ADD_EXECUTABLE(test01
        test.cpp
        test.h
        ${INC_FILES}
        )
