//
// Created by victo on 1/8/2023.
//

#include "Haine.h"
#include "iostream"
Haine::Haine(const std::string &material, const std::string &culoare, int pret, const std::string &producator, int _id)
        : material(material), culoare(culoare), pret(pret), producator(producator), id(_id) {}

Haine::Haine() {
    material="neinregistrat";
    culoare="neinregistrat";
    pret=0;
    producator="neinregistrat";
}

Haine::~Haine() {

}

Haine::Haine(const Haine &rhs) {
    material=rhs.material;
    culoare=rhs.culoare;
    pret=rhs.pret;
    producator=rhs.producator;

}

const std::string &Haine::getMaterial() const {
    return material;
}

void Haine::setMaterial(const std::string &_material) {
    Haine::material = _material;
}

const std::string &Haine::getCuloare() const {
    return culoare;
}

void Haine::setCuloare(const std::string &_culoare) {
    Haine::culoare = _culoare;
}

int Haine::getPret() const {
    return pret;
}

void Haine::setPret(int _pret) {
    Haine::pret = _pret;
}

const std::string &Haine::getProducator() const {
    return producator;
}

void Haine::setProducator(const std::string &_producator) {
    Haine::producator = _producator;
}



std::ostream &operator<<(std::ostream &os, const Haine &haine) {
    os << "Materialul este: " << haine.material <<std::endl<< "Culoarea este: " << haine.culoare <<std::endl<< "Pretul este: " << haine.pret <<std::endl<< "Producatorul este: "
       << haine.producator;
    return os;
}

std::istream &operator>>(std::istream &is, Haine &haine) {
    std::cout<<"Introduceti materialul: ";
    is>>haine.material;
    std::cout<<"Introduceti culoarea: ";
    is>>haine.culoare;
    std::cout<<"Introduceti pretul: ";
    is>>haine.pret;
    std::cout<<"Introduceti producatorul: ";
    is>>haine.producator;

    return is;
}

Haine &Haine::operator=(const Haine &rhs) {
    material=rhs.material;
    culoare=rhs.culoare;
    pret=rhs.pret;
    producator=rhs.producator;

    return *this;
}

int Haine::getId() const {
    return id;
}

void Haine::setId(int _id) {
    Haine::id = _id;
}
