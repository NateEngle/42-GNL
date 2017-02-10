/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/07 16:48:44 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/07 16:48:46 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*iterold;
	t_list	*iternew;

	if (lst == NULL || f == NULL)
		return (NULL);
	newlst = f(lst);
	iternew = newlst;
	iterold = lst->next;
	while (iterold)
	{
		iternew->next = f(iterold);
		iterold = iterold->next;
		iternew = iternew->next;
	}
	iternew = NULL;
	return (newlst);
}
