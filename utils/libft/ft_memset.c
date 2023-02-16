/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:21:39 by ccoste            #+#    #+#             */
/*   Updated: 2023/02/16 16:25:10 by ccoste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	str = s;
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

//int main () {
//   char str[50];

//   strcpy(str,"This is string.h library function");
//   puts(str);

//   ft_memset(str,'$',11);
//   puts(str);

//   return(0);
//}
