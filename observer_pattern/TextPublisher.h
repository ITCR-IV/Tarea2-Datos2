#ifndef TEXT_PUBLISHER_H
#define TEXT_PUBLISHER_H

#include "Publisher.h"
#include <string>
#include <list>

class TextPublisher : public Publisher
{
private:
    std::string lastMessage;
    std::list<Observer *> observerList;
public:
    void getInput();
    void subscribe(Observer *observer) override;
    void unsubscribe(Observer *observer) override;
    void notify() override;
};

#endif