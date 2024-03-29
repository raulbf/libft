/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:06:14 by rberrio-          #+#    #+#             */
/*   Updated: 2024/01/18 20:03:16 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
/*
int main() {
    char src[50] = "Hola Mundo!";
    char dst[50];
    ft_memmove(dst, src, 50);
    printf("%s\n", dst);  // Imprime "Hola Mundo!"
    return 0;
}
Este programa inicializa una cadena src con el valor “Hola Mundo!”.
 Luego, utiliza la función ft_memmove para copiar el contenido de src a dst.
 Finalmente,imprime la cadena dst.*/