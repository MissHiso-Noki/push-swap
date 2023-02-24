/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:28:20 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/24 11:09:20 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	set_pile_size(t_element *pile)
{
	int	size;

	size = 0;
	if (!pile)
	{
		return (0);
	}
	while (pile != NULL)
	{
		pile = pile->next;
		size++;
	}
	return (size);
}

// free tous les elements d'une pile et pointe la pile sure NULL
void	free_pile(t_element **pile)
{
	t_element	*tmp;

	if (!pile || !(*pile))
	{
		return ;
	}
	while (*pile != NULL)
	{
		tmp = (*pile)->next;
		free(*pile);
		*pile = tmp;
	}
	*pile = NULL;
}

// free les piles et renvoi le message d'erreur
void	exit_error(t_pswap *push_swap)
{

	if (push_swap->pile_a != NULL)
	{
		free_pile(&push_swap->pile_a);
	}
	if (push_swap->pile_b != NULL)
	{
		free_pile(&push_swap->pile_b);
	}
	write(2, "Error\n", 6);
}
