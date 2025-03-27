#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H

#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class ConcreteFactory2 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ProductA2();
    }

    AbstractProductB* createProductB() override {
        return new ProductB2();
    }
};

#endif // CONCRETEFACTORY2_H