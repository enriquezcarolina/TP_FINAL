#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
using namespace std;

class cEjecutivo:public cPasajero{

public:
    cEjecutivo();
    ~cEjecutivo();
    void trabajar_notebook();

};