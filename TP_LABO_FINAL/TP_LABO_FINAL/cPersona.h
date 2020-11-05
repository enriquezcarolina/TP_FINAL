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
	virtual ~cPersona();
	string get_NYA(){return NYA;}
};

