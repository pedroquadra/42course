/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:57:15 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:31:10 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;
	size_t			i;

	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (a1[i] != a2[i])
			return ((int)(a1[i] - a2[i]));
		i++;
	}
	return (0);
}
