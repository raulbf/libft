/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:07:52 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 15:07:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}
/*
int main()
{
    char c = 'h';
    printf("Antes de ft_toupper: %c\n", c);
    c = ft_toupper(c);
    printf("Después de ft_toupper: %c\n", c);
    return 0;
}
La función ft_toupper convierte el carácter ‘h’ a ‘H’ de minusculas a mayusculas.*/