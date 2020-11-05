#pragma once
#include <string>
#include <iostream>
#include "cPiloto.h"
using namespace std;

class cCopiloto:public cPiloto{

public:
    cCopiloto();
    ~cCopiloto();
    bool pedir_aterrizaje();
    bool pedir_despegue();

};