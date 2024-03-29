/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:11:47 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 18:38:44 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	else
		return (c);
}
/*
int main()
{
    char c = 'H';
    printf("Antes de ft_tolower: %c\n", c);
    c = ft_tolower(c);
    printf("Después de ft_tolower: %c\n", c);
    return 0;
}
Antes de ft_tolower: H
Después de ft_tolower: h
La función ft_tolower convierte el carácter ‘H’ a ‘h’ 
de mayusculas a minusculas.*/