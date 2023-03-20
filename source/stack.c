/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:51:14 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/20 14:23:49 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// return le nombre d'element dans la stack
int	set_stack_size(t_element *stack)
{
	int	size;

	size = 0;
	if (!stack)
	{
		return (0);
	}
	while (stack != NULL)
	{
		stack = stack->next;
		size++;
	}
	return (size);
}

// return le dernier element de la stack
t_element	*get_last_element(t_element *stack)
{
	while(stack && stack->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

// return l'avant dernier element de la stack
t_element	*get_before_last_element(t_element *stack)
{
	while(stack && stack->next && stack->next->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

// add element fin de la stack, renvoi la stack d'element
void	stack_add_bottom(t_element **stack, t_element *new)
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

// crer une stack d'element avec la valeur fourni, renvoi la stack d'element
t_element *stack_new(int value)
{
	t_element	*new;

	new = malloc(sizeof * new);
	if (!new)
	{
		return (NULL);
	}
	new->value = value;
	new->index = 0;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}
