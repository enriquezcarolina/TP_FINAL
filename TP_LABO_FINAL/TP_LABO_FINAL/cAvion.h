#pragma once
#include "Lista_Template.h"
#include"cPersona.h"
#include "Logger.h"
#include "cPiloto.h"

enum{PASAJERO, PILOTO};

class cAvion
{
private:
  cListaT <cPersona>* pasajeros;
  cListaT <cPersona>* empleados;
  static Logger registros;

public:
  cAvion(cListaT<cPersona>* pasajeros, cListaT<cPersona>* empleados);
  ~cAvion();
  void volar();
  //tick() llama a un evento random
  void tick(int p);
  cPersona* azafata_random();
  cPersona* pasajero_random();
  cPersona* piloto_random();
  cPersona* get_marshall();

  string to_string();
  void imprimir();
  void imprimir_eventos();
  static void registrar(string descripcion, cPersona* p);
};
