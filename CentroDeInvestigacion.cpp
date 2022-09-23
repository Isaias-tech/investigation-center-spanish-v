#include "CentroDeInvestigacion.h"

std::list<Cluster> CentroDeInvestigacion::ObtenerClusters()
{
	return Clusters;
}

void CentroDeInvestigacion::AgregarClusterComputadora()
{
	int IDCluster = 1;
	int NumeroDePlaca = (int)validarEntradaNumerica("Ingrese el numero de placa del computador: ");
	float FrecuenciaMinima = (float)validarEntradaNumerica("Ingrese la frecuencia minima a la que transmite: ");
	float AnchoDeBandaMaximo = (float)validarEntradaNumerica("Ingrese la frecuencia maxima a la que transmite: ");
	if (this->Clusters.size() > 0)
		IDCluster = this->Clusters.back().ObtenerIDCluster() + 1;
	Cluster* nuevoCluster = new Cluster(IDCluster, FrecuenciaMinima, AnchoDeBandaMaximo, NumeroDePlaca, FrecuenciaMinima, AnchoDeBandaMaximo);
	this->Clusters.push_back(*nuevoCluster);
	this->ClustersIDs.push_back(IDCluster);
}

void CentroDeInvestigacion::AgregarClusterC()
{
	int IDCluster = 1;
	std::list<int> clusterIDs;
	float CapacidadDeProcesamiento = 0;
	float CapacidadDeTransmicion = 0;
	int clusterAmount = 0;
	while (clusterAmount <= 1)
		clusterAmount = (int)validarEntradaNumerica("Cuantos Clusters desea agregar a este: (Minimo 2) ");

	std::cout << "El tipo de conneccion del cluster a crear es: " << (clusterAmount == 2 ? "Punto a Punto\n" : "Red Local\n");
	for (int i = 0; i < clusterAmount; i++)
		clusterIDs.push_back(validarOpcionSeleccionada("Ingrese el ID del cluster #" + std::to_string(i + 1) + ": ", this->ClustersIDs));

	for (int cid : clusterIDs)
	{
		for (Cluster c : Clusters)
		{
			if (cid == c.ObtenerIDCluster())
			{
				if (clusterIDs.size() == 2)
				{
					CapacidadDeProcesamiento += c.ObtenerCapacidadDeProcesamiento();
					CapacidadDeTransmicion = CapacidadDeTransmicion > c.ObtenerCapacidadDeTransmicion() ? CapacidadDeTransmicion : c.ObtenerCapacidadDeTransmicion();
					break;
				}
				else
				{
					CapacidadDeProcesamiento += c.ObtenerCapacidadDeProcesamiento();
					CapacidadDeTransmicion += c.ObtenerCapacidadDeTransmicion();
					break;
				}
			}
		}
	}
	if (this->Clusters.size() > 0)
		IDCluster = this->Clusters.back().ObtenerIDCluster() + 1;

	Cluster* nuevoCluster = new Cluster(IDCluster, CapacidadDeProcesamiento / 2, CapacidadDeTransmicion, clusterIDs);
	this->Clusters.push_back(*nuevoCluster);
	this->ClustersIDs.push_back(IDCluster);
}

void CentroDeInvestigacion::MostrarClusters(std::list<Cluster> paraMostrar)
{
	std::cout << "Lista de clusters: \n";
	for (Cluster c : paraMostrar)
	{
		std::cout << "--------------------------------------------\n";
		std::cout << "El ID es: " << c.ObtenerIDCluster() << std::endl;
		std::cout << "La capacidad de procesamiento es: " << c.ObtenerCapacidadDeProcesamiento() << std::endl;
		std::cout << "La capacidad de transmision es: " << c.ObtenerCapacidadDeTransmicion() << std::endl;
		if (c.ObtenerIDsDeClusters().size() == 1)
		{
			std::cout << "El numero de placa es: " << c.ObtenerNumeroDePlaca() << std::endl;
			std::cout << "La frecuencia minima es: " << c.ObtenerFrecuenciaMinima() << std::endl;
			std::cout << "El ancho de banda maximo es: " << c.ObtenerAnchoDeBandaMaximo() << std::endl;
		}
		else
		{
			std::cout << "El tipo de conneccion es: " << (c.ObtenerIDsDeClusters().size() == 2 ? "Punto a Punto\n" : "Red Local\n");
			std::cout << "El/los ID/s de la/s computadora/s: ";
			for (int p : c.ObtenerIDsDeClusters())
				std::cout << p << (p == c.ObtenerIDsDeClusters().back() ? "\n" : " - ");
		}
		std::cout << "--------------------------------------------\n";
	}
}

