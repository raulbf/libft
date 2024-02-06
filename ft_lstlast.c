/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:36:06 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 19:36:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

/*int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *node3 = malloc(sizeof(t_list));

	node1->content = "Node 1";
	node1->next = node2;

	node2->content = "Node 2";
	node2->next = node3;

	node3->content = "Node 3";
	node3->next = NULL;

	t_list *last_node = ft_lstlast(node1);
	printf("Last node content: %s\n", (char*)last_node->content);

	free(node1);
	free(node2);
	free(node3);

	return 0;
}*/
//Devuelve el último nodo de la lista.