#include<apue.h>
#include<error.h>
#include<fcntl.h>

char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main()
{
    int fd;
    int ret;
    if((fd = creat("file.hole", FILE_MODE)) < 0)
        err_sys("creat error");
    
    if(ret = write(fd, buf1, 10) != 10)
        err_sys("write1 error");
   
    if(lseek(fd, 16384, SEEK_SET) < 0)
        err_sys("leek error");

    if(ret = write(fd, buf2, 10) != 10)
        err_sys("write2 error");
    exit(0);
}
