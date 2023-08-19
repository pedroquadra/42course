/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:58:22 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/11 18:47:45 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negative(long int n)
{
	long int	negative;

	if (n < 0)
		return (negative = 1);
	else
		return (negative = 0);
}

static int	ft_numlen(long int n)
{
	long int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long int	number;
	long int	negative;
	char		*string;
	long int	num_len;

	negative = ft_is_negative(n);
	number = n;
	if (negative == 1)
		number = number * -1;
	num_len = ft_numlen(number);
	string = malloc(sizeof(char) * (num_len + negative + 1));
	if (string == NULL)
		return (NULL);
	if (negative == 1)
		string[0] = '-';
	string[num_len + negative] = '\0';
	while (num_len > 0)
	{
		string[(num_len - 1) + negative] = (number % 10) + '0';
		number = number / 10;
		num_len--;
	}	
	return (string);
}
