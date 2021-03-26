#include "LetterObserver.h"
#include <iostream>

LetterObserver::LetterObserver(char letter){
    trackingLetter = toupper(letter);
}

int LetterObserver::letterCount(const std::string &message){
    int c = 0;
    for (int i = 0; i < message.length(); i++)
    {
        if (toupper(message[i]) == trackingLetter)
        {
            c++;
        }
    }
    return c;
}

void LetterObserver::update(const std::string &message){
    int count = letterCount(message);
    std::cout << "Last message contained " << count << " letters '" << (char) tolower(trackingLetter) << "'" << std::endl;
}