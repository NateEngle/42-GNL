/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/29 19:44:34 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/25 19:35:29 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		num;
	size_t		destlen;
	char		*dst2;
	const char	*src2;

	dst2 = dst;
	src2 = src;
	num = size;
	while (num-- > 0 && *dst2 != '\0')
		dst2++;
	destlen = dst2 - dst;
	num = size - destlen;
	if (num == 0)
		return (destlen + ft_strlen(src2));
	while (*src2 != '\0')
	{
		if (num != 1)
		{
			*dst2++ = *src2;
			num--;
		}
		src2++;
	}
	*dst2 = '\0';
	return (destlen + (src2 - src));
}
