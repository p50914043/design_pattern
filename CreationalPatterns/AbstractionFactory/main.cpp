#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main() {
    AbstractFactory* factory1 = new ConcreteFactory1();
    AbstractProductA* productA1 = factory1->createProductA();
    AbstractProductB* productB1 = factory1->createProductB();

    productA1->useProductA();
    productB1->useProductB();

    delete productA1;
    delete productB1;
    delete factory1;

    AbstractFactory* factory2 = new ConcreteFactory2();
    AbstractProductA* productA2 = factory2->createProductA();
    AbstractProductB* productB2 = factory2->createProductB();

    productA2->useProductA();
    productB2->useProductB();

    delete productA2;
    delete productB2;
    delete factory2;

    return 0;
}