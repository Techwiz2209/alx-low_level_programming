#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count, write_count, close_status;
	char *buf;
	ssize_t actual_count;

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

	read_count = read(fd, buf, letters);
	buf[letters] = '\0';
	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1)
	{
		free(buf);
		return (0);
	}
	if (write_count != read_count)
		return (0);

	close_status = close(fd);
	if (close_status == -1)
		return (0);

	free(buf);
	actual_count = (ssize_t)write_count;
	return (actual_count);
}
