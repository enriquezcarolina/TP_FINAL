#include "cEjecutivo.h"
#include "cAvion.h"

cEjecutivo::cEjecutivo(string dni, string nya):cPasajero(dni, nya)
{
    codigo="BS"+DNI;
    comida[0] = NADA;
    comida[1] = NADA;
    bebida[0] = NINGUNA;
    bebida[1] = NINGUNA;

}

cEjecutivo::~cEjecutivo()
{
}

string cEjecutivo::to_string(){
    return cPasajero::tostring() + "\nClase: EJECUTIVO";
}

eComida cEjecutivo::getcomida1()
{
    return comida[0];
}

eBebida cEjecutivo::getbebida1()
{
    return bebida[0];
}

void cEjecutivo::setcomida1(eComida comida)
{
   this-> comida[0] = comida;
}

void cEjecutivo::setbebida1(eBebida bebida)
{
    this->bebida[0] = bebida;
}

eComida cEjecutivo::getcomida2()
{
    return comida[1];
}

eBebida cEjecutivo::getbebida2()
{
    return bebida[1];
}

void cEjecutivo::setcomida2(eComida comida)
{
    this->comida[1] = comida;
}

void cEjecutivo::setbebida2(eBebida bebida)
{
    this->bebida[1] = bebida;
}

void cEjecutivo::trabajar_notebook(){
    cAvion::registrar("trabajo en su notebook", this);
}
