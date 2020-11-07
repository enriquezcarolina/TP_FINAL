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
using namespace std;

/* 

 CODIGO UNICO (Contiene 13 dígitos): 
	- 2 caracteres que indican el sector (TU es turista, BS es ejecutiva, y PC es primera clase) 
	- 8 dígitos con el DNI del pasajero
	- 2 indicando fila (01-99) 
	- 1 letra (A-J) indicando el asiento de la fila

*/

ostream& operator<<(ostream& out, const Log& log);

int main()
{

	/*
	- Se crea un avion
	- Lista de personas, pasajeros y tripulantes
	- Lista de strings para codigos
	- Cargar la mitad de los codigos de los pasajeros a una lista de codigos habilitados
	- Comparar la lista de personas con la de codigos y ingresar al avion solo las personas que tienen el codigo 
	en la lista (con entrar_avion(cPersona* p)
 	- Avion->volar()
 	-En volar hay un for que llama al metodo tick() varias veces
  	-En el metodo tick() hay un switch que llama a un evento random, si hace falta con una persona random y una azafata random
  	-Las personas y azafatas random se llaman a partir de una funcion persona_rand() (o azafata) que recorre toda la lista de
    personas en el avion y devuelve una persona random del tipo que necesito
  	-En el switch de tick() despues de que se ejecuta el evento se agrega al registro con la funcion de logger
    registar(cPersona *p, string evento)
	- Al final se imprimen todos los eventos que se registraron
*/

//	delete personas, a, p, aero;
	return 0;
}

ostream& operator<<(ostream& out, const Log& log){
	return out<<log.persona->get_NYA()<<" "<<log.descripcion;
}

