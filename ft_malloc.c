/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:10:36 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 20:02:54 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	return (ptr);
}

/*int main()
{
	int* num = (int*)ft_malloc(sizeof(int));

	if (num == NULL)
	{ // Comprobamos si la asignación de memoria fue exitosa
		printf("La asignación de memoria falló.\n");
		return 1;
	}
	*num = 123;
	printf("El valor del entero es: %d\n", *num);

    free(num);

	return 0;
}*/

/*en la función main, utilizamos ft_malloc para asignar memoria para un entero.
Comprobamos si la asignación de memoria fue exitosa y, si lo fue,
asignamos un valor al entero y lo imprimimos.
Finalmente, liberamos la memoria asignada.*/
