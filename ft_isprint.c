/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:12:29 by rberrio-          #+#    #+#             */
/*   Updated: 2023/12/22 12:52:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main()
{
	printf("%d\n", ft_isprint('a'));  // Imprime 1 si 'a' es imprimible
	return 0;
}
Este programa simplemente imprime el resultado de la función ft_isprint
cuando se le pasa el carácter ‘a’. Si ‘a’ es un carácter imprimible, imprimirá ‘1’,
de lo contrario imprimirá ‘0’.*/