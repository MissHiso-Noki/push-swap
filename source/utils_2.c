/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:28:49 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:05:10 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

size_t	ft_count_words(const char *s, char c)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			nbr++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nbr++;
	return (nbr);
}

void	ft_get_word(char **next, size_t *len, char c)
{
	size_t	i;

	*next = *next + *len;
	*len = 0;
	i = 0;
	while (**next && **next == c)
	{
		(*next)++;
	}
	while ((*next)[i] != '\0')
	{
		if ((*next)[i] == c)
		{
			return ;
		}
		(*len)++;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*next;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	next = (char *)s;
	if (!s)
		return (NULL);
	tab = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		ft_get_word(&next, &len, c);
		tab[i] = ft_calloc((len + 1), sizeof(char));
		if (!tab[i])
		{
			return (ft_free_tab(tab));
		}
		ft_strlcpy(tab[i], next, len +1);
		i++;
	}
	return (tab);
}