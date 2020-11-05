#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
#include "cAzafata.h"
using namespace std;

class cPrimera:public cPasajero{

public:
    cPrimera();
    ~cPrimera();
    void hacer_masajes();
    void pedir_champagne(cAzafata* a);

};