/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 15:00:44 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// verifie si la stack es trie, renvoi 1 si trie
int	is_sorted(t_node *stack)
{
	while (stack->next != NULL)
	{
		if (stack->nb > stack->next->nb)
		{
			return (0);
		}
		stack = stack->next;
	}
	return (1);
}

//fonction qui renvoi en fonctin du nombre d'element vers autre fonction trie
void	push_swap(t_node **stack_a, t_node **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
	{
		swap_a(stack_a);
	}
	else if (stack_size == 3 && !is_sorted(*stack_a))
	{
		tiny_sort(stack_a);
	}
	else if (stack_size > 3 && !is_sorted(*stack_a))
	{
		radix_sort(stack_a, stack_b);
	}
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		stack_size;

	if (argc < 2)
	{
		return (0);
	}
	if (!is_correct(argc, argv))
	{
		exit_error(NULL, NULL);
	}
	stack_a = fill_stack_values(argc, argv);
	stack_b = NULL;
	stack_size = node_size(stack_a);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
