#include "Leaf.h"
#include "Composite.h"

int main() {
    // 创建叶子节点
    Component* leaf1 = new Leaf();
    Component* leaf2 = new Leaf();
    Component* leaf3 = new Leaf();

    // 创建组合节点
    Composite* composite1 = new Composite();
    Composite* composite2 = new Composite();

    // 组合叶子节点和组合节点
    composite1->add(leaf1);
    composite1->add(leaf2);
    composite2->add(leaf3);
    composite1->add(composite2);

    // 执行操作
    composite1->operation();

    // 清理
    delete composite1;

    return 0;
}