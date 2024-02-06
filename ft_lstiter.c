/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:13:21 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 20:13:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(list ==NULL || f == NULL)
		return;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void print_content(void *content)
{
	printf("%s\n", (char*)content);
}

/*int main()
{
	t_list *node1 = malloc(sizeof(t_list));
	t_list *node2 = malloc(sizeof(t_list));

	node1->content = "Node 1 content";
	node1->next = node2;

	node2->content = "Node 2 content";
	node2->next = NULL;

	ft_lstiter(node1, print_content);

	free(node1);
	free(node2);

	return 0;
}*/

/*Itera la lista ’lst’ y aplica la función ’f’ en el
contenido de cada nodo.*/