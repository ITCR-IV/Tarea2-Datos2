//
// Created by ignacio on 24/3/21.
//

#include <Implementation/Operations.h>
#include <Implementation/Normal_operations.h>
#include <Abstraction/Calculator.h>
#include <Abstraction/Normal_calculator.h>
#include <Abstraction/run_operation.h>
#include <Implementation/Scientific_operations.h>
#include <Abstraction/Scientific_calculator.h>

using namespace std;

int main(){
    int new_num_1;
    int new_num_2;
    string new_operation;

    cout << "Digite el primer numero: " << endl;
    cin >> new_num_1;

    cout << "Digite el segundo numero: " << endl;
    cin >> new_num_2;

    cout << "Digite la operacion (addition, subtraction, multiplication, division, power_of): " << endl;
    cin >> new_operation;

    cout << "\n"<< endl;

    Operations* operation = new Normal_operations;
    Calculator *normal_calculator = new Normal_calculator(operation);
    run_operation(*normal_calculator, new_num_1,new_num_2, new_operation);
    cout << endl;

    delete operation;
    delete normal_calculator;

    cout << "\n"<< endl;

    cout << "Digite el primer numero: " << endl;
    cin >> new_num_1;

    cout << "Digite el segundo numero: " << endl;
    cin >> new_num_2;

    cout << "Digite la operacion (addition, subtraction, multiplication, division, power_of): " << endl;
    cin >> new_operation;

    cout << "\n"<< endl;

    operation = new Scientific_operations;
    Calculator *scientific_calculator = new Scientific_calculator(operation);
    run_operation(*scientific_calculator, new_num_1,new_num_2,new_operation);
    cout << endl;

    delete operation;
    delete scientific_calculator;

}