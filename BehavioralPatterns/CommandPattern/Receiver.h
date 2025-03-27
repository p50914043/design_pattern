#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
#include <string>

class Receiver {
public:
    void performAction(const std::string& action) {
        std::cout << "Receiver: Performing " << action << std::endl;
    }

    void undoAction(const std::string& action) {
        std::cout << "Receiver: Undoing " << action << std::endl;
    }
};

#endif // RECEIVER_H