#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include "Koerper.h"

using namespace std;

class Koerper2D : public Koerper{

private:
public:

    Koerper2D () {

    }
    ~Koerper2D () {

    }
    virtual int anzahlDimensionen () const{
        return 2;
    }
    virtual float flaeche () const = 0;
    virtual float umfang () const = 0;

};