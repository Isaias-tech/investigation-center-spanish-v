#include <iostream>
// Esta libreria se utiliza para importar listas, las se definen como:
// Contenedor de secuencias integrado con STL(Standard Template Library)
// que permite la asignación de memoria no contigua.
#include <list>
// Aqui se importan las utilidades y clases definidas en los diferentes archivos.
#include "Utilidades.h"
#include "CentroDeInvestigacion.h"

// Aqui se crea el objeto que representara al Centro de investigacion.
CentroDeInvestigacion* CDI = new CentroDeInvestigacion();

/// <summary>
/// Esta funcion muestra un menu de acciones disponibles y le insta al usuario a seleccionar una de las disponibles.
/// </summary>
/// <returns>Un numero (int) el cual representa la accion a realizar</returns>	
int menu()
{
	std::cout << "Seleccione lo que desea realizar: \n";
	std::cout << '\t' << "[1] Agregar una nueva computadora. \n";
	std::cout << '\t' << "[2] Formar un nuevo cluster. \n";
	std::cout << '\t' << "[3] Mostrar clusters. \n";
	std::cout << '\t' << "[4] Cantidad de clusters registrados. \n";
	std::cout << '\t' << "[5] Informacion de cluster por ID. \n";
	std::cout << '\t' << "[6] Agregar un nuevo investigador. \n";
	std::cout << '\t' << "[7] Eliminar investigador por ID. \n";
	std::cout << '\t' << "[8] Mostrar investigadores. \n";
	std::cout << '\t' << "[9] Mostrar investigadores que pertenecen a una categoria cientificia. \n";
	std::cout << '\t' << "[10] Mostrar informacion de los investigadores. (Clusters a los que tienen acceso) \n";
	std::cout << '\t' << "[11] Agregar un nuevo proyecto. \n";
	std::cout << '\t' << "[12] Eliminar proyecto por ID. \n";
	std::cout << '\t' << "[13] Mostrar proyectos. \n";
	std::cout << '\t' << "[14] Mostrar investigadores que pertenecen a un proyecto. \n";
	std::cout << '\t' << "[15] Cuantos proyectos hay en cada categoria de cuantia. \n";
	std::cout << '\t' << "[16] Proyectos de media cuantia que explotan al maximo sus recursos. \n";
	std::cout << '\t' << "[17] Salir.\n";
	return validarOpcionSeleccionada("==> ", { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17 });
}

/// <summary>
/// Esta funcion se encarga de ejecutar la accion seleccionada por el usuario en el menu.
/// </summary>
/// <param name="seleccion">Este es un numero (int) que indica cual es la opcion seleccionada en el menu.</param>
/// <returns>Un numero que indica al programa si continua o no.</returns>
int trabajador(int seleccion)
{
	switch (seleccion)
	{
	case 1:
		system("cls");
		CDI->AgregarClusterComputadora();
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 2:
		system("cls");
		if (CDI->ObtenerClusters().size() > 1) CDI->AgregarClusterC();
		else std::cout << "No hay suficientes computadoras registradas para generar un nuevo cluster.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 3:
		system("cls");
		if (CDI->ObtenerClusters().size() > 0) CDI->MostrarClusters(CDI->ObtenerClusters());
		else std::cout << "No hay clusters para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 4:
		system("cls");
		std::cout << "En la actualidad hay una cantidad de " << std::to_string(CDI->ObtenerClusters().size()) << " cluster/s registrado/s.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 5:
		system("cls");
		if (CDI->ObtenerClusters().size() > 0) CDI->MoscrarClusterPorID();
		else std::cout << "No hay clusters para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 6:
		system("cls");
		CDI->AgregarInvestigador();
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 7:
		system("cls");
		if (CDI->ObtenerInvestigadores().size() > 0) CDI->EliminarInvestigador();
		else std::cout << "No hay investigadores para eliminar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 8:
		system("cls");
		if (CDI->ObtenerInvestigadores().size() > 0) CDI->MostrarInvestigadores(CDI->ObtenerInvestigadores());
		else std::cout << "No hay investigadores para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 9:
		system("cls");
		if (CDI->ObtenerInvestigadores().size() > 0) CDI->MostrarInvestigadoresPorCategoria();
		else std::cout << "No hay investigadores para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 10:
		system("cls");
		if (CDI->ObtenerInvestigadores().size() > 0) CDI->MostrarAccesoInvestigadoresID();
		else std::cout << "No hay investigadores para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 11:
		system("cls");
		if (CDI->ObtenerClusters().size() > 0 && CDI->ObtenerInvestigadores().size() > 0) CDI->AgregarProyecto();
		else std::cout << "No hay data suficiente para generar un proyecto.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 12:
		system("cls");
		if (CDI->ObtenerProyectos().size() > 0) CDI->EliminarProyecto();
		else std::cout << "No hay proyectos para eliminar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 13:
		system("cls");
		if (CDI->ObtenerProyectos().size() > 0) CDI->MostrarProyectos(CDI->ObtenerProyectos());
		else std::cout << "No hay proyectos para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 14:
		system("cls");
		if (CDI->ObtenerProyectos().size() > 0) CDI->MostrarInvestigadoresDelProyecto();
		else std::cout << "No hay proyectos para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 15:
		system("cls");
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 16:
		system("cls");
		if (CDI->ObtenerProyectos().size() > 0) CDI->ProyectosRecursosMaximosMedia();
		else std::cout << "No hay proyectos para mostrar.\n";
		return validarOpcionSeleccionada("\nContinuar? \n[1] Si \n==> ", { 1 });
		break;
	case 17:
		system("cls");
		return validarOpcionSeleccionada("Seguro que desea salir del programa? \n[1] Si \n[2] No \n==> ", { 1, 2 }) == 1 ? -1 : 0;
		break;
	default:
		break;
	}
}

/// <summary>
/// <para>Esta es la funcion principal, la cual se ejecuta al principio del programa.</para>
/// <para>Pero la unica funcion que tiene es matener el programa vivo mientras el usuario asi lo desee.</para>
/// </summary>
int main()
{
	int continuar = 0;
	do
	{
		system("cls");
		continuar = trabajador(menu());
	} while (continuar != -1);
	return 0;
}
