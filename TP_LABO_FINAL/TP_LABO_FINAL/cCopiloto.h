#pragma once
#include <string>
#include <iostream>
#include "cPiloto.h"
using namespace std;

class cCopiloto:public cPiloto{

public:
    cCopiloto();
    ~cCopiloto();
    void pedir_aterrizaje();
    void pedir_despegue();
    string to_string();
};


