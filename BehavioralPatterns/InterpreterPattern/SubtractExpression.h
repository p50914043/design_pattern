#ifndef SUBTRACTEXPRESSION_H
#define SUBTRACTEXPRESSION_H

#include "Expression.h"

class SubtractExpression : public Expression {
private:
    Expression* left;
    Expression* right;
public:
    SubtractExpression(Expression* l, Expression* r) : left(l), right(r) {}
    ~SubtractExpression() {
        delete left;
        delete right;
    }
    int interpret() const override {
        return left->interpret() - right->interpret();
    }
};

#endif // SUBTRACTEXPRESSION_H