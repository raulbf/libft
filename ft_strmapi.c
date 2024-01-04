/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:27:09 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 23:27:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *mapped_string;
	unsigned int i;

	if (!s || !f)
		return NULL;

	mapped_string = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (!mapped_string)
		return NULL;

	for (i = 0; s[i]; i++)
		mapped_string[i] = f(i, s[i]);
	mapped_string[i] = '\0';

	return mapped_string;
}

char to_upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	else
		return c;
}

/*int main()
{
	char const *s = "Hola, mundo!";
	char *mapped_string;

	mapped_string = ft_strmapi(s, to_upper);
	if (mapped_string != NULL)
	{
		printf("La cadena mapeada es: '%s'\n", mapped_string);
		free(mapped_string);
	}
	else
	{
		printf("Error al reservar memoria para la cadena mapeada.\n");
	}

	return 0;
}*/

/*Este programa convierte todos los caracteres de la cadena “Hola, mundo!” a mayúsculas.
Si la función ft_strmapi funciona correctamente,
el programa imprimirá “La cadena mapeada es: ‘HOLA, MUNDO!’”.
Si la reserva de memoria falla, el programa imprimirá “Error al reservar memoria para la cadena mapeada.”.*/