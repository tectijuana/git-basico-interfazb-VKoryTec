#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 25: Introducir B, la base y H, la altura de un triangulo y determinar el area.
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

int main()
{
    double B, H, area;

    cout << "Favor de insertar los valores de tu triangulo para calcular el area\n";

    cout << "\nBase = ";
    cin >> B;
    cout << "Altura = ";
    cin >> H;

    area = (B*H)/2;

    cout << "\n -- Triangulo -- ";
    cout << "\nBase: " << B;
    cout << "\nAltura: " << H;
    cout << "\n\n  Area: " << area << " <--\n";
}