/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:57:57 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 14:04:18 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	tiny_sort(t_node **stack)
{
	int	first;
	int	second;
	int	third;

	tiny_sort2(stack);
	if (is_sorted(*stack))
		return ;
	first = (*stack)->nb;
	second = (*stack)->next->nb;
	third = (*stack)->next->next->nb;
	// 3 2 1
	if (first > second && second > third && first > third)
	{
		rotate_a(stack);
		swap_a(stack);
	}
	// 1 3 2
	else if (first < second && second > third && first < third)
	{
		reverse_rotate_a(stack);
		swap_a(stack);
	}
}

void	tiny_sort2(t_node **stack)
{
	int	first;
	int	second;
	int	third;

	if (is_sorted(*stack))
		return ;
	first = (*stack)->nb;
	second = (*stack)->next->nb;
	third = (*stack)->next->next->nb;
	if (first > second && second < third && first < third)
		swap_a(stack);
	// 2 3 1
	else if (first < second && second > third && first > third)
		reverse_rotate_a(stack);
	// 3 1 2
	else if (first > second && second < third && first > third)
		rotate_a(stack);
}
