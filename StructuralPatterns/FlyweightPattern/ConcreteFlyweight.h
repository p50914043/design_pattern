#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H

#include "Flyweight.h"
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string intrinsicState;

public:
    ConcreteFlyweight(const std::string& intrinsicState) : intrinsicState(intrinsicState) {}

    void operation(const std::string& extrinsicState) override {
        std::cout << "ConcreteFlyweight: Intrinsic State = " << intrinsicState << ", Extrinsic State = " << extrinsicState << std::endl;
    }
};

#endif // CONCRETEFLYWEIGHT_H