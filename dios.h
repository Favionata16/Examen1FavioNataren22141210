#ifndef DIOS_H
#define DIOS_H
#include <iostream>
#include <cstring>
#include <fstream>
using std::string;
using std::ofstream;
using std::cout;
#include <dragonballz.h>

class Dios : public DragonBallZ
{
private:
    string tipo;

public:

    Dios();
    Dios(string tipo, string Nombres, string chi);
    ~Dios();

    const string &getTipo() const;
    void setTipo(const string &newNombres);

    virtual void Imprimir() const=0; // funcion virtual pura (abstract)
    virtual void Guardar(ofstream Archivo) const; // funcion virtual
};

#endif // DIOS_H
