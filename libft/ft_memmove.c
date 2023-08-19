/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:44:54 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:31:19 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src1;
	char		*dest1;

	src1 = src;
	dest1 = dest;
	if (!(dest || src))
		return (NULL);
	if (src1 > dest1)
		return (ft_memcpy(dest1, src1, n));
	while (n--)
		dest1[n] = src1[n];
	return (dest);
}
