/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:24 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:51:11 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	reverse_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (node_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = node_last(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			 head->next = NULL;
			 break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
	return (0);
}

// Décale d’une position vers le bas tous les élements de
// la stack a. Le dernier élément devient le premier.
int	reverse_rotate_a(t_node **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	ft_putstr("rra\n");
	return (0);
}

// Décale d’une position vers le bas tous les élements de
// la stack b. Le dernier élément devient le premier
int	reverse_rotate_b(t_node **stack_b)
{
	if (reverse_rotate(stack_b) == -1)
		return (-1);
	ft_putstr("rrb\n");
	return (0);
}

// rra et rrb en meme temps
int	reverse_rotate_r(t_node **stack_a, t_node **stack_b)
{
	if ((node_size(*stack_a) < 2) || (node_size(*stack_b) < 2))
		return (-1);
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr\n");
	return (0);
}
