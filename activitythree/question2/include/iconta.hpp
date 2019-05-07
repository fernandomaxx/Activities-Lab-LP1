#pragma once

#include <string>

class IConta 
{
public:

    virtual ~IConta();

    virtual void sacar( double valor ) = 0;

    virtual void depositar( double valor ) = 0;
};