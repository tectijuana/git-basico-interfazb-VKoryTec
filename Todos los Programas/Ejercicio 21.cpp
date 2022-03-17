#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 19: Introducir las longitudes de los lados de un triangulo.
Encontrar el Perimetro.
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

int main()
{
    double A, B, C, P;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se determiniara el perimetro\n";

    cout << "\n1er lado = ";
    cin >> A;
    cout << "2do lado = ";
    cin >> B;
    cout << "3er lado = ";
    cin >> C;

    P = A + B + C;

    cout << "\n -- Triangulo -- ";
    cout << "\n1er lado: " << A;
    cout << "\n2do lado: " << B;
    cout << "\n3er Lado: " << C;
    cout << "\n\n  Perimetro: " << P << " <--\n";
}