#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression {
public:
    virtual ~Expression() {}
    virtual int interpret() const = 0;
};

#endif // EXPRESSION_H