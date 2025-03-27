#include <iostream>

// 抽象类，定义模板方法
class AbstractClass {
public:
    void templateMethod() {
        step1();
        step2();
        step3();
    }

protected:
    virtual void step1() = 0;
    virtual void step2() = 0;
    virtual void step3() = 0;
};

// 具体类A，实现模板方法中的步骤
class ConcreteClassA : public AbstractClass {
protected:
    void step1() override {
        std::cout << "ConcreteClassA: Step 1" << std::endl;
    }

    void step2() override {
        std::cout << "ConcreteClassA: Step 2" << std::endl;
    }

    void step3() override {
        std::cout << "ConcreteClassA: Step 3" << std::endl;
    }
};

// 具体类B，实现模板方法中的步骤
class ConcreteClassB : public AbstractClass {
protected:
    void step1() override {
        std::cout << "ConcreteClassB: Step 1" << std::endl;
    }

    void step2() override {
        std::cout << "ConcreteClassB: Step 2" << std::endl;
    }

    void step3() override {
        std::cout << "ConcreteClassB: Step 3" << std::endl;
    }
};

int main() {
    AbstractClass* classA = new ConcreteClassA();
    classA->templateMethod();

    std::cout << std::endl;

    AbstractClass* classB = new ConcreteClassB();
    classB->templateMethod();

    delete classA;
    delete classB;

    return 0;
}