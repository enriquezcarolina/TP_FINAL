#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "cPiloto.h"
#include "Logger.h"

class cAvion
{
private:
    cListaT <cPersona> *pasajeros;
    cListaT<cPersona>* empleados;
   static Logger registros;

public:
  cAvion(cPersona* tripulantes, int cant);

};
