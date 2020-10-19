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
    cout << left;
    cout << setw(20) << "Sistema Operativo";
    cout << setw(17) << "Procesador";
    cout << setw(17) << "Grafica";
    cout << setw(5) << "RAM"<<endl;

    for (size_t i = 0; i < contador; i++)
    {
        Computadora &c = arreglo[i];

        cout << c;

        // cout<<"Sistema Operativo: "<< c.get_s_o()<<endl;
        // cout<<"Procesador: "<< c.getProcesador()<<endl;
        // cout<<"Grafica: "<< c.getGrafica()<<endl;
        // cout<<"Ram: "<< c.getRam()<<endl;
        // cout<<endl;
    }
    cout << endl;
    
}