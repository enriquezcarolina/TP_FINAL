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

 string cPersona::tostring(){

	return "Nombre y apellido: " + this->NYA + "\nDNI: " + this->DNI;

}

 eComida cPersona::comida_random()
 {
	 int i = rand() % 5 + 1;
		 switch (i)
		 {
		 case 1: return POLLO;
		 case 2: return VEGGIE;
		 case 3:  return SUSHI;
		 case 4:   return PESCADO;
		 case 5:  return CAVIAR;

		 }
 }

 eBebida cPersona::bebida_random()
 {
	 int i = rand() % 4 + 1;
	 switch (i)
	 {
	 case 1: return AGUA ;
	 case 2: return GASEOSA;
	 case 3:  return VINO;
	 case 4:   return CHAMPAGNE;
	 

	 }
 }
