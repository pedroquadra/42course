/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:09:40 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 18:50:51 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = s;
	while (0 < n)
	{
		if (*ptr == (char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (0);
}
