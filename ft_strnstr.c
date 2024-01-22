/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:15:47 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 18:18:23 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*find_needle(const char *haystack,
const char *needle, size_t n, size_t i)
{
	size_t	j;

	j = 0;
	while (haystack[i + j] == needle[j]
		&& needle[j] != '\0'
		&& (i + j) < n)
	{
		j++;
	}
	if (needle[j] == '\0')
	{
		return (char *haystack + i);
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	char	*found;

	i = 0;
	if (!*needle)
	{
		return (char *haystack);
	}
	while (i < n)
	{
		if (haystack[i] == '\0')
		{
			return (NULL);
		}
		if (haystack[i] == *needle)
		{
			found = find_needle(haystack, needle, n, i);
			if (found != NULL)
			{
				return (found);
			}
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char haystack[]
	char needle[]
	
	haystack = "Hola, soy aguja!";
	needle = "aguja";
	char	*result;

	result = ft_strnstr(haystack, needle, sizeof(haystack));
	if (result != NULL)
	{
		printf("'%s' encontrado en '%s'\n", needle, haystack);
	}
	else
	{
		printf("'%s' no encontrado en '%s'\n", needle, haystack);
	}
	return (0);
}
*/
/*Este programa busca la cadena “Copilot” en la cadena “Hola, soy Copilot!”
utilizando la función ft_strnstr.
Si la cadena se encuentra,
imprime un mensaje indicando que se encontró la cadena;
si no se encuentra, imprime un mensaje indicando que no se encontró la cadena.
 Puedes cambiar las cadenas de prueba y el tamaño para probar diferentes casos.*/