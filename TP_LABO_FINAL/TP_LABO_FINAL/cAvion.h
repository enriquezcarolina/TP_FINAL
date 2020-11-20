#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "Logger.h"
#include "cPiloto.h"
#include "Log.h"
#define CANT_PASAJEROS 10
#define CANT_TRIPULANTES 6

enum{PASAJERO, PILOTO};

class cAvion
{
private:
  cListaT <cPersona>* pasajeros;
  cListaT <cPersona>* empleados;
  static Logger registros;

public:
  cAvion(cListaT<cPersona>* Empleados);
  ~cAvion();
  void AgregarPasajero(cPersona* pasajero);
  void volar();
  //llama a un evento random
  void tick(int p);
  cAzafata* azafata_random();
  cPasajero* pasajero_random();
  cPiloto* piloto_random();
  cMarshall* get_marshall();
  cCopiloto* get_copiloto();

  string tostring();
  void imprimir();
  void imprimir_eventos();
  static void registrar(string descripcion, cPersona* p);
};
