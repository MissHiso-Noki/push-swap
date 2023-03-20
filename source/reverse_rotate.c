/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:50:43 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 12:02:23 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    reverse_rotate(t_element **pile)
{
    t_element	*tmp;
	t_element	*tail;
	t_element	*before_tail;

	tail = get_stack_bottom(*pile);
	before_tail = get_stack_before_bottom(*pile);
	tmp = *pile;
	*pile = tail;
	(*pile)->next = tmp;
	before_tail->next = NULL;
}

// Décale d’une position vers le bas tous les élements de
// la pile a. Le dernier élément devient le premier.
void	reverse_rotate_a(t_element **pile_a)
{
    reverse_rotate(pile_a);
    ft_putstr("rra\n");
}

// Décale d’une position vers le bas tous les élements de
// la pile b. Le dernier élément devient le premier
void	reverse_rotate_b(t_element **pile_b)
{
    reverse_rotate(pile_b);
    ft_putstr("rrb\n");
}

// rra et rrb en meme temps
void	reverse_rotate_r(t_element **pile_a, t_element **pile_b)
{
    reverse_rotate(pile_a);
    reverse_rotate(pile_b);
    ft_putstr("rrr\n");
}
