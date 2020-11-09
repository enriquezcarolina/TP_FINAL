#include "cPasajero.h"
#include "cAvion.h"

cPasajero::cPasajero(string codigo)
{
	this->codigo = codigo;

}

cPasajero::cPasajero()
{

}

cPasajero::~cPasajero(){

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

 void cPasajero::set_Fila_Asiento(int fila, eAsientos asiento){
	 codigo+=to_string(fila);
	 switch(asiento){
		 case A:
			codigo+="A";
			break;
		case B:
			codigo+="B";
			break;
		case C:
			codigo+="C";
			break;
		case D:
			codigo+="D";
			break;
		case E:
			codigo+="E";
			break;
		case F:
			codigo+="F";
			break;
		case G:
			codigo+="G";
			break;
		default:
			break;
	 }
 }

 string cPasajero::get_codigo(){
	 return codigo;
 }