void CentroDeInvestigacion::MoscrarClusterPorID()
{
	int clusterID = validarOpcionSeleccionada("Ingrese el ID del cluster que desea mostrar: ", this->ClustersIDs);
	Cluster paraMostrar;
	for (Cluster c : this->Clusters)
	{
		if (c.ObtenerIDCluster() == clusterID)
		{
			this->MostrarClusters({ c });
			break;
		}
	}
}

std::vector<Investigador> CentroDeInvestigacion::ObtenerInvestigadores()
{
	return Investigadores;
}

void CentroDeInvestigacion::AgregarInvestigador()
{
	int _IDInvestigador = 1;
	std::string _NombreUsuario = obtenerEntradaCompleta("Ingrese el nombre de usuario: ");
	std::string _Password = obtenerEntradaCompleta("Ingrese el password: ");
	std::string _Nombre = obtenerEntradaCompleta("Ingrese el nombre/s: ");
	std::string _Apellidos = obtenerEntradaCompleta("Ingrese el apellido/s: ");
	std::string _CategoriaCientifica = obtenerEntradaCompleta("Ingrese la categoria cientifica: ");
	if (this->Investigadores.size() > 0)
		_IDInvestigador = this->Investigadores.back().ObtenerIDInvestigador() + 1;
	Investigador* nuevoInvestigador = new Investigador(_IDInvestigador, _NombreUsuario, _Password, _Nombre, _Apellidos, _CategoriaCientifica);
	this->Investigadores.push_back(*nuevoInvestigador);
	this->InvestigadoresIDs.push_back(_IDInvestigador);
}

void CentroDeInvestigacion::EliminarInvestigador()
{
	int _IDInvestigador = (int)validarEntradaNumerica("Ingrese el ID del investigador que desea eliminar: ");
	for (std::vector<Investigador>::iterator i = Investigadores.begin(); i != Investigadores.end(); i++)
	{
		if (i->ObtenerIDInvestigador() == _IDInvestigador)
		{
			this->Investigadores.erase(i);
			break;
		}
	}
}

void CentroDeInvestigacion::MostrarInvestigadoresPorCategoria()
{
	std::string categoria = obtenerEntradaCompleta("Ingrese la categoria por la que desea filtrar: ");
	std::vector<Investigador> investigadoresFiltrados;
	for (Investigador i : this->Investigadores)
	{
		if (i.ObtenerCategoriaCientifica() == categoria)
		{
			investigadoresFiltrados.push_back(i);
		}
	}
	MostrarInvestigadores(investigadoresFiltrados);
}

void CentroDeInvestigacion::MostrarInvestigadores(std::vector<Investigador> paraMostrar)
{
	std::cout << "Lista de investigadores: \n";
	for (Investigador i : paraMostrar)
	{
		std::cout << "--------------------------------------------\n";
		std::cout << "El id del investigador: " << i.ObtenerIDInvestigador() << std::endl;
		std::cout << "Nombre de usuario: " << i.ObtenerNombreUsuario() << std::endl;
		std::cout << "Nombre completo: " << i.ObtenerNombre() << " " << i.ObtenerApellidos() << std::endl;
		std::cout << "Categoria cientifica: " << i.ObtenerCategoriaCientifica() << std::endl;
		std::cout << "Clusters a los que se tiene acceso: \n";
		for (int p : i.ObtenerAccesoAPlacas())
		{
			std::cout << p << (p == i.ObtenerAccesoAPlacas().back() ? "\n" : " - ");
		}
		std::cout << "--------------------------------------------\n";
	}
}

void CentroDeInvestigacion::MostrarAccesoInvestigadoresID()
{
	int _IDInvestigador = (int)validarEntradaNumerica("Ingrese el ID del investigador: ");
	for (Investigador i : Investigadores)
	{
		if (i.ObtenerIDInvestigador() == _IDInvestigador)
		{
			MostrarInvestigadores({ i });
			break;
		}
	}
}

std::vector<Proyecto> CentroDeInvestigacion::ObtenerProyectos()
{
	return Proyectos;
}

