#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char*	path = getcwd(NULL, 0);
	if (path == NULL)
	{
		perror("getcwd");
		exit(1);
	}
	printf("%s\n", path);
	free(path);
}
