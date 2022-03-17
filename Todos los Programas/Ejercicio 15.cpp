#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 61: Calcular el area superficial de un cilindro con la formula: S= 2*PI*(r2+h)
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
    double r, h, area;

    cout << "Favor de introducir los datos de su cilindro para obterner su area superficial: \nRadio: ";
    cin >> r;
    cout << "Altura: ";
    cin >> h;

    area = ((2 * MPI) * (r * (r + h)));

    cout << "\n  Area superficial: " << area << " <--\n";
}