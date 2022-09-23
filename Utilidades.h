#pragma once
#include <iostream>
// Esta libreria se utiliza para importar listas, las se definen como:
// Contenedor de secuencias integrado con STL(Standard Template Library)
// que permite la asignación de memoria no contigua.
#include <list>
// La libreria string es importada para el uso de funciones como getline()
// la cual sirve para obtener toda la linea incluyendo el espacio en un input (cin)
#include <string>
// La libreria limits es importada para conocer el limite maximo de un tipo numerico
// y se utiliza en conjunto con otras para validar que la entrada sea un numero
#include <limits>

// Si la funcion validarEntradaNumerica no esta definida definela.
#ifndef validarEntradaNumerica
/// <summary>
/// Esta funcion recibe una pregunta que se le hara al usuario y esta es utilizada
/// para preguntar al usuario que data se requiere y de esta manera validar que la
/// data ingresada corresponda con aquella que se requiere.
/// </summary>
/// <param name="pregunta">Recibe una pregunta de tipo (string) para hacerle al usuario.</param>
/// <returns>Un (double) que luego puede ser convertido a (int) o (float) de ser necesario.</returns>
double validarEntradaNumerica(std::string pregunta);
#endif // !validarEntradaNumerica

// Si la funcion validarOpcionSeleccionada no esta definida definela.
#ifndef validarOpcionSeleccionada
/// <summary>
/// Esta funcion utilizando la funcion "validarEntradaNumerica()", 
/// recibeibe una pregunta que se le hara al usuario y esta es utilizada
/// para preguntar al usuario que data se requiere y de esta manera validar que la
/// data ingresada corresponda con aquella que se requiere limitandola a la lista
/// de opciones disponibles.
/// </summary>
/// <param name="pregunta">Recibe una pregunta de tipo (string) para hacerle al usuario.</param>
/// <param name="opciones">Recibe una lista de numeros que sirven como la lista de opciones que pueden ser seleccionadas.</param>
/// <returns>Un numero entero (int) el cual es la opcion seleccionada.</returns>
int validarOpcionSeleccionada(std::string pregunta, std::list<int> opciones);
#endif // !validarOpcionSeleccionada

// Si la funcion obtenerEntradaCompleta no esta definida definela.
#ifndef obtenerEntradaCompleta
/// <summary>
/// Esta funcion recibe una pregunta a hacer al usuario, luego de hacer la pregunta
/// le permite al usuario ingresar valores, estos pueden contener espacios lo que da
/// una mayor posibilidad de que se puede ingresar.
/// </summary>
/// <param name="pregunta">Recibe una pregunta de tipo (string) para hacerle al usuario.</param>
/// <returns>Una cadena (string) que contienen lo escrito por el usuario.</returns>
std::string obtenerEntradaCompleta(std::string pregunta);
#endif // !obtenerEntradaCompleta


