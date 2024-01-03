/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:05:41 by rberrio-          #+#    #+#             */
/*   Updated: 2023/12/22 12:55:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;	

	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int main()
{
	char src[50] = "Hola Mundo!";
	char dst[50];
	ft_memcpy(dst, src, 50);
	printf("%s\n", dst);// Imprime "Hola Mundo!"
	return 0;
}
Este programa inicializa una cadena src con el valor “Hola Mundo!”.
Luego, utiliza la función ft_memcpy para copiar el contenido de src a dst.
Finalmente, imprime la cadena dst.*/