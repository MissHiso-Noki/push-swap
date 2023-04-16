/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:55 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:47:28 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (node_size(*stack) < 2)
		return (-1);
	head = *stack;
	tail = node_last(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

// Décale d’une position vers le haut tous les élements de la stack a.
// Le premier élément devient le dernier
int	rotate_a(t_node **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putstr("ra\n");
	return (0);
}

// Décale d’une position vers le haut tous les élements de la stack b.
// Le premier élément devient le dernier
int	rotate_b(t_node **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putstr("rb\n");
	return (0);
}

//ra et rb en meme temps
int	rotate_r(t_node **stack_a, t_node **stack_b)
{
	if ((node_size(*stack_a) < 2) || (node_size(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
	return (0);
}
