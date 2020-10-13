#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream> 
using namespace std;

class Computadora
{
private:
    string s_o; //sistema operativo
    string procesador;
    string grafica;
    int ram;
public:
    Computadora();
    Computadora(const string &s_o,const string &procesador,const string grafica,int ram);
    void set_s_o(const string &v);
    string get_s_o();

    void setProcesador(const string &v);
    string getProcesador();

    void setGrafica(const string &v);
    string getGrafica();

    void setRam(int v);
    int getRam();
};

#endif