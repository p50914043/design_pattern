#include <iostream>
#include <memory>

// 状态接口
class State {
public:
    virtual ~State() {}
    virtual void handle() = 0;
};

// 具体状态A
class ConcreteStateA : public State {
public:
    void handle() override {
        std::cout << "ConcreteStateA handles the request." << std::endl;
        // 可以切换到另一个状态
        // context->transitionTo(new ConcreteStateB());
    }
};

// 具体状态B
class ConcreteStateB : public State {
public:
    void handle() override {
        std::cout << "ConcreteStateB handles the request." << std::endl;
        // 可以切换到另一个状态
        // context->transitionTo(new ConcreteStateA());
    }
};

// 上下文类
class Context {
private:
    std::unique_ptr<State> _state;

public:
    Context(std::unique_ptr<State> state) : _state(std::move(state)) {}

    void transitionTo(std::unique_ptr<State> state) {
        std::cout << "Context: Transition to " << typeid(*state).name() << "." << std::endl;
        _state = std::move(state);
    }

    void request() {
        _state->handle();
    }
};

int main() {
    std::unique_ptr<State> stateA = std::make_unique<ConcreteStateA>();
    Context context(std::move(stateA));

    context.request();

    // 切换状态
    context.transitionTo(std::make_unique<ConcreteStateB>());

    context.request();

    return 0;
}