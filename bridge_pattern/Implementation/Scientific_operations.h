//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_SCIENTIFIC_OPERATIONS_H
#define TAREA2_DATOS2_SCIENTIFIC_OPERATIONS_H

#include <string>
#include "Operations.h"

using namespace std;

class Scientific_operations : public Operations {
    string addition(int num_1, int num_2) const override;
    string subtraction(int num_1, int num_2) const override;
    string multiplication(int num_1, int num_2) const override;
    string division(int num_1, int num_2) const override;
    string power_of(int num_1, int num_2) const override;
};


#endif //TAREA2_DATOS2_SCIENTIFIC_OPERATIONS_H
