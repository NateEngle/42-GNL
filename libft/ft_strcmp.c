/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:31:56 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/22 16:31:59 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				diff;
	unsigned char	*s12;
	unsigned char	*s22;

	s12 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	diff = 0;
	while (*s12 || *s22)
	{
		diff = *s12 - *s22;
		if (diff == 0)
		{
			s12++;
			s22++;
		}
		else
			return (diff);
	}
	return (diff);
}
