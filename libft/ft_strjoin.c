/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:32:26 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/28 11:30:31 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		joinlen;

	if (!(s1 && s2))
		return (0);
	joinlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(join = (char *)malloc(sizeof(char) * (joinlen))))
		return (0);
	ft_strcpy(join, s1);
	ft_strcat(join, s2);
	return (join);
}
