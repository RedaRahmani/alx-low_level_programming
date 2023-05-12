#include "main.h"

/**
 * append_text_to_file - ajouter un text a la fin de fichier.
 * @filename: pour pointer sur le nom de fichier.
 * @text_content: c'est le string pour le ajouter a la fin de fichier.
 *
 * Return: si la fonction et echouer va le retourner - -1.
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, l);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

