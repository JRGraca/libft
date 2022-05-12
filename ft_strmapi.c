/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:49:07 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/09 16:33:46 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	ret = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		ret[i] = f(i, s[i]);
		i ++;
	}
	ret[i] = 0;
	return (ret);
}
