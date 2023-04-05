/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/05 15:03:28 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stddef.h>

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
}					t_node;

//utils.c
void			free_stack(t_node **stack);
void			exit_error(t_node **stack_a, t_node **stack_b);
long int		ft_atoi(const char *str);
void			ft_putstr(char *s);
void			afficherliste(t_node **liste);

// main.c
int				is_sorted(t_node *stack);
void			push_swap(t_node **stack_a, t_node **stack_b, int stack_size);

// check_utils.c
int				is_digit(char c);
int				is_sign(char c);
int				nbstr_cmp(const char *s1, const char *s2);

// check.c
int				argv_is_number(char *argv);
int				is_double_check(int argc, char **argv);
int				argv_is_zero(char *argv);
int				is_correct(int argc, char **argv);

// swap.c
void			swap(t_node *stack);
void			swap_a(t_node **stack_a);
void			swap_b(t_node **stack_b);
void			swap_s(t_node **stack_a, t_node **stack_b);

// push.c
void			push(t_node **src, t_node **dest);
void			push_a(t_node **stack_a, t_node **stack_b);
void			push_b(t_node **stack_a, t_node **stack_b);

// rotate.c
void			rotate(t_node **stack);
void			rotate_a(t_node **stack_a);
void			rotate_b(t_node **stack_b);
void			rotate_r(t_node **stack_a, t_node **stack_b);

// reverse_rotate.c
void			reverse_rotate(t_node **stack);
void			reverse_rotate_a(t_node **stack_a);
void			reverse_rotate_b(t_node **stack_b);
void			reverse_rotate_r(t_node **stack_a, t_node **stack_b);

// node_initialization.c

t_node			*fill_stack_values(int argc, char **argv);

// sort_tiny.c

void			tiny_sort(t_node **stack);
void			tiny_sort2(t_node **stack);

// node_utils.c

int				node_size(t_node *lst);
t_node			*node_new(int nbr);
t_node			*node_last(t_node *lst);
t_node			*node_before_last(t_node *lst);
void			node_add_back(t_node **lst, t_node *new);

// sort_radix.c

int				get_max_bits(t_node **stack);
void			radix_sort(t_node **stack_a, t_node **stack_b);

#endif
