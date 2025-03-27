#ifndef CONCRETEHANDLERB_H
#define CONCRETEHANDLERB_H

#include "Handler.h"
#include <iostream>

class ConcreteHandlerB : public Handler {
public:
    void handleRequest(int request) override {
        if (request >= 10 && request < 20) {
            std::cout << "ConcreteHandlerB handled request " << request << std::endl;
        } else if (nextHandler != nullptr) {
            nextHandler->handleRequest(request);
        }
    }
};

#endif // CONCRETEHANDLERB_H