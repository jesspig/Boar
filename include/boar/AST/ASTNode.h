#ifndef BOAR_AST_NODE_H
#define BOAR_AST_NODE_H

/*
 * 语法树节点
 * ----------------
 * Syntax tree node
 */
namespace boar {
    class ASTNode {
    public:
        virtual void Accept() = 0;
    };
}

#endif //BOAR_AST_NODE_H
