/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:35:16 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:10:18 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_node **stack)
{
	t_node	*head;
	t_node	*next;
	int		tmp_val;
	int		tmp_index;

	if (node_size(*stack) < 2)
		return ;
	head = *stack;
	next = head->next;
	tmp_val = head->nb;
	tmp_index = head->index;
	head->nb = next->nb;
	head->index = next->index;
	next->nb = tmp_val;
	next->index = tmp_index;
	return ;
}

// intervertit les 2 premiers éléments au sommet de la stack a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	swap_a(t_node **stack_a)
{
	swap(stack_a);
	ft_putstr("sa\n");
}

// intervertit les 2 premiers éléments au sommet de la stack b.
// Ne fait rien s’il n’y en a qu’un ou aucun
void	swap_b(t_node **stack_b)
{
	swap(stack_b);
	ft_putstr("sb\n");
}

// sa et sb en meme temps
void	swap_s(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
}
