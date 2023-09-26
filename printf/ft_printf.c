/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 09:50:24 by marvin            #+#    #+#             */
/*   Updated: 2023/09/26 09:50:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t	i;
	int		length;

	if (format == NULL)
		return (0);
	va_start(arg, format);
	i = 0;
	length = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			length = ft_format_handler(arg, format[i]);
		}
		else
			length = ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (length);
}

int	ft_format_handler(va_list arg, char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = ft_putchar((char)va_arg(arg, int));
	else if (format == 's')
		length = ft_putstr(va_arg(arg, char *));
	else if (format == 'p')
		length = ft_putptr(va_arg(arg, unsigned long), HEX_LW);
	else if (format == 'd' || format == 'i')
		length = ft_putnbr_base(va_arg(arg, int), DEC);
	else if (format == 'u')
		length = ft_putnbr_base(va_arg(arg, unsigned int), DEC);
	else if (format == 'x')
		length = ft_putnbr_base(va_arg(arg, unsigned int), HEX_LW);
	else if (format == 'X')
		length = ft_putnbr_base(va_arg(arg, unsigned int), HEX_UP);
	else if (format == '%')
		length = ft_putchar('%');
	return (length);
}
