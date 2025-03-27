#ifndef PRODUCTB2_H
#define PRODUCTB2_H

#include "AbstractProductB.h"
#include <iostream>

class ProductB2 : public AbstractProductB {
public:
    void useProductB() override {
        std::cout << "Using Product B2" << std::endl;
    }
};

#endif // PRODUCTB2_H