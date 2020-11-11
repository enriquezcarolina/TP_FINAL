#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
using namespace std;

class cTurista:public cPasajero{

public:
    cTurista(string dni, string nya);
    ~cTurista();
    void ver_pelicula();
    void escuchar_musica();
    string tostring();
};


