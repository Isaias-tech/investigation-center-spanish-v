#pragma once
#include <iostream>

// Si la clase Computadora no esta definida, definela.
#ifndef Computadora
/// <summary>
/// Esta clase se utiliza para definir la identidad de Computadoras, la cual es
/// la parte mas baja de un Cluster.
/// </summary>
class Computadora
{
private:
	int NumeroDePlaca;
	float FrecuenciaMinima;
	float AnchoDeBandaMaximo;
public:
	/// <summary>
	/// Este es un constructor vacio que asigna a los numeros el valor de -1.
	/// </summary>
	Computadora();
	/// <summary>
	/// Este es el constructor de la clase que asigna los valores ingresados por el usuario.
	/// </summary>
	/// <param name="_NumeroDePlaca">(int)</param>
	/// <param name="_FrecuenciaMinima">(float)</param>
	/// <param name="_AnchoDeBandaMaximo">(float)</param>
	Computadora(int _NumeroDePlaca, float _FrecuenciaMinima, float _AnchoDeBandaMaximo);

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad NumeroDePlaca.
	/// </summary>
	/// <returns>NumeroDePlaca (int)</returns>
	int ObtenerNumeroDePlaca();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad FrecuenciaMinima.
	/// </summary>
	/// <returns>FrecuenciaMinima (float)</returns>
	float ObtenerFrecuenciaMinima();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad AnchoDeBandaMaximo.
	/// </summary>
	/// <returns>AnchoDeBandaMaximo (float)</returns>
	float ObtenerAnchoDeBandaMaximo();
};
#endif // !Computadora
