/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:28:20 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/22 16:09:16 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int     set_pile_size(t_element *pile)
{
    int     size;

    size = 0;
    if(!pile)
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