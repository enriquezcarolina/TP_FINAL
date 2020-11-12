#include <iostream>
#include <string>
#include <exception>
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

#define CANT_CODIGOS 10
#define CANT_FILAS 10
#define CANT_ASIENTOS 'J'

ostream& operator<<(ostream& out, const Log& log);
string generarcodigo(cPersona* p);
void generarTripulantes(cListaT<cPersona> *t);
//verifica si el codigo del pasajero esta en la lista
bool VerificarCodigos(string *C, cPasajero *p);

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

	string codigos[CANT_CODIGOS];
	cListaT<cPasajero> *pasajeros = new cListaT<cPasajero>(); //solo pasajeros, crear aparte un marshall
	cMarshall* marshall= new cMarshall();
	cListaT<cPersona> *tripulantes= new cListaT<cPersona>();
	cListaT<cPersona>* p = new cListaT<cPersona>();
	cAvion *Avion = new cAvion(tripulantes, p);
	Avion->AgregarPasajero(marshall);

	int fila = 1;
	char asiento = 'B'; //el marshall por defecto tiene el primer asiento

	for(int i=0; i<pasajeros->getCA(); i++){
		if(asiento>CANT_ASIENTOS){
			fila++;
			asiento = 'A';
			//cambio de fila y vuelvo al primer asiento
		}
		if(asiento>CANT_ASIENTOS && fila==CANT_FILAS)
			break;
		pasajeros->getItem(i)->set_Fila_Asiento(fila, asiento);
	    asiento++;
	}

	//FALTA CARGAR LOS CODIGOS DE LOS PASAJEROS A LA LISTA DE CODIGOS

	for(int i=0; i<pasajeros->getCA(); i++){
		if(VerificarCodigos(codigos, pasajeros->getItem(i))) 
			Avion->AgregarPasajero(pasajeros->getItem(i)); //si el codigo del pasajero esta en la lista lo agrego al avion
		
	}

	Avion->volar();

	Avion->imprimir_eventos();

//	delete personas, a, p, aero;
	return 0;
}

ostream& operator<<(ostream& out, const Log& log){
	return out<<log.persona->get_NYA()<<" "<<log.descripcion;
}

bool VerificarCodigos(string *C, cPasajero *p){
	for(int i=0; i<CANT_CODIGOS; i++){
		if(C[i]==p->get_codigo())
			return true; //el codigo del pasajero esta en la lista
	}
	return false;
}

/* 

 CODIGO UNICO (Contiene 13 dígitos): 
	- 2 caracteres que indican el sector (TU es turista, BS es ejecutiva, y PC es primera clase) 
	- 8 dígitos con el DNI del pasajero
	- 2 indicando fila (01-99) 
	- 1 letra (A-J) indicando el asiento de la fila

*/
