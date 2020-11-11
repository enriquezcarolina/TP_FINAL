#include "cPasajero.h"
#include "cAvion.h"

cPasajero::cPasajero(string codigo)
{
	this->codigo = codigo;

}

cPasajero::cPasajero(string dni, string nya): cPersona(dni, nya)
{
	
}

cPasajero::~cPasajero(){

}

void cPasajero::llevadoporavion()
{
}

string cPasajero::tostring(){
	
	return cPersona::tostring() + "\nTipo: Pasajero" + "\nCodigo: " + this->codigo;

}

void cPasajero::pedirbebida(cAzafata* A){
	cAvion::registrar("pidio una bebida", this);
	A->entregar_bebida(this);
}

void cPasajero::pedircomida(cAzafata* A){
	cAvion::registrar("pidio comida", this);
	A->entregar_comida(this);
}

void cPasajero::ir_banio(){
	cAvion::registrar("fue al banio", this);
}

void cPasajero::volver_asiento(){
	cAvion::registrar("volvio a su asiento", this);
}

void cPasajero::dormir(){
	cAvion::registrar("durmio", this);
}

void cPasajero::llamar_azafata(cAzafata* A){
	cAvion::registrar("llamo a una azafata", this);
	A->atender_llamado(this);
}

void cPasajero::descompensarse(cAzafata* A){
	cAvion::registrar("se descompenso", this);
	A->atender_descompensado();
}

void cPasajero::causar_problemas(cMarshall* m){
	cAvion::registrar("causo problemas en el avion", this);
	m->reducir_pasajero(this);
}

void cPasajero::encerrado(){
	cAvion::registrar("fue encerrado por el marshall", this);
}

 void cPasajero::set_Fila_Asiento(int fila, char asiento){
	 if(fila<10){
		 codigo+="0"; //para que quede 01, 02, .... 09, 10, 11
	 }
	 codigo = codigo + to_string(fila) + asiento;
 }

 string cPasajero::get_codigo(){
	 return codigo;
 }