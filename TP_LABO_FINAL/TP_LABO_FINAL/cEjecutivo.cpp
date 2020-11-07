#include "cEjecutivo.h"
#include "cAvion.h"

cEjecutivo::cEjecutivo()
{
}

cEjecutivo::~cEjecutivo()
{
}

string cEjecutivo::to_string(){
    return cPasajero::to_string() + "\nClase: EJECUTIVO";
}

void cEjecutivo::trabajar_notebook(){
    cAvion::registrar("trabajo en su notebook", this);
}