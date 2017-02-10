/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 20:06:39 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/24 20:06:40 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*chr;
	char		match;

	chr = NULL;
	match = (char)c;
	while (*s != '\0')
	{
		if (*s == match)
		{
			chr = s;
			s++;
		}
		else
			s++;
	}
	if (match == '\0')
		return ((char *)s);
	return ((char *)chr);
}
