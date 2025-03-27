#ifndef NUMBEREXPRESSION_H
#define NUMBEREXPRESSION_H

#include "Expression.h"

class NumberExpression : public Expression {
private:
    int number;
public:
    NumberExpression(int num) : number(num) {}
    int interpret() const override {
        return number;
    }
};

#endif // NUMBEREXPRESSION_H