#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {}

    void operation() override {
        Decorator::operation();
        addedBehavior();
    }

private:
    void addedBehavior() {
        std::cout << "ConcreteDecoratorA added behavior" << std::endl;
    }
};

#endif // CONCRETEDECORATORA_H