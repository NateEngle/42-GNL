/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 13:51:23 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/26 13:51:39 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	while (len > 0)
	{
		if (src < dst)
		{
			*(dst2 + (len - 1)) = *(src2 + (len - 1));
			len--;
		}
		else
		{
			*dst2++ = *src2++;
			len--;
		}
	}
	return (dst);
}
