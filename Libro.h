#ifndef LIBRO_H
#define LIBRO_H


class Libro{
    private:
        char titulo[100];
        char autor[100];
        char stat[100];
    public:
        Libro();
        Libro(char[],char[],char[]);
        void change();
        void change2();
        void no();
        void toString();

};

#endif // LIBRO_H
