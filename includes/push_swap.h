/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/03 20:29:16 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stddef.h>

typedef struct s_stack
{
	int					nb;
	struct s_stack		*next;
}							t_stack;

typedef struct s_element
{
	t_stack				*first;
	struct s_element	*next;
	int					value;
	int					index;
	int					pos;
	int					target_pos;
	int					cost_a;
	int					cost_b;
}							t_element;

//utils.c
void			free_stack(t_element **stack);
void			exit_error(t_element **stack_a, t_element **stack_b);
long int		ft_atoi(const char *str);
void			ft_putstr(char *s);

// main.c
int				is_sorted(t_element *stack);
void			push_swap(t_element **stack_a, /*t_element **stack_b,*/ int stack_size);

// check_utils.c
int				is_digit(char c);
int				is_sign(char c);
int				nbstr_cmp(const char *s1, const char *s2);

// check.c
int				argv_is_number(char *argv);
int				is_double_check(int argc, char **argv);
int				argv_is_zero(char *argv);
int				is_correct(int argc, char **argv);

// stack.c
int				set_stack_size(t_element *stack);
t_element		*get_last_element(t_element *stack);
t_element		*get_before_last_element(t_element *stack);
void			stack_add_bottom(t_element **stack, t_element *new);
t_element 		*stack_new(int value);

// swap.c
void			swap(t_element *stack);
void			swap_a(t_element **stack_a);
void			swap_b(t_element **stack_b);
void			swap_s(t_element **stack_a, t_element **stack_b);

// push.c
void			push(t_element **src, t_element **dest);
void			push_a(t_element **stack_a, t_element **stack_b);
void			push_b(t_element **stack_a, t_element **stack_b);

// rotate.c
void    		rotate(t_element **stack);
void			rotate_a(t_element **stack_a);
void			rotate_b(t_element **stack_b);
void			rotate_r(t_element **stack_a, t_element **stack_b);

// reverse_rotate.c
void    		reverse_rotate(t_element **stack);
void			reverse_rotate_a(t_element **stack_a);
void			reverse_rotate_b(t_element **stack_b);
void			reverse_rotate_r(t_element **stack_a, t_element **stack_b);

// initialization.c

t_element 		*fill_stack_values(int argc, char **argv);

// sort_tiny.c

void			tiny_sort(t_element **stack);

#endif
