#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "cPiloto.h"

class cAvion
{
private:
    cListaT <cPersona> *pasajeros;
    int cant_pasajeros;
    cListaT <cPersona> *azafatas;
    int cant_azafatas;
    cListaT <cPiloto> *pilotos;
    int cant_pilotos;

    int cant_eventos;


public:
  cAvion(cPersona* tripulantes, int cant);

};
