# get_next_line
get_next_line Project in 42 Málaga Fundación Telefónica

<h1 align = center>antdelga get_next_line</h1>

> 42 Málaga Fundación Telefónica Cursus  3rd project.

This repository contains all archives for the project __get_next_line__ in the __School 42 Málaga core cursus__. It's a library of functions in __C language__ that allows to read a line from a file.

<h2 align = center>
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
	<span> · </span>
	<a href="#license">License</a>
</h2>

## About

This project is a __C library__ that allows to read a line from a file. The aim of this project is to improve programming skills. Also, we learn how to read from a file descriptor (fd) and we deal with static variables.
If you execute the get_next_line function inside a loop you can read all the lines from a file. The bonus exercise are also included. In bonus we adapt the code in order to 
be able to read from different fd simultaneously.
The code in this repository follows [the rules of the Norminette](https://github.com/42School/norminette).

## Index
* [`get_next_line`](https://github.com/ant6n16/get_next_line/blob/main/get_next_line.c) : Version without bonus features
* [`get_next_line_bonus`](https://github.com/ant6n16/get_next_line/blob/main/get_next_line_bonus.c) : Version with bonus features
* [`get_next_line_utils`](https://github.com/ant6n16/get_next_line/blob/main/get_next_line_utils.c) : Auxiliar functions
* [`get_next_line_utils_bonus`](https://github.com/ant6n16/get_next_line/blob/main/get_next_line_utils_bonus.c) : Auxiliar functions for bonus
* [`main`](https://github.com/ant6n16/printF/blob/main/ft_integer.c) : To test the program.
* [`test.txt`](https://github.com/ant6n16/get_next_line/blob/main/test.txt) : File we read from.

## Requirements
The library is written in __C language__ and needs the `gcc` compiler, with `<stdlib.h>`, `<stdio.h>`, `<unistd.h>`, `<limits.h>` and `<fcntl.h>` standard libraries to run.

# include <limits.h>

## Instructions

### 1. Download the repository

### 2. Compiling the code

Use the order: gcc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <files>.c. You can choose different BUFFER_SIZE values. I encourage you to try several configurations!

### 3. Using it in your code

To use the library functions in your code, simply include this header:
```
#include "get_next_line.h"
```

## Testing
This library have been tested with the normal and strict mode of [Francinette](https://github.com/xicodomingues/francinette) to the date of 22/12/2022.

## License
This work is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License](http://creativecommons.org/licenses/by-nc-sa/4.0/).

You are free to:
* Share: copy and redistribute the material in any medium or format.
* Adapt: remix, transform, and build upon the material.

Under the following terms:
* Attribution: You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
* NonCommercial: You may not use the material for commercial purposes.
* ShareAlike: If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

<h3 align = right>Share the content!</h3>
