/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:01:53 by marvin            #+#    #+#             */
/*   Updated: 2024/01/09 20:01:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> // para write
//#include <stdio.h> // para printf

void ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		return;
	}

	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/*int main()
{
	char *s = "Hola, mundo!";
	ft_putstr_fd(s, 1);
	printf("\n"); // Para añadir una nueva línea después de la cadena
	return 0;
}*/
