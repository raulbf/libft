/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:31:58 by rberrio-          #+#    #+#             */
/*   Updated: 2024/01/22 19:26:07 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i +1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

/*
int main()
{
    char src[] = "Hola, mundo!";
    char dst[20];
    size_t len;

    len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Longitud de la cadena de origen: %zu\n", len);
    printf("Cadena de destino después de la copia: %s\n", dst);

    return 0;
}*/