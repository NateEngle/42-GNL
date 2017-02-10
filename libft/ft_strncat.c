/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 22:04:44 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/27 22:04:57 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	index;

	len = ft_strlen(s1);
	index = 0;
	if (!s1)
		return (0);
	while (s2[index] && index < n)
	{
		s1[len] = s2[index];
		index++;
		len++;
	}
	s1[len] = '\0';
	return (s1);
}
