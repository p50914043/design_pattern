#include <iostream>
#include <memory>

// 策略接口
class Strategy {
public:
    virtual ~Strategy() {}
    virtual void execute() const = 0;
};

// 具体策略A
class ConcreteStrategyA : public Strategy {
public:
    void execute() const override {
        std::cout << "Executing strategy A" << std::endl;
    }
};

// 具体策略B
class ConcreteStrategyB : public Strategy {
public:
    void execute() const override {
        std::cout << "Executing strategy B" << std::endl;
    }
};

// 上下文类
class Context {
private:
    std::unique_ptr<Strategy> _strategy;

public:
    Context(std::unique_ptr<Strategy> strategy) : _strategy(std::move(strategy)) {}

    void setStrategy(std::unique_ptr<Strategy> strategy) {
        _strategy = std::move(strategy);
    }

    void executeStrategy() const {
        _strategy->execute();
    }
};

int main() {
    std::unique_ptr<Strategy> strategyA = std::make_unique<ConcreteStrategyA>();
    Context context(std::move(strategyA));

    context.executeStrategy();

    // 切换策略
    context.setStrategy(std::make_unique<ConcreteStrategyB>());

    context.executeStrategy();

    return 0;
}