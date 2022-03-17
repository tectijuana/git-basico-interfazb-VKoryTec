#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 14: Introducir tres números positivos X, Y y Z.
Determinar si pueden ser las longitudes de los lados de un triangulo recto.
*/

//Autor: VKoryTec
//Fecha: 12/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
    double X, Y, Z;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se terminiara si se trata de un triangulo rectangulo (favor de colocar primero el lado mas largo)\n";

    cout << "\n1er lado (Lado mas largo) = ";
    cin >> Z;
    cout << "2do lado = ";
    cin >> Y;
    cout << "3er lado = ";
    cin >> X;

    if (sqrt(cuadrado(X)+cuadrado(Y)) == Z)
        cout << "\nSI es un triangulo rectangulo\n";
    else
    {
        cout << "\nNO es un triangulo rectangulo\n";
    }
}