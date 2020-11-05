#pragma once
#include <string>
#include <iostream>
using namespace std;

class cPersona
{
protected:
	string DNI;
	string NYA;

public:
	cPersona();
	virtual ~cPersona();
	string get_NYA(){return NYA;}
};

