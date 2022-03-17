#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 59: Calcular y mostrar en pantalla el volumen de un cilindro de radio r y altura h.
En este problema, r=10 cm y h= 32cm. Usar la formula V= pi*r2*h
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
    double r = 10, h = 32, v;

    v = (MPI * cuadrado(r) * h);

    cout << "  --- Cilindro ---";
    cout << "\nRadio: " << r;
    cout << "\nAltura: " << h;
    cout << "\n\n  Volumen: " << v << " <--\n";
}