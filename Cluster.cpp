#include "Cluster.h"

Cluster::Cluster(): Computadora()
{
	this->IDCluster = -1;
	this->CapacidadDeTransmicion = -1;
	this->CapacidadDeProcesamiento = -1;
}

Cluster::Cluster(int _IDCluster, float _CapacidadDeProcesamiento, float _CapacidadDeTransmicion, std::list<int> _IDsDeClusters)
{
	this->IDCluster = _IDCluster;
	this->CapacidadDeTransmicion = _CapacidadDeTransmicion;
	this->CapacidadDeProcesamiento = _CapacidadDeProcesamiento;
	this->IDsDeClusters = _IDsDeClusters;
}

Cluster::Cluster(int _IDCluster, float _CapacidadDeProcesamiento, float _CapacidadDeTransmicion, int _IDsDeClusters, float _FrecuenciaMinima, float _AnchoDeBandaMaximo): Computadora(_IDsDeClusters, _FrecuenciaMinima, _AnchoDeBandaMaximo)
{
	this->IDCluster = _IDCluster;
	this->CapacidadDeTransmicion = _CapacidadDeTransmicion;
	this->CapacidadDeProcesamiento = _CapacidadDeProcesamiento;
	this->IDsDeClusters.push_back(_IDsDeClusters);
}

int Cluster::ObtenerIDCluster()
{
	return IDCluster;
}

float Cluster::ObtenerCapacidadDeTransmicion()
{
	return CapacidadDeTransmicion;
}

float Cluster::ObtenerCapacidadDeProcesamiento()
{
	return CapacidadDeProcesamiento;
}

std::list<int> Cluster::ObtenerIDsDeClusters()
{
	return IDsDeClusters;
}
