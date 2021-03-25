#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Observer.h"

class Publisher {
 public:
  virtual ~Publisher(){};
  virtual void Attach(Observer *observer) = 0;
  virtual void Detach(Observer *observer) = 0;
  virtual void Notify() = 0;
};

#endif