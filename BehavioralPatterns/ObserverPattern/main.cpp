#include <iostream>
#include <vector>
#include <string>

// 观察者接口
class Observer {
public:
    virtual ~Observer() {}
    virtual void update(const std::string& message) = 0;
};

// 主题接口
class Subject {
private:
    std::vector<Observer*> _observers;

public:
    void addObserver(Observer* observer) {
        _observers.push_back(observer);
    }

    void removeObserver(Observer* observer) {
        _observers.erase(std::remove(_observers.begin(), _observers.end(), observer), _observers.end());
    }

    void notifyObservers(const std::string& message) {
        for (Observer* observer : _observers) {
            observer->update(message);
        }
    }
};

// 具体观察者A
class ConcreteObserverA : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "ConcreteObserverA received: " << message << std::endl;
    }
};

// 具体观察者B
class ConcreteObserverB : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "ConcreteObserverB received: " << message << std::endl;
    }
};

// 具体主题
class ConcreteSubject : public Subject {
private:
    std::string _state;

public:
    void setState(const std::string& state) {
        _state = state;
        std::cout << "ConcreteSubject: State changed to " << _state << std::endl;
        notifyObservers(_state);
    }
};

int main() {
    ConcreteSubject subject;

    ConcreteObserverA observerA;
    ConcreteObserverB observerB;

    subject.addObserver(&observerA);
    subject.addObserver(&observerB);

    subject.setState("State1");

    subject.removeObserver(&observerA);

    subject.setState("State2");

    return 0;
}