/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:22:07 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/22 16:09:23 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{

    t_element   *pile_a;
    t_element   *pile_b;
    int             pile_size;

    pile_b = NULL;
    // pile_a = 
    pile_size = set_pile_size(pile_a);
    if (argc == 1)
    {
        return (0);
    }
    else if (argc == 2)
    {
        if (argv[1] < argv[2])
        {
        swap(pile_a);
        }
        else
        {

        }
    }
    else
    {
        
    }
}