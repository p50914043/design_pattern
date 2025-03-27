#ifndef CONCRETEFACTORYB_H
#define CONCRETEFACTORYB_H

#include "Factory.h"
#include "ConcreteProductB.h"

class ConcreteFactoryB : public Factory {
public:
    Product* createProduct() const override {
        return new ConcreteProductB();
    }
};

#endif // CONCRETEFACTORYB_H