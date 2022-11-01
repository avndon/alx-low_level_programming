#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 *
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rfd, wfd;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	rfd = read(fd, buf, letters);

	if (rfd == -1)
		return (0);

	wfd = write(STDOUT_FILENO, buf, rfd);

	if (wfd == -1 || rfd != wfd)
		return (0);

	free(buf);
	close(fd);

	return (wfd);
}
