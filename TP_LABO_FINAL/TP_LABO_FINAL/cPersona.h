#pragma once
#include <string>
#include <iostream>
using namespace std;


enum eComida { NADA, POLLO, PESCADO, VEGGIE, SUSHI, CAVIAR };
enum eBebida { NINGUNA, AGUA, GASEOSA, VINO, CHAMPAGNE };
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
	eComida comida_random();
	eBebida bebida_random();

	string get_NYA(){return NYA;}
};


