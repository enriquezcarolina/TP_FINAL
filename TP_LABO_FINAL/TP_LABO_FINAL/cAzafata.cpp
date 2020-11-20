#include "cAzafata.h"
#include "cAvion.h"

cAzafata::cAzafata(string dni, string nya):cPersona(dni, nya)
{
    ocupada=rand()%2;
    en_viaje = false;
}

cAzafata::~cAzafata()
{
}

bool cAzafata::get_ocupada(){
    return ocupada;
}

void cAzafata::llevadoporavion()
{
    en_viaje = true;
}

string cAzafata::tostring(){
    return cPersona::tostring() + "\nTipo: Azafata";
}

void cAzafata::entregar_bebida(cPersona *pas, eBebida bebida){
    cPrimera* aux = dynamic_cast<cPrimera*>(pas);
    cEjecutivo* aux1 = dynamic_cast<cEjecutivo*>(pas);
    cTurista* aux2 = dynamic_cast<cTurista*>(pas);
    if (aux != NULL)
    {

        if (aux->getbebida1() == NINGUNA)
            aux->setbebida1(bebida);
        else if (aux->getbebida2() == NINGUNA)
            aux->setbebida2(bebida);
        else if (aux->getbebida2() == NINGUNA)
            aux->setbebida3(bebida);
        else return;
    }
    if (aux1 != NULL )
    {
        if (aux1->getbebida1() == NINGUNA)
            aux1->setbebida1(bebida);
        else if (aux1->getbebida2() == NINGUNA)
            aux1->setbebida2(bebida);
        else return ;
    }
    if (aux2 != NULL && aux2->getbebida() == NINGUNA && bebida!=CHAMPAGNE)
    {
      
        aux2->setbebida(bebida);
    }
    
    cAvion::registrar("entrego una bebida a un pasajero", this);
}

void cAzafata::entregar_bebida(cPiloto *pil, eBebida bebida){

    if (bebida != CHAMPAGNE && bebida != VINO)
    {
        pil->setbebida(bebida);
        cAvion::registrar("entrego una bebida a un piloto", this);
    }
    else return;
}

void cAzafata::entregar_comida(cPersona*pas, eComida comida){
    cPrimera* aux = dynamic_cast<cPrimera*>(pas);
    cEjecutivo* aux1 = dynamic_cast<cEjecutivo*>(pas);
    cTurista* aux2 = dynamic_cast<cTurista*>(pas);
    if (aux != NULL)
    {

        if (aux->getcomida1() == NADA)
            aux->setcomida1(comida);
        else if (aux->getcomida2() == NADA)
            aux->setcomida2(comida);
        else if (aux->getcomida2() == NADA)
            aux->setcomida3(comida);
        else return;
    }
    if (aux1 != NULL)
    {
        if (aux1->getcomida1() == NADA)
            aux1->setcomida1(comida);
        else if (aux1->getcomida2() == NADA)
            aux1->setcomida2(comida);
        else return;
    }
    if (aux2 != NULL && aux2->getcomida() == NADA && comida != CAVIAR)
    {// turista no puede comer caviar
       
        aux2->setcomida(comida);
    }
    cAvion::registrar("entrego comida a un pasajero", this);
}
void cAzafata::entregar_comida(cPiloto* pil, eComida comida)
{
    pil->setcomida(comida);

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
