#ifndef CONCRETEPRODUCTA_H
#define CONCRETEPRODUCTA_H

#include "Product.h"

class ConcreteProductA : public Product {
public:
    void use() const override {
        std::cout << "Using ConcreteProductA" << std::endl;
    }
};

#endif // CONCRETEPRODUCTA_H