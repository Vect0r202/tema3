//
// Created by victo on 1/13/2023.
//

#include "GetCod.h"

GetCod* GetCod::copie=0;
GetCod::GetCod() {
    id = 0;
}

GetCod *GetCod::instanta() {
    if(!copie)
         copie = new GetCod();
    return copie;
}

int GetCod::next() {
    return id++;
}
