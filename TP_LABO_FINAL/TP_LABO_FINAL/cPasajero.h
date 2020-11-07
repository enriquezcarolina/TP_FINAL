#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
class cAzafata;
using namespace std;

enum eComida{POLLO, PESCADO, VEGGIE, SUSHI, CAVIAR};
enum eBebida { AGUA, GASEOSA, VINO, CHAMPAGNE};
class cPasajero:public cPersona
{
protected:
	string codigo;

public:
    cPasajero(string codigo);
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