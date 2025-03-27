#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class ConcreteFactory1 : public AbstractFactory {
public:
    AbstractProductA* createProductA() override {
        return new ProductA1();
    }

    AbstractProductB* createProductB() override {
        return new ProductB1();
    }
};

#endif // CONCRETEFACTORY1_H