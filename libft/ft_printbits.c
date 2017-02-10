/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 23:26:45 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/14 11:09:10 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbits(unsigned char c)
{
	size_t count;

	count = 0;
	while (count <= 7)
	{
		if ((c >> (7 - count)) & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		count++;
	}
	ft_putchar('\n');
}
