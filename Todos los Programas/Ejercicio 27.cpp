#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 29: Determinar el perimetro de un triangulo rectangulo, dadas las longitudes de los catetos
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

    cout << "\nCateto 1 = ";
    cin >> A;
    cout << "Cateto 2 = ";
    cin >> B;

    C = sqrt(cuadrado(A) + cuadrado(B));
    P = A + B + C;

    cout << "\n -- Triangulo -- ";
    cout << "\n1er Cateto: " << A;
    cout << "\n2do Cateto: " << B;
    cout << "\nHipotenusa: " << C;
    cout << "\n\n  Perimtero: " << P << " <--\n";
}