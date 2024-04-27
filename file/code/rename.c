#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	if (rename("output", "input") == -1)
	{
		perror("rename");
		exit(1);
	}
	return 0;
}
