#include "cEjecutivo.h"
#include "cAvion.h"

cEjecutivo::cEjecutivo(string dni, string nya):cPasajero(dni, nya)
{
    codigo="BS"+DNI;
}

cEjecutivo::~cEjecutivo()
{
}

string cEjecutivo::to_string(){
    return cPasajero::tostring() + "\nClase: EJECUTIVO";
}

void cEjecutivo::trabajar_notebook(){
    cAvion::registrar("trabajo en su notebook", this);
}
