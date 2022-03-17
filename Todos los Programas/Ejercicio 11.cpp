#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 4 Ej. 2: Introducir la medida en grados de un angulo y calcular la medida en radianes.
*/

//Autor: VKoryTec
//Fecha: 14/03/2022


int main()
{
    double grad, rad;

    cout << "Favor de introducir los grados que seran convertidos a radianes: \nGrados: ";
    cin >> Grad;

    rad = (Grad * MPI) / 180;

    cout << "\n  Radianes: " << rad << " <--\n";
}