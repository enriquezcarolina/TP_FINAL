#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"
#include "cPasajero.h"
using namespace std;

class cMarshall:public cPersona{
private:
    string codigo;

public:
    cMarshall();
    ~cMarshall();
    void reducir_pasajero(cPasajero*p);
    void encerrar_prision(cPasajero*p);

}