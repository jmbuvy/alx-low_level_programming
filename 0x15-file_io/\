#include "main.h"

/**
 * append_text_to_file - Funct appending texts end of the file.
 * @filename: Pointer to files name.
 * @text_content: string to be added to file.
 * Return: 1on success , -1 on failure
 * If filename is NULL return -1, if it exists return 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
