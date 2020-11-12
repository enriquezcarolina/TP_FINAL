#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "Logger.h"
#include "cPiloto.h"
#include "Log.h"


enum{PASAJERO, PILOTO};

class cAvion
{
private:
  cListaT <cPersona>* pasajeros;
  cListaT <cPersona>* empleados;
  static Logger registros;

public:
  cAvion(cListaT<cPersona>* empleados, cListaT <cPersona>* pasajeros);
  ~cAvion();
  void AgregarPasajero(cPersona* pasajero);
  void volar();
  //llama a un evento random
  void tick(int p);
  cAzafata* azafata_random();
  cPasajero* pasajero_random();
  cPiloto* piloto_random();
  cMarshall* get_marshall();

  string tostring();
  void imprimir();
  void imprimir_eventos();
  static void registrar(string descripcion, cPersona* p);
};
