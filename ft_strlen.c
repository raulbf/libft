/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:18:42 by rberrio-          #+#    #+#             */
/*   Updated: 2024/01/22 19:10:56 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int main()
{
    char str[] = "Hola Mundo!";
    size_t len = ft_strlen(str);
    printf("La longitud de '%s' es %zu\n", str, len);
    return 0;
}

Este programa imprimirá:

La longitud de 'Hola Mundo!' es 11

La función ft_strlen calcula la longitud de la cadena “Hola Mundo!”.*/