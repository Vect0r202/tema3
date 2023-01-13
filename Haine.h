//
// Created by victo on 1/8/2023.
//

#ifndef OOP_HAINE_H
#define OOP_HAINE_H


#include <iostream>
#include <string>

class Haine {
    std::string material;
    std::string culoare;
    int pret;
    std::string producator;
    int id;
public:
    Haine(const std::string &material, const std::string &culoare, int pret, const std::string &producator,int id);

    Haine();

    virtual ~Haine();

    Haine(const Haine &rhs);

    const std::string &getMaterial() const;

    void setMaterial(const std::string &_material);

    const std::string &getCuloare() const;

    void setCuloare(const std::string &_culoare);

    int getPret() const;

    void setPret(int _pret);

    const std::string &getProducator() const;

    void setProducator(const std::string &_producator);

    int getId() const;

    void setId(int _id);

    virtual void afis()=0;

    friend std::ostream &operator<<(std::ostream &os, const Haine &haine);
    friend std::istream &operator>>(std::istream &is, Haine &haine);

    Haine& operator=(const Haine &rhs);
};



#endif //OOP_HAINE_H
