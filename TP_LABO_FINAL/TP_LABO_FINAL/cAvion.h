#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "Logger.h"
#include "cPiloto.h"
class cAvion
{
private:
    cListaT <cPersona> *pasajeros;
    cListaT<cPersona>* empleados;
   static Logger registros;

public:
  cAvion(cListaT<cPersona>* pasajeros, cListaT<cPersona>* empleados);
  ~cAvion();
  void imprmir();

};
