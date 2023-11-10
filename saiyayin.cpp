#include "saiyayin.h"

Saiyayin::Saiyayin() : DragonBallZ()
{
    this->fase="";
}

Saiyayin::~Saiyayin()
{

}

Saiyayin::Saiyayin(std::string fase, char *codigo, std::string Nombres, std::string chi)
:DragonBallZ(codigo, Nombres, chi)
{
    this->fase="";
}

const string &Saiyayin::getFase() const
{
    return fase;
}

void Saiyayin::setFase(const std::string &newFase)
{
    fase=newFase;
}

void Saiyayin::Guardar(ofstream Archivo) const{
    Archivo<<getFase()<<"\t";
}

void Saiyayin::Imprimir() const
{
    cout<<"Fase: "<<getFase()<<"\n";
    Saiyayin::Imprimir();
}
