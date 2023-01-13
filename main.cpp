#include <iostream>
#include "Haine.h"
#include "Hanorace.h"
#include "Pantaloni.h"
#include "GetCod.h"
#include "Fabrica.h"
#include "Fabrica_hanorace.h"
#include "Fabrica_pantaloni.h"

int main() {
    // Hanorace *hanorac1 = new Hanorace("bumbac","rosu",300,"Zara",GetCod::instanta()->next(),50,30,"fara fermoar");
    // hanorac1->afis();

    Fabrica* fabrica = new Fabrica_hanorace();
    Haine* a[3];
    a[0] = fabrica->creeaza_hanorace();
    a[1] = fabrica->creeaza_hanorace();
    a[2] = fabrica->creeaza_hanorace();

    Hanorace* b[3];

    b[0] = new Hanorace("bumbac","albastru",200,"H&M",GetCod::instanta()->next(),20,40,"fara fermoar");
    b[1] = new Hanorace("poliester","galben",150,"Pepco",GetCod::instanta()->next(),60,45,"cu fermoar");
    b[2] = new Hanorace("bumbac","rosu",300,"Zara",GetCod::instanta()->next(),50,30,"fara fermoar");

    for(int i=0; i<3; i++) a[i] = b[i];

    for(int i=0;i<3;i++) a[i]->afis();

    return 0;
}
