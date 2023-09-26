/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:25:38 by marvin            #+#    #+#             */
/*   Updated: 2023/09/26 10:25:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define DEC "0123456789"
# define HEX_LW "0123456789abcdef"
# define HEX_UP "0123456789ABCDEF"

size_t	ft_strlen(const char *s);
int		ft_printf(const char *format, ...);
int		ft_format_handler(va_list arg, char format);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long nb, char *base);
int		ft_putnbr_base(long int nb, char *base);

#endif
