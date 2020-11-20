#include "cPiloto.h"
#include "cAvion.h"

cPiloto::cPiloto(string dni, string nya):cPersona( dni, nya)
{
}

cPiloto::~cPiloto()
{
}

string cPiloto::tostring(){
    return cPersona::tostring() + "\nTipo: PILOTO";
}

void cPiloto::anuncio_altavoz(){
    cAvion::registrar("realizo un anuncio por altavoz", this);
}

void cPiloto::pedirbebida(cAzafata* A){
    cAvion::registrar("pidio una bebida", this);
    A->entregar_bebida(this);
}

void cPiloto::pedircomida(cAzafata* A){
    cAvion::registrar("pidio comida", this);
    A->entregar_comida(this);
}

void cPiloto::pedir_azafata_hable_altavoz(cAzafata* A){
    cAvion::registrar("le pidio a una azafata que hable por altavoz", this);
    A->hablar_altavoz();
}

void cPiloto::pedir_azafata_hable_pasajero(cAzafata* A, cPasajero* P){
    cAvion::registrar("le pidio a una azafata que hable con un pasajero", this);
    A->hablar_pasajero(P);
}
