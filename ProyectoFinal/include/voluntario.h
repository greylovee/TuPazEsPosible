#ifndef VOLUNTARIO_H
#define VOLUNTARIO_H
#include <iostream>
#include "director.h"

using namespace std;

class voluntario : public director
{
private:
    string nombre;
    int edad;
    string dni;
    int movil;
    string funcion ;
public:
    voluntario();
    void menu();
    int registro();
    void asignarFuncion();


};

#endif // VOLUNTARIO_H
