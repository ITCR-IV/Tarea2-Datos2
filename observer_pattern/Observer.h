#ifndef OBSERVER_H
#define OBSERVER_H


#include <string>

class Observer {
 public:
  virtual ~Observer(){};
  virtual void Update(const std::string &message_from_subject) = 0;
};

#endif