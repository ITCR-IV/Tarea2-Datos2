#include <iostream>
#include <string>
#include "LetterObserver.h"
#include "TextPublisher.h"

using namespace std;

int main()
{
    LetterObserver *ob = new LetterObserver('a');
    TextPublisher *tx = new TextPublisher;
    tx->subscribe(ob);
    tx->getInput();
    tx->getInput();
    delete ob;
    delete tx;
}