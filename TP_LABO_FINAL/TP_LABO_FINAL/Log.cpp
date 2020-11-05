#include "Log.h"

Log::Log(string descripcion, cPersona*p)
{
	this->descripcion = descripcion;
	this->persona = p;
}

string Log::to_string(){
	string retornar = "";
	retornar = persona->getNYA()+ " " + descripcion;
	return retornar;
}