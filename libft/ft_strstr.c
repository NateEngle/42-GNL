/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 11:41:34 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/26 11:41:52 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t		count;
	const char	*found;

	found = big;
	if (!*little)
		return ((char *)big);
	while (*found)
	{
		count = 0;
		while (found[count] == little[count])
		{
			if (little[count + 1] == '\0')
				return ((char *)found);
			count++;
		}
		found++;
	}
	return (NULL);
}
