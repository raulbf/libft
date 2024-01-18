/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:17:46 by marvin            #+#    #+#             */
/*   Updated: 2024/01/18 20:32:24 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <ctype.h> // para toupper
#include <stdio.h> // para printf

void to_upper(unsigned int i, char *c)
{
	*c = toupper(*c);
}

int main()
{
	char s[] = "Hola, mundo!";
	ft_striteri(s, to_upper);
	printf("%s\n", s); // Debería imprimir "HOLA, MUNDO!"
	return 0;
}
*/