#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
public:
    virtual ~Component() {}
    virtual void operation() = 0;
};

#endif // COMPONENT_H