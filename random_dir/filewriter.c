#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    int filedes = open("filledfile.txt", O_RDWR | O_CREAT | O_TRUNC, S_IRWXU);

    write(filedes, "line", 5);
    close(filedes);
    return 0;
}
