#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
int main()
{
	int fd;
	char *line;

	fd = open("test.txt",O_RDONLY);
	line = get_next_line(fd);
	while(line != 0)
	{
		line = get_next_line(fd);	
		printf("%s",line);
	}

}
