#include "Libro.h"
#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro(){

}

Libro::Libro(char titulo[100],char autor[100],int stat){
    strcpy(this->titulo,titulo);
    strcpy(this->autor,autor);
    this->stat=stat;
}

void Libro::change(){
    int c=1,p=0;
    if (this->stat==0){
        this->stat=c;
    }
    else{
        this->stat=p;
    }
}
int Libro::gete(){
    return this->stat;
}
void Libro::toString(){
    cout<<"=====INFORMACION DEL LIBRO======\n\n";
    cout<<"Nombre :"<<this->titulo<<endl;
    cout<<"Autor :"<<this->autor<<endl;
    cout<<"Estatus : ";

    if (this->stat==1){
        cout<<"Prestado\n";
    }
    else{
        cout<<"Libre\n";
    }

}

void Libro::no(){
    cout<<".-"<<this->titulo<<endl;
}
