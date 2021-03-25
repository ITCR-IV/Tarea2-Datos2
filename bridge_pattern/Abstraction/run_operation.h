//
// Created by ignacio on 24/3/21.
//

#ifndef TAREA2_DATOS2_RUN_OPERATION_H
#define TAREA2_DATOS2_RUN_OPERATION_H

#endif //TAREA2_DATOS2_RUN_OPERATION_H

#include <iostream>;

void run_operation(const Calculator& calculator, int num_1, int num_2, string operation){
    cout << calculator.calculator_type(num_1, num_2, operation);
}