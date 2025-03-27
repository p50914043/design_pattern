#include <iostream>
#include <vector>
#include <string>

// 访问者接口
class Visitor {
public:
    virtual ~Visitor() {}
    virtual void visitElementA(class ElementA* element) = 0;
    virtual void visitElementB(class ElementB* element) = 0;
};

// 元素接口
class Element {
public:
    virtual ~Element() {}
    virtual void accept(Visitor* visitor) = 0;
};

// 具体元素A
class ElementA : public Element {
public:
    void accept(Visitor* visitor) override {
        visitor->visitElementA(this);
    }

    std::string operationA() {
        return "ElementA operation";
    }
};

// 具体元素B
class ElementB : public Element {
public:
    void accept(Visitor* visitor) override {
        visitor->visitElementB(this);
    }

    std::string operationB() {
        return "ElementB operation";
    }
};

// 具体访问者A
class ConcreteVisitorA : public Visitor {
public:
    void visitElementA(ElementA* element) override {
        std::cout << "ConcreteVisitorA visited ElementA: " << element->operationA() << std::endl;
    }

    void visitElementB(ElementB* element) override {
        std::cout << "ConcreteVisitorA visited ElementB: " << element->operationB() << std::endl;
    }
};

// 具体访问者B
class ConcreteVisitorB : public Visitor {
public:
    void visitElementA(ElementA* element) override {
        std::cout << "ConcreteVisitorB visited ElementA: " << element->operationA() << std::endl;
    }

    void visitElementB(ElementB* element) override {
        std::cout << "ConcreteVisitorB visited ElementB: " << element->operationB() << std::endl;
    }
};

// 对象结构
class ObjectStructure {
private:
    std::vector<Element*> _elements;

public:
    void addElement(Element* element) {
        _elements.push_back(element);
    }

    void accept(Visitor* visitor) {
        for (Element* element : _elements) {
            element->accept(visitor);
        }
    }
};

int main() {
    ObjectStructure structure;
    structure.addElement(new ElementA());
    structure.addElement(new ElementB());

    ConcreteVisitorA visitorA;
    ConcreteVisitorB visitorB;

    structure.accept(&visitorA);
    structure.accept(&visitorB);

    return 0;
}