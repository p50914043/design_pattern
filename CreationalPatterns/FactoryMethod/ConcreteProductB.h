#ifndef CONCRETEPRODUCTB_H
#define CONCRETEPRODUCTB_H

#include "Product.h"

class ConcreteProductB : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductB" << std::endl;
    }
};

#endif // CONCRETEPRODUCTB_H