/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:04:02 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 19:52:45 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		if (big [i] == little[j])
		{
			while (big[i + j] == little[j] && i + j < len)
			{
				j++;
				if (!little[j])
					return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (0);
}
