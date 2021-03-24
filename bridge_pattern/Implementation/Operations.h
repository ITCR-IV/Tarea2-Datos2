//
// Created by ignacio on 23/3/21.
//

#ifndef TAREA2_DATOS2_OPERATIONS_H
#define TAREA2_DATOS2_OPERATIONS_H

#include <string>

using namespace std;

class Operations {
public:
    virtual ~Operations(){}
    virtual string addition() const = 0;
    virtual string subtraction() const = 0;
    virtual string multiplication() const = 0;
    virtual string division() const = 0;
    virtual string power_of() const = 0;
};


#endif //TAREA2_DATOS2_OPERATIONS_H
