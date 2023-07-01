/*************************************************************************
	@File Name: fileflag.c
	@Author: Null-zzj
	@Mail:  
	@Created Time: Sat Jul  1 15:31:20 2023
 ************************************************************************/

#include<apue.h>
#include<error.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	int val;
	
	if( argc != 2)
		err_quit("usage: cmd <descriptor#>");
	
	if((val = fcntl(atoi(argv[1]), F_GETFL, 0)) < 0 )
		err_sys("fcntl err for fd %d", atoi(argv[1]));
	switch (val & O_ACCMODE)
	{	
		case O_RDONLY:
			printf("readonly\n"); break;
		case O_WRONLY:
			printf("writeonly\n"); break;
		case O_RDWR:
			printf("read writr\n"); break;
		default:
			printf("unknow access mode");		
	}

	
	


	return 0;
}
