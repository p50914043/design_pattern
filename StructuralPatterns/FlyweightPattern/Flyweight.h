#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>

class Flyweight {
 public:
  virtual ~Flyweight() {}
  virtual void operation(const std::string& extrinsicState) = 0;
};

#endif  // FLYWEIGHT_H