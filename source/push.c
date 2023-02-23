/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:57:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/23 10:52:05 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push(t_element **src, t_element **dest)
{
	t_element	*tmp;

	if (*src == NULL)
	{
		return ;
	}
	tmp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = tmp;
}

// Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide
void	push_a(t_element **pile_a, t_element **pile_b)
{
	push(pile_b, pile_a);
	ft_putstr("pa\n");
}

// Prend le premier élément au sommet de a et le met sur b.
// Ne fait rien si a est vide
void	push_b(t_element **pile_a, t_element **pile_b)
{
	push(pile_a, pile_b);
	ft_putstr("pb\n");
}
