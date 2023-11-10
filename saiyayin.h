#ifndef SAIYAYIN_H
#define SAIYAYIN_H
#include <iostream>
#include <cstring>
#include <fstream>
using std::string;
using std::ofstream;
using std::cout;
#include <dragonballz.h>

class Saiyayin: public DragonBallZ
{
private:
    string fase;


public:
    Saiyayin();
    ~Saiyayin();
    Saiyayin(string fase, char *codigo, string Nombres, string chi);
    const string &getFase() const;
    void setFase(const string &newFase);

    virtual void Imprimir() const=0; // funcion virtual pura (abstract)
    virtual void Guardar(ofstream Archivo) const; // funcion virtual

};

#endif // SAIYAYIN_H
