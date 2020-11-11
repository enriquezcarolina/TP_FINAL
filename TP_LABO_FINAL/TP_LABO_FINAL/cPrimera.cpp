#include "cPrimera.h"
#include "cAvion.h"

cPrimera::cPrimera(string dni, string nya):cPasajero(dni, nya)
{
    codigo="PC"+DNI;
}

cPrimera::~cPrimera()
{
}

string cPrimera::tostring(){
    return cPasajero::tostring() + "\nClase: PRIMERA";
}

void cPrimera::hacer_masajes(){
    cAvion::registrar("recibio masajes", this);
}

void cPrimera::pedir_champagne(cAzafata* a){
    cAvion::registrar("pidio champagne", this);
    a->entregar_bebida(this);
}