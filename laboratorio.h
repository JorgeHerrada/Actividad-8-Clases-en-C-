#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "computadora.h"

class Laboratorio
{
private:
    Computadora arreglo[5];
    size_t contador;
public:
    Laboratorio();
    ~Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();

    //Sobrecarga <<
    friend Laboratorio& operator<<(Laboratorio &lab, const Computadora &c)
    {
        lab.agregarFinal(c);

        return lab;
    }
};


#endif