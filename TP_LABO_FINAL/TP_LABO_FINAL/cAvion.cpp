#include "cAvion.h"

#define CANT_EVENTOS 20

cAvion::cAvion(cListaT<cPersona>* pasajeros, cListaT<cPersona>* empleados)
{
	this-> pasajeros = new cListaT<cPersona>();
	this-> empleados = new cListaT<cPersona>();
	
	for (unsigned int i = 0; i<pasajeros->getCA(); i++)
	{
		this->pasajeros->AgregarItem(pasajeros->getItem(i));
	}

	for (unsigned int i = 0; i<empleados->getCA(); i++)
	{
		this->empleados->AgregarItem(empleados->getItem(i));
	}

}

cAvion::~cAvion()
{
}

void cAvion::imprimir()
{
	empleados->Listar();
	cout << "\n\n" << endl;
	pasajeros->Listar();
}

void cAvion::imprimir_eventos(){
	registros.Listar();
}

void cAvion::registrar(string descripcion, cPersona* p){
	registros.Registrar(descripcion, p);
}

void cAvion::volar(){

	for (int i=0; i<CANT_EVENTOS; i++){
		tick(rand()%2);//dependiendo si es 0 o 1 un piloto random hace una actividad o un pasajero random hace una actividad
		// los eventos de azafata y marshall dependen de los de los pasajeros y los pilotos
	}

 }

// cPersona* cAvion::azafata_random(){

// 	int pos=0;
// 	do{
// 		pos = rand()%empleados->getCA();
// 		if(dynamic_cast<cAzafata*>(empleados[pos])!=NULL){ //chequear que es del tipo cAzafata*
// 			//if(!empleados[pos]->get_ocupada()) //si no esta ocupada
// 				return empleados[pos];
// 		}
// 	}while(1);

// 	return empleados[pos];
// }

// cPersona* cAvion::pasajero_random(){
	
// 	int pos=0;
// 	do{
// 		pos = rand()%pasajeros->getCA();
// 	}while(dynamic_cast<cPasajero*>(pasajeros[pos]) == NULL); //chequear que el pasajero no es un marshall
	
// 	return pasajeros[pos];
// }

// cPersona* cAvion::piloto_random(){

// 	int pos=0;
// 	do{
// 		pos = rand()%empleados->getCA();
// 	}while(dynamic_cast<cPiloto*>(empleados[pos]) == NULL); //seguir buscando mientras no sea un piloto

// 	return empleados[pos];
// }


// cPersona* cAvion::get_marshall(){
	
// 	for(int i=0; i<pasajeros->getCA(); i++){
// 			if(dynamic_cast<cMarshall*>(pasajeros[i])!=NULL){
// 				return pasajeros[i];
// 			}
// 		}
// }

void cAvion::tick(int p){

	if(p==PASAJERO){
		

	}

	else if(p==PILOTO){

	}
}

