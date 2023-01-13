//
// Created by victo on 1/13/2023.
//

#ifndef OOP_FABRICA_H
#define OOP_FABRICA_H
#include "Haine.h"

class Fabrica {
public:
    virtual Haine* creeaza_pantaloni()=0;
    virtual Haine* creeaza_hanorace()=0;
};


#endif //OOP_FABRICA_H
