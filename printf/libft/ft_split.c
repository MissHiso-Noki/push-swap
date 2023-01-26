/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:49:37 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/21 13:57:57 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_tab(char **tab)
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

static size_t	count_words(const char *s, char c)
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

static void	get_word(char **next, size_t *len, char c)
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
	tab = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < count_words(s, c))
	{
		get_word(&next, &len, c);
		tab[i] = ft_calloc((len + 1), sizeof(char));
		if (!tab[i])
		{
			return (free_tab(tab));
		}
		ft_strlcpy(tab[i], next, len +1);
		i++;
	}
	return (tab);
}

// int	main(void)
// {
// 	char	*str;
// 	char	**split;
// 	int		i;

// 	i = 0;
// 	str = "lorem ipsum dolor sit amet,";
// 	printf("%s\n", str);
// 	split = ft_split(str, ' ');
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// 	return (0);
// }
