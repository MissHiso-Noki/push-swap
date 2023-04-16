/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tiny.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:57:57 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 02:19:06 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_min(t_node **stack, int val)
{
	t_node	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

void	sort_3(t_node **stack_a)
{
	t_node	*head;
	int		min;
	int		next_min;

	head = *stack_a;
	min = get_min(stack_a, -1);
	next_min = get_min(stack_a, min);
	if (is_sorted(stack_a))
		return ;
	if (head->index == min && head->next->index != next_min)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (head->index == next_min)
	{
		if (head->next->index == min)
			swap_a(stack_a);
		else
			reverse_rotate_a(stack_a);
	}
	else
	{
		if (head->next->index == min)
			rotate_a(stack_a);
		else
		{
			swap_a(stack_a);
			reverse_rotate_a(stack_a);
		}
	}
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	if (is_sorted(stack_a))
		return ;
	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a))
		return ;
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	int	distance;

	distance = get_distance(stack_a, get_min(stack_a, -1));
	if (distance == 1)
		rotate_a(stack_a);
	else if (distance == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (distance == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if (distance == 4)
		reverse_rotate_a(stack_a);
	if (is_sorted(stack_a))
		return ;
	push_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	simple_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || node_size(*stack_a) == 0
		|| node_size(*stack_a) == 1)
		return ;
	size = node_size(*stack_a);
	if (size == 2)
		swap_a(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else if (size == 4)
		sort_4(stack_a, stack_b);
	else if (size == 5)
		sort_5(stack_a, stack_b);
}
