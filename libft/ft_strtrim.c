/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:37:41 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/02 22:06:09 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		index;
	size_t		len;
	char		*new;
	char		*nul_str;

	index = 0;
	if (!s)
		return (0);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	if (*s == '\0')
		return (nul_str = ft_strnew(0));
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (index < len)
	{
		new[index] = *s;
		index++;
		s++;
	}
	new[index] = '\0';
	return (new);
}
