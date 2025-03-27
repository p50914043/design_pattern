#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <iostream>
#include <memory>

class Prototype {
public:
    virtual ~Prototype() {}
    virtual std::unique_ptr<Prototype> clone() const = 0;
};

#endif // PROTOTYPE_H