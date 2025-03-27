#include "Subject.h"
#include "Proxy.h"
#include <iostream>

int main() {
    Subject* subject = new Proxy();

    // 使用代理调用请求
    subject->request();

    delete subject;

    return 0;
}