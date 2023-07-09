#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<signal.h>

void handler(int signum)
{
    printf("catch the sig: %d\n", signum);
}

int main()
{
    signal(SIGINT, handler);


    
    char buf[1024]= {0};
    int ret = read(STDIN_FILENO, buf, sizeof(buf));
    printf("%d\n", ret);


}
