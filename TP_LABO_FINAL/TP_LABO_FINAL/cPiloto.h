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
    bool piloteando; // se setea en 0 si no esta piloteando y en 1 si lo esta
    eComida comida;
    eBebida bebida;
public:
	cPiloto(string dni, string nya, bool piloteando);
	virtual ~cPiloto();
    void pilotear();
    void anuncio_altavoz();
    void pedirbebida(cAzafata* A, eBebida bebida);
    void pedircomida(cAzafata* A, eComida comida);
    void pedir_azafata_hable_altavoz(cAzafata* A);
    void pedir_azafata_hable_pasajero(cAzafata* A, cPasajero* P);
    string tostring();
    void setcomida(eComida comida);
    void setbebida(eBebida bebida);

};
