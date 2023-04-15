/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:24 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:08:23 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (node_size(*stack) < 2)
		return ;
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
}

// Décale d’une position vers le bas tous les élements de
// la stack a. Le dernier élément devient le premier.
void	reverse_rotate_a(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr("rra\n");
}

// Décale d’une position vers le bas tous les élements de
// la stack b. Le dernier élément devient le premier
void	reverse_rotate_b(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr("rrb\n");
}

// rra et rrb en meme temps
void	reverse_rotate_r(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr("rrr\n");
}
