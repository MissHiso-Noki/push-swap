/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:50:43 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 13:56:49 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*tail;
	t_node	*before_tail;

	tail = node_last(*stack);
	before_tail = node_before_last(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	before_tail->next = NULL;
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
