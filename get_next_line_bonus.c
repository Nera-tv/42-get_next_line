/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:06:01 by dvilard           #+#    #+#             */
/*   Updated: 2022/02/11 15:11:29 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_gnl_more(char **ret, char *str)
{
	char	*tmp;

	if (ft_strchr(str, '\n') >= 0)
	{
		*ret = ft_strdup(str, '\n');
		tmp = ft_strdup(&str[ft_strchr(str, '\n') + 1], '\0');
		free(str);
		str = tmp;
		return (str);
	}
	if (str && !str[0])
	{
		free(str);
		return (NULL);
	}
	*ret = ft_strdup(str, '\0');
	free(str);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*str = NULL;
	char		*ret;
	int			i;

	i = 1;
	if (read(fd, NULL, 0) < 0)
		return (NULL);
	while (ft_strchr(str, '\n') == -1 && i > 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
			return (NULL);
		buf[i] = '\0';
		str = ft_strjoin(str, buf);
	}
	ret = NULL;
	str = ft_gnl_more(&ret, str);
	return (ret);
}
