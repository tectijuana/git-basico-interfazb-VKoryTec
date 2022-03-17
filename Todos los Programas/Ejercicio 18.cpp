#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 93: Cual es el area de un circulo cuyo radio es de 8cm?
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
    double r = 8, area;

    area = MPI * cuadrado(r);

    cout << " -- Circulo --";
    cout << "\nRadio: " << r << "cm";
    cout << "\n\n  Area: " << area << "cm2 <--\n";
}