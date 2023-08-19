/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:57:29 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 18:49:50 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elements, size_t size)
{
	char	*new_str;
	size_t	total_size;

	if (elements == 0 || size == 0)
		return (malloc(0));
	total_size = (elements * size);
	if (total_size > __INT_MAX__ || total_size / elements != size)
		return (NULL);
	new_str = malloc(total_size);
	if (new_str != NULL)
	{
		ft_memset(new_str, 0, total_size);
	}
	return (new_str);
}
