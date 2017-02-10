/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 15:15:51 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/22 15:15:53 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	if (!*s2)
		return (s1);
	while (s1[count])
		count++;
	while (s2[index])
	{
		s1[count] = s2[index];
		index++;
		count++;
	}
	s1[count] = '\0';
	return (s1);
}
