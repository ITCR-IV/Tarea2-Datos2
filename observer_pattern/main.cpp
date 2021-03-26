#include <iostream>
#include <string>
#include "LetterObserver.h"

using namespace std;

int main()
{
    LetterObserver *ob = new LetterObserver('m');
    ob->update("MSuck my balls you dimwat, fuck youm");
}