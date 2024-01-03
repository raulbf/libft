/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:28:55 by rberrio-          #+#    #+#             */
/*   Updated: 2023/12/22 13:03:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
/*
int main()
{
    char str[50] = "Hola Mundo!";
    printf("Antes de ft_memset: %s\n", str);
    ft_memset(str, '-', 5);
    printf("Después de ft_memset: %s\n", str);
    return 0;
}

Este programa imprimirá:

Antes de ft_memset: Hola Mundo!
Después de ft_memset: ----- Mundo!

La función ft_memset cambia los primeros 5 caracteres de la cadena “Hola Mundo!” a ‘-’.*/