#pragma once
#include <string>
#include <iostream>
#include "cPiloto.h"
#include "cPersona.h"
using namespace std;

class cCopiloto:public cPiloto{

public:
    cCopiloto();
    ~cCopiloto();
    void pedir_aterrizaje();
    void pedir_despegue();
    string tostring();
};



