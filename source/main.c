/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/24 10:36:17 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_swap_trie(t_pswap push_swap)
{
	int pile_size;

	pile_size = push_swap.number_element;
	if (pile_size == 2)
	{
		if (push_swap.pile_a < push_swap.pile_a->next)
		{
			swap(push_swap.pile_a);
		}
		else
		{

		}
	}
	else if (pile_size == 3)
	{

	}
	else if (pile_size > 3)
	{

	}
}

int	main(int argc, char **argv)
{
	t_pswap	push_swap;

// initialisation de mes piles avec bzero (rempli de zero et met NULL a la fin)
	ft_bzero(&push_swap, sizeof(push_swap));
// calcul de la taille (nombre d'element)
	push_swap.number_element = set_pile_size(push_swap.pile_a);
	if (argc < 2)
	{
		return (0);
	}
	if (!is_correct(argv))
	{
		exit_error(NULL, NULL);
	}
	push_swap_trie(push_swap);
	return (0);
}
