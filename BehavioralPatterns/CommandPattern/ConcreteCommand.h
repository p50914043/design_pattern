#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command {
private:
    Receiver* receiver;
    std::string action;

public:
    ConcreteCommand(Receiver* receiver, const std::string& action) : receiver(receiver), action(action) {}

    void execute() override {
        receiver->performAction(action);
    }

    void undo() override {
        receiver->undoAction(action);
    }
};

#endif // CONCRETECOMMAND_H