/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:34:07 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/03 15:55:04 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i1;
	size_t	i2;

	i1 = 0;
	i2 = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (haystack[i2] != 0 && i2 < len)
	{
		i1 = 0;
		if (needle[i1] == haystack[i2])
		{
			while (needle[i1] == haystack[i2 + i1] && (i2 + i1) < len)
			{
				if (needle[i1 + 1] == 0)
					return ((char *) haystack + i2);
				i1++;
			}
		}
		i2++;
	}
	return (NULL);
}
