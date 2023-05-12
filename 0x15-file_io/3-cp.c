#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allouer 1024 bit pour buffer.
 * @file: le nom de fichier buffer.
 *
 * Return: un pointeur pour buffer.
 */
char *create_buffer(char *file)
{
	char *bufer;

	bufer = malloc(sizeof(char) * 1024);

	if (bufer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufer);
}

/**
 * close_file - fermer fichier descriptrice.
 * @fd: le fichier descriptrice pour deveni fermer.
 */
void close_file(int fd)
{
	int C;

	C = close(fd);

	if (C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies de contenu d'un fichier a un autre fichier.
 * @argc: le nombre des arguments donner pour cette programe.
 * @argv: un tableau de pointeur.
 *
 * Return: 0 avec succer.
 *
 * Description: si l'argument count incorrect - exit code 97.
 * If file_from il n'existe pas ou vous pouver pas l'ouvrir - exit code 98.
 * If file_to vous ne pouver pas de le creer ou de le modifier - exit code 99.
 * If file_to or file_from peut pas reste fermer - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	r = read(fr, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(fr, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(fr);
	close_file(to);

	return (0);
}

