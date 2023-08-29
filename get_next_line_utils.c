/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:36:19 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/29 17:10:26 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	if (dest == NULL || src == NULL)
		return (NULL);
	index = 0;
	while ((src[index] != '\0') && (index < n))
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*new_src;
	int		i;
	int		k;

	i = 0;
	while (src[i])
	{
		i++;
	}
	new_src = malloc(sizeof(char) * (i + 1));
	if (new_src == NULL)
		return (NULL);
	k = 0;
	while (src[k])
	{
		new_src[k] = src[k];
		k++;
	}
	new_src[k] = '\0';
	return (new_src);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i;
	int		j;
	int		k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	new_string = malloc(sizeof(char) * (i + j + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_string[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		new_string[i] = s2[k];
		i++;
		k++;
	}
	new_string[i] = '\0';
	return (new_string);
}
