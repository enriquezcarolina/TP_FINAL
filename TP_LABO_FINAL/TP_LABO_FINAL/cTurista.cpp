#include "cTurista.h"
#include "cAvion.h"

cTurista::cTurista(string dni, string nya):cPasajero(dni, nya)
{
    codigo="TU"+DNI;
    comida = NADA;
    bebida = NINGUNA;
}

cTurista::~cTurista()
{
}

string cTurista::tostring(){
    return cPasajero::tostring() + "\nClase: TURISTA";
}

eComida cTurista::getcomida()
{
    return comida;
}

eBebida cTurista::getbebida()
{
    return bebida;
}

void cTurista::setcomida(eComida comida)
{
    this->comida = comida;
}

void cTurista::setbebida(eBebida bebida)
{
    this->bebida = bebida;
}

void cTurista::ver_pelicula(){
    cAvion::registrar("vio una pelicula", this);
}

void cTurista::escuchar_musica(){
    cAvion::registrar("escucho musica", this);
}