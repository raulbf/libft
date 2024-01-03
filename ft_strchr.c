/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:16:47 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 15:16:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    while (*s != (char)c)
    {
        if (!*s++)
            return 0;
    }
    return s;
}
/*
int main()
{
    char str[] = "Hola Mundo!";
    char c = 'M';
    const char *res = ft_strchr(str, c);
    if (res)
        printf("El carácter '%c' se encontró en la cadena en la posición: %ld\n", c, res - str);
    else
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    return 0;
}
El carácter 'M' se encontró en la cadena en la posición: 5

La función ft_strchr busca el carácter ‘M’ en la cadena “Hola Mundo!”
 y devuelve la posición del carácter en la cadena.*/