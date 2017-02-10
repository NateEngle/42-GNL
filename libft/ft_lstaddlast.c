/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 23:27:04 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/12 23:34:13 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddlast(t_list **alst, t_list *new)
{
	t_list *head;

	head = *alst;
	while (head->next != NULL)
		head = head->next;
	head->next = new;
	new->next = NULL;
}
