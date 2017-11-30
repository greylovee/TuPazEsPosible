#ifndef DIRECTOR_H
#define DIRECTOR_H
#include <string>
#include <iostream>

using namespace std;
class director
{

protected:
    string usuario;
    string password;
    int opc;
public:
    director();
    void ingreso();
    virtual int registro( );


};

#endif // INICIO_H
