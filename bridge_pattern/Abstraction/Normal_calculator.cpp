//
// Created by ignacio on 23/3/21.
//

#include "Normal_calculator.h"

string Normal_calculator::calculator_type(int num_1, int num_2, string operation) const {
    string result;
    if (operation == "addition"){
        result = this->operations_->addition(num_1,num_2);
    } else if (operation == "subtraction"){
        result = this->operations_->subtraction(num_1,num_2);
    } else if (operation == "multiplication"){
        result = this->operations_->multiplication(num_1,num_2);
    }else if (operation == "division"){
        result = this->operations_->division(num_1,num_2);
    }else if (operation == "power_of"){
        result = this->operations_->power_of(num_1,num_2);
    }
    return "Normal calculator:  here is the result using this type of calculator. \n" + result;
}
