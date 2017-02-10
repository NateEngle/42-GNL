/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 08:15:38 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/23 08:15:39 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				diff;
	unsigned char	*s12;
	unsigned char	*s22;

	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	diff = 0;
	while (n > 0 && (*s12 || *s22))
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
