/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:22:10 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 20:23:26 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	return (ptr);
}

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*new_str;

	len = strlen(str) + 1;
	new_str = (char *)ft_malloc(len);
	if (new_str)
	{
		strcpy(new_str, str);
	}
	return (new_str);
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
// Si la asignación de memoria fue exitosa, 
imprimimos la cadena original y la duplicada
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
si lo fue, imprimimos la cadena original y la duplicada. 
Finalmente, liberamos la memoria asignada*/