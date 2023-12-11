#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: pointer to the name of the file
 * @text_content: pointer to the text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, len_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		len_w = write(fd, text_content, len);
		if (len_w == -1 || len != len_w)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

