#include "dragonballz.h"

DragonBallZ::DragonBallZ()
{
    strcpy(this->codigo,"");
    this->Nombres="";
    this->chi="";
}

DragonBallZ::DragonBallZ(char *codigo, std::string Nombres, std::string chi)
{
    this->codigo=codigo;
    this->Nombres=Nombres;
    this->chi=chi;
}

DragonBallZ::~DragonBallZ()
{

}

const string &DragonBallZ::getNombres() const
{
    return Nombres;
}

void DragonBallZ::setNombres(const std::string &newNombres)
{
    Nombres=newNombres;
}

const string &DragonBallZ::getChi() const
{
    return chi;
}

void DragonBallZ::setChi(const std::string &newChi)
{
        chi=newChi;
}

char *DragonBallZ::getCodigo() const
{
        return codigo;
}

void DragonBallZ::setCodigo(char *newCodigo)
{
        codigo=newCodigo;
}

void DragonBallZ::Guardar(std::ofstream Archivo) const
{
    Archivo<<this->codigo<<"\t"
          <<this->Nombres<<"\t"
         <<this->chi<<"\t";
    //importante hacer archivo.close() para cerrar y guardar
}

void DragonBallZ::Imprimir() const
{
    cout<<"Codigo: "<<this->codigo<<"\n"<<"Nombre: "<<this->Nombres<<"\n"<<"Chi: "<<this->chi<<"\n";
}

