#include "Log.h"

Log::Log(string descripcion, cPersona*p)
{
	this->descripcion = descripcion;
	this->persona = p;
}

string Log::to_string(){
	string retornar = "";
	retornar = persona->get_NYA() + " " + descripcion;
	return retornar;
}