void CentroDeInvestigacion::AgregarProyecto()
{
	std::vector<int> IDsInvestigadores;
	std::vector<int> IDsClusters;
	int _IDProyecto = 1;
	std::string CampoDeInvestigacion = obtenerEntradaCompleta("Ingrese el campo de investigacion: ");

	int CantidadClusters = (int)validarEntradaNumerica("Ingrese cuantos clusters desea agregar: ");
	for (int i = 0; i < CantidadClusters; i++)
		IDsClusters.push_back((int)validarOpcionSeleccionada("Ingrese el id del cluster #" + std::to_string(i + 1) + ": ", this->ClustersIDs));

	int _ComplejidadDelProyecto = 0;
	for (int ic : IDsClusters)
	{
		for (Cluster c : Clusters)
		{
			if (c.ObtenerIDCluster() == ic)
			{
				for (int a : c.ObtenerIDsDeClusters())
				{
					_ComplejidadDelProyecto += 1;
				}
				break;
			}
		}
	}

	int CantidadInvestigadores = (int)validarEntradaNumerica("Ingrese cuantos investigadores desea agregar: ");
	for (int i = 0; i < CantidadInvestigadores; i++)
		IDsInvestigadores.push_back(validarOpcionSeleccionada("Ingrese el id del investigador #" + std::to_string(i + 1) + ": ", this->InvestigadoresIDs));

	for (int id : IDsInvestigadores)
	{
		for (int i = 0; i < Investigadores.size(); i++)
		{
			if (Investigadores[i].ObtenerIDInvestigador() == id)
			{
				for (int c : IDsClusters)
					this->Investigadores[i].AsignarAccesoAPlacas(c);
				break;
			}
		}
	}

	if (this->Proyectos.size() > 0)
		_IDProyecto = this->Proyectos.back().ObtenerIDProyecto() + 1;
	Proyecto* nuevoProyecto = new Proyecto(_IDProyecto, CampoDeInvestigacion, IDsInvestigadores, IDsClusters, _ComplejidadDelProyecto);
	this->Proyectos.push_back(*nuevoProyecto);
	this->ProyectosIDs.push_back(_IDProyecto);
}

void CentroDeInvestigacion::EliminarProyecto()
{
	int _IDProyecto = (int)validarEntradaNumerica("Ingrese el ID del proyecto que desea eliminar: ");
	for (std::vector<Proyecto>::iterator i = Proyectos.begin(); i != Proyectos.end(); i++)
	{
		if (i->ObtenerIDProyecto() == _IDProyecto)
		{
			this->Proyectos.erase(i);
			break;
		}
	}
}

void CentroDeInvestigacion::MostrarProyectos(std::vector<Proyecto> paraMostrar)
{
	std::cout << "Lista de proyectos: \n";
	for (Proyecto p : paraMostrar)
	{
		std::cout << "--------------------------------------------\n";
		std::cout << "El id del proyecto: " << p.ObtenerIDProyecto() << std::endl;
		std::cout << "El campo de investigacion: " << p.ObtenerCampoDeInvestigacion() << std::endl;
		std::cout << "Investigadores que tienen acceso: " << std::endl;
		for (int i : p.ObtenerIDsInvestigadores())
		{
			std::cout << i << (i == p.ObtenerIDsInvestigadores().back() ? "\n" : " - ");
		}
		std::cout << "Cluster que forman parte del proyecto: " << std::endl;
		for (int c : p.ObtenerIDsClusters())
		{
			std::cout << c << (c == p.ObtenerIDsClusters().back() ? "\n" : " - ");
		}
		std::cout << "La complejidad del proyecto es: " <<
			(
				p.ObtenerComplejidadDelProyecto() > 15 ? "Alta cuantia" :
				p.ObtenerComplejidadDelProyecto() > 5 ? "Media cuantia" : "Baja cuantia"
				)
			<< std::endl;
		std::cout << "--------------------------------------------\n";
	}
}

void CentroDeInvestigacion::MostrarInvestigadoresDelProyecto()
{
	int IDProyecto = (int)validarEntradaNumerica("Ingrese el ID del proyecto: ");
	for (Proyecto p : Proyectos)
	{
		if (p.ObtenerIDProyecto() == IDProyecto)
		{
			for (int id : p.ObtenerIDsInvestigadores())
			{
				for (Investigador i : Investigadores)
				{
					if (id == i.ObtenerIDInvestigador())
					{
						MostrarInvestigadores({ i });
						break;
					}
				}
			}
			break;
		}
	}
}

void CentroDeInvestigacion::MostrarProyectosPorCuantia()
{
	int menor = 0, media = 0, maxima = 0;
	for (Proyecto p : this->Proyectos)
	{
		if (p.ObtenerComplejidadDelProyecto() == 1)
			maxima += 1;
		else if (p.ObtenerComplejidadDelProyecto() == 2)
			media += 1;
		else if (p.ObtenerComplejidadDelProyecto() == 3)
			menor += 1;
	}
	std::cout << "Cantidad de projectos por categoria: " << "\n\t Alta: " << maxima << "\n\t Media: " << media << "\n\t Menor: " << menor << '\n';
}

void CentroDeInvestigacion::ProyectosRecursosMaximosMedia()
{
	std::cout << "Proyectos de cuantia media que explotan al maximo su capacidad: ";
	for (Proyecto p : Proyectos)
	{
		if (p.ObtenerComplejidadDelProyecto() == 15)
		{
			MostrarProyectos({ p });
		}
	}
}
