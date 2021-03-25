//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_NORMAL_CALCULATOR_H
#define TAREA2_DATOS2_NORMAL_CALCULATOR_H

#include <string>
#include "Calculator.h"

using namespace std;

class Normal_calculator : public Calculator {
    public:
        Normal_calculator(Operations* operation): Calculator(operation){}
        string calculator_type(int num_1, int num_2, string operation) const override;
};


#endif //TAREA2_DATOS2_NORMAL_CALCULATOR_H
