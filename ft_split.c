/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 22:16:25 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 22:16:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c)
{
	char **result;
	int i, j, k;
	int word_count;
	
	if (!s)
		return NULL;

	word_count = 1;
	for (i = 0; s[i]; i++)
		if (s[i] == c)
			word_count++;

	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return NULL;

	i = 0;
	j = 0;
	while (j < word_count)
	{
		k = 0;
		while (s[i] == c)
			i++;
		while (s[i + k] && s[i + k] != c)
			k++;
		result[j] = (char *)malloc(sizeof(char) * (k + 1));
		if (!result[j])
			return NULL;
		strncpy(result[j], &s[i], k);
		result[j][k] = '\0';
		i += k;
		j++;
	}
	result[j] = NULL;

	return result;
}

/*int main()
{
    char const *s = "Hola, mundo!";
    char c = ',';
    char **split_string;
    int i;

    split_string = ft_split(s, c);
    if (split_string != NULL)
    {
        for (i = 0; split_string[i] != NULL; i++)
        {
            printf("La cadena dividida %d es: '%s'\n", i, split_string[i]);
            free(split_string[i]);
        }
        free(split_string);
    }
    else
    {
        printf("Error al reservar memoria para la cadena dividida.\n");
    }

    return 0;
}*/

/*Este programa divide la cadena “Hola, mundo!” en substrings
utilizando la coma como delimitador. Si la función ft_split funciona correctamente,
el programa imprimirá “La cadena dividida 0 es: ‘Hola’” y “La cadena dividida 1 es: ’ mundo!'”.
Si la reserva de memoria falla, el programa imprimirá 
“Error al reservar memoria para la cadena dividida.”.*/