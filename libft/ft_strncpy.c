/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:53:46 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/22 13:53:48 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *dst2;

	dst2 = dst;
	while (n > 0 && *src != '\0')
	{
		*dst2 = *src;
		dst2++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dst2++ = '\0';
		n--;
	}
	return (dst);
}
