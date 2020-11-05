#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
#include "cAzafata.h"
using namespace std;

class cPasajero:public cPersona
{
protected:
	string Codigo;

public:
	cPasajero();
	virtual ~cPasajero();
    void llevadoporavion();
    void pedirbebida(cAzafata* A);
    void pedircomida(cAzafata* A);
    void ir_banio();
    void volver_asiento();
    void dormir();
    void llamar_azafata(cAzafata* A);
};