#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 35: La formula de Heron puede usarse para encontrar el area de cualquier triangulo, dadas las medidas de los tres lados
la formula es: Area = raiz(s(s-a)(s-b)(s-c)) donde s = 1/2(a+b+c)
Encontrer el area de un triangulo cuyos lados sean 6,8,10
*/

//Autor: VKoryTec
//Fecha: 16/03/2022

double cuadrado(double X)
{
    X = (X * X);
    return X;
}

int main()
{
    double a, b, c, s, area;

    cout << "Favor de insertar los valores de los lados de tu triangulo con los que se determiniara el area\n";

    cout << "\n1er lado = ";
    cin >> a;
    cout << "2do lado = ";
    cin >> b;
    cout << "3er lado = ";
    cin >> c;

    s = ((a + b + c) / 2);
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\n  Area: " << area << " <--\n";
}