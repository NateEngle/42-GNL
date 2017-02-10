/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:52:59 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/03 17:08:26 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;
	char	*dst2;
	char	*src2;

	index = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!(dst || src))
		return (0);
	while (n > 0)
	{
		dst2[index] = src2[index];
		index++;
		n--;
	}
	return ((void *)dst2);
}
