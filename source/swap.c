/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:15:55 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/23 10:50:31 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	swap(t_element *pile)
{
	int	tmp;

	tmp = 0;
	if (pile == NULL || pile->next == NULL)
	{
		return ;
	}
	tmp = pile->content;
	pile->content = pile->next->content;
	pile->next->content = tmp;
	tmp = pile->index;
	pile->index = pile->next->index;
	pile->next->index = tmp;
}

// intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
void	swap_a(t_element **pile_a)
{
	swap(*pile_a);
	ft_putstr("sa\n");
}

// intervertit les 2 premiers éléments au sommet de la pile b.
// Ne fait rien s’il n’y en a qu’un ou aucun
void	swap_b(t_element **pile_b)
{
	swap(*pile_b);
	ft_putstr("sb\n");
}

// sa et sb en meme temps
void	swap_s(t_element **pile_a, t_element **pile_b)
{
	swap(*pile_a);
	swap(*pile_b);
	ft_putstr("ss\n");
}
