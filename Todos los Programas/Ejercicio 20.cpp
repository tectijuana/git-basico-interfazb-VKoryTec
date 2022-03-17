#include <iostream>
#include <string>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif
using namespace std;

/*
Cap. 4 Ej. 1: Pasar grados a radianes utilizando multiplos de 10, desde 0 hasta 360 grados
*/

//Autor: VKoryTec
//Fecha: 15/03/2022

int main()
{
	int grad;

	for (grad = 0; grad <= 360; grad = grad+10)
	{
		if (grad % 10 == 0)
			cout <<  grad << " Grados = " << (grad * MPI) / 180 << " radianes\n";
	}
}