#include "Familiar.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <direct.h>
#include <string>
using namespace std;

Familiar::Familiar():paciente()
{

}

void Familiar :: opinion()
{
    string nameArchivo;
    string extension;
    cout<< "INGRESE EL NOMBRE DEL PACIENTE  :";
    cin.ignore();
    getline(cin,nameArchivo);
    nameArchivo += ".txt";
    ifstream fs(nameArchivo.c_str(),ios :: in);
    char linea[128];
    long cont = 0L;
    //ofstream fs(nameArchivo.c_str(),ios :: app);
    if (fs.fail())
        cout <<"EL PACIENTE NO EXISTE  "<<endl;
        else
            while (!fs.eof()){
                fs.getline(linea,sizeof(linea));
                cout << linea <<endl;
                if ((++cont % 24)== 0){
                    ifstream fs(nameArchivo.c_str(),ios :: app);
                    cout<<"VISITA :"<<nombre<<endl;
                    cin>>nombre;
                    cout<<"OPINION :"<<opiniones<<endl;
                    cin>>opiniones;


                    cout << "continuar......";
                    cin.get();
                }
            }
        fs.close();
        system("pause");


}
