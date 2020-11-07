#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
class cAzafata;
class cPasajero;
using namespace std;

class cPiloto:public cPersona
{
protected:

public:
	cPiloto();
	virtual ~cPiloto();
    void pilotear();
    void anuncio_altavoz();
    void pedirbebida(cAzafata* A);
    void pedircomida(cAzafata* A);
    void pedir_azafata_hable_altavoz(cAzafata* A);
    void pedir_azafata_hable_pasajero(cAzafata* A, cPasajero* P);
    string to_string();
};