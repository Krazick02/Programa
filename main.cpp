#include "Admin.h"
#include "Libro.h"
#include "Prestamo.h"
#include  <iostream>
#include  <cstring>
#include <stdlib.h>

using namespace std;
void showU(Admin a[10],int nU){
    cout<<"\n\nUsuarios registrados\n";
    for(int x=0;x<nU;x++){
        cout<<x;
        a[x].no();
    }
}
void showL(Libro l[10],int nL){
    cout<<"\n\nLibros registrados\n";
    for(int x=0;x<nL;x++){
        cout<<x;
        l[x].no();
    }
}
int presta(){
    int u;
    cout<<"\nIngrese su numero de prestamo :\n==>";
    cin>>u;
    cout<<"\n\n";
    return u;
}

int user(Admin a[10],int nU){
    int u;
    showU(a,nU);
    cout<<"\nIngrese su numero de usuario :\n==>";
    cin>>u;
    cout<<"\n\n";
    return u;
}

int lib(Libro l[10],int nL){
    int u;
    showL(l,nL);
    cout<<"\nIngrese el numero del libro :\n==>";
    cin>>u;
    cout<<"\n\n";
    return u;
}

int menu(){
    int o;
    cout<<"====MENU PRINCIPAL====\n\n";
    cout<<"1.Administrar usuarios.\n2.Administrar libros\n3.Administrar prestamos.\n4.Salir\n==>";
    cin>>o;

    return o;
}
int usuarios(){
    system("cls");
    int o;
    cout<<"====ADMINISTAR USUARIOS====\n\n";
    cout<<"1.Registrar\n2.Editar\n3.Consultar\n4.Eliminar\n==>";
    cin>>o;
    return o;
}
int libros(){
    system("cls");
    int o;
    cout<<"====ADMINISTAR LIBROS====\n\n";
    cout<<"1.Registrar\n2.Editar\n3.Consultar\n4.Eliminar\n==>";
    cin>>o;
    return o;
}
int prestamos(){
    system("cls");
    int o;
    cout<<"====ADMINISTAR PRESTAMOS====\n\n";
    cout<<"1.Realizar préstamo\n2.Devolver libro\n3.Consultar préstamo\n==>";
    cin>>o;
    return o;
}
Admin regisAdmin(){
    char nom[100];
    char apell[100];
    int ed;
    cout<<"====Registro de Admin.====\n\n";
    cout<<"Ingrese su nombre :\n";
    cin>>nom;
    cout<<"Ingrese su apellido :\n";
    cin>>apell;
    cout<<"Ingrese su edad \n";
    cin>>ed;
    return Admin(nom,apell,ed);
}

Libro regisLibro(){
    char nom[100];
    char aut[100];
    char est[]="Libre";
    cout<<"====Registro de Libro.====\n\n";
    cout<<"Ingrese el nombre del libro :\n";
    cin>>nom;
    cout<<"Ingrese el autor del libro :\n";
    cin>>aut;

    return Libro(nom,aut,est);
}
Prestamo salida(Admin a[10],Libro l[10],int nU,int nL){
    char fecha1[100],fecha2[]="Pendiente";
    int u,o;
    u=user(a,nU);
    o=lib(l,nL);
    cout<<"\nIngrese la fecha de salida :\n";
    cin>>fecha1;
    l[o].change();

    return Prestamo(a[u],l[o],fecha1,fecha2);
}

int main()
{
    Admin a[10];
    Libro l[10];
    Prestamo p[10];
    bool op=true;
    int nU=0,u,nL=0,li,nP=0,pr,h;
    while(op==true){
        switch(menu()){
            case 1:
                switch(usuarios()){
                    case 1:
                        system("cls");
                        a[nU]=regisAdmin();
                        cout<<"\nNumero de usuario =>"<<nU<<endl<<endl;
                        nU++;
                        break;
                    case 2:
                        u=user(a,nU);
                        a[u].toString();
                        cout<<"Igrese los nuevos datos\n";
                        a[u]=regisAdmin();
                        break;
                    case 3:
                        a[user(a,nU)].toString();
                        break;
                    case 4:
                        a[user(a,nU)]=Admin();
                        cout<<"Usuario borrado"<<endl;
                        break;
                    default:
                        break;
                }
                break;
            case 2:
                switch(libros()){
                    case 1:
                        system("cls");
                        l[nL]=regisLibro();
                        cout<<"\nNumero de Libro =>"<<nL<<endl<<endl;
                        nL++;
                        break;
                    case 2:
                        li=lib(l,nL);
                        l[li].toString();
                        cout<<"Igrese los nuevos datos\n";
                        l[li]=regisLibro();
                        break;
                    case 3:
                        l[lib(l,nL)].toString();
                        break;
                    case 4:
                        l[lib(l,nL)]=Libro();
                        cout<<"Libro borrado"<<endl;
                        break;
                    default:
                        break;
                }
                break;
            case 3:
                switch(prestamos()){
                    case 1:
                        system("cls");
                        p[nP]=salida(a,l,nU,nL);
                        cout<<"\nNumero del prestamo : "<<nP<<endl<<endl;
                        nP++;
                        break;
                    case 2:
                        h=presta();
                        li=lib(l,nL);
                        p[h].alterna(l[li]);
                        break;
                    case 3:
                        p[presta()].toString();
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                op=false;
                break;
        }
    }


    return 0;
}
