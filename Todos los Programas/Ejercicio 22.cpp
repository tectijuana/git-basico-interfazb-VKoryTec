#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 20: Introducir las longitudes de los lados de un triangulo y determinar el area.
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

int main()
{
    double A, B, C, P, Area;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se determiniara el perimetro\n";

    cout << "\n1er lado = ";
    cin >> A;
    cout << "2do lado = ";
    cin >> B;
    cout << "3er lado = ";
    cin >> C;

    P = ((A + B + C) / 2);
    Area = sqrt(P * (P - A) * (P - B) * (P - C));

    cout << "\n -- Triangulo -- ";
    cout << "\n1er Lado: " << A;
    cout << "\n2do Lado: " << B;
    cout << "\n3er Lado: " << C;
    cout << "\n\n  Area: " << Area << " <--\n";
}