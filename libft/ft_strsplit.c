/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:39:37 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/22 17:23:26 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		wordlen(char const *s, char c, int start)
{
	size_t			len;

	len = 0;
	while (s[start] != c && s[start] != '\0')
	{
		len++;
		start++;
	}
	return (len);
}

static size_t		wcnt(const char *s, char c)
{
	size_t			i;
	size_t			wordcount;

	i = 0;
	wordcount = 0;
	while (s[i])
	{
		if (s[i] == c && (ft_isprint(s[i + 1]) && s[i + 1] != c))
			wordcount++;
		i++;
	}
	if (ft_isprint(s[0]) && s[0] != c)
		wordcount++;
	return (wordcount);
}

static char			**free_big(char **big, size_t num)
{
	size_t			i;

	i = 0;
	while (i <= num)
	{
		free(big[i]);
		i++;
	}
	free(big);
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**big;
	unsigned int	i;
	size_t			num;

	i = 0;
	num = 0;
	if (s == 0 || c == 0)
		return (0);
	if (!(big = (char **)malloc((sizeof(char *) * (wcnt(s, c) + 1)))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			big[num] = ft_strsub(s, i, wordlen(s, c, i));
			if (!big[num])
				return (free_big(big, num));
			num++;
			i = i + wordlen(s, c, i);
		}
	}
	big[num] = NULL;
	return (big);
}
