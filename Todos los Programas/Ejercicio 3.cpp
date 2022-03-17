#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 3 Ej. 5: Introducir las medidas de dos ángulos interiores opuestos en el triangulo.
Determinar la medida de los ángulos externos.
*/

//Autor: VKoryTec
//Fecha: 12/03/2022

int main()
{
    double A, B, C, a, b, c;

    cout << "Favor de insertar los valores de los angulos internos de tu triangulo para obtener los angulos externos\n";

    cout << "\nAngulo A = ";
    cin >> A;
    cout << "Angulo B = ";
    cin >> B;

    C = (180-A-B);

    a = 180 - A;
    b = 180 - B;
    c = 180 - C;

    cout << "\n --- Angulos internos ---\n";
    cout << "\nAngulo interno A = " << A;
    cout << "\nAngulo interno B = " << B;
    cout << "\nAngulo interno C = " << C << "\n";

    cout << "\n --- Angulos externos ---\n";
    cout << "\nAngulo externo a = " << a;
    cout << "\nAngulo externo b = " << b;
    cout << "\nAngulo externo c = " << c << "\n";
}