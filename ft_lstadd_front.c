/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:50:43 by marvin            #+#    #+#             */
/*   Updated: 2024/02/05 20:50:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

int main()
{
    t_list *head = NULL;
    t_list *new_node;

    new_node = ft_lstnew("Hello");
    ft_lstadd_front(&head, new_node);
    new_node = ft_lstnew("World");
    ft_lstadd_front(&head, new_node);
    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s ", (char *)temp->content);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}

/* Esta función añade un nuevo nodo al principio de la lista.
El nuevo nodo apunta al nodo que era previamente 
el primero de la lista.*/