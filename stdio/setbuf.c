#include<apue.h>
#include<error.h>
#include<fcntl.h>
#include <stdio.h>



int main(int argc, char* argv[])
{   
    FILE* fp;
    char buf[10];
    setvbuf(fp, buf, _IOFBF, sizeof(buf));    

    return 0;
}