/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:27:22 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 18:52:11 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
