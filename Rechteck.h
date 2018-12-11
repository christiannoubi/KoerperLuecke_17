#pragma once;
#include "Koerper2D.h"


class Rechteck : public Koerper2D {

private:
    float a;
    float b;

public:

    Rechteck (float a, float b) {
        this->a = a;
        this->b = b;
    }

    ~Rechteck () {

    }

    virtual float flaeche () const {
        return a*b;
    }

    float umfang () const{
        return 2*(a*b);
    }

protected:

    virtual void ausgeben (ostream & os) const {
        cout << "a=" << a << " "<< "b=" <<b ;
    }
};