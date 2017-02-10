/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 17:32:48 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/29 17:32:51 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*dst2;
	unsigned char	*src2;

	chr = (unsigned char)c;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n > 0)
	{
		if ((*dst2++ = *src2++) == chr)
			return ((unsigned char *)dst2);
		n--;
	}
	return (NULL);
}
