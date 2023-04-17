/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:35:16 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/17 13:57:11 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_node **stack)
{
	t_node	*head;
	t_node	*next;
	int		tmp_val;
	int		tmp_index;

	if (node_size(*stack) < 2)
		return (-1);
	head = *stack;
	next = head->next;
	tmp_val = head->nb;
	tmp_index = head->index;
	head->nb = next->nb;
	head->index = next->index;
	next->nb = tmp_val;
	next->index = tmp_index;
	return (0);
}

// intervertit les 2 premiers éléments au sommet de la stack a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
int	swap_a(t_node **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putstr("sa\n");
	return (0);
}

// intervertit les 2 premiers éléments au sommet de la stack b.
// Ne fait rien s’il n’y en a qu’un ou aucun
int	swap_b(t_node **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putstr("sb\n");
	return (0);
}

// sa et sb en meme temps
int	swap_s(t_node **stack_a, t_node **stack_b)
{
	if ((node_size(*stack_a) < 2) || (node_size(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
	return (0);
}
