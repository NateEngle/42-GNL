/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 13:53:17 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/26 13:53:41 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		count;
	int			foundlen;
	const char	*found;

	found = big;
	if (!*little)
		return ((char *)big);
	while (len > 0 && *found)
	{
		count = 0;
		foundlen = len;
		while (found[count] == little[count] && (foundlen > 0))
		{
			if (little[count + 1] == '\0')
				return ((char *)found);
			count++;
			foundlen--;
		}
		found++;
		len--;
	}
	return (NULL);
}
