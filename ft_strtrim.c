/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:05:01 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 18:26:44 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	sizr_t	len;
	char	*trimmed_string;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	end = strlen(s1);
	while (end > start && strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed_string = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed_string)
		return (NULL);
	strncpy(trimmed_string, &s1[start], len);
	trimmed_string[len] = '\0';
	return (trimmed_string);
}
/*int main()
{
	char const *s1 = "   Hola, mundo!   ";
	char const *set = " ";
	char *trimmed_string;

	trimmed_string = ft_strtrim(s1, set);
	if (trimmed_string != NULL)
	{
		printf("La cadena recortada es: '%s'\n", trimmed_string);
		free(trimmed_string);
	}
	else
	{
		printf("Error al reservar memoria para la cadena recortada.\n");
	}

	return 0;
}*/

/*Este programa recorta los espacios en blanco de la cadena " Hola, mundo! ".
Si la función ft_strtrim funciona correctamente,
el programa imprimirá “La cadena recortada es: ‘Hola, mundo!’”.
Si la reserva de memoria falla, 
el programa imprimirá “Error al reservar memoria para la cadena recortada.”.*/