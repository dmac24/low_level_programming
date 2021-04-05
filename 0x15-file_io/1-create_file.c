#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - function that create a file.
 *
 * @filename: File.
 * @text_content: String to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)

{
int fd, nwrite;
int i = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";
fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

if (fd == -1)
return (-1);

while (text_content[i] != '\0')
i++;
nwrite = write(fd, text_content, i);
if (nwrite == -1)
return (-1);
return (1);

}
