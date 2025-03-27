#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

class Decorator : public Component {
protected:
    Component* component;

public:
    Decorator(Component* component) : component(component) {}
    virtual ~Decorator() {
        delete component;
    }
    void operation() override {
        component->operation();
    }
};

#endif // DECORATOR_H