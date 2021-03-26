#include "TextPublisher.h"
#include <string>
#include <list>
#include <iostream>

void TextPublisher::getInput()
{
    std::cout << "\nInput a new message:\n";
    std::string msg;
    std::getline(std::cin,msg);
    lastMessage = msg;
    notify();
}
void TextPublisher::subscribe(Observer *observer)
{
    observerList.push_back(observer);
}
void TextPublisher::unsubscribe(Observer *observer)
{
    observerList.remove(observer);
}
void TextPublisher::notify()
{
    std::list<Observer *>::iterator iterator;
    for (iterator = observerList.begin(); iterator != observerList.end(); ++iterator)
    {
        (*iterator)->update(lastMessage);
    }   
}