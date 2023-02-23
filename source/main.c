/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/23 13:11:14 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_pswap	push_swap;

// pile a = le nombre donner, qui es egal a argv
	
// initialisation de mes piles avec bzero (rempli de zero et met NULL a la fin)
	ft_bzero(&push_swap, sizeof(push_swap));
// check si les caractere sont valide

// calcul de la taille (nombre d'element)
	push_swap.number_element = set_pile_size(push_swap.pile_a);
	if (argc == 1)
	{
		return (0);
	}
	else if (argc == 2)
	{
		if (argv[1] < argv[2])
		{
			swap(push_swap.pile_a);
		}
		else
		{
		}
	}
	else
	{
	}
}
