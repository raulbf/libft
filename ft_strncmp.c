/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:34:07 by marvin            #+#    #+#             */
/*   Updated: 2024/01/19 20:26:10 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_stmcmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return ((unsigned char) *s1 - (unsigned char )*s2);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
int main() {
    const char *s1 = "Hola";
    const char *s2 = "Mundo";
    size_t n = 4;

    int resultado = ft_stmcmp(s1, s2, n);

    printf("El resultado de la comparación es: %d\n", resultado);

    return 0;
}
*/