#pragma once
#include <iostream>
// Esta libreria se utiliza para importar listas, las se definen como:
// Contenedor de secuencias integrado con STL(Standard Template Library)
// que permite la asignación de memoria no contigua.
#include <list>
// Aqui se incluye la clase Computadora de la cual la clase Cluster sera hijo
#include "Computadora.h"

// Si la clase Cluster no esta definida, definela.
#ifndef Cluster
/// <summary>
/// <para>La clase Cluster se utiliza para definir la identidad de un
/// Cluster ya sea uno compuesto por una unica computadora, o para un
/// grupo de estas.</para>
/// <para>Esta clase hereda de la clase Computadora, aun asi no todos 
/// los constructores heredan de la misma</para>
/// </summary>
class Cluster : public Computadora
{
private:
	int IDCluster;
	float CapacidadDeProcesamiento;
	float CapacidadDeTransmicion;
	std::list<int> IDsDeClusters;
public:
	/// <summary>
	/// Este es un constructor vacio que asigna a los numeros el valor de -1.
	/// </summary>
	Cluster();
	/// <summary>
	/// Este es el constructor de la clase que asigna los valores ingresados por el usuario. 
	/// Este constructor se utiliza para generar una lista de las placas de computadora que pertenecen al Cluster.
	/// </summary>
	/// <param name="_IDCluster">(int)</param>
	/// <param name="_CapacidadDeProcesamiento">(float)</param>
	/// <param name="_CapacidadDeTransmicion">(float)</param>
	/// <param name="_PlacasDeComputadoras">(list(int))</param>
	Cluster(int _IDCluster, float _CapacidadDeProcesamiento, float _CapacidadDeTransmicion, std::list<int> _IDsDeClusters);
	/// <summary>
	/// Este es el constructor de la clase que asigna los valores ingresados por el usuario.
	/// Este constructor se utiliza para generar un cluster con una computadora.
	/// </summary>
	/// <param name="_IDCluster">(int)</param>
	/// <param name="_CapacidadDeProcesamiento">(float)</param>
	/// <param name="_CapacidadDeTransmicion">(flaot)</param>
	/// <param name="_NumeroDePlaca">(int)</param>
	/// <param name="_FrecuenciaMinima">(float)</param>
	/// <param name="_AnchoDeBandaMaximo">(float)</param>
	Cluster(int _IDCluster, float _CapacidadDeProcesamiento, float _CapacidadDeTransmicion, int _NumeroDePlaca, float _FrecuenciaMinima, float _AnchoDeBandaMaximo);

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad IDCluster.
	/// </summary>
	/// <returns>(int) IDCluster</returns>
	int ObtenerIDCluster();
	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad CapacidadDeProcesamiento.
	/// </summary>
	/// <returns>(float) CapacidadDeProcesamiento</returns>
	float ObtenerCapacidadDeProcesamiento();
	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad CapacidadDeTransmicion.
	/// </summary>
	/// <returns>(float) CapacidadDeTransmicion</returns>
	float ObtenerCapacidadDeTransmicion();
	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad PlacasDeComputadoras.
	/// </summary>
	/// <returns>(list(int)) PlacasDeComputadoras</returns>
	std::list<int> ObtenerIDsDeClusters();
};
#endif // !Cluster

