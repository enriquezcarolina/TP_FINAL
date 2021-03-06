#include "cAvion.h"

Logger cAvion::registros;
cAvion::cAvion(cListaT<cPersona>* Empleados)
{
	this-> pasajeros = new cListaT<cPersona>(CANT_PASAJEROS+1);
	this-> empleados = new cListaT<cPersona>(CANT_TRIPULANTES);

	for (unsigned int i = 0; i<Empleados->getCA(); i++)
	{
		empleados->AgregarItem(Empleados->getItem(i));
	}

}

cAvion::~cAvion()
{
}

void cAvion::AgregarPasajero(cPersona* pasajero){
	pasajeros->AgregarItem(pasajero);
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
	get_copiloto()->pedir_despegue();
	for (int i=0; i<MAX_EVENTOS; i++){
		tick(rand()%2);//dependiendo si es 0 o 1 un piloto random hace una actividad o un pasajero random hace una actividad
		// los eventos de azafata y marshall dependen de los de los pasajeros y los pilotos
	}
	get_copiloto()->pedir_aterrizaje();
 }

cCopiloto* cAvion::get_copiloto(){
	for(int i=0; i<empleados->getCA(); i++){
		if(dynamic_cast<cCopiloto*>(empleados->getItem(i))!= NULL)
			return dynamic_cast<cCopiloto*>(empleados->getItem(i));
	}
	return NULL;
}

 cAzafata* cAvion::azafata_random(){
	 cAzafata *a;
	 int num = pasajeros->getCA() + 1;
 	int pos=0;
 	do{
 		pos = rand()%num;
 		if(dynamic_cast<cAzafata*>(empleados->getItem(pos))!=NULL){ //chequear que es del tipo cAzafata*
			a = dynamic_cast<cAzafata*>(empleados->getItem(pos));
			if (!a->get_ocupada()) //si no esta ocupada
 				return a;
		}
 	}while(1);

 	return a;
}

cPasajero* cAvion::pasajero_random(){
	int num = pasajeros->getCA() + 1;
	cPasajero* p;
	int pos=0;
 	do{
		pos = rand() % num;
 	}while(dynamic_cast<cPasajero*>(pasajeros->getItem(pos)) == NULL); //chequear que el pasajero no es un marshall
	// si hago el marshall herencia de pasajero puedo hacer un dynamic cast 
 	p= dynamic_cast<cPasajero*>(pasajeros->getItem(pos));
	return p;
 }

cPiloto* cAvion::piloto_random(){
	cPiloto* p;
	int num = empleados->getCA() + 1;
 	int pos=0;
 	do{
 		pos = rand()%num;
 	}while(dynamic_cast<cPiloto*>(empleados->getItem(pos)) == NULL);	 //seguir buscando mientras no sea un piloto
	p = dynamic_cast<cPiloto*>(empleados->getItem(pos));
	return p;
 }


cMarshall* cAvion::get_marshall(){
    cMarshall* m = new cMarshall();
 	for(int i=0; i<pasajeros->getCA(); i++){
 			if(dynamic_cast<cMarshall*>(pasajeros->getItem(i))!=NULL){
				m = dynamic_cast<cMarshall*>(pasajeros->getItem(i));
				return m;
 			}
 		}
    return m;
 }

void cAvion::tick(int p){

	if (p == PASAJERO) {
		int r = rand() % 6;
		cPasajero* p = pasajero_random();
		switch (r)
		{
		case 0:
			p->ir_banio();
			break;
		case 1:
			p->dormir();
			break;
		case 2:
			p->descompensarse(azafata_random());
			break;
		case 3:
			p->pedircomida(azafata_random(),p->comida_random());
			break;
		case 4:
			p->causar_problemas(get_marshall());
			break;
		case 5:
			p->pedirbebida(azafata_random(), p->bebida_random());
			break;
		}
		if(dynamic_cast<cTurista*>(p)!=NULL){
			cTurista *t=dynamic_cast<cTurista*>(p);
			if(r>=3)
				t->ver_pelicula();
			else if(r<3)
				t->escuchar_musica();
		}
		if(dynamic_cast<cEjecutivo*>(p)!=NULL){
			cEjecutivo *e=dynamic_cast<cEjecutivo*>(p);
			e->trabajar_notebook();
		
		}
		if(dynamic_cast<cPrimera*>(p)!=NULL){
			cPrimera *f=dynamic_cast<cPrimera*>(p);
			if(r>=3)
				f->hacer_masajes();
			else if(r<3)
				f->pedir_champagne(azafata_random());
		}
	}

	else if(p==PILOTO){
		int r = rand() % 6;
		cPiloto* piloto = cAvion::piloto_random();
		switch (r)
		{
		case 0:
			piloto->anuncio_altavoz();
			break;
		case 1:
			piloto->pedirbebida(cAvion::azafata_random(),piloto->bebida_random());
			break;
		case 2:
			piloto->pedircomida(cAvion::azafata_random(), piloto->comida_random());
			break;
		case 3:
			piloto->pedir_azafata_hable_altavoz(cAvion::azafata_random());
			break;
		case 4:
			piloto->pedir_azafata_hable_pasajero(cAvion::azafata_random(), cAvion::pasajero_random());
			break;
		case 5:
			//piloto->pilotear(); todavia no la definimos
			break;
			
		}

	}
}

