#ifndef CONCRETEHANDLERA_H
#define CONCRETEHANDLERA_H

#include "Handler.h"
#include <iostream>

class ConcreteHandlerA : public Handler {
public:
    void handleRequest(int request) override {
        if (request >= 0 && request < 10) {
            std::cout << "ConcreteHandlerA handled request " << request << std::endl;
        } else if (nextHandler != nullptr) {
            nextHandler->handleRequest(request);
        }
    }
};

#endif // CONCRETEHANDLERA_H