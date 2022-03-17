#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 28: Introducir X, la longitud de un triangulo equilatero y calcular su perimetro
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

int main()
{
    double X, P;

    cout << "Favor de insertar los valores de tu triangulo equilatero para calcular el perimetro\n";

    cout << "\nLado = ";
    cin >> X;

    P = 3 * X;

    cout << "\n -- Triangulo -- ";
    cout << "\nLados: " << X <<" x3";
    cout << "\n\n  Perimtero: " << P << " <--\n";
}