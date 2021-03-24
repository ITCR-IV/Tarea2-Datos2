//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_BRIDGE_PATTERN_H
#define TAREA2_DATOS2_BRIDGE_PATTERN_H

#include <string>
using namespace std;

// Class abstraction

class Calculator {
protected:
    //Operations* operations_;
public:
    virtual ~Calculator(){}
//    Calculator(Operations* operation) : operations_(operation){
//
//    }
    virtual string calculator_type() const = 0;
};


#endif //TAREA2_DATOS2_BRIDGE_PATTERN_H
