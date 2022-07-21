SET(INC_DIR ../../include)

SET(LEXER_DIR ${INC_DIR}/boar/Lex)
SET(PARSER_DIR ${INC_DIR}/boar/Parse)
SET(AST_DIR ${INC_DIR}/boar/AST)

SET(LEXER_FILES
        ${LEXER_DIR}/Lexer.cpp
        ${LEXER_DIR}/Lexer.h
        ${LEXER_DIR}/Token.h
        )

SET(PARSER_FILES
        ${PARSER_DIR}/Parser.cpp
        ${PARSER_DIR}/Parser.h
        )

SET(AST_FILES
        ${AST_DIR}/AST.h
        ${AST_DIR}/ASTNode.h
        ${AST_DIR}/BinaryOperatorNode.h
        ${AST_DIR}/BinaryOperatorNode.cpp
        ${AST_DIR}/BinaryOperatorNode.h
        ${AST_DIR}/BinaryOperator.h
        ${AST_DIR}/ConstantNode.cpp
        ${AST_DIR}/ConstantNode.h
        )

SET(INC_FILES
        ${LEXER_FILES}
        ${PARSER_FILES}
        ${AST_FILES}
        )

ADD_EXECUTABLE(boar
        boar.cpp
        boar.h
        ${INC_FILES}
        )