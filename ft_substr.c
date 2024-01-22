/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:25:38 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 18:36:44 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <string.h>*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (NULL);
	if (strlen(s) < start)
		return (NULL);
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

/*int main()
{
	char const *s = "Hola, mundo!";
	char *substring;

	substring = ft_substr(s, 6, 5);
	if (substring != NULL)
	{
		printf("La subcadena es: %s\n", substring);
		free(substring);
	}
	else
	{
		printf("Error al reservar memoria para la subcadena.\n");
	}

	return 0;*/
}
/*Esta función crea una nueva cadena de caracteres
 que es una subcadena de la cadena original s.
 La subcadena comienza en el índice start y tiene una longitud máxima de len.
Si la reserva de memoria falla, la función devuelve NULL.
hay que tener en cuenta que esta función no verifica 
si los parámetros start y len son válidos para la cadena s,
por lo que debes asegurarte de que estos parámetros
 son correctos antes de llamar a la función.
Además, la cadena resultante está reservada con malloc,
 por lo que deberás liberarla con free cuando ya no la necesites.*/