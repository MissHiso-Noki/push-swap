/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:28:20 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 11:12:12 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	set_pile_size(t_element *pile)
{
	int	size;

	size = 0;
	if (!pile)
	{
		return (0);
	}
	while (pile != NULL)
	{
		pile = pile->next;
		size++;
	}
	return (size);
}

t_element	*get_last_element(t_element *pile)
{
	while(pile && pile->next != NULL)
	{
		pile = pile->next;
	}
	return (pile);
}

t_element	*get_before_last_element(t_element *pile)
{
	while(pile && pile->next && pile->next->next != NULL)
	{
		pile = pile->next;
	}
	return (pile);
}

void	pile_add_bottom(t_element **stack, t_element *new)
{
	t_element	*tail;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tail = get_last_element(*stack);
	tail->next = new;
}