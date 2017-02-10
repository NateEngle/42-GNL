/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:14:42 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/03 19:50:11 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	char			*sub;

	index = 0;
	if (!s)
		return (NULL);
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (len > 0)
	{
		sub[index] = s[start];
		len--;
		index++;
		start++;
	}
	sub[index] = '\0';
	return (sub);
}
