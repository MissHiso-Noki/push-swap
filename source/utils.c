/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:28:48 by ccoste            #+#    #+#             */
/*   Updated: 2023/03/15 11:54:02 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// free tous les elements d'une pile et pointe la pile sure NULL
void	free_pile(t_element **pile)
{
	t_element	*tmp;

	if (!pile || !(*pile))
	{
		return ;
	}
	while (*pile != NULL)
	{
		tmp = (*pile)->next;
		free(*pile);
		*pile = tmp;
	}
	*pile = NULL;
}

// free les piles et renvoi le message d'erreur
void	exit_error(t_element **pile_a, t_element **pile_b)
{

	if (pile_a == NULL || *pile_a != NULL)
	{
		free_pile(pile_a);
	}
	if (pile_b == NULL || *pile_b != NULL)
	{
		free_pile(pile_b);
	}
	write(2, "Error\n", 6);
}

long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (is_digit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
