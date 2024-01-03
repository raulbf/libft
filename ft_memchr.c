/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:49:20 by marvin            #+#    #+#             */
/*   Updated: 2023/12/27 19:49:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    while (n--) {
        if (*p != (unsigned char)c) {
            p++;
        } else {
            return p;
        }
    }
    return NULL;
}
/*
int main() {
    const char str[] = "Hola Mundo";
    char c = 'M';
    char *res = ft_memchr(str, c, strlen(str));

    if (res != NULL) {
        printf("El carácter '%c' se encontró en la posición: %ld\n", c, res - str);
    } else {
        printf("El carácter '%c' no se encontró en la cadena.\n", c);
    }

    return 0;
}
Este programa de prueba busca el carácter ‘M’ en la cadena “Hola Mundo”
 utilizando la función ft_memchr. Luego imprime la posición del carácter en la cadena.
*/