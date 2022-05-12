/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:42:27 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/07 15:10:41 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*writenumber(char *ret, unsigned int n2, size_t size)
{
	while (n2 > 0)
	{
		ret[size--] = 48 + (n2 % 10);
		n2 = n2 / 10;
	}
	return (ret);
}

static size_t	getnbrsize(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char				*ret;
	size_t				size;
	unsigned int		n2;

	size = getnbrsize(n);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (ret == NULL)
		return (NULL);
	ret[size--] = '\0';
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
	{
		n2 = -n;
		ret[0] = '-';
	}
	else
		n2 = n;
	ret = writenumber(ret, n2, size);
	return (ret);
}
