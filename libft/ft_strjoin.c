/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:16:31 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:09:31 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

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
