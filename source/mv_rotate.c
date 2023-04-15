/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:55 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:09:11 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*head;
	t_node	*tail;

	if (node_size(*stack) < 2)
		return ;
	head = *stack;
	tail = node_last(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return ;
}

// Décale d’une position vers le haut tous les élements de la stack a.
// Le premier élément devient le dernier
void	rotate_a(t_node **stack_a)
{
	rotate(stack_a);
	ft_putstr("ra\n");
}

// Décale d’une position vers le haut tous les élements de la stack b.
// Le premier élément devient le dernier
void	rotate_b(t_node **stack_b)
{
	rotate(stack_b);
	ft_putstr("rb\n");
}

//ra et rb en meme temps
void	rotate_r(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr("rr\n");
}
