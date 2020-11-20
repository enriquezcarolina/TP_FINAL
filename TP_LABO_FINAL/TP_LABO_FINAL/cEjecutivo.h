#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
using namespace std;

class cEjecutivo:public cPasajero{
    eComida comida[2];
    eBebida bebida[2];
public:
    cEjecutivo(string dni, string nya);
    ~cEjecutivo();
    void trabajar_notebook();
    string to_string();
    eComida getcomida1();
    eBebida getbebida1();
    void setcomida1(eComida comida);
    void setbebida1(eBebida bebida);
    eComida getcomida2();
    eBebida getbebida2();
    void setcomida2(eComida comida);
    void setbebida2(eBebida bebida);
};

