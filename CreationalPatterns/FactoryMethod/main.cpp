#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

int main() {
    Factory* factoryA = new ConcreteFactoryA();
    Product* productA = factoryA->createProduct();
    productA->use();
    delete productA;
    delete factoryA;

    Factory* factoryB = new ConcreteFactoryB();
    Product* productB = factoryB->createProduct();
    productB->use();
    delete productB;
    delete factoryB;

    return 0;
}