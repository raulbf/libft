/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:22:28 by marvin            #+#    #+#             */
/*   Updated: 2024/02/06 20:22:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *new_node;
	
	new_lst = NULL;
	while (lst)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
			return ft_lstclear(&new_lst, del), NULL;
		new_node->content = f(lst->content);
		if (!new_node->content)
			return free(new_node), ft_lstclear(&new_lst, del), NULL;
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return new_lst;
}

void *to_uppercase(void *content)
{
	if (!content)
	{
		return NULL;
	}
	char *str = (char *)content;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return str;
}

void del(void *content)
{
	free(content);
}

/*int main()
{
    t_list *node1;
    t_list *node2;
    t_list *new_list;
    t_list *current_node;

    node1 = malloc(sizeof(t_list));
    node2 = malloc(sizeof(t_list));
    node1->content = "Node 1 content";
    node1->next = node2;
    node2->content = "Node 2 content";
    node2->next = NULL;

    new_list = ft_lstmap(node1, to_uppercase, del);
    current_node = new_list;
    while (current_node)
    {
        printf("%s\n", (char *)current_node->content);
        current_node = current_node->next;
    }
    return 0;
}

Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
*/