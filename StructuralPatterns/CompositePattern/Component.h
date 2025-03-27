#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
#include <vector>

class Component {
public:
    virtual ~Component() {}
    virtual void operation() = 0;
    virtual void add(Component* component) {
        // 默认实现，叶子节点不需要实现
    }
    virtual void remove(Component* component) {
        // 默认实现，叶子节点不需要实现
    }
    virtual Component* getChild(int index) {
        // 默认实现，叶子节点不需要实现
        return nullptr;
    }
};

#endif // COMPONENT_H