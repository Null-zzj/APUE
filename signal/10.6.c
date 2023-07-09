#include <apue.h>
#include <error.h>
#include <pwd.h> 
#include <stdio.h>
#include <unistd.h>

static void my_alarm(int signo)
{
    struct passwd* rootptr;

    printf("in signal handler\n");
    if((rootptr = getpwnam("root")) == NULL)
    {
        err_sys("getpwnam(root) err");
    }
    alarm(1);
    printf("out of handler\n");
}


int main()
{
    struct passwd *ptr;
    signal(SIGALRM, my_alarm);
    alarm(1);

    for(;;)
    {
        if((ptr = getpwnam("zzj")) == NULL)
            err_sys("getpwnam err");
        if(strcmp(ptr->pw_name, "zzj") != 0)
            printf("return value corrupted!, pw_name = %s\n", ptr->pw_name);
    }




}
