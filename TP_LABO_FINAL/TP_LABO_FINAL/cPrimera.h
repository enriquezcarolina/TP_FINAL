#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
#include "cAzafata.h"
using namespace std;

class cPrimera:public cPasajero{
    eComida comida[3];// pueden pedir 3 comidas y 3 bebidas por estar en primera
    eBebida bebida[3];
public:
    cPrimera(string dni, string nya);
    ~cPrimera();
    void hacer_masajes();
    void pedir_champagne(cAzafata* a);
    string tostring();
    eComida getcomida1();
    eBebida getbebida1();
    void setcomida1(eComida comida);
    void setbebida1(eBebida bebida);
    eComida getcomida2();
    eBebida getbebida2();
    void setcomida2(eComida comida);
    void setbebida2(eBebida bebida);
    eComida getcomida3();
    eBebida getbebida3();
    void setcomida3(eComida comida);
    void setbebida3(eBebida bebida);
};

