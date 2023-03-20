/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:56:35 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 11:56:01 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    rotate(t_element **pile)
{
    t_element *tmp;
    t_element *tail;

    tmp = *pile;
    *pile = (*pile)->next;
    tail = get_last_element(*pile);
    tmp->next = NULL;
    tail->next = tmp;
}

// Décale d’une position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier
void	rotate_a(t_element **pile_a)
{
    rotate(pile_a);
    ft_putstr("ra\n");
}

// Décale d’une position vers le haut tous les élements de la pile b.
// Le premier élément devient le dernier
void	rotate_b(t_element **pile_b)
{
    rotate(pile_b);
    ft_putstr("rb\n");
}

//ra et rb en meme temps
void	rotate_r(t_element **pile_a, t_element **pile_b)
{
    rotate(pile_a);
    rotate(pile_b);
    ft_putstr("rr\n");
}
