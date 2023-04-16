/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:49:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 22:28:50 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stddef.h>
# include <fcntl.h>

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
}					t_node;

//utils.c
void			free_stack(t_node **stack);
void			ft_free(char **str);
int				is_sorted(t_node **stack);

//libft_split.c
int				word_count(char const *s, char c);
int				word_length(char const *s, char c);
char			**f(char const *s, char c, char **result, int words_count);
char			**ft_split(char const *s, char c);
void			ft_free(char **str);

// main.c
void			fill_stack_values(t_node **stack, int argc, char **argv);
void			push_swap(t_node **stack_a, t_node **stack_b);

// check.c
int				ft_contains(int num, char **argv, int i);
int				ft_isnum(char *num);
void			ft_check_args(int argc, char **argv);

// swap.c
int				swap(t_node **stack);
int				swap_a(t_node **stack_a);
int				swap_b(t_node **stack_b);
int				swap_s(t_node **stack_a, t_node **stack_b);

// push.c
int				push(t_node **src, t_node **dest);
int				push_a(t_node **stack_a, t_node **stack_b);
int				push_b(t_node **stack_a, t_node **stack_b);

// rotate.c
int				rotate(t_node **stack);
int				rotate_a(t_node **stack_a);
int				rotate_b(t_node **stack_b);
int				rotate_r(t_node **stack_a, t_node **stack_b);

// reverse_rotate.c
int				reverse_rotate(t_node **stack);
int				reverse_rotate_a(t_node **stack_a);
int				reverse_rotate_b(t_node **stack_b);
int			reverse_rotate_r(t_node **stack_a, t_node **stack_b);

// sort_tiny.c

int				get_min(t_node **stack, int val);
void			sort_3(t_node **stack_a);
void			sort_4(t_node **stack_a, t_node **stack_b);
void			sort_5(t_node **stack_a, t_node **stack_b);
void			simple_sort(t_node **stack_a, t_node **stack_b);

// node.c

t_node			*node_new(int nbr);
int				node_size(t_node *lst);
void			node_add_front(t_node **stack, t_node *new);
t_node			*node_last(t_node *lst);
void			node_add_back(t_node **lst, t_node *new);

// sort_radix.c

int				get_distance(t_node **stack, int index);
int				get_max_bits(t_node **stack);
void			radix_sort(t_node **stack_a, t_node **stack_b);

// index.c
t_node			*get_next_min(t_node **stack);
void			index_stack(t_node **stack);

//libft.c

long	ft_atoi(const char *str);
void	ft_putstr(char *str);
int		ft_isdigit(int c);

#endif
