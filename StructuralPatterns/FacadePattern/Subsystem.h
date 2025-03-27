#ifndef SUBSYSTEM_H
#define SUBSYSTEM_H

#include <iostream>

class SubsystemA {
public:
    void operationA() {
        std::cout << "SubsystemA: Operation A" << std::endl;
    }
};

class SubsystemB {
public:
    void operationB() {
        std::cout << "SubsystemB: Operation B" << std::endl;
    }
};

class SubsystemC {
public:
    void operationC() {
        std::cout << "SubsystemC: Operation C" << std::endl;
    }
};

#endif // SUBSYSTEM_H