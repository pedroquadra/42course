/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:10:35 by marvin            #+#    #+#             */
/*   Updated: 2023/09/26 10:10:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long nb, char *base)
{
	int	length;
	int	base_length;

	length = 0;
	base_length = ft_strlen(base);
	if (nb == 0)
		return (0);
	if (nb >= (unsigned long)base_length)
		length = ft_putptr((nb / base_length), base);
	else
		length = ft_putstr("0x");
	length = ft_putchar(base[nb % base_length]);
	return (length);
}

int	ft_putnbr_base(long int nb, char *base)
{
	int	length;
	int	base_length;

	length = 0;
	base_length = ft_strlen(base);
	if (nb < 0)
	{
		length = ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= base_length)
		length = ft_putnbr_base((nb / base_length), base);
	length = ft_putchar(base[nb % base_length]);
	return (length);
}
