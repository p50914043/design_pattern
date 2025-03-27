#ifndef PRODUCTA2_H
#define PRODUCTA2_H

#include "AbstractProductA.h"
#include <iostream>

class ProductA2 : public AbstractProductA {
public:
    void useProductA() override {
        std::cout << "Using Product A2" << std::endl;
    }
};

#endif // PRODUCTA2_H