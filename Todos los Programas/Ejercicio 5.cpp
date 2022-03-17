#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 9: Encontrar el tercer lado de un triangulo rectangulo mediante el teorema de Pitagoras.
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
    double A, B, C;
    int X=0;

    while (X != 1 && X != 2)
    {
    system("cls");
    cout << "Usted posee dos catetos o un cateto y una hipotenusa? ( [1] = dos catetos; [2] = una hipotenusa y un cateto )";
    cout << "\nOpcion: ";
    cin >> X;

        switch (X)
        {
        case (1):
            cout << "\nFavor de insertar los valores de los lados de tu triangulo rectangulo con los que se obtendra el lado faltante\n";

            cout << "\n1er cateto = ";
            cin >> A;
            cout << "2do cateto = ";
            cin >> B;

            C = sqrt(cuadrado(A) + cuadrado(B));
            break;

        case (2):
            cout << "\nFavor de insertar los valores de los lados de tu triangulo rectangulo con los que se obtendra el lado faltante\n";

            cout << "\nCateto = ";
            cin >> A;
            cout << "Hipotenusa = ";
            cin >> B;

            C = sqrt(cuadrado(B) - cuadrado(A));
            break;

        default:
            cout << "\nFavor de ingresar una opcion valida\n";
            system("pause");
            break;
        }
    }

    cout << "\n --- lados ---\n";
    cout << "\nLado A = " << A;
    cout << "\nLado B = " << B;
    cout << "\nLado C = " << C << "\n";
}