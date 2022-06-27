SET(INC_DIR ../../include)

SET(LEXER_DIR ${INC_DIR}/boar/Lex)
SET(PARSER_DIR ${INC_DIR}/boar/Parse)

SET(INC_FILES
        ${LEXER_DIR}/Lexer.cpp
        ${LEXER_DIR}/Lexer.h
        )

ADD_EXECUTABLE(boar
        boar.cpp
        boar.h
        ${INC_FILES}
        )
