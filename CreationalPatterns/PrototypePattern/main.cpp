#include "ConcretePrototype.h"

int main() {
    ConcretePrototype original(42);
    original.display();

    std::unique_ptr<Prototype> clone = original.clone();
    clone->display();

    return 0;
}