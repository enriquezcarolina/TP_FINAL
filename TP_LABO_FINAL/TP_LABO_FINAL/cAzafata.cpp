#include "cAzafata.h"
#include "cAvion.h"

cAzafata::cAzafata()
{
    ocupada=rand()%2;
}

cAzafata::~cAzafata()
{
}

bool cAzafata::get_ocupada(){
    return ocupada;
}

string cAzafata::to_string(){
    return cPersona::to_string() + "\nTipo: Azafata";
}

void cAzafata::entregar_bebida(cPersona *pas){
    cAvion::registrar("entrego una bebida a un pasajero", this);
}

void cAzafata::entregar_bebida(cPiloto *pil){
    cAvion::registrar("entrego una bebida a un piloto", this);
}

void cAzafata::entregar_comida(cPersona*pas){
    cAvion::registrar("entrego comida a un pasajero", this);
}
void cAzafata::entregar_comida(cPiloto*pil){
    cAvion::registrar("entrego comida a un piloto", this);
}

void cAzafata::atender_llamado(cPersona* pas){
    cAvion::registrar("atendio el llamado de un pasajero", this);
}

void cAzafata::atender_llamado(cPiloto* pil){
    cAvion::registrar("atendio el llamado de un piloto", this);
}

void cAzafata::atender_descompensado(){
    cAvion::registrar("atendio a un pasajero descompensado", this);
}

void cAzafata::hablar_altavoz(){
    cAvion::registrar("realizo un anuncio por altavoz", this);
}

void cAzafata::hablar_pasajero(cPasajero* pas){
    cAvion::registrar("hablo con un pasajero", this);
    pas->volver_asiento();
}