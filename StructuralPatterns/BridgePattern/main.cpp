#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

int main() {
    Implementor* implementorA = new ConcreteImplementorA();
    Implementor* implementorB = new ConcreteImplementorB();

    Abstraction* abstractionA = new RefinedAbstraction(implementorA);
    Abstraction* abstractionB = new RefinedAbstraction(implementorB);

    abstractionA->operation();
    abstractionB->operation();

    delete abstractionA;
    delete abstractionB;
    delete implementorA;
    delete implementorB;

    return 0;
}