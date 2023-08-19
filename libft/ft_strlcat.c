/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:05:20 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:10:46 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dest + 1)
	{
		while (src[i] != '\0' && (len_dest + i) < size - 1)
		{
			dest[len_dest + i] = src[i];
			i++;
		}
	}
	dest[len_dest + i] = '\0';
	if (size > len_dest)
		return (len_dest + len_src);
	else
		return (len_src + size);
}
