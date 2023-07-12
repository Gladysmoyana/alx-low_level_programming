#include "main.h"

/**
 * create_file - Creates  file.
 * @filename: A pointer to the name of the file to create.
 *
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int gt, or, count = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	gt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	or = write(gt, text_content, count);

	if (gt == -1 || or == -1)
		return (-1);
	close(gt);
	return (1);
}
