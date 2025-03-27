#ifndef REFINEDABSTRACTION_H
#define REFINEDABSTRACTION_H

#include "Abstraction.h"

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(Implementor* imp) : Abstraction(imp) {}

    void operation() override {
        implementor->operationImpl();
    }
};

#endif // REFINEDABSTRACTION_H