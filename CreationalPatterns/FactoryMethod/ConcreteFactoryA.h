#ifndef CONCRETEFACTORYA_H
#define CONCRETEFACTORYA_H

#include "Factory.h"
#include "ConcreteProductA.h"

class ConcreteFactoryA : public Factory {
public:
    Product* createProduct() const override {
        return new ConcreteProductA();
    }
};

#endif // CONCRETEFACTORYA_H