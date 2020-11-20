#include "cPiloto.h"
#include "cAvion.h"

cPiloto::cPiloto(string dni, string nya,bool piloteando):cPersona( dni, nya)
{
    comida = NADA;
    bebida = NINGUNA;
    this->piloteando = piloteando;
}

cPiloto::~cPiloto()
{
}

void cPiloto::pilotear()
{
    piloteando = true;
}

string cPiloto::tostring(){
    return cPersona::tostring() + "\nTipo: PILOTO";
}

void cPiloto::setcomida(eComida comida)
{
    this->comida = comida;
}

void cPiloto::setbebida(eBebida bebida)
{
    this->bebida = bebida;
}

void cPiloto::anuncio_altavoz(){
    cAvion::registrar("realizo un anuncio por altavoz", this);
}

void cPiloto::pedirbebida(cAzafata* A, eBebida bebida){
    cAvion::registrar("pidio una bebida", this);
    A->entregar_bebida(this, bebida);
}

void cPiloto::pedircomida(cAzafata* A, eComida comida){
    cAvion::registrar("pidio comida", this);
    A->entregar_comida(this, comida);
}

void cPiloto::pedir_azafata_hable_altavoz(cAzafata* A){
    cAvion::registrar("le pidio a una azafata que hable por altavoz", this);
    A->hablar_altavoz();
}

void cPiloto::pedir_azafata_hable_pasajero(cAzafata* A, cPasajero* P){
    cAvion::registrar("le pidio a una azafata que hable con un pasajero", this);
    A->hablar_pasajero(P);
}
