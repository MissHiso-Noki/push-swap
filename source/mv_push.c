/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:34:41 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 15:31:06 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
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
