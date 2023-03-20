/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:50:43 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/20 14:39:01 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    reverse_rotate(t_element **stack)
{
    t_element	*tmp;
	t_element	*tail;
	t_element	*before_tail;

	tail = get_last_element(*stack);
	before_tail = get_before_last_element(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	before_tail->next = NULL;
}

// Décale d’une position vers le bas tous les élements de
// la stack a. Le dernier élément devient le premier.
void	reverse_rotate_a(t_element **stack_a)
{
    reverse_rotate(stack_a);
    ft_putstr("rra\n");
}

// Décale d’une position vers le bas tous les élements de
// la stack b. Le dernier élément devient le premier
void	reverse_rotate_b(t_element **stack_b)
{
    reverse_rotate(stack_b);
    ft_putstr("rrb\n");
}

// rra et rrb en meme temps
void	reverse_rotate_r(t_element **stack_a, t_element **stack_b)
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    ft_putstr("rrr\n");
}
