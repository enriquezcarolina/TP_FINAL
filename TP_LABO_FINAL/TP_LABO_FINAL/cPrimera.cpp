#include "cPrimera.h"
#include "cAvion.h"

cPrimera::cPrimera(string dni, string nya):cPasajero(dni, nya)
{
    codigo="PC"+DNI;
    comida[0] = NADA;
    comida[1] = NADA;
    comida[2] = NADA;
    bebida[0] = NINGUNA;
    bebida[1] = NINGUNA;
    bebida[2] = NINGUNA;
}

cPrimera::~cPrimera()
{
}

string cPrimera::tostring(){
    return cPasajero::tostring() + "\nClase: PRIMERA";
}

eComida cPrimera::getcomida1()
{
    return comida[0];
}

eBebida cPrimera::getbebida1()
{
    return bebida[0];
}

void cPrimera::setcomida1(eComida comida)
{
    this->comida[0] = comida;
}

void cPrimera::setbebida1(eBebida bebida)
{
    this->bebida[0] = bebida;
}

void cPrimera::hacer_masajes(){
    cAvion::registrar("recibio masajes", this);
}

void cPrimera::pedir_champagne(cAzafata* a){
    cAvion::registrar("pidio champagne", this);
    a->entregar_bebida(this,CHAMPAGNE);
}

eComida cPrimera::getcomida2()
{
    return comida[1];
}

eBebida cPrimera::getbebida2()
{
    return bebida[1];
}

void cPrimera::setcomida2(eComida comida)
{
    this->comida[1] = comida;
}

void cPrimera::setbebida2(eBebida bebida)
{
    this->bebida[1] = bebida;
}

eComida cPrimera::getcomida3()
{
    return comida[2];
}

eBebida cPrimera::getbebida3()
{
    return bebida[2];
}

void cPrimera::setcomida3(eComida comida)
{
    this->comida[1] = comida;
}

void cPrimera::setbebida3(eBebida bebida)
{
    this->bebida[2] = bebida;
}
