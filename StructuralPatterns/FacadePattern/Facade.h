#ifndef FACADE_H
#define FACADE_H

#include "Subsystem.h"

class Facade {
private:
    SubsystemA* subsystemA;
    SubsystemB* subsystemB;
    SubsystemC* subsystemC;

public:
    Facade() {
        subsystemA = new SubsystemA();
        subsystemB = new SubsystemB();
        subsystemC = new SubsystemC();
    }

    ~Facade() {
        delete subsystemA;
        delete subsystemB;
        delete subsystemC;
    }

    void operation() {
        subsystemA->operationA();
        subsystemB->operationB();
        subsystemC->operationC();
    }
};

#endif // FACADE_H