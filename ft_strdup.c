/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:22:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 13:22:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

// Aquí está la definición de ft_malloc
void*	ft_malloc(size_t size)
{
	void* ptr = malloc(size);// Asigna memoria con malloc
	return ptr;// Devuelve el puntero a la memoria
}

// Aquí está la definición de ft_strdup
char*	ft_strdup(const char* str)
{
	size_t len = strlen(str) + 1;// Calcula la longitud de la cadena
	char* new_str = (char*)ft_malloc(len);// Asigna memoria para la nueva cadena
	
	if (new_str)
	{// Si la asignación fue exitosa
		strcpy(new_str, str);// Copia la cadena original a la nueva memoria
	}

	return new_str;// Devuelve el puntero a la nueva cadena
}
/*
int main()
{
// Utilizamos ft_strdup para duplicar una cadena
	char* original = "Hola, mundo!";
	char* duplicado = ft_strdup(original);
	
	if (duplicado == NULL)
	{ // Comprobamos si la asignación de memoria fue exitosa

	printf("La asignación de memoria falló.\n");
	return 1;
	}
// Si la asignación de memoria fue exitosa, imprimimos la cadena original y la duplicada
	printf("La cadena original es: %s\n", original);
	printf("La cadena duplicada es: %s\n", duplicado);
// No olvides liberar la memoria cuando hayas terminado de usarla
	free(duplicado);
	
	return 0;
}*/

/*ft_strdup que utiliza ft_malloc para asignar memoria para una nueva cadena 
y luego copia la cadena original a esa nueva memoria.
En la función main, utilizamos ft_strdup para duplicar una cadena.
Comprobamos si la asignación de memoria fue exitosa y,
si lo fue, imprimimos la cadena original y la duplicada. Finalmente, liberamos la memoria asignada*/