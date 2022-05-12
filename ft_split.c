/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:27:37 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/18 13:02:53 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getarraycount(char const *s, char c)
{
	int	i;
	int	is_new_word;
	int	count;

	i = 0;
	is_new_word = 0;
	count = 0;
	if (!s)
		return (0);
	else if (ft_strncmp(s, "", ft_strlen(s)) == 0)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != c && is_new_word == 0)
		{
			is_new_word = 1;
			count++;
		}
		else if (s[i] == c)
			is_new_word = 0;
		i++;
	}
	return (count);
}

static char	*write_word(const char *s, int start, int finish)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char		**ret;
	size_t		i;
	int			j;
	int			start;

	ret = (char **)malloc(sizeof(char *) * (getarraycount(s, c) + 1));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			ret[j] = write_word(s, start, i);
			start = -1;
			j++;
		}
		i++;
	}
	ret[j] = 0;
	return (ret);
}
