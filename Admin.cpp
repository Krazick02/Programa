#include "Admin.h"
#include "Libro.h"
# include <iostream>
# include <cstring>
using namespace std;
Admin::Admin(){
    //ctor
}

Admin::Admin(char nombre[100],char apellido[100],int edad){
    strcpy(this->nombre,nombre);
    strcpy(this->apellido,apellido);
    this->edad=edad;
}

void Admin::toString(){
    cout<<"======INFORMACION DEL ADMIN======\n\n";
    cout<<"Nombre :"<<this->nombre;
    cout<<"\nApellido :"<<this->apellido;
    cout<<"\nEdad :"<<this->edad<<endl;
}

void Admin::no(){
    cout<<".-"<<this->nombre<<endl;
}
