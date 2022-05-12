/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:56:01 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/08 12:46:22 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;
	int		i;
	int		j;

	i = -1;
	j = 0;
	size = sizeof(s1[0]);
	result = malloc((ft_strlen(s1) * size) + (ft_strlen(s2) * size) + size);
	if (result == NULL)
		return (NULL);
	while (s1[++i] != 0)
	{
		result[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i] != 0)
	{
		result[j] = s2[i];
		j++;
	}
	result[j] = 0;
	return (result);
}
