#ifndef PRODUCTB1_H
#define PRODUCTB1_H

#include "AbstractProductB.h"
#include <iostream>

class ProductB1 : public AbstractProductB {
public:
    void useProductB() override {
        std::cout << "Using Product B1" << std::endl;
    }
};

#endif // PRODUCTB1_H