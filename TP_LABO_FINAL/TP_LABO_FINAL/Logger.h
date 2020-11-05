#pragma once
#include "Lista_Template.h"
#include "Log.h"
#include <iostream>
#include <string>
using namespace std;

#define NMAX 20

class Logger : protected cListaT<Log>
{
public:
	Logger(int Nmax = NMAX);
	virtual ~Logger() {
	}

	void Registrar(Log* log) {
		AgregarItem(log);
	}

	void Registrar(string descripcion, cPersona* p) {
		AgregarItem(new Log(descripcion,p));
	}

	void Listar() {
		for (int i = 0; i < CA; ++i)
			cout << vector[i]->to_string() << endl;
	}

};
