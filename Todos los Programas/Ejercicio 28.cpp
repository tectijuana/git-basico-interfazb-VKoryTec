#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 30: Determinar el perimetro de un triangulo rectangulo, dadas las longitudes de la hipotenusa y la de un carero 
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
    double A, B, C, P;

    cout << "Favor de insertar los valores de tu triangulo rectangulo para calcular el perimetro\n";

    cout << "\nCateto = ";
    cin >> A;
    cout << "Hipotenusa = ";
    cin >> C;

    B = sqrt(cuadrado(C) - cuadrado(A));
    P = A + B + C;

    cout << "\n -- Triangulo -- ";
    cout << "\n1er Cateto: " << A;
    cout << "\n2do Cateto: " << B;
    cout << "\nHipotenusa: " << C;
    cout << "\n\n  Perimtero: " << P << " <--\n";
}