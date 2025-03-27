#include <iostream>
#include "NumberExpression.h"
#include "AddExpression.h"
#include "SubtractExpression.h"

int main() {
    // 构建表达式 (1 + 2) - 3
    Expression* expr1 = new NumberExpression(1);
    Expression* expr2 = new NumberExpression(2);
    Expression* expr3 = new NumberExpression(3);
    Expression* addExpr = new AddExpression(expr1, expr2);
    Expression* subExpr = new SubtractExpression(addExpr, expr3);

    // 解释表达式
    int result = subExpr->interpret();
    std::cout << "Result: " << result << std::endl; // 输出结果为 0

    // 释放内存
    delete subExpr;

    return 0;
}