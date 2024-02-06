/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:04:15 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 20:04:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return;
	del(lst->content);
	free(lst);
}

/*void del(void *content)
{
    free(content);
}

int main()
{
    t_list *node = malloc(sizeof(t_list));
    node->content = malloc(50);
    strcpy(node->content, "Node content");
    node->next = NULL;

    printf("Before deletion: %s\n", (char*)node->content);
    ft_lstdelone(node, del);

    return 0;
}*/
/*Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse.*/
