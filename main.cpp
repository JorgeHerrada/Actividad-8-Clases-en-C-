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

    Laboratorio l1;
    l1.agregarFinal(c1);
    l1.agregarFinal(c2);
    l1.agregarFinal(c3);
    l1.agregarFinal(c4);

    l1.mostrar();

    return 0;
}