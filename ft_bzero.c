/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:54:07 by rberrio-          #+#    #+#             */
/*   Updated: 2023/12/22 12:43:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
	char str[50] = "Hola Mundo!";
	printf("Antes de ft_bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("Después de ft_bzero: %s\n", str);
	return 0;
}
Este programa inicializa una cadena con el valor “Hola Mundo!”.
Luego, utiliza la función ft_bzero para establecer los primeros 5 caracteres de la cadena a ‘\0’.
Después de llamar a ft_bzero, imprime la cadena resultante.
*/

