#ifndef OOP_GETCOD_H
#define OOP_GETCOD_H

///clsa singleton
class GetCod {
    static GetCod* copie;
    int id;
    GetCod();
public:
    static GetCod* instanta();
    int next();
};


#endif //OOP_GETCOD_H
