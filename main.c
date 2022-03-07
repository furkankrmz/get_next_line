
#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	main(void)
{
	char *line;
	int fd;
	int fd2;     //for bonus
	//char *line2; //for bonus

	
	fd2 = open("test2.txt" , O_RDONLY);
	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
		line = get_next_line(fd);
	printf("%s", line);
	/*	line2 = get_next_line(fd2); //for bonus
	printf("%s", line2);
		line2 = get_next_line(fd2); //for bonus
	printf("%s", line2);
*/
}
