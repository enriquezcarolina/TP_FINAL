#include "cCopiloto.h"
#include "cAvion.h"
#include "cPersona.h"
#include "cPiloto.h"
cCopiloto::cCopiloto(string dni, string nya, bool piloteando):cPiloto(dni, nya, piloteando)
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
