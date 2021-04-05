#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function reads a text file and prints it to the POSIX standard output.
 *
 * @filename: file.
 * @letters: number of letters it should read and print.
 *
 * Return: Number of letters read and printed; 0 if write fail or filename is null.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
  int fd;
  ssize_t nread, nwrite;
  char *buffer;

  if (filename == NULL)
    return (0);

  buffer = malloc(letters * sizeof(char) + 1);
 
 if (!buffer)
    return (0);
  
fd = open(filename, O_RDONLY);
  if (fd == -1)
    {
      free(buffer);
      return (0);
    }
 
 nread = read(fd, buffer, letters);
if (nread == -1)
    {
      free(buffer);
      return (0);
    }

  nwrite = write(STDOUT_FILENO, buffer, nread);
  close(fd);
  free(buffer);

  if (nread == nwrite)
    return (nwrite);
  return (0);
 }
