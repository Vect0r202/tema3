//
// Created by victo on 1/9/2023.
//

#ifndef OOP_PANTALONI_H
#define OOP_PANTALONI_H


#include <string>
#include <ostream>
#include "Haine.h"


class Pantaloni : public Haine{
    int latime_talie;
    int lungime_crac;
    int nr_buzunare;
    std::string tip_pantalon;

public:
    Pantaloni(const std::string &material, const std::string &culoare, int pret, const std::string &producator, int id,
              int latimeTalie, int lungimeCrac, int nrBuzunare, const std::string &tipPantalon);

    Pantaloni();

    int getLatimeTalie() const;

    void setLatimeTalie(int latimeTalie);

    int getLungimeCrac() const;

    void setLungimeCrac(int lungimeCrac);

    int getNrBuzunare() const;

    void setNrBuzunare(int nrBuzunare);

    const std::string &getTipPantalon() const;

    void setTipPantalon(const std::string &tipPantalon);
    void afis() override;
    ~Pantaloni() override;

    friend std::istream &operator>>(std::istream &is, Pantaloni &pantaloni);
    friend std::ostream &operator<<(std::ostream &os, const Pantaloni &pantaloni);
};


#endif //OOP_PANTALONI_H
