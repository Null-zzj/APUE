/*************************************************************************
	@File Name: test.c
	@Author: Null-zzj
	@Mail:  
	@Created Time: Sat Jul  1 16:31:54 2023
 ************************************************************************/

#include<apue.h>
#include<error.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int fd = open("test.txt", O_RDWR | O_APPEND);
	
	lseek(fd, 3, SEEK_SET);
	char ch;
	read(fd, &ch, 1);
	printf("%c\n", ch);	
	write(fd, "a", 1);


	return 0;
}
