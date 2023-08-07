#inlude "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr, cl;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			argv[2]), exit(99);

	rd = 1024;
	while (rd == 1024)
	{
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);

		wr = write(fd_to, buffer, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
	}

	cl = close(fd_from);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_from), exit(100);

	cl = close(fd_to);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_to), exit(100);

	return (0);
}
