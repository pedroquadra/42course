/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:16:19 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:31:15 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src1;
	char		*dest1;
	size_t		i;

	i = 0;
	src1 = src;
	dest1 = dest;
	if (!(dest || src))
		return (NULL);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
