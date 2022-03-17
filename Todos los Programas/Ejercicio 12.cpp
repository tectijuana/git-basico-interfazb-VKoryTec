#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 4 Ej. 3: Introducir la medida en radianes de un angulo y calcular la medida en grados
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
    double grad, rad;

    cout << "Favor de introducir los radianes que seran convertidos a grados: \nRadianes: ";
    cin >> rad;

    grad = (rad * 180) / MPI;
    cout << "\n  Grados: " << grad << " <--\n";
}