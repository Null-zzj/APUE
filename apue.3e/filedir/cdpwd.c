#include "apue.h"
#include "error.h"
int
main(void)
{
	char	*ptr;
	size_t		size;

	if (chdir("../") < 0)
		err_sys("chdir failed");

	ptr = path_alloc(&size);	/* our own function */
	if (getcwd(ptr, size) == NULL)
		err_sys("getcwd failed");

	printf("cwd = %s\n", ptr);
	exit(0);
}
