/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:54:07 by rberrio-          #+#    #+#             */
/*   Updated: 2024/01/22 19:23:52 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
		*ptr++ = '\0';
}
/*int main()
{
	char str[] = "Hola, mundo!";
	printf("Antes de ft_bzero: %s\n", str);

	ft_bzero(str, sizeof(str));
	printf("Después de ft_bzero: %s\n", str);

	return 0;
}*/
/*Este programa primero imprime la cadena de caracteres "Hola, mundo!".
 Luego, utiliza la función ft_bzero para establecer todos los caracteres
de la cadena a cero (o ‘\0’). Finalmente,
intenta imprimir la cadena de nuevo,
pero como todos los caracteres se han establecido a cero, no se imprime nada
*/