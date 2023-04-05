/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:35:16 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 15:31:23 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_node *stack)
{
	int	tmp;

	tmp = 0;
	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->nb;
	stack->nb = stack->next->nb;
	stack->next->nb = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

// intervertit les 2 premiers éléments au sommet de la stack a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	swap_a(t_node **stack_a)
{
	swap(*stack_a);
	ft_putstr("sa\n");
}

// intervertit les 2 premiers éléments au sommet de la stack b.
// Ne fait rien s’il n’y en a qu’un ou aucun
void	swap_b(t_node **stack_b)
{
	swap(*stack_b);
	ft_putstr("sb\n");
}

// sa et sb en meme temps
void	swap_s(t_node **stack_a, t_node **stack_b)
{
	swap(*stack_a);
	swap(*stack_b);
	ft_putstr("ss\n");
}
