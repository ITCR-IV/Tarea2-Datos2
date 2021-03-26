#ifndef LETTER_OBSERVER_H
#define LETTER_OBSERVER_H

#include <string>
#include "Observer.h"

class LetterObserver : public Observer
{
private:
    char trackingLetter;
public:
    LetterObserver(char letter);
    void update(const std::string &message) override;
    int letterCount(const std::string &message);
};

#endif