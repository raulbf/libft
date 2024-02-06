/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:55:31 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 19:55:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	if (*lst == NULL)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));
	t_list *new_node = malloc(sizeof(t_list));

	node1->content = "Node 1";
	node1->next = node2;

	node2->content = "Node 2";
	node2->next = NULL;

	new_node->content = "New Node";
	new_node->next = NULL;

	ft_lstadd_back(&node1, new_node);

	t_list *current_node = node1;
	while (current_node != NULL)
	{
		printf("%s\n", (char*)current_node->content);
		current_node = current_node->next;
	}

	free(node1);
	free(node2);
	free(new_node);

	return 0;
}*/
//Añade el nodo ’new’ al final de la lista ’lst’.