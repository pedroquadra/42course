/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:41:17 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 19:53:07 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	new_string = malloc(sizeof(char) * len + 1);
	if (new_string == NULL)
		return (NULL);
	while (i < len)
	{
		new_string[i] = s[start];
		i++;
		start++;
	}
	new_string[i] = '\0';
	return (new_string);
}
