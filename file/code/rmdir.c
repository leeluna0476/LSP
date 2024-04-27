#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	if (rmdir("output") == -1)
	{
		perror("rmdir");
		exit(1);
	}
}
