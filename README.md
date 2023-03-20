# get_next_line - 42cursus

## Description 


Function that returns a line read from a file descriptor.

<img width="1192" alt="Screen Shot 2023-03-20 at 1 26 12 PM" src="https://user-images.githubusercontent.com/121127625/226339652-9d922240-dde5-4038-8dcb-4fee6e7113a3.png">

* Project developed in C language.
* The project compiles with the 'norma' (Norminette).
* This function will be added later to the libft created at the first project.
* Calling this get_next_line function repeatedly (for example, using a loop) will allow you to read the contents of the file pointed to by the file descriptor, line by line, to the end.
* This function will return the line that was just read. If there is nothing more to read or if an error has occurred, it will return NULL.
* The returned line will end with the character \n (line break), except if the end of the file has been reached and it does not end with a character \n(line break).

## Mandatory part

<p align="center">
  <img width="615" alt="Screen Shot 2023-03-20 at 1 33 59 PM" src="https://user-images.githubusercontent.com/121127625/226340103-20525693-6bf6-4f47-8a54-e500371ca17e.png">
</p>

The **function prototype** is: 
<p align="center">
  <b>
    char *get_next_line(int fd);
  </b>
</p>

**Requirements**:

* The program compiles with the -D BUFFER_SIZE=xx flag. This flag is used to determine the buffer size of the reads of the get_next_line() function.
* The program compiles with and without the flag (-D BUFFER_SIZE=xxx). By default its value will be 42.

**Forbidden**:
* Libft
* lseek
* Global variables

## Bonus part

The project is developed with a single static variable. 

It is able to manage multiple fd at the same time. That is to say,
if you receive three fd's available for reading (for example: 3, 4 and 5), you can use get_next_line once on fd 3, again on fd 4, and again on fd 5 alternately. And it does not lose the reading thread of each of the fd.
