#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1 = Computadora("Linux","INTEL core i7","Ice Lake",8);
    Computadora c2 = Computadora("Windows","AMD A6","Radeon 5",4);

    Computadora c3;
    c3.set_s_o("MacOS");
    c3.setProcesador("INTEL core i9");
    c3.setGrafica("Mamalona");
    c3.setRam(16);

    Computadora c4;
    c4.set_s_o("Windows");
    c4.setProcesador("INTEL core i5");
    c4.setGrafica("Integrados");
    c4.setRam(8);
 
    Laboratorio lab1;
    // lab1.agregarFinal(c1);
    // lab1.agregarFinal(c2);
    // lab1.agregarFinal(c3);
    // lab1.agregarFinal(c4);
    // lab1.agregarFinal(c5);

    //Captura de computadoras 5 y con sobrecarga de >>
    Computadora c5;
    cin >> c5;

    //Agregando objetos a la clase administradora con uso de sobrecarga
    lab1 << c1;
    lab1 << c2;
    lab1 << c3;
    lab1 << c4;
    lab1 << c5;

    //Impresión con sobrecarga de << 
    cout<<"IMPRESION CON SOBRECARGA DE <<"<<endl<<endl;
    cout << c1 << c2 << c3 << c4 << c5 <<endl<<endl;

    //IMPRESION CON FUNCION mostrar()
    cout<<"IMPRESION CON FUNCION mostrar()"<<endl<<endl;
    lab1.mostrar();

    return 0;
}