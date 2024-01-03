/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:13:03 by rberrio-          #+#    #+#             */
/*   Updated: 2023/12/22 12:36:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isalnum(c));
}
/*
int main()
{
	printf("%d\n", ft_isalnum('a'));// Imprime 1 si 'a' es alfanumérico
	return 0;
}*/