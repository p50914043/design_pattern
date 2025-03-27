#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype(int value) : value_(value) {}

    std::unique_ptr<Prototype> clone() const override {
        return std::make_unique<ConcretePrototype>(*this);
    }

    void display() const {
        std::cout << "ConcretePrototype with value: " << value_ << std::endl;
    }

private:
    int value_;
};

#endif // CONCRETEPROTOTYPE_H