/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 15:36:44 by nengle-           #+#    #+#             */
/*   Updated: 2016/10/01 15:36:48 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	unsigned int index;

	index = 0;
	if (s && f)
	{
		while (s[index])
		{
			f(index, &s[index]);
			index++;
		}
	}
}
