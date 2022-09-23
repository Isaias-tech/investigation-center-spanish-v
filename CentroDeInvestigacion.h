#pragma once
// Esta libreria se utiliza para importar listas, las se definen como:
// Contenedor de secuencias integrado con STL(Standard Template Library)
// que permite la asignación de memoria no contigua.
#include <list>
#include <vector>
// Aqui se importan las utilidades y clases definidas en los diferentes archivos.
#include "Cluster.h"
#include "Investigador.h"
#include "Proyecto.h"
#include "Utilidades.h"

// Si la clase CentroDeInvestigacion no esta definida, definela.
#ifndef CentroDeInvestigacion
/// <summary>
/// Esta es la clase controladora la cual se encargara de manejar y mostrar la data incertada por el usuario.
/// </summary>
class CentroDeInvestigacion
{
private:
	std::list<Cluster> Clusters;
	std::list<int> ClustersIDs;
	std::vector<Investigador> Investigadores;
	std::list<int> InvestigadoresIDs;
	std::vector<Proyecto> Proyectos;
	std::list<int> ProyectosIDs;
public:
	CentroDeInvestigacion() {};

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Clusters.
	/// </summary>
	/// <returns>(list(Cluster))</returns>
	std::list<Cluster> ObtenerClusters();

	/// <summary>
	/// En esta funcion se generara un nuevo Cluster conformado por una sola Computadora.
	/// </summary>
	void AgregarClusterComputadora();

	/// <summary>
	/// En esta funcion se generara un nuevo Cluster conformado por varios Clusters.
	/// </summary>
	void AgregarClusterC();

	/// <summary>
	/// El principal objetivo de esta funcion es mostrar el ID, CP y CT de los Clusters, 
	/// pero tambien muestra la demas data dependiendo el tipo de cluster.
	/// </summary>
	void MostrarClusters(std::list<Cluster> paraMostrar);

	/// <summary>
	/// Esta funcion toma un id y muestra la informacion de este, utilizando <code>MostrarClusters(Cluster);</code>
	/// </summary>
	void MoscrarClusterPorID();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Investigadores.
	/// </summary>
	/// <returns>(vector(Investigador))</returns>
	std::vector<Investigador> ObtenerInvestigadores();

	/// <summary>
	/// En esta funcion se genera un nuevo investigador.
	/// </summary>
	void AgregarInvestigador();

	/// <summary>
	/// En esta funcion se elimina un investigador basandose en el id.
	/// </summary>
	void EliminarInvestigador();

	/// <summary>
	/// En esta funcion genera una lista de investigadores que forman parte de una categoria y lo envia a la funcion MostrarInvestigadores.
	/// </summary>
	void MostrarInvestigadoresPorCategoria();

	/// <summary>
	/// En esta funcion recibe una lista de investigadores y la muestra en terminal.
	/// </summary>
	void MostrarInvestigadores(std::vector<Investigador> paraMostrar);

	/// <summary>
	/// En esta funcion genera una lista de investigadores que forman parte de una categoria y lo envia a la funcion MostrarInvestigadores.
	/// </summary>
	void MostrarAccesoInvestigadoresID();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Proyectos.
	/// </summary>
	/// <returns>(vector(Investigador))</returns>
	std::vector<Proyecto> ObtenerProyectos();

	/// <summary>
	/// En esta funcion se genera un nuevo proyecto.
	/// </summary>
	void AgregarProyecto();

	/// <summary>
	/// En esta funcion se elimina un proyecto basandose en el id.
	/// </summary>
	void EliminarProyecto();

	/// <summary>
	/// En esta funcion recibe una lista de proyecto y la muestra en terminal.
	/// </summary>
	void MostrarProyectos(std::vector<Proyecto> paraMostrar);

	/// <summary>
	/// Esta funcion muestra una lista de investigadores que forman parte de un proyecto.
	/// </summary>
	void MostrarInvestigadoresDelProyecto();

	/// <summary>
	/// Esta funcion se encarga de mostrar cuantos proyectos hay en cada categoria.
	/// </summary>
	void MostrarProyectosPorCuantia();

	/// <summary>
	/// Esta funcion se encarga de imprimir todos los proyectos cuya cuantia es media maxima.
	/// </summary>
	void ProyectosRecursosMaximosMedia();
};
#endif // !CentroDeInvestigacion
