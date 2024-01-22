/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:57:22 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 19:59:27 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}

// int main() {
//     char str1[] = "Hola";
//     char str2[] = "Mundo";
//     int res = ft_memcmp(str1, str2, 4);

//     printf("El resultado de la comparación es: %d\n", res);

//     return 0;
// }
// esta funcion es para comparar 
// los primeros 4 bytes de las cadenas “Hola” y “Mundo” 
// utilizando la función ft_memcmp. 
// Luego imprime el resultado de la comparación.