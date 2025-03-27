#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Component.h"
#include <vector>

class Composite : public Component {
private:
    std::vector<Component*> children;

public:
    void operation() override {
        for (Component* child : children) {
            child->operation();
        }
    }

    void add(Component* component) override {
        children.push_back(component);
    }

    void remove(Component* component) override {
        auto it = std::find(children.begin(), children.end(), component);
        if (it != children.end()) {
            children.erase(it);
        }
    }

    Component* getChild(int index) override {
        if (index >= 0 && index < children.size()) {
            return children[index];
        }
        return nullptr;
    }
};

#endif // COMPOSITE_H