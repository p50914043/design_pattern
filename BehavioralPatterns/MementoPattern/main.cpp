#include <iostream>
#include <string>
#include <stack>

// 备忘录类
class Memento {
private:
    std::string _state;

public:
    Memento(const std::string& state) : _state(state) {}

    std::string getState() const {
        return _state;
    }
};

// 发起人类
class Originator {
private:
    std::string _state;

public:
    void setState(const std::string& state) {
        _state = state;
        std::cout << "Originator: State changed to " << _state << std::endl;
    }

    Memento* saveStateToMemento() {
        std::cout << "Originator: Saving to Memento." << std::endl;
        return new Memento(_state);
    }

    void restoreStateFromMemento(Memento* memento) {
        _state = memento->getState();
        std::cout << "Originator: State after restoring from Memento: " << _state << std::endl;
    }
};

// 管理者类
class Caretaker {
private:
    std::stack<Memento*> _mementoStack;

public:
    void addMemento(Memento* memento) {
        _mementoStack.push(memento);
    }

    Memento* getMemento() {
        if (!_mementoStack.empty()) {
            Memento* memento = _mementoStack.top();
            _mementoStack.pop();
            return memento;
        }
        return nullptr;
    }
};

int main() {
    Originator originator;
    Caretaker caretaker;

    originator.setState("State1");
    caretaker.addMemento(originator.saveStateToMemento());

    originator.setState("State2");
    caretaker.addMemento(originator.saveStateToMemento());

    originator.setState("State3");
    // 恢复到上一个状态
    originator.restoreStateFromMemento(caretaker.getMemento());

    // 恢复到上一个状态
    originator.restoreStateFromMemento(caretaker.getMemento());

    return 0;
}