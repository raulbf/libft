/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:07:12 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 13:07:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
    size_t j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < dstsize )
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = '\0';
	while (src[j])
		j++;
	return (i + j);
}

int main()
{
    char dst[50] = "Hola";
    char src[] = " Mundo!";
    size_t dstsize = sizeof(dst);
    ft_strlcat(dst, src, dstsize);
    printf("Después de ft_strlcat: %s\n", dst);
    return 0;
}
/*Esta función concatena la cadena src a la cadena dst de tamaño dstsize de manera segura. 
Primero, encuentra el final de dst y comienza a copiar src a dst desde allí,hasta que dst ha usado dstsize caracteres.
Luego, asegura que dst esté terminada en nulo.
Si dstsize es 0 o menor que la longitud de dst, dst no se terminará en nulo.
La función devuelve la longitud inicial de dst más la longitud de src.*/