/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:44:09 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/27 16:44:13 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			diff;
	unsigned char	*s12;
	unsigned char	*s22;

	diff = 0;
	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (n > 0)
	{
		diff = *s12 - *s22;
		if (diff == 0)
		{
			s12++;
			s22++;
		}
		else
			return (diff);
		n--;
	}
	return (diff);
}
