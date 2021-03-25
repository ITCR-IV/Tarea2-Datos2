//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_OPERATIONS_H
#define TAREA2_DATOS2_OPERATIONS_H

#include <string>

using namespace std;

class Operations {
public:
    virtual ~Operations()= default;
    virtual string addition(int num_1, int num_2) const = 0;
    virtual string subtraction(int num_1, int num_2) const = 0;
    virtual string multiplication(int num_1, int num_2) const = 0;
    virtual string division(int num_1, int num_2) const = 0;
    virtual string power_of(int num_1, int num_2) const = 0;
};


#endif //TAREA2_DATOS2_OPERATIONS_H
