/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:15:47 by marvin            #+#    #+#             */
/*   Updated: 2024/01/19 20:30:01 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (!*needle)
	{
	return (char *)haystack;
	}

	while (size_t i = 0; i < n; i++)
	{
		if (haystack[i] == '\0')
		{
			return (NULL);
		}

		if (haystack[i] == *needle)
		{
			size_t j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0' && (i + j) < n)
		{
		j++;
		}
		if (needle[j] == '\0')
		{
			return (char *)&haystack[i];
		}
		}
	}

    return (NULL);
}

/*
int main()
{
    const char *haystack = "Hola Mundo";
    const char *needle = "Mundo";
    char *res = ft_strnstr(haystack, needle, strlen(haystack));

    if (res != NULL)
    {
        printf("La cadena '%s' se encontró en la posición: %ld\n", needle,
		 res - haystack);
    }
    else
    {
        printf("La cadena '%s' no se encontró en la cadena.\n", needle);
    }

    return 0;
}*/
/*
Este programa de prueba busca la cadena “Mundo” en la cadena “Hola Mundo” 
utilizando la función ft_strnstr. 
Luego imprime la posición de la cadena en la cadena.*/