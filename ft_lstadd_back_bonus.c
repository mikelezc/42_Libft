/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlezcano <mlezcano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:31:06 by mlezcano          #+#    #+#             */
/*   Updated: 2023/09/26 17:46:53 by mlezcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	new = lst->next;
	new->next = NULL;
}


/*
Añade el nodo ’new’ al final de la lista ’lst’

lst: el puntero al primer nodo de una lista. 
new: el puntero a un nodo que añadir a la lista.

*/