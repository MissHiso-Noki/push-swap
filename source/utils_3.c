/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:55:41 by ccoste            #+#    #+#             */
/*   Updated: 2023/04/16 01:01:46 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*str;

	if (size != 0 && (size * nmemb) / size == !nmemb)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (!nmemb || !size)
	{
		return (str);
	}
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nmemb * size);
	return (str);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)

{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	i = ft_strlen(src);
	if (size != 0)
	{
		while (src[j] != '\0' && j < (size - 1))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}

size_t	ft_strlen(const char *s)

{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}