/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 16:47:24 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/07 16:47:26 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;

	node = *alst;
	while (node)
	{
		del(node->content, node->content_size);
		*alst = NULL;
		free(node);
		node = node->next;
	}
	free(*alst);
}
