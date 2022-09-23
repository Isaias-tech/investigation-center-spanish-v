#include "Proyecto.h"

Proyecto::Proyecto()
{
	this->IDProyecto = -1;
	this->ComplejidadDelProyecto = -1;
}

Proyecto::Proyecto(int _IDProyecto, std::string _CampoDeInvestigacion, std::vector<int> _IDsInvestigadores, std::vector<int> _IDsClusters, int _ComplejidadDelProyecto)
{
	this->IDProyecto = _IDProyecto;
	this->CampoDeInvestigacion = _CampoDeInvestigacion;
	this->IDsInvestigadores = _IDsInvestigadores;
	this->IDsClusters = _IDsClusters;
	this->ComplejidadDelProyecto = _ComplejidadDelProyecto;
}

int Proyecto::ObtenerIDProyecto()
{
	return IDProyecto;
}

std::string Proyecto::ObtenerCampoDeInvestigacion()
{
	return CampoDeInvestigacion;
}

std::vector<int> Proyecto::ObtenerIDsInvestigadores()
{
	return IDsInvestigadores;
}

std::vector<int> Proyecto::ObtenerIDsClusters()
{
	return IDsClusters;
}

int Proyecto::ObtenerComplejidadDelProyecto()
{
	return ComplejidadDelProyecto;
}

void Proyecto::EliminarIDInvestigador()
{
	int _IDInvestigador = validarEntradaNumerica("Ingrese el ID del investigador que desea eliminar: ");
	for (std::vector<int>::iterator i = this->IDsInvestigadores.begin(); i != this->IDsInvestigadores.end(); i++)
	{
		if (*i == _IDInvestigador)
		{
			this->IDsInvestigadores.erase(i);
			break;
		}
	}
}
