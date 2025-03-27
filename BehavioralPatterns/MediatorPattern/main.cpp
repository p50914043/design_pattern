#include <iostream>
#include <vector>
#include <string>

// 同事类接口
class Colleague;

// 中介者接口
class Mediator {
public:
    virtual ~Mediator() {}
    virtual void sendMessage(const std::string& message, Colleague* colleague) = 0;
};

// 同事类接口
class Colleague {
protected:
    Mediator* _mediator;

public:
    Colleague(Mediator* mediator) : _mediator(mediator) {}
    virtual ~Colleague() {}
    virtual void send(const std::string& message) = 0;
    virtual void receive(const std::string& message) = 0;
};

// 具体同事类A
class ConcreteColleagueA : public Colleague {
public:
    ConcreteColleagueA(Mediator* mediator) : Colleague(mediator) {}

    void send(const std::string& message) override {
        _mediator->sendMessage(message, this);
    }

    void receive(const std::string& message) override {
        std::cout << "Colleague A received: " << message << std::endl;
    }
};

// 具体同事类B
class ConcreteColleagueB : public Colleague {
public:
    ConcreteColleagueB(Mediator* mediator) : Colleague(mediator) {}

    void send(const std::string& message) override {
        _mediator->sendMessage(message, this);
    }

    void receive(const std::string& message) override {
        std::cout << "Colleague B received: " << message << std::endl;
    }
};

// 具体中介者
class ConcreteMediator : public Mediator {
private:
    ConcreteColleagueA* _colleagueA;
    ConcreteColleagueB* _colleagueB;

public:
    void setColleagueA(ConcreteColleagueA* colleagueA) {
        _colleagueA = colleagueA;
    }

    void setColleagueB(ConcreteColleagueB* colleagueB) {
        _colleagueB = colleagueB;
    }

    void sendMessage(const std::string& message, Colleague* colleague) override {
        if (colleague == _colleagueA) {
            _colleagueB->receive(message);
        } else if (colleague == _colleagueB) {
            _colleagueA->receive(message);
        }
    }
};

int main() {
    ConcreteMediator mediator;

    ConcreteColleagueA colleagueA(&mediator);
    ConcreteColleagueB colleagueB(&mediator);

    mediator.setColleagueA(&colleagueA);
    mediator.setColleagueB(&colleagueB);

    colleagueA.send("Hello from Colleague A");
    colleagueB.send("Hello from Colleague B");

    return 0;
}