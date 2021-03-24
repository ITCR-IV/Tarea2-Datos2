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
        string calculator_type() const override;
};


#endif //TAREA2_DATOS2_NORMAL_CALCULATOR_H
