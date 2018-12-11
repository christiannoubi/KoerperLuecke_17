#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include "Koerper.h"

using namespace std;

class Koerper3D : public Koerper{

private:

public:

    Koerper3D () {

    }
    ~Koerper3D () {

    }
    virtual int anzahlDimensionen () const{
        return 3;
    }

    virtual float volumen () const = 0;
    virtual float oberflaeche () const = 0;

};