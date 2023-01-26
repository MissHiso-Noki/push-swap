/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:07:48 by ccoste            #+#    #+#             */
/*   Updated: 2022/11/21 15:25:59 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	sizesrc;
	char			*dest;
	unsigned int	i;

	i = 0;
	sizesrc = ft_strlen(s);
	dest = malloc((sizesrc + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	while (i < sizesrc)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
