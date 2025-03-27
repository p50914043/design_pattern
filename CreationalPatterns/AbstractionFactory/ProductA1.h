#ifndef PRODUCTA1_H
#define PRODUCTA1_H

#include "AbstractProductA.h"
#include <iostream>

class ProductA1 : public AbstractProductA {
public:
    void useProductA() override {
        std::cout << "Using Product A1" << std::endl;
    }
};

#endif // PRODUCTA1_H