#ifndef ADMIN_H
#define ADMIN_H
#include "Libro.h"


class Admin{
    private:
        char nombre[100];
        char apellido[100];
        int edad;
    public:
        Admin();
        Admin(char[],char[],int);
        void no();
        void toString();
};

#endif // ADMIN_H
