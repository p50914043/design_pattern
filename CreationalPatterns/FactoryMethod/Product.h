#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product {
public:
    virtual ~Product() {}
    virtual void use() const = 0;
};

#endif // PRODUCT_H