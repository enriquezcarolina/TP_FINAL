#include "cCopiloto.h"
#include "cAvion.h"

cCopiloto::cCopiloto()
{
}

cCopiloto::~cCopiloto()
{
}

string cCopiloto::to_string(){
    return cPersona::to_string() + "\nTipo: COPILOTO";
}

void cCopiloto::pedir_aterrizaje(){
    cAvion::registrar("pidio permiso para aterrizar", this);
}

void cCopiloto::pedir_despegue(){
    cAvion::registrar("pidio permiso para despegar", this);
}