#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Observer.h"

class Publisher {
 public:
  virtual ~Publisher(){};
  virtual void subscribe(Observer *observer) = 0;
  virtual void unsubscribe(Observer *observer) = 0;
  virtual void notify() = 0;
};

#endif