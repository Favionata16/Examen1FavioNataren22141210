#include "dios.h"

Dios::Dios() : DragonBallZ()
{

}

Dios::Dios(std::string tipo, std::string Nombres, std::string chi)
{
    this->tipo=tipo;

}

const string &Dios::getTipo() const
{
    return tipo;
}

void Dios::setTipo(const std::string &newNombres)
{
    tipo=newNombres;
}

void Dios::Imprimir() const
{
    cout<<"Cuenta: "<<getTipo()<<"\n";
    DragonBallZ::Imprimir();
}

void Dios::Guardar(std::ofstream Archivo) const
{
    Archivo<<getTipo()<<"\t";
}
