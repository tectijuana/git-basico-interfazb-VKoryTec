#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 17: Introducir las longitudes de los lados de un tríangulo.
Determinar si el tríangulo es isósceles, equilatero o escaleno.
*/

//Autor: VKoryTec
//Fecha: 14/03/2022

int main()
{
    double A, B, C;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se determiniara el area\n";

    cout << "\n1er lado = ";
    cin >> A;
    cout << "2do lado = ";
    cin >> B;
    cout << "3er lado = ";
    cin >> C;

    cout << "\nEs un triangulo:\n";

    if (A == B && B == C)
        cout << "\n  Equilatero <--\n";
    else if (A == B || A == C || B == C)
        cout << "\n  Isosceles <--\n";
    else
        cout << "\n  Escaleno <--\n";
}