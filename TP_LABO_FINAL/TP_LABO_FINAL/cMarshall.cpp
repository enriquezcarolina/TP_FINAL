#include "cMarshall.h"
#include "cAvion.h"
#include "cPasajero.h"

cMarshall::cMarshall(string codigo)
{
	this->codigo = codigo;
}

cMarshall::~cMarshall()
{
}

string cMarshall::to_string(){
	return cPersona::to_string() + "\nTipo: Marshall"+"\nCodigo: " + codigo;
}

void cMarshall::reducir_pasajero(cPasajero* p){
	cAvion::registrar("redujo a un pasajero", this);
	this->encerrar_prision(p);
}

void cMarshall::encerrar_prision(cPasajero* p){
	cAvion::registrar("encerro a un pasajero", this);
	p->encerrado();
}