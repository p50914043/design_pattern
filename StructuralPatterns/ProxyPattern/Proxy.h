#ifndef PROXY_H
#define PROXY_H

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject {
private:
    RealSubject* realSubject;

    void checkAccess() {
        std::cout << "Proxy: Checking access prior to firing a real request." << std::endl;
    }

    void logAccess() {
        std::cout << "Proxy: Logging the time of request." << std::endl;
    }

public:
    Proxy() : realSubject(nullptr) {}

    ~Proxy() {
        if (realSubject) {
            delete realSubject;
        }
    }

    void request() override {
        if (!realSubject) {
            realSubject = new RealSubject();
        }
        checkAccess();
        realSubject->request();
        logAccess();
    }
};

#endif // PROXY_H