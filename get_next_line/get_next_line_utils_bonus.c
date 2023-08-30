/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:29:16 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/30 18:42:09 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s != '\0' && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
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

	if (src == NULL)
		return (NULL);
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
	int		k;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
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
