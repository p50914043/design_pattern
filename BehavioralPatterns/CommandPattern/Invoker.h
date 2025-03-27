#ifndef INVOKER_H
#define INVOKER_H

#include "Command.h"
#include <vector>

class Invoker {
private:
    std::vector<Command*> commands;

public:
    void addCommand(Command* command) {
        commands.push_back(command);
    }

    void executeCommands() {
        for (Command* command : commands) {
            command->execute();
        }
        commands.clear();
    }

    void undoCommands() {
        for (auto it = commands.rbegin(); it != commands.rend(); ++it) {
            (*it)->undo();
        }
        commands.clear();
    }
};

#endif // INVOKER_H