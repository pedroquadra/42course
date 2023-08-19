/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:33:55 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 20:31:32 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= 48 && *str <= 57)
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * negative);
}
