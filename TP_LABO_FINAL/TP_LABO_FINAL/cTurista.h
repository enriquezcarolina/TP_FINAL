#pragma once
#include <string>
#include <iostream>
#include "cPasajero.h"
using namespace std;

class cTurista:public cPasajero{
    eComida comida;
    eBebida bebida;
public:
    cTurista(string dni, string nya);
    ~cTurista();
    void ver_pelicula();
    void escuchar_musica();
    string tostring();
    eComida getcomida();
    eBebida getbebida();
    void setcomida(eComida comida);
    void setbebida(eBebida bebida);
};


