#pragma once
#include <string>
#include <iostream>
#include "cPersona.h"

class cPasajero;
using namespace std;

class cMarshall :public cPersona {
private:
    string codigo;

public:
    cMarshall(string codigo);
    ~cMarshall();
    void reducir_pasajero(cPasajero* p);
    void encerrar_prision(cPasajero* p);
    string to_string();
};

