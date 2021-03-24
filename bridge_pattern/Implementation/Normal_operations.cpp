//
// Created by ignacio on 23/3/21.
//

#include "Normal_operations.h"

string Normal_operations::addition(int num_1, int num_2) const {
    int tmp = num_1 + num_2;
    return "Result on normal calculator:  " + to_string(tmp);
}

string Normal_operations::subtraction(int num_1, int num_2) const {
    int tmp = num_1 - num_2;
    return "Result on normal calculator:  " + to_string(tmp);
}

string Normal_operations::multiplication(int num_1, int num_2) const {
    int tmp = num_1 * num_2;
    return "Result on normal calculator:  " + to_string(tmp);
}

string Normal_operations::division(int num_1, int num_2) const {
    int tmp = num_1 / num_2;
    return "Result on normal calculator:  " + to_string(tmp);
}
