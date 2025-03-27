#include <iostream>
#include <vector>

// 迭代器接口
class Iterator {
public:
    virtual ~Iterator() {}
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() const = 0;
    virtual int currentItem() const = 0;
};

// 具体迭代器
class ConcreteIterator : public Iterator {
private:
    std::vector<int>* _aggregate;
    int _current;

public:
    ConcreteIterator(std::vector<int>* aggregate) : _aggregate(aggregate), _current(0) {}

    void first() override {
        _current = 0;
    }

    void next() override {
        if (_current < _aggregate->size()) {
            _current++;
        }
    }

    bool isDone() const override {
        return _current >= _aggregate->size();
    }

    int currentItem() const override {
        if (isDone()) {
            throw std::out_of_range("Iterator out of range");
        }
        return (*_aggregate)[_current];
    }
};

// 聚集接口
class Aggregate {
public:
    virtual ~Aggregate() {}
    virtual Iterator* createIterator() = 0;
};

// 具体聚集
class ConcreteAggregate : public Aggregate {
private:
    std::vector<int> _items;

public:
    Iterator* createIterator() override {
        return new ConcreteIterator(&_items);
    }

    int size() const {
        return _items.size();
    }

    int operator[](int index) {
        return _items[index];
    }

    void addItem(int item) {
        _items.push_back(item);
    }
};

int main() {
    ConcreteAggregate aggregate;
    aggregate.addItem(1);
    aggregate.addItem(2);
    aggregate.addItem(3);

    Iterator* iterator = aggregate.createIterator();
    for (iterator->first(); !iterator->isDone(); iterator->next()) {
        std::cout << "Item: " << iterator->currentItem() << std::endl;
    }

    delete iterator;

    return 0;
}