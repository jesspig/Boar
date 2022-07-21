#ifndef BOAR_BINARY_OPERATOR_NODE_H
#define BOAR_BINARY_OPERATOR_NODE_H

#include "ASTNode.h"
#include "BinaryOperator.h"

namespace boar {
    class BinaryOperatorNode : public ASTNode {
        /*
         * 二元操作节点
         * ---------------------
         * Binary operation node
         */
    public:
        BinaryOperator binaryOperator;
        void Accept() override;
    };

}


#endif //BOAR_BINARY_OPERATOR_NODE_H
