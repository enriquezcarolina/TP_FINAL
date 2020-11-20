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
	virtual string tostring()=0;

	string get_NYA(){return NYA;}
};


