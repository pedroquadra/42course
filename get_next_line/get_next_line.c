/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:32:39 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/23 17:58:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	ft_putchar_fd(char *c, ssize_t line_len)
{
		return (write(1, c, line_len));
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = s;
	while (0 < n)
	{
		if (*ptr == c)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	static ssize_t	bytes_read;
	static ssize_t	line_len;
	static char	*string;

	if (fd == 0)
		return (NULL);
    bytes_read = 0;
	if (bytes_read == 0)
        bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0)
    {
		close (fd);
		return (NULL);
	}

	string = ft_memchr(buffer, '\n', bytes_read);
	if (string != NULL && string - buffer + 1 <= bytes_read)
	{
		line_len = string - buffer + 1;
        ft_putchar_fd(buffer, line_len);
        bytes_read = bytes_read - line_len;  
	} 
	return (NULL);
}

int main()
{   int fd;

    fd = open("pedro.txt", O_RDONLY);
    
get_next_line(fd);
get_next_line(fd);
get_next_line(fd);

}


