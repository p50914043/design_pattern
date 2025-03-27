#ifndef ADDEXPRESSION_H
#define ADDEXPRESSION_H

#include "Expression.h"

class AddExpression : public Expression {
private:
    Expression* left;
    Expression* right;
public:
    AddExpression(Expression* l, Expression* r) : left(l), right(r) {}
    ~AddExpression() {
        delete left;
        delete right;
    }
    int interpret() const override {
        return left->interpret() + right->interpret();
    }
};

#endif // ADDEXPRESSION_H