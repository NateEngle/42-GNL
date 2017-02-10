/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 19:51:44 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/16 14:39:48 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*str;
	unsigned char	chr;

	index = 0;
	str = (unsigned char *)b;
	chr = (unsigned char)c;
	while (len > 0)
	{
		str[index] = chr;
		index++;
		len--;
	}
	return (b);
}
