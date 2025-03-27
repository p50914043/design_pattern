#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main() {
    // 创建具体组件
    Component* component = new ConcreteComponent();

    // 装饰组件
    Component* decoratorA = new ConcreteDecoratorA(component);
    Component* decoratorB = new ConcreteDecoratorB(decoratorA);

    // 执行操作
    decoratorB->operation();

    // 清理
    delete decoratorB;

    return 0;
}