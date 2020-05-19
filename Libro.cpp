#include "Libro.h"
#include <iostream>
#include <cstring>

using namespace std;

Libro::Libro(){

}

Libro::Libro(char titulo[100],char autor[100],char stat[100]){
    strcpy(this->titulo,titulo);
    strcpy(this->autor,autor);
    strcpy(this->stat,stat);
}

void Libro::change(){
    char l[]="Prestado";
    strcpy(this->stat,l);
}
void Libro::change2(){
    char o[]="Libre";
    strcpy(this->stat,o);
}
void Libro::toString(){
    cout<<"=====INFORMACION DEL LIBRO======\n\n";
    cout<<"Nombre :"<<this->titulo<<endl;
    cout<<"Autor :"<<this->autor<<endl;
    cout<<"Estatus : "<<this->stat<<endl;
}

void Libro::no(){
    cout<<".-"<<this->titulo<<endl;
}
