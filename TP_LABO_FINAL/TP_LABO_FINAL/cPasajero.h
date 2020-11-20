#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
#include "cAzafata.h"
#include "cMarshall.h"
class cAzafata;
using namespace std;


/* 

 CODIGO UNICO (Contiene 13 dígitos): 
	- 2 caracteres que indican el sector (TU es turista, BS es ejecutiva, y PC es primera clase) 
	- 8 dígitos con el DNI del pasajero
	- 2 indicando fila (01-99) 
	- 1 letra (A-J) indicando el asiento de la fila

*/

class cPasajero:public cPersona
{
protected:
	string codigo;
    bool en_viaje;

public:
    cPasajero(string codigo);
    cPasajero(string dni, string nya);
    
	virtual ~cPasajero();
    void llevadoporavion();
    void pedirbebida(cAzafata* A, eBebida bebida);
    void pedircomida(cAzafata* A, eComida comida);
    void ir_banio();
    void volver_asiento();
    void dormir();
    void llamar_azafata(cAzafata* A);
    void descompensarse(cAzafata* A);
    void causar_problemas(cMarshall *m);
    void encerrado();
    virtual string tostring();
    void set_Fila_Asiento(int fila, char asiento);
    string get_codigo();
    
};
