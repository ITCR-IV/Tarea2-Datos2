//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_SCIENTIFIC_CALCULATOR_H
#define TAREA2_DATOS2_SCIENTIFIC_CALCULATOR_H

#include <string>
#include "Calculator.h"
using namespace std;

class Scientific_calculator : public Calculator {
    public:
        explicit Scientific_calculator(Operations* operation): Calculator(operation){}
        string calculator_type(int num_1, int num_2, string operation) const override;
};


#endif //TAREA2_DATOS2_SCIENTIFIC_CALCULATOR_H
