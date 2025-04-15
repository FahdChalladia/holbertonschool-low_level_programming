#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

/**
 * struct file_descriptors - Struct to hold file descriptors
 * @from: file descriptor for source file
 * @to: file descriptor for destination file
 */
typedef struct file_descriptors
{
int from;
int to;
} file_descriptors_t

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
