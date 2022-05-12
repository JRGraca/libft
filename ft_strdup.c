/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:05:44 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/03 17:24:17 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*ret;
	size_t		i;

	i = 0;
	ret = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (ret == NULL)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		ret[i] = s1[i];
		i++;
	}
	return (ret);
}
