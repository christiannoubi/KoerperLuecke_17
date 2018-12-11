#pragma once;
#include <iostream>
#include <sstream>
#include <string>
#include "Koerper3D.h"
using namespace std;

class Wuerfel : public Koerper3D{

private:
    float a;
public:

    Wuerfel (float a) {
        this->a = a;
    }
    ~Wuerfel () {

    }
    float volumen () const{
        return a*a*a;
    }

    float oberflaeche () const {
        return 6*a*a;
    }

protected:
    virtual void ausgeben (ostream& os) const {
        cout << "a=" <<a ;
    }
};