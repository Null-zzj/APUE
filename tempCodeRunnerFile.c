/*********************************************
* @FileName: envir.c
* @Author: Null-zzj
* @Mail: zj.zhu.cn@gmail.com
* @CreatedTime: Sun Jul 02 21:13:00 2023
* @Descript:
*/

#include<apue.h>
#include<error.h>
#include<fcntl.h>

extern char** environ;

int main(int argc, char* argv[])
{
    for(int i = 0; i < 100; i ++)
    
        printf("%s\n", environ[i]);

    return 0;
}