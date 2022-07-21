#ifndef BOAR_CONSTANT_NODE_H
#define BOAR_CONSTANT_NODE_H

#include "ASTNode.h"

namespace boar {
    class ConstantNode : public ASTNode {
    public:
        int Value;

        void Accept() override;
    };

}

#endif //BOAR_CONSTANT_NODE_H
