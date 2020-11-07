#include "cAvion.h"

cAvion::cAvion(cListaT<cPersona>* pasajeros, cListaT<cPersona>* empleados)
{
	pasajeros = new cListaT<cPersona>();
	empleados = new cListaT<cPersona>();
	
	int cantidad=pasajeros->getCA();
	for (unsigned int i = 0; i < cantidad; i++)
	{
		this->pasajeros->AgregarItem(pasajeros->getItem(i));
	}
	cantidad = empleados->getCA();
	for (unsigned int i = 0; i < cantidad; i++)
	{
		this->empleados->AgregarItem(empleados->getItem(i));
	}

}

cAvion::~cAvion()
{
}

void cAvion::imprmir()
{
	empleados->Listar();
	cout << "\n\n" << endl;
	pasajeros->Listar();
}
