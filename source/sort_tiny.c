/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:57:57 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/03 23:50:45 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	tiny_sort(t_element **stack)
{
	int	first;
	int second;
	int	third;

	if (is_sorted(*stack))
	{
		return;
	}
	first = (*stack)->first->nb;
	second = (*stack)->first->next->nb;
	third = (*stack)->first->next->next->nb;
	printf("%d", first);
	printf("%d", second);
	printf("%d", third);
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
	// 2 1 3
	else if (first > second && second < third && first < third)
	{
		swap_a(stack);
	}
	// 2 3 1
	else if (first < second && second > third && first > third)
	{
		reverse_rotate_a(stack);
	}
	// 3 1 2
	else if (first > second && second < third && first > third)
	{
		rotate_a(stack);
	}
}

