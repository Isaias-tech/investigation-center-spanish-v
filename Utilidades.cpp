#include "Utilidades.h"

double validarEntradaNumerica(std::string pregunta)
{
	double respuesta;
	std::cout << pregunta;
	while (!(std::cin >> respuesta))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Debe de ingresar un valor numerico. \n" << pregunta;
	}
	return respuesta;
}

int validarOpcionSeleccionada(std::string pregunta, std::list<int> opciones)
{
	int respuesta = -1;
	int entrada = (int)validarEntradaNumerica(pregunta);
	while (respuesta == -1)
	{
		for (int o : opciones)
		{
			if (o == entrada)
			{
				respuesta = o;
				break;
			}
		}
		if (respuesta == -1)
		{
			std::cout << "Seleccione una de las opciones disponibles. \n";
			entrada = (int)validarEntradaNumerica(pregunta);
		}
	}
	return respuesta;
}

std::string obtenerEntradaCompleta(std::string pregunta)
{
	std::string respuesta;
	std::cout << pregunta;
	std::getline(std::cin >> std::ws, respuesta);
	return respuesta;
}