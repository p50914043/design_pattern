#include <iostream>
#include <string>

// 产品类
class Product {
public:
    void setPartA(const std::string& part) {
        partA = part;
    }

    void setPartB(const std::string& part) {
        partB = part;
    }

    void setPartC(const std::string& part) {
        partC = part;
    }

    void show() const {
        std::cout << "Product Parts: " << partA << ", " << partB << ", " << partC << std::endl;
    }

private:
    std::string partA;
    std::string partB;
    std::string partC;
};

// 抽象建造者类
class Builder {
public:
    virtual ~Builder() {}
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual void buildPartC() = 0;
    virtual Product* getResult() = 0;
};

// 具体建造者类
class ConcreteBuilder : public Builder {
public:
    ConcreteBuilder() {
        product = new Product();
    }

    ~ConcreteBuilder() {
        delete product;
    }

    void buildPartA() override {
        product->setPartA("PartA");
    }

    void buildPartB() override {
        product->setPartB("PartB");
    }

    void buildPartC() override {
        product->setPartC("PartC");
    }

    Product* getResult() override {
        return product;
    }

private:
    Product* product;
};

// 指挥者类
class Director {
public:
    void setBuilder(Builder* builder) {
        this->builder = builder;
    }

    void construct() {
        builder->buildPartA();
        builder->buildPartB();
        builder->buildPartC();
    }

private:
    Builder* builder;
};

int main() {
    ConcreteBuilder builder;
    Director director;
    director.setBuilder(&builder);
    director.construct();
    Product* product = builder.getResult();
    product->show();
    delete product;
    return 0;
}