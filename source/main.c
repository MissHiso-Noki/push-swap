/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 12:10:05 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_sorted(t_element *pile)
{
	while (pile->next != NULL)
	{
		if (pile->content > pile->next->content)
		{
			return (0);
		}
		pile = pile->next;
	}
	return (1);
}

void	push_swap(t_element **pile_a, t_element **pile_b, int pile_size)
{
	if (pile_size == 2 && !is_sorted(*pile_a))
	{
		swap(pile_a);
	}
	else if (pile_size == 3 && !is_sorted(*pile_a))
	{

	}
	else if (pile_size > 3 && !is_sorted(*pile_a))
	{

	}
}

int	main(int argc, char **argv)
{
	t_element *pile_a;
	t_element *pile_b;
	int 			pile_size;

	if (argc < 2)
	{
		return (0);
	}
	if (!is_correct(argc, argv))
	{
		exit_error(NULL, NULL);
	}
	pile_a = ;
	pile_b = NULL;
	pile_size = set_pile_size(pile_a);
	push_swap_trie(&pile_a, &pile_b, pile_size);
	free_pile(&pile_a);
	free_pile(&pile_b);
	return (0);
}
