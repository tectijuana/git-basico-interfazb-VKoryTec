#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 24: Introducir la longitud de la hipotenusa de un triangulo isosceles y calcular la longitud de un cateto.
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
    double A, B, C;

    cout << "Favor de insertar la longitud de uno de la hipotenusa de tu triangulo rectangulo isosceles para obtener su cateto\n";

    cout << "\nHipotenusa = ";
    cin >> C;

    A = sqrt(cuadrado(C)/2);
    B = A;

    cout << "\n -- Triangulo -- ";
    cout << "\nHipotenusa: " << C;
    cout << "\n\n1er Cateto: " << A << " <--";
    cout << "\n2do Cateto: " << B << " <--\n";
}