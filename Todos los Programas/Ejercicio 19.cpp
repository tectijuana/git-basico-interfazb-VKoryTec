#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 103: Determinar la media geometrica de dos numeros reales positivos.
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
    double X, Y, M;

    cout << "Favor de insertar dos numeros positivos para obtener la media geometrica de los mismos";
    cout << "\nNumero 1: ";
    cin >> X;
    cout << "Numero 1: ";
    cin >> Y;

    M = sqrt(X*Y);

    cout << "\n  Media geometrica: " << M << " <--\n";
}