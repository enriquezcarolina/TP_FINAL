#include "cPersona.h"

cPersona::cPersona(string DNI, string NYA): DNI(DNI)
{

	this->NYA = NYA;

}

cPersona::cPersona()
{
}

void cPersona::imprimir()
{
}

string cPersona::getclave()
{
	return DNI;
}

string cPersona::get_NYA(){
	return NYA;
}

cPersona::~cPersona()
{
}

virtual string cPersona::to_string(){

	return "Nombre y apellido: " + this->NYA + "\nDNI: " + this->DNI;

}