/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:50:51 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 20:39:46 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_string;
	size_t1	len_s1;
	size_t2	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	joined_string = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined_string)
		return (NULL);
	strcpy(joined_string, s1);
	strcat(joined_string, s2);
	return (joined_string);
}

// Programa principal para probar la función

/*int main()
{
	char const *s1 = "Hola, ";
	char const *s2 = "mundo!";
	char *joined_string;

	joined_string = ft_strjoin(s1, s2);
	if (joined_string != NULL)
	{
		printf("La cadena unida es: %s\n", joined_string);
		free(joined_string);
	}
	else
	{
		printf("Error al reservar memoria para la cadena unida.\n");
	}

	return 0;
}*/

/*Este programa une las cadenas "Hola, " y “mundo!” en una sola cadena.
 Si la función ft_strjoin funciona correctamente, 
 el programa imprimirá “La cadena unida es: Hola, mundo!”. 
 Si la reserva de memoria falla, el programa imprimirá 
 “Error al reservar memoria para la cadena unida.”*/