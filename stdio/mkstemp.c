#include<apue.h>
#include<error.h>
#include<fcntl.h>

void make_temp(char* template);

int main(int argc, char* argv[])
{
    char good_template[] = "./tempXXXXXX"; // right way
    char *bad_template = "./tempXXXXXX";  // bad way
    
    printf("trying to create first temp file...\n");
    make_temp(good_template);
    while(1);
    printf("trying to create second temp file...\n");
    make_temp(bad_template);
    exit(0);
    
    
    return 0;
}

void make_temp(char *template)
{
    int fd;
    struct stat buf;

    if((fd = mkstemp(template)) < 0)
        err_sys("can't create temp file");
    
    printf("temp name = %s\n", template);

    close(fd);

    if(stat(template, &buf))
    {
        if(errno == ENONET)
            printf("file doesn't exist\n");
        else
            err_sys("sat failed");
    }
    else
    {
        printf("file exists\n");
        unlink(template);
    }






}

