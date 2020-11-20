#pragma once
#include "Lista_Template.h"
#include "Log.h"
#include <iostream>
#include <string>
using namespace std;

#define MAX_EVENTOS 30

class Logger : protected cListaT<Log>
{
public:
	Logger(int Nmax = MAX_EVENTOS);
	virtual ~Logger() {
	}

	void Registrar(Log* log) {
		AgregarItem(log);
	}

	void Registrar(string descripcion, cPersona* p) {
        try{
		AgregarItem(new Log(descripcion,p));
        }
        catch(...){
            return;
        }
	}

	void Listar() {
		for (int i = 0; i < CA; ++i)
			cout << vector[i] << endl;
	}

};

