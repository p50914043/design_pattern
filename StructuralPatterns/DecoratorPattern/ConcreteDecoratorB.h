#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {}

    void operation() override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() {
        std::cout << "ConcreteDecoratorB added behavior" << std::endl;
    }
};

#endif // CONCRETEDECORATORB_H