/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:41 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:14:45 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_node **stack_to, t_node **stack_from)
{
	t_node	*tmp;
	t_node	*head_to;
	t_node	*head_from;

	if (node_size(*stack_from) == 0)
		return ;
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return ;
}

// Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide
void	push_a(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

// Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide
void	push_b(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr("pb\n");
}
