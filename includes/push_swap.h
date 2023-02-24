/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/24 10:40:10 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../utils/includes/ft_printf.h"
# include "../utils/includes/libft.h"

typedef struct s_element
{
	struct s_element	*next;
	int					content;
	int					index;

}							t_element;

typedef struct s_pswap
{
	t_element	*pile_a;
	t_element	*pile_b;
	int			number_element;
}					t_pswap;

// main.c
void			push_swap_trie(t_pswap push_swap);

// check_utils.c
int				is_digit(char c);
int				is_sign(char c);
int				nbstr_cmp(const char *s1, const char *s2);

// check.c
int				argv_is_number(char *argv);
int				is_double_check(char **argv);
int				argv_is_zero(char *argv);
int				is_correct(char **argv);

// pile.c
int				set_pile_size(t_element *pile);
void			free_pile(t_element **pile);
void			exit_error(t_element **pile_a, t_element **pile_b);

// swap.c
void			swap(t_element *pile);
void			swap_a(t_element **pile_a);
void			swap_b(t_element **pile_b);
void			swap_s(t_element **pile_a, t_element **pile_b);

// push.c
// static void		push(t_element **src, t_element **dest);
// void			push_a(t_element **pile_a, t_element **pile_b);
// void			push_b(t_element **pile_a, t_element **pile_b);

#endif
