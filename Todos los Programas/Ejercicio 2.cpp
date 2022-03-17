#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 2: Dada una medida angular mayor que 0° pero menor que 180°,
clasificar el angulo como obtuso, recto o agudo.
*/

//Autor: VKoryTec
//Fecha: 13/03/2022

double radianesAGrados(double radianes)
{
    return radianes * 180 / MPI;
}

int main()
{
    double angulo;

    cout << "Favor de insertar un angulo mayor a 0 grados y menor a 180 grados para identificar el tipo de angulo que es\n";

    cout << "\nAngulo = ";
    cin >> angulo;

    if (angulo < 90 && angulo > 0)
        cout << "\nEl angulo ingresado es agudo\n";
    else if (angulo == 90)
        cout << "\nEl angulo ingresado es recto\n";
    else if (angulo > 90 && angulo < 180)
        cout << "\nEl angulo ingresado es obtuso\n";
    else
        cout << "\nFavor de ingresar un angulo mayor a 0 grados y menor a 180 grados\n";
}