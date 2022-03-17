#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 60: Calcular el volumen de cualquier cilindro si se conocen el radio de la base y la altura del cilindro
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
    double r, h, v;

    cout << "Favor de introducir los datos de su cilindro para obterner el volumen: \nRadio: ";
    cin >> r;
    cout << "Altura: ";
    cin >> h;

    v = (MPI * cuadrado(r) * h);

    cout << "\n  Volumen: " << v << " <--\n";
}