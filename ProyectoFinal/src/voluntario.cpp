#include "voluntario.h"
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <iostream>
using namespace std;

voluntario::voluntario():director()
{
    //ctor
}
void voluntario ::menu()
{

    int op;
    do{
        system("cls");
        cout<<"\t\t\tBIENVENIDO A TU PAZ ES POSIBLE"<<endl;
        cout<<"\t\t\t------------------------------"<<endl;
        cout<<"[1]. NUEVO VOLUNTARIO "<<endl;
        cout<<"[0]. SALIR "<<endl;
        cout<<"INGRESE OPCION  :  ";
        cin>>op;
        switch (op){
        case 1:
        {
            registro();
            break;
        }

        }
    }while (op != 0);
}
int voluntario :: registro()
{
    system("cls");
    string nameArchivo;
        string extension;
        cout<<"INGRESE EL NOMBRE DEL NUEVO VOLUNTARIO :";
        cin.ignore();
        getline(cin,nameArchivo);
        system("cls");
        cout<<"\t\t\tBIENVENIDO"<<endl;
        cout<<"\t\t\t----------"<<endl;
        cout<<"NOMBRE     :";
        cin>>nombre;
        cout<<"EDAD    :";
        cin>>edad;
        cout<<"DNI   :";
        cin>>dni;
        cout<<"TELEFONO   : ";
        cin>>movil;
        cout<<"FUNCION   :";
        cin>>funcion;
        getline(cin,extension);
        nameArchivo += ".txt";
        ofstream fs(nameArchivo.c_str());
        fs <<"NOMBRE   : "<<nombre<<endl;
        fs <<"EDAD  :"<<edad<<endl;
        fs <<"DNI   :"<<dni<<endl;
        fs <<"TELEFONO :"<<movil<<endl;
        fs <<"FUNCION  :"<<funcion<<endl;
        fs.close();
        cout<<"REGISTRO GUARDADO CON EXITO...\n";
        system("pause");
}

