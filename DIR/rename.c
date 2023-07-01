#include <apue.h>
#include <error.h>
#include <fcntl.h>
int main()
{
    int ret = rename("txt.", "123");
    if(ret < 0)
    {
        perror("rename");
    }
    



}