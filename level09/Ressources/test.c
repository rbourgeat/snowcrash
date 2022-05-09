#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    int fd = open(argv[1], O_RDONLY);

    unsigned char a[100];

    int max = read(fd, a, 100);
    for (int i = 0; i < max - 1; i++)
        printf("%c", a[i] - i);
    // printf("\n");
    // for (int i = 0; i < max - 1; i++)
    //     printf("%d(%d) ", a[i] - i, a[i]);
}