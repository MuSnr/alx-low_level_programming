#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_r, len_w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	len_r = read(fd, buf, letters);
	if (len_r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	len_w = write(STDOUT_FILENO, buf, len_r);
	if (len_w == -1 || len_r != len_w)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (len_w);
}


