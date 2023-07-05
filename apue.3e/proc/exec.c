/*********************************************
* @FileName: exec.c
* @Author: Null-zzj
* @Mail: zj.zhu.cn@gmail.com
* @CreatedTime: Mon Jul 03 14:33:32 2023
* @Descript:
*/

#include<apue.h>
#include<error.h>
#include<fcntl.h>
#include<sys/wait.h>


int main(int argc, char* argv[])
{
    pid_t pid;
    if((pid = fork()) < 0)
        err_sys("fork");
    else if(pid == 0)
    {
        execlp("ls", "ls", "-l", NULL);

    }else
    {

        wait(NULL);

    }




    return 0;
}