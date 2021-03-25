//
// Created by ignacio on 23/3/21.
//

#include "Scientific_operations.h"
#include "math.h"

string Scientific_operations::addition(int num_1, int num_2) const {
    int tmp = num_1 + num_2;
    return "Result on scientific calculator:  " + to_string(tmp) + "\\n";
}

string Scientific_operations::subtraction(int num_1, int num_2) const {
    int tmp = num_1 - num_2;
    return "Result on scientific calculator:  " + to_string(tmp)+ "\n";
}

string Scientific_operations::multiplication(int num_1, int num_2) const {
    int tmp = num_1 * num_2;
    return "Result on scientific calculator:  " + to_string(tmp)+ "\n";
}

string Scientific_operations::division(int num_1, int num_2) const {
    int tmp = num_1 / num_2;
    return "Result on scientific calculator:  " + to_string(tmp)+ "\n";
}

string Scientific_operations::power_of(int num_1, int num_2) const {
    double tmp = pow(num_1, num_2);
    return "Result on scientific calculator:  " + to_string(tmp) + "\n";
}
