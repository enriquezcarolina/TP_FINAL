#include "cTurista.h"
#include "cAvion.h"

cTurista::cTurista()
{
    codigo="TU"+DNI;
}

cTurista::~cTurista()
{
}

string cTurista::tostring(){
    return cPasajero::tostring() + "\nClase: TURISTA";
}

void cTurista::ver_pelicula(){
    cAvion::registrar("vio una pelicula", this);
}

void cTurista::escuchar_musica(){
    cAvion::registrar("escucho musica", this);
}