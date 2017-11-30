#include <iostream>
#include "director.h"
#include "voluntario.h"
#include "paciente.h"


using namespace std;

int main()
{

    director d;
    d.ingreso();
    paciente p;
    voluntario v;

    if (d.registro() == 1){

        p.registro();
    }
    else{
        v.menu();
    }



}
