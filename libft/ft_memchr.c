/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:38:00 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/25 20:38:02 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	chr;
	unsigned char	*str;

	chr = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == chr)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
