#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf : public Component {
public:
    void operation() override {
        std::cout << "Leaf operation" << std::endl;
    }
};

#endif // LEAF_H