#include "Computadora.h"

Computadora::Computadora()
{
	this->NumeroDePlaca = -1;
	this->FrecuenciaMinima = -1;
	this->AnchoDeBandaMaximo = -1;
}

Computadora::Computadora(int _NumeroDePlaca, float _FrecuenciaMinima, float _AnchoDeBandaMaximo)
{
	this->NumeroDePlaca = _NumeroDePlaca;
	this->FrecuenciaMinima = _FrecuenciaMinima;
	this->AnchoDeBandaMaximo = _AnchoDeBandaMaximo;
}

int Computadora::ObtenerNumeroDePlaca()
{
	return NumeroDePlaca;
}

float Computadora::ObtenerFrecuenciaMinima()
{
	return FrecuenciaMinima;
}

float Computadora::ObtenerAnchoDeBandaMaximo()
{
	return AnchoDeBandaMaximo;
}
