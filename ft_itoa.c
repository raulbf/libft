/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:08:31 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 23:08:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Aquí va la definición de tu función ft_itoa

int ft_numlen(int n)
{
	int len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return len;
}

char *ft_itoa(int n)
{
	char *str;
	int len = ft_numlen(n);
	int sign = (n < 0) ? -1 : 1;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;

	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		if (n < 0)
			str[0] = '-';
		while (n != 0)
		{
			str[--len] = sign * (n % 10) + '0';
			n /= 10;
		}
	}
	return str;
}

/*
int main()
{
	int n = -12345;
	char *str;

	str = ft_itoa(n);
	if (str != NULL)
	{
		printf("La cadena es: '%s'\n", str);
		free(str);
	}
	else
	{
		printf("Error al reservar memoria para la cadena.\n");
	}

	return 0;
}
*/
/*Este programa convierte el número -12345 en una cadena. Si la función ft_itoa funciona correctamente, el programa imprimirá “La cadena es: ‘-12345’”. Si la reserva de memoria falla, el programa imprimirá “Error al reservar memoria para la cadena.”.*/