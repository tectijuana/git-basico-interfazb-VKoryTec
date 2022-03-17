#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 62: Calcular el area de la envoltura de papel de una lata cilindrica de maiz,
que tiene 24 cm de altura y 12 cm de diametro. La formula para calcular el
area exterior de un cilindro puede escribirse como:

Area = altura*diametro*PI
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
    double H = 24, D = 12, area;

    area = (H * D * MPI);

    cout << " --- Envoltura de papel ---";
    cout << "\nAltura = " << H;
    cout << "\nDiametro = " << D;
    cout << "\n\n  Area = " << area << " <--\n";
}