/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 21:21:40 by nengle-           #+#    #+#             */
/*   Updated: 2016/12/06 10:51:09 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;
	void	*data;
	size_t	data_size;

	data_size = content_size;
	if (content == NULL)
		data_size = 0;
	if (!(data = (void *)malloc((data_size))))
		return (NULL);
	if (!(head = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		data = NULL;
	else
		ft_memcpy(data, content, content_size);
	head->content = data;
	head->content_size = data_size;
	head->next = NULL;
	return (head);
}
