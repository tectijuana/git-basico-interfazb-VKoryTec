#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 12: La suma de los ángulos de un triangulo es 180°. Introducir dos ángulos A y B y calcular el valor del tercer ángulo C.
El programa debe verificar para un tercer valor que es cero, negativo y si cualquiera de ellos existe, mostrar en pantalla el mensaje "NO ES UN TRIANGULO".
*/

//Autor: VKoryTec
//Fecha: 12/03/2022

int main()
{
    double A, B, C;

    cout << "Favor de insertar los valores de los dos angulos de tu triangulo con los que se obtendra el tercer angulo faltante\n";

    cout << "\n1er angulo = ";
    cin >> A;
    cout << "2do angulo = ";
    cin >> B;

    C = (180 - A - B);

    if (C <= 0)
        cout << "\nNO ES UN TRIANGULO\n";
    else
    {
        cout << "\n --- Angulos ---\n";
        cout << "\nAngulo A = " << A;
        cout << "\nAngulo B = " << B;
        cout << "\nAngulo C = " << C << " <--\n";
    }
}