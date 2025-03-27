#ifndef CONCRETEIMPLEMENTORB_H
#define CONCRETEIMPLEMENTORB_H

#include "Implementor.h"
#include <iostream>

class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() override {
        std::cout << "ConcreteImplementorB operationImpl" << std::endl;
    }
};

#endif // CONCRETEIMPLEMENTORB_H