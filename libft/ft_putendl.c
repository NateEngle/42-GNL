/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 16:35:01 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/21 16:35:18 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *str)
{
	size_t index;

	index = 0;
	if (str)
	{
		while (str[index])
		{
			ft_putchar(str[index]);
			index++;
		}
		ft_putchar('\n');
	}
}
