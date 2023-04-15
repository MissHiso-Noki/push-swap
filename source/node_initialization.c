/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_initialization.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:32:13 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:14:31 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rempli stack avec valeur fourni, si erreur renvoi erreur, renvoi la stack
void	fill_stack_values(t_node **stack, int argc, char **argv)
{
	t_node 	*new;
	char	**args;
	int i;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = node_new(ft_atoi(args[i]));
		node_add_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
	{
		free(args);
	}
}

// creer une stack avec les valeurs fourni, renvoi la stack
t_node	*node_new(int nbr)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->nb = nbr;
	new->index = -1;
	new->next = NULL;
	return (new);
}
