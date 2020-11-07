#include "cPrimera.h"
#include "cAvion.h"

cPrimera::cPrimera()
{
}

cPrimera::~cPrimera()
{
}

string cPrimera::to_string(){
    return cPasajero::to_string() + "\nClase: PRIMERA";
}

void cPrimera::hacer_masajes(){
    cAvion::registrar("recibio masajes", this);
}

void cPrimera::pedir_champagne(cAzafata* a){
    cAvion::registrar("pidio champagne", this);
    a->entregar_bebida();
}