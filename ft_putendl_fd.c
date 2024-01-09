/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:19:14 by marvin            #+#    #+#             */
/*   Updated: 2024/01/09 20:19:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h> // write


void ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}

/*int main()
{
	char *s = "Hola, mundo!";
	ft_putendl_fd(s, 1);
	return 0;
}*/
