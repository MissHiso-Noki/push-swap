/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:56:35 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 14:10:55 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*tmp;
	t_node	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = node_last(*stack);
	tmp->next = NULL;
	tail->next = tmp;
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
