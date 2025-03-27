#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include "ConcreteFlyweight.h"
#include <unordered_map>
#include <string>

class FlyweightFactory {
private:
    std::unordered_map<std::string, Flyweight*> flyweights;

public:
    ~FlyweightFactory() {
        for (auto& pair : flyweights) {
            delete pair.second;
        }
    }

    Flyweight* getFlyweight(const std::string& key) {
        if (flyweights.find(key) == flyweights.end()) {
            flyweights[key] = new ConcreteFlyweight(key);
        }
        return flyweights[key];
    }
};

#endif // FLYWEIGHTFACTORY_H