#include <iostream>
#include "RandomNumber.h"

int main()
{
	int minimo, maximo;
	

	std::cout << "Introduzca el valor minimo del numero: " << std::endl;
	std::cin >> minimo;

	std::cout << "Introduzca el valor maximo del numero: " << std::endl;
	std::cin >> maximo;

	RandomNumber numeroRandom(minimo,maximo);

	numeroRandom.CalcularValores();

	system("pause");

	return 0;

}