#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar()
{
    ofstream archivo("respaldo.txt");
    if(archivo.is_open())
    {
        for (size_t i = 0; i < contador; i++)
        {
            Computadora &c = arreglo[i];

            archivo << c.get_s_o()<<endl;
            archivo << c.getProcesador()<<endl;
            archivo << c.getGrafica()<<endl;
            archivo << c.getRam()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("respaldo.txt");
    if (archivo.is_open())
    {
        string tempo; //guardará los strings para asignarlos al objeto
        int ram;
        Computadora c;

        while (true)
        {
            getline(archivo, tempo);
            c.set_s_o(tempo);

            //condicion para comprobar si terminó de leer el archivo, salga del bucle
            if (archivo.eof())
            {
                break;
            }
        
            getline(archivo, tempo);
            c.setProcesador(tempo);
        
            getline(archivo, tempo);
            c.setGrafica(tempo);

            getline(archivo, tempo);
            ram = stof(tempo);
            c.setRam(ram);

            agregarFinal(c);
        }
    }
    archivo.close();
}