#ifndef HANDLER_H
#define HANDLER_H

class Handler {
protected:
    Handler* nextHandler;

public:
    Handler() : nextHandler(nullptr) {}

    virtual ~Handler() {
        delete nextHandler;
    }

    void setNext(Handler* handler) {
        nextHandler = handler;
    }

    virtual void handleRequest(int request) = 0;
};

#endif // HANDLER_H