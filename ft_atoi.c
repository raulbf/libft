/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:21:10 by marvin            #+#    #+#             */
/*   Updated: 2023/12/27 22:21:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>*/

int ft_atoi(const char *str)
{
    int res;
    int sign;
    
    res = 0;
    sign = 1;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -1;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return sign * res;
}

/*
int main()
{
    const char *str = "-123";
    int num = ft_atoi(str);

    printf("El número representado por la cadena '%s' es: %d\n", str, num);

    return 0;
}
*/