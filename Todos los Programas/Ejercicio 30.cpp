#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 37: Encontrar el area de cualquier cuadrado con la formula
A = S^2
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
    double A, S;

    cout << "Favor de insertar un lado de tu cuadrado para calcular el area\n";

    cout << "\n1er lado = ";
    cin >> S;

    A = cuadrado(S);

    cout << "\n  Area: " << A << " <--\n";
}