#pragma once
#include <string>
#include <iostream>
using namespace std;

enum eAsientos{A, B, C, D, E, F, G};

class cPersona
{
protected:
	const string DNI;
	string NYA;

public:
	cPersona(string DNI, string NYA);
	cPersona();
	virtual ~cPersona();
	void imprimir();
	string getclave();
	virtual string tostring();

	string get_NYA(){return NYA;}
};

