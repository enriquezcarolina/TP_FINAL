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

#define CANT_CODIGOS 5
#define CANT_FILAS 5
#define CANT_ASIENTOS 'J'
#define CANT_PASAJEROS 10
#define CANT_TRIPULANTES 6

ostream& operator<<(ostream& out, const Log& log);
string generarcodigo(cPersona* p);
void generarTripulantes(cListaT<cPersona> *t);
void generarPasajeros(cListaT<cPasajero> *p);
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
	cListaT<cPasajero>* pasajeros = new cListaT<cPasajero>(CANT_PASAJEROS); //solo pasajeros, crear aparte un marshall
	cMarshall* marshall= new cMarshall();
	cListaT<cPersona>* tripulantes= new cListaT<cPersona>(CANT_TRIPULANTES);
	cAvion *Avion = new cAvion(tripulantes);
	Avion->AgregarPasajero(marshall);

	generarPasajeros(pasajeros);
	generarTripulantes(tripulantes);

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

	//Cargo solo los primeros pasajeros de la lista
	for(int i=0; i<CANT_CODIGOS; i++){
		codigos[i]=pasajeros->getItem(i)->get_codigo();
	}
	

	for(int i=0; i<pasajeros->getCA(); i++){
		if(VerificarCodigos(codigos, pasajeros->getItem(i))) 
			Avion->AgregarPasajero(pasajeros->getItem(i)); //si el codigo del pasajero esta en la lista lo agrego al avion
		
	}

	Avion->volar();

	Avion->imprimir_eventos();

	// delete Avion;
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

void generarPasajeros(cListaT<cPasajero> *p){
	
	cPasajero* Maria = new cPasajero("20345764", "Maria Perez");
	cPasajero* Julian = new cPasajero("27394827", "Julian Rodriguez");
	cPasajero* Facundo = new cPasajero("38765874", "Facundo Rodriguez");
	cPasajero* Isabella = new cPasajero("43786900", "Isabella Aguirre");
	cPasajero* Cecilia = new cPasajero("39882012", "Cecilia Sanchez");
	cPasajero* Mateo = new cPasajero("34876264", "Mateo Perez");
	cPasajero* Sofia = new cPasajero("23764892", "Sofia Lopez");
	cPasajero* Caterina = new cPasajero("42721946", "Caterina Galafassi");
	cPasajero* Milo = new cPasajero("45836726", "Milo Araujo");
	cPasajero* Analia = new cPasajero("32765829", "Analia Martin");
	
	p->AgregarItem(Maria);
	p->AgregarItem(Julian);
	p->AgregarItem(Facundo);
	p->AgregarItem(Isabella);
	p->AgregarItem(Cecilia);
	p->AgregarItem(Mateo);
	p->AgregarItem(Sofia);
	p->AgregarItem(Caterina);
	p->AgregarItem(Milo);
	p->AgregarItem(Analia);

	return;
}

void generarTripulantes(cListaT<cPersona> *t){

	cPersona* Juliana = new cAzafata("22873664", "Juliana Gomez");
	cPersona* Martin = new cAzafata("25678636", "Martin Flores");
	cPersona* Paula = new cAzafata("32554367", "Paula Hernandez");
	cPersona* Juan = new cAzafata("37875764", "Juan Suarez");

	cPersona* Carmen = new cPiloto("30986846", "Carmen Sanchez");
	cPersona* Emilia = new cCopiloto("35764665", "Emilia Martinez");

	t->AgregarItem(Juliana);
	t->AgregarItem(Martin);
	t->AgregarItem(Paula);
	t->AgregarItem(Juan);

	t->AgregarItem(Carmen);
	t->AgregarItem(Emilia);

	return;
}