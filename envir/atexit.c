/*********************************************
* @FileName: atexit.c
* @Author: Null-zzj
* @Mail: zj.zhu.cn@gmail.com
* @CreatedTime: Sun Jul 02 21:04:55 2023
* @Descript:
*/

#include<apue.h>
#include<error.h>
#include<fcntl.h>

static void my_exit1();
static void my_exit2();


int main(int argc, char* argv[])
{
    if(atexit(my_exit2) != 0)
        err_sys("regester func my_exit2 err");
    
    
    if(atexit(my_exit1) != 0)
        err_sys("regester func my_exit1 err");

    printf("main is done\n");


    return 0;
}

static void my_exit1()
{
    printf("first exit handler\n");
}
static void my_exit2()
{
    printf("second exit handler\n");
}
