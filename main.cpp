#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Computadora c1 = Computadora("Linux","INTEL core i7","Ice Lake",8);
    Computadora c2 = Computadora("Windows","AMD A6","Radeon 5",4);

    // cout << "Sobrecarga: "<<endl;
    // cout << c1;
    // cout << c2;


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

    // cout << "Sobrecarga: "<<endl;
    // cout << c3;
    // cout << c4;

    Computadora c5;
    cin >> c5;


    Laboratorio lab1;
    // lab1.agregarFinal(c1);
    // lab1.agregarFinal(c2);
    // lab1.agregarFinal(c3);
    // lab1.agregarFinal(c4);
    // lab1.agregarFinal(c5);

    lab1 << c1;
    lab1 << c2;
    lab1 << c3;
    lab1 << c4;
    lab1 << c5;

    lab1.mostrar();

    return 0;
}