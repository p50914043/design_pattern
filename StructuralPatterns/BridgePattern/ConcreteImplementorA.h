#ifndef CONCRETEIMPLEMENTORA_H
#define CONCRETEIMPLEMENTORA_H

#include "Implementor.h"
#include <iostream>

class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() override {
        std::cout << "ConcreteImplementorA operationImpl" << std::endl;
    }
};

#endif // CONCRETEIMPLEMENTORA_H