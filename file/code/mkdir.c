#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	if (mkdir("output", 0755) == -1)
	{
		perror("mkdir");
		exit(1);
	}
}
