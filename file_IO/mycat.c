#include<apue.h>
#include<error.h>
#define BUFFSIZE 4096

int main()
{
    int n;
    char buf[BUFFSIZE];

    while((n = read(STDIN_FILENO, buf, sizeof(buf))) > 0)
    {
        
       if(write(STDOUT_FILENO, buf, n) != n)
            err_sys("write error");
    }

    
    if(n < 0)
    {
        err_sys("read error");
    }

}