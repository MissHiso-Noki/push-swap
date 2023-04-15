/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 00:51:18 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// verifie si la stack es trie, renvoi 1 si trie
int	is_sorted(t_node **stack)
{
	t_node	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->nb > head->next->nb)
			return (0);
		head = head->next;
	}
	return (1);
}

//fonction qui renvoi en fonctin du nombre d'element vers autre fonction trie
void	push_swap(t_node **stack_a, t_node **stack_b)
{
	if (node_size(*stack_a) == 2)
		swap_a(stack_a);
	else if (node_size(*stack_a) == 3)
		tiny_sort(stack_a);
	else if (node_size(*stack_a) > 3)
		radix_sort(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_node	**stack_a;
	t_node	**stack_b;

	if (argc < 2)
		return (0);
	if (!is_correct(argc, argv))
		exit_error(NULL, NULL);
	stack_a = NULL;
	stack_b = NULL;
	fill_stack_values(stack_a, argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		free_stack(stack_b);
		return (0);
	}
	push_swap(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
