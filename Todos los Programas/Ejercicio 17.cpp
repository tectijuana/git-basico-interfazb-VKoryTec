#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 92: El radio de la tierra es de alrededor de 7,400 km. 
Calcular la circunferencia de la tierra
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
    double r = 7400, c;

    c = 2 * MPI * r;

    cout << " --- La Tierra ---";
    cout << "\nRadio: " << r << "km";
    cout << "\n\n  Circunferencia: " << c << "km <--\n";
}