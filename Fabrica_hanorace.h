//
// Created by victo on 1/13/2023.
//

#ifndef OOP_FABRICA_HANORACE_H
#define OOP_FABRICA_HANORACE_H
#include "Fabrica.h"
#include "Haine.h"
#include "Hanorace.h"
class Fabrica_hanorace : public Fabrica{
public:
    Haine* creeaza_hanorace() override{
        return new Hanorace;

    }
    Haine* creeaza_pantaloni() override
    {
        return new Hanorace;
    }

};


#endif //OOP_FABRICA_HANORACE_H
