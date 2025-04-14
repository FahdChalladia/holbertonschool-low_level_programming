# C - File I/O

This repository contains tasks focused on implementing fundamental file operations in C using low-level system calls. It covers creating, reading, writing, appending to, and copying files, emphasizing the use of file descriptors, permissions, and proper error handling according to POSIX standards.

### Files

Each task is implemented in its own C file, addressing a specific aspect of file manipulation. A header file contains the necessary prototypes.

- `main.h` :
  Header file containing prototypes for all functions developed in the project and for `_putchar`.

- `0-read_textfile.c` :
  Function that reads a specified number of characters from a text file and prints them to the standard output.

- `1-create_file.c` :
  Function that creates a new file with specific permissions (`rw-------`) and writes given text content to it, truncating if the file already exists.

- `2-append_text_to_file.c` :
  Function that appends given text content to the end of an existing file without creating it if it doesn't exist.

- `3-cp.c` :
  Program that copies the content from one file to another, handling various errors and setting specific permissions (`rw-rw-r--`) for the destination file.

### Creator:

**Fahd Challadia**  
Projects from the week: 07-April 2025 - 13-April 2025 (C - File I/O)