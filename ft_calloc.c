/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:55:43 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 12:38:27 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>*/

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	return (ptr);
}

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = ft_malloc(total_size);
	if (ptr)
	{
		memset(ptr, 0, total_size);
	}
	return (ptr);
}

/*int main()
{
// Utilizamos ft_calloc para asignar memoria para un array de enteros
int* array;
array = (int*)ft_calloc(5, sizeof(int));

	if (array == NULL)
	{// Comprobamos si la asignación de memoria fue exitosa
		printf("La asignación de memoria falló.\n");
		return 1;
	}
// Si la asignación de memoria fue exitosa, asignamos valores al array
	for (int i = 0; i < 5; i++)
	{
		array[i] = i * i;
		printf("El valor del elemento %d del array es: %d\n", i, array[i]);
	}
	// No olvides liberar la memoria cuando hayas terminado de usarla
	free(array);

	return 0;
}*/

/* define una función ft_calloc que utiliza ft_malloc para asignar memoria
y luego inicializa esa memoria a cero.
En la función main,
utilizamos ft_calloc para asignar memoria para un array de enteros.
 Comprobamos si la asignación de memoria fue exitosa y, si lo fue,
 asignamos valores al array y los imprimimos. Finalmente,
 liberamos la memoria asignada.*/