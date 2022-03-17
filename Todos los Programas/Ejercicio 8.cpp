#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 16: dados los tres lados de cualquier triangulo ABC, calcular y mostrar en pantalla el área de ese tríangulo.
*/

//Autor: VKoryTec
//Fecha: 14/03/2022

int main()
{
    double A, B, C, P, Area;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se determiniara el area\n";

    cout << "\n1er lado = ";
    cin >> A;
    cout << "2do lado = ";
    cin >> B;
    cout << "3er lado = ";
    cin >> C;

    P = ((A + B + C) / 2);
    Area = sqrt(P * (P - A) * (P - B) * (P - C));

    cout << "\nArea: " << Area << "\n";
}