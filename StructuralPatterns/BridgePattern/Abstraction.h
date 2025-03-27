#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "Implementor.h"

class Abstraction {
protected:
    Implementor* implementor;

public:
    Abstraction(Implementor* imp) : implementor(imp) {}
    virtual void operation() = 0;
};

#endif // ABSTRACTION_H