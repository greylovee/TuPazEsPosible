#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include "director.h"

using namespace std;


class paciente : public director
{
    private:
        char nombre[30];
        char apellidos[30];
        string domicilio;
        int edad;
        char info[150];
        char genero[30];
        string dni;
        int movil;
        string movilFamiliares;
    public:
        paciente();
        int registro();
        void altas();
        void buscar();



};

#endif // PACIENTE_H
