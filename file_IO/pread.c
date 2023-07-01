#include <apue.h>
#include <error.h>
#include <fcntl.h>
int main()
{
    int fd;
    char buf[1024] = {0};
    if((fd = open("test.txt", O_RDONLY)) < 0)
        err_sys("open");
    int ret = pread(fd, buf, 1, 3);

    printf("%c\n", *buf);

    printf("%ld\n", lseek(fd, 0, SEEK_SET));




}
