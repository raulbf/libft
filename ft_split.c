/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:16:25 by marvin            #+#    #+#             */
/*   Updated: 2024/01/22 20:07:33 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*allocate_and_copy(char const *s, int start, int end)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 1;
	while (s[i])
	{
		if (s[i] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

int	skip_delimiters(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

char	**allocate_words(char const *s, char c, char **result, int word_count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (j < word_count)
	{
		i = skip_delimiters(s, c, i);
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = allocate_and_copy(s, start, i - 1);
		if (!result[j])
			return (NULL);
		j++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	result = allocate_words(s, c, result, word_count);
	return (result);
}

/*int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola, mundo!", ',');
	if (!result)
	{
		printf("Error al reservar memoria para la cadena dividida.\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("La cadena dividida %d es: '%s'\n", i, result[i]);
		i++;
	}
	return (0);
}

Este programa divide la cadena “Hola, mundo!” en substrings
utilizando la coma como delimitador.
Si la función ft_split funciona correctamente,
el programa imprimirá “La cadena dividida 0 es: ‘Hola’” y
 “La cadena dividida 1 es: ’ mundo!'”.
Si la reserva de memoria falla, el programa imprimirá 
“Error al reservar memoria para la cadena dividida.”.*/