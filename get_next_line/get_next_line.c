/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:32:39 by pedanton          #+#    #+#             */
/*   Updated: 2023/08/21 14:58:03 by pedanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}


char	*get_next_line(int fd)
{
	char *line;
	size_t len;
    ssize_t bytesRead;

	if (fd == -1)
		return (0);
	bytesRead = read(fd, line, sizeof(line) - 1);
	line[bytesRead] = '\0';
    i = 0;
    while (line[i] != '\0')
    {
        ft_putchar_fd(line[i], fd);
        i++;
    }

	close(fd);
	return (0);
}

int main()
{   int fd;

    fd = open("pedro.txt", O_RDONLY);
    get_next_line(fd);
}
