/*

Escriba un programa en C++ que imprima todos los múltiplos de 3, mayores que cero,
que sean menores que un número N (positivo) que será ingresado como dato.
Ejemplo:
Ingrese N: 25
Los múltiplos son: 3 6 9 12 15 18 21 24

*/
#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

int ingresenum()

{
	int num;
	cout << "ingrese numero: "; cin >> num;
	while (num <= 0)
	{cout << "ingrese numero: "; cin >> num;}
	return num;
}


void generamultiplos(int num)

{
	int i = 1;
		do
	{
		if(i%3==0)
		cout <<i << "\t";
		i++;
	}
	while (i<=num);
}
int main()
{
	int n;
	n = ingresenum();
	cout << "la serie: ";
	generamultiplos(n);
	_getch();
}



