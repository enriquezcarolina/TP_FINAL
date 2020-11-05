#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include "cTurista.h"
#include "cEjecutivo.h"
#include "cPrimera.h"
#include "cAzafata.h"
#include "cCopiloto.h"
#include "cMarshall.h"

using namespace std;
class Log
{
	string descripcion;
	cPersona* persona;

public:
	Log(string descripcion, cPersona*);
	string to_string();
	string getclave() {return persona;}
	
};

