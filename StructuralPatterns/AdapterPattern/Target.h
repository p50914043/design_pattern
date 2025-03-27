#ifndef TARGET_H
#define TARGET_H

class Target {
public:
    virtual ~Target() {}
    virtual void request() = 0;
};

#endif // TARGET_H