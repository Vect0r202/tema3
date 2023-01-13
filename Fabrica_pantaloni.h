//
// Created by victo on 1/13/2023.
//

#ifndef OOP_FABRICA_PANTALONI_H
#define OOP_FABRICA_PANTALONI_H
#include "Fabrica.h"
#include "Pantaloni.h"
#include "Haine.h"

class Fabrica_pantaloni : public Fabrica{
public:
    Haine* creeaza_pantaloni() override{
        return new Pantaloni;
    }
    Haine* creeaza_hanorace() override
    {
        return new Pantaloni;
    }
};


#endif //OOP_FABRICA_PANTALONI_H
