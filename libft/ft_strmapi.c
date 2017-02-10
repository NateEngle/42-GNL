/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 17:09:10 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/01 17:09:11 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	char			*str;
	unsigned int	index;
	unsigned int	len;

	if (!(s && f))
		return (0);
	len = ft_strlen(s);
	str = (char *)s;
	if (!(map = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	index = 0;
	while (str[index])
	{
		map[index] = f(index, str[index]);
		index++;
	}
	map[index] = '\0';
	return (map);
}
