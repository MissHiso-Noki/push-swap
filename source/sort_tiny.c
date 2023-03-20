/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:57:57 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/20 16:04:43 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// return le plus gros element de stack
int	find_highest_index(t_element *stack)
{
	int	index;

	index = stack->index;
	while(stack != NULL)
	{
		if (stack->index > index)
		{
			index = stack->index;
		}
		stack = stack->next;
	}
	return (index);
}

//Sorts a stack of 3 numbers in 2 or fewer moves. The sorting is done by index
//*	rather than value. Example:
//*		values:		 0	 9	 2
//*		indexes:	[1]	[3]	[2]
//*	Solution, 2 moves:
//*	rra:
//*		values:		 2	 0	 9
//*		indexes:	[2]	[1]	[3]
//*	sa:
//*		values:		 0	 2	 9
//*		indexes:	[1]	[2]	[3]
void	tiny_sort(t_element **stack)
{
	int	highest;

	if (is_sorted(*stack))
	{
		return ;
	}
	highest = find_highest_index(*stack);
	printf("%d", highest);
	if ((*stack)->index == highest)
	{
		rotate_a(stack);
	}
	else if ((*stack)->next->index == highest)
	{
		reverse_rotate_a(stack);
	}
	if ((*stack)->index > (*stack)->next->index)
	{
		swap_a(stack);
	}
}
