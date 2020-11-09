#include "cMarshall.h"
#include "cAvion.h"
#include "cPasajero.h"

cMarshall::cMarshall()
{
	codigo="PC"+DNI+to_string(1)+"A"; //el marshall por defecto tiene el primer asiento;

}

cMarshall::~cMarshall()
{
}

string cMarshall::tostring(){
	return cPersona::tostring() + "\nTipo: Marshall"+"\nCodigo: " + codigo;
}

void cMarshall::reducir_pasajero(cPasajero* p){
	cAvion::registrar("redujo a un pasajero", this);
	this->encerrar_prision(p);
}

void cMarshall::encerrar_prision(cPasajero* p){
	cAvion::registrar("encerro a un pasajero", this);
	p->encerrado();
}