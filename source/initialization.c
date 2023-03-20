/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:51:21 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/20 14:41:00 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rempli stack avec valeur fourni, si erreur renvoi erreur, renvoi la stack
t_element *fill_stack_values(int argc, char **argv)
{
	t_element	*stack_a;
	int			nb;
	int			i;

	stack_a = NULL;
	nb = 0;
	i = 1;
	while (i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			exit_error(&stack_a, NULL);
		}
		if (i == 1)
		{
			stack_a = stack_new((int)nb);
		}
		else
		{
			stack_add_bottom(&stack_a, stack_new((int)nb));
		}
		i++;
	}
	return (stack_a);
}
