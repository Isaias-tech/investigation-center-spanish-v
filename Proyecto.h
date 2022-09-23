#pragma once
#include <iostream>
#include <vector>
#include "Utilidades.h"

// Si la clase Proyecto no esta definida, definela.
#ifndef Proyecto
/// <summary>
/// <para>Esta clase se utiliza para definir la identidad de un nuevo proyectos.</para>
/// </summary>
class Proyecto
{
private:
	int IDProyecto;
	std::string CampoDeInvestigacion;
	std::vector<int> IDsInvestigadores;
	std::vector<int> IDsClusters;
	int ComplejidadDelProyecto;
public:
	/// <summary>
	/// Este es un constructor vacio que asigna a los numeros el valor de -1.
	/// </summary>
	Proyecto();

	/// <summary>
	/// Este es el constructor de la clase que asigna los valores ingresados por el usuario. 
	/// </summary>
	/// <param name="_IDProyecto">(int)</param>
	/// <param name="_CampoDeInvestigacion">(std::string)</param>
	/// <param name="_IDsInvestigadores">(std::vector int)</param>
	/// <param name="_IDsClusters">(std::vector int)</param>
	/// <param name="_ComplejidadDelProyecto">(int)</param>
	Proyecto(int _IDProyecto, std::string _CampoDeInvestigacion, std::vector<int> _IDsInvestigadores, std::vector<int> _IDsClusters, int _ComplejidadDelProyecto);

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad IDProyecto.
	/// </summary>
	/// <returns>(int) IDProyecto</returns>
	int ObtenerIDProyecto();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad CampoDeInvestigacion.
	/// </summary>
	/// <returns>(std::string) CampoDeInvestigacion</returns>
	std::string ObtenerCampoDeInvestigacion();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad IDsInvestigadores.
	/// </summary>
	/// <returns>(std::vector int) IDsInvestigadores</returns>
	std::vector<int> ObtenerIDsInvestigadores();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad IDsClusters.
	/// </summary>
	/// <returns>(std::vector int) IDsClusters</returns>
	std::vector<int> ObtenerIDsClusters();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad ComplejidadDelProyecto.
	/// </summary>
	/// <returns>(int) ComplejidadDelProyecto</returns>
	int ObtenerComplejidadDelProyecto();

	/// <summary>
	/// Esta funcion es utilizada para eliminar un investigador usando el id como referencia.
	/// </summary>
	void EliminarIDInvestigador();
};
#endif // !Proyecto

