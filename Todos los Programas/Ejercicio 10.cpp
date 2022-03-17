#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 18: Introducir las longitudes de los catetos de un triangulo rectangulo y calcular el perimetro.
*/

//Autor: VKoryTec
//Fecha: 14/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
    double A, B, C, P;

    cout << "Favor de insertar los valores de los catetos de tu triangulo rectangulo con los que se determiniara el perimetro\n";

    cout << "\n1er cateto = ";
    cin >> A;
    cout << "2do cateto = ";
    cin >> B;

    C = sqrt(cuadrado(A) + cuadrado(B));

    P = A + B + C;

    cout << "\n -- Triangulo -- ";
    cout << "\n1er Cateto: " << A;
    cout << "\n2do Cateto: " << B;
    cout << "\nHipotenusa: " << C;
    cout << "\n\n  Perimetro: " << P << " <--\n";
}