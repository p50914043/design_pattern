#ifndef REALSUBJECT_H
#define REALSUBJECT_H

#include "Subject.h"
#include <iostream>

class RealSubject : public Subject {
public:
    void request() override {
        std::cout << "RealSubject: Handling request." << std::endl;
    }
};

#endif // REALSUBJECT_H