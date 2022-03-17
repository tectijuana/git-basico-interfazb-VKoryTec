#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 1: Dados los tres lados A,B,C, de un triangulo, encontrar los tres ángulos a, b y c. 
Supner que todos los ángulos son agudos.
*/

//Autor: VKoryTec
//Fecha: 12/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

double radianesAGrados(double radianes)
{
    return radianes * 180 / MPI;
}

int main()
{
    double A, B, C, a, b, c;

    cout << "Favor de insertar los valores de los lados de tu triangulo agudo con los que se obtendran los angulos\n";
    
    cout << "\nlado A = ";
    cin >> A;
    cout << "lado B = ";
    cin >> B;
    cout << "lado C = ";
    cin >> C;

    a = radianesAGrados(1 / (cos((cuadrado(B) + cuadrado(C) - cuadrado(A)) / (2 * B * C))));
    b = radianesAGrados(1 / (cos((cuadrado(A) + cuadrado(C) - cuadrado(B)) / (2 * A * C))));
    c = radianesAGrados(1 / (cos((cuadrado(A) + cuadrado(B) - cuadrado(C)) / (2 * A * C))));

    cout << "\n --- Angulos ---\n";
    cout << "\nAngulo a = " << a;
    cout << "\nAngulo b = " << b;
    cout << "\nAngulo c = " << c << "\n";
}