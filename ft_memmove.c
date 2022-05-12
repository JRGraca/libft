/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:39:30 by jbatista          #+#    #+#             */
/*   Updated: 2022/02/24 16:28:36 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (source < dest)
	{
		while (n--)
			dest[n] = source[n];
	}
	else
		ft_memcpy(dest, source, n);
	return (dst);
}
