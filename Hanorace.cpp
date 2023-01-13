

#include "Hanorace.h"

Hanorace::Hanorace(const std::string &material, const std::string &culoare, int pret, const std::string &producator,int id,
                   int lungimeGluga, int lungimeMarsupiu, const std::string &tip) : Haine(material, culoare, pret,
                                                                                          producator,id),
                                                                                    lungime_gluga(lungimeGluga),
                                                                                    lungime_marsupiu(lungimeMarsupiu),
                                                                                    tip(tip) {}

Hanorace::Hanorace() {
    lungime_gluga=0;
    lungime_marsupiu=0;
    tip="neinregistrat";
}

int Hanorace::getLungimeGluga() const {
    return lungime_gluga;
}

void Hanorace::setLungimeGluga(int lungimeGluga) {
    lungime_gluga = lungimeGluga;
}

int Hanorace::getLungimeMarsupiu() const {
    return lungime_marsupiu;
}

void Hanorace::setLungimeMarsupiu(int lungimeMarsupiu) {
    lungime_marsupiu = lungimeMarsupiu;
}

const std::string &Hanorace::getTip() const {
    return tip;
}

void Hanorace::setTip(const std::string &_tip) {
    Hanorace::tip = _tip;
}

Hanorace::~Hanorace() {

}

std::istream &operator>>(std::istream &is, Hanorace &hanorace){
    std::cout<<"Introduceti lungimea glugii: ";
    is>>hanorace.lungime_gluga;
    std::cout<<"Introduceti lungimea buzunarului: ";
    is>>hanorace.lungime_marsupiu;
    std::cout<<"Introduceti tipul hanoracului(cu/fara fermuar): ";
    is>>hanorace.tip;

    return is;
}

std::ostream &operator<<(std::ostream &os, const Hanorace &hanorace) {
    os << static_cast<const Haine &>(hanorace) << "Lungimea glugii este: " << hanorace.lungime_gluga <<std::endl<< "Lungimea buzunarului este: "
       << hanorace.lungime_marsupiu <<std::endl<< " tip: " << hanorace.tip;
    return os;
}

void Hanorace::afis()  {
    std::cout<<"Materialul este: "<<getMaterial()<<std::endl<<"Culoarea este: "<<getCuloare()<<std::endl<<"Pretul este: "<<getPret()<<std::endl<<"Producatorul este: "<<getProducator()<<std::endl<< "Lungimea glugii este: " << lungime_gluga <<std::endl<< "Lungimea buzunarului este: "
             << lungime_marsupiu <<std::endl<< " tip: " << tip;;
}
