#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target {
private:
    Adaptee* adaptee;

public:
    Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

    void request() override {
        adaptee->specificRequest();
    }
};

#endif // ADAPTER_H