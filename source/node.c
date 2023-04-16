/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:36:02 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 02:38:42 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// creer une stack avec les valeurs fourni, renvoi la stack
t_node	*node_new(int nbr)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nbr;
	new->index = -1;
	new->next = NULL;
	return (new);
}

//return nombre element dans la stack
int	node_size(t_node *lst)
{
	size_t	i;
	t_node	*tmp;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

// add element debut stack
void	node_add_front(t_node **stack, t_node *new)
{
	new->next = *stack;
	*stack = new;
}

// return le dernier element de la stack
t_node	*node_last(t_node *lst)
{
	t_node	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

// add element fin de la stack, renvoi la stack
void	node_add_back(t_node **lst, t_node *new)
{
	t_node	*n;

	if (*lst)
	{
		n = node_last(*lst);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*lst = new;
		(*lst)->next = NULL;
	}
}
