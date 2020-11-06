#include <iostream>
#include <string>
#include "cAvion.h"
#include "cCopiloto.h"
#include "cEjecutivo.h"
#include "cMarshall.h"
#include "cPasajero.h"
#include "cPersona.h"
#include "cPiloto.h"
#include "cPrimera.h"
#include "cTurista.h"
#include "Lista_Template.h"
#include "Log.h"
#include "Logger.h"
ostream& operator<<(ostream& out, const cAvion& avion);
using namespace std;

int main()
{

	// lista de personas, pasajeros y tripulantes
	// lista de strings para codigos
	// cargar la mitad de los codigos de los pasajeros a una lista de codigos habilitados
	// comparar la lista de personas con la de codigos y ingresar al avion solo las personas que tienen el codigo en la lista (con entrar_avion(cPersona* p)
	// funcion simmulador hara q ocurran eventos aleatoriamente 
	// las funciones registraran los eventos que pasan durante el vuelo en el logger del avion (que se imprmira al finalizar el programa)

	return 0;
}
