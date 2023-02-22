/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/22 16:11:10 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct  s_element 
{
    struct s_element    *next;
    int                     content;
    int                     index;

}                           t_element;

typedef struct  s_begin 
{
    struct s_element    *begin_a;
    struct s_element    *begin_b;
    struct s_pile       *inst;
}                           t_begin;

int     set_pile_size(t_element *pile);

static void     swap(t_element *pile);
char    swap_a(t_element **pile_a);
char    swap_b(t_element **pile_b);
void    swap_s(t_element **pile_a, t_element **pile_b);

static void     push(t_element **src, t_element **dest);
void    push_a(t_element **pile_a, t_element **pile_b);
void    push_b(t_element **pile_a, t_element **pile_b);

#endif
