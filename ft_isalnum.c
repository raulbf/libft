/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:13:03 by rberrio-          #+#    #+#             */
/*   Updated: 2024/01/18 20:00:54 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isalnum(c));
}
/*
int main()
{
	printf("%d\n", ft_isalnum('a'));// Imprime 1 si 'a' es alfanumérico
	return 0;
}*/