
*Este proyecto ha sido creado como parte del currículo de 42 por jpedraza.*

## Descripción
Libft es el proyecto inicial del cursus de 42, cuyo objetivo es programar una librería en C que contenga funciones de propósito general que podrán ser utilizadas en otros programas. El proyecto consiste en recrear funciones de la librería estándar (libc), así como implementar funciones adicionales que facilitan la manipulación de cadenas, memoria y listas enlazadas.

## Instrucciones

### Compilación
Para compilar la librería, se debe utilizar el Makefile incluido, el cual compila los archivos fuente con las flags -Wall, -Werror y -Wextra.

1. Generar la librería (libft.a):
   make

### Limpieza
- Para eliminar los archivos objeto (.o): make clean
- Para eliminar los objetos y el archivo de la librería: make fclean
- Para recompilar todo desde cero: make re

## Recursos
- **man de C:** Se han consultado las páginas del manual de las funciones originales de la libc para asegurar que el comportamiento y los prototipos sean idénticos.
- **Google:** Utilizado para buscar definiciones más amplias sobre conceptos técnicos y gestión de punteros.
- **Uso de IA:** La inteligencia artificial la he utilizado en momentos específicos para entender mejor la lógica de ciertas funciones complejas y principalmente, para la redacción y estructuración técnica de este archivo README.

## Descripción detallada de la librería

### Parte 1: Funciones de libc
Reimplementaciones de funciones estándar para la manipulación de memoria y strings:

- **Clasificación de caracteres:**
	- **ft_isalpha:** Comprueba si un carácter es alfabético.
	- **ft_isdigit:** Comprueba si es un dígito (0-9).
	- **ft_isalnum:** Comprueba si es alfanumérico.
	- **ft_isascii:** Comprueba si pertenece al conjunto de caracteres ASCII.
	- **ft_isprint:** Comprueba si es un carácter imprimible.

- **Conversión de caracteres:**
	- **ft_toupper:** Convierte una letra minúscula a mayúscula.
	- **ft_tolower:** Convierte una letra mayúscula a minúscula.

- **Gestión de memoria:**
	- **ft_memset:** Llena un bloque de memoria con un byte específico.
	- **ft_bzero:** Pone a cero (nulos) un bloque de memoria.
	- **ft_memcpy:** Copia un área de memoria a otra.
	- **ft_memmove:** Copia memoria de forma segura incluso si las áreas se solapan.
	- **ft_memchr:** Busca un carácter específico dentro de un bloque de memoria.
	- **ft_memcmp:** Compara dos bloques de memoria.

- **Manipulación de strings:**
	- **ft_strlen:** Calcula la longitud de una cadena.
	- **ft_strlcpy:** Copia una cadena a un tamaño de buffer específico de forma segura.
	- **ft_strlcat:** Concatena una cadena a otra asegurando el tamaño del buffer.
	- **ft_strchr:** Localiza la primera aparición de un carácter en una cadena.
	- **ft_strrchr:** Localiza la última aparición de un carácter en una cadena.
	- **ft_strncmp:** Compara dos cadenas hasta un número determinado de caracteres.
	- **ft_strnstr:** Localiza una subcadena dentro de otra cadena con límite de búsqueda.
	- **ft_atoi:** Convierte una cadena de caracteres que representa un número en un entero (int).

- **Asignación dinámica:**
	- **ft_calloc:** Reserva memoria para un array y la inicializa a cero.
	- **ft_strdup:** Duplica una cadena reservando nueva memoria.

Siguiendo fielmente las definiciones de sus respectivos manuales.

### Parte 2: Funciones adicionales
- Funciones de utilidad que expanden las capacidades de la librería estándar:
	- **ft_substr:** Extrae una sección de una cadena.
	- **ft_strjoin:** Concatena dos cadenas en una nueva.
	- **ft_strtrim:** Limpia caracteres específicos de los extremos.
	- **ft_split:** Divide una cadena en un array de cadenas según un delimitador.
	- **ft_itoa:** Convierte un número entero a una cadena de texto.
	- **ft_strmapi:** Aplica una función a cada carácter de una cadena creando una nueva.
	- **ft_striteri:** Aplica una función a cada carácter de una cadena (modificando la original).
	- **ft_putchar_fd:** Escribe un carácter en un descriptor dado (como la salida estándar o un archivo).
	- **ft_putstr_fd:** Escribe una cadena de caracteres en el descriptor especificado.
	- **ft_putendl_fd:** Escribe una cadena seguida de un salto de línea en el descriptor.
	- **ft_putnbr_fd:** Escribe un número entero en el descriptor especificado.

### Parte 3: Listas enlazada 
 - Funciones para manejar estructuras de datos dinámicas (t_list), incluyendo creación de nodos, adición al principio o final, eliminación y aplicación de funciones sobre los elementos de la lista (iteración y mapeo).
	- Creación y Adición:
		- **ft_lstnew:** Crea un nuevo nodo reservando memoria. El contenido se inicializa con el valor del parámetro y el puntero al siguiente nodo se establece en NULL.
		- **ft_lstadd_front:** Añade un nodo al principio de la lista, actualizando el puntero de la cabeza.
		- **ft_lstadd_back:** Añade un nodo al final de la lista tras recorrerla hasta encontrar el último elemento.
	- Información:
		- **ft_lstsize:** Cuenta y devuelve el número total de nodos que componen la lista.
		- **ft_lstlast:** Localiza y devuelve el último nodo de la estructura.
	- Borrado:
		- **ft_lstdelone:** Libera la memoria del contenido de un nodo mediante una función dada y libera la memoria del nodo en sí.
		- **ft_lstclear:** Elimina y libera un nodo y todos sus sucesores de forma recursiva, estableciendo el puntero original a NULL.
	- Iteración y Transformación:
		- **ft_lstiter:** Itera sobre la lista aplicando una función específica al contenido de cada uno de sus nodos.
		- **ft_lstmap:** Crea una nueva lista resultante de aplicar una función sobre cada nodo de la lista original, gestionando la memoria en caso de error.