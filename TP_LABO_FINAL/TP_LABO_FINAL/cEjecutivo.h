#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
using namespace std;

class cEjecutivo:public cPasajero{

public:
    cEjecutivo(string dni, string nya);
    ~cEjecutivo();
    void trabajar_notebook();
    string to_string();
};

