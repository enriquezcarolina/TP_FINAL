#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
#include "cAzafata.h"
using namespace std;

class cPrimera:public cPasajero{

public:
    cPrimera(string dni, string nya);
    ~cPrimera();
    void hacer_masajes();
    void pedir_champagne(cAzafata* a);
    string tostring();
};

