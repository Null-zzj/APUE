#include<apue.h>
#include<error.h>
#include <signal.h>
#include<sys/wait.h>

int main()
{
    signal(SIGCLD, SIG_IGN);
    pid_t pid;
    for(int i = 0; i < 10; i++)
    {
        pid = fork();
        if(pid == 0)
        {
            exit(1);
        }
    }


    while(1);


}
