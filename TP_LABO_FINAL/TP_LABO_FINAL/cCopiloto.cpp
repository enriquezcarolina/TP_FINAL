#include "cCopiloto.h"
#include "cAvion.h"
#include "cPersona.h"
#include "cPiloto.h"
cCopiloto::cCopiloto():cPiloto()
{
}

cCopiloto::~cCopiloto()
{
}

string cCopiloto::tostring(){
    return cPersona::tostring() + "\nTipo: COPILOTO";
}

void cCopiloto::pedir_aterrizaje(){
    cAvion::registrar("pidio permiso para aterrizar", this);
}

void cCopiloto::pedir_despegue(){
    cAvion::registrar("pidio permiso para despegar", this);
}