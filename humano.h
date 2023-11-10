#ifndef HUMANO_H
#define HUMANO_H
#include <iostream>
#include <cstring>
#include <fstream>
using std::string;
using std::ofstream;
using std::cout;
#include <dragonballz.h>


class Humano
{
public:
    Humano();
    Humano(string tipo, string Nombres, string chi);
    ~Humano();

    virtual void Imprimir() const=0; // funcion virtual pura (abstract)
    virtual void Guardar(ofstream Archivo) const; // funcion virtual
};

#endif // HUMANO_H
