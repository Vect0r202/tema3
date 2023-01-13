//
// Created by victo on 1/9/2023.
//

#include "Pantaloni.h"

Pantaloni::Pantaloni(const std::string &material, const std::string &culoare, int pret, const std::string &producator,int id,
                     int latimeTalie, int lungimeCrac, int nrBuzunare, const std::string &tipPantalon) : Haine(material,
                                                                                                               culoare,
                                                                                                               pret,
                                                                                                               producator,id),
                                                                                                         latime_talie(
                                                                                                                 latimeTalie),
                                                                                                         lungime_crac(
                                                                                                                 lungimeCrac),
                                                                                                         nr_buzunare(
                                                                                                                 nrBuzunare),
                                                                                                         tip_pantalon(
                                                                                                                 tipPantalon) {}

Pantaloni::Pantaloni() {
    latime_talie=0;
    lungime_crac=0;
    nr_buzunare=0;
    tip_pantalon="neinregistrat";
}

int Pantaloni::getLatimeTalie() const {
    return latime_talie;
}

void Pantaloni::setLatimeTalie(int latimeTalie) {
    latime_talie = latimeTalie;
}

int Pantaloni::getLungimeCrac() const {
    return lungime_crac;
}

void Pantaloni::setLungimeCrac(int lungimeCrac) {
    lungime_crac = lungimeCrac;
}

int Pantaloni::getNrBuzunare() const {
    return nr_buzunare;
}

void Pantaloni::setNrBuzunare(int nrBuzunare) {
    nr_buzunare = nrBuzunare;
}

const std::string &Pantaloni::getTipPantalon() const {
    return tip_pantalon;
}

void Pantaloni::setTipPantalon(const std::string &tipPantalon) {
    tip_pantalon = tipPantalon;
}

Pantaloni::~Pantaloni() {

}

std::istream &operator>>(std::istream &is, Pantaloni &pantaloni){
    std::cout<<"Introduceti lungimea taliei: ";
    is>>pantaloni.latime_talie;
    std::cout<<"Introduceti lungimea cracului: ";
    is>>pantaloni.lungime_crac;
    std::cout<<"Introduceti numarul buzunarelor: ";
    is>>pantaloni.nr_buzunare;
    std::cout<<"Introduceti tipul pantalonilor: ";
    is>>pantaloni.tip_pantalon;

    return is;
}

std::ostream &operator<<(std::ostream &os, const Pantaloni &pantaloni) {
    os << static_cast<const Haine &>(pantaloni) << "Latimea taliei este: " << pantaloni.latime_talie <<std::endl<< "Lungimea cracului este: "
       << pantaloni.lungime_crac <<std::endl<< "Numarul buzunarelor este: " << pantaloni.nr_buzunare << "Tipului pantalonului este: "
       << pantaloni.tip_pantalon;
    return os;
}

void Pantaloni::afis() {
    std::cout<<"Materialul este: "<<getMaterial()<<std::endl<<"Culoarea este: "<<getCuloare()<<std::endl<<"Pretul este: "<<getPret()<<std::endl<<"Producatorul este: "<<getProducator()<< std::endl<< "Latimea taliei este: " << latime_talie <<std::endl<< "Lungimea cracului este: "
                                                        << lungime_crac <<std::endl<< "Numarul buzunarelor este: " << nr_buzunare << "Tipului pantalonului este: "
                                                        << tip_pantalon;;
}


