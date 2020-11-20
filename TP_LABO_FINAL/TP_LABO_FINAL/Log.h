#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <iostream>
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
	Log(string descripcion, cPersona*p);
	string to_string();
    string getclave() {return persona->get_NYA()+" "+descripcion;}
	friend ostream& operator<<(ostream& out, const Log* log);
};



