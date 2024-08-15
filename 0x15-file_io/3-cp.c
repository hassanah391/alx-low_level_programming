#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message, const char *filename) {
    dprintf(STDERR_FILENO, message, filename);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to, rd, wr;
    char buffer[BUFFER_SIZE];
    
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1) {
        error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        wr = write(fd_to, buffer, rd);
        if (wr == -1 || wr != rd) {
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
        }
    }

    if (rd == -1) {
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(fd_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    if (close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    return 0;
}
