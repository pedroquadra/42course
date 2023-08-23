#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

char ft_putchar_fd(char *c, ssize_t line_len) {
    return (write(1, c, line_len));
}

void *ft_memchr(const void *s, int c, size_t n) {
    const char *ptr;

    ptr = s;
    while (0 < n) {
        if (*ptr == c) {
            return ((void *)ptr);
        }
        ptr++;
        n--;
    }
    return (NULL);
}

char *get_next_line(int fd) {
    static char buffer[BUFFER_SIZE];
    static ssize_t bytes_read = 0;
    ssize_t line_len;

    if (bytes_read == 0) {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read <= 0) {
            close(fd);
            return NULL;
        }
    }

    char *string = ft_memchr(buffer, '\n', bytes_read);
    if (string != NULL && string - buffer + 1 <= bytes_read) {
        line_len = string - buffer + 1;
        ft_putchar_fd(buffer, line_len);
        bytes_read -= line_len;
        return buffer;
    }

    bytes_read = 0;
    return NULL;
}

int main() {
    int fd = open("pedro.txt", O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) {
        // Aqui você pode fazer algo com a linha lida, se necessário
    }

    return 0;
}
