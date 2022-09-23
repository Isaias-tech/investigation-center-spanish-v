#include "Investigador.h"

Investigador::Investigador()
{
	this->IDInvestigador = -1;
}

Investigador::Investigador(int _IDInvestigador, std::string _NombreUsuario, std::string _Password, std::string _Nombre, std::string _Apellidos, std::string _CategoriaCientifica)
{
	this->IDInvestigador = _IDInvestigador;
	this->NombreUsuario = _NombreUsuario;
	this->Password = _Password;
	this->Nombre = _Nombre;
	this->Apellidos = _Apellidos;
	this->CategoriaCientifica = _CategoriaCientifica;
}

int Investigador::ObtenerIDInvestigador()
{
	return IDInvestigador;
}

std::string Investigador::ObtenerNombreUsuario()
{
	return NombreUsuario;
}

std::string Investigador::ObtenerPassword()
{
	return Password;
}

std::string Investigador::ObtenerNombre()
{
	return Nombre;
}

std::string Investigador::ObtenerApellidos()
{
	return Apellidos;
}

std::string Investigador::ObtenerCategoriaCientifica()
{
	return CategoriaCientifica;
}

std::vector<int> Investigador::ObtenerAccesoAPlacas()
{
	return AccesoAPlacas;
}

void Investigador::AsignarAccesoAPlacas(int nuevaPlaca)
{
	this->AccesoAPlacas.push_back(nuevaPlaca);
}