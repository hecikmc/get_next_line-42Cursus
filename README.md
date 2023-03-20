# ft_printf - 42cursus

## Description 

Creating my own printf function replicating the behavior of the original. 

<img width="1026" alt="Screen Shot 2023-03-16 at 7 17 50 PM" src="https://user-images.githubusercontent.com/121127625/225715875-814b48ea-0c32-4a5f-8d28-5e972dabe38a.png">

* Project developed in C language.
* The project compiles with the 'norma' (Norminette).
* Makefile is included which compiles the files source to the required output (.a) with the -Wall, -Werror and -Wextra flags.


## Mandatory part
<p align="center">
  <img width="651" alt="Screen Shot 2023-03-16 at 7 21 36 PM" src="https://user-images.githubusercontent.com/121127625/225716759-68e1f10c-19b4-4556-bca7-4a2f4c938d02.png">
</p>

The **function prototype** is: 
<p align="center">
  <b>
    int ft_printf(char const *, ...);
  </b>
</p>

Requirements:
* The buffer management of the original printf() is not implemented.
* The following data conversions are contemplated: **cspdiuxX %**

    * **%c** Prints a single character.
    * **%s** Prints a string (as defined by default in C).
    * **%p** The void * pointer given as an argument is printed in hexadecimal format.
    * **%d** Prints a decimal number (base 10).
    * **%i** Prints a base 10 integer.
    * **%u** Prints an unsigned decimal (base 10) number.
    * **%x** Prints a hexadecimal number (base 16) in lower case.
    * **%X** Prints a hexadecimal number (base 16) in upper case.
    * **% %** to print the percentage symbol.
