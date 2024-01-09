/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:24:36 by marvin            #+#    #+#             */
/*   Updated: 2024/01/09 20:24:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> // para write

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	char c = '0' + (n % 10);
	write(fd, &c, 1);
}

/*int main()
{
	int n = 12345;
	ft_putnbr_fd(n, 1);
	write(1, "\n", 1); // Para añadir una nueva línea después del número
	return 0;
}*/
