#include "Invoker.h"
#include "ConcreteCommand.h"
#include "Receiver.h"
#include <iostream>

int main() {
    Receiver receiver;
    Invoker invoker;

    // 创建具体命令并设置接收者
    Command* command1 = new ConcreteCommand(&receiver, "Action1");
    Command* command2 = new ConcreteCommand(&receiver, "Action2");

    // 添加命令到调用者
    invoker.addCommand(command1);
    invoker.addCommand(command2);

    // 执行命令
    invoker.executeCommands();

    // 撤销命令
    invoker.undoCommands();

    // 清理
    delete command1;
    delete command2;

    return 0;
}