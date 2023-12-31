/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:24:32 by marvin            #+#    #+#             */
/*   Updated: 2023/12/22 15:24:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence;
    last_occurrence = "NULL";
    while (*s)
    {
        if (*s == c)
            last_occurrence = s;
        s++;
    }
    return last_occurrence;
}
/*
int main()
{
    char str[] = "Hola Mundo!";
    char c = 'o';
    const char *res = ft_strrchr(str, c);
    if (res)
        printf("La última ocurrencia del carácter '%c' se encontró en la cadena en la posición: %ld\n", c, res - str);
    else
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    return 0;
}
La última ocurrencia del carácter 'o' se encontró en la cadena en la posición: 7

La función ft_strrchr busca la última ocurrencia del carácter ‘o’ en la cadena “Hola Mundo!”
y devuelve la posición del carácter en la cadena.*/