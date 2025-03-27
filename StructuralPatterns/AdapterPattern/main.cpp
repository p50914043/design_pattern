#include "Target.h"
#include "Adapter.h"
#include "Adaptee.h"
#include <iostream>

int main() {
    Adaptee* adaptee = new Adaptee();
    Target* adapter = new Adapter(adaptee);

    // 使用适配器调用目标接口
    adapter->request();

    delete adapter;
    delete adaptee;

    return 0;
}