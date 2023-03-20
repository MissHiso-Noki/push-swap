/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 12:02:09 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_element
{
	struct s_element	*next;
	int					content;
	int					index;
	int					pos;
	int					target_pos;
	int					cost_a;
	int					cost_b;
}							t_element;

//utils.c
void			free_pile(t_element **pile);
void			exit_error(t_element **pile_a, t_element **pile_b);
long int		ft_atoi(const char *str);
void			ft_putstr(char *s);

// main.c
int				is_sorted(t_element *pile);
void			push_swap(t_element **pile_a, t_element **pile_b, int pile_size);

// check_utils.c
int				is_digit(char c);
int				is_sign(char c);
int				nbstr_cmp(const char *s1, const char *s2);

// check.c
int				argv_is_number(char *argv);
int				is_double_check(int argc, char **argv);
int				argv_is_zero(char *argv);
int				is_correct(int argc, char **argv);

// pile.c
int				set_pile_size(t_element *pile);
t_element		*get_last_element(t_element *pile);
t_element		*get_before_last_element(t_element *pile);
void			pile_add_bottom(t_element **stack, t_element *new);

// swap.c
void			swap(t_element *pile);
void			swap_a(t_element **pile_a);
void			swap_b(t_element **pile_b);
void			swap_s(t_element **pile_a, t_element **pile_b);

// push.c
static void		push(t_element **src, t_element **dest);
void			push_a(t_element **pile_a, t_element **pile_b);
void			push_b(t_element **pile_a, t_element **pile_b);

// rotate.c
void    		rotate(t_element **pile);
void			rotate_a(t_element **pile_a);
void			rotate_b(t_element **pile_b);
void			rotate_r(t_element **pile_a, t_element **pile_b);

// reverse_rotate.c
void    		reverse_rotate(t_element **pile);
void			reverse_rotate_a(t_element **pile_a);
void			reverse_rotate_b(t_element **pile_b);
void			reverse_rotate_r(t_element **pile_a, t_element **pile_b);

#endif
