/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 12:17:09 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/14 11:10:56 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *newmem;

	if (!(newmem = (void *)malloc(size)))
		return (NULL);
	ft_memset(newmem, 0, size);
	return (newmem);
}
