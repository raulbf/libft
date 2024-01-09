/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:17:46 by marvin            #+#    #+#             */
/*   Updated: 2024/01/09 19:17:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h> // para size_t

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (s == NULL || f == NULL)
	{
		return;
	}

	for (size_t i = 0; s[i] != '\0'; ++i) {
		f(i, &s[i]);
	}
}
//Para probar esta función,usaremos una función que,convierta cada carácter a mayúsculas.
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