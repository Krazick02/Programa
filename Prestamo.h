#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Admin.h"
#include "Libro.h"

class Prestamo
{
    private:
        Admin usuario;
        Libro obra;
        char fecha1[100];
        char fecha2[100];
    public:
        Prestamo();
        Prestamo(Admin,Libro,char[]);
        Prestamo(Admin,Libro,char[],char[]);
        void alterna(Libro);
        void toString();
};

#endif // PRESTAMO_H
