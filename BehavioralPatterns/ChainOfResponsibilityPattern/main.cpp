#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"

int main() {
    // 创建处理者对象
    ConcreteHandlerA* handlerA = new ConcreteHandlerA();
    ConcreteHandlerB* handlerB = new ConcreteHandlerB();

    // 设置职责链
    handlerA->setNext(handlerB);

    // 发送请求
    handlerA->handleRequest(5);
    handlerA->handleRequest(15);
    handlerA->handleRequest(25);

    // 清理
    delete handlerA;

    return 0;
}