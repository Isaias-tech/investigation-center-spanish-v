# investigation-center-spanish-v

## Clúster de Computadoras
---
Un Centro de Investigación cuenta con un conjunto de computadoras para su explotación en los procesos de cálculos complejos y de procesamiento de grandes cantidades de información. 

Para cada computadora se conoce su **número de placa**, **frecuencia del micro y máximo ancho de banda** a que puede transmitir. Para una mejor explotación de las computadoras, las mismas se agrupan en forma de **Clúster**. Una sola computadora se considera como un Clúster compuesta por ella misma, es decir, formado por solo una computadora. A partir de aquí un nuevo clúster se puede formar conectando entre si **dos o más clúster**; esta conexión se puede efectuar de dos formas: **Punto a Punto** o en **Red Local**.

Cada Clúster tendrá un **identificador único**, una **capacidad de procesamiento CP** y una **capacidad de transmisión CT**. Estas últimas dos propiedades se calculan a partir de las propiedades del clúster que los componen:

 - Si el clúster está formado por solo una computadora su **CP** y su **CT** vendrán dados por la **frecuencia del micro y máximo ancho de banda** respectivamente.
 - Si el clúster está formado por varios clústeres y estos están conectados como:
	 - **Punto a Punto**: la **CP** es el promedio de las **CPs** de todos los clústeres componentes mientras que la **CT** es el máximo de las **CTs**.
	 - **Red Local**: la **CP** es la suma de todas las **CPs** de los clústeres que lo componen, al igual que la **CT** es la suma de las **CTs**.

Para mantener el control sobre el uso de los clústeres el centro le ha asignado a cada Investigador un **nick** y una **contraseña**. De cada Investigador el centro almacena además almacena su **nombre completo** y **categoría científica**. 

Cada investigador pertenece a un ***Proyecto de Investigación***, del cual se conoce el **nombre** y el **área de investigación**. En dependencia de las necesidades y complejidad del proyecto se le asignan clústeres con determinadas restricciones. 

 - A los Proyectos de **Menor Cuantía** solo se les asigna un clúster que no cuente con más de 5 computadoras. 
 - A los Proyectos de **Mediana Cuantía** se les pueden asignar hasta 3 clústeres número arbitrario de computadoras. 
 - Los Proyectos de **Alta Cuantía** no tienen restricciones para la asignación de clústeres. 

A la vez que un clúster es asignado a un proyecto, todos los investigadores del mismo pueden acceder al clúster.

El Centro precisa poder:
 1. Insertar una nueva computadora.
 2. Formar un nuevo clúster.
 3. Conocer la cantidad de clústeres con que cuenta.
 4. Dado el identificador de un Clúster saber:
	 - Cuántas maquinas tiene el mismo.
	 - Su capacidad de procesamiento.
	 - Su capacidad de transmisión.
 5. Dar de alta y baja a los Proyectos de Investigación.
 6. Dar de alta y baja a los Investigadores.
 7. Saber cuántos investigadores trabajan en el centro con una determinada categoría científica.
 8. Listar los nombres completos de los investigadores que trabajan en un proyecto dado.
 9. Dado el nick de un Investigador mostrar un listado de los números de placa de las computadoras a que tiene acceso.
 10. Saber cuántos proyectos tiene por categoría de cuantía: Menor, Mediana y Alta.
 11. Dado el nombre de un proyecto conocer con la capacidad total de procesamiento y la capacidad total de transmisión con que cuenta si se sabe que estas se calculan sumando las de todos los clústeres que le han sido asignados.
 12. Saber cuántos Proyectos de Menor cuantía explotan al máximo las posibilidades con que cuentan para el uso de los clústeres, esto es, los que tienen asignados exactamente 3 clústeres con 5 computadoras cada uno.
