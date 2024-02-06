/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:00:01 by marvin            #+#    #+#             */
/*   Updated: 2024/02/05 21:00:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst)
{
	int size = 0;

	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int main()
{
	t_list *head = NULL;
	t_list *new_node;

	new_node = ft_lstnew("Hello");
	ft_lstadd_front(&head, new_node);
	new_node = ft_lstnew("World");
	ft_lstadd_front(&head, new_node);
	printf("Size of the list: %d\n", ft_lstsize(head));

	return 0;
}*/
/*Esta función cuenta el número de nodos en la lista.*/