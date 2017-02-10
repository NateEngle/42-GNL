/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 21:48:03 by nengle-           #+#    #+#             */
/*   Updated: 2016/09/21 21:48:05 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long num;

	num = n;
	if (num < 0)
	{
		num = num * -1;
		ft_putchar_fd('-', fd);
	}
	if (num >= 10)
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putchar_fd(('0' + num % 10), fd);
	}
	if (num < 10)
		ft_putchar_fd(('0' + num % 10), fd);
}
