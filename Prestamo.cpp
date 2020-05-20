#include "Prestamo.h"
#include "Admin.h"
#include "Libro.h"
#include <cstring>
#include <iostream>
using namespace std;

Prestamo::Prestamo(){

}

Prestamo::Prestamo(Admin usuario,Libro obra,char fecha1[100]){
    this->usuario=usuario;
    this->obra=obra;
    strcpy(this->fecha1,fecha1);
}
Prestamo::Prestamo(Admin usuario,Libro obra,char fecha1[100],char fecha2[100]){
    this->usuario=usuario;
    this->obra=obra;
    strcpy(this->fecha1,fecha1);
    strcpy(this->fecha2,fecha2);
}
void Prestamo::alterna(Libro l[10],int li){
    char fecha2[100];
    cout<<"Ingrese la fecha de entrega :\n";
    cin>>fecha2;
    l[li].change();
    this->obra=l[li];
    strcpy(this->fecha2,fecha2);

}
void Prestamo::toString(){
    cout<<"======== INFORMACION ========\n\n";
    this->usuario.toString();
    this->obra.toString();
    cout<<"Fecha de salida :"<<this->fecha1<<endl;
    cout<<"Fecha de entrega :"<<this->fecha2<<endl;
}
