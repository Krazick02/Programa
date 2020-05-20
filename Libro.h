#ifndef LIBRO_H
#define LIBRO_H


class Libro{
    private:
        char titulo[100];
        char autor[100];
        int stat;
    public:
        Libro();
        Libro(char[],char[],int);
        void change();
        int gete();
        void no();
        void toString();

};

#endif // LIBRO_H
