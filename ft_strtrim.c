/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:07:45 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/14 13:34:25 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		end;
	char		*ret;

	while (*s1 != 0 && ft_strchr(set, *s1) != NULL)
			s1++;
	end = ft_strlen(s1);
	while (end != 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	ret = ft_substr((char *)s1, 0, end + 1);
	return (ret);
}
