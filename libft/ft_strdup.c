/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 16:19:04 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/27 16:19:05 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	index;
	char	*dup;

	index = 0;
	if (!(dup = (char *)malloc(ft_strlen(s1) + 1)))
		return (0);
	while (*s1)
	{
		dup[index] = *s1;
		index++;
		s1++;
	}
	dup[index] = '\0';
	return (dup);
}
