#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
#include "cPasajero.h"
#include "cPiloto.h"
using namespace std;

class cAzafata:public cPersona
{
protected:

public:
	cAzafata();
	virtual ~cAzafata();
    void llevadoporavion();
    void entregar_bebida(cPasajero* p);
    void entregar_comida(cPasajero* p);
    void atender_llamado(cPasajero* p);
    void atender_llamado(cPiloto* p);
    void atender_descompensado();
    void hablar_altavoz();
    void hablar_pasajero(cPasajero* p);
};