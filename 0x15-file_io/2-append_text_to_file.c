#include "main.h"

/**
 * append_text_to_file - Appends text to file end.
 * @filename: Pointer to a file name.
 * @text_content: Adds the string tho end of the file.
 *
 * Return: If function fails or filename is NULL - -1.
 *         If file do not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
