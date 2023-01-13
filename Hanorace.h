//
// Created by victo on 1/9/2023.
//

#ifndef OOP_HANORACE_H
#define OOP_HANORACE_H


#include <ostream>
#include "Haine.h"

class Hanorace : public Haine{
    int lungime_gluga;
    int lungime_marsupiu;
    std::string tip;

public:
    Hanorace(const std::string &material, const std::string &culoare, int pret, const std::string &producator, int id,
             int lungimeGluga, int lungimeMarsupiu, const std::string &tip);

    Hanorace();

    ~Hanorace() override;

    int getLungimeGluga() const;

    void setLungimeGluga(int lungimeGluga);

    int getLungimeMarsupiu() const;

    void setLungimeMarsupiu(int lungimeMarsupiu);

    const std::string &getTip() const;

    void setTip(const std::string &_tip);
    void afis() override;
    friend std::istream &operator>>(std::istream &is, Hanorace &hanorace);
    friend std::ostream &operator<<(std::ostream &os, const Hanorace &hanorace);
};


#endif //OOP_HANORACE_H
