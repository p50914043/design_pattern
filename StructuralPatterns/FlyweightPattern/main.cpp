#include "FlyweightFactory.h"
#include <iostream>

int main() {
    FlyweightFactory factory;

    // 获取享元对象并执行操作
    Flyweight* flyweight1 = factory.getFlyweight("key1");
    flyweight1->operation("extrinsicState1");

    Flyweight* flyweight2 = factory.getFlyweight("key2");
    flyweight2->operation("extrinsicState2");

    Flyweight* flyweight3 = factory.getFlyweight("key1");
    flyweight3->operation("extrinsicState3");

    // 检查是否为同一个对象
    std::cout << "flyweight1 == flyweight3: " << (flyweight1 == flyweight3) << std::endl;

    return 0;
}