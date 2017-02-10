/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 15:39:48 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/28 20:42:49 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_num_dig(int nbr)
{
	unsigned int	n;
	size_t			count;

	count = 0;
	if (nbr < 0)
	{
		n = (unsigned int)-nbr;
		count++;
	}
	else
		n = (unsigned int)nbr;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char			get_char(int n, size_t num)
{
	unsigned int	dig;
	char			ret;

	dig = (unsigned int)n;
	while ((num - 1) > 0)
	{
		dig = dig / 10;
		num--;
	}
	ret = (dig % 10) + '0';
	return (ret);
}

static char			*get_string(size_t num, char *str, int n)
{
	size_t			count;

	count = 0;
	if (n < 0)
	{
		str[count] = '-';
		count++;
		num--;
		n = n * -1;
	}
	while (num > 0)
	{
		str[count] = get_char(n, num);
		count++;
		num--;
	}
	str[count] = '\0';
	return (str);
}

char				*ft_itoa(int nbr)
{
	char			*str;
	size_t			num;

	num = get_num_dig(nbr);
	if (nbr == 0 || nbr == -0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(num)))
			return (NULL);
		str = get_string(num, str, nbr);
	}
	return (str);
}
