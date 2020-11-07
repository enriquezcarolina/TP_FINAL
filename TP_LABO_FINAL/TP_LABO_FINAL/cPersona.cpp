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

cPersona::~cPersona()
{
}
