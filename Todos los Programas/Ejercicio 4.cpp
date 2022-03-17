#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
Cap. 3 Ej. 8: Encontrar el área de cualquier rectángulo on la fórmula Area = lw,
donde l es la longitud y w es el ancho.
*/

//Autor: VKoryTec
//Fecha: 13/03/2022

int main()
{
    double l, w, Area;

    cout << "Favor de insertar los datos de su rectangulo para obtener el area (l = longitud y w = ancho)\n";

    cout << "\nl = ";
    cin >> l;
    cout << "w = ";
    cin >> w;

    Area = (l * w);
    
    cout << "\n --- Resultado ---\n";
    cout << "\nLongitud = " << l;
    cout << "\nAncho = " << w;
    cout << "\nArea = " << Area << "\n";
}