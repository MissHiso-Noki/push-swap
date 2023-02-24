/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:19:11 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/24 10:40:39 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// check si argv est juste un nombre, si autre renvoi 0
int	argv_is_number(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
	{
		i++;
	}
	while (argv[i] && is_digit(argv[i]))
	{
		i++;
	}
	if (argv[i] != '\0' && !is_digit(argv[i]))
	{
		return (0);
	}
	return (1);
}

// check si il y a des double et si double renvoi 1
int	is_double_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[j] != '\0')
	{
		j = 1;
		while (argv[j] != '\0')
		{
			if (j != i && nbstr_cmp(argv[i], argv[j]) == 0)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// si different de 0 return 0, si == 0 return 1
int	argv_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]))
	{
		i++;
	}
	while (argv[i] && argv[i] == '0')
	{
		i++;
	}
	if (argv[i] != '\0')
	{
		return (0);
	}
	return (1);
}

// check que argv est un nombre, qu'il y a que un zero,
// et qu'il n'y a pas de double si tout es okay envoi 1
int	is_correct(char **argv)
{
	int	i;
	int	nb_zeros;

	nb_zeros = 0;
	i = 1;
	while (argv[i] != '\0')
	{
		if (!argv_is_number(argv[i]))
		{
			return (0);
		}
		nb_zeros = nb_zeros + argv_is_zero(argv[i]);
		i++;
	}
	if (nb_zeros > 1)
	{
		return (0);
	}
	if (is_double_check(argv))
	{
		return (0);
	}
	return (1);
}
