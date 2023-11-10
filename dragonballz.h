#ifndef DRAGONBALLZ_H
#define DRAGONBALLZ_H
#include <iostream>
#include <cstring>
#include <fstream>
using std::string;
using std::ofstream;
using std::cout;

class DragonBallZ
{
private:
    char *codigo;
    string Nombres;
    string chi;

public:
    DragonBallZ();
    DragonBallZ(char *codigo, string Nombres, string chi);
    ~DragonBallZ();

    const string &getNombres() const;
    void setNombres(const string &newNombres);
    const string &getChi() const;
    void setChi(const string &newChi);
    char *getCodigo() const;
    void setCodigo(char *newCodigo);

    virtual void Imprimir() const=0; // funcion virtual pura (abstract)
    virtual void Guardar(ofstream Archivo) const; // funcion virtual
};

#endif // DRAGONBALLZ_H
