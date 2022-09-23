#pragma once
#include <iostream>
#include <vector>

// Si la clase Cluster no esta definida, definela.
#ifndef Investigador
/// <summary>
/// <para>Esta clase se utiliza para definir la identidad de un Investigador y de esta manera manejar y/o editar ciertas propiedades.
/// </summary>
class Investigador
{
private:
	int IDInvestigador;
	std::string NombreUsuario;
	std::string Password;
	std::string Nombre;
	std::string Apellidos;
	std::string CategoriaCientifica;
	std::vector<int> AccesoAPlacas;
public:
	/// <summary>
	/// Este es un constructor vacio que asigna a los numeros el valor de -1.
	/// </summary>
	Investigador();

	/// <summary>
	/// Este constructor inicializa la data en vace a la informacion recibida.
	/// </summary>
	/// <param name="_IDInvestigador"><code>int</code></param>
	/// <param name="_NombreUsuario"><code>std::string</code></param>
	/// <param name="_Password"><code>std::string</code></param>
	/// <param name="_Nombre"><code>std::string</code></param>
	/// <param name="_Apellidos"><code>std::string</code></param>
	/// <param name="_CategoriaCientifica"><code>std::string</code></param>
	/// <param name="_AccesoAPlacas"><code>std::string</code></param>
	Investigador(int _IDInvestigador, std::string _NombreUsuario, std::string _Password, std::string _Nombre, std::string _Apellidos, std::string _CategoriaCientifica);

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad IDInvestigador.
	/// </summary>
	/// <returns>(int) IDInvestigador</returns>
	int ObtenerIDInvestigador();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad NombreUsuario.
	/// </summary>
	/// <returns>(std::string) NombreUsuario</returns>
	std::string ObtenerNombreUsuario();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Password.
	/// </summary>
	/// <returns>(std::string) Password</returns>
	std::string ObtenerPassword();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Nombre.
	/// </summary>
	/// <returns>(std::string) Nombre</returns>
	std::string ObtenerNombre();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad Apellidos.
	/// </summary>
	/// <returns>(std::string) Apellidos</returns>
	std::string ObtenerApellidos();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad CategoriaCientifica.
	/// </summary>
	/// <returns>(std::string) CategoriaCientifica</returns>
	std::string ObtenerCategoriaCientifica();

	/// <summary>
	/// Esta es la funcion getter o obtener de la propiedad AccesoAPlacas.
	/// </summary>
	/// <returns>(std::vector int) AccesoAPlacas</returns>
	std::vector<int> ObtenerAccesoAPlacas();

	/// <summary>
	/// Esta funcion toma un numero de placa y lo agrega a la lista que el investigador tiene acceso a.
	/// </summary>
	/// <param name="nuevaPlaca"><code>int</code></param>
	void AsignarAccesoAPlacas(int nuevaPlaca);
};
#endif // !Investigador
