#ifndef FACTORY_H
#define FACTORY_H

#include "Product.h"

class Factory {
public:
    virtual ~Factory() {}
    virtual Product* createProduct() const = 0;
};

#endif // FACTORY_H