#include "apue.h"

int main()
{
    if(lseek(STDIN_FILENO, 0, SEEK_SET) != -1)
        printf("cannoy seek\n");
    else
        printf("seel ok!\n");
    exit(0);
}