/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nengle- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:25:45 by nengle-           #+#    #+#             */
/*   Updated: 2016/11/28 13:30:41 by nengle-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				read_from_fd(char **extra, const int fd)
{
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*endl;
	char		*templine;

	while ((endl = ft_strchr(*extra, '\n')) == NULL)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		if (ret < 0)
			return (-1);
		if (ret == 0)
			break ;
		templine = ft_strjoin(*extra, buf);
		free(*extra);
		*extra = templine;
	}
	if (endl != NULL)
		return (1);
	return (0);
}

int				read_extra(char *extra, char ***line)
{
	char		*endl;

	if ((endl = ft_strchr(extra, '\n')) != NULL)
	{
		*endl = '\0';
		**line = ft_strdup(extra);
		ft_memmove(extra, &endl[1], ft_strlen(&endl[1]) + 1);
		return (1);
	}
	if (ft_strlen(extra) > 0)
	{
		**line = ft_strdup(extra);
		*extra = '\0';
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static char	*extra = NULL;

	if (!(line) || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	if (extra == NULL)
		extra = ft_strnew(0);
	if (read_from_fd(&extra, fd) != -1)
		return (read_extra(extra, &line));
	else
		return (-1);
	if (read_extra(extra, &line) == 0)
		close(fd);
	return (0);
}
