/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:50:19 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/02 16:21:53 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0 || s1 == s2)
		return (0);
	while (i < n)
	{
		if (*str1 == *str2)
		{
			i++;
			str1++;
			str2++;
		}
		else
		{	
			return (*str1 - *str2);
		}
	}
	return (0);
}
