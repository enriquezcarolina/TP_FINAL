#pragma once
#include <string>
#include <iostream>
using namespace std;

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
	string getNYA();
	virtual string to_string();

	string get_NYA(){return NYA;}
};

