/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberrio- <rberrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:47:23 by marvin            #+#    #+#             */
/*   Updated: 2024/01/17 13:06:00 by rberrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> // para write

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	char c = 'A';
	ft_putchar_fd(c, 1);
	printf("\n"); // Para añadir una nueva línea después del carácter
	return 0;
}*/
/*int main()
{
	// Imprime 'A' en la salida estándar (fd = 1)
	ft_putchar_fd('A', 1);
	return 0;
}*/