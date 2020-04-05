#include "RandomNumber.h"
#include <cstdlib>
#include <iostream>

RandomNumber::RandomNumber(int m_minimo, int m_maximo)
{
	minimo = m_minimo;
	maximo = m_maximo;
}

void RandomNumber::CalcularValores()
{
	resultado = rand() % ((maximo + 1) - minimo) + minimo;

	std::cout<<"Adivina el numero generado: "<< std::endl;
	std::cin >> valor;


	while (valor!=resultado)
	{
		if (valor < resultado)
		{
			std::cout << "El numero es mayor, introduzca un nuevo valor: " << std::endl;
			std::cin >> valor;
		}
		else if (valor > resultado)
		{
			std::cout << "El numero es menor, introduzca un nuevo valor: " << std::endl;
			std::cin >> valor;
		}
	}
	
	if (valor == resultado)
	{
		std::cout << "Enhorabuena" << std::endl;
	}
}