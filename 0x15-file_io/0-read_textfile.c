#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - this program reads a text file to print POSIX
 * @filename: parameter for filename to read
 * @letters: parameters to read and print number of letters
 * Return: it returns actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, t;
	char *buff;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
