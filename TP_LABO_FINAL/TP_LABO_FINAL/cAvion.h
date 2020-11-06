#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "cPiloto.h"
#include "Logger.h"

class cAvion
{
private:
    cListaT <cPersona> *pasajeros;
    int cant_pasajeros;

    int cant_eventos;
    Logger registros;

public:
  cAvion(cPersona* tripulantes, int cant);

};
