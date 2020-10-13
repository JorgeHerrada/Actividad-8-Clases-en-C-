#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    contador = 0;
}

Laboratorio::~Laboratorio()
{

}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if(contador < 5)
    {
        arreglo[contador] = c;
        contador++;
    }
    else
    {
        cout<<"Ya no se pueden agregar más computadoras al laboratorio."<<endl;
    }
    
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < contador; i++)
    {
        Computadora &c = arreglo[i];
        cout<<"Sistema Operativo: "<< c.get_s_o()<<endl;
        cout<<"Procesador: "<< c.getProcesador()<<endl;
        cout<<"Grafica: "<< c.getGrafica()<<endl;
        cout<<"Ram: "<< c.getRam()<<endl;
        cout<<endl;
    }
    
}