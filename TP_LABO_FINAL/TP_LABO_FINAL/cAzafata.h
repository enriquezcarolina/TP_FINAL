#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
using namespace std;
class cPiloto;

class cPasajero;
class cAzafata: public cPersona
{
protected:
    static int cantidad_azafatas;
    bool ocupada; //ocupada o no
public:
	cAzafata();
    ~cAzafata();
    bool get_ocupada();
    void llevadoporavion();
    void entregar_bebida(cPersona *pas);
    void entregar_bebida(cPiloto *pil);
    void entregar_comida(cPersona *pas);
    void entregar_comida(cPiloto *pil);
    void atender_llamado(cPersona* pas);
    void atender_llamado(cPiloto* pil);
    void atender_descompensado();
    void hablar_altavoz();
    void hablar_pasajero(cPasajero* p);
    string tostring();
};
