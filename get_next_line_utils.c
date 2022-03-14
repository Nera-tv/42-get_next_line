/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:29:35 by dvilard           #+#    #+#             */
/*   Updated: 2022/02/11 15:11:19 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *tab)
{
	int	i;

	if (!tab)
		return (0);
	i = 0;
	while (tab && tab[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof (char) * (len1 + len2 + 1));
	if (!str)
		return (0);
	i = -1;
	j = -1;
	while (++i < len1)
		str[i] = s1[i];
	while (++j < len2)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	free(s1);
	return (str);
}

int	ft_strchr(const char *s, char c)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == c)
		return (i);
	return (-1);
}

char	*ft_strdup(const char *s, char c)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	if (s[len] == c && c != '\0')
		len++;
	dup = malloc(sizeof (char) * (len + 1));
	if (!dup)
		return (0);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
