/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:30:56 by marvin            #+#    #+#             */
/*   Updated: 2024/02/05 20:30:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	t_list	*new;

	new = ft_lstnew("hola");
	printf("%s\n", (char*)new->content);
	return (0);


/*Esta función crea un nuevo nodo de la lista.
Utiliza malloc para asignar memoria para el nuevo nodo.
El contenido del nuevo nodo se inicializa con el parámetro content
 y el puntero next se inicializa como NULL.*/