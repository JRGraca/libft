/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbatista <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:39:29 by jbatista          #+#    #+#             */
/*   Updated: 2022/03/15 13:52:00 by jbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (*lst)
	{
		if (*lst->next == NULL)
		{
			*lst->next = new;
			new->next = NULL;
		}
		*lst = *lst->next;
	}
}*/

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*elem;

	if (alst != NULL && *alst != NULL)
	{
		elem = *alst;
		elem = ft_lstlast(*alst);
		elem->next = new;
		return ;
	}
	*alst = new;
}
