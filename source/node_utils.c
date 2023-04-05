/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 13:04:48 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 14:09:47 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//return nombre element dans la stack
int	node_size(t_node *lst)
{
	int	size;

	size = 0;
	if (!lst)
	{
		return (0);
	}
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

// creer une stack avec les valeurs fourni, renvoi la stack
t_node	*node_new(int nbr)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
	{
		return (NULL);
	}
	new->nb = nbr;
	new->index = 0;
	new->next = NULL;
	return (new);
}

// return le dernier element de la stack
t_node	*node_last(t_node *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

//return l'avant dernier element de la stack
t_node	*node_before_last(t_node *lst)
{
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// add element fin de la stack, renvoi la stack
void	node_add_back(t_node **lst, t_node *new)
{
	if (!lst || !(*lst))
	{
		(*lst) = new;
		return ;
	}
	node_last(*lst)->next = new;
	new->index = node_last(*lst)->index + 1;
}
