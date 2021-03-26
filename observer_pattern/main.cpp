#include <iostream>
#include <string>
#include "LetterObserver.h"

using namespace std;

int main()
{
    LetterObserver *ob = new LetterObserver('m');
    string msg;
    cin >> msg;
    ob->update("msg");
}