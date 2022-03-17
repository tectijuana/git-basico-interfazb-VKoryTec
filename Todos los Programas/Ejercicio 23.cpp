#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 23: Determinar el perimetro de un triangulo rectangulo isosceles, 
dada la longitud de un cateto.
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

    cout << "Favor de insertar la longitud de uno de los catetos de tu triangulo rectangulo isosceles para obtener su perimetro\n";

    cout << "\nCateto = ";
    cin >> A;

    B = A;
    C = sqrt(cuadrado(A) + cuadrado(B));
    P = A + B + C;

    cout << "\n -- Triangulo -- ";
    cout << "\n1er Lado: " << A;
    cout << "\n2do Lado: " << B;
    cout << "\n3er Lado: " << C;
    cout << "\n\n  Perimetro: " << P << " <--\n";
}