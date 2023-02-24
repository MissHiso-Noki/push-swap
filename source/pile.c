/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:28:20 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/24 10:42:00 by ccoste           ###   ########.fr       */
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
	while (pile != '\0')
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
	while (*pile != '\0')
	{
		tmp = (*pile)->next;
		free(*pile);
		*pile = tmp;
	}
	*pile = NULL;
}

// free les piles et renvoi le message d'erreur
void	exit_error(t_element **pile_a, t_element **pile_b)
{
	if (pile_a == NULL || *pile_a != NULL)
	{
		free_pile(pile_a);
	}
	if (pile_b == NULL || *pile_b != NULL)
	{
		free_pile(pile_b);
	}
	write(1, "Error\n", 6);
}
