#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
public:
    void operation() override {
        // 具体操作
        std::cout << "ConcreteComponent operation" << std::endl;
    }
};

#endif // CONCRETECOMPONENT_H