/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 15:52:36 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/01 15:52:38 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	index;
	int		len;
	char	*map;
	char	*str;

	index = 0;
	if (!(s && f))
		return (NULL);
	str = (char *)s;
	len = ft_strlen(s);
	if (!(map = (char *)malloc(len + 1)))
		return (0);
	while (str[index])
	{
		map[index] = f(str[index]);
		index++;
	}
	map[index] = '\0';
	return (map);
}
