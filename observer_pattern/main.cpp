#include <iostream>
#include <string>
#include "LetterObserver.h"
#include "TextPublisher.h"

using namespace std;

int main()
{
    TextPublisher *tx = new TextPublisher;
    LetterObserver *obsA = new LetterObserver('a');
    tx->subscribe(obsA);
    LetterObserver *obsB = new LetterObserver('b');
    tx->subscribe(obsB);
    LetterObserver *obsM = new LetterObserver('m');
    tx->subscribe(obsM);
    LetterObserver *obsD = new LetterObserver('d');
    tx->subscribe(obsD);
    LetterObserver *obsT = new LetterObserver('t');
    tx->subscribe(obsT);
    LetterObserver *obsU = new LetterObserver('u');
    tx->subscribe(obsU);

    while (true)
    {
        tx->getInput();
    }
}