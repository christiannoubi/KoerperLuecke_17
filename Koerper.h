#pragma once;
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Koerper {

private:

public:

    Koerper () {

    }
    virtual ~Koerper () {
    // TODO
      //  cout << "delete " << k.anzahlDimensionen() << "-d " << endl;
    }

   virtual int anzahlDimensionen () const = 0;

protected:
    virtual void ausgeben (ostream& os) const = 0;

    friend ostream & operator << (ostream&os,  Koerper& k) {
       k.ausgeben(os);
       return os;
    }
};