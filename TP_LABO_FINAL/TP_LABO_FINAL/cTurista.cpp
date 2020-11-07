#include "cTurista.h"
#include "cAvion.h"

cTurista::cTurista()
{
}

cTurista::~cTurista()
{
}

string cTurista::to_string(){
    return cPasajero::to_string() + "\nClase: TURISTA";
}

void cTurista::ver_pelicula(){
    cAvion::registrar("vio una pelicula", this);
}

void cTurista::escuchar_musica(){
    cAvion::registrar("escucho musica", this);
}