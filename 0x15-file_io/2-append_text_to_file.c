#include "main.h"

/**
 * append_text_to_file - program that appends textat end of file
 * @filename: parameter for a pointer to name file
 * @text_content: paramter for the string to add
 * Return: it returns -1 if file is NULL; otherwise 1
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